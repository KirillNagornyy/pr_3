#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		cout << "Enter the beginning of the range\n";
		int beginning_range;
		cin >> beginning_range;
		cout << "Enter the end of the range\n";
		int end_range;
		cin >> end_range;
		int summ_range = 0;
		if (beginning_range >= end_range)
		{
			cout << ("invalid input\nrepeat the input");
		}
		else break;
	}

	system("pause");
}
