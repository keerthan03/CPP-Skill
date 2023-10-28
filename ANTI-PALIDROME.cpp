#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int e=0,o=0;
	    string s;
	    cin>>s;
	    unordered_map<char,int>m;
	    for(char i:s)
	    {
	        m[i]++;
	    }
	    for(auto i:m){
	    if(i.second % 2==0)
	    {
	        e++;
	    }
	    else{
	          o++;
	    }
	    }
	    if(o>1)
	    cout<<0<<endl;
	    else if(o==1)
	    {
	       if(e==0)
	       {
	           cout<<2<<endl;
	       }
	       else{
	           cout<<1<<endl;
	           
	       }
	    }
	    else{
	        cout<<1<<endl;
	    }
	    
	}
	return 0;
}
