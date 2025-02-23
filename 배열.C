#include <stdio.h>

//2차원배열 : 배열의 요소가 배열인 형태를 의미합니다.
//ex) int iarray[] = {1,2,3,4,5}; 1차원배열
//int iarray2[] = { {1,2,3} }, {4,5,6}, {7,8,9}}; 2차원 배열

//주로 for문을 이용해서 배열을 출력을 하게 되는데 그 기준으로 배열 만드는 방법
//자료형 배열명[세로열][가로열];


int main()
{
	int iarray2[3][4] =
	{
		{1,2,3,4}
		,
		{5,6,7,8}
		,
		{9,10,11,12}
	};

	for (int i = 0; i< 3; i++)//
	{
		//세로열 작업을 진행하는 동안 반복시킬 가로열에 대한 반복
		for (int j = 0; j < 4; j++)
		{
			printf("%2d", iarray2[i][j]);
		}
		printf("\n"); //
	}

	int value2[3][3];
	int value = 1;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			value2[i][j] = value++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", value2[i][j]);
		}
		printf("\n");
	}

	//연습 문제
	//출력예시를 참고하여, 이차원 배열 value3를 만드세요
	//단, 배열 생성과 초기화를 동시에 진행하지 않습니다.
	
	//갑    인덱스
	//167  00 01 02
	//258  10 11 12
	//349  20 21 22

	int value3[3][3];
	value = 1;

	//작업
	for (int i = 0; i < 3; i++)
	{
		//i가 짝수인 경우에는 순서대로 같이 증가
		if (i % 2 == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				//현재 값의 증가가 아래로 진행되고 있음, 따라서 i와 j의 대입 순서를 변경
				value3[j][i] = value++;
			}

		}
		else//i가 홀수인 경우라면 반대로 값이 증가하도록 설정
		{
			for (int j = 2; j >= 0; j--)
			{
				value3[j][i] = value++;
			}
		}
	}

	//출력
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value3[i][j]);
		}
		printf("\n");
	}

	// 1.value3의 세로, 가로의 크기를 정해준다.
	// 2.for문을 이용하여 i의 범위를 지정
	// 3.if문을 사용하여 첫번째 세로열 자리의 숫자가 짝수일 경우와 홀수일 경우를 생성
	// 4.for문을 사용하여 j의 범위를 지정
	// 5.value3에 세로 가로열에 대입 순서를 지정
	// 6.printf를 이용하여 value3의 결과를 출력
	
	//도전과제 1 난이도 하
	//1 2 3
	//6 5 4
	//7 8 9
	int value4[3][3];
	value = 1;

	for (int i = 0; i < 3; i++)
		if (i % 2 == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				value4[i][j] = value++;
			}
		}
		else
		{
			for (int j = 2; j >= 0; j--)
			{
				value4[i][j] = value++;
			}
		}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", value4[i][j]);
		}
		printf("\n");
	}


	//도전과제 2 난이도 상
	//1 2 3
	//8 9 4
	//7 6 5
	return 0;
}