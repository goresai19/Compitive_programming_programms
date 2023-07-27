#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],ans[n-1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=1;i<n;i++){
        ans[i-1]=abs(a[i]-a[i-1]);
    }
    sort(ans,ans+n-1);
     for(int i=0;i<n-1;i++){
        if(i+1!=ans[i]){
            cout<<"Not Jolly"<<endl;
            break;
        }
       if(i==n-2)
       cout<<"Jolly"<<endl;

    }

    

}