#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double s, area;

    // 사용자로부터 삼각형의 세 변의 길이를 입력받습니다.
    printf("삼각형의 첫 번째 변의 길이를 입력하세요: ");
    scanf("%lf", &a);
    printf("삼각형의 두 번째 변의 길이를 입력하세요: ");
    scanf("%lf", &b);
    printf("삼각형의 세 번째 변의 길이를 입력하세요: ");
    scanf("%lf", &c);

    // 둘레의 반을 계산합니다.
    s = (a + b + c) / 2;

    // 넓이를 계산합니다.
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // 넓이를 출력합니다.
    printf("삼각형의 넓이는: %lf\n", area);

    return 0;
}

