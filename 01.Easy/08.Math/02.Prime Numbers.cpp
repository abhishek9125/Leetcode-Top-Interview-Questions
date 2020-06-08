class Solution {
public:
    int countPrimes(int n){
        bool isPrime[n+1];
        for(int i=0;i<=n;i++){
            isPrime[i] = true;
        }
        if(n==0 || n==1){
            return false;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i=2;i*i<n+1;i++){
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j] = false;
            }
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(isPrime[i]){
                count++;
            }
        }
        return count;
    }
};
