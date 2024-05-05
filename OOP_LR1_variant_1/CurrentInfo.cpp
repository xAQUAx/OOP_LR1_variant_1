#include "CurrentInfo.h"

CurrentInfo::CurrentInfo()
{

}

CurrentInfo::~CurrentInfo()
{

}

void CurrentInfo::update(int position, double averageSpeed, double timeLap)
{
	this->position = position;
	this->averageSpeed = averageSpeed;
	this->timeLap = timeLap;
}

void CurrentInfo::display()
{
	std::cout << "Current Info" << std::endl;
	std::cout << "Position car: " << this->position << std::endl;
	std::cout << "Average speed car: " << this->averageSpeed << " km/h" << std::endl;
	std::cout << "Lap time car: " << this->timeLap << " sec" << std::endl;
	std::cout << std::endl;
}