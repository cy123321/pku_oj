#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f;       //  不同类型包装的个数
	int count;                  //  统计需要的总盒数

	while (cin >> a >> b >> c >> d >> e >> f)
	{
		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0)
			break;              //  假如为全0表示输入结束
		
		count = f + e;
		//cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
		cout << count << endl;
	}

	return 0;
}