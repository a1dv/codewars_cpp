class StockList
{
public:

  static int decode(std::string npt) {
    int result = 0;
    int i = 0;
     while (!isdigit(npt[i])) {
        i++;
    }
    result = std::stoi(npt.substr(i));
    return result;
  }

  static std::string stockSummary(std::vector<std::string> &lstOfArt, std::vector<std::string> &categories) {
    if(lstOfArt.size() == 0 || categories.size() == 0) {
      return "";
    }
    std::string result = "";
    int counter = 0;
    for (int i = 0;i < categories.size();i++) {
      for (int j = 0; j < lstOfArt.size();j++) {
      if(lstOfArt[j][0] == categories[i][0]) {
          counter += decode(lstOfArt[j]);
        }
      }
      if (result.size() > 0) {
        result += " - ";
      }
      result += "(";
      result += categories[i][0];
      result +=  " : ";
      result += std::to_string(counter);
      result += ")";
      counter = 0;
    }
    return result;
  }
};
