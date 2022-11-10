#include<stdio.h>
#include<math.h>


void coleta_operandos(int qtd, float* num1, float* num2)
{
    printf("Digite o primeiro operando:");
    scanf("%f%*c", num1);

    if (qtd == 2)
    {
        printf("Digite o segundo operando:");
        scanf("%f%*c", num2);
    }
}

float soma(float num1, float num2)
{
    return num1 + num2;
}

float subtracao(float num1, float num2)
{
    return num1 - num2;
}

float multiplicacao(float num1, float num2)
{
    return num1 * num2;
}

float divisao(float num1, float num2)
{
    return num1 / num2;
}

float potencia(float num1, float num2)
{
    return (float) pow(num1, num2);
}

float raiz(float num1)
{
    float erro = 1000;
    float raiz = 1;

    while (erro > 0.001)
    {
        raiz = (1.0/2) * (raiz + num1 / raiz);
        erro = raiz * raiz - num1;
    }

    return raiz;
}

int main(void)
{
    char op;
    float num1, num2, res;
    int num_op;

    while(1)
    {
        printf("Digite a operacao desejada (+, -, *, /, ^, ~, 0):");
        scanf("%c%*c", &op);
        num_op = 2;

        switch (op)
        {
        case '+':
            coleta_operandos(num_op, &num1, &num2);
            res = soma(num1, num2);
            break;
            
        case '-':
            coleta_operandos(num_op, &num1, &num2);
            res = subtracao(num1, num2);
            break;
            
        case '*':
            coleta_operandos(num_op, &num1, &num2);
            res = multiplicacao(num1, num2);
            break;

        case '/':
            coleta_operandos(num_op, &num1, &num2);
            res = divisao(num1, num2);
            break;
        
        case '^':
            coleta_operandos(num_op, &num1, &num2);
            res = potencia(num1, num2);
            break;
        }
    }
    return 0;
}