//Author-Ankit Kumar Mishra
//Possible sums
    
    
    #include <bits/stdc++.h>
    using namespace std;
    int ans=0;
    int n;int A[103];
    bool s[10005];
    int dp[103][10005];
    int calc(int i,int sum)
    {
        if(i>n)
        return 0;
        if(i==n&&!s[sum])
        {
            s[sum]=true;
            return dp[i][sum]=1;
        }
        else if(i==n&&s[sum])
        {
            return dp[i][sum]=0;
        }
        if(dp[i][sum]!=-1)
        return 0;
        dp[i][sum]=0;
        dp[i][sum]=calc(i+1,sum)+calc(i+1,sum+A[i]);
        return dp[i][sum];
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            cin>>n;
            ans=0;
            memset(s,false,sizeof(s));
            memset(dp,-1,sizeof(dp));
            for(int i=0;i<n;i++)
            {
                cin>>A[i];
            }
            ans=calc(0,0);
            cout<<ans<<endl;
        }
    }
