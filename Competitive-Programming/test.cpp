// #include<bits/stdc++.h>
// #define nl endl
// #define blk " "
// #define int long long
// using namespace std;
// int ts,r,c,vis[1005][1005],si,sj,cnt=0;
// pair<int,int> v[4]={{0,1},{0,-1},{1,0},{-1,0}};
// char a[1005][1005];
// bool valid(int x,int y)
// {
// 	if(x>=0 && x<r && y>=0 && y<c && !vis[x][y] && a[x][y]!='#')
// 	{
// 		return 1;
// 	}
// 	return 0;
// }
// void dfs(int x,int y)
// {	
// 	vis[x][y]=1;
// 	cnt++;
// 	for(int i=0;i<4;i++)
// 	{
// 		int nx=x+v[i].first,ny=y+v[i].second;
// 		if(valid(nx,ny))
// 		{
// 			dfs(nx,ny);
// 		}
// 	}

// }
// int32_t main()
// {
// 	//freopen("input.txt","r",stdin);
// 	//freopen("sample.txt","a",stdout);
// 	int ts,k=1;
// 	cin>>ts;
// 	while(ts--)
// 	{
		
// 		cin>>c>>r;
// 		for(int i=0;i<r;i++)
// 		{
// 			for(int j=0;j<c;j++)
// 			{
// 				cin>>a[i][j];
// 				vis[i][j]=0;
// 				if(a[i][j]=='@')
// 				{
// 					si=i;
// 					sj=j;
// 				}
// 			}
// 		}
// 		cout<<"Case "<<k<<":"<<blk;
// 		dfs(si,sj);
// 		cout<<cnt<<nl;
// 		cnt=0;
// 		k++;
// 	}
// }
#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 char a[5][5];
 for(int i=0;i<5;i++)
 {
	for(int j=0;j<5;j++)
	{
		if(j>=i)
		{
			a[i][j]='*';
		}
		else
		{
			a[i][j]=' ';
		}
		cout<<a[i][j];
 }

cout<<nl;
}
}

