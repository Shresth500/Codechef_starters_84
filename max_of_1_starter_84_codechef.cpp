#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    char val_1='1',val_0='0';
	    int count_of_zero = 0,count_of_one=0;
	    string one,zero;
	    one.push_back('1');
	    zero.push_back('0');
	    for(int i=1;i<s.size();i++){
	        if(one[i-1]!=s[i-1]){
	            one.push_back('1');
	        }
	        else
	            one.push_back('0');
	    }
	    for(int i=1;i<s.size();i++){
	        if(zero[i-1]!=s[i-1]){
	            zero.push_back('1');
	        }
	        else
	            zero.push_back('0');
	    }
	    for(int i=0;i<one.size();i++){
	        if(one[i]=='1')
	            count_of_one++;
	        //cout << one[i] << " ";
	    }
	    //cout << count_of_one;
	    //cout << endl;
	    for(int i=0;i<zero.size();i++){
	        if(zero[i]=='1')
	            count_of_zero++;
	    //   cout << zero[i] << " ";
	    }
	    //cout << endl;
	    cout << max(count_of_one,count_of_zero) << endl;
	}
	return 0;
}
