#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main()
{
	char  a1[100],b1[100];
	int a[100],b[100],c[100000];
	int lena,lenb,lenc,x;

	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b)); 
	memset(c,0,sizeof(c)); 

	gets(a1);
	gets(b1);
	lena=strlen(a1);
	lenb=strlen(b1);
	
	for(int i=0;i<=lena-1;i++)
		a[lena-i]=a1[i]-48;
	for(int i=0;i<=lenb-1;i++)
		b[lenb-i]=b1[i]-48;
	//���洦��
	
	for(int i=1;i<=lena;i++)
	{
		x=0;
		for(int j=1;j<=lenb;j++)
		{
			c[i+j-1]=a[i]*b[j]+x+c[i+j-1];
			x=c[i+j-1]/10;
			c[i+j-1]%=10;
		}	
	} 
	
	lenc=lena+lenb;
	while(c[lenc]==0&&lenc>1)
		lenc--;
	for(int i=lenc;i>=1;i--)
		cout<<c[i];
	cout<<endl; 
		
	return 0;
} 
