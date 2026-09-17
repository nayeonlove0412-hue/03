#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001); 

    int input_int;
    float input_float;

    printf("정수를 입력하시오 : ");
    scanf("%d", &input_int);

    printf("소수를 입력하시오 : ");
    scanf("%f", &input_float);

    printf("integer : %d, float : %f\n", input_int, input_float);

    return 0;
}