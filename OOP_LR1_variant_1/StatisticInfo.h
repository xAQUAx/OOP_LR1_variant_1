#pragma once
#include "IObservers.h"
#include "IDisplayElement.h"
#include <vector>

class StatisticInfo :
    public IObservers, public IDisplayElement
{
private:
    int postition;
    double averageSpeed, timeLap;
    std::vector<double> memory_averageSpeed;
    std::vector<double> memory_timeLap;
};

