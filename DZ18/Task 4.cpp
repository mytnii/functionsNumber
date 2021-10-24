#include<iostream>
using namespace std;

void exchange(int* num, int* num2)
{
	int num3 = *num + *num2;

	*num = num3 - *num;
	*num2 = num3 - *num2;
}
int main()
{
	int num, num2;

	cout << "Enter number: ";
	cin >> num;

	cout << "Enter number: ";
	cin >> num2;

	exchange(&num, &num2);

	cout << num << " " << num2 << endl;

	return 0;
}