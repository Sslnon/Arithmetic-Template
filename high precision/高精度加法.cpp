#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main()
{
	char a1[100],b1[100];
	//字符组 
	int a[100],b[100],c[100];
	//处理之后的数组 
	int lena,lenb,lenc,i,x;
	//x表示进位，i省空间（虽然没用） 
	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b)); 
	memset(c,0,sizeof(c)); 
	//初始化加数，结果数组
	gets(a1);
	gets(b1);
	//输入数串 
	lena=strlen(a1);
	lenb=strlen(b1);
	//计算数串长度 
	
	for(i=0;i<=lena-1;i++)
		a[lena-i]=a1[i]-48;
	//48为0的ASCii码	
	for(i=0;i<=lenb-1;i++)
		b[lenb-i]=b1[i]-48;
	//输入数串转数组 
	
	lenc=1;
	x=0;
	
	while(lenc<=lena||lenc<=lenb)
	//为了处理a，b中所有的数 
	{
		c[lenc]=a[lenc]+b[lenc]+x;
		x=c[lenc]/10;
		c[lenc]%=10;
		lenc++;
	}
	
	c[lenc]=x;
	//处理最后一位进位
	
	if(c[lenc]==0)
		lenc--;
	
	for(i=lenc;i>=1;i--)
		cout<<c[i];
	cout<<endl; 

	/* 测试	
	for(i=0;i<=20;i++)
		cout<<a[i];
	cout<<endl; 
	for(i=0;i<=20;i++)
		cout<<b[i];
	cout<<endl; 
		for(i=0;i<=20;i++)
		cout<<c[i];
	cout<<endl; 
	
	*/ 
	
	return 0;


} 



