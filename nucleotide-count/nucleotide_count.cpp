#include "nucleotide_count.h"
#include <bits/stdc++.h>

using namespace std;

namespace dna
{
    dna::counter::counter(string DNA)
    {
        for(auto it = DNA.begin(); it != DNA.end(); it++)
        {
            char c = *it;
            if(c != 'A' && c != 'G' && c != 'T' && c != 'C')throw std::invalid_argument("Invalid Argument");
        }
        this->DNA = DNA;
    }
    map<char, int> dna::counter::nucleotide_counts() const
    {
        map<char, int> ans;
        ans['A'] = ans['T'] = ans['C'] = ans['G'] = 0;
        for(auto it = this->DNA.begin(); it != this->DNA.end(); it++)
        {
            ans[*it]++;
        }
        return ans;
    }
    int dna::counter::count(char c) const
    {
        if(c != 'A' && c != 'G' && c != 'T' && c != 'C')throw std::invalid_argument("Invalid Argument");
        int ans = 0;
        for(auto it = this->DNA.begin(); it != this->DNA.end(); it++)
        {
            if(*it == c)ans++;
        }
        return ans;
    }
}