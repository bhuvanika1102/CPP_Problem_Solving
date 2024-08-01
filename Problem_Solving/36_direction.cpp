#include <iostream>
#include <cmath>
#include <vector>
#include <string>

struct Movement {
    char direction;
    int distance;
};

std::string getDirection(int x, int y) {
    if (x > 0 && y < 0) {
        return "Southeast";
    } else if (x > 0 && y > 0) {
        return "Northeast";
    } else if (x < 0 && y > 0) {
        return "Northwest";
    } else if (x < 0 && y < 0) {
        return "Southwest";
    } else if (x == 0 && y > 0) {
        return "North";
    } else if (x == 0 && y < 0) {
        return "South";
    } else if (x > 0 && y == 0) {
        return "East";
    } else if (x < 0 && y == 0) {
        return "West";
    } else {
        return "Starting Point";
    }
}

int main() {
    std::vector<Movement> movements;
    int n;
    std::cout << "Enter the number of movements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        Movement move;
        std::cout << "Enter direction (N/S/E/W/R/L) and distance: ";
        std::cin >> move.direction >> move.distance;
        movements.push_back(move);
    }

    // Starting point (0, 0)
    int x = 0, y = 0;

    // Initial direction facing South
    char currentDirection = 'S';

    for (const auto& move : movements) {
        if (move.direction == 'S') {
            y -= move.distance;
        } else if (move.direction == 'N') {
            y += move.distance;
        } else if (move.direction == 'E') {
            x += move.distance;
        } else if (move.direction == 'W') {
            x -= move.distance;
        } else if (move.direction == 'R') {
            if (currentDirection == 'S') currentDirection = 'W';
            else if (currentDirection == 'W') currentDirection = 'N';
            else if (currentDirection == 'N') currentDirection = 'E';
            else if (currentDirection == 'E') currentDirection = 'S';

            if (currentDirection == 'S') y -= move.distance;
            else if (currentDirection == 'N') y += move.distance;
            else if (currentDirection == 'E') x += move.distance;
            else if (currentDirection == 'W') x -= move.distance;
        } else if (move.direction == 'L') {
            if (currentDirection == 'S') currentDirection = 'E';
            else if (currentDirection == 'E') currentDirection = 'N';
            else if (currentDirection == 'N') currentDirection = 'W';
            else if (currentDirection == 'W') currentDirection = 'S';

            if (currentDirection == 'S') y -= move.distance;
            else if (currentDirection == 'N') y += move.distance;
            else if (currentDirection == 'E') x += move.distance;
            else if (currentDirection == 'W') x -= move.distance;
        }
    }

    // Output the final direction
    std::string finalDirection = getDirection(x, y);
    std::cout << "The man is " << finalDirection << " from the starting place." << std::endl;

    return 0;
}