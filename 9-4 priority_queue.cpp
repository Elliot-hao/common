#include<iostream>
#include<queue>
using namespace std;

struct goods
{
	double w;//重量 
	double v;//价值 
}g[100];

bool operator <(const goods &a,const goods &b)
{
	return a.v<b.v;//按价值越大越优先 
}

int main() 
{
	priority_queue<goods>q;
	for(int i=1;i<=5;i++)
	{
		cin>>g[i].w>>g[i].v;
		q.push(g[i]);
	}
		
	cout<<q.top().w<<"\t"<<q.top().v<<endl<<endl;
	cout<<q.size()<<endl<<endl;
	while(!q.empty())
	{
		cout<<q.top().w<<"\t"<<q.top().v<<endl;
		q.pop();
	 } 
	return 0;
} 
