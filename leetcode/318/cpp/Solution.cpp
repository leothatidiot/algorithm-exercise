class Solution {
public:
  int maxProduct(vector<string> &words)
  {
    int res = 0;
    
    vector<int> tables(words.size());
    for (int i = 0; i < words.size(); i++)
    {
      for (char c : words[i])
      {
        tables[i] |= (1 << (c - 'a'));
      }
    }

    for (int i = 0; i < words.size() - 1; i++)
    {
      for (int j = i + 1; j < words.size(); j++)
      {
        if ((tables[i] & tables[j]) == 0) {
          res = max(res, (int)(words[i].length() * words[j].length()));
        }
      }
    }
    return res;
  }
};