#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    float track = (x/100)*10;
	    cout << max((int)track,100) << endl;
	}
	return 0;
}
       