#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int n, count=0;
	cin>>n;
	while(n--) {
       
       double w, h, s;
       cin>>w>>h;
       s=w/h;
       cout<<s<<" ";

       if((s>=1.60) && (s<=1.70))
         count=count+1;
        
	  
	}
	cout<<count;

	return 0;
}