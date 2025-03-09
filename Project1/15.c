<<<<<<< HEAD
#include <stdio.h>
int main()
{
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
=======
#include <stdio.h>
int main()
{
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
>>>>>>> e90136e4482cdebb6c8ab93a1eb9e11dba00267f
}