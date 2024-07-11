#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int maxi = z/y;
	    cout << min(x,maxi) << endl;
	}
	return 0;
}
