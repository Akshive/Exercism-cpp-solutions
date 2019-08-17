#include "reverse_string.h"
#include <bits/stdc++.h>
using namespace std;

namespace reverse_string {

	string reverse_string(string sentence) {
		reverse(sentence.begin(), sentence.end());
		return sentence;
	}

}