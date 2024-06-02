//Allocate Minimum Number of Pages
/*You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting 
at least one book.
Out of all the permutations, the goal is to find the permutation where the sum of maximum number of pages in a book allotted to a
 student should be minimum, out of all possible permutations.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better
 understanding).*/

 int findPages(int A[], int N, int M) 
    {
        if(M>N)
        return -1;
        
        int start=0,end=0,mid,ans;
        for(int i = 0; i < N ; i++){
            start=max(start,A[i]);
            end+=A[i];
        }
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int page=0,count=1;
            for(int i=0;i<N;i++)            {
                page+=A[i];
                if(page>mid){
                count++;
                page=A[i];
                }
            }
            
            if(count<=M){
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
    }