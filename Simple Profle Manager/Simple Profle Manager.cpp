#include <iostream>
#include <string>

int main() 
{
	int userChoice{ 0 }; 

	while (true)
	{
		std::cout << "Welcome to Profile Manager" << '\n';
		std::cout << "Menu:" << '\n';
		std::cout << "1: Create a Profile" << '\n';
		std::cout << "2: Exit" << '\n';
		std::cout << "Choose an option: " << '\n';

		std::cin >> userChoice;

		if (userChoice == 1) {
			std::cout << '\n';
			std::string profileName;
			std::cout << "Enter name: ";
			std::cin >> profileName;
			std::cout << '\n';

			int age{ 0 };
			std::cout << "Enter age: ";
			std::cin >> age;
			std::cout << '\n';

			std::string favoriteHobby{ 0 };
			std::cout << "Enter favorite hobby: ";
			std::cin >> favoriteHobby;
			std::cout << '\n';

			std::cout	<< '\n' << "Profile Create:" << '\n';
			std::cout	<< "Name: " << profileName << '\n'
						<< "Age: " << age << '\n'
						<< "Favorite: " << favoriteHobby << '\n';
		}
		else if (userChoice == 2) {
			std::cout << "Thanks for using Profile Manager!";
			break;
		}
		else {
			std::cout << "Error: Please enter numbers 1 or 2 to continue";
		}
	}
	return 0;
}