# Calculadora
#include <stdio.h>
#include <math.h>
// estrutura inicial calculadora
//função adição
float somar(float num1, float num2){
    return num1 + num2;
}
// Função subtração
float subtrair(float num1, float num2){
    return num1 - num2;
}
// Função multiplicação
float multiplicar(float num1, float num2){
    return num1 * num2;
}
// Função Divisão
float dividir(float num1, float num2){
    return num1 / num2;
}
// Função potencia
float potenciar(float num1, float num2){
    return pow(num1,num2);
}
// Função porcentagem
float porcentagem(float num1){
    return (num1 / 100);
}
//função de escolha de operação
void escolherCalculo(char operador, float num1, float num2){
    switch(operador){
        case '+':
            printf("Valor da soma é %.2f",somar(num1,num2));
        break;
	    case '-':
	            printf("Valor da subtração é %.2f",subtrair(num1,num2));
	        break;
	    case '*':
	            printf("Valor da multiplicação é %.2f",multiplicar(num1,num2));
	        break;
	    case '/':
	            printf("Valor da divisao é %.2f",dividir(num1,num2));
	        break;
	    case '^':
	            printf("Valor da potencia é %.2f",potenciar(num1,num2));
	        break;
	    case '%':
	            printf("Valor da porcentagem é %.2f",porcentagem(num1));
	        break;
}
}
//função para mostrar calculadora na tela

//função principal
#include <iostream>
#include <stdio.h>

int main() {
    float valor1, valor2;
    char operador;
    //printf("%.0f", value);
    printf("Por favor, digite um numero que deseja: ");
    scanf("%f",&valor1);
    fgetc(stdin);
    printf("Qual o calculo deseja fazer: ");
    scanf("%c",&operador);
    if(operador != '%'){
    scanf("%f",&valor2);
	}			
	escolherCalculo(operador, valor1,valor2);
    
    return 0;
}
