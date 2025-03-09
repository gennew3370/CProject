#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < string.h>

struct user
{
	char id[40]; //sample12@
	char PW[50]; //korea
	char gender; // 'M' , 'F'
};

//위의 구조체 user를 이용해 다음과 같은 출력 화면을 완성하세요

//아이디를 입력해주세요 :sample12@ 
//비밀번호를 입력해주세요 : korea1234
//성별을 입력해주세요 : M
//아이디를 입력해주세요 :sample13@
//비밀번호를 입력해주세요 : korea1234
//성별을 입력해주세요 : F
//아이디를 입력해주세요 :sample14@
//비밀번호를 입력해주세요 : korea1234
//성별을 입력해주세요 : M
//유저 테이블 
//===========================
//1.sample12@ korea M
//2.sample13@ korea F
//3.sample14@ korea M
//===========================

int main()
{
	/*
	struct user p1;
	printf("아이디를 입력해주세요 : ");
	scanf("%d", p1.id);
	printf("비밀번호를 입력해주세요 :");
	scanf("%s", p1.PW);
	printf("성별을 입력해주세요 :");
	scanf("%c", p1.gender);

	struct user p2;
	printf("아이디를 입력해주세요 : ");
	scanf("%d", p2.id);
	printf("비밀번호를 입력해주세요 :");
	scanf("%s", p2.PW);
	printf("성별을 입력해주세요 :");
	scanf("%c", p2.gender);

	struct user p3;
	printf("아이디를 입력해주세요 : ");
	scanf("%d", p3.id);
	printf("비밀번호를 입력해주세요 :");
	scanf("%s", p3.PW);
	printf("성별을 입력해주세요 :");
	scanf("%c", p3.gender);

	printf("%d %s %c\n", p1.id, p1.PW, p1.gender);
	printf("%d %s %c\n", p2.id, p2.PW, p2.gender);
	printf("%d %s %c\n", p3.id, p3.PW, p3.gender);
	*/
	//같은 데이터의 반복 -> 배열 + for문 접근하기 너무 좋다.
	struct user table[3];

	for (int i = 0; i < 3; i++)
	{
		printf("아이디를 입력해주세요 : ");
		scanf("%s", table[i].id);
		getchar();

		printf("비밀번호를 입력해주세요 :");
		scanf("%d", table[i].PW);
		getchar();

		printf("성별을 입력해주세요 :");
		scanf("%c", &table[i].gender);
		getchar();
	}
		for (int i = 0; i < 3; i++)
		{
			printf("%s, %d, %c\n", i = 1, table[i].id, table[i].PW, table[i].gender);
		}

	return 0;
}