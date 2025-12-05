#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t; 
    int n = 0;
    while(t--){
        string s ;
        cin>>s;
        if(s[1] == '+'){
            n=n+1;
        }
        else n=n-1;
    }
    cout<<n<<endl;
    return 0;
}
