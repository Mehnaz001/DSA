//Sorting The Sentence
/*A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.

A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence.

For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

Example 1:

Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.

Example 2:

Input: s = "Myself2 Me1 I4 and3"
Output: "Me Myself and I"
Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.*/


string sortSentence(string s) {
        vector<string>ans(10);
        string temp;
        int count=0, index=0;
        //Arranging string at their correct position
        while(index<s.size())
        {
            if(s[index]==' ')
            {
                int pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
            }else{
                temp+=s[index];
            }
            index++;
        }
        //Repeating same step for last word present in temp
                int pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;

          //Restoring list of words in temp with space
          for(int i=1; i<=count; i++){
            temp+=ans[i];
            temp+=' ';
          }  
            temp.pop_back();
          return temp;    
    }