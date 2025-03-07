class Solution {
public:
    vector<int> sieve(int n) {
        vector<int> sievePrimes(n+1,1);
        sievePrimes[0] = 0;
        sievePrimes[1] = 0;
        for(int i=2; i*i <= n; i++) {
            if( sievePrimes[i] == 1) {
                for(int j=i*i; j<=n; j+=i) {
                    sievePrimes[j] = 0;
                }
            }
        }
        return sievePrimes;
    }
    vector<int> closestPrimes(int left, int right) {
        int upperLimit = right;
        vector<int>sieveArr = sieve(upperLimit);
        vector<int>Primes;
        for(int i=left; i<=right; i++) {
            if(sieveArr[i]==1) {
                Primes.push_back(i);
            }
        }
        if(Primes.size()<2) {
            return {-1,-1};
        }
        int minDiff = INT_MAX;
        vector<int> closestPair(2,-1);
        for(int i=1; i<Primes.size(); i++) {
            int diff = Primes[i] - Primes[i-1];
           if(diff < minDiff) {
            minDiff = diff;
            closestPair[0] = Primes[i-1];
            closestPair[1] = Primes[i];
           }
        }

        return closestPair;
    }
};
