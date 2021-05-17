#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int n, count=0;
	cin>>n;
	while(n--) {
       
       double w, h, s, minimum , maximum;
       cin>>w>>h;
       minimum = min(w, h);
       maximum= max(w, h);
       // cout<<s<<" ";

       s= maximum/minimum;


       if((s>=1.60) && (s<=1.70))
         count=count+1;
        
	  
	}
	cout<<count;

	return 0;
}