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
	char arr[MAX][MAX];
	int hits;
	int misses;
	static const char marker = 'x';
	const int len = 10;
};
void BattleShip::setupBoard()
{
	/*char row = 65;

	for (size_t x = 0; x < len; ++x)
	{
		if (x == 0)
			std::cout << "|";
		std::cout << " " << x + 1;

		std::cout << std::endl;
		std::cout << "--|" << std::setw(10) << std::setfill('-');

		//std::cout << std::setw(10) << std::setfill('-') << std::endl;

		std::cout << static_cast<char>(row + x) << "|" << std::setw(10) << "|" << std::endl;

	}*/

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

	randomX = rand() % 10;  // 0 - 9
	randomY = rand() % 10;

	arr[randomX][randomY] = 'X';

}
void BattleShip::choice(int &choice, int &choice2)
{

	std::cout << "Enter coordinates to hit: " << std::endl;
	std::cin >> choice >> choice2;

	//return choice;
}
bool BattleShip::hit(int &choice, int &choice2)
{
	choice = rand() % 10;  // 0 - 9
	choice2 = rand() % 10;

	if (arr[choice][choice2] == 'X')
		return true;

	return false;
}
void main(int argc, char **argv)
{
	srand(static_cast<int>(time(0)));

	int randomX, randomY;

	BattleShip game;

	for (int x = 0; x < MAX; ++x)
	{
		game.shipFill(randomX, randomY);
	}

	for (int i = 0; i < MAX; ++i)
	{
		//std::cout << "Ship placed on " << randomX << " x  " << randomY << std::endl;
		if (game.hit(randomX, randomY))
			std::cout << "Ship has been hit on " << randomX << " " << randomY << std::endl;
		else
			std::cout << "No Hit! on " << randomX << " " << randomY << std::endl;
	}
	
	
	game.setupBoard();
}


