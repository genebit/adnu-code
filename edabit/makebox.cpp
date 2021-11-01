#include <iostream>

void makeBox(int size)
{
    char box[size*size];

    char side = '#';
    char inside = ' ';

    for (int i = 0; i <= size*size; i++)
    {      
        box[i] = side;
        if (i == 4 || i == 8) 
            std::cout << std::endl;
        std::cout << box[i];
    }
    
}

int main()
{
    makeBox(4);
    return 0;
}