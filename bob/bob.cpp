#include "bob.h"
#include <bits/stdc++.h>

using namespace std;

namespace bob {
	bool no_letter(string str)
	{
		int size = str.size();
		for(int i = 0; i < size; i++)
		{
			if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))return false;
		}
		return true;
	}
	bool is_all_capitals(string str)
	{
		if(no_letter(str)){
			return false;
		}
		int size = str.size();
		for(int i = 0; i < size; i++)
		{
			if((int)str[i] >= 97 && (int)str[i] <= 122)return false;
		}
		return true;
	}
	bool is_empty(string str)
	{
		for(int i = 0; i < (int)str.size(); i++)
		{
			if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\r')return false;
		}
		return true;
	}
	bool is_question(string str)
	{
		for(int i = str.size()-1; i >= 0; i--)
		{
			if(str[i] != ' ')
			{
				if(str[i] != '?')return false;
				return true;
			}
		}
		return false;
	}

	string hey(string str){
		int size = str.size();
		if(size == 0 || is_empty(str))return "Fine. Be that way!";
		if(is_question(str))
		{
			if(is_all_capitals(str))
			{
				return "Calm down, I know what I'm doing!";
			}
			return "Sure.";
		}
		if(is_all_capitals(str))
		{
			return "Whoa, chill out!";
		}
		return "Whatever.";
	}
}
