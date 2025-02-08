class NumberContainers {
public:
    unordered_map<int,int>index_number;
    unordered_map<int,set<int>>number_index;   
    NumberContainers() {
    
    }
    
    void change(int index, int number) {
       if(index_number.find(index)!= index_number.end()) {
        int previous = index_number[index];
        number_index[previous].erase(index);
        if(number_index[previous].empty()) {
           number_index.erase(previous); 
        }
       }
       index_number[index] = number;
       number_index[number].insert(index);
    }
    
    int find(int number) {
        if(number_index.find(number) != number_index.end()) {
            return *number_index[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
