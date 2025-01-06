class MaxHeap{
    int *arr;
    int size; //elements in array
    int total_size; //total size of array
    public:
    MaxHeap(int n) {
        arr = new int[n];
        size = 0;
        total_size = n;
    }
    //Insertion
    void insert(int value) {
        if(size==total_size) {
            cout<<"Heap Overflow";
            return;
        }
        arr[size] = value;
        int index = size;
        size++;
        
        //Comparing the element with its parent node
        while(index>0 && arr[(index-1)/2] < arr[index]) {
            swap(arr[index],arr[(index-1)/2]);
            index = (index-1)/2;
        }
    }
    
    void print() {
        for(int i=0; i<size; i++) {
            cout<<arr[i]<<" ";
        }
    }
    void Heapify(int index) {
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;
        
        //Largest will store the largest element between parent, left and right child node
        if(left<size && arr[left]>arr[largest])
        largest = left;
        if(right<size && arr[right]>arr[largest])
        largest = right;
        
        if(largest!=index) {
            swap(arr[largest],arr[index]);
            Heapify(largest);
        }
    }
    //Delete function
    void Delete () {
        if(size==0) {
            cout<<"Heap Underflow";
            return;
        }
        cout<<arr[0]<<"is deleted from heap";
        arr[0] = arr[size-1];
        size--;
        Heapify(0);
    }
};
