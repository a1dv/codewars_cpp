bool is_isogram(std::string str) {
  int count = 1;
  for (char c : str) {
    c = std::tolower(c);
    for (char a : str.substr(count, str.length())) {
      a = std::tolower(a);
      if (a == c) {
        return false;
      }
    }
    count++;
  }
  return true;
}
