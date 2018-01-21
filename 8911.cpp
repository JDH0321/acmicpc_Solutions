#include <iostream>
#include <string.h>

using namespace std;
enum {N, E, S, W};

struct pos{
	int posX;
	int posY;
	int SX; // Small X
	int LX; // Large X
	int SY; 
	int LY;
	
	void move(int dir)
	{
		if(dir == N)
			posY += 1;
		else if(dir == E)
			posX += 1;
		else if(dir == S)
			posY -= 1;
		else // W
			posX -= 1;
		LX = max(LX, posX);
		LY = max(LY, posY);
		SX = min(SX, posX);
		SY = min(SY, posY);
	}

	int range(void)
	{
		return (LX - SX) * (LY - SY);
	}
};

int main(void)
{
	int T;
	cin >> T;
	while(T--)
	{
		int direction = N;
		pos P = {0, 0, 0, 0, 0, 0};

		char order[501];
		cin >> order;

		int length = strlen(order);
		for(int i = 0 ; i < length ; i++)
		{
			if(order[i] == 'R')
				direction = (direction + 1) % 4;
			else if(order[i] == 'L')
				direction = (direction + 3) % 4;
			else if(order[i] == 'F')
				P.move(direction);				
			else // B
				P.move((direction+2) % 4);
		}
		cout << P.range() << endl;
	}
	return 0;
}
