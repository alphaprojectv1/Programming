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
    Node *next;
    Node(int val)
    {
        this->next=NULL;
        this->val=val;

    }
};
void add_head(Node *&head,int val)
{
    if(head==NULL)
    {
        head=new Node(val);
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=new Node(val);
}
void _print(Node *head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<nl;
        tmp=tmp->next;
    }
}
int32_t main()
{
    Node* head=NULL;
    int ts,mx=INT_MIN,mn=INT_MAX;
    //cin>>ts;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        add_head(head,n);
        mx=max(n,mx);
        mn=min(n,mn);
    }
    cout<<mx-mn;
}