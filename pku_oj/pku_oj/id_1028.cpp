#include <iostream>
#include <string>
#include <stack>
using namespace std;

string command[4] = {"QUIT","VISIT","BACK","FORWARD"};   //   ����ʹ�õ�3������
stack<string> back_ward;
stack<string> for_ward;                         //   һ����ǰһ�����
string source = "http://www.acm.org/";                   //   Դ��ҳ

int main()
{
	string next_page = source;                 //   �洢��ǰ��ַ

	string com;                                //   �洢ָ��
	while (cin >> com, com != command[0])
	{
		if (com == command[1])                          //   VISITָ��
		{
			back_ward.push(next_page);                  //   �Ƚ���ǰ����ҳѹ��backջ��
			cin >> next_page;                           //   �����·��ʵ���ҳ
			while (!for_ward.empty())                 
				for_ward.pop();

			cout << next_page << endl;
		}

		else if (com == command[2])                     //   BACKָ��
		{
			if (back_ward.size() == 0)                  //   �޷����������
			{
				cout << "Ignored\n";
			}
			else
			{
				for_ward.push(next_page);               //   �Ȱѵ�ǰ��ҳ�浽forwardջ��
				next_page = back_ward.top();            //   ��ת��������ʵ���ҳ
				back_ward.pop();
	
				cout << next_page << endl;
			}
		}

		else                                            //   FORWARDָ��
		{
			if (for_ward.size() == 0)
			{
				cout << "Ignored\n";
			}
			else
			{
				back_ward.push(next_page);
				next_page = for_ward.top();
				for_ward.pop();
				cout << next_page << endl;
			}
		}

	}
	return 0;
}