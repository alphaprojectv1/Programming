#include<bits/stdc++.h>
#define nl endl
#define blk " "
#define int long long
const int N=1e5+5;
using namespace std;
int par[N],group[N];
class Edge{
public:
	int a,b,c;
	Edge(int a,int b,int c)
	{
		this->a=a;
		this->b=b;
		this->c=c;
	}
};
void reset(int n)
{
	for(int i=0;i<=n;i++)
	{
		par[i]=-1;
		group[i]=1;
	}
}
int _find(int n)
{
	if(par[n]==-1)
	{
		return n;
	}
	int l=_find(par[n]);
	return l;
}
void _union(int x,int y)
{
	if(group[_find(x)]>group[_find(y)])
	{
		par[_find(x)]=_find(y);
		group[_find(y)]+=group[_find(x)];
	}
	else if(group[_find(y)]<group[_find(x)])
	{
		par[_find(y)]=_find(x);
		group[_find(x)]+=group[_find(y)];
	}
	else
	{
		par[_find(x)]=_find(y);
		group[_find(y)]+=group[_find(x)];
	}
}
bool cmp(Edge x,Edge y)
{
	return x.c<y.c;
}
int32_t main()
{
	freopen("input.txt","r",stdin);
	int n,e;
	cin>>n>>e;
	vector<Edge>v;
	set<int>st;
	reset(n);
	while(e--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		v.push_back({a,b,c});
		st.insert(a);
		st.insert(b);
	}
	if(st.size()!=n)
	{
		cout<<-1;
		return 0;
	}
	int tc=0,cnt=0;
	sort(v.begin(),v.end(),cmp);
	for(auto it:v)
	{
		if(_find(it.a)!=_find(it.b))
		{
			_union(it.a,it.b);
			tc+=it.c;
			continue;
		}
		if(_find(it.a)==_find(it.b))
		{
			cnt++;
		}
		//cout<<it.a<<blk<<it.b<<blk<<it.c<<nl;
	}
	cout<<cnt<<blk<<tc<<nl;

}
