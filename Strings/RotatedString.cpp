//Check If String is Rotated by 2 Places
/*Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating (in any direction) string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 
1
Explanation: 
amazon can be rotated anti-clockwise by two places, which will make it as azonam.*/


    void rotatedclockwise(string &s)
    {
        char last = s[s.size()-1];
        int index = s.size()-2;
        
        while(index>=0){
            s[index+1]=s[index];
            index--;
        }
        s[0]=last;
    }
    
    void rotatedanticlockwise(string &s)
    {
        char first =s[0];
        int index = 1;
        
        while(index<s.size()){
            s[index-1]=s[index];
            index++;
        }
        s[s.size()-1] = first;
    }
    
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size())
        return 0;
        
        string clockwise , anticlockwise;
        clockwise = str1;
        
        rotatedclockwise(clockwise);
        rotatedclockwise(clockwise);
        
        if(clockwise==str2)
        return 1;
        
        else
        {
            anticlockwise = str1;
        rotatedanticlockwise(anticlockwise);
        rotatedanticlockwise(anticlockwise);
        
        
        if(anticlockwise==str2)
        return 1;
        }
       return 0; 
    }