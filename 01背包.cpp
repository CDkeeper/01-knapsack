#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c;
	while(cin>>n>>c){
		int w[n+1],v[n+1];
		for(int i=1;i<=n;i++)
			cin>>w[i];
		for(int i=1;i<=n;i++)
		 	cin>>v[i];
		 	
		 	long long sum[n+1][c+1];
		 	memset(sum,0,sizeof(sum));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=c;j++){
				if(j<w[i])
				sum[i][j]=sum[i-1][j];
				else 
				sum[i][j]=max(sum[i-1][j],sum[i-1][j-w[i]]+v[i]);
			}
		}
		cout<<sum[n][c]<<endl;
	}
}
