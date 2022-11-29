#include <iostream>
#include <stdlib.h>
#include <time.h>


class RND{
	public:
		static void createSeed();
		static int generateRnd(const int limit);
};

namespace RND
{	
	class INT
	{
		static void createSeed();
		static int generateRnd(const int limit);
	};
}

void RND::INT::createSeed(){
	srand(time(NULL));
}

int RND::INT::generateRnd(const int limit){
	createSeed();
	return rand() % limit;
}


