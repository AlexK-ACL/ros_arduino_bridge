/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/
/*
 the wiring between the L298 motor driver and arduino board is defined in motor_driver.h in the firmware as follow:
 */
#ifdef L298_MOTOR_DRIVER // Arduino pins // Motor driver pin names // For L293D Module
  #define RIGHT_MOTOR_BACKWARD 5         // IN4 // Green
  #define LEFT_MOTOR_BACKWARD  6         // IN1 // Blue
  #define RIGHT_MOTOR_FORWARD  9         // IN3 // Purple
  #define LEFT_MOTOR_FORWARD   10        // IN2 // White
  // Optional for L298N
  #define RIGHT_MOTOR_ENABLE   12
  #define LEFT_MOTOR_ENABLE    13
#endif
/*
 wire them this way or change them if you want, and make sure that the L298 motor driver is defined then compile and upload the firmware.
 */
void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
