#include "bubble.h"
using namespace std;

void bubble(int arr[], int size)
{
	for (int i = 0; i +1 < size; i++)
	{
		for (int j = 0; j +1 < size -i; j++)
		{
			if (arr[j+1] < arr[j])
			{
				int t = j;
				arr[j] = arr[j + 1];
				arr[j + 1] = j;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
}
