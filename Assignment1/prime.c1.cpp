#include<stdio.h> 
int main() 
{ 
   int i, j, n; 
   printf("Name: Bhaswati Das, Class: MCA_1A, Roll:16\n"); 
   printf("Enter the number: "); 
   scanf("%d", &n); 
   printf("Prime numbers are: \n"); 
   for(i=2;i<n;i++) 
   { 
    int c=0; 
    for(j=1;j<=i;j++) 
    { 
     if(i%j==0) 
     { 
      c++; 
     } 
    } 
    if(c==2) 
    { 
     printf("%d",i); 
    } 
   } 
   printf("\n"); 
   return 0; 
} 
