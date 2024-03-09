#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n,aa,bb,cc,dd,ee,ff,gg,hh,ii,_=0;
	cin>>n;
	for(int a=1;a<=9;a++)
		for(int f=a+1;f<=9;f++)
			for(int i=f+1;i<=9;i++)
				for(int b=1;b<=9;++b)
					if(b!=a&&b!=f&&b!=i)
						for (int d=b+1;d<=9;++d)
							if (d!=a&&d!=f&&d!=i&&a+b+d+f==n)
								for (int c=1;c<=9;++c)
									if (c!=a&&c!=f&&c!=i&&c!=b&&c!=d)
										for (int e=c+1;e<=9;++e)
											if (e!=a&&e!=f&&e!=i&&e!=b&&e!=d&&a+c+e+i==n)
												for (int g=1;g<=9;++g)
													if (g!=a&&g!=f&&g!=i&&g!=b&&g!=d&&g!=c&&g!=e) {
														int h=45-(a+b+c+d+e+f+g+i);
													    if (g<h&&f+g+h+i==n) {
															_++;
														    aa=a,bb=b,cc=c,dd=d,ee=e,ff=f,gg=g,hh=h,ii=i;
														}
													}
	cout<<_<<endl;
	if(_)cout<<aa<<' '<<bb<<' '<<cc<<' '<<dd<<' '<<ee<<' '<<ff<<' '<<gg<<' '<<hh<<' '<<ii;
	return 0;
}
