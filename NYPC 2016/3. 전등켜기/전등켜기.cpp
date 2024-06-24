=#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

int W, H;
vector<string> grid;
vector<vector<vector<bool>>> visited;

struct State 
{
    int x, y, dx, dy;
    string direction;
    int start_index;
};

bool is_within_bounds(int x, int y) 
{
  return x >= 0 && x < W && y >= 0 && y < H;
}

bool bfs(int start_x, int start_y, int dx, int dy, string direction, int start_index) 
{
  queue<State> q;
  q.push({start_x, start_y, dx, dy, direction, start_index});
    
  while (!q.empty()) 
  {
    State current = q.front();
    q.pop();
        
    int x = current.x, y = current.y, dir_x = current.dx, dir_y = current.dy;
        
    while (is_within_bounds(x, y)) 
    {
      if (visited[y][x][(dir_x + 1) + 2 * (dir_y + 1)]) 
      {
        break;
      }
      visited[y][x][(dir_x + 1) + 2 * (dir_y + 1)] = true;

      if (grid[y][x] == 'O') 
      {
        cout << current.direction << " " << current.start_index << "\n";
        return true;
      }
            
      if (grid[y][x] == '/') 
      {
        swap(dir_x, dir_y);
        dir_x = -dir_x;
      } 
      else if (grid[y][x] == '\\') 
      {
        swap(dir_x, dir_y);
        dir_y = -dir_y;
      }

      x += dir_x;
      y += dir_y;
    }
  }
  return false;
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  cin >> W >> H;
  grid.resize(H);
  visited.resize(H, vector<vector<bool>>(W, vector<bool>(4, false)));

  for (int i = 0; i < H; ++i)
  {
    cin >> grid[i];
  }
  
  for (int i = 0; i < H; ++i) 
  {
    if (bfs(0, i, 1, 0, "L", i)) return 0;
  }
    
  for (int i = 0; i < H; ++i)
  {
    if (bfs(W - 1, i, -1, 0, "R", i)) return 0;
  }

  for (int i = 0; i < W; ++i) 
  {
    if (bfs(i, 0, 0, 1, "U", i)) return 0;
  }

  for (int i = 0; i < W; ++i) 
  {
    if (bfs(i, H - 1, 0, -1, "D", i)) return 0;
  }

}
