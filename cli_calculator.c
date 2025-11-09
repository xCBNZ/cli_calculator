#include <stdio.h>

void calculate(){

    char operator;
    double o1, o2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter first number: \n");
    scanf(" %lf", &o1);
    printf("Enter second number: \n");
    scanf(" %lf", &o2);

    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", o1, o2, o1+o2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", o1, o2, o1-o2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", o1, o2, o1*o2);
        break;
    case '/':
        if(o2 != 0 ){ 
        printf("%.1lf / %.1lf = %.1lf\n", o1, o2, o1/o2);
        }else {
            printf("Error: you cannot divide by 0!\n");
        }
        break;

    default:
        printf("Error operand is not correct!\n");
    }

}



int main() {

    char resume = 'y';

    while(resume == 'y' || resume == 'Y'){
        calculate();

        printf("New calculation? (y/n): ");
        scanf(" %c", &resume);
    }

    printf("Program terminated!\n");

}