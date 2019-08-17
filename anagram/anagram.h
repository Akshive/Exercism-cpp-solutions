#define ANAGRAM_H

#include <string>
#include <vector>
#include <list>

namespace anagram{
	class anagram
	{
		public:
			std::string word;
			anagram(std::string word);
			std::vector<std::string> matches(std::list<std::string>);
	};
}