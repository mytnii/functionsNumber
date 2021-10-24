#include<iostream>
using namespace std;

void inverting(int num, int* num2)
{
	while (num != 0)
	{
		
		*num2 *= 10;
		*num2 += num % 10;
		num /= 10;
	}
}

int main()
{
	int num, num2 = 0;

	cout << "Enter number: ";
	cin >> num;

	inverting(num, &num2);

	cout << num2 << endl;

	return 0;
}