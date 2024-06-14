#include <stdio.h> // 기본 함수를 가져옴 
int main(){ //프로그램 시작 
    int modecode,num3,num4; // 모드선택과 입력값 저장을 위한 정수형 변수 생성 
    char caseoneinput; //입력값 저장을 위한 문자형변수 생성
    float num1,num2; //입력값 저장을 위한 실수형변수 생성
    while(1){ // 무한반복 
        printf("모드를 입력해주세요."); //사용자에게 모드코드 입력요청 하기위해 콘솔창에 메시지 출력
        scanf("%d", &modecode); //사용자에게 모드코드를 입력받는부분 
        switch(modecode){ // 모드코드에 따른 동작을 위한 모드코드를 필요로 하는 조건문 생성(switch-case문) 
            case 1: //모드코드 1을 입력했을때 
                printf("사칙연산 모드가 선택되었습니다.\n"); // 모드설명 출력 
                printf("수행할 연산을 입력하세요: "); //연산자 입력 요청  
                scanf(" %c", &caseoneinput); //연산자 입력 
                if(caseoneinput == 'm' || caseoneinput == 'M'){ //연산자가 m이나 M이면 
                    break; //조건문 탈출 
                }else if(caseoneinput == '+'){ //연산자가 +면 
                    printf("첫 번째 수를 입력하세요: "); //첫번째수 입력요쳥 
                    scanf("%f", &num1); //첫번째수 입력 
                    printf("두 번째 수를 입력하세요: "); //두번째수 입력요청 
                    scanf("%f", &num2); //주번째수 입력 
                    printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2); //계산결과 출력 
                }else if(caseoneinput == '-'){
                    printf("첫 번째 수를 입력하세요: "); //첫번째수 입력요쳥 
                    scanf("%f", &num1); //첫번째수 입력 
                    printf("두 번째 수를 입력하세요: "); //두번째수 입력요청
                    scanf("%f", &num2); //첫번째수 입력 
                    printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2); //계산결과 출력 
                }else if(caseoneinput == '/'){
                    printf("첫 번째 수를 입력하세요: "); //첫번째수 입력요쳥 
                    scanf("%f", &num1); //첫번째수 입력 
                    printf("두 번째 수를 입력하세요: "); //두번째수 입력요청
                    scanf("%f", &num2); //첫번째수 입력 
                    if(num2 == 0){ //만약 두번째수가 0이면 
                        printf("오류:\n"); //오류를 출력 
                    } else { //아니면 
                        printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2); //계산결과 출력 
                    }
                }else if(caseoneinput == '*'){
                    printf("첫 번째 수를 입력하세요: "); //첫번째수 입력요쳥 
                    scanf("%f", &num1); //첫번째수 입력 
                    printf("두 번째 수를 입력하세요: "); //두번째수 입력요청
                    scanf("%f", &num2); //첫번째수 입력 
                    printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2); //계산결과 출력 
                }else if(caseoneinput == '%'){
                    printf("첫 번째 수를 입력하세요: "); //첫번째수 입력요쳥 
                    scanf("%d", &num3); //첫번째수 입력 
                    printf("두 번째 수를 입력하세요: "); //두번째수 입력요청
                    scanf("%d", &num4); //첫번째수 입력 
                    if(num4 == 0){ //만약 두번째수가 0이면 
                        printf("오류\n"); //오류를 출력 
                    } else { //아니면
                        printf("%d %% %d = %d\n", num3, num4, num3 % num4); //계산결과 출력 
                    }
                }
                break; //조건문 탈출 
            case 2: //모드코드 2를 입력했을때 
                printf("단위 변환 모드가 선택되었습니다.\n"); // 모드설명 출력 
                break; //조건문 탈출
            case 3: //모드코드 3을 입력했을때 
                printf("넓이 계산 모드가 선택되었습니다.\n"); // 모드설명 출력 
                break; //조건문 탈출
            case 0: //모드코드 0을 입력했을때 
                printf("프로그램을 종료합니다.\n"); // 모드설명 출력 
                return 0; //프로그램 종료 
            case 9: // 모드코드 9를 입력했을때 
                system("cls"); // 화면초기화 
                break; //조건문 탈출
            default: //위 조건에 해당하지 않는 모드코드를 입력했을때 
                system("cls"); //화면 초기화 
                printf("존재하지 않는 모드코드입니다.\n"); // 모드설명 출력 
        }
    }
}
