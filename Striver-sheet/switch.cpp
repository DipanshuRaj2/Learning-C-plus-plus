#include<iostream>
using namespace std;
class Solution{
	public:
int findtheIndex(int a[], int n, int key){
	for(int i = 0; i<n;i++){
		if(i == key) return key;
	}
}
};
int main(){
	int n,key;
	cin >> n >> key;
	int a[n];
	for(int i = 0; i<n ; i++){
		cin >> a[i];
	}
	Solution ob;
	cout << ob.findtheIndex(a,n , key)<<endl;


	return 0;
}