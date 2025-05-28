#ifndef TERRAIN_MAP_H
#define TERRAIN_MAP_H

#include <vector>
#include <iostream>

class TerrainMap {
    public:
        TerrainMap(int width, int height);

        void addObstacle(int x, int y);
        void removeObstacle(int x, int y);
        bool isObstacle(int x, int y) const;

        bool isWithinBounds(int x, int y) const;

        void setRoverPosition(int x, int y);
        void setTargetPosition(int x, int y);

        void printMap() const;

    private:
        std::vector<std::vector<int>> grid; // 2D vector to represent the terrain map
        int width; // Width of the map
        int height; // Height of the map
};

#endif