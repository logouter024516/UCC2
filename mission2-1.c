#include <stdio.h> // 기본 함수를 가져옴 

int main(){ //프로그램 시작 
    int modecode,num3,num4,typecode,s=0,m=0,h=0; // 모드선택과 입력값 저장을 위한 정수형 변수 생성 
    char caseoneinput,casetwoinput; //입력값 저장을 위한 문자형변수 생성
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
                printf("변환할 것은 무엇인가요? (1: 길이,2: 시간, 3: 온도) "); //변환할 데이터의 종류 입력 요청 
                scanf(" %c",&casetwoinput); // 변환할 데이터 종류 입력 
                 if(casetwoinput == 'm' || casetwoinput == 'M'){ //종류가 m이나 M이면 
                    break; //조건문 탈출 
                    
                }else if(casetwoinput=='1'){ //종류가 1이면 
                	printf("어떻게 변환할까요? (1: cm -> inch, 2: inch -> cm) "); //변환할 종류 입력 요청 
                	scanf("%d",&typecode); //변환할 종류 입력 
                	printf("변환할 값을 입력하세요:"); // 변환할 값입력 요청 
                	scanf("%d",&num3); //변환할 값 입력 
                	if(typecode==1){ //변환할 종류코드가 1이면  
                		printf("%d cm = %.2f inch\n",num3, num3/2.54); //변환한 값을 출력
					}else if(typecode==2){ //변환할 종류코드가 2이면
                		printf("%d inch = %.2f cm\n",num3, num3*2.54); //변환한 값을 출력
					}
				}else if(casetwoinput=='2'){ //종류가 2이면
                	printf("어떻게 변환할까요? (1: x초 -> x시간x분x초, 2: x시간x분x초 -> x초) ");//변환할 종류입력요청 
					scanf("%d",&typecode); //변환할 종류 입력 
					if(typecode==1){ //종류코드가 1이면 
						printf("초를 정수로 입력해주세요"); //변환할 겂 입력요청 
						scanf("%d",&num3); //변환할 값 입력 
		                if(num3>=3600){ //변환할값이 1시간을 넘기면 
		                     h=num3/3600; //시간은 입력된 초를 3600으로 나눈값이다.
		                        m=num3%3600/60; //분은 입력된초를 3600으로 나눈값을 60으로나눈값이다 
		                     s = num3%3600%60;  //초는 입력된초를 3600으로 나눈값의 나머지를 60으로나눈값의 나머지다 
		                        printf("%02d시간%02d분%02d초입니다\n",h,m,s); //변환된 값을 출력 
		                 }  else if(num3>=60){ //변환할 값이 1분을 넘기면 
		                       m=num3/60; //분은 입력된초를 60으로 나눈값이다 
		                        s = num3%60; //초는 입력된초를 60으로 나눈값의 나머지다 
		                     printf("%02d분%02d초입니다\n",m,s); //변환된 값을 출력
		                 }else //위 경우에 해당하지 않으면 
		                     printf("%02초입니다\n",num3); //변환된 값을 출력 
						
					}else if(typecode==2){ //종류코드가 2이면
						printf("몇시인지 입력해주세요."); //변환할 값 입력요청 
						scanf("%d",&h); //변환할 값 입력
						printf("몇분인지 입력해주세요."); //변환할 값 입력요청 
						scanf("%d",&m); //변환할 값 입력
						printf("몇초인지 입력해주세요."); //변환할 값 입력요청 
						scanf("%d",&s); //변환할 값 입력
                		printf("%d초입니다.\n",h*3600+m*60+s);// 변환한 값 출력 
					}
				}else if(casetwoinput=='3'){ //종류가 3이면
					printf("어떻게 변환할까요?  (1: 섭씨 -> 화씨, 2: 화씨 -> 섭씨) "); //변환할 종류코드 입력요청 
					scanf("%d",&typecode); //변환할 종류코드 입력 
					if(typecode==1){ //종류코드가 1이면 
						printf("섭씨온도를 입력해주세요."); //변환할 값 입력요청 
						scanf("%f",&num1); //변활한 깂 입력 
						printf("%.2f ℉     \n",1.8*num1+32); //변환한 값 출력				
					}else if(typecode==2){ //종류코드가 1이면  
						printf("화씨온도를 입력해주세요."); //변환할 값 입력요청 	
						scanf("%f",&num1); //변활한 깂 입력 
						printf("%.2f ℃     \n",(num1-32)/1.8); //변환한 값 출력 
					}
					
				} 
                break; //반복문 탈출 
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

