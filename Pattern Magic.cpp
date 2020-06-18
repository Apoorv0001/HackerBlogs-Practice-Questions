/*
You will be given a number N. You have to code a hollow diamond looking pattern.

The output for N=5 is given in the following image.

Explanation
Write a code to print above given pattern. No space between any two characters.
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<2*n-1;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	int col,col2,col4,col3,row=1;
	int space_count=1,spaces=1;
	
	//////// First half  
	
	while(row<=n-1)
	{
	    col=1;
	    // stars
	    while(col<=(n-row))
	    {
	        cout<<"*";
	        col=col+1;
	    }
	    
	    // spaces
	    space_count=1;
        while(space_count<=spaces)
        {
            cout<<" ";
            space_count=space_count+1;  
        }
        // stars
        col2=1;
         while(col2<=(n-row))
	    {
	        cout<<"*";
	        col2=col2+1;
	    }
        spaces=spaces+2;
	    row=row+1;
	    cout<<endl;
    }
    //// Second half
    
    	int row2=1;
    int spaces2=1,space_count2=2*n-5;
    
    	while(row2<=n-2)
	  {
	    col=1;
	    spaces2=1;
	    // stars
	    while(col<=(row2+1))
	    {
	        cout<<"*";
	        col=col+1;
	    }
	    // spaces
	    
	    while(spaces2<=space_count2)
	        {
	            cout<<" ";
	            spaces2=spaces2+1;
	        }
	        
	   // stars
	   
	   col2=1;
	   while(col2<=(row2+1))
	    {
	        cout<<"*";
	        col2=col2+1;
	    }
	            
	    
	space_count2=space_count2-2;    
    row2=row2+1;
    cout<<endl;
    
  
}
for(int i=0;i<2*n-1;i++)
{
    cout<<"*";
}
}