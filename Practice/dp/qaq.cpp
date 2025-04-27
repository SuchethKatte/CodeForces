#include<bits/stdc++.h>
using namespace std;
int solution(string s){
    int q=0;
    vector<int> ans;
    for(int i=0;i<s.size();i++){
        if(s[i]=='Q') q++;
        if(s[i]=='A') ans.push_back(q); 
    }
    int sum=0;
    for(int i=0;i<ans.size();i++){
        sum+=(q-ans[i])*ans[i];
    }
    return sum;
}
int main(){
    string s;
    cin>>s;
    cout<<solution(s);
}