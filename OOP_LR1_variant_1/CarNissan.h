#pragma once
#include "subject.h"

class CarNissan :
	public subject
{
private:
	int position;
	double averageSpeed, timeLap;
	IObservers** observers;
public:
	CarNissan();
	~CarNissan();
	void registerObserver(IObservers* a);
	void removeObserver(IObservers* a);
	void notifyObserver();
	void getMeasurements();

};

