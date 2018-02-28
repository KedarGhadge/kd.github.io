#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string str="kedar";
	char ch[10];
	cout<<str<<endl;
	
	strcpy(ch,str.c_str());
	cout<<ch<<endl;
	
	string tmp(ch);
	cout<<tmp;
}


