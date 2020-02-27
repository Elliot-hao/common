#include<iostream>
#include<list>
#include<iterator>
#include<algorithm> 
using namespace std;

void show(int n) {cout<<n<<endl;}
void print(list<int> &T)
{
	for_each(T.begin(),T.end(),show);
	cout<<endl;
}
int main() 
{
	list<int>one(5,2);//初始化为5个2 
	one.push_back(10);
	one.push_front(0);
	print(one);
	
	int a[7]={1,2,3,4,5,2,1};
	list<int>two;
	two.insert(two.begin(),a,a+7);//插入a
	print(two);
	
	list<int>three(two);//初始化为two 
	print(three);
	
	three.remove(2);//删除值为2的所有元素 
	print(three);
	
	three.splice(three.begin(),one);//插入one，插入后one为空 
	print(three);
	print(one);
	
	three.unique();//去连续重复 
	print(three);
	
	three.sort();//排序后去重 
	three.unique();
	print(three);
	
	two.sort();//排序后合并 
	three.merge(two);
	print(three);
	
	
	return 0;
} 
