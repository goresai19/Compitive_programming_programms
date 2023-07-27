#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="QWERTYUIOPASDFGHJKLZXCVBNM";
    string in,ans=" ";
    getline(cin,in);
    for(int i=0;i<in.length();i++){
            if(in[i]==' ')
            ans=ans+" ";
            else if(in[i]=='Q')
            ans=ans+"Q";
            else{
                for(int j=0;j<s.length();j++){
                     if(s[j]==in[i]){
                        ans=ans+s[j-1];
                        break;
                     }
                }
            }
  
    }
    cout<<ans<<endl;
}