#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countCharacters(vector<string> &, string);
int main()
{
  vector<string> words = {"hello", "world", "leetcode"};
  string chars = "welldonehoneyr";
  cout << countCharacters(words, chars) << endl;
}

int countCharacters(vector<string> &words, string chars)
{
  unordered_map<char, int> allChars;
  int length = 0;
  int count = 0;
  for (int i = 0; i < chars.size(); i++)
  {
    auto it = allChars.find(chars[i]);
    if (it != allChars.end())
      allChars[chars[i]]++;
    else
      allChars.insert(make_pair(chars[i], 1));
  }

  for (auto word : words)
  {
    unordered_map<char, int> cloneAllChars = allChars;
    for (int i = 0; i < word.size(); i++)
    {
      auto it = cloneAllChars.find(word[i]);
      if (it != cloneAllChars.end() && cloneAllChars[word[i]] > 0)
      {
        count++;
        cloneAllChars[word[i]]--;
      }
    }
    if (count == word.size())
      length += word.size();
    count = 0;
  }

  return length;
}