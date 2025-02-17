class Solution {
public:
    void generateSequences(string &tiles, string current, vector<bool> &used, unordered_set<string> &sequences) {
        sequences.insert(current);

        for(int i=0; i<tiles.size(); i++) {
            if(!used[i]) {
                used[i] = true;
                generateSequences(tiles, current + tiles[i], used, sequences);
                used[i] = false; //Backtrack
            }
        }
    }
    int numTilePossibilities(string tiles) {
        //To store sequences
        unordered_set<string>sequences;
        //To check whether a character is used or not
        vector<bool>used(tiles.length(),false);

        generateSequences(tiles,"", used, sequences);

        return sequences.size()-1;
    }
};
