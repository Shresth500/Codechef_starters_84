#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int count=0;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin >> temp;
	        if(temp >= x)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}
