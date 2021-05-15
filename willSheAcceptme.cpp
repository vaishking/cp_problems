#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
	cin>>t;
	while(t--) {
	    /* code */
	    string s1, s2;
	    cin>>s1>>s2;
	    int r= s1.size();
	    int k=0;
	    for(int i=0;i<s2.size();i++)
	    {    
	    	
            if(s1[k]==s2[i])
            {
            	r=r-1;
            	k=k+1;
            }
            if(r==0)
	    	{
	    		cout<<"Love you too"<<endl;
	    		break;
	    	}
	    }

	    if(r!=0)
	    {
	    	cout<<"We are only friends"<<endl;
	    }


	}

	return 0;
}