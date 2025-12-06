#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t; 
    while (t--) {
        string s;cin>>s;
        int l = s.length();
        s = s.substr(0, s.size() / 2);
        int k = unique(s.begin(), s.end()) - s.begin();
        cout << (k == 1 ? "NO" : "YES") << '\n';
    }
    return 0;
}
