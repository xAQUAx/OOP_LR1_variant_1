#include "StatisticInfo.h"

StatisticInfo::StatisticInfo()
{
	this->iter = 0;
	for (int i = 0; i < 3; i++)
	{
		this->array_position[i] = 0;
		this->array_averageSpeed[i] = 0;
		this->array_timeLap[i] = 0;
	}
}

StatisticInfo::~StatisticInfo()
{

}

void StatisticInfo::update(int position, double averageSpeed, double timeLap)
{
	if (this->iter == 3)
		this->iter = 0;
	this->array_position[this->iter] = position;
	this->array_averageSpeed[this->iter] = averageSpeed;
	this->array_timeLap[this->iter] = timeLap;
	iter++;
}

void StatisticInfo::display()
{
	std::cout << "Statistic Info" << std::endl;
	std::cout << "|Position|\t|Average Speed|\t|Lap time|" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << this->array_position[i] << "\t\t" << this->array_averageSpeed[i] << "km/h" << "\t\t" << this->array_timeLap[i] << " sec" << std::endl;
	}
	std::cout << std::endl;
}