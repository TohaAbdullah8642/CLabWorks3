/*Practice Name: Detecting About if Number is positive or negative or neutral by coding in it
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main (){

float num;

printf("Please enter Your Number > ");
scanf("%f",&num);

if (num > 0){
        printf("The number is Positive",num);
    }else if (num < 0){
        printf("The number is Negative",num);
    }else if (num==0){
    printf ("The number is neutral",num);
}
    return 0;
}
