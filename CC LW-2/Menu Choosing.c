/*Practice Name: Resturant Menu choosing By Coding into it
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){

    int Choice;

printf("The Item List Of the foods. Please Select > \n 1. Noodles\n 2. Pasta\n 3. Pizza\n 4. meatball\n 5. Beef Chaap\n Please Enter The Number You want to Order > ");
scanf("%d", &Choice);

if(Choice==1){
    printf("\nYou've selected the Noodles, Thank you.");
} else if(Choice==2){
    printf("\nYou've selected the Pasta, Thank You.");
} else if(Choice==3){
    printf("\nYou've Selected The Pizza, Thank You.");
}   else if(Choice==4){
    printf("\nYou've Selected The Meatball, Thank You.");
}   else if(Choice==5){
    printf("\nYou've Selected The Beef Chaap, Thank You.");
    }else{
    printf("\n Invalid Choosing! Press Any Key to Close!");
}
    return 0;

}
