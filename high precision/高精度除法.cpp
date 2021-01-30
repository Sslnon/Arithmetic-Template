#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main()
{
	char a1[100];
	int a[100],c[100],lena,x=0,lenc,b;
	
	memset(a,0,sizeof(a));
	memset(c,0,sizeof(c));
	
	gets(a1);
	cin>>b;
	
	lena=strlen(a1);
	for(int i=0;i<=lena-1;i++)
		a[i+1]=a1[i]-48;
	//´¢´æ
	
	for(int i=1;i<=lena;i++)
	{
		c[i]=(x*10+a[i])/b;
		x=(x*10+a[i])%b;	
	} 
	//°´Î»Ïà³ý
	
	lenc=1;
	while(c[lenc]==0&&lenc<lena)
		lenc++;
		
		
	for(int i=lenc;i<=lena;i++)
		cout<<c[i];
	cout<<endl;

	

	
	return 0;	
} 
