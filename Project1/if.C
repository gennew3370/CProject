#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if문 사용 방법
//if(조건식)
//{
// 조건식이 만족할 때 실행할 명령문;
//}

//if - else 문
//if(조건식)
//{
// 조건식이 만족할 때 실행할 명령문;
//}
//else
//{
//조건식이 만족하지 않았을 경우 실행할 명령문;
//}

//if - else if 문
//if(조건식)
//{
// 조건식이 만족할 때 실행할 명령문;
//}
//else if
//{
// 위의 조건식이 만족하지 않고, 조건식2가 만족하고 있는 경우 실행할 명령문;
//}

int main()
{
	int number1, number2;

	printf("두 개의 정수를 입력해주세요.(단, 큰 수를 먼저 입력합니다.)>>");
	scanf("%d %d", &number1, &number2);

	if (number1 > number2)
	{
		printf("두 수의 곱은 %d입니다.\n", number1 * number2);
	}
	else
	{
		printf("number1이 number2보다 더 큰 값이여야 합니다.\n");
	}

	//0부터 100점 사이의 점수를 하나 입력받습니다.
	//점수가 60점 이상일 경우 "합격"을 화면에 출력합니다.
	//점수가 60점 미만일 경우 "불합격"을 출력하도록 프로그램 코드를 구현하세요.
	//점수가 해당 범위의 값이 아닐 경우 "잘못된 입력입니다."를 화면에 출력합니다.

	//int a1;
	//printf("점수를 입력해 주세요. >>");
	//scanf("%d", &a1);

	//if (60 <= a1)
	//{
	//	printf("합격");
	//}

	//else if (60 > a1)
	//{
	//	printf("불합격");
	//}

	//else
	//{
	//	printf("잘못된 입력입니다.");
	//}


	int score;
	printf("0점부터 100점 사이의 점수를 하나 입력해주세요. >>");
	scanf("%d", &score);

	//if (0 > score)
	//{
	//	printf("잘못된 입력입니다.");
	//}
	//else if (100 < score)
	//{
	//	printf("잘못된 입력입니다.");
	//}

	if (score < 0 || score > 100)
	{
		printf("잘못된 입력입니다.\n");
	}

	else if (score >= 60)
	{
		printf("합격\n");
	}
	else if (score < 60)
	{
		printf("불합격\n");
	}

	//조건식을 2개 이상 사용하는 방법
	//A AND B  비트연산 기호 &를 2번 작성
	//ex score >= 0 && score <= 100
	//   점수는 0 이상 100 이하인 조건

	//A OR B 비트연산 기호 |를 2번 작성
	//score < 0 || score > 100
	//점수가 0보다 작거나, 100보다 큰 조건

	return 0;
}