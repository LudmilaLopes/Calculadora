#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// estrutura inicial calculadora
/*
*resolver as questões de seno e coseno.
*/

//função adição
float somar(float num1, float num2){
    return num1 + num2;
}
//função subtração
float subtrair(float num1, float num2){
    return num1 - num2;
}
//função multiplicação
float multiplicar(float num1, float num2){
    return num1 * num2;
}
//função divisão
float dividir(float num1, float num2){
    return num1 / num2;
}
//função potência
float potencia(float base, int exp){
    float resultado = 1;
    int i;
    for(i = 0; i < exp; i++){
        resultado *= base;
    }
    return resultado;
}
//função porcentagem
float porcentagem(float num1){
  	return num1/100;
}
//função de escolha de operação
float escolherCalculo(char operador, float num1, float num2){
    switch(operador){
        case '+':
            return somar(num1,num2);
        break;
        case '-':
            return subtrair(num1,num2);
        break;
        case 'x':
        case 'X':
        case '*':
            return multiplicar(num1,num2);
        break;
        case '/':
        case ':':
            return dividir(num1,num2);
        break;
        case '^':
        case '~':
            return potencia(num1,num2);
        break;
        case '%':
            return porcentagem(num1);
        break;
    }
}
//função de mostra resultado
void mostrar_result(float resultado){
    printf("| \t%.2f\t|\n", resultado);
    printf("-----------------\n");
}
//função para mostrar calculadora na tela
void mostrar_tela(){
    const char* resp = " ";
    float resultado = 0;
    do{
    float num,num2;
    char operador;
    mostrar_result(resultado);
    printf("num\n");
    scanf("\n%f",&num);
    system("cls");
    mostrar_result(resultado);
    printf("%.2f \t operador\n",num);
    printf(">");
    fgetc(stdin);
    scanf("%c",&operador);
    system("cls");
    mostrar_result(resultado);
    if(operador != '%'){
    printf("%.2f \t %c \t num\n",num,operador);
    scanf("%f",&num2);
	}
    system("cls");
    resultado = escolherCalculo(operador,num,num2);
    mostrar_result(resultado);
    printf("%.2f \t %c \t %.2f \n",num,operador,num2);
    printf("Deseja continuar? (s/n)\n");
    scanf(" %c",&resp);
    system("cls");
    }while(resp != "n" && resp != "N");
    printf("Obrigado por usar a calculadora =)\n");
}

//função principal
#include <stdio.h>
int main() {
    mostrar_tela();
    return 0;
}
