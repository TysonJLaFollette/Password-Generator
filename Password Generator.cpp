//Generates random string of characters 15 to 20 digits long. Made by Tyson LaFollette.
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

static const char alphanum[] =
"0123456789"
"0123456789"
"!@#$%^&*-_/\.,?+"
"!@#$%^&*-_/\.,?+"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

char genRandom()
{
    int stringLength = sizeof(alphanum) - 1;
    return alphanum[rand() % stringLength];
}

int main()
{
    int ipasswordlength;
    srand(time(0));
    ipasswordlength = rand()%6 + 15;
    std::string Str;
    for(unsigned int i = 0; i < ipasswordlength; ++i)
    {
    Str += genRandom();
    }
    cout << "\nRandom password: " + Str;
    cout << "\n\nPress ENTER to exit.";
    cin.get();
    return 0;
}
