#include <iostream>
using namespace std;

short find_common(short a, short b, short c, short d)
{
	short i;
	for (i = d; i < d + 21252; i++)
	{
		if ((i - a) % 23 == 0 && (i - b) % 28 == 0 && (i - c) % 33 == 0 && (i > d))
			break;
	}
	return i - d;
}

int main()
{
	short p, e, i, d;
	short count,peak;
	count = 0;
	peak = 0;

	while (cin >> p >> e >> i >> d, !((p == -1) && (e == -1) && (i == -1) && (d == -1)))
	{
		count++;
		peak = find_common(p, e, i, d);
		cout << "Case " << count <<": the next triple peak occurs in "<< peak <<" days.\n";
	}
	return 0;
}