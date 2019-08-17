#include "etl.h"
#include <bits/stdc++.h>
using namespace std;

namespace etl{
    map<char, int> transform(map<int, vector<char>> old)
    {
        map<char, int> ans;
        for(auto it = old.begin(); it != old.end(); it++)
        {
            int key = it->first;
            auto values = it->second;

            for(auto it2 = values.begin(); it2 != values.end(); it2++)
            {
                ans[tolower(*it2)] = key;
            }
        }
        return ans;
    }
}