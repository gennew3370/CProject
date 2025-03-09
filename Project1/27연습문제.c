#include <stdio.h>
//연습 문제 '백준 알고리즘 2587번 대표값2'
//첫 째 줄부터 다섯번째 줄까지 한 줄씩 자연수를 입력할 수 있습니다.
//입력이 완료될경우 첫째 줄에는 평균을 출력합니다.
//둘째 줄에서는 중앙 값을 출력합니다.

//평균은 주어진 모든 수의 합/수의 개수로 표현합니다.

//중앙 값은 주어진 수를 크기 순서대로 정리했을 경우, 가장 중앙에 있는 값을 의미

int avg(int sum, int count)
{
	return (int)sum / count;
	//int와 int를 나누게 되면 소수점 자리가 없기 때문에 float를 덜어줘서 소수점 자리 확보합니다.
}

//배열 전체의 값을 조사해서 중앙 값 확인(배열 정렬)
void center(int* numbers[], int size)
{
	int result = 0;

	int temp;
	//전체 횟수 반복
	for (int i = 0; i < size; i++)
	{
		//i가 반복함에 따라 반복하는 범위가 감소함.
		//전체 사이즈보다 i 작은 범위부터 시작(처음 값과 다음 값을 비교하기 때문)
		for (int j = 0; j < size - 1 - i; j++)
		{
			//i번째 값과 i+1번째 값을 비교해 i번째 값이 더 클 경우라면 변경한다.
			if (numbers[i] > numbers[i + 1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
			
		}
		
	}
	//정렬이 끝난 후 중앙 값 = 배열의 개수/2 에 해당하는 값
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
	int numbers[5]; //숫자 5개에 대한 입력

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	int sum_value = sum(numbers, 5);
	int avg_value = avg(sum_value, 5);

	printf("%d\n", avg_value);

	return 0;
}