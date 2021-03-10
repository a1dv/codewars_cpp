std::string reverse_words(std::string str)
{
  std::string res = "";
  std::string tmp = "";
  int prev = 0;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      tmp.insert(tmp.begin(), str[i]);
      }
    else {
      tmp += " ";
      res += tmp;
      tmp = "";
    }
  }
  res += tmp;
  return res;
}
