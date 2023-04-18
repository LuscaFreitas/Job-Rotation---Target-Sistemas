#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int fibo, atual = 0, ant = 0, prox = 0, cont = 0;
       
    printf("Digite um Número para Verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &cont);
       
    for( int i = 0; fibo <= cont+1; i++){
           
            ant = atual;
            atual = fibo;
            fibo = atual + ant;
           
           if(fibo == 0)
                fibo++;
        
            if(fibo == cont){
                   printf("%d Pertence a sequencia de Fibonacci", cont); 
                   break;
            }
            
       }
       
       if(fibo != cont){
               printf("%d Não pertence a sequencia de Fibonacci", cont);
           }
       
        return 0;
}