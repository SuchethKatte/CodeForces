#include<bits/stdc++.h>
using namespace std;
int solution(string s, int n){
    stack<char> st;
    vector<int> size;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            st.push('<');
            size.push_back(0);
        }
        else if(s[i]=='='){
            if(size.size()){
                size.back()++;
            }
        }
        else if(s[i]=='>'){
            if(!st.empty()&&st.top()=='<'){
                if(size.back()){
                    count+=size.back()+2;
                    size.pop_back();
                    st.pop();
                }
                else{
                    st.push('>');
                }
            }

        }
    }
    return n-count;
}
int main(){
    int tt;
    cin>>tt;
    while (tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solution(s,n)<<endl;
    }
}