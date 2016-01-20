#include <iostream>
#include <string>

class BattleShip
{
public:
	void setupBoard();

private:
	std::string arr[10][10];
};

void BattleShip::setupBoard()
{
	for (size_t x = 0; x < 10; ++x)
	std::cout << "| " << std::endl;
}

void main()
{
	BattleShip game;
	game.setupBoard();
}
