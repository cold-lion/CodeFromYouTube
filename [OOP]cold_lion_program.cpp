#include <iostream>
using namespace std;

class Room
{
public:
	Room();
	void make_door();
	void make_window();

	int get_door() { return doors; }
	int get_window() { return windows; }

private:
	int doors;
	int windows;

};

int main()
{
	Room bedroom = Room();
	Room kitchen = Room();

	bedroom.make_door();
	bedroom.make_window();
	bedroom.make_window();
	bedroom.make_window();

	cout << bedroom.get_door() << " " << bedroom.get_window() << endl << endl;

	cout << kitchen.get_door() << endl;
}

Room::Room()
{
	doors = 0;
	windows = 0;
}

void Room::make_door()
{
	++doors;
}

void Room::make_window()
{
	++windows;
}