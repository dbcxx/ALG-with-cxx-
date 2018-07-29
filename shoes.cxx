/*
 * 
 * SHOES.cxx
 *  CASE SENSITIVE 'l' is different from 'L'
 * program on selection on pairs of shoes differenciating left from right 
 * made use of a 2D array 
 */

#include <iostream>
#include <vector>

using namespace std;
const int maxN = 100;
int a;
char foot;
int l[maxN],r[maxN];
int Final=0;
int n;

int main()
{	
	cin>> n;
	for(int i=1;i<=n;i++){
		cin>>a>>foot;
		if(foot=='R') r[a]++;
		else l[a]++;
	}	
	for(int i=1;i<=maxN;i++){
		 Final+=min(l[i],r[i]);
	}
	cout<<Final<<endl;
	return 0;
}

