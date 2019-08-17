#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>

namespace dna
{
    class counter
    {
        public:
            std::string DNA;
            counter(std::string DNA);
            std::map<char, int> nucleotide_counts() const;
            int count(const char c) const;
    };
}