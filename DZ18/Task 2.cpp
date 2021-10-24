#include<iostream>
using namespace std;

void decNum(int* num)
{
	--(*num);
}

int main()
{
	int num;

	cout << "Enter number: ";
	cin >> num;

	decNum(&num);

	cout << num << endl;

	return 0;
}