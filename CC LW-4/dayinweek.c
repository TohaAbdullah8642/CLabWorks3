/*Practice Name: Naming the week from the day
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){;
    int DayNum;

    printf("Please enter The Number of the day in a Week (1 to 7) > ");
    scanf("%d",&DayNum);

        if(DayNum == 1){
            printf("The Day Is Saturday");
        }else if (DayNum == 2){
            printf("The Day Is Sunday");
        }else if (DayNum == 3){
            printf("The Day Is Monday");
        }else if (DayNum == 4){
            printf("The Day Is Tuesday");
        }else if (DayNum == 5){
            printf("The Day Is Wednesday");
        }else if (DayNum == 6){
            printf("The Day Is Thursday");
        }else if (DayNum == 7){
            printf("The Day Is Friday");
        }else{
            printf("You've entered the Invalid Number! Please Enter the Week number and Try Again");
        }

        return 0;
}
