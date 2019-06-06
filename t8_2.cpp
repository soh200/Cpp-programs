#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
	char s1[50],s2[50],s3[50],s4[50],c;
	cout<<"Input the first String:";
	gets(s1);
	cout<<"Input the second String:";
	gets(s2);
	strcpy(s3,s1);
	strcpy(s4,s2);
	if(strlen(s1)!=strlen(s2))
	{
		cout<<s1<<" and "<<s2<<" are not Anagram";
		return 0;
	}
	for(int i=0;i<strlen(s1);i++)
	{
		for(int j=0,c=0;j<strlen(s2);j++)
		{
			if(s1[i]==s2[j])
			c++;
			
		}
		if(c==0)
		{
			cout<<s1<<" and "<<s2<<" are not Anagram";
			return 0;
		}
	
	}
	cout<<s1<<" and "<<s2<<" are Anagram";	
	}
	

