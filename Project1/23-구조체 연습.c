#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < string.h>


//����ü�� �̿��� ���� ��°� ����� �ϼ��ϼ���

//��°��
//p2�� ��ǥ�� 10.10�Դϴ�
//p1�� p2�� ��ǥ�� ���� �����ϴ�

//��Ʈ 1: ��ǥ�� ���� ����ü point�� �����մϴ�.
//��Ʈ 2: ���ǹ��� �̿��� ������ �񱳸� �����غ��ϴ�.

struct point
{
	int x;
	int y;
};

/*
struct coordlinate
{
	int point;
};
*/
int main()
{
	struct point p1 = { 10,10 };
	struct point p2 = { 10, 10 };

	printf("p2�� ��ǥ�� %d,%d�Դϴ�.\n", p2.x, p2.y);
	if (p1.x == p2.x && p1.y == p2.y)
	{
		printf("p1�� p2�� ��ǥ�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("p1�� p2�� ��ǥ�� ���� �ٸ��ϴ�.\n");
	}

	/*
	struct coordlinate p1;
	printf("��ǥ : ");
	scanf("%d", &p1.point);
	struct coordlinate p2;
	printf("��ǥ : ");
	scanf("%d", &p2.point);

	printf("��ǥp1 : %d ��ǥp2 : %d\n", p1.point, p2.point);
	*/
	return 0;
}