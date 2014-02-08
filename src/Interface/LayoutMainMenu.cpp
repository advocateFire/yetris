#include <Interface/LayoutMainMenu.hpp>
#include <Interface/Colors.hpp>

#include <iostream>

LayoutMainMenu::LayoutMainMenu(int width, int height):
	Layout(width, height)
{
	this->windowsInit();
	this->main->setTitle("MainMenu");
}
LayoutMainMenu::~LayoutMainMenu()
{
	this->windowsExit();
}
void LayoutMainMenu::windowsInit()
{
	// Only the main window for now
}
void LayoutMainMenu::windowsExit()
{ }
void LayoutMainMenu::draw()
{
	this->main->clear();

	this->main->print_multiline("             __        __       \n"
	                            ".--.--.-----|  |_.----|__.-----.\n"
	                            "|  |  |  -__|   _|   _|  |__ --|\n"
	                            "|___  |_____|____|__| |__|_____|\n"
	                            "|_____|                         ",
	                            24, 1, Colors::pair(COLOR_RED, COLOR_DEFAULT));

	this->main->print("1. Survival",
	                  2,
	                  5,
	                  Colors::pair(COLOR_GREEN, COLOR_DEFAULT));

	this->main->print("2. Invisible",
	                  2,
	                  6,
	                  Colors::pair(COLOR_GREEN, COLOR_DEFAULT));

	this->main->print("3. Slide Left",
	                  2,
	                  7,
	                  Colors::pair(COLOR_GREEN, COLOR_DEFAULT));

	this->main->print("4. Slide Right",
	                  2,
	                  8,
	                  Colors::pair(COLOR_GREEN, COLOR_DEFAULT));

	this->main->print("Press <number> to start",
	                          1,
	                          this->main->getH() - 2,
	                          Colors::pair(COLOR_BLUE, COLOR_DEFAULT, true));

	this->main->refresh();
}

