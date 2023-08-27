#include<iostream>
using namespace std;
int main(){
	//we are given with an array of n nos..Every no is present twice except one no.find that unique no in linear time
	int n,no,xorr=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>no;
		xorr=(xorr^no);
	}
	cout<<xorr;


	return 0;
}