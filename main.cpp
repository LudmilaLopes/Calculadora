#include <stdio.h>
#include <math.h>
// estrutura inicial calculadora
//fun��o adi��o
float somar(float num1, float num2){
    return num1 + num2;
}
// Fun��o subtra��o
float subtrair(float num1, float num2){
    return num1 - num2;
}
// Fun��o multiplica��o
float multiplicar(float num1, float num2){
    return num1 * num2;
}
// Fun��o Divis�o
float dividir(float num1, float num2){
    return num1 / num2;
}
// Fun��o potencia
float potenciar(float num1, float num2){
    return pow(num1,num2);
}
// Fun��o porcentagem
float porcentagem(float num1){
    return (num1 / 100);
}
//fun��o de escolha de opera��o
void escolherCalculo(char operador, float num1, float num2){
    switch(operador){
        case '+':
            printf("Valor da soma � %.2f",somar(num1,num2));
        break;
	    case '-':
	            printf("Valor da subtra��o � %.2f",subtrair(num1,num2));
	        break;
	    case '*':
	            printf("Valor da multiplica��o � %.2f",multiplicar(num1,num2));
	        break;
	    case '/':
	            printf("Valor da divisao � %.2f",dividir(num1,num2));
	        break;
	    case '^':
	            printf("Valor da potencia � %.2f",potenciar(num1,num2));
	        break;
	    case '%':
	            printf("Valor da porcentagem � %.2f",porcentagem(num1));
	        break;
}
}
//fun��o para mostrar calculadora na tela

//fun��o principal
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

