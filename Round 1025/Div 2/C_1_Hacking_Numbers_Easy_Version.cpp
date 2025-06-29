#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    // int n;
    // cin>>n;
    // cout<<"digit"<<endl;
    // int x;
    // cin>>x;
    // cout<<"digit"<<endl;
    // cin>>x;
    // for(int i=0;i<4;i++){
    //     cout<<"div 2"<<endl;         //Division must be done if divisor
    //     cin>>x;
    // }
    // cout<<"add "<<n-1<<endl;
    // cin>>x;
    // cout<<"!"<<endl;
    // cin>>x;
    // assert(x==1);
    int n;
    cin >> n;

    cout << "digit" << endl;
    int x;
    cin >> x;

    cout << "digit" << endl;
    cin >> x;

    for (int i = 8; i >= 1; i /= 2) {
        cout << "add " << -i << endl;
        cin >> x;
    }

    cout << "add " << n - 1 << endl;
    cin >> x;

    cout << "!" << endl;
    cin >> x;
    assert(x == 1);
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}