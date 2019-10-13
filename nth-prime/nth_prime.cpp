#include "nth_prime.h"
#include <bits/stdc++.h>

using namespace std;
const int MAX = 1e6+1;
namespace nth_prime {
    int nth(int n)
    {
        bool isPrime[MAX];
        memset(isPrime, 1, sizeof(isPrime));
        
        for(int i = 4; i < MAX; i += 2)
        {
            isPrime[i] = 0;
        }
        
        for(int i = 3; i*i < MAX; i += 2)
        {
            if(isPrime[i])
            {
                for(int j = i*i; j < MAX; j += 2*i)
                {
                    isPrime[j] = 0;
                }
            }
        }
        int cnt = 1;
        if(cnt == n)
        {
            return 2;
        }
        for(int i = 3; i < MAX; i += 2)
        {
            if(isPrime[i])
            {
                cnt++;
                if(cnt == n)return i;
            }
        }
        return -1;
    }
}  // namespace nth_prime
