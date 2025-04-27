#include<bits/stdc++.h>
using namespace std;
int solution(int l, int r){
    vector<int> ans(r-l+1,0);
    int digits=0;
    bool flag=true;
    int left=less
    while(l){
        int temp=l%10;
        if(temp) digits++;
        if(digits>3) {
            flag=false;
            break;
        }
        l/=10;
    }
    ans[0]=flag;
    int count=0;
    for(int i=left+1;i<=right;i++){
        
    }


}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int l,r;
        cin>>l>>r;
        cout<<solution(l,r)<<endl;
    }
}