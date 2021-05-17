#include<bits/stdc++.h>
using namespace std;

int main()
{  int t;
	cin>>t;
  
  while(t--) {
      /* code */
  	string s1,s2,s3;
  	cin>>s1>>s2>>s3;
  	int countX=0 ,countY=0, countWinX=0,countWinY=0, count_=0;
    
    //horizontal
    if((s1[0]!='_') && (s1[0]==s1[1]) && (s1[1]==s1[2]))
    {   if(s1[0]=='X')
         countWinX++;
       else 
       	countWinY++;
    }
    if((s2[0]!='_') && (s2[0]==s2[1]) && (s2[1]==s2[2]))
    {
    	if(s2[0]=='X')
         countWinX++;
       else 
       	countWinY++;
    }
    if((s3[0]!='_') && (s3[0]==s3[1]) && (s3[1]==s3[2]))
    {
    	if(s3[0]=='X')
         countWinX++;
       else 
       	countWinY++;
    }
    //vertical
    if((s1[0]!='_') && (s1[0]==s2[0]) && (s2[0]==s3[0]))
    {
    	if(s1[0]=='X')
         countWinX++;
       else 
       	countWinY++;
    }
    if((s1[1]!='_') && (s1[1]==s2[1]) && (s2[1]==s3[1]))
    {
    	if(s1[1]=='X')
         countWinX++;
       else 
       	countWinY++;
    }
    if((s1[2]!='_') && (s1[2]==s2[2]) && (s2[2]==s3[2]))
    {
    	if(s1[2]=='X')
         countWinX++;
       else 
       	countWinY++;
    }

    //diagonal 

    if((s1[0]!='_') && (s1[0]==s2[1]) && (s2[1]==s3[2]))
    {
    	if(s1[0]=='X')
         countWinX++;
       else 
       	countWinY++;
    }
    if((s1[2]!='_') && (s1[2]==s2[1]) && (s2[1]==s3[0]))
    {
    	if(s1[2]=='X')
         countWinX++;
       else 
       	countWinY++;
    }

    for(int i=0;i<3;i++)
    {
    	if((s1[i]=='_') || (s2[i]=='_')|| (s3[i]=='_') )
    	{
    		count_++;
    	}
    	else if((s1[i]=='X') || (s2[i]=='X')|| (s3[i]=='X') )
    	{
    		countX++;
    	}
    	else if((s1[i]=='O') || (s2[i]=='O')|| (s3[i]=='O') )
    	{
    		countY++;
    	}
    }
    
   if(((countWinX==1 || countWinX==2) && (countWinY==0)) || (countWinY==1 && countWinX==0) || (count_==0 && countWinX==0 && countWinY==0))
   {
   	cout<<1<<endl; //basically x has 5 moves so can win in two directions in same game 
   	               //o can have 4 moves only
   }
   else if(count_!=0 && countWinX+countWinY==0)
   {
   	 cout<<2<<endl;
   }
   else if((countY>countX )|| (countWinY>1) ||( countWinX>2) || (countX-countY>1) || (countWinY==1 && countWinX==1))
   {
   	cout<<3<<endl;
   }
   else 
   	cout<<3<<endl;
}
    
	
	return 0;
       
}