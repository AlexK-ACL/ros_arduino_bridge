/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
/* For speed, the code is directly addressing specific Atmega328p ports and interrupts, making this implementation Atmega328p (Arduino Uno) dependent. (It should be easy to adapt for other boards/AVR chips though.)
   To use the on-board wheel encoder counters, connect your wheel encoders to Arduino Uno(Nano) as follows:
*/

#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A PD2  // Arduino UNO pin 2
  #define LEFT_ENC_PIN_B PD3  // Arduino UNO pin pin 3
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A PC4  // Arduino UNO pin pin A4
  #define RIGHT_ENC_PIN_B PC5  // Arduino UNO pin pin A5
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

