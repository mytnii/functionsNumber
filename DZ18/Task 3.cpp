#include<iostream>
using namespace std;

void powerNum(long long* num)
{
	*num *= *num;
}

int main()
{
	long long num;

	cout << "Enter number: ";
	cin >> num;

	powerNum(&num);

	cout << num << endl;

	return 0;
}