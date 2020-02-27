#include<iostream>
#include<map> 
#include<string>
using namespace std;

multimap<string,int>count;
string s;

void print(multimap<string,int> &T)
{
	for(multimap<string,int>::iterator it=T.begin();it!=T.end();it++)
		cout<<(*it).first<<"\t"<<(*it).second<<endl;
}

int main() 
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		count.insert(make_pair(s,i));
	}
	print(count);
	count.insert(make_pair("ac",1));//一个键只能对应一个值 
	cout<<endl; 
	print(count);
	return 0;
} 
