#include <bits/stdc++.h>
using namespace std;

/*
 *            (\_/)
 *           ( •_•)
 *          / >**>
 */

void solution() {
	int a,b;
    cin>>a>>b;
    if(a>1&&b>1){
        cout << b-a<<endl;
    }else cout << 1 <<endl;   
}

int main() {
    int t; cin >> t;
    while (t--) solution();
    return 0;
}