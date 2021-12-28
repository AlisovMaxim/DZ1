#include <stdio.h>
#include <math.h>

int main(void){
    char c[64];
    int i, x = 0;
    scanf("%s", &c);
    for(i = 0; i < strlen(c); i++) x += ((int)c[i] - 48) * ((int)pow(2, strlen(c) - (i+1)));
    printf("%d\n", x);
    return 0;
}
