#include <stdio.h>

int main(void){
    printf("welcome to...\n");
    
    
    printf("   _________    __    ________  ____    ___  __________  ____ \n");
    printf("  / ____/   |  / /   / ____/ / / / /   /   |/_  __/ __ \\/ __ \\\n");
    printf(" / /   / /| | / /   / /   / / / / /   / /| | / / / / / / /_/ /\n");
    printf("/ /___/ ___ |/ /___/ /___/ /_/ / /___/ ___ |/ / / /_/ / _, _/ \n");
    printf("\\____/_/  |_/_____/\\____/\\____/_____/_/  |_/_/  \\____/_/ |_|  \n\n");

    char operator;
    double num1;
    double num2;
    double result;
    
    printf("Enter ur operation (+,-,*,/): ");
    scanf("%c", &operator); 

    printf("Enter ur first number: ");
    scanf("%lf", &num1);

    printf("Enter ur second number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        result = num1 + num2;
    }
    else if (operator == '-') {
        result = num1 - num2;
    }
    else if (operator == '*') {
        result = num1 * num2;
    }
    else if (operator == '/') {
        result = num1 / num2;
    }

    printf("Ur answer is: %lf\n", result);

    return 0;
}
