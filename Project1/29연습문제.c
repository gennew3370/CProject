#include <stdio.h>
//{1,2,3,4}�߿��� ���� 2���� �̾� ���� 6�� �ʰ��ϴ� ����� ���� ��� ����Ͻÿ�

int number1[] = { 1,2,3,4 };

void Backtracking(int N, int M, int number2, int number3)
{
	if (N == 2)
	{
		if (number3 > 6)
		{
			printf("%d %d", number1[number2 - 1], number1[number2 - 2]);
		}
		return;
	}
	for (int i = number2; i < N; i++)
	{
		Backtracking(N, M + 1, i + 1, number3 + number1[i]);
	}
}

int main()
{
	int N, M;
	
	return 0;
}