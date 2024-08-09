//Reverse the given string

void rev(string &str, int start, int end) {
    if(start>=end)
    return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    rev(str, start+1, end-1);
}