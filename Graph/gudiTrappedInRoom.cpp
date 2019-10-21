    //Ankit Kumar Mishra
    //Gudi trapped in Room
    
    
    #include <bits/stdc++.h>
    using namespace std;
    string mini="";string st;
    int a,h;int n;
    map <string,int> mp;
    void dfs(string st)
    {
        if(mp[st]==1)
        return;
        mini=(mini<st)?mini:st;
        mp[st]=1;
        string str=st;
        for(int i=0;i<h;i++)
        str=str.substr(1,n-1)+str[0];
        dfs(str);int k=0;
        for(int i=0;i<n;i++)
        {
            if(i%2)
            {
                k=st[i]-'0';
                k=(k+a)%10;
                st[i]=(char)('0'+k);
            }
        }
        dfs(st);
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            cin>>st;
            n=st.length();
            cin>>a>>h;
            mini=st;
            mp.clear();
            dfs(st);
            cout<<mini<<endl;
        }
    }
