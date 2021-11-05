#include <stdio.h>

int main()
{
    int a,b;

    for(a = 1; a <= 9; a++){
        for(int b = a; b <= 9; b++){
            printf("%d", b);
        }
        printf("\n");
    }
    return 0;
}
