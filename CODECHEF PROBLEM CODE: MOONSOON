#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m,h;
	    cin>>n>>m>>h;
	    long long int arr1[n],arr2[m];
	    for(long long int i=0;i<n;i++)
	    cin>>arr1[i];
	    for(long long int  i=0;i<m;i++)
	    cin>>arr2[i];
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    long long int ans1=n-1,ans2=m-1,final=0;
	    while(ans1>=0 && ans2>=0)
	    {
	        long long int cap=arr1[ans1];
	        long long int ocap=arr2[ans2];
	        final+=min(cap,h*ocap);
	        ans1--;
	        ans2--;
	    }
	    ans1=0;
	    ans2=0;
	    long long int final2=0;
	    while(ans1<n && ans2<m)
	    {
	        long long int cap=arr1[ans1];
	        long long int ocap=arr2[ans2];
	        final2+=min(cap,h*ocap);
	        ans1++;
	        ans2++;
	    }
	    cout<<max(final,final2)<<endl;
	}
	return 0;
}
