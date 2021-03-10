int search_for_even(std::vector<int>* arr) {
  for (int i : *arr) {
    if (i % 2 == 0) {
      return i;
    }
  }
}

int search_for_odd(std::vector<int>* arr) {
  for (int i : *arr) {
    if (i % 2 != 0) {
      return i;
    }
  }
}

int FindOutlier(std::vector<int> arr)
{
    int count1 = 0;
    int count2 = 0;
    int result;
    int i = 0;
    while(i < 3) {
      if (arr[i] % 2 == 0) {
        count1++;
      } else {
        count2++;
      }
      i++;
    }
    if (count1 > count2) {
        result  = search_for_odd(&arr);
        return result;
      } else {
        result = search_for_even(&arr);
        return result;
    }
}
