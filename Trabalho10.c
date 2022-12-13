#include <stdio.h>
#include <stdlib.h>

int main(){

     //Variáveis que podem ser usadas
     unsigned int x[200];                          //define que os inteiros nao terão sinal e o limite do vetor de 200 numeros
     int y;                                        //Variavel responsavel por receber o valor inserido pelo usuario
     int w;                                        //Responsavel por indicar a posição no vetor x na função de impressão dos valores
     int j;                                        //Responsavel por indicar a posição no vetor x na função de armazenamento dos valores
     int i;                                        //Usado como contador para os laços de repetição
     int z;                                        //Não foi utilizada
     int k;                                        //Não foi utilizada

     
     i=0;
     while(i<200){                                 //Contador para setar os valores nas posições do vetor x[200] como 0
         x[i] = 0;                                 //Define o valor da posição i do vetor como 0
         i++;
     }
    //Função de leitura e armazenamento dos valores
     z = 0;
     i = 0;
     printf("Digite números entre 0 e 5000: \n"); //printa a mensagem de feedback para inserção dos numeros
     while(y != -1){                              //Laço de repetição responsavel por verificar se o valor inserido é -1 para terminar a função de inserir e passar para a de imprimir
       scanf("%d", &y);                           //Faz a leitura do valor inserido pelo usuario
       j = y / 32;                                //Calcula a posição do vetor que armazena um numero cujo bit na posição Y será verificado
       if((y!=-1)&&(y>=0 && y<= 5000)){           //Faz a comparação se o Y atende aos parametros pré estabelecidos pelo codigo de ser difernte de -1 e entre 0 e 5000
           x[j] = x[j] | (1 << (y-(32*j)));       //Realiza a atribuição do valor "j" no vetor utilizandoa operação OR bit a bit.
           if(y>i){                               //Faz a verificação se o valor do I é maior que o Y para adicionar em ordem crescente
            i = y;                                //atribui o valor de Y para a posição I do vetor
        }
       }
     }
     //Função de impressão dos valores inserido no vetor
     y = 0;
     w = 0;
     printf("Números Digitados: \n");             //printa a mensagem de feedback para apresentar os numeros
     while(y<=i){                                 //Laço de repetição responsavel por verificar se o valor inserido é menor ou igual ao valor do contador
       if((x[w] >> (y-(32*w))) & 1){              //Verifica se o bit determinado por "y" está definido no número armazenado na posição "w" do vetor
         printf("%d\n", y);                       //printa o valor de y
       }
       y++; 
       w = y / 32;                                //Calcula a posição do vetor que armazena um numero cujo bit na posição Y será verificado
     }

  return 0;  
}
