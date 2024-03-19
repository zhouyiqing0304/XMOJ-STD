#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(long long decimalNumber) {
    if (decimalNumber == 0) return "0";
    string binaryString;
    while (decimalNumber > 0) {
        binaryString.push_back('0' + (decimalNumber & 1));
        decimalNumber >>= 1;
    }
    reverse(binaryString.begin(), binaryString.end());
    return binaryString;
}
bool isPalindromeStr(string s)
{
	string t=s;
	reverse(t.begin(),t.end());
	if(s==t)return true;
	return false;
}
bool isPalindromeInt(long long num){
    long long reversedNum = 0,originalNum = num;
    while (num > 0) reversedNum = reversedNum * 10 + num % 10,num /= 10;
    return originalNum == reversedNum;
}
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	long long l,r,sum=0;
	cin>>l>>r;
	for(;l<=r;l++){
		if(isPalindromeInt(l)){sum++;continue;}
		if(isPalindromeStr(decimalToBinary(l)))sum++;
	}
	cout<<sum;
	return 0;
}
