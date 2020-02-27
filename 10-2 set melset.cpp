#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;

void print(set<int> &T)
{
	for(set<int>::iterator it=T.begin();it!=T.end();it++)
		cout<<*it<<"\t";
	cout<<endl;
}
int main() 
{
	set<int>a;
	multiset<int>b;
	for(int i=10;i>0;i--)
	{
		a.insert(i);
		b.insert(i);
	}	
	print(a);
	a.insert(19);
	print(a);
//	print(b);
//	b.insert(5);
//	print(b);
//	cout<<b.count(5)<<endl;
//	b.erase(5);
//	print(b);
	set<int>c(a),d;
	c.erase(2);
	c.erase(3);
	c.erase(8);
	print(c);
	return 0;
} 
