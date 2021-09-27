#include<stdio.h>

int main()
{
    
    int rpm = 3000, sec = 60, deg = 360, d;
    
    printf("Enter rpm:");
    scanf("%d", &rpm);
    printf("Enter seconds:");
    scanf("%d", &sec);
    printf("Enter degree:");
    scanf("%d", &deg);
   
    
    d = rpm / sec * deg; 
    printf("rpm / sec * deg = %d \n", d);
    d = rpm / sec * deg; 
    printf("%d degrees per second \n", d);
    return 0;
}