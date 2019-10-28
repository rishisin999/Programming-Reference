#include <stdio.h>
#include <ctype.h>

int achar_tam(char *frase){
    
    int i;
    
    while(frase[i]!='\0'){
        i++;
    }
    
    return i;
}
void maiuscula(char *frase, int tam){
    
    int i;

    for(i=0; i<tam; i++){
    frase[i] = toupper(frase[i]);
    }
}
void tirar_espacos1(char *frase, int tam){
    
    int i, j;
    
    for(i=0; i<tam; i++){
        while(frase[i]<65 || frase[i]>90){
            for(j=i; j<tam; j++){
                frase[j]=frase[j+1];
            }
            tam--;
        }
    }
}
void tirar_espacos2(char *inversa, int tam){
    
    int i, j;
    
    for(i=0; i<tam; i++){
        while(inversa[i]<65 || inversa[i]>90){
            for(j=i; j<tam; j++){
                inversa[j]=inversa[j+1];
            }
            tam--;
        }
    }
}
int main(void) {
    
    char frase[1000000], inversa[1000000];
    int tam, ultima, i=0, aux=0;
    
    scanf("%[^\n]", frase);
    tam=achar_tam(frase);
    maiuscula(frase, tam);
    
    ultima=tam-1;
    while(frase[i]!='\0'){
        inversa[i]=frase[ultima];
        ultima--;
        i++;
    }
    inversa[i]='\0';
    
    tirar_espacos1(frase, tam);
    tirar_espacos2(inversa, tam);
    
    for(i=0; frase[i]!='\0'; i++){
        if(frase[i]==inversa[i]){
            aux++;
        }
    }
    if(aux==i){
        printf("It's palindrome\n");
    }
    else{
        printf("It's not palindrome\n");
    }
    
    return 0;
}