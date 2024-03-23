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
class Node
{
    public:
    int val;
    Node *next;
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
    tail->next=new Node(val);
    tail=tail->next;
}
int sz(Node* head)
{
    int i=0;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        i++;
    }
    return i;
}
bool check(Node* head1,Node *head2)
{
    Node* tmp1=head1,*tmp2=head2;
    if(sz(head1)!=sz(head2))
    {
        return 0;
    }
    while(tmp1!=NULL)
    {
        if(tmp1->val!=tmp2->val)
        {
            return 0;
        }
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    return 1;

}
int32_t main()
{
    Node* head1=NULL,*head2=NULL,*tail1=NULL,*tail2=NULL;
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        _tail(head1,tail1,n);
    }
    while(1)
    {
        int n;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        _tail(head2,tail2,n);
    }
    if(check(head1,head2))
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}