#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++)
	{
		switch(s[i])
		{
			case 'A':
				cout << "T";
				break;
			case 'T':
				cout << "A";
				break;
			case 'C':
				cout << "G";
				break;
			case 'G':
				cout << "C";
				break;
		}
	}
	return 0;
}
