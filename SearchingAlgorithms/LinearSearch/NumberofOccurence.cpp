//Number of Occurence
//Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr
	
    int count(int arr[], int n, int x) {
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==x)
	        count++;
	    }
	    return count;
	}
