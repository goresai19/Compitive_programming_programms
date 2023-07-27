#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int days[test],fine[test];
    float ratio[test],index[test];
    for(int i=0;i<test;i++){
        cin>>days[i]>>fine[i];
        ratio[i]=fine[i]/days[i];
        index[i]=i+1;
    }
    for(int i=0;i<test;i++){
        for(int j=i;j<test;j++){
            if(ratio[i]<ratio[j]){
                swap(ratio[i],ratio[j]);
                swap(index[i],index[j]);
            }
        }
    }
    for(int i=0;i<test;i++){
        cout<<index[i]<<" ";
    }

}