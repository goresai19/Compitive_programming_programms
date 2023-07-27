#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,carry=0,sum=0;
    cin>>test;
    while(test--){
       int m,n,count=0;
       cin>>m>>n;
      while((m!=0)&&(n!=0)){
        sum=(m%10)+(n%10)+carry;
        if(sum>9){
            carry=1;
            count++;
        }
        else
        carry=0;

        m=m/10;
        n=n/10;
    }
    cout<<count<<" operations"<<endl;
    }
}