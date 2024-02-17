#include<bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        int n;
        cin>>n;
        n*=2;
        deque<int>d(n);
        for(int i=0;i<n;i++)
        {
            cin>>d[i];
        }
        for(int i=0;i<d.size();i++)
        {
            debug(i);
        }
        sort(d.begin(),d.end());
        int mx=0;
        for(int i=0;i<d.size();i+=2)
        {
            mx+=d[i];
        }
        cout<<mx<<nl;
    }
}
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Function to calculate the maximum final score
// int max_final_score(int n, vector<int>& numbers) {
//     // Sort the numbers
//     sort(numbers.begin(), numbers.end());
    
//     // Initialize score
//     int score = 0;
    
//     // Iterate over pairs of adjacent numbers
//     for (int i = 0; i < numbers.size(); i += 2) {
//         score += numbers[i];
//     }
    
//     return score;
// }

// int main() 
// {
//     int t;
//     cin >> t; // Input number of test cases
    
//     // Iterate over test cases
//     while (t--) {
//         int n;
//         cin >> n; // Input n
//         vector<int> numbers(2 * n);
        
//         // Input the numbers
//         for (int i = 0; i < 2 * n; ++i) {
//             cin >> numbers[i];
//         }
        
//         // Calculate and output the maximum final score
//         cout << max_final_score(n, numbers) << endl;
//     }
// }
