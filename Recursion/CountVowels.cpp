//Count vowels in a given string

int count(string str, int index) {
    if(index==-1)
    return 0;

    //if character is vowel
    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
    return 1 + count(str, index-1);

    //not vowel
    else
    return count(str, index-1);
}