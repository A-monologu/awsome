
#include<iostream>
using namespace std;
int main()
{   
	int h;
	cout << "������Ҫ�����δ�С��������:";
	cin >> h;
	while (h / 2 == 0)
	{
		cout << "����������������";
		cin >> h;
	}
	int i, j, k;
	for (i = 1; i <= h/2; i++)
	{
		for (j = 1; j <=h/2-(i-1); j++)
			cout << " ";
		for (k = 1; k <=i*2-1; k++)
			cout<<"*";
		    cout << "\n";
	}
	for (i = 1; i <= h/2+1; i++)
	{
		for (j =1; j < i; j++)
			cout<<" ";
		for (k = 1; k <= h-2*(i-1); k++)
			cout<<"*";
		    cout<<"\n";
	}
	system("pause");
	return 0;
}
