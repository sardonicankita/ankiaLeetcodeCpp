#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      long long  int n;
      int r, s=0;
      cin>>n;
      while(n>=5){
       r=n/5;
       s=s+r;
       n=r;
      }
      cout<<s<<"\n";
    }
    return 0;
}
















