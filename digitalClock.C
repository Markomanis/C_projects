#include <stdio.h>
#include <windows.h>

/* Scanf example:
    05
    11
    40
    */ // this will start the clock from the time 05:11:40

int main()
{
    int time;
    int hours, minutes, seconds;
    int delay = 1000; // we will add a delay of 1000 milliseconds which we will call Sleep function
    

    printf("Set time: \n");
    //printf("\n");
    scanf("%d%d%d", &hours, &minutes, &seconds);

    if(hours > 12 || minutes > 60 || seconds > 60){

        printf("ERROR\n");
        printf("You need to set time according to hours:minutes:seconds");
        exit (0);
    }

    while(1){ //This is an infinite loup
        seconds++;
        if(seconds > 59){
            minutes++;
            seconds = 0;
        }
        if(minutes > 59){
            hours++;
            minutes = 0;
        } 
        if(hours > 11){
               hours = 0;
          }
           
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d", hours, minutes, seconds );
        Sleep(delay); // This function slows down the while loop and make it look like a real clock
        system("cls"); // this function clears the screen
        
    
    }


    return 0;
}