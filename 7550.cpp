#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	cout<<a<<" seconds = "<<a/3600<<" hours "<<(a%3600)/60<<" minutes and "<<a%3600%60<<" seconds"; 
}
