#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    double x;
    cin>>x;
    double pi=M_PI;
    double a0=pi*pi/3;
    double sum=a0;
    for(int i=1;i<1000000;i++){
        double angle= i*x*pi/180;
        double ai=pow(-1,i)*cos(angle)/(pow(i,2));
        sum+=ai;
    }
    cout<<sum;
}