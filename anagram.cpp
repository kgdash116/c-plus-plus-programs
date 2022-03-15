#made my WNK
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void ana(string &s1,string &s2)

{
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if(s1.length()!=s2.length())
	{cout<<"the strings are not anagrams"<<endl;
	exit(-1);}
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]!=s2[i])
		{cout<<"the strings are not anagrams"<<endl;
		exit(-1);
		}
	
	}
	cout<<"the strings are anagrams"<<endl;
}
int main()
{
	string s1="";
	string s2="hellou";
	ana(s1,s2);
	return 0;
}
