#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int N;
    cin >> N;
    vector<vector<char>> grid(N, vector<char>(N));
    
    int squirrelCount = 0, playerCount = 0;
    
    // 입력 받기
    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'D') 
            {
                squirrelCount++;
            } 
            else if (grid[i][j] == 'C') 
            {
                playerCount++;
            }
        }
    }
    
    // 필요한 다람쥐 수 계산
    int requiredSquirrels = playerCount * 2;
    
    // 다람쥐가 모자란 경우 추가 배치
    if (squirrelCount < requiredSquirrels) 
    {
        int additionalSquirrels = requiredSquirrels - squirrelCount;
        for (int i = 0; i < N && additionalSquirrels > 0; ++i) 
        {
            for (int j = 0; j < N && additionalSquirrels > 0; ++j) 
            {
                if (grid[i][j] == '.') 
                {
                    grid[i][j] = 'D';
                    additionalSquirrels--;
                }
            }
        }
    }
    
    // 결과 출력
    cout << N << endl;
    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            cout << grid[i][j];
        }
        cout << "\n";
    }
    
}
