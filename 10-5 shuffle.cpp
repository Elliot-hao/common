#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

void print(vector<int> &T)
{
	for(vector<int>::iterator it=T.begin();it!=T.end();it++)
		cout<<*it<<"\t";
	cout<<endl;
}

int main() 
{
	vector<int>a;
	int b[3]={0};
	for(int i=0;i<=10;i++)
		a.push_back(i);
	cout<<a.size()<<endl;
	print(a);
	cout<<endl;
	reverse(a.begin(),a.end());
	print(a);
	cout<<endl;
	random_shuffle(a.begin(),a.end());
	print(a);
	cout<<endl;
	a.insert(a.begin()+2,5);
	a.insert(a.begin()+2,5);
	print(a);
	cout<<endl;
	unique(a.begin(),a.end());
	print(a);
	cout<<endl;
	return 0;
} 
