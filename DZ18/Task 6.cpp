#include<iostream>
using namespace std;

void modNumber(int* num)
{
	if (*num < 0)
	{
		*num *= -1;
	}
}
int main()
{
	int num;

	cout << "Enter number: ";
	cin >> num;

	modNumber(&num);

	cout << num << endl;

	return 0;
}