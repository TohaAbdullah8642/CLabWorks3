/*Practice Name:  basic and gross salary calculating
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main (){
    float m_salary;

    printf("Please enter the Basic Salary of the Employee > ");
    scanf("%f",&m_salary);

if(m_salary <= 10000 && m_salary > 0){
    printf("The Gross Salary of The Employee is > %2.f", (m_salary+ (m_salary * 0.20)+ (m_salary * 0.80)));
    }else if(m_salary <= 20000 && m_salary > 0){
    printf("The Gross Salary of The Employee is > %2.f", (m_salary+ (m_salary * 0.25)+ (m_salary * 0.90)));
    }else if(m_salary > 20000){
    printf("The Gross Salary of The Employee is > %2.f", (m_salary+ (m_salary * 0.30)+ (m_salary * 0.95)));
    }else{
    printf("You've entered the Invaild in the salary Input! Please check and try it again!!");
    }

    return 0;
}
