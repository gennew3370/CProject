#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < string.h>

struct user
{
	char id[40]; //sample12@
	char PW[50]; //korea
	char gender; // 'M' , 'F'
};

//���� ����ü user�� �̿��� ������ ���� ��� ȭ���� �ϼ��ϼ���

//���̵� �Է����ּ��� :sample12@ 
//��й�ȣ�� �Է����ּ��� : korea1234
//������ �Է����ּ��� : M
//���̵� �Է����ּ��� :sample13@
//��й�ȣ�� �Է����ּ��� : korea1234
//������ �Է����ּ��� : F
//���̵� �Է����ּ��� :sample14@
//��й�ȣ�� �Է����ּ��� : korea1234
//������ �Է����ּ��� : M
//���� ���̺� 
//===========================
//1.sample12@ korea M
//2.sample13@ korea F
//3.sample14@ korea M
//===========================

int main()
{
	/*
	struct user p1;
	printf("���̵� �Է����ּ��� : ");
	scanf("%d", p1.id);
	printf("��й�ȣ�� �Է����ּ��� :");
	scanf("%s", p1.PW);
	printf("������ �Է����ּ��� :");
	scanf("%c", p1.gender);

	struct user p2;
	printf("���̵� �Է����ּ��� : ");
	scanf("%d", p2.id);
	printf("��й�ȣ�� �Է����ּ��� :");
	scanf("%s", p2.PW);
	printf("������ �Է����ּ��� :");
	scanf("%c", p2.gender);

	struct user p3;
	printf("���̵� �Է����ּ��� : ");
	scanf("%d", p3.id);
	printf("��й�ȣ�� �Է����ּ��� :");
	scanf("%s", p3.PW);
	printf("������ �Է����ּ��� :");
	scanf("%c", p3.gender);

	printf("%d %s %c\n", p1.id, p1.PW, p1.gender);
	printf("%d %s %c\n", p2.id, p2.PW, p2.gender);
	printf("%d %s %c\n", p3.id, p3.PW, p3.gender);
	*/
	//���� �������� �ݺ� -> �迭 + for�� �����ϱ� �ʹ� ����.
	struct user table[3];

	for (int i = 0; i < 3; i++)
	{
		printf("���̵� �Է����ּ��� : ");
		scanf("%s", table[i].id);
		getchar();

		printf("��й�ȣ�� �Է����ּ��� :");
		scanf("%d", table[i].PW);
		getchar();

		printf("������ �Է����ּ��� :");
		scanf("%c", &table[i].gender);
		getchar();
	}
		for (int i = 0; i < 3; i++)
		{
			printf("%s, %d, %c\n", i = 1, table[i].id, table[i].PW, table[i].gender);
		}

	return 0;
}