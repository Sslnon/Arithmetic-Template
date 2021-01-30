#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;


int main()
{
	char  n[100],a1[100],b1[100];
	int a[100],b[100],c[100];
	int lena,lenb,lenc;

	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b)); 
	memset(c,0,sizeof(c)); 

	gets(a1);
	gets(b1);
	//初处理与加法类似
	//减法需要判断减数的大小
	//判断方法为判断位数或者同位比大小
	if(strlen(a1)<strlen(b1)||(strlen(a1)==strlen(b1)&&strcmp(a1,b1)<0)) 
	{
		strcpy(n,a1);
		strcpy(a1,b1);
		strcpy(b1,n);
		cout<<'-';	
	}
	lena=strlen(a1);
	lenb=strlen(b1);

	for(int i=0;i<=lena-1;i++)
		a[lena-i]=a1[i]-48;
	for(int i=0;i<=lenb-1;i++)
		b[lenb-i]=b1[i]-48;		
		
	lenc=1;
	
	while(lenc<=lena||lenc<=lenb)
	{
		if(a[lenc]<b[lenc])
		{
			a[lenc]+=10;
			a[lenc+1]--;
		}
		
		c[lenc]=a[lenc]-b[lenc];
		lenc++;			
		
	}
	
	while(c[lenc]==0&&(lenc>1))
		lenc--;
	// 处理多余的0	
	for(int i=lenc;i>=1;i--)
		cout<<c[i];
	cout<<endl; 
	
		
	return 0;
	
}


