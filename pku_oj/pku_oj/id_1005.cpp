#include <iostream>
#define pi 3.1415926
using namespace std;

int main()
{
	int N;
	float X, Y, R;
	
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> X >> Y;
		R = X * X + Y * Y;
		//cout << R << endl;

		int num = 0;

		while (50 * num * 2 < pi * R)
		{
			num++;
			//cout << num << endl;
		}
		cout << "Property " << i + 1 << ": This property will begin eroding in year " << num << ".\n";
	}
	cout << "END OF OUTPUT.\n";
	return 0;
}