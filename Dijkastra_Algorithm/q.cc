#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <cmath>
#include <map>

using namespace std;

#define N 3  // Grid size

// Direction moves (left, right, up, down)
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};


vector<vector<char>> goal = {{'0', '1', '2'}, {'3', '4', '5'}, {'*', '*', '*'}};

int heuristic(vector<vector<int>>& board) {
    int h = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] != 0) {
                int value = board[i][j] - 1;
                int targetX = value / N;
                int targetY = value % N;
                h += abs(i - targetX) + abs(j - targetY);
            }
        }
    }
    return h;
}

string boardToString(vector<vector<int>>& board) {
    string s = "";
    for (auto& row : board)
        for (int num : row)
            s += to_string(num);
    return s;
}


void solvePuzzle(vector<vector<int>> initial) {
    priority_queue<pair<int, pair<int, vector<vector<int>>>>, 
                   vector<pair<int, pair<int, vector<vector<int>>>>>, 
                   greater<pair<int, pair<int, vector<vector<int>>>>>> pq;
    
    set<string> visited;
    
    int x, y;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (initial[i][j] == 0) x = i, y = j;

    pq.push({heuristic(initial), {0, initial}});
    visited.insert(boardToString(initial));

    while (!pq.empty()) {
        auto current = pq.top();
        pq.pop();

        vector<vector<int>> board = current.second.second;
        int moves = current.second.first;

        if (board == goal) {
            cout << "Solved in " << moves << " moves.\n";
            return;
        }

        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (newX >= 0 && newX < N && newY >= 0 && newY < N) {
                vector<vector<int>> newBoard = board;
                swap(newBoard[x][y], newBoard[newX][newY]);

                string boardStr = boardToString(newBoard);
                if (visited.find(boardStr) == visited.end()) {
                    visited.insert(boardStr);
                    pq.push({heuristic(newBoard) + moves + 1, {moves + 1, newBoard}});
                }
            }
        }
    }
    cout << "No solution exists.\n";
}

int main() {
    vector<vector<char>> initial = {
        {'*', '2', '4'},
        {'*', '0', '*'},
        {'*', '3', '1'}
    };

    solvePuzzle(initial);

    return 0;
}
