#include <iostream>
#include <vector>
using namespace std;

int count_rev(vector<char> seq, int start)       // ͳ�����е������� 
{
	int count = 0;
	
	for (int i = start; i < seq.size(); i++)
	{
		for (int j = i + 1; j < seq.size(); j++)
		{
			if (seq[i] > seq[j])
				count++;     //  �ݹ����
		}
	}
	return count;
}

//  ��������������
void bubble(vector<int> rever, vector<vector<char> >& dna, int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (rever[i] > rever[j])     //  �������򣬽��н���
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
	vector<int> rever;                //  ��¼ÿ�����е�������

	for (int i = 0; i < m; i++)
		rever.push_back(0);

	vector<vector<char> > dna;        //  ��¼����
	for (int i = 0; i < m; i++)
	{
		vector<char> sdna;            //  ÿ������
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

	bubble(rever, dna, dna.size());        //   ��������������

	for (int i = 0; i < dna.size(); i++)
	{
		rever[i] = count_rev(dna[i], 0);
		//cout << rever[i] << endl;
	}
	
//	cout << dna.size() << endl;
	for (int i = 0; i < dna.size(); i++)    //   ��������Ľ��
	{
		for (int j = 0; j < dna[i].size(); j++)
			cout << dna[i][j];
		cout << endl;
	}

	return 0;
}