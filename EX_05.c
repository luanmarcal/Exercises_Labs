#include <stdio.h>
#include <stdlib.h>
int fibo(num){
    //fibo de 0 ou 1
    if(num <= 1)
        return 0;
    //fibo de 2
    else if(num == 2)
        return 1;
    //fib dos numeros posteriores será a soma dos dois anteriores a ele
    else
    //fib do termo 5 de FIBONACCI --> (5-1)=4(fib de 4 é 2) |+| (5-2)=3(fib de 3 é 1), logo 2+1 é "3"!!
        return fibo(num - 1) + fibo(num - 2); 
}
void main(){
    /* 5. Faça um programa que calcule a sequência de Fibonacci, usando uma
    função recursiva; */
    int z,i,a;
    printf("Insira quantos digitos FIBONACCI: ");
    scanf("%d", &z);
    //serve para determinar o meu "A" no próximo comando
    i=z-1; 
    //"A" começa valendo "1"
    //Estrutura de repetição na quantidade estipulada
    for (a = z-i; a < z; a++){ 
        printf("%d\n",fibo(a)); 
    } 
}