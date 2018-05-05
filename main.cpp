#include "window.h"
#include "game.h"

int main()
{
	Game game;

	while( !game.getFinishFlag() ) //czy returnowanie okna byłoby spowalniające?
	{
		game.restartClock();
		if( game.getFrametimeCondition() )
		{
			game.Update();
			game.HandleInput();
			game.Render();
       		game.substract();
		}
	}
}