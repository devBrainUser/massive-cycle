#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,"rus");

	const int size = 10;

	int arr[size];

	for (int i = 0; i != size; i++)
	{
		cout << "������� " << i + 1 << " �����:";
		cin >> arr[i];
		cout << endl;
	}
	
	for (int a = 0; a != size;a++)
	{
		cout << arr[a]<<" ";
	}
}