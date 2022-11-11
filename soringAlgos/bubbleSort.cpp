#include<iostream>
using namespace std;
int main(){
	int i,n=4,temp,j;
	int num[4]={12,55,5,18};
	for(i=0;i<n-1;i++){
		cout<<"i ="<<i<<endl;
		for(j=0;j<n-1;j++){
			if(num[j]>num[j+1]){
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}		
	}
cout<<"[";
for(int k=0;k<n;k++){
	cout<<num[k]<< " ";
}
cout<<"]";
}
//in bubble sort sort starts from the right where  y we compare two adjacent array elements;

