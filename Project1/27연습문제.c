#include <stdio.h>
//���� ���� '���� �˰��� 2587�� ��ǥ��2'
//ù ° �ٺ��� �ټ���° �ٱ��� �� �پ� �ڿ����� �Է��� �� �ֽ��ϴ�.
//�Է��� �Ϸ�ɰ�� ù° �ٿ��� ����� ����մϴ�.
//��° �ٿ����� �߾� ���� ����մϴ�.

//����� �־��� ��� ���� ��/���� ������ ǥ���մϴ�.

//�߾� ���� �־��� ���� ũ�� ������� �������� ���, ���� �߾ӿ� �ִ� ���� �ǹ�

int avg(int sum, int count)
{
	return (int)sum / count;
	//int�� int�� ������ �Ǹ� �Ҽ��� �ڸ��� ���� ������ float�� �����༭ �Ҽ��� �ڸ� Ȯ���մϴ�.
}

//�迭 ��ü�� ���� �����ؼ� �߾� �� Ȯ��(�迭 ����)
void center(int* numbers[], int size)
{
	int result = 0;

	int temp;
	//��ü Ƚ�� �ݺ�
	for (int i = 0; i < size; i++)
	{
		//i�� �ݺ��Կ� ���� �ݺ��ϴ� ������ ������.
		//��ü ������� i ���� �������� ����(ó�� ���� ���� ���� ���ϱ� ����)
		for (int j = 0; j < size - 1 - i; j++)
		{
			//i��° ���� i+1��° ���� ���� i��° ���� �� Ŭ ����� �����Ѵ�.
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
			
		}
		
	}
	//������ ���� �� �߾� �� = �迭�� ����/2 �� �ش��ϴ� ��
	return result = numbers[size / 2];
}


int sum(int number[], int size)
{
	int result = 0;
	for (int i = 0; i < size; i++)
	{
		result += number[i];
	}
	return result;
}

int main()
{
	int numbers[5]; //���� 5���� ���� �Է�

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	int sum_value = sum(numbers, 5);
	int avg_value = avg(sum_value, 5);

	printf("%d\n", avg_value);

	return 0;
}