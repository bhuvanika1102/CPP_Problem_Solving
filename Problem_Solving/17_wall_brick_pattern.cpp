/*chatgpt answer is below...but wrong ..onum purila*/











/*

Size of the array is given were w is wall, g ground, o ball, numbers are bricks.
I/p size 7
Number of bricks 6
Position (2, 2)(2, 3)(2, 4)(3, 2)(3, 3)(3, 4)
Ball:5(life)
w  w  w  w  w w   w
w                 w
w     1  1  1     w
w     1  1  1     w
w                 w
w                 w
w  g  g   o  g  g w
There are three commands St, lt, rt straight, left, right respectively.
If it is st the ball moves straight .if there any brick(1) along the way it hit it .then brick disappear.ball back to original position.if there is no brick .it come to initial position.
I/p st
O/p
w w  w  w  w  w  w
w                   w
w       1  1  1     w
w       1      1    w
w                   w
w                   w
w  g  g   o  g  g  w
Ball count:5
I/p lt
O/p
w w  w  w  w  w  w
w                     w
w       1  1  1       w
w                1    w
w                     w
w                     w
w  g  o  g   g  g  w
Ball count:4
(Lt : ball moves diagonally left there is no bricK on the way so it hit the wall reflect back horizontally there is a brick(3, 2) after hitting it it moves downwards ball position changed.hence ball count get reduced. On moving downwards is there any brick that also disappear.)
Same for rt but moves diagonally right.
This is first module.In second module each brick has value for each hit value get reduced.it disappear only when it become zero.*/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int SIZE = 7;
const char WALL = 'w';
const char GROUND = 'g';
const char BALL = 'o';

void printGrid(const vector<vector<char>>& grid, int ballCount) {
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    cout << "Ball count: " << ballCount << endl;
}

void initializeGrid(vector<vector<char>>& grid, const vector<pair<int, int>>& bricks) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (i == 0 || i == SIZE - 1 || j == 0 || j == SIZE - 1) {
                grid[i][j] = WALL;
            } else {
                grid[i][j] = GROUND;
            }
        }
    }

    for (const auto& brick : bricks) {
        grid[brick.first][brick.second] = '1';
    }

    grid[6][3] = BALL; // Initial position of the ball
}

bool hitBrick(vector<vector<char>>& grid, int x, int y) {
    if (grid[x][y] == '1') {
        grid[x][y] = GROUND;
        return true;
    }
    return false;
}

void processCommand(string command, vector<vector<char>>& grid, int& ballCount) {
    int ballX = 6, ballY = 3; // Initial position of the ball

    if (command == "st") {
        for (int i = ballX - 1; i > 0; --i) {
            if (hitBrick(grid, i, ballY)) {
                break;
            }
        }
    } else if (command == "lt") {
        int x = ballX - 1, y = ballY - 1;
        while (x > 0 && y > 0) {
            if (hitBrick(grid, x, y)) {
                break;
            }
            --x; --y;
        }
        ++ballCount;
        x = ballX - 1, y = ballY - 1;
        while (x > 0 && y > 0) {
            if (grid[x][y] == WALL) {
                x = ballX, y = ballY - 1;
                while (y > 0) {
                    if (hitBrick(grid, x, y)) {
                        break;
                    }
                    --y;
                }
                break;
            }
            --x; --y;
        }
    } else if (command == "rt") {
        int x = ballX - 1, y = ballY + 1;
        while (x > 0 && y < SIZE) {
            if (hitBrick(grid, x, y)) {
                break;
            }
            --x; ++y;
        }
        ++ballCount;
        x = ballX - 1, y = ballY + 1;
        while (x > 0 && y < SIZE) {
            if (grid[x][y] == WALL) {
                x = ballX, y = ballY + 1;
                while (y < SIZE) {
                    if (hitBrick(grid, x, y)) {
                        break;
                    }
                    ++y;
                }
                break;
            }
            --x; ++y;
        }
    }

    grid[ballX][ballY] = BALL; // Reset ball position
}

int main() {
    vector<vector<char>> grid(SIZE, vector<char>(SIZE));
    vector<pair<int, int>> bricks = {{2, 2}, {2, 3}, {2, 4}, {3, 2}, {3, 3}, {3, 4}};
    int ballCount = 5;

    initializeGrid(grid, bricks);

    string command;
    while (true) {
        printGrid(grid, ballCount);
        cout << "Enter command (st, lt, rt) or 'exit' to quit: ";
        cin >> command;

        if (command == "exit") break;

        processCommand(command, grid, ballCount);
    }

    return 0;
}