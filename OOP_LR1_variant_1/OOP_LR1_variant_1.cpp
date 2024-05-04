#include <iostream>
#include "CurrentInfo.h"
#include "CarNissan.h"

using namespace std;

int main()
{
	CarNissan nissan;
	CurrentInfo currentInfo;

	nissan.registerObserver(&currentInfo);

	while (true)
	{
		nissan.getMeasurements();
		currentInfo.display();
		cout << endl;
	}

	return 0;
}