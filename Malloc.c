#include <stdio.h>
#include <stdlib.h>
int main(){
    int *pi;
    pi = (int *) malloc(sizeof(int));
    puts("Digite um numero :");
    scanf("%d", pi);
    printf("\nVocê digitou o numero %d\n", *pi);
    free(pi);
    printf("\n");
    printf("\n");
    system("PAUSE");
    return 0;
}