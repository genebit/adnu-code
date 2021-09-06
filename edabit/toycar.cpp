#include <iostream>
#include <algorithm>

// Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside.
int objectCounter(int parts, int requirements)
{
    int counter = 0;

    for (int i = parts; i >= requirements; i -= requirements)
        counter++;   

    return counter;
}

int cars(int wheels, int car_bodies, int figures)
{
    if (wheels >= 4 && car_bodies >= 1 && figures >= 2) // If the requirments are met per car
    {
        int result[3] = { objectCounter(wheels, 4), objectCounter(car_bodies, 1), objectCounter(figures, 4) };    
        int *min = std::min_element(std::begin(result), std::end(result));

        return *min;
    }
    return 0;
}

int main()
{
    int wheels, car_bodies, figures;
    std::cin >> wheels >> car_bodies >> figures;

    cars(wheels, car_bodies, figures);

    return 0;
}