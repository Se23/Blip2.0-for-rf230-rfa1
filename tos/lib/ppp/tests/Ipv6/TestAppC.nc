/* Copyright (c) 2010 People Power Co.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the People Power Corporation nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * PEOPLE POWER CO. OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE
 *
 */

#include "ppp.h"

/** Demonstration of a PPP daemon application that negotiates and
 * maintains an RFC5072 IPv6 over PPP connection.
 *
 * The red LED indicates that the PPP link is down; the green LED
 * indicates that it is up.  Upon receipt of an IPv6 packet, the blue
 * LED toggles, and the number of octets in the packet is printed over
 * the PPP link.
 *
 * Use a standard Linux PPP daemon, or the osianpppd script, to form
 * the connection.  You can only see the printf data if your ppp
 * daemon has the necessary patch to add that protocol.
 *
 * @author Peter A. Bigot <pab@peoplepowerco.com>
 */
configuration TestAppC {
} implementation {
  components TestP;

  components MainC;
  TestP.Boot -> MainC;

  components LedC;
  TestP.LinkUpLed -> LedC.Green;
  TestP.LinkDownLed -> LedC.Red;
  TestP.PacketRxLed -> LedC.Yellow;

  /* The basic daemon,  No network control protocols. */
  components PppDaemonC;
  TestP.Ppp -> PppDaemonC;

  /* Hook up the serial infrastructure. */
  components DefaultHdlcUartC;
  PppDaemonC.HdlcUart -> DefaultHdlcUartC;
  PppDaemonC.UartControl -> DefaultHdlcUartC;

  /* Link in RFC5072 support for both the control and network protocols */
  components PppIpv6C;
  PppDaemonC.PppProtocol[PppIpv6C.ControlProtocol] -> PppIpv6C.PppControlProtocol;
  PppDaemonC.PppProtocol[PppIpv6C.Protocol] -> PppIpv6C.PppProtocol;
  PppIpv6C.Ppp -> PppDaemonC;
  PppIpv6C.LowerLcpAutomaton -> PppDaemonC;
  TestP.Ipv6LcpAutomaton -> PppIpv6C;
  TestP.PppIpv6 -> PppIpv6C;

  /* Link in the custom protocol for printf support */
  components PppPrintfC;
  PppPrintfC.Ppp -> PppDaemonC;
  PppDaemonC.PppProtocol[PppPrintfC.Protocol] -> PppPrintfC;
}


