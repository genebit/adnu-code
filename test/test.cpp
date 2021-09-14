#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    float a = 3.5556;

    std::cout << setprecision(3);
    std::cout << a << std::endl;
    
    return 0;
}