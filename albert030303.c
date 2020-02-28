#include <kipr/wombat.h>

int cuppler = 2000;
int counter = 0;

int main()
{
    
    mav(0, 1000);
    mav(1, 1000);
    msleep(2400);
    
    starter_mode();
    
    
    printf("Hello World\n");
    return 0;
}


void starter_mode ( void )
{
    
    while( counter <= 100)
    {
        if(analog(0) <= cuppler)
        {   
            mav(0, 0);
            mav(1, 0);
			
            enable_servos(0);
            set_servo_position(0, 979);
            //msleep(500);
            
            mav(0, -500);
            mav(1, -500);
            msleep(3000);
            
            
            counter+=100;
            
        }
    }
}

void cup_mover ( void )
{
	mav(0, -1200);
	mav(1, 1200);
	msleep(2500);
	freeze(1000);
	mav(0, -1200);
	mav(1, -1200);
	msleep(2500);
}

void up_the_ramp( void )
{
	int counter = 0;
	
	while( counter <= 100)
	{
		mav(0, 1000);
		mav(1, 1000);
		msleep(5000);
		
		if(analog(1) <= 2000)
		{
			freeze(2000);
			mav(0, -500);
			mav(1, -500);
			msleep(3000);
			freeze(1500);
			
			mav(0, -500);
			mav(1, 500);
			msleep(2500);
			
			int ramp_method = 12;
			
		else
		{
			mav(0, 1000);
			mav(1, 1000);
			msleep(5000);
		}	
	}	
}
