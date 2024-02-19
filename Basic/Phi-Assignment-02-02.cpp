#include<bits/stdc++.h>
#define nl endl
#define blk " "
#define int long long
const int N=1e5+5;
using namespace std;
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
int n,e,par[N],group[N];
void reset(int n)
{
	for(int i=0;i<=n;i++)
	{
		par[i]=-1;
		group[i]=1;
	}
}
int _find(int m)
{
	if(par[m]==-1)
	{
		return m;
	}
	int l=_find(par[m]);
	return l;
}
void _union(int m,int n)
{
	if(group[_find(m)]>group[_find(n)])
	{
		par[_find(m)]=_find(n);
		group[_find(n)]+=group[_find(m)];
	}
	else if(group[_find(m)]<group[_find(n)])
	{
		par[_find(n)]=_find(m);
		group[_find(m)]+=group[_find(n)];
	}
	else 
	{
		par[_find(m)]=_find(n);
		group[_find(n)]+=group[_find(m)];
	}
}
bool cmp(Edge x,Edge y)
{
	return x.c<y.c;
}

int32_t main()
{
	freopen("input.txt","r",stdin);
	cin>>n>>e;
	reset(n);
	vector<Edge>v;
	set<int>st;
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
	sort(v.begin(),v.end(),cmp);
	int tc=0;
	for(auto it:v)
	{
		if(_find(it.a)!=_find(it.b))
		{
			_union(it.a,it.b);
			{
				tc+=it.c;
			}
		}
		//cout<<it.a<<blk<<it.b<<blk<<it.c<<nl;
	}
	cout<<tc;
}