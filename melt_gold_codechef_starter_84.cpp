#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    int i=1;
	    while(y+i < x){
	        y=y+i;
	        i++;
	    }
	    cout << i << endl; 
	}
	return 0;
}
