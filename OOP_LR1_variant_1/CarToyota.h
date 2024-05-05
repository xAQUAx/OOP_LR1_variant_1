#pragma once
#include "subject.h"
class CarToyota :
    public subject
{
private:
    int position;
    double averageSpeed, timeLap;
    IObservers** observers;
public:
    CarToyota();
    ~CarToyota();
    void registerObserver(IObservers* a);
    void removeObserver(IObservers* a);
    void notifyObserver();
    void getMeasurements();
};

