#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int s[n];
        for(int i=0; i<n; i++){
            cin>>s[i];
        }

        sort(s, s+n);

        int ans= INT_MAX;

        for(long long int i=0; i<n-1;i++){
           if(ans> s[i+1]-s[i]){
            ans=s[i+1]-s[i];
           }
        }
        cout<<ans<<endl;
        return 0;
    }
}


















