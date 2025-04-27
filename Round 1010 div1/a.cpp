#include<bits/stdc++.h>
using namespace std;
bool solution(string s,int k){
    string srev=s;
    reverse(srev.begin(),srev.end());
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<srev[i]) return true;
        if(s[i]>srev[i]){
            for(int j=i+1;j<s.size();j++){
                if(s[j]<srev[i]){
                    count++;
                    return (count<=k);
                }
                
            }
            return false;
        }
        if(s[i]==srev[i]){
            for(int j=i+1;j<s.size();j++){
                if(s[j]<s[i]){
                    count++;
                    return (count<=k);
                }
            }
        }
    }
    return false;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        cout<<(solution(s,k)?"YES":"NO")<<endl;
        
    }
    return 0;
}