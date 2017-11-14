#include <iostream>

using namespace std;

int re[15] = {0};

int joseph(int k)                 //   返回最终结果
{
	int length = 2 * k, m, j, start;   //   length = 总人数; m = 结果; start = 循环开始

	m = k + 1;
	for (;; m++) 
	{
		start = 0;                                //   从第一个开始
		for (j = 0; j < k; j++)
		{
			start = (start + m - 1) % (length - j);  //   本次要删除的和下一次开始的地方
			if (start < k)                           //   假如删除的是前k个好人则重新开始
				break;
		}
		if (j == k)                            //    删除完后k个坏人
			break;
	}
	re[k] = m;

	return m;
}

int main()
{
	int k, m;
	
	while (cin >> k, k != 0)
	{
		if (re[k])            //   假如结果已经存在直接调用就行了
			m = re[k];
		else                  //   新出现的另外计算
			m = joseph(k);
		
		cout << m << endl;
	}

	return 0;
}