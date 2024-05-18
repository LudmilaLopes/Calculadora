#include <stdio.h>
#include <stdlib.h>
// estrutura inicial calculadora

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

// Função para calcular o seno usando a série de Taylor
float seno(float x) {
	float PI = 3.14;
    while (x < 0) {
        x += 2 * PI;
    }
    while (x > 2 * PI) {
        x -= 2 * PI;
    }

    float termo = x, soma = 0;
    int n = 1;
    for (int i = 1; termo != 0; i += 2) {
        soma += termo;
        n++;
        termo *= -1 * x * x / ((i + 1) * (i + 2));
    }
    return soma;
}

// Função para calcular o cosseno usando a série de Taylor
float cosseno(float x) {
	float PI = 3.14;
    while (x < 0) {
        x += 2 * PI;
    }
    while (x > 2 * PI) {
        x -= 2 * PI;
    }

    float termo = 1, soma = 0;
    int n = 1;
    for (int i = 0; termo != 0; i += 2) {
        soma += termo;
        n++;
        termo *= -1 * x * x / ((i + 1) * (i + 2));
    }
    return soma;
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
        case 's':
        	return seno(num1);
        break;
         case 'c':
            return cosseno(num1);
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
    printf("numero\n");
    scanf("\n%f",&num);
    system("cls");
    mostrar_result(resultado);
    printf("%.2f \t operador/seno(s)/cosseno(c) ",num);
    printf(">");
    fgetc(stdin);
    scanf("%c",&operador);
    system("cls");
    mostrar_result(resultado);
    if((operador != '%') && (operador != 's') && (operador  != 'c')){
    printf("%.2f \t %c \t num\n",num,operador);
    scanf("%f",&num2);
	}
    system("cls");
    resultado = escolherCalculo(operador,num,num2);
    mostrar_result(resultado);
    printf("%.2f \t %c \t %.2f \n",num,operador,num2);
    printf("Deseja continuar o calculo? (s/n)\n");
    scanf(" %c",&resp);
    system("cls");
    //
    }while(resp != "n" && resp != "N");
    printf("Obrigado por usar a calculadora =)\n");
}

//função principal
#include <stdio.h>
int main() {
    mostrar_tela();
    return 0;
}
