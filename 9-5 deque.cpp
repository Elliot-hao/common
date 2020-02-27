#include<iostream>
#include<iterator>
#include<deque>
#include<algorithm> 
using namespace std;
void show(int n) {cout<<n<<endl;}
void print(deque<int> &T)
{
	for_each(T.begin(),T.end(),show);
	cout<<endl;
}
int main() 
{
	deque<int>dq;
	for(int i=1;i<=5;i++)
		dq.push_back(i);
	for(int i=1;i<=5;i++)
		dq.push_front(i);
	print(dq);
	for(int i=1;i<=2;i++)
		dq.pop_back();
	print(dq);	
	for(int i=1;i<=2;i++)
		dq.pop_front();
	print(dq);
	cout<<dq.size()<<endl;
	dq.clear();
//	while(!dq.empty())
//		dq.pop_front();
	cout<<dq.size()<<endl;
	return 0;
} 
