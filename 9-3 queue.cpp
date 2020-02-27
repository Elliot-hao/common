#include<iostream>
#include<queue> 
using namespace std;

int main() 
{
	queue<int>q;
	for(int i=1;i<=5;i++)
		q.push(i);
	cout<<q.front()<<endl<<endl;
	cout<<q.size()<<endl<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();
	 } 
	return 0;
} 
