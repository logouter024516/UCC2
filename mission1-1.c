#include <stdio.h> // �⺻ �Լ��� ������ 
int main(){ //���α׷� ���� 
    int modecode,num3,num4; // ��弱�ð� �Է°� ������ ���� ������ ���� ���� 
    char caseoneinput; //�Է°� ������ ���� ���������� ����
    float num1,num2; //�Է°� ������ ���� �Ǽ������� ����
    while(1){ // ���ѹݺ� 
        printf("��带 �Է����ּ���."); //����ڿ��� ����ڵ� �Է¿�û �ϱ����� �ܼ�â�� �޽��� ���
        scanf("%d", &modecode); //����ڿ��� ����ڵ带 �Է¹޴ºκ� 
        switch(modecode){ // ����ڵ忡 ���� ������ ���� ����ڵ带 �ʿ�� �ϴ� ���ǹ� ����(switch-case��) 
            case 1: //����ڵ� 1�� �Է������� 
                printf("��Ģ���� ��尡 ���õǾ����ϴ�.\n"); // ��弳�� ��� 
                break; //���ǹ� Ż�� 
            case 2: //����ڵ� 2�� �Է������� 
                printf("���� ��ȯ ��尡 ���õǾ����ϴ�.\n"); // ��弳�� ��� 
                break; //���ǹ� Ż��
            case 3: //����ڵ� 3�� �Է������� 
                printf("���� ��� ��尡 ���õǾ����ϴ�.\n"); // ��弳�� ��� 
                break; //���ǹ� Ż��
            case 0: //����ڵ� 0�� �Է������� 
                printf("���α׷��� �����մϴ�.\n"); // ��弳�� ��� 
                return 0; //���α׷� ���� 
            case 9: // ����ڵ� 9�� �Է������� 
                system("cls"); // ȭ���ʱ�ȭ 
                break; //���ǹ� Ż��
            default: //�� ���ǿ� �ش����� �ʴ� ����ڵ带 �Է������� 
                system("cls"); //ȭ�� �ʱ�ȭ 
                printf("�������� �ʴ� ����ڵ��Դϴ�.\n"); // ��弳�� ��� 
        }
    }
}
