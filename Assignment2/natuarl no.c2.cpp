#include <stdio.h> 
int sum(int n)  
{ 
  if (n > 0) 
    return n + sum(n - 1); 
  else 
    return n; 
} 
 
int main()  
{ 
  int a; 
  printf("Name: Bhaswati Das, Class: MCA_1A, Roll:16\n");     
  printf("Enter a positive integer: "); 
  scanf("%d", &a); 
  printf("Sum of natural no. is  = %d", sum(a)); 
  return 0; 
}
