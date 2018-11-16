#include<iostream>
using namespace std;
int main(){
    char p[]="2 3 * 4 2 / +";
    //cout<<p[0];
    int arr[20],j=0;
    for(int i=0;p[i]!='\0';i++){
    	if(p[i]==' '){
    		continue;
		}
         else if((p[i])>='0' && p[i]<='9'){
      	
			int num=0;
			while(p[i]!=' '){
				num=num*10+(p[i]-48);
				i++;
			}
			i--;
		  arr[j]=num;
      	  j++;
      	
	  }else{
	  int val1=arr[--j];
	   int val2=arr[--j];
	   switch(p[i]){
	   	case '-':arr[j++]=val2-val1;break;
	   	case '/':arr[j++]=val2/val1;break;   
		case '+':arr[j++]=val2+val1;break;
	    case '*':arr[j++]=val2*val1;break;
	   }
	  }
	}
	cout<<arr[0];
	return 0;
}
