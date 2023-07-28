#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float a[n],sum=0,sumd=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

  float avg=(sum/n);

  for(int i=0;i<n;i++){
    if(a[i]>avg)
    sumd+=(a[i]-avg);
  }

  cout<<sumd<<endl;

}