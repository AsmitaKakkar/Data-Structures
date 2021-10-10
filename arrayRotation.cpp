#include <iostream>
using namespace std;


void leftRotateByOne(int arr[], int n){
    
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
    
}

void leftRotate(int arr[],int d,int n)
{
     for(int i=0;i<d;i++)
	    leftRotateByOne(arr,n);
	    
}

void printarray(int arr[],int n)
{
     for(long long i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
    	}
}

int main() {
	//code
	int t,n,d,i,arr[10000];
	
		cin>>t;
		while(t--)
		{
			cin>>n>>d;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    leftRotate(arr,d,n);
	    printarray(arr,n);
		}
	    
	   
	return 0;
}
