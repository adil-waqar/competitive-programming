#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int numJewelsInStones(string, string);

int main()
{
  string J = "z";
  string S = "ZZ";
  cout << numJewelsInStones(J, S);
}

int numJewelsInStones(string J, string S)
{
  unordered_map<char, bool> m;
  int count = 0;
  for (int i = 0; i < J.size(); i++)
  {
    m.insert(make_pair(J[i], true));
  }
  for (int i = 0; i < S.size(); i++)
  {
    auto it = m.find(S[i]);
    if (it != m.end())
      count++;
  }
  return count;
}