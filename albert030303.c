#include <kipr/wombat.h>

int cuppler = 2000;
int counter2 = 0;

//int barrier = don't know

////int left_port = ;
////int right_port = ;

int main()
{
    
    power(1000, 2750);
    starter_mode();
    ///////////////
    //////////////
    msleep(1000);
    
    ramp();
	
    return 0;
}

void turn_left( int time2 )
{
	mav(0, 500);///////////////TURN
	mav(1, -500);//////////////LEFT
	msleep(time2);
}

void turn_right( int time )
{
	mav(0, -500);//////////TURN
    mav(1, 500);///////////RIGHT
    msleep(time);
}
	

void power(int speed, int time)
{
	mav(0, speed);
	mav(1, speed);
	msleep(time);
}

void barrier( void )
{
    while (counter2 <= 100)
	{
        if(analog(1) <= 2000)
        {
			counter2+100;
            turn_left(2500);
        }
    }
}

void starter_mode ( void )
{
    
	if(analog(0) < cuppler)
	{   
		power(0, 1000);
		/////////////
           
		enable_servos(0);
        set_servo_position(0, 979);
        ////////////////
        power(-500, 7500);
        ////////////////
        turn_left(2500);
        freeze(0);
        freeze(1);
        msleep(500);
        ////////////////
        set_servo_position(0, 0);
        msleep(1000);
        /////////////////
        turn_right(2150);
        ao();
    }
}

void line_follow( int speed, int value)
{
	int counter = 0;
	
	while(counter <= 10)
	{
		if(analog(

void ramp( void )
{
	
    mav(0, 1000);
    mav(1, 1000);
    msleep(4750);
	
	if(analog(1) > 2500)
	{
		//mav(0, 500);
		//mav(1, -500);
		turn_left(2300);
        power(1000, 9500);
	}
	
}







