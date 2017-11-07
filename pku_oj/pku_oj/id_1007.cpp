#include <iostream>
#include <vector>
using namespace std;

int count_rev(vector<char> seq, int start)       // 统计序列的逆序数 
{
	int count = 0;
	
	for (int i = start; i < seq.size(); i++)
	{
		for (int j = i + 1; j < seq.size(); j++)
		{
			if (seq[i] > seq[j])
				count++;     //  递归求解
		}
	}
	return count;
}

//  根据逆序数排序
void bubble(vector<int> rever, vector<vector<char> >& dna, int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (rever[i] > rever[j])     //  发现逆序，进行交换
			{
				vector<char> temp;
				int t;
				t = rever[i];
				rever[i] = rever[j];
				rever[j] = t;
				temp = dna[i];
				dna[i] = dna[j];
				dna[j] = temp;
			}
		}
	}
}

int main()
{
	int m, n;
	char l;
	cin >> n >> m;
	vector<int> rever;                //  记录每个序列的逆序数

	for (int i = 0; i < m; i++)
		rever.push_back(0);

	vector<vector<char> > dna;        //  记录序列
	for (int i = 0; i < m; i++)
	{
		vector<char> sdna;            //  每个序列
		for (int j = 0; j < n; j++)
		{
			cin >> l;
			sdna.push_back(l);
		}
//		cout << sdna.size() << endl;
		dna.push_back(sdna);
	}

	for (int i = 0; i < dna.size(); i++)
	{
		rever[i] = count_rev(dna[i], 0);
		//cout << rever[i] << endl;
	}

	bubble(rever, dna, dna.size());        //   根据逆序数排序

	for (int i = 0; i < dna.size(); i++)
	{
		rever[i] = count_rev(dna[i], 0);
		//cout << rever[i] << endl;
	}
	
//	cout << dna.size() << endl;
	for (int i = 0; i < dna.size(); i++)    //   输出排序后的结果
	{
		for (int j = 0; j < dna[i].size(); j++)
			cout << dna[i][j];
		cout << endl;
	}

	return 0;
}