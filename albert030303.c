#include <kipr/wombat.h>

int cuppler = 2000;
int counter = 0;

int main()
{
    
    mav(0, 1000);
    mav(1, 1000);
    msleep(2750);
    
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
            msleep(1000);
			
            enable_servos(0);
            set_servo_position(0, 979);
            //msleep(500);
            ///////////////
            mav(0, -500);
            mav(1, -500);
            msleep(6000);
            /////////////////
            mav(0, 500);
            mav(1, -500);
            msleep(1500);
            ////////////////
            mav(0, 500);
            mav(1, 500);
            msleep(1500);
            
            
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
void barrier_stop(void)
{
	int counter=0
        while(counter<=100)
        {
            
            if(analog(1) <= 2800)
            {
                mav(0,-1200);
                mav(1,-1200);
                msleep(2000);
            }
}


