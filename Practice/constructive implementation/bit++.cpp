#include<bits/stdc++.h>
using namespace std;
int solution(int x, string s){
    if(s[1]=='+'){
        x++;
    }
    else if(s[1]=='-'){
        x--;
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    int x=0;
    while(n--){
        string s;
        cin>>s;
        x=solution(x,s);
    }
    cout<<x;
}