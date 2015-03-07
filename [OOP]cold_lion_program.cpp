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
	//bedroom and kitchen are objects of the class "Room" objects are used to call the functions within the class
	//Setting an object equal is a more explicit way of saying which constructor you want your object to use
	//This is for when if a class has more than one constructor
	Room bedroom = Room();
	Room kitchen = Room();

	bedroom.make_door();
	bedroom.make_window();
	bedroom.make_window();
	bedroom.make_window();
	
	
	//get_door() is of type int so we can output it as a regular integer
	cout << bedroom.get_door() << " " << bedroom.get_window() << endl << endl;

	cout << kitchen.get_door() << endl;
}

//This is a default constructor, whenever an object is made this is the first program that the computer does
//You could make another constructor that takes parameters but this one is the default
//Default constructors do not have parameters
Room::Room()
{
	//Default constructors are usually used to initialize the varibales of the class
	doors = 0;
	windows = 0;
}

//This is where I defined the functions of the class
void Room::make_door()
{
	++doors;
}

void Room::make_window()
{
	++windows;
}
