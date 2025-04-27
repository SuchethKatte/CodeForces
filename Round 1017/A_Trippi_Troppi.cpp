#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string solution(string s1, string s2, string s3){
    string ans;
    ans+=s1[0];
    ans+=s2[0];
    ans+=s3[0];
    return ans;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        cout<<solution(s1,s2,s3)<<endl;
    }
}