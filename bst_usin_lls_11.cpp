#include<iostream>
#include<stack>
int sum1=0;
using namespace std;
struct node{
	int data;
	node *left,*right;
}; 
struct node* insert(int x,node *n,node *n1){
	if(n==NULL){
		struct node* c=new struct node;
		c->data=x;
		c->left=c->right=NULL;
		if(n1->data>=c->data){
			//n1->right=NULL;
			n1->left=c;
		}else{
			n1->right=c;
			//n1->left=NULL;
		} 
		return c;	
	}
	 if(n->data>=x){
		insert( x,n->left,n);
	}else{
		insert( x,n->right,n);
	}
	return n;
}
int inorder(struct node* n){
	if(n!=NULL){
		inorder(n->left);
	//	cout<<n->data<<endl;
		inorder(n->right);
		if(n->left==NULL&& n->right==NULL){
			sum1+=n->data;
		}
	}
	return sum1;
}
void preorder(struct node* n){
		if(n!=NULL){
		cout<<n->data<<endl;
		inorder(n->left);
		inorder(n->right);
	}
}
void postorder(struct node* n){
		if(n!=NULL){
		inorder(n->left);
		inorder(n->right);
		cout<<n->data<<endl;
	}
}
void inorder1(struct node *n){
	stack<struct node*>q;
	int sum=0;
	struct node * n1=n;
	while(n1!=NULL || q.empty()==0){
		while(n1!=NULL){                  
			q.push(n1);
			n1=n1->left;
		}
		n1=q.top();
		if(n1->left==NULL && n1->right==NULL){
			sum+=n1->data;
		}
		q.pop();
	    cout<<n1->data;
	    n1=n1->right ;
	}
	cout<<"sum of leaf nodes are "<<sum<<endl;
}
void preorder1(struct node* n){
	stack<struct node*>s;
	struct node* n1=n;
	s.push(n1);
	while(s.empty()==0){
		n1=s.top();
		s.pop();
		cout<<n1->data;
		if(n1->right!=NULL)
			s.push(n1->right);
		if(n1->left!=NULL)
			s.push(n1->left);
	}
}
 
int main(){
	int COUNT=5;
	struct node *start=NULL;
	struct node *n,*n1;
	n=new node;
	int x,y,z;
	cin>>y>>x;
	n->data=x;
	n->left=NULL;
	n->right=NULL;
	start=n;
	n1=n;
	for(int i=2;i<=y;i++){
		cin>>z;
		insert(z,start,n1);
	}
	cout<<":::::::"<<endl;
	cout<<inorder(start);
//	cout<<"::::::"<<endl;
 	//postrder(start);
	//preorder(start);
//	cout<<endl;
//	inorder1(start);
//	preorder1(start);
 
	return 0;
}
