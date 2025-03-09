<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < string.h>

struct student 
{
	int id;
	char name[20];
};
void compere(struct student s1, struct student s2)
{
	if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
	{
		printf("같은 값입니다.\n");
	}
	else
	{
		printf("다른 값입니다.\n");
	}
}

int main()
{
	struct student s1 = { 1,"kane" };
	struct student s2 = { 1,"kane" };

	compere(s1, s2);
	//해당코드를 실행했을 때, s1과 s2가 서로 같은 값이라면"같은 값입니다"가 나오도록 함수 compere를 설계하시오

	//힌트
	//int a = function(1); 이런 식으로 나오거나 printf(function(1)):이런식으로 나오면 return함수
	//function(1);이런 식으로 함수만 적혀있으면 일반함수 (void)입니다.

=======
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < string.h>

struct student 
{
	int id;
	char name[20];
};
void compere(struct student s1, struct student s2)
{
	if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0)
	{
		printf("같은 값입니다.\n");
	}
	else
	{
		printf("다른 값입니다.\n");
	}
}

int main()
{
	struct student s1 = { 1,"kane" };
	struct student s2 = { 1,"kane" };

	compere(s1, s2);
	//해당코드를 실행했을 때, s1과 s2가 서로 같은 값이라면"같은 값입니다"가 나오도록 함수 compere를 설계하시오

	//힌트
	//int a = function(1); 이런 식으로 나오거나 printf(function(1)):이런식으로 나오면 return함수
	//function(1);이런 식으로 함수만 적혀있으면 일반함수 (void)입니다.

>>>>>>> e90136e4482cdebb6c8ab93a1eb9e11dba00267f
}