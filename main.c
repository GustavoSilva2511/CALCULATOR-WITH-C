#include <stdio.h>

int main(void){
    int num1, num2;
    char opr;
    printf("operation:");
    scanf("%d %c %d", &num1, &opr, &num2);

    switch (opr)
    {
        case '+':
            printf("result: %d", (num1 + num2));
            break;

        case '-':
            printf("%d", (num1 - num2));
            break;

        case '*':
            printf("%d", (num1 * num2));
            break;

        case '/':
            printf("%d", (num1 / num2));
            break;

        default:
            printf("não foi possivel identificar a operação!");
            break;
    }
    return 0;
}


