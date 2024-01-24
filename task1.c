/* Задача 1. Сколько зерен на доске? */
#include <stdio.h>

int countOfGrains(int squareNum){

    int sum = 1;

    for (int i = 2; i <= squareNum; i++)
        sum *= 2;

    return sum;
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d\n", countOfGrains(num));
}