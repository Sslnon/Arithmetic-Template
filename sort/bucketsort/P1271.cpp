/*
	21.3.3
	https://www.luogu.com.cn/problem/P1271
*/

#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int m[2000001];

/* 插入排序会tle 2个点 
void array_sort(int a[],int n)
{
   for(int i=1;i<n;i++)
		for(int j=i-1;j>=0&&a[j]>a[j+1];j--)
			swap(a[j],a[j+1]);	
}
*/

/* 
void print(int ms)
{
	for(int i=0;i<=ms-1;i++)
		cout<<m[i]<<" ";
}
*/ 

int main()
{
	int n,ms,temp;
	memset(m,0,sizeof(m));
	
	cin>>n>>ms;
	
	for(int i=1;i<=ms;i++)
	{
		cin>>temp;
		m[temp]++;
	}
	
	for(int i=1;i<=n;i++)
	{
		while (m[i]>0)
		{
			cout<<i<<" ";
			m[i]--;
		}
		
	}

	cout<<endl;
	return 0;
}
