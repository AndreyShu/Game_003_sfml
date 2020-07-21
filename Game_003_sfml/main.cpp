#include "Game.h"
#include <time.h>

int main()
{
	//Need to find out why this in not working anymore
	//srand(time(static_cast<unsigned>(0)));

	srand(time(NULL));

	Game game;

	game.run();

	//End of application
	return 0;
}