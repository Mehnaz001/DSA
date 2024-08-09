//Change Lowercase into uppercase using recursive approach

void LowerToUpper(string str, int index) {
    if(index==-1)
    return;

    str[index]='A'+str[index]-'a';
    LowerToUpper(str, index-1);
}