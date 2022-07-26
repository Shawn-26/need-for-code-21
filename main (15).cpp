#include<iostream>
using namespace std;
int main(){
	long long int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<2<<endl;
		cout<<n<<" "<<n-1<<endl;
		while(n-2>0){
			cout<<n<<" "<<n-2<<endl;
			n=n-1;
		}
	}
	return 0;
}