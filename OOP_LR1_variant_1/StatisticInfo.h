#pragma once
#include "IObservers.h"
#include "IDisplayElement.h"
#include <vector>
#include <iostream>

class StatisticInfo :
    public IObservers, public IDisplayElement
{
private:
    int iter;
    int array_position[3];
    double array_averageSpeed[3];
    double array_timeLap[3];
public:
    StatisticInfo();
    ~StatisticInfo();
    void update(int position, double averageSpeed, double timeLap);
    void display();
};