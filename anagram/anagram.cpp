#include "anagram.h"
#include <bits/stdc++.h>
using namespace std;

namespace anagram{

        anagram::anagram(string word)
        {
            this->word = word;
        }
        vector<string> anagram::matches(list<string> words)
        {
            string key = word;
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            transform(key.begin(), key.end(), key.begin(), ::tolower);
            sort(key.begin(), key.end());
            vector<string> ans;
            for(auto it = words.begin(); it != words.end(); it++)
            {
                string word_to_match = *it;
                transform(word_to_match.begin(), word_to_match.end(), word_to_match.begin(), ::tolower); 
                if(word.compare(word_to_match) == 0)continue;
                sort(word_to_match.begin(), word_to_match.end());
                if(key.compare(word_to_match) == 0)
                {
                    ans.push_back(*it);
                }
            }
            return ans;
        }

}