//Number of Occurence
//Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr


	int count(int arr[], int n, int x) {
	    int start=0,end=n-1,mid,first=-1,last=-1;
	    while(start<=end)
	    {
	        mid=start+(end-start)/2;
	        
	        if(arr[mid]==x){
	            first=mid;
	            end=mid-1;
	        }
	        
	        else if(arr[mid]<x)
	        start=mid+1;
	        
	        else
	        end=mid-1;
	    }
	    start=0,end=n-1;
	     while(start<=end)
	    {
	        mid=start+(end-start)/2;
	        
	        if(arr[mid]==x){
	            last=mid;
	            start=mid+1;
	        }
	        
	        else if(arr[mid]<x)
	        start=mid+1;
	        
	        else
	        end=mid-1;
	    }
	    if(first==-1&&last==-1){
	    return 0;
	    }
	    int ans=(last-first)+1;
	    return ans;
	
	}
	
	