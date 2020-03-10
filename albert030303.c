#include <kipr/wombat.h>

int cuppler = 2000;
int counter2 = 0;

//int barrier = don't know

////int left_port = ;
////int right_port = ;

int main()
{
    
    power(1000, 2750);///MOVES ROBOT TO PVC CUPPLER TO LOWER THE RAMP
    starter_mode();// LOWERS THE RAMP AND BRINGS CUPPLER TO STARTING BOX
    ///////////////
    //////////////
    msleep(500);///WAITS HALF A SECOND TO GO BACK TO THE RAMP AND BEGIN TO ASCEND
    
    ramp();/// STOPS WHEN IT DETECTS THE PVC BARRIER AND STOPS AND TURNS TO FACE THE RAMP
	
    return 0;
}

void turn_left( int time2 )///SIMPLE TURN LEFT FUNCTION turn_left(5000);
{
	mav(0, 500);///////////////RIGHT MOTOR
	mav(1, -500);//////////////LEFT MOTOR
	msleep(time2);
}

void turn_right( int time )/// SIMPLE TURN RIGHT FUCTION turn_left(5000);
{
	mav(0, -500);//////////RIGHT MOTOR
    mav(1, 500);///////////LEFT MOTOR
    msleep(time);
}
	

void power(int speed, int time)/// SIMPLD MOVE FORWARD FUNCTION power(1500, 5000);
{
	mav(0, speed);/// RIGHT MOTOR
	mav(1, speed);/// LEFT MOTOR
	msleep(time);
}

void barrier( void )
{
    while (counter2 <= 100)/// RUNS THE FEW LINES OF CODE UNTIL IT DETECTS THE PVC BARRIER
	{
        if(analog(1) <= 2000)/// ANALOG MEANS PORT 1 IN THE ANALOG SECTIONS ON THE WOMBAT
        {
			counter2+100;/// STOPS THE WHILE LOOP FROM GOING ON FOREVER
            turn_left(2500);/// TURNS LEFT TO FACE THE RAMP
        }
    }
}

void starter_mode ( void )
{
    
	if(analog(0) < cuppler)/// SENSOR DETECTS THE PVC CUPPLER WHEN COMES OUT OF THE STARTING BOX
	{   
		power(0, 1000);/// STOPS THE ROBOT FOR ONE SECOND
		/////////////
           
		enable_servos(0);
        set_servo_position(0, 979);/// LOWERS SERVO HOOK TO GRAB THE CUPPLER
        ////////////////
        power(-500, 7500);/// GOES BACK TO THE STARTING BOX
        ////////////////
        turn_left(2500);/// MAKES A 90 DEGREE TURN TO THE LEFT TO DROP THE CUPPLER
        freeze(0);///TELLS RIGHT MOTOR TO WAIT 
        freeze(1);///TELLS LEFT MOTOR TO WAIT
        msleep(500);///TIME TO WAIT
        ////////////////
        set_servo_position(0, 0);/// RAISES SERVO HOOK TO DROP CUPPLER IN THE STARTING BOX        msleep(1000);
        /////////////////
        turn_right(2150);/// MAKES A 90 DEGREE RIGHT TURN TO GO BACK TO THE RAMP
        ao();
    }
}

//void line_follow( int speed, int time, int value)
//{
	//int counter = 0;
	
	//while(counter <= 10)
	//{
		//mav(0, speed);
		//mav(1, speed);
		//msleep(time);
		
		//if(analog(port) >= 1500)
		//{
			
			

void ramp( void )
{
    power(4750);/// DRIVES TO THE PVC BARRITER TO GET READY TO GO UP THE RAMP
	
	if(analog(1) > 2500)/// DETECT THE PVC BARRIER 
	{
		turn_left(2300);///TURNS LEFT TO FACE THE RAMP
        power(1000, 9500);/// GOES UP THE RAMP
		/////////////////////// STILL NEED TO MAKE A LINE FOLLOWER FUNCTION
	}
	
}







