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

	int lap = 1;

	nissan.registerObserver(&currentInfo);
	nissan.registerObserver(&statisticInfo);

	while (true)
	{
		cout << "Lap: " << lap << endl;
		nissan.getMeasurements();

		currentInfo.display();
		statisticInfo.display();
		lap++;
	}

	return 0;
}
