/***************************************************************
   Motor driver function definitions - by James Nugen
   Edited by Bryan Ribas - R1B4Z01D
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD  5
  #define LEFT_MOTOR_BACKWARD   6
  #define RIGHT_MOTOR_FORWARD   9
  #define LEFT_MOTOR_FORWARD    10
  #define RIGHT_MOTOR_ENABLE    12
  #define LEFT_MOTOR_ENABLE     13
#endif

#ifdef SMART_DRIVE_DUO
  #define RIGHT_MOTOR_ENABLE    4
  #define RIGHT_MOTOR_SPEED     5
  #define LEFT_MOTOR_ENABLE     7
  #define LEFT_MOTOR_SPEED      6
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
