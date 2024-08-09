//Given two positive integers a and b, find GCD of a and b.
//Note: Don't use the inbuilt gcd function

void GCD (int a, int b) {
    if(b==0) {
        cout<<a;
        return;
    }

    GCD(b, a % b);
}