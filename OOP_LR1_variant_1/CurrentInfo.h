#pragma once
#include "IObservers.h"
#include "IDisplayElement.h"
#include <iostream>

class CurrentInfo :
    public IObservers, public IDisplayElement
{
private:
    int position;
    double averageSpeed, timeLap;
public:
    CurrentInfo();
    ~CurrentInfo();
    void update(int position, double averageSpeed, double timeLap);
    void display();
};

