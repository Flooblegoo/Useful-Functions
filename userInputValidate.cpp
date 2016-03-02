// A small function to use for User Input Validation
// Simply replace 'x' with the appropriate variable and other info as needed
// then wherever you're going to 'std::cin >>' the part that requires validation
// just replace it with, for example, 'guess = userInputValidate()'

int userInputValidate()
{
	int x;
	std::cout << "Enter a Number: ";
	std::cin >> x;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "\nBad entry, no text allowed! Enter a Number: ";
		std::cin >> x;
	}
	return x;
}