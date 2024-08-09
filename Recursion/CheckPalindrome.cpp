//Check if a string is palindrome or not

bool checkPal(string str, int start, int end) {
    if(start>=end)
    return 1;

    if(str[start]!=str[end])
    return 0;

    return checkPal(str, start+1, end-1);
}
