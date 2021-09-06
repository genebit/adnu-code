#include <iostream>
#include <algorithm>

/*
    Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside.
  
    Example:
        cars(2, 48, 76) ➞ 0
        cars(43, 15, 87) ➞ 10
        cars(88, 37, 17) ➞ 8
*/

int cars(int wheels, int car_bodies, int figures)
{
    int toycar[3] = { wheels, car_bodies, figures };
    int counter = 0;

    if (wheels >= 4 && car_bodies >= 1 && figures >= 2) // If the requirments are met per car
    {
        do 
        {
            // Subtract the parts until it meets the limit of the parts
            wheels -= 4;
            car_bodies -= 1;
            figures -= 2;

            counter++;
        } while (wheels >= 4 && car_bodies >= 1 && figures >= 2);
    }
    return counter;
}

int main()
{
    int wheels, car_bodies, figures;
    std::cin >> wheels >> car_bodies >> figures;

    std::cout << cars(wheels, car_bodies, figures) << std::endl;

    return 0;
}