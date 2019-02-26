#include<stdio.h>
#include<stdlib.h>
struct node
{
	int f;char ch[100];
	struct node *left;
	struct node *right;
	struct node *next;
}*start;

int  deque(int *A,int n)
{
	int i;
	int x=A[0];
	for(i=0;i<n-1;i++)
	{
		A[i]=A[i+1];
	}
	return x;
}
void build_tree(char *ch,int *f,int n)
{
	struct node *n1,*n2,*new;
	if(start==NULL)
	{
		n1=(struct node *)malloc(sizeof(struct node));
		n2=(struct node *)malloc(sizeof(struct node));
		n1->f=deque(f,n);
		n2->f=deque(f,n);
		n1->left=n1->right=n2->left=n2->right=NULL;
		new=(struct node *)malloc(sizeof(struct node));
		new->f=n1->f+n2->f;
		new->left=n1;
		new->right=n2;
	}
	else
	{
		n1=
	}
}
void postorder(struct node *root)
{	//printf("o\n");
	if(root!=NULL)
	{//printf("o\n");
		printf("%d ",root->f);
		postorder(root->left);
		postorder(root->right);
	}
}
void inorder(struct node *root)
{	//printf("o\n");
	if(root!=NULL)
	{
		
		postorder(root->left);
		printf("%d ",root->f);
		postorder(root->right);
	}
}
int main()
{
	char ch[100];
	int f[100],n;
	scanf("%d",&n);
	int i;
	//for(i=0;i<n;i++)
	{
		scanf("%s",ch);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
	build_tree(ch,f,n);
	postorder(start);	
	printf("\n");	
	inorder(start);
}
