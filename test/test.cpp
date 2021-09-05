#include <iostream>
#include <algorithm>

using namespace std;
 

int main()
{
    int wheels = 43;
    int w_counter = 0;

    for (int i = wheels; i >= 2; i-=2)
    {
        w_counter++;
    }
    // cout << w_counter << endl;

    int car_bodies = 15;

    int figures = 87;
    int f_counter = 0;

    for (int i = figures; i >= 2; i-=2)
    {
        f_counter++;        
    }
    // cout << f_counter << endl;    


    int res[] = { w_counter, car_bodies, f_counter };
    
    // int *h = std::max_element(std::begin(res), std::end(res));
    cout << res[0] << ' ' << res[1] << ' ' << res[2] << endl; 
    // cout << *h << endl;
    return 0;
}