#include <iostream>
#include <algorithm>

// Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside.

int cars(int wheels, int car_bodies, int figures)
{
    int toycar[3] = { wheels, car_bodies, figures };
    int counter = 0;

    if (wheels >= 4 && car_bodies >= 1 && figures >= 2) // If the requirments are met per car
    {
        // Finding the lowest element
        // int temp = wheels;

        // for (int i : toycar)
        //     if (temp >= i)
        //         temp = i;

        do 
        {
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