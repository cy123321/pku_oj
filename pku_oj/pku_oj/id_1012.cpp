#include <iostream>

using namespace std;

int re[15] = {0};

int joseph(int k)                 //   �������ս��
{
	int length = 2 * k, m, j, start;   //   length = ������; m = ���; start = ѭ����ʼ

	m = k + 1;
	for (;; m++) 
	{
		start = 0;                                //   �ӵ�һ����ʼ
		for (j = 0; j < k; j++)
		{
			start = (start + m - 1) % (length - j);  //   ����Ҫɾ���ĺ���һ�ο�ʼ�ĵط�
			if (start < k)                           //   ����ɾ������ǰk�����������¿�ʼ
				break;
		}
		if (j == k)                            //    ɾ�����k������
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
		if (re[k])            //   �������Ѿ�����ֱ�ӵ��þ�����
			m = re[k];
		else                  //   �³��ֵ��������
			m = joseph(k);
		
		cout << m << endl;
	}

	return 0;
}