#include <iostream>
using namespace std;
enum maya_month{
	pop, no, zip, zotz, tzec, xul, yoxkin, mol, chen,yax, zac, ceh, mac, kankin, muan, pax, koyab, cumhu
};

int main()
{
	int num;
	char c;
	int day, year;
	maya_month mon;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> day >> c >> (int &)mon >> year;
		cout << day << endl;
		cout << mon;

	}

	return 0;
}