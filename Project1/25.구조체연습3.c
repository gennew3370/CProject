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
		printf("���� ���Դϴ�.\n");
	}
	else
	{
		printf("�ٸ� ���Դϴ�.\n");
	}
}

int main()
{
	struct student s1 = { 1,"kane" };
	struct student s2 = { 1,"kane" };

	compere(s1, s2);
	//�ش��ڵ带 �������� ��, s1�� s2�� ���� ���� ���̶��"���� ���Դϴ�"�� �������� �Լ� compere�� �����Ͻÿ�

	//��Ʈ
	//int a = function(1); �̷� ������ �����ų� printf(function(1)):�̷������� ������ return�Լ�
	//function(1);�̷� ������ �Լ��� ���������� �Ϲ��Լ� (void)�Դϴ�.

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
		printf("���� ���Դϴ�.\n");
	}
	else
	{
		printf("�ٸ� ���Դϴ�.\n");
	}
}

int main()
{
	struct student s1 = { 1,"kane" };
	struct student s2 = { 1,"kane" };

	compere(s1, s2);
	//�ش��ڵ带 �������� ��, s1�� s2�� ���� ���� ���̶��"���� ���Դϴ�"�� �������� �Լ� compere�� �����Ͻÿ�

	//��Ʈ
	//int a = function(1); �̷� ������ �����ų� printf(function(1)):�̷������� ������ return�Լ�
	//function(1);�̷� ������ �Լ��� ���������� �Ϲ��Լ� (void)�Դϴ�.

>>>>>>> e90136e4482cdebb6c8ab93a1eb9e11dba00267f
}