#include "Bludiste.h"
#include "Prohledavac.h"
#include <string>

class MujRobot : public Prohledavac {
	public:
		MujRobot();
		~MujRobot();
		bool start(Bludiste & map);
   	 	bool start(BludisteOdkryte & map);
   		bool stop();
   		void krok(Bludiste & map) ;
   		void krok(BludisteOdkryte & map) ;
   		std::string jmeno();
};
