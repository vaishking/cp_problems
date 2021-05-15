//For a given N, find the number of ways to choose an integer x from the range [0,2N−1] such that x⊕(x+1)=(x+2)⊕(x+3), where ⊕ denotes the bitwise XOR operator.

// Since the number of valid x can be large, output it modulo 109+7.

//if you do the analysis answer is 2^N-1 but we need to do answer in modulo of 10^9+7
//so we are using modulo exponentiation

#include<iostream>
using namespace std;

const int m=1e9 + 7; 

int moduloExp(long long x , long long y , long long p)
{
	int result=1;
	x=x%p;

	if(x==0) return 0;

	while(y>0) {
	    /* code */
	    if(y&1) // to check if y is odd
	    result= (result*x)%p;

	    y=y>>1;//y=y/2
	    x=(x*x)%p;

	}
	return result;
}

int main()
{
   int t, n;
   cin>>t;

   while(t--)
   {
   	cin>>n;
   	cout<<moduloExp(2, n-1, m)<<endl; //x^y %p or 2^n-1 % m 
   }
	return 0;
}