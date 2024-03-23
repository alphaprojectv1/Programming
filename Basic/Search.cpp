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
int i;
void _tail(Node* &head,Node* &tail,int val)
{
    if(head==NULL)
    {
        head=new Node(val);
        tail=head;
        return;
    }
    tail->next=new Node(val);
    tail=tail->next;
}
bool _print(Node *head,int t)
{
    i=0;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val==t)
        {
            return 1;
        }
        //cout<<tmp->val<<blk;
        i++;
        tmp=tmp->next;
    }
    return 0;
}
int32_t main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        Node *head=NULL,*tail=NULL;
        while(1)
        {
            int n;
            cin>>n;
            if(n==-1)
            {
                break;
            }
            _tail(head,tail,n);
        }
        int t;
        cin>>t;
        if(_print(head,t))
        {
            cout<<i<<nl;
        }
        else
        {
            cout<<-1<<nl;
        }
    }
}