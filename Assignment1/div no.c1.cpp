#include <stdio.h> 
int main() 
{ 
    int num; 
    printf("Name: Bhaswati Das, Class: MCA_1A, Roll:16\n");     
    printf("Enter any number: "); 
    scanf("%d", &num); 
    if((num % 5 == 0) && (num % 11 == 0) && (num>100 ) && (num<500)) 
    { 
        printf("Number is divisible by 5 and 11 and in the range."); 
    } 
    else 
    { 
        printf("Number is not divisible by 5 and 11 and not in the range."); 
    } 
    return 0; 
}
