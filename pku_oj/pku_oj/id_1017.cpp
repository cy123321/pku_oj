#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f;       //  ��ͬ���Ͱ�װ�ĸ���
	int count;                  //  ͳ����Ҫ���ܺ���

	while (cin >> a >> b >> c >> d >> e >> f)
	{
		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0)
			break;              //  ����Ϊȫ0��ʾ�������
		
		count = f + e;
		//cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
		cout << count << endl;
	}

	return 0;
}