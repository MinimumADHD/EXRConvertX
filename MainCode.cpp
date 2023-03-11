#include "iostream"
#include "string"

void coutln(std::string Message)
{
	std::cout << Message << std::endl;
}

int main()
{
	std::string ExrPath;
	int ChooseOption;
	while (true)
	{
		coutln("Insert your .exr file path.");
		std::getline(std::cin, ExrPath);
		coutln("Are you sure this is the right path?\n1: Yes\n2: No");
		std::cin >> ChooseOption;
		switch (ChooseOption)
		{
		case 1:
		{

		}
		}
	}
	return 0;
}