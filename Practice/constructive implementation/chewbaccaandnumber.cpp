#include<bits/stdc++.h>
using namespace std;
string solution(string n){
    for(int i=0;i<n.size();i++){
        if(i==0&&n[i]=='9'){
            n[i]='9';
        }
        else if(n[i]>='5'){
            n[i]='9'-n[i]+'0';
        }
    }
    return n;
}
int main(){
    string n;
    cin>>n;
    cout<<solution(n)<<endl;
}