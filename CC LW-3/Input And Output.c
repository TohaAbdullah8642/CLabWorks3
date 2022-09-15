/*Practice Name: Describe the N Value
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){;

    float num;

printf("Please Enter The Number > ");
scanf("%f",&num);

if(num>0){
    printf("The value of n is 1");
}else if(num<0){
    printf ("The value of n is -1");
}else if(num==0){
    printf ("The value of n is 0");
}else{
    printf ("You've Entered Invalid Number!");
    }

 return 0;
}
