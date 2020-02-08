////////////simple drive forward
////////////and turn right code

#include <kipr/botball.h>

int main()
{
  create_connect();////////connects wombat to irobot
  
  create_drive_direct(1200, 1200);//////commas separates the speeds the left and right motors
  ////////create_drive_direvt(Left, Right);
  
  msleep(3000);/////sets the time for how long you want to have the create drive foward
  
  create_drive_direct(1200, -1200);////////uses the same drive function but turns when you give a negative value to one of the motors
  
  msleep(2000);//////set the time for the irobot to turn
  
  create_disconnect();//////disconnects from the irobot
  
  return 0; 
}
