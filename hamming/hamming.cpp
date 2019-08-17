#include "hamming.h"
#include <bits/stdc++.h>

using namespace std;

namespace hamming {
	int compute(string stand1, string strand2)
	{
		int ans = 0;
		int size = strand2.size();
		if(size != (int)stand1.size())throw std::domain_error("Invalid Arguments");
		for(int i = 0; i < size; i++)
		{
			if(stand1[i] != strand2[i])ans++;
		}
		return ans;
	}
}