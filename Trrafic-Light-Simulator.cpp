#include <graphics.h>
#include <iostream>
#include<ctime>
#include<stdlib.h>
#include<conio.h>

using namespace std;

class t_light
{
public:
	void construct_light()
	{
		// first trafffic light
		setcolor(WHITE);
		rectangle(175, 150, 300, 200);

		setcolor(WHITE);
		circle(200, 175, 10);

		setcolor(WHITE);
		circle(240, 175, 10);

		setcolor(WHITE);
		circle(280, 175, 10);
		setfillstyle(SOLID_FILL, RED);
		floodfill(281, 173, WHITE);

		// second traffic light
		setcolor(WHITE);
		rectangle(750, 200, 700, 100);

		setcolor(WHITE);
		circle(725, 120, 10);

		setcolor(WHITE);
		circle(725, 150, 10);

		setcolor(WHITE);
		circle(725, 180, 10);
		setfillstyle(SOLID_FILL, RED);
		floodfill(724, 181, WHITE);

		// third traffic light
		setcolor(WHITE);
		rectangle(830, 500, 700, 550);

		setcolor(WHITE);
		circle(725, 525, 10);
		setfillstyle(SOLID_FILL, RED);
		floodfill(726, 524, WHITE);

		setcolor(WHITE);
		circle(765, 525, 10);

		setcolor(WHITE);
		circle(805, 525, 10);

		// fourth traffic light
		setcolor(WHITE);
		rectangle(300, 500, 250, 625);

		setcolor(WHITE);
		circle(275, 525, 10);
		setfillstyle(SOLID_FILL, RED);
		floodfill(274, 526, WHITE);

		setcolor(WHITE);
		circle(275, 562, 10);

		setcolor(WHITE);
		circle(275, 600, 10);
	}
};

class vehicle
{
public:
	void vehicle_1()
	{
		int i = 0;
		int strategy = (rand() % 3);

		for (i = 0; i < 24; i++)
		{
			setcolor(BLUE);
			rectangle(0 + i * 10, 460, 50 + i * 10, 410);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(1 + i * 10, 459, BLUE);

			delay(50);

			setcolor(BLACK);
			rectangle(0 + i * 10, 460, 50 + i * 10, 410);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(1 + i * 10, 459, BLACK);
		}

		setcolor(BLUE);
		rectangle(0 + i * 10, 460, 50 + i * 10, 410);
		setfillstyle(SOLID_FILL, BLUE);
		floodfill(1 + i * 10, 459, BLUE);

		delay(50);
	}

	void vehicle_2()
	{
		int i = 0;
		int strategy = (rand() % 3);

		for (i = 0; i < 16; i++)
		{

			setcolor(RED);
			rectangle(420, 0 + i * 10, 370, 50 + i * 10);
			setfillstyle(SOLID_FILL, RED);
			floodfill(419, 1 + i * 10, RED);

			delay(50);

			setcolor(BLACK);
			rectangle(420, 0 + i * 10, 370, 50 + i * 10);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(419, 1 + i * 10, BLACK);
		}

		setcolor(RED);
		rectangle(420, 0 + i * 10, 370, 50 + i * 10);
		setfillstyle(SOLID_FILL, RED);
		floodfill(419, 1 + i * 10, RED);

		delay(50);
	}

	void vehicle_3()

	{
		int i = 0;
		int strategy = (rand() % 3);
		for (i = 0; i < 25; i++)
		{

			setcolor(GREEN);
			rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
			setfillstyle(SOLID_FILL, GREEN);
			floodfill((1000 - i * 10) - 1, 289, GREEN);

			delay(50);

			setcolor(BLACK);
			rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill((1000 - i * 10) - 1, 289, BLACK);
		}

		setcolor(GREEN);
		rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
		setfillstyle(SOLID_FILL, GREEN);
		floodfill((1000 - i * 10) - 1, 289, GREEN);

		delay(50);
	}

	void vehicle_4()

	{
		int i = 0;

		for (i = 0; i < 15; i++)
		{
			setcolor(CYAN);
			rectangle(650, 700 - i * 10, 600, 650 - i * 10);
			setfillstyle(SOLID_FILL, CYAN);
			floodfill(649, 699 - i * 10, CYAN);

			delay(50);

			setcolor(BLACK);
			rectangle(650, 700 - i * 10, 600, 650 - i * 10);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(649, 699 - i * 10, BLACK);
		}

		setcolor(CYAN);
		rectangle(650, 700 - i * 10, 600, 650 - i * 10);
		setfillstyle(SOLID_FILL, CYAN);
		floodfill(649, 699 - i * 10, CYAN);

		delay(50);
	}
};

class road
{
protected:
	t_light* t;
	vehicle* v;

public:
	void construct()
	{
		// path 1
		setcolor(LIGHTGREEN);
		rectangle(0, 200, 175, 0);
		setfillstyle(SOLID_FILL, LIGHTGREEN);
		floodfill(1, 199, LIGHTGREEN);

		setcolor(LIGHTGREEN);
		rectangle(175, 149, 300, 0);
		setfillstyle(SOLID_FILL, LIGHTGREEN);
		floodfill(176, 148, LIGHTGREEN);

		// path 2
		setcolor(LIGHTGREEN);
		rectangle(750, 200, 1000, 0);
		setfillstyle(SOLID_FILL, LIGHTGREEN);
		floodfill(751, 199, LIGHTGREEN);

		setcolor(LIGHTGREEN);
		rectangle(750, 100, 700, 0);
		setfillstyle(SOLID_FILL, LIGHTGREEN);
		floodfill(749, 99, LIGHTGREEN);

		// path 3
		setcolor(LIGHTGREEN);
		rectangle(0, 500, 250, 1000);
		setfillstyle(SOLID_FILL, LIGHTGREEN);
		floodfill(1, 600, LIGHTGREEN);

		setcolor(LIGHTGREEN);
		rectangle(300, 625, 250, 1000);
		setfillstyle(SOLID_FILL, LIGHTGREEN);
		floodfill(299, 626, LIGHTGREEN);

		// path 4
		setcolor(LIGHTGREEN);
		rectangle(830, 500, 1000, 1000);
		setfillstyle(SOLID_FILL, LIGHTGREEN);
		floodfill(831, 600, LIGHTGREEN);

		setcolor(LIGHTGREEN);
		rectangle(830, 1000, 700, 550);
		setfillstyle(SOLID_FILL, LIGHTGREEN);
		floodfill(829, 551, LIGHTGREEN);

		// road center marking
		setcolor(WHITE);
		rectangle(0, 370, 300, 330);
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(1, 369, WHITE);

		setcolor(WHITE);
		rectangle(700, 370, 1000, 330);
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(701, 369, WHITE);


		setcolor(WHITE);
		rectangle(490, 200, 530, 0);
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(491, 199, WHITE);

		setcolor(WHITE);
		rectangle(490, 500, 530, 1000);
		setfillstyle(SOLID_FILL, WHITE);
		floodfill(491, 501, WHITE);

		t->construct_light();

		v->vehicle_1();
		v->vehicle_2();
		v->vehicle_3();
		v->vehicle_4();
	}
};

class intersection : public road
{
public:
	virtual void move() = 0;
};

class strategy_1 : public intersection
{
public:
	void move()
	{
		int i;
		int strategy = (rand() % 3);

		//change in traffic light 4
		for (int j = 0; j < 15; j++)
		{
			if (j <= 7)
			{
				setfillstyle(SOLID_FILL, YELLOW);
				floodfill(274, 563, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(274, 526, WHITE);

				delay(50);
			}

			else if (j > 7 && j < 14)
			{
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(274, 601, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(274, 563, WHITE);

				setfillstyle(SOLID_FILL, GREEN);
				floodfill(274, 601, WHITE);

				delay(50);
			}
		}

		if (strategy == 0)
		{
			for (int i = 24; i < 100; i++)
			{
				if (i < 35)
				{
					setcolor(BLUE);
					rectangle(0 + i * 10, 460, 50 + i * 10, 410);
					setfillstyle(SOLID_FILL, BLUE);
					floodfill(1 + i * 10, 459, BLUE);

					delay(50);

					setcolor(BLACK);
					rectangle(0 + i * 10, 460, 50 + i * 10, 410);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(1 + i * 10, 459, BLACK);
				}

				else
				{
					setcolor(BLUE);
					rectangle(420, (0 + (i + 15) * 10) - 50, 370, (i + 15) * 10);
					setfillstyle(SOLID_FILL, BLUE);
					floodfill(419, (1 + (i + 15) * 10) - 50, BLUE);

					delay(50);

					setcolor(BLACK);
					rectangle(420, (0 + (i + 15) * 10) - 50, 370, (i + 15) * 10);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(419, (1 + (i + 15) * 10) - 50, BLACK);
				}
			}
		}

		else if (strategy == 1)
		{
			for (int i = 24; i < 100; i++)
			{
				setcolor(BLUE);
				rectangle(0 + i * 10, 460, 50 + i * 10, 410);
				setfillstyle(SOLID_FILL, BLUE);
				floodfill(1 + i * 10, 459, BLUE);

				delay(50);

				setcolor(BLACK);
				rectangle(0 + i * 10, 460, 50 + i * 10, 410);
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(1 + i * 10, 459, BLACK);
			}
		}

		else
		{
			for (int i = 24; i < 100; i++)
			{
				if (i < 60)
				{
					setcolor(BLUE);
					rectangle(0 + i * 10, 460, 50 + i * 10, 410);
					setfillstyle(SOLID_FILL, BLUE);
					floodfill(1 + i * 10, 459, BLUE);

					delay(50);

					setcolor(BLACK);
					rectangle(0 + i * 10, 460, 50 + i * 10, 410);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(1 + i * 10, 459, BLACK);
				}

				else
				{
					setcolor(BLUE);
					rectangle(650, 700 - (i - 35) * 10, 600, 650 - (i - 35) * 10);
					setfillstyle(SOLID_FILL, BLUE);
					floodfill(649, 699 - (i - 35) * 10, BLUE);

					delay(50);

					setcolor(BLACK);
					rectangle(650, 700 - (i - 35) * 10, 600, 650 - (i - 35) * 10);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(649, 699 - (i - 35) * 10, BLACK);
				}
			}
		}

		//traffic 4  
		setfillstyle(SOLID_FILL, RED);
		floodfill(274, 526, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(274, 563, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(274, 601, WHITE);

		delay(50);
		v->vehicle_1();

		for (int j = 0; j < 15; j++)
		{
			if (j <= 7)
			{
				setfillstyle(SOLID_FILL, YELLOW);
				floodfill(241, 173, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(281, 173, WHITE);

				delay(50);
			}

			else if (j > 7 && j < 14)
			{
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(241, 173, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(281, 173, WHITE);

				setfillstyle(SOLID_FILL, GREEN);
				floodfill(201, 173, WHITE);

				delay(50);
			}
		}

		if (strategy == 0)
		{
			for (int i = 16; i < 100; i++)
			{
				if (i < 40)
				{
					setcolor(RED);
					rectangle(420, 0 + i * 10, 370, 50 + i * 10);
					setfillstyle(SOLID_FILL, RED);
					floodfill(419, 1 + i * 10, RED);

					delay(50);

					setcolor(BLACK);
					rectangle(420, 0 + i * 10, 370, 50 + i * 10);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(419, 1 + i * 10, BLACK);
				}

				else
				{
					setcolor(RED);
					rectangle(0 + i * 10, 460, 50 + i * 10, 410);
					setfillstyle(SOLID_FILL, RED);
					floodfill(1 + i * 10, 459, RED);

					delay(50);

					setcolor(BLACK);
					rectangle(0 + i * 10, 460, 50 + i * 10, 410);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(1 + i * 10, 459, BLACK);
				}
			}
		}

		else if (strategy == 1)
		{
			for (int i = 16; i < 100; i++)
			{
				setcolor(RED);
				rectangle(420, 0 + i * 10, 370, 50 + i * 10);
				setfillstyle(SOLID_FILL, RED);
				floodfill(419, 1 + i * 10, RED);

				delay(50);

				setcolor(BLACK);
				rectangle(420, 0 + i * 10, 370, 50 + i * 10);
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(419, 1 + i * 10, BLACK);
			}
		}

		else
		{
			for (int i = 16; i < 100; i++)
			{
				if (i < 24)
				{
					setcolor(RED);
					rectangle(420, 0 + i * 10, 370, 50 + i * 10);
					setfillstyle(SOLID_FILL, RED);
					floodfill(419, 1 + i * 10, RED);

					delay(50);

					setcolor(BLACK);
					rectangle(420, 0 + i * 10, 370, 50 + i * 10);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(419, 1 + i * 10, BLACK);
				}

				else
				{
					setcolor(RED);
					rectangle(1000 - (i + 40) * 10, 290, 950 - (i + 40) * 10, 240);
					setfillstyle(SOLID_FILL, RED);
					floodfill((1000 - (i + 40) * 10) - 1, 289, RED);

					delay(50);

					setcolor(BLACK);
					rectangle(1000 - (i + 40) * 10, 290, 950 - (i + 40) * 10, 240);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill((1000 - (i + 40) * 10) - 1, 289, BLACK);
				}
			}
		}

		//traffic 1
		setfillstyle(SOLID_FILL, RED);
		floodfill(281, 173, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(241, 173, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(201, 173, WHITE);

		delay(50);
		v->vehicle_2();

		//change in traffic light 3
		for (int j = 0; j < 15; j++)
		{

			if (j <= 7)
			{
				setfillstyle(SOLID_FILL, YELLOW);
				floodfill(724, 150, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(724, 181, WHITE);

				delay(50);
			}

			else if (j > 7 && j < 14)
			{
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(724, 150, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(724, 181, WHITE);


				setfillstyle(SOLID_FILL, GREEN);
				floodfill(724, 120, WHITE);

				delay(50);
			}
		}

		if (strategy == 0)
		{
			for (int i = 25; i < 100; i++)
			{
				if (i < 39)
				{
					setcolor(GREEN);
					rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
					setfillstyle(SOLID_FILL, GREEN);
					floodfill((1000 - i * 10) - 1, 289, GREEN);

					delay(50);

					setcolor(BLACK);
					rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill((1000 - i * 10) - 1, 289, BLACK);
				}
				else
				{
					setcolor(GREEN);
					rectangle(650, 700 - i * 10, 600, 650 - i * 10);
					setfillstyle(SOLID_FILL, GREEN);
					floodfill(649, 699 - i * 10, GREEN);

					delay(50);

					setcolor(BLACK);
					rectangle(650, 700 - i * 10, 600, 650 - i * 10);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(649, 699 - i * 10, BLACK);
				}
			}
		}

		else if (strategy == 1)
		{
			for (int i = 25; i < 100; i++)
			{

				setcolor(GREEN);
				rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
				setfillstyle(SOLID_FILL, GREEN);
				floodfill((1000 - i * 10) - 1, 289, GREEN);

				delay(50);

				setcolor(BLACK);
				rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
				setfillstyle(SOLID_FILL, BLACK);
				floodfill((1000 - i * 10) - 1, 289, BLACK);
			}
		}

		else
		{
			for (int i = 25; i < 100; i++)
			{
				if (i < 55)
				{
					setcolor(GREEN);
					rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
					setfillstyle(SOLID_FILL, GREEN);
					floodfill((1000 - i * 10) - 1, 289, GREEN);

					delay(50);

					setcolor(BLACK);
					rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill((1000 - i * 10) - 1, 289, BLACK);
				}

				else
				{
					setcolor(GREEN);
					rectangle(420, 0 + (i - 30) * 10, 370, 50 + (i - 30) * 10);
					setfillstyle(SOLID_FILL, GREEN);
					floodfill(419, 1 + (i - 30) * 10, GREEN);

					delay(50);

					setcolor(BLACK);
					rectangle(420, 0 + (i - 30) * 10, 370, 50 + (i - 30) * 10);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(419, 1 + (i - 30) * 10, BLACK);
				}
			}
		}

		//traffic 2
		setfillstyle(SOLID_FILL, RED);
		floodfill(724, 181, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(724, 150, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(724, 120, WHITE);

		delay(50);
		v->vehicle_3();

		//change in traffic light 4
		for (int j = 0; j < 15; j++)
		{
			if (j <= 7)
			{
				setfillstyle(SOLID_FILL, YELLOW);
				floodfill(766, 524, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(726, 524, WHITE);

				delay(50);
			}

			else if (j > 7 && j < 14)
			{
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(766, 524, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(726, 524, WHITE);

				setfillstyle(SOLID_FILL, GREEN);
				floodfill(805, 525, WHITE);


				delay(50);
			}
		}

		if (strategy == 0)
		{
			for (i = 15; i < 100; i++)
			{

				setcolor(CYAN);
				rectangle(650, 700 - i * 10, 600, 650 - i * 10);
				setfillstyle(SOLID_FILL, CYAN);
				floodfill(649, 699 - i * 10, CYAN);

				delay(50);

				setcolor(BLACK);
				rectangle(650, 700 - i * 10, 600, 650 - i * 10);
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(649, 699 - i * 10, BLACK);
			}
		}

		else if (strategy == 2)
		{
			for (int i = 15; i < 100; i++)
			{
				if (i < 40)
				{
					setcolor(CYAN);
					rectangle(650, 700 - i * 10, 600, 650 - i * 10);
					setfillstyle(SOLID_FILL, CYAN);
					floodfill(649, 699 - i * 10, CYAN);

					delay(50);

					setcolor(BLACK);
					rectangle(650, 700 - i * 10, 600, 650 - i * 10);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(649, 699 - i * 10, BLACK);
				}

				else
				{
					setcolor(CYAN);
					rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
					setfillstyle(SOLID_FILL, CYAN);
					floodfill((1000 - i * 10) - 1, 289, CYAN);

					delay(50);

					setcolor(BLACK);
					rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill((1000 - i * 10) - 1, 289, BLACK);
				}
			}
		}

		else
		{
			for (int i = 15; i < 100; i++)
			{
				if (i < 25)
				{
					setcolor(CYAN);
					rectangle(650, 700 - i * 10, 600, 650 - i * 10);
					setfillstyle(SOLID_FILL, CYAN);
					floodfill(649, 699 - i * 10, CYAN);

					delay(50);

					setcolor(BLACK);
					rectangle(650, 700 - i * 10, 600, 650 - i * 10);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(649, 699 - i * 10, BLACK);
				}

				else
				{
					setcolor(CYAN);
					rectangle(0 + (i + 40) * 10, 460, 50 + (i + 40) * 10, 410);
					setfillstyle(SOLID_FILL, CYAN);
					floodfill(1 + (i + 40) * 10, 459, CYAN);

					delay(50);

					setcolor(BLACK);
					rectangle(0 + (i + 40) * 10, 460, 50 + (i + 40) * 10, 410);
					setfillstyle(SOLID_FILL, BLACK);
					floodfill(1 + (i + 40) * 10, 459, BLACK);
				}
			}
		}

		setfillstyle(SOLID_FILL, RED);
		floodfill(726, 524, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(766, 524, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(805, 524, WHITE);

		delay(50);
		v->vehicle_4();
	}
};

class strategy_2 : public intersection
{
public:
	void move()
	{
		int i;

		//change in traffic light 4
		for (int j = 0; j < 15; j++)
		{

			if (j <= 7)
			{
				setfillstyle(SOLID_FILL, YELLOW);
				floodfill(274, 563, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(274, 526, WHITE);

				delay(50);

				//change in traffic light 3
				setfillstyle(SOLID_FILL, YELLOW);
				floodfill(724, 150, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(724, 181, WHITE);

				delay(50);
			}

			else if (j > 7 && j < 14)
			{
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(274, 601, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(274, 563, WHITE);

				setfillstyle(SOLID_FILL, GREEN);
				floodfill(274, 601, WHITE);

				delay(50);

				//change in traffic light 3
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(724, 150, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(724, 181, WHITE);

				setfillstyle(SOLID_FILL, GREEN);
				floodfill(724, 120, WHITE);

				delay(50);
			}
		}

		for (int i = 24; i < 100; i++)
		{
			setcolor(BLUE);
			rectangle(0 + i * 10, 460, 50 + i * 10, 410);
			setfillstyle(SOLID_FILL, BLUE);
			floodfill(1 + i * 10, 459, BLUE);

			setcolor(GREEN);
			rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
			setfillstyle(SOLID_FILL, GREEN);
			floodfill((1000 - i * 10) - 1, 289, GREEN);

			delay(50);

			setcolor(BLACK);
			rectangle(0 + i * 10, 460, 50 + i * 10, 410);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(1 + i * 10, 459, BLACK);

			setcolor(BLACK);
			rectangle(1000 - i * 10, 290, 950 - i * 10, 240);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill((1000 - i * 10) - 1, 289, BLACK);
		}

		//traffic 4
		setfillstyle(SOLID_FILL, RED);
		floodfill(274, 526, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(274, 563, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(274, 601, WHITE);

		delay(50);
		v->vehicle_1();


		//traffic 2
		setfillstyle(SOLID_FILL, RED);
		floodfill(724, 181, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(724, 150, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(724, 120, WHITE);

		delay(50);
		v->vehicle_3();

		for (int j = 0; j < 15; j++)
		{
			if (j <= 7)
			{
				setfillstyle(SOLID_FILL, YELLOW);
				floodfill(241, 173, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(281, 173, WHITE);

				delay(50);


				//change in traffic light 4
				setfillstyle(SOLID_FILL, YELLOW);
				floodfill(766, 524, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(726, 524, WHITE);

				delay(50);
			}

			else if (j > 7 && j < 14)
			{
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(241, 173, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(281, 173, WHITE);

				setfillstyle(SOLID_FILL, GREEN);
				floodfill(201, 173, WHITE);

				delay(50);

				//change in traffic light 4
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(766, 524, WHITE);

				setfillstyle(SOLID_FILL, BLACK);
				floodfill(726, 524, WHITE);

				setfillstyle(SOLID_FILL, GREEN);
				floodfill(805, 525, WHITE);

				delay(50);
			}
		}

		for (int i = 15; i < 100; i++)
		{
			setcolor(RED);
			rectangle(420, 0 + i * 10, 370, 50 + i * 10);
			setfillstyle(SOLID_FILL, RED);
			floodfill(419, 1 + i * 10, RED);

			setcolor(CYAN);
			rectangle(650, 700 - i * 10, 600, 650 - i * 10);
			setfillstyle(SOLID_FILL, CYAN);
			floodfill(649, 699 - i * 10, CYAN);

			delay(50);

			setcolor(BLACK);
			rectangle(420, 0 + i * 10, 370, 50 + i * 10);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(419, 1 + i * 10, BLACK);

			setcolor(BLACK);
			rectangle(650, 700 - i * 10, 600, 650 - i * 10);
			setfillstyle(SOLID_FILL, BLACK);
			floodfill(649, 699 - i * 10, BLACK);
		}

		//traffic 1
		setfillstyle(SOLID_FILL, RED);
		floodfill(281, 173, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(241, 173, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(201, 173, WHITE);

		delay(50);
		v->vehicle_2();


		setfillstyle(SOLID_FILL, RED);
		floodfill(726, 524, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(766, 524, WHITE);

		setfillstyle(SOLID_FILL, BLACK);
		floodfill(805, 524, WHITE);

		delay(50);
		v->vehicle_4();
	}
};


int main()
{
	char ch;

	cout << "\n\n\n";
	cout << "\t\t\t\t\tWelocome to Traffic Light Simulator.\n\n\n\n";

	cout << "Press any key to observe simulation : ";
	ch = _getch();

	initwindow(1000, 1000);

	road r;

	r.construct();

	intersection* ptr1;
	intersection* ptr2;

	strategy_1 s1;
	strategy_2 s2;

	ptr1 = &s1;
	ptr2 = &s2;

	int i = 0;

	while (true)
	{
		if (i % 2 == 0)
		{
			// performing strategy 1
			ptr1->move();
		}

		else
		{
			// performing strategy 2
			ptr2->move();
		}
		i++;
	}

	getch();


	delete ptr1;
	delete ptr2;

	return 0;
}