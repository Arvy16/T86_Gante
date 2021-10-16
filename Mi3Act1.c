#include <stdio.h>

int main()
{
    int temp;
    printf("Input Temperature: ");
    scanf("%d", &temp);

    if(temp < 0){
    printf("A Freezing Weather");
    }
    else if(temp > 0 && temp < 10){
    printf("A Very Cold Weather");
    }
    else if(temp > 10 && temp < 20){
    printf("A Cold Weather");
    }
    else if(temp > 20 && temp < 30){
    printf("Normal Temperature");
    }
    else if(temp > 30 && temp < 40){
    printf("Its A Hot Weather");
    }
    else if(temp > 40){
    printf("Its A Very Hot Weather");
    }
}
