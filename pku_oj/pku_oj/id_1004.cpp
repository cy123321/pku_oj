#include <iostream>
using namespace std;

int main()
{
	float balance,aver;
	aver = 0;

	for (int i = 0; i < 12; i++)
	{
		cin >> balance;
		aver += balance;
	}

	cout << "$" << aver / 12 << endl;

	return 0;
}