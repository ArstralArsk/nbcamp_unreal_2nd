#include <iostream>

using namespace std;

float getSum(float score[], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += score[i];
	}
	return sum;
}

float getAverage(float score[], int size)
{
	return getSum(score, size) / size;
}

void sortArray(float score[], int size,int asc = 1)
{
	float temp = 0;

	switch (asc)
	{
	case 1:
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i+1; j < size; j++)
			{
				if (score[i] > score[j])
				{
					temp = score[i];
					score[i] = score[j];
					score[j] = temp;
				}
			}
		}
		break;
	case 2:
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i+1; j < size; j++)
			{
				if (score[i] < score[j])
				{
					temp = score[i];
					score[i] = score[j];
					score[j] = temp;
				}
			}
		}
		break;
	default:
		break;
	}
}

void printArray(float array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}