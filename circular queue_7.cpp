#include<iostream>
using namespace std;
class que{
	int front,rear;
	int arr[5];
	public:
		que(){
			front=-1;
			rear=-1;
		}
		void del();
		void enter(int);
		void display(int a){
			if(a==0){
				cout<<"stack is empty::";
			}else if(rear<front){
				for(int i=front;i<a;i++){
				   cout<<arr[i]<<endl;
			    }
			    for(int i=0;i<=rear;i++){
				   cout<<arr[i]<<endl;
			    }
			}
			else{
			   for(int i=front;i<a;i++){
				   cout<<arr[i]<<endl;
			    }
			}	
		}
};
void que::del(){
	if(front==-1 && rear==-1){
		cout<<"overflow"<<endl;
	}else{
		front++;
	}
}
void que::enter(int x){
	if(front==-1 && rear==-1){
		front++;
		arr[++rear]=x;
	}else if(front==0 && rear==4 || rear==front-1){
		cout<<"overflow....:";
	}else if(front>0 && front<rear){
		rear=-1;
		arr[++rear]=x;
	}
	else{
	    arr[++rear]=x;
	}
}
int main(){
	que q;
	int n;
	cout<<"enter the size of stack"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		q.enter(a);
	}
    cout<<"after insertion::"<<endl;
    q.display(n);
    char flag;
    cout<<"do you want to delete.."<<endl;
    cin>>flag;
    while(flag!='n'){
        q.del();
    	cin>>flag;
	}
	q.enter(50);
	q.enter(40);
	q.enter(30);
	q.display(n);
	q.del();
	q.enter(20);
	q.display(n);	
	return 0;
}
