#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,t;
    cin>>t;
    while(t--){
        int hash[26]={0};
        string s1,s2;
        cin>>s1>>s2;
        int l=s1.length();
        for(i=0;i<l;i++){
            hash[s1[i]-97]++;
        }
        for(i=0;i<l;i++){
            hash[s2[i]-97]--;
        }
        int c=0;
        for(i=0;i<26;i++){
            if(hash[i]!=0){
                c=1;
                break;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
