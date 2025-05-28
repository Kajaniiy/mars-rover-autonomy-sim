#include "../include/TerrainMap.h"

//TerrainMap::TerrainMap constructor initializes a TerrainMap object with the specified width and height, setting up a 2D grid of integers with all elements initialized to zero. The grid is resized to match the given dimensions, where each row contains width elements, and there are height rows.
TerrainMap::TerrainMap(int width, int height) : width(width), height(height) {
    grid.resize(height, std::vector<int>(width, 0)); // Initialize the grid with zeros
}

//TerrainMap::addObstacle method adds an obstacle to the terrain map at the specified coordinates (x, y) by setting the corresponding grid cell to 1, provided the coordinates are within bounds. If the coordinates are out of bounds, it outputs an error message to the console.
void TerrainMap::addObstacle(int x, int y) {
    if (isWithinBounds(x, y)) {
        grid[x][y] = 1;
    } else {
        std::cout << "Error adding obstacle:" << x << y << std::endl; 
    }
}

//TerrainMap::removeObstacle method removes an obstacle from the specified (x, y) coordinates on the grid by setting the corresponding cell to 0, provided the coordinates are within bounds. If the coordinates are out of bounds, it outputs an error message to the console.
void TerrainMap::removeObstacle(int x, int y) {
    if (isWithinBounds(x, y)) {
        grid[x][y] = 0;
    } else {
        std::cout << "Error removing obstacle:" << x << y << std::endl; 
    }
}

//TerrainMap::isObstacle method determines whether the specified coordinates (x, y) in the terrain grid represent an obstacle. It returns true if the value at grid[x][y] is 1, indicating an obstacle, and false otherwise.
bool TerrainMap::isObstacle(int x, int y) const {
    return grid[x][y] == 1;
}

//TerrainMap::isWithinBounds method checks whether the given coordinates (x, y) are within the valid bounds of the terrain map. It returns true if x is between 0 (inclusive) and height (exclusive) and y is between 0 (inclusive) and width (exclusive), otherwise it returns false.
bool TerrainMap::isWithinBounds(int x, int y) const {
    return (x >= 0 && x < height && y >= 0 && y < width);
}

//TerrainMap::setRoverPosition method sets the position of a rover on a grid at the specified coordinates (x, y) if they are within bounds, marking the position with the value 2. If the coordinates are out of bounds, it outputs an error message to the console.
void TerrainMap::setRoverPosition(int x, int y) {
    if (isWithinBounds(x, y)) {
        grid[x][y] = 2;
    } else {
        std::cout << "Error adding rover" << std::endl; 
    }
}

//TerrainMap::setTargetPosition method sets a target position on a grid at the specified coordinates (x, y) by assigning the value 3 if the coordinates are within bounds. If the coordinates are out of bounds, it outputs an error message to the console.
void TerrainMap::setTargetPosition(int x, int y) {
    if (isWithinBounds(x, y)) {
        grid[x][y] = 3;
    } else {
        std::cout << "Error adding target" << std::endl; 
    }
}

//TerrainMap::printMap method is a const member function that iterates through a 2D grid (assumed to be a member of the TerrainMap class) and prints its contents to the standard output, with each row displayed on a new line and values separated by spaces. This function does not modify the state of the TerrainMap object.
void TerrainMap::printMap() const {

    for (const auto& row : grid) {
           for (int val : row) {
               std::cout << val << " ";
           }
           std::cout << std::endl;
    }
}










