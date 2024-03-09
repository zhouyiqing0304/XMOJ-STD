#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ld = long double;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define JUGAD freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define pb push_back
#define po pop_back
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define pii pair<int,int>
#define pll pair<lli,lli>
#define pdd pair<ld,ld>
#define ff first
#define ss second
const int N = 2e5+5;
const lli MOD = 1e9+7;

bool check(string s,char ch){
	for(int i=0;i<s.size();i++){
		if(s[i]==ch){return true;}
	}
	return false;
}

int main(){
   	 freopen("c.in","r",stdin) ;
	freopen("c.out","w",stdout) ;

	string s;cin>>s;
	int n=s.size();
	for(int i=0;i<n;){
		if(i+9<n){
			if(s.substr(i,10)=="workeraser"){
				i+=10;continue;
			}
		}
		if(i+8<n){
			if(s.substr(i,9)=="workerase"){
				i+=9;continue;
			}
		}
		if(i+5<n){
			if(s.substr(i,6)=="worker"){
				i+=6;continue;
			}
		}
		if(i+5<n){
			if(s.substr(i,6)=="eraser"){
				i+=6;continue;
			}
		}
		if(i+4<n){
			if(s.substr(i,5)=="erase"){
				i+=5;continue;
			}
		}
		if(i+3<n){
			if(s.substr(i,4)=="work"){
				i+=4;continue;
			}
		}
		cout<<"NO";return 0;
	}
	cout<<"YES";
}
