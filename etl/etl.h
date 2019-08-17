#define ETL_H
#include <vector>
#include <map>

namespace etl{
    std::map<char, int> transform(std::map<int, std::vector<char>> old);
}