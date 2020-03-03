#include<iostream>
#include<cstring>
using namespace std;
const int maxn=1000+5;
int n,m;
int head[maxn],cnt,root;
struct Edge
{
	int to,next;
}e[maxn<<1];

int low[maxn],dfn[maxn],num;
void add(int u,int v)
{
	e[++cnt].next=head[u];
	e[cnt].to=v;
	head[u]=cnt;	
}
void tarjan(int u,int fa)
{
	dfn[u]=low[u]=++num;
	int count=0;
	for(int i=head[u];i;i=e[i].next)
	{
		int v=e[i].to;
		if(v==fa)
			continue;
		if(!dfn[v])
		{
			tarjan(v,u);
			low[u]=min(low[u],low[v]);
			if(low[v]>=dfn[u])
			{
				count++;
				if(u!=root||count>1)
					cout<<u<<"ÊÇ¸îµã"<<endl; 
			}	
		}
		else
			low[u]=min(low[u],dfn[v]);
	}
}

void init()
{
	memset(head,0,sizeof(head));
	memset(low,0,sizeof(low));
	memset(dfn,0,sizeof(dfn));
	cnt=num=0;
}

int main()
{
	while(cin>>n>>m)
	{
		init();
		int u,v;
		while(m--)
		{
			cin>>u>>v;
			add(u,v);
			add(v,u);
		}
		for(int i=1;i<=n;i++)
			if(!dfn[i])
			{
				root=i;
				tarjan(i,0);
			 } 
	}
	return 0;
}

