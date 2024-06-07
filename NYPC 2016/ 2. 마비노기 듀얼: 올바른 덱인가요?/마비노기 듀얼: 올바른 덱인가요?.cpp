#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  unordered_map<string, int> resource_count;
  string resource;
    
  for (int i = 0; i < N; ++i) 
  {
    cin >> resource;
    resource_count[resource]++;
  }

  if (resource_count.size() <= 3) 
  {
    cout << "valid" << "\n";
  }
  else
  {
    cout << "invalid" << "\n";
  }
}
