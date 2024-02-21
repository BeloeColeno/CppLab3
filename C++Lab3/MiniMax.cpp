#include "MiniMax.h"
using namespace std;

void miniMax(int arr[], int size)
{
	//������� ������� ��� � ���� ���������
	int imin, imax;
	//���������� n-����������� ���������
	int n = size;
	int i;
	//��������� ��������� �������� ��� ��� � ����;
	imin = i = 0; imax = i = 0;
	for (i = 0; i < n - 1; i++) //���������� ��� � ����
	{
		imin = i;
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[imin]) imin = j;
		int t = arr[i];
		arr[i] = arr[imin];
		arr[imin] = t;
	}
	for (i = 0; i < n; i++) //����� �� �����
		cout << arr[i] << ' ';
	cout << endl;
}
