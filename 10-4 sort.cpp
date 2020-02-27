#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;
int a[100]; 

bool cmp(int a,int b)//自定义优先级 
{
	return a>b;
}

int main() 
{
	for(int i=0;i<10;i++)
		a[i]=i;
	//sort(a,a+10,greater<int>());//less
	sort(a,a+10,cmp);
	for(int i=0;i<10;i++)
		cout<<a[i]<<"\t";
	return 0;
} 
