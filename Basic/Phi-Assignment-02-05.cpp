#include<bits/stdc++.h>
#define nl endl
//#define int long long 
#define blk " "
const int N=1e5+5;
using namespace std;
int r,c,vis[1005][1005],si,sj,di,dj;
pair<int,int> par[1005][1005],d[4]={{0,1},{0,-1},{-1,0},{1,0}};
char a[1005][1005];
bool valid(int x,int y)
{
	if(x>=0 && x<r && y>=0 && y<c && !vis[x][y] && a[x][y]!='#')
	{
		return 1;
	}
	return 0;
}
void bfs(int x,int y)
{
	queue<pair<int,int>>q;
	q.push({x,y});
	vis[x][y]=1;
	while(!q.empty())
	{
		pair<int,int>pr=q.front();
		q.pop();
		int nx=pr.first,ny=pr.second;
		for(int i=0;i<4;i++)
		{
			int ci=nx+d[i].first,cj=ny+d[i].second;
			if(valid(ci,cj))
			{
				q.push({ci,cj});
				vis[ci][cj]=1;
				par[ci][cj]={nx,ny};
			}
		}
	}
}
int main()
{
	freopen("input.txt","r",stdin);
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
			vis[i][j]=0;
			par[i][j]={0,0};
			if(a[i][j]=='D')
			{
				si=i;
				sj=j;
			}
			if(a[i][j]=='R')
			{
				di=i;
				dj=j;
			}
		}
	}
	bfs(si,sj);
	if(vis[di][dj])
	{
		cout<<"YES";
		pair<int,int>fix={di,dj},cur={si,sj};
		while(fix!=cur)
		{
			pair<int,int>tmp=par[fix.first][fix.second];
			a[tmp.first][tmp.second]='X';
			fix=tmp;
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout<<a[i][j];
			}
			cout<<nl;
		}
	}
	else
	{
		cout<<"NO";
	}
}
