#include <iostream>
#include "CurrentInfo.h"
#include "StatisticInfo.h"

#include "CarNissan.h"

using namespace std;

int main()
{
	CarNissan nissan;

	CurrentInfo currentInfo;
	StatisticInfo statisticInfo;

	nissan.registerObserver(&currentInfo);
	nissan.registerObserver(&statisticInfo);

	while (true)
	{
		nissan.getMeasurements();

		currentInfo.display();
		statisticInfo.display();
	}

	return 0;
}