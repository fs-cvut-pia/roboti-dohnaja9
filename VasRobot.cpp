#include <string>
#include <iostream>
#include "VasRobot.h"
#include "Bludiste.h"
#include "Prohledavac.h"

MujRobot::MujRobot() : Prohledavac() {}

bool MujRobot::start(Bludiste & map){ return true;}
bool MujRobot::start(BludisteOdkryte & map){ return true;}
bool MujRobot::stop(){ return true;}

std::string MujRobot::jmeno(){ return "Random_DJ9";}

//random kroky
 void MujRobot::krok(Bludiste & map)
{
	
	int smer = rand () %4;
	bool uspech = false;
	if (smer == 0)
		uspech = map.nahoru();
	else if (smer == 1)
		uspech = map.dolu();
	else if (smer== 2)
		uspech = map.vlevo();
	else
		uspech = map.vpravo();
	
}
// algoritmus tremaux (nebo rekurzivne???)
/*void MujRobot::krok(Bludiste & map)
{

}
*/
void MujRobot::krok(BludisteOdkryte & map)
{
	int smer = rand () %4;
	bool uspech = false;
	if (smer == 0)
		uspech = map.nahoru();
	else if (smer == 1)
		uspech = map.dolu();
	else if (smer== 2)
		uspech = map.vlevo();
	else
		uspech = map.vpravo();
		
}
