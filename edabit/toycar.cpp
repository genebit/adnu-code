#include <iostream>
#include <algorithm>

// Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside.
 
int objectCounter(int parts, int requirment)
{
    int counter = 0;
    for (int i = parts; i >= requirment; i -= requirment)
        counter++;

    return counter;
}

int cars(int wheels, int car_bodies, int figures)
{
    int result[3] = { objectCounter(wheels, 4), objectCounter(car_bodies, 1), objectCounter(figures, 2) };    
    int *min = std::min_element(std::begin(result), std::end(result));

    int total = 0;

    if (result[0] >= 4 && result[1] >= 1 && result[2] >= 2) // If the requirments are met per car
    {
        // Formula: only divide the total of wheels and figures to the requirement
        // for (int i : result)
        //     total += i;
    }
    return total;
}


int main()
{
    int wheels, car_bodies, figures;
    std::cin >> wheels >> car_bodies >> figures;

    std::cout << "This parts can build " << cars(wheels, car_bodies, figures) << " cars." << std::endl;
    return 0;
}