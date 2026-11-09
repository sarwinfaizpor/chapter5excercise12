#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int randomNumber = rand() % 100 + 1;
	int guess;

	do
	{
		cout << "Guess a number between 1 and 100: ";
		cin >> guess;

		if (guess > randomNumber)
		{
			cout << "Too high. Try again." << endl;
		}
		else if (guess < randomNumber)
		{
			cout << "Too low. Try again." << endl;
		}
		else
		{
			cout << "Congratulations. You figured out my number."
				<< endl;
		}

	} while (guess != randomNumber);

	return 0;
}
