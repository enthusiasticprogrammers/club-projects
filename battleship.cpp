#include <iostream>
#include <string>
#include <queue>
#include <iomanip>
#include <ctime> 


const int MAX = 10;

class BattleShip
{
public:
	void setupBoard();
	void choice(int &choice, int &choice2);
	void shipFill(int &randomX, int &randomY);
	bool hit(int &choice, int&choice2); 
private:
	std::string arr[MAX][MAX];
	int hits;
	int misses;
	static const char marker = 'x';
	const int len = 10;
};
void BattleShip::setupBoard()
{
	char row = 65;

	for (size_t x = 0; x < len; ++x)
	{
		if (x == 0)
			std::cout << "|";
		std::cout << " " << x + 1;
		
		std::cout << std::endl;
		std::cout << "--|" << std::setw(10) << std::setfill('-');

		//std::cout << std::setw(10) << std::setfill('-') << std::endl;

		std::cout << static_cast<char>(row + x) << "|" << std::setw(10) << "|" << std::endl;

	}

	/*******************


	  |1 2 3 4 5 6 7 8 9 10
	--|--------------------
	A |
	B |
	C |
	D |
	E |
	F |
	
	*********************/


	std::cout << std::endl;
}
void BattleShip::shipFill(int &randomX, int &randomY)
{
	srand(static_cast<int>(time(0)));

	 randomX = rand() % 10 + 1;
	 randomY = rand() % 10 + 1;

	arr[randomX][randomY] = "Ship is here.";

}
void BattleShip::choice(int &choice, int &choice2)
{

	std::cout << "Enter coordinates to hit: " << std::endl;
	std::cin >> choice >> choice2; 

	//return choice;
}
bool BattleShip::hit(int &choice, int &choice2)
{
	if (arr[choice][choice2] == "Ship is here.")
		return true;

	return false;
}
void main(int argc, int *argv[])
{

	int randomX, randomY;

	BattleShip game;

	game.shipFill(randomX, randomY);
	game.setupBoard();
}

 

