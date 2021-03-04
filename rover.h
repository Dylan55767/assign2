#pragma once
#include "mars.h"
#include "types.h"
#include <vector>

class Rover 
{
    public:
        Rover() {}

        void land(Mars& mars);
        void processInput(char c);
        bool hasTravelled(Point& point) const;
        
    private:
        void turnRight();
        void turnLeft();
        void move();

        Point m_Location;
        EDirection m_CurrentFacing;
        std::vector<Point> m_Map;
        int m_GoldScore = 0;

        Mars* m_MarsReference;
};
