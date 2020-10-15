#include <iostream>

using namespace std;

void reverse1(string s)
{
	int n=s.size();
	string s1="";
	for(int i=n-1;i>=0;i--)
	{
		s1+=s[i];
	}
	cout<<s1;
}

void reverse2(string s)
{
	int n=s.size();
	int i=0,j=n-1;
	while(i<j)
	{
		char temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	cout<<s;
}

int main()
{
	string s="Mohan";
	reverse1(s);
	cout<<"\n\n";
	reverse2(s);
	return 0;
}
