#include "CarToyota.h"
#include <iostream>

CarToyota::CarToyota()
{
	this->observers = new IObservers * [3];
	for (int i = 0; i < 3; i++)
	{
		this->observers[i] = 0;
	}
}

CarToyota::~CarToyota()
{
	delete[]observers;
}

void CarToyota::registerObserver(IObservers* a)
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] == 0)
		{
			observers[i] = a;
			return;
		}
	}
	std::cout << "No position for Observer " << std::endl;
}

void CarToyota::removeObserver(IObservers* a)
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] == a)
		{
			observers[i] = 0;
			return;
		}
	}
	std::cout << "Observer is not in the list " << std::endl;
}

void CarToyota::notifyObserver()
{
	for (int i = 0; i < 3; i++)
	{
		if (observers[i] != 0)
		{
			observers[i]->update(this->position, this->averageSpeed, this->timeLap);
		}
	}
}

void CarToyota::getMeasurements()
{
	std::cout << "Position car: ";
	std::cin >> this->position;
	std::cout << "Average speed car: ";
	std::cin >> this->averageSpeed;
	std::cout << "Lap time: ";
	std::cin >> this->timeLap;
	std::cout << std::endl;
	this->notifyObserver();
}