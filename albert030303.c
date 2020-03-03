#include <kipr/wombat.h>

int cuppler = 2000;
int counter = 0;

//int barrier = 
    

int main()
{
    
    mav(0, 1000);
    mav(1, 1000);
    msleep(2750);
    
    starter_mode();
    ///////////////
    barrier();
    
    printf("Hello World\n");
    return 0;
}

void barrier( void )
{
    int counter2 = 0;
    while (counter2 <= 100)
	{
        if(analog(1) <= 2000)
        {
			counter2+100;
            mav(0, 500);
            mav(1, -500);
            msleep(2500);
        }
    }
}

void starter_mode ( void )
{
    
		if(analog(0) < cuppler)
        {   
            mav(0, 0);
            mav(1, 0);
            msleep(1000);
			
            enable_servos(0);
            set_servo_position(0, 979);
            
            mav(0, -500);
            mav(1, -500);
            msleep(7500);
            ////////////////
            mav(0, 500);
            mav(1, -500);
            msleep(2500);
            freeze(0);
            freeze(1);
            msleep(500);
            ////////////////
            set_servo_position(0, 0);
            msleep(1000);
           	
            mav(0, -500);
            mav(1, 500);
            msleep(3500);
            ao();
            mav(0, 500);
            mav(1, 500);
            msleep(4000);
        }
}





