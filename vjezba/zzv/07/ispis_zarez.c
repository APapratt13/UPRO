#include <stdio.h>

int main(void){
    int n, polje[10];
    printf("Upisite 10 cijeih brojeva > ");
    for (int i=0; i<10; i++)
    {
        scanf("%d", &n);
        polje[i]=n;
    }

    for (int i=0; i<9; i++)
    {
        printf("%d, ", polje[i]);
    }
    printf("%d", polje[9]); 

    return 0;
}
