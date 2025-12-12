#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tt;
    cin>>tt; 
    while (tt--) {
    //    write the code here
        int n;cin>>n;
        n /=2;
        if(n & 1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<2*i<<" ";
        }
        for(int i=1;i<n;i++){
            cout<<2*i - 1<<" ";
        }
        cout<<3*n - 1<<endl;
    }
    return 0;
}
