#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        long long x; cin>> x;
        bool prime = true;
        for(long long j=2; j*j<=x; ++j){
            if(x%j==0){ 
                prime = false; 
            }
            
        }
        if (prime){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not Prime" << endl;
        }
    }
    

    exit(0);
}