#include<iostream>
using namespace std;

void incNum(int* num)
{
	++(*num);
}

int main()
{
	int num;

	cout << "Enter number: ";
	cin >> num;

	incNum(&num);

	cout << num << endl;
	return 0;
}