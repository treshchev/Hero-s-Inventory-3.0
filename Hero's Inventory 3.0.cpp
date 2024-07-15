// Program Hero's Inventory
// Describes work with iterators

#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> Inventory;

	Inventory.push_back("sword");
	Inventory.push_back("armor");
	Inventory.push_back("shiled");

	std::vector<std::string>::iterator MyIterator;
	std::vector<std::string>::const_iterator Iter;

	std::cout << "\nYour items:\n";

	for (Iter = Inventory.begin(); Iter != Inventory.end(); Iter++)
	{
		std::cout << *Iter << std::endl;
	}

	std::cout << "\nYou trade your sword for a battle axe.\n";

	MyIterator = Inventory.begin();
	*MyIterator = "battle axe";

	std::cout << "\nYour items:\n";

	for (Iter = Inventory.begin(); Iter != Inventory.end(); Iter++)
	{
		std::cout << *Iter << std::endl;
	}

	std::cout << "\nThe item name '" << *MyIterator << "' has ";
	std::cout << (*MyIterator).size() << " letters in it.\n";

	std::cout << "\nThe item name '" << *MyIterator << "' has ";
	std::cout << MyIterator->size() << " letters in it.\n";

	std::cout << "\nYou recover a crossbow from a slain enemy.";
	std::cout << "\nYour items:\n";

	Inventory.insert(Inventory.begin(), "crossbow");

	for (Iter = Inventory.begin(); Iter != Inventory.end(); Iter++)
	{
		std::cout << *Iter << std::endl;
	}

	std::cout << "\nYour armor is destoryed in a firence battle.";

	Inventory.erase((Inventory.begin() + 2));

	std::cout << "\nYour items:\n";

	for (Iter = Inventory.begin(); Iter != Inventory.end(); Iter++)
	{
		std::cout << *Iter << std::endl;
	}
	return 0;
}
