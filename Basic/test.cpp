// #include <bits/stdc++.h>
// using namespace std;
// int neighborX[4] = {0, 0, 1, -1};
// int neighborY[4] = {1, -1, 0, 0};
// int n, m, answer = 0;
// int vis[1010][1010];
// char grid[1010][1010];
// bool isValid (int y, int x) 
// {
//   if (y < 0) return false;
//   if (x < 0) return false;
//   if (y >= n) return false;
//   if (x >= m) return false;
//   if (grid[y][x] == '#') return false;
//   return true;
// }

// void DFS (int y, int x) {
//   vis[y][x] = 1;
//   for (int i = 0 ; i < 4 ; i++) {
//     int newX = x + neighborX[i];
//     int newY = y + neighborY[i];
//     if (isValid(newY, newX)) {
//       if (!vis[newY][newX]) {
//         DFS(newY, newX);
//       }
//     }
//   }
// }

// int main() {
//     cin >> n >> m;
//     for (int i = 0 ; i < n ; i++) {
//       for (int j = 0 ; j < m ; j++) {
//         cin >> grid[i][j];
//         vis[i][j] = 0;
//       }
//     }
//     for (int i = 0 ; i < n ; i++) {
//       for (int j = 0 ; j < m ; j++) {
//         if (grid[i][j] == '.' && !vis[i][j]) {
//           DFS(i, j);
//           answer++;
//         }
//       }
//     }
//     cout << answer << endl;
//     return 0;
// }
// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// int main()
// {
//   string s;
//   cin>>s;
//   int c[26]={0};
//   for(auto i:s)
//   {
//     //cout<<i<<blk;
//     int j=(int)i;
//     //cout<<j<<blk;
//     c[j-65]++;
//   }
//   if(s.size()!=4 || c[s[0]-65]!=2 ||c[s[1]-65]!=2 || c[s[2]-65]!=2 || c[s[3]-65]!=2 )
//   {
//     cout<<"No";
//   }
//   else 
//   {
//     cout<<"Yes";
//   }
// }
// #include<bits/stdc++.h>
// #define nl "\n"
// #define blk " "
// typedef long long ll;
// // #define ll long long
// using namespace std;
// const int N=1e5+5;
// int fun(int n) 
// {
//   int sum=0;
//   while(n!=0)
//   {
//     sum=sum+n%10;
//     n/=10;
//   }
//   if(sum>=10)
//   {
//     return fun(sum);
//   }
//   else
//   {
//     return sum;
//   }
// }
// int main() 
// {
//    int x;
//    cin>>x;
//    cout<<fun(x)<<nl;
// }
#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
int dis[N];
int main()
{
  //freopen("ICA-7.txt","r",stdin);
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : EdgeList)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : EdgeList)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Cycle found. No answer" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
            cout << i << " -> " << dis[i] << endl;
    }
    return 0;
}