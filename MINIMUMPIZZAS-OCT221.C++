#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int s= (x*y);
        if(s%4==0){
            cout<<(s/4)<<endl;
        }else{
            cout<<((s/4)+1)<<endl;
        }
    }
	// your code goes here
	return 0;
}
