#include <string>
#include <vector>
#include <map>

class LongestConsec
{
public:
    static std::string longestConsec(std::vector<std::string> &strarr, int k) {
     std::map<int, std::string> mp;
    int max = 0;
    for(std::string a : strarr) {
        if(a.length() > max) {
            max = a.length();
        }
      try {
        if (mp[a.length()] != a) {
        mp[a.length()] += a;
          }
    } catch (...) {
      mp.insert(make_pair(a.length(), a));
        }
    }
    std::map<int, std::string> :: iterator ot = mp.end();
    ot--;
    std::string result = "";
    int i = 0;
    while (i < k) {
        result += ot->second.substr(0, k * (ot->first));
        i += ot->second.length() / ot->first;
      ot--;
    }
    if (i > k) {
        result.erase(result.length() - ot->first *(k - i), 50);
    }
    return result;
    };
};
