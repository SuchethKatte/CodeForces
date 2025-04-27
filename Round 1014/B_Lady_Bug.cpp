#include<bits/stdc++.h>
using namespace std;
bool solution(string a, string b){
    int countoddones=0 ,countevenones=0;
    int countoddzeroes=0, countevenzeroes=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1'&&i%2) countoddones++;
        else if(a[i]=='1') countevenones++;
        if(b[i]=='0'&&i%2) countoddzeroes++;
        else if(b[i]=='0') countevenzeroes++; 
    }
    return (countoddones<=countevenzeroes&&countevenones<=countoddzeroes);
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string a, b;
        cin>>a>>b;
        cout<<(solution(a, b)?"YES":"NO")<<endl;
    }
}