#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long size,lines;
	cin>>size>>lines;
		long long arr1[size];
		long long arr2[size];
		for(long long i=0;i<size;i++){
			cin>>arr1[i];
			if(i==0){
				arr2[i]=arr1[i];
			}else{
				arr2[i]=arr1[i]+arr2[i-1];
			}
		}
				
		while(lines--){
			long long start,end;
			cin>>start>>end;
			start--;
			end--;
			long long count=arr2[end]-arr2[start]+arr1[start];
			cout<<count<<endl;
		}
}
