    //Ankit Kumar Mishra 
    //Bob-And-K-Subsets
    
    
    #include <bits/stdc++.h>
    using namespace std;
    bool vis[2049];
    int ar[1005];
    int n,k;
    bool dp[1003][21][2049];
    bool rec(int i,int j,int key)
    {
        if(i>=n||j>=k)
        return false;
        if(dp[i][j][key])
        return true;
        vis[key|ar[i]]=true;
        rec(i+1,j,key);
        rec(i+1,j+1,key|ar[i]);
        return dp[i][j][key]=true;
    }
    int main()
    {
        memset(dp,false,sizeof(dp));
        cin>>n>>k;
        for(int i=0;i<n;i++)
        cin>>ar[i];
        rec(0,0,0);
        int ans=0;
        for(int i=0;i<=4096;i++)
        if(vis[i])
        ans++;
        cout<<ans<<endl;
        return 0;
    }
