#include <iostream>
#include <string>
#include <stack>
using namespace std;

string command[4] = {"QUIT","VISIT","BACK","FORWARD"};   //   可以使用的3种命令
stack<string> back_ward;
stack<string> for_ward;                         //   一个向前一个向后
string source = "http://www.acm.org/";                   //   源网页

int main()
{
	string next_page = source;                 //   存储当前网址

	string com;                                //   存储指令
	while (cin >> com, com != command[0])
	{
		if (com == command[1])                          //   VISIT指令
		{
			back_ward.push(next_page);                  //   先将当前的网页压入back栈中
			cin >> next_page;                           //   输入新访问的网页
			while (!for_ward.empty())                 
				for_ward.pop();

			cout << next_page << endl;
		}

		else if (com == command[2])                     //   BACK指令
		{
			if (back_ward.size() == 0)                  //   无法再向后退了
			{
				cout << "Ignored\n";
			}
			else
			{
				for_ward.push(next_page);               //   先把当前网页存到forward栈中
				next_page = back_ward.top();            //   跳转到最近访问的网页
				back_ward.pop();
	
				cout << next_page << endl;
			}
		}

		else                                            //   FORWARD指令
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