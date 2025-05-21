#include <stdio.h>

int main() {
    int a, b;
    int sum, diff, prod;
    float quotient;

    // 사용자 입력
    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &a);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &b);

    // 산술 연산 수행
    sum = a + b;
    diff = a - b;
    prod = a * b;

    // 0으로 나누는 경우 처리
    if (b != 0) {
        quotient = (float)a / b;
        printf("\n나눗셈: %.2f\n", quotient);
    } else {
        printf("\n나눗셈: 0으로 나눌 수 없습니다.\n");
    }

    // 결과 출력
    printf("덧셈: %d\n", sum);
    printf("뺄셈: %d\n", diff);
    printf("곱셈: %d\n", prod);

    return 0;
}
