
/* "Copyright (c) 2000-2003 The Regents of the University of California.
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement
 * is hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY
 * OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 */

/**
 * CounterSecond32C provides at 32-bit counter at one tick per second.
 *
 * @author Cory Sharp <cssharp@eecs.berkeley.edu>
 * @author Peter A. Bigot <pab@peoplepowerco.com>
 * @see  Please refer to TEP 102 for more information about this component and its
 *          intended use.
 * @note TSecond is an extension to TEP 102 with the obvious semantics.
 */
    //ÄNDERUNGEN FÜR ATM128RFA1
configuration CounterSecond32C
{
  provides interface Counter<TSecond,uint32_t>;
}
implementation
{ 	//bit_shift_right in TransformCounterC:
	//msp430, TMilli: 5
	//msp430, TSecond: 15
	//atmrfa1, Tmilli: 6
	//atmrfa1, TSecond: 6//oder 16 oder 18???

	components new TransformCounterC(TSecond, uint32_t, T62khz, uint32_t, 6, uint8_t);
	Counter = TransformCounterC;

	components Counter62khz32C;
	TransformCounterC.CounterFrom -> Counter62khz32C;
}
