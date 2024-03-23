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
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;

    }
};
void _tail(Node* &head,Node* &tail,int val)
{
    if(head==NULL)
    {
        head=new Node(val);
        tail=head;
        return;
    }
    // Node* tmp=head;
    // while(tmp->next!=NULL)
    // {
    //     tmp=tmp->next;
    // }
    // tmp->next=new Node(val);
    tail->next=new Node(val);
}
int32_t main()
{
    int n,mx=INT_MIN,mn=INT_MAX;
    Node* head=NULL,*tail=NULL;
    while(1)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        _tail(head,tail,n);
        mx=max(mx,n),mn=min(mn,n);
    }
    cout<<mx-mn;
}