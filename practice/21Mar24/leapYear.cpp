#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int x,y,z;
	cin>>x>>y>>z;
	int i = 1;
	while(true){
	    if( (i * x) + y > z ) break;
	    i++;
	}
	cout << i - 1 << endl;
	}
	return 0;
}
