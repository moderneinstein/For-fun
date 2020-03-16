#include <iostream>
#include <cmath>
using namespace std;

// Power Set = gives all the subsets of an array in O(2^n)
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)  cin>>a[i];
	int subsets = pow(2, n);
	for(int i=1; i<subsets; i++) {
	    for(int j=0; j<n; j++){
	        if(i & (1<<j))
	            cout<<a[j]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
