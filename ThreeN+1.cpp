#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        (n%2==0)?(n=n/2):(n=(3*n)+1);
        cout<<n<<" ";
    }
    cout<<endl;
}