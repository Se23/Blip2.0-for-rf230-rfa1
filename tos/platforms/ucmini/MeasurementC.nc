/*
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Arch Rock Corporation nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * ARCHED ROCK OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE
 */

/**
 * MeasurementC is a top-level access component for the getting sensor data
 * of the ucmini platform, including the SHT21 humidity and temperature sensor, 
 * air pressure, light and voltage. Because this component represents one physical
 * device, simultaneous calls to read temperature and humidity will be
 * arbitrated and executed in sequential order. Feel free to read both
 * at the same time, just be aware that they'll come back
 * sequentially.
 *
 * @author Sebastian Scheibe <Sebastian.Scheibe@imms.de>
 * @version $Revision: 1.0 $ $Date: 2013-12-09 15:46:18 $
 */

generic configuration MeasurementC() {

  //provides interface Read<uint16_t> as AtmegaTemperature;
  provides interface ReadNow<uint16_t> as BatteryVoltage;

  //provides interface Read<uint16_t> as Ms5607Temperature;
  //provides interface Read<uint32_t> as Ms5607Pressure;

  provides interface Read<uint16_t> as Temperature;
  provides interface Read<uint16_t> as Humidity;
  provides interface Read<uint16_t> as Light;
}
implementation {

   components new TemperatureC() as Sht21Temp, new HumidityC() as Sht21Hum;
  Temperature = Sht21Temp.Read;
  Humidity = Sht21Hum.Read;

  //components new AtmegaTemperatureC() as AtTempSensor, new AtmegaVoltageC() as AtVoltSensor;
  //AtmegaTemperature = AtTempSensor.Read; 
  //BatteryVoltage = AtVoltSensor.Read; 
  components new AtmegaVoltageNowC() as VoltageNow;

  BatteryVoltage = VoltageNow; 

  components new LightC() as PhotoSensor;
  Light = PhotoSensor.Read;

  //components new PressureC() as Ms5607PressSensor, new Ms5607TemperatureC() as Ms5607TempSensor, new Ms5607CalibrationC();
  //Ms5607Pressure = Ms5607PressSensor.Read;
  //Ms5607Temperature = Ms5607TempSensor.Read;

}

