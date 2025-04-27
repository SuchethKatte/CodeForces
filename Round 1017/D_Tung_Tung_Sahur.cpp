#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sol(string p, string s){
    if(s.size()>2*p.size()||p.size()>s.size()||p[0]!=s[0]){
        return false;
    }
    vector<int> a;
    vector<int> b;
    int count=1;
    for(int i=1;i<p.size();i++){
        if(p[i]!=p[i-1]){
            a.push_back(count);
            count=1;
        }
        else{
            count++;
        }
    }
    a.push_back(count);
    count=1;
    for(int i=1;i<s.size();i++){
        if(s[i]!=s[i-1]){
            b.push_back(count);
            count=1;
        }
        else{
            count++;
        }
    }
    b.push_back(count);
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(b[i]>2*a[i]||a[i]>b[i]) return false;
    }
    return true;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string p,s;
        cin>>p>>s;
        cout<<(sol(p,s)?"YES":"NO")<<endl;
    }
}
