#include <bits/stdc++.h>
using namespace std;
typedef struct node 
{
	int d;
	node *l;
	node *r;
}node;
node *lca(node *head,int l,int r)
{
	//cout << "h";
	if (head->d < l && head->d < r)
		return lca(head->r,l,r);
	if (head->d > l && head->d > r)
		 return lca(head->l,l,r);
	return head;
}
int yo(int l,int r,node *head)
{
	cout<<"h";
	int s = 0;
	int  t = 0;
	node *tmp,*lt,*rt;
	tmp = lca (head,l,r);
	cout<<"h";
	lt = tmp;
	while (tmp->d != l)
	{
		if (s < tmp->d)
			s = tmp->d;
		if (tmp->d > l)
			tmp = tmp->l;
		if (tmp->d < l)
			tmp = tmp->r;
		cout << "h";
	}
	tmp=lt;
	while (tmp->d != r)
	{
		if (t < tmp->d)
			t = tmp->d;
		if (tmp->d > r)
			tmp = tmp->l;
		if (tmp->d < l)
			tmp = tmp->r;
	}
	return s;
}

int len(int l,int r,node *head)
{
	if ((head->d>l)&&(head->d<r) || (head->d<l)&&(head->d>r))
		return head->r->d;
	else if ((head->d<l)&&(head->d<r))
		 lca(head,l,r);
	else
		lca(head,l,r);
}
node *check(node *head,node *tmp)
{
	if ((head->l!=NULL)&&(head->d>tmp->d))
		check(head->l,tmp);
	else if ((head->l==NULL)&&(head->d>tmp->d))
		head->l=tmp;
	else if ((head->r!=NULL)&&(head->d<tmp->d))
		check(head->r,tmp);
	else
		head->r=tmp;
}
node *insert(int x,node *head)
{
	node *tmp;
	tmp = (node *)malloc(sizeof (node));
	tmp->d=x;
	tmp->l=NULL;
	tmp->r=NULL;
	if(head==NULL)
		return tmp;
	else
		check(head,tmp);
	return head;
}

int main()
{
	int n,x,l,r,i;
	node *head;
	head = NULL;
	cin >> n;
	for (i = 0; i < n ;i++)
	{
		cin >> x;
		head = insert(x,head);
	}
	cout<<"h";
	cin>>l>>r;
	cout << "h";
	cout<< yo(l,r,head) <<endl;
	return 0;
}
