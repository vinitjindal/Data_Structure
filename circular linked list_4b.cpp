#include<iostream>
using namespace std;
struct  node{
	public:
		int data;
	  struct	node * ptr;
};
int main(){
struct 	node * n;int num;struct node *ptr1;struct node *ptr2;
     char flag='n',flag1; struct node * start=NULL;
     struct node * start1;
	cout<<"do you want to add A  node"<<endl;
	cin>>flag;
	if(flag=='y'){
		n=new(struct node);
        cin>>n->data;
        n->ptr=start;
        ptr1=n;
        start=n;
	}
	do{
		cout<<"do you want to add one more node"<<endl;
		cin>>flag;
		if(flag=='y'){
			n=new struct node;
			cin>>n->data;
			n->ptr=start;
			start=n;
			ptr2=n;
		}else{
			cout<<"OK.."<<endl;
		}

	}while(flag!='n');
	start1=start;
	ptr1->ptr=ptr2;
	cout<<start->data<<endl;
	start=start->ptr;
while(start!=start1){

	cout<<start->data<<endl;
	start=start->ptr;
	
}
cout<<"do you want to add one more node"<<endl;
cin>>flag;
if(flag=='y'){
		struct node *n2=start1;
	struct node *n1=start1;
	cout<<"where to add the node in the end or middle"<<endl;
	cin>>flag1;
	if(flag1=='e'){
		n=new(struct node);
		cin>>n->data;
		n->ptr=ptr2;                                     /* to add node in end..*/
		while(n1->ptr!=n2){     
			n1=n1->ptr;
		}
       n1->ptr=n;
       cout<<start1->data<<endl;
	start1=start1->ptr;
    while(start1!=n2){

	cout<<start1->data<<endl;
	start1=start1->ptr;
		
	}
 
	
}else if(flag1=='m'){
	int num;
    	cout<<"after which element you want to add"<<endl;
    	cin>>num;
    	while(start1->ptr!=n2){
    		if(start1->data==num){
    			n=new (struct node);
    			cin>>n->data;                          /* to add node in middle... */
    			n->ptr=start1->ptr;
    			start1->ptr=n;
    			break;
			}
			start1=start1->ptr;
		}
       cout<<n1->data<<endl;
	n1=n1->ptr;
    while(n1!=n2){

	cout<<n1->data<<endl;
	n1=n1->ptr;
		
	}	
}
	
} else{
	cout<<"thank you....";
}
  return 0;
}	
