#include<iostream>
using namespace std;
int Sum(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	cout<<"Nhap hai so a va b :";
	cin>>a>>b;
	cout<<"Tong cua hai so la :"<<Sum(a,b)<<endl;
	return 0;
}
