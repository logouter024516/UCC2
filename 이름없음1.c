#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double s, area;

    // ����ڷκ��� �ﰢ���� �� ���� ���̸� �Է¹޽��ϴ�.
    printf("�ﰢ���� ù ��° ���� ���̸� �Է��ϼ���: ");
    scanf("%lf", &a);
    printf("�ﰢ���� �� ��° ���� ���̸� �Է��ϼ���: ");
    scanf("%lf", &b);
    printf("�ﰢ���� �� ��° ���� ���̸� �Է��ϼ���: ");
    scanf("%lf", &c);

    // �ѷ��� ���� ����մϴ�.
    s = (a + b + c) / 2;

    // ���̸� ����մϴ�.
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // ���̸� ����մϴ�.
    printf("�ﰢ���� ���̴�: %lf\n", area);

    return 0;
}

