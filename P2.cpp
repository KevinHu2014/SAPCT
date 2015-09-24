#include<iostream>
using namespace std;
int main(){
	//freopen("p2.in","r",stdin);
	float A[300];
	A[0]=0.00;
	int max=sizeof(A)/sizeof(float);//size of array A
	for(int i=1;i<max;i++){
		A[i]=A[i-1]+(float)1/(i+1);
		//cout<<A[i]<<endl;
	}
	float input;
	while(cin>>input&&input!=0.00){
		int L=0,R=max-1,mid;
		while(L<=R){
			mid=(L+R)/2;
			if(A[mid]==input){
				L=mid;
				break;
			}
			else if(A[mid]>input){
				//input ¤¶©ó A[L] ©M A[mid-1] ¤§¶¡
				R=mid-1; 
			}
			else if(A[mid]<input){
				//input ¤¶©ó A[mid+1] ©M A[R] ¤§¶¡
				L=mid+1; 
			}
		}
		cout <<L<<" card(s)"<<endl;
	}
	
	return 0;
}
