#include "MiniMax.h"
#include "bubble.h"
using namespace std;

void main(void)
{
	setlocale(0 , "ru");
	int mas[] = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };
	int n = sizeof(mas) / sizeof(int);

	cout << "Не отсортированный массив:" << endl;
	system("cls");
	for ( int i = 0; i < n; i++)
		cout << mas[i] << ' ';
	cout << endl;

	cout << "Сортировка <<МиниМакс>>" << endl;
	miniMax(mas, n);

	int mas2[] = { 2, 5, -8, 1, -4, 6, 3, -5, -9, 13, 0, 4, 9 };

	cout << "Сортировка пузырьком:" << endl;
	bubble(mas2, n);
	}
