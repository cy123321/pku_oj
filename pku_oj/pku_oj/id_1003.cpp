#include <iostream>
using namespace std;

int main()
{
	float s, t,num;

	while (cin >> s, s != 0)
	{
		//cout << s << endl;
		t = 0;
		num = 0;
		while (t < s) 
		{
			//cout << t << endl;
			//cout << num << endl;
			num++;
			t += 1.0 / (num+1);
		}
		cout << num << " card(s)\n";
	}
	
	return 0;
}