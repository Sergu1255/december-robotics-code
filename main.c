#include <kipr/wombat.h>
#include <stdbool.h>
//left is port 0
// right is port 3

int e = 0;
bool touch = false;

void square_up(){
    while (touch == false){
        motor(0,-60);
        motor(3,-60);
        if ((digital(0) ==1) && (digital(1) == 1)){
            touch = true;
        }
    }
    
}


int main()
{
    motor(0,50);
    motor(3,20); //turns away from the start box
    msleep(4500);
    
    square_up(); //strighten ups
    
    
    motor(0,80);
    motor(3,80); //goes stright towards the cups
    msleep(4400);
    
    while (e < 1){ // turns to get the cups
    
        motor(0,50);
        motor(3,0);
        msleep(3750);
        e ++;
    
     
    
    }
    
    return 0;
}
