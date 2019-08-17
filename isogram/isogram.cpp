#include "isogram.h"
#include <bits/stdc++.h>
using namespace std;

namespace isogram {

	bool is_isogram(string word) {
		int len = word.size();
	    map<char, bool> vis;
	    for(int i = 0; i < len; i++)
	    {
	    	char c = tolower(word[i]);
	    	if((int)c > 122 || (int)c < 97)continue;
	    	if(vis[c] == true)return false;
	    	vis[c] = true;
	    }
	    return true;
	}

}
