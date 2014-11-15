#include "Agent.h"

Agent::Agent()
{
	//Initialize Agent
}

Action* Agent::getAction(Tetris *board)
{
	Rotation rot = FLIP;
	int playColumn = rand() % (board->highestValidColWithRot(rot) + 1);
	Action *a = new Action(rot, playColumn);
	return a;
}