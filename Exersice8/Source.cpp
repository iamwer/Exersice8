#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	
	unsigned n, k, sum = 0;
	cout << "������� N:	";
	cin >> n;
	cout << "������� ������� k: ";
	cin >> k;

	for (int counter = 1; counter <= n; counter++)
	{
		sum = sum + pow(counter, k);
	}
	cout << "�����: " << sum << endl;
	system("pause");
	return 0;
}