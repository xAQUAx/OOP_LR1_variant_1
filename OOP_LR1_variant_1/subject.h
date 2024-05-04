#pragma once
#include "IObservers.h"
class subject
{
	virtual void registerObserver(IObservers*) = 0;
	virtual void removeObserver(IObservers*) = 0;
	virtual void notifyObserver() = 0;
};

