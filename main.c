#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int z=1;z<100;z++){
    int n=z-1;
    int g = 1;
    for(int l = 0;l<z;l++ ){
        if (z%l==0){
            g=0;
            break;
        }
    }
            if (g==1){
                printf(z,"is prime");
                break;
            }

    }
    printf("Hello world!\n");
}
