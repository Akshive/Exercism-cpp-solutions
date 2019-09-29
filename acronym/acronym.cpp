#include "acronym.h"
#include <string>
#include <regex>
namespace acronym {
    std::string acronym(std::string str)
    {
        std::regex reg("[a-zA-Z][a-zA-Z:,]*");
        std::sregex_iterator currentMatch(str.begin(), str.end(), reg);
        std::sregex_iterator lastMatch;
        std::string ans = "";
        while(currentMatch != lastMatch){
            std::smatch match = *currentMatch;
            ans.push_back(toupper(match.str()[0]));
            currentMatch++;
        }
        return ans;
    }
}  // namespace acronym
