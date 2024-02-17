// #include<bits/stdc++.h>
// #include <stdio.h>
// #define ll long long
// #define nl "\n"
// #define blk " "
// #ifndef ONLINE_JUDGE
// #define debug(a) cout<<#a<<blk<<a<<nl;
// #else
// #define debug(a)
// #endif
// const int N=1e5+5;
// using namespace std;
// int r,c,si,sj,di,dj,cnt=0;
// pair<int,int> d[4]={{0,1},{0,-1},{-1,0},{1,0}};
// bool vis[1005][1005];
// int level[1005][1005];
// char a[1005][1005];
// bool valid(int x,int y)
// {
//     if(x>=0 && x<r && y>=0 && y<c && !vis[x][y] && a[x][y]!='#')
//     {
//         return 1;
//     }
//     return 0;
// }
// void bfs(int x,int y)
// {
//     queue<pair<int,int>>q;
//     q.push({x,y});
//     vis[x][y]=1; 
//     cnt++;
//     level[x][y]=1;
//     while(!q.empty())
//     {
//         pair<int,int>pr=q.front();
//         q.pop();
//         int nx=pr.first,ny=pr.second;
        
//         for(int i=0;i<4;i++)
//         {
//             int ci=nx+d[i].first,cj=ny+d[i].second;
//             if(valid(ci,cj))
//             {
//                 q.push({ci,cj});
//                 vis[ci][cj]=1;
//                 cnt++;
//                 level[ci][cj]=level[x][y]+1;
//                 debug(level[ci][cj])
//             }
//         }
//     }

// }
// int main()
// {
//     cin>>r>>c;
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cin>>a[i][j];
//             vis[i][j]=0;
//             level[i][j]=0;
//             if(a[i][j]=='A')
//             {
//                 si=i,sj=j;
//             }
//             if(a[i][j]=='B')
//             {
//                 di=i,dj=j;
//             }
//         }
//     }
//     bfs(si,sj);
//     if(vis[di][dj])
//     {
//         cout<<"YES"<<blk<<cnt<<blk<<level[di][dj];
//     }
// }
#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
using namespace std;
 
char ar[1001][1001];
char br[1001][1001];
bool vis[1001][1001];
int n , m;
vector<char> path;
 
bool isValid(int x , int y){
	
	if(x < 1 || x > n || y < 1 || y > m) return false;
	
	if(ar[x][y] == '#' || vis[x][y] == true) return false;
	
	return true;
}
 
bool bfs(int x , int y)
{
	queue<pair<int,int> > q;
	q.push({x , y});
	vis[x][y] = true;
	
	while(!q.empty()){
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		if(ar[a][b] == 'B'){
			while(1){
				path.push_back(br[a][b]);
			
				if(path.back() == 'L') b++;
				if(path.back() == 'R') b--;
				if(path.back() == 'U') a++;
				if(path.back() == 'D') a--;
				
				if(a == x && b == y)
				break;
			}
			return true;
		}
		
		//left
		if(isValid(a , b - 1)) br[a][b-1] = 'L' , q.push({a , b-1}) , vis[a][b-1] = true;
		
		//right
		if(isValid(a , b + 1)) br[a][b+1] = 'R' , q.push({a , b+1}) , vis[a][b+1] = true;
		
		//up
		if(isValid(a - 1, b)) br[a - 1][b] = 'U' , q.push({a - 1 , b}) , vis[a-1][b] = true;
		
		//down
		if(isValid(a + 1, b)) br[a + 1][b] = 'D' , q.push({a + 1 , b}) , vis[a+1][b] = true;
		
	}
	
	return false;
}
 
int main()
{
	cin>>n>>m;
	int x;
	int y;
	
	REP(i , n) REP(j , m){
		cin>>ar[i][j];
		if(ar[i][j] == 'A') x = i , y = j;
	}
	
	if(bfs(x , y) == true){
		cout<<"YES"<<endl<<path.size()<<endl;
		while(path.size() > 0) cout<<path.back() , path.pop_back();
	}
	else{
		cout<<"NO";
	}
}
