#include <stdio.h>
#include <stdlib.h>
int fibo(num){
    //fibo de 0 ou 1
    if(num <= 1)
        return 0;
    //fibo de 2
    else if(num == 2)
        return 1;
    //fib dos numeros posteriores ser� a soma dos dois anteriores a ele
    else
    //fib do termo 5 de FIBONACCI --> (5-1)=4(fib de 4 � 2) |+| (5-2)=3(fib de 3 � 1), logo 2+1 � "3"!!
        return fibo(num - 1) + fibo(num - 2); 
}
void main(){
    /* 5. Fa�a um programa que calcule a sequ�ncia de Fibonacci, usando uma
    fun��o recursiva; */
    int z,i,a;
    printf("Insira quantos digitos FIBONACCI: ");
    scanf("%d", &z);
    //serve para determinar o meu "A" no pr�ximo comando
    i=z-1; 
    //"A" come�a valendo "1"
    //Estrutura de repeti��o na quantidade estipulada
    for (a = z-i; a < z; a++){ 
        printf("%d\n",fibo(a)); 
    } 
}