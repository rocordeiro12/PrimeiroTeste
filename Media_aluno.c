#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int ra;
    float nota [3];
    float media;
};

int main(){
    struct aluno Rodrigo;
    Rodrigo.ra = 1234;
    Rodrigo.nota[0] = 5.5;
    Rodrigo.nota[1] = 7.2;
    Rodrigo.nota[2] = 7.0;
    Rodrigo.nota[3] = 9.2;
    Rodrigo.media = (Rodrigo.nota[0]+Rodrigo.nota[1]+Rodrigo.nota[2]+Rodrigo.nota[3])/4;
    printf("RA: %d\n", Rodrigo.ra);
    printf("media: %2f\n", Rodrigo.media);
    printf("\n");
    printf("\n");
    system("Pause");
    return 0;
    
    
}
