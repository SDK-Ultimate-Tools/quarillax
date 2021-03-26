#include <iostream>
#include "query/query.h"
Quarilo::Query<std::string>Results;
int main()
{
	using namespace Quarilo;
	std::cout << "You are using the IDIOTWEB." << std::endl;
	Results.additems("Hello World Festival Out now!");
	Results.additems("Meme Festival");
	Results.additems("Hello C++. . . ");
	
	Results.newSite("quar://www.idiots.org", "1", "Cool Idiot site.");
	std::cout << Results.get("Idiot") << std::endl;
	
}
