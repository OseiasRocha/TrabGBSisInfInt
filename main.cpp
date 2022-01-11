#include <iostream>
#include <random>

using namespace std;

struct City{

    City(uint32_t x, uint32_t y):x(x), y(y){

    }

    const uint32_t x;
    const uint32_t y;
};

int main(){

    random_device dev;
    mt19937 rng(dev);
    uniform_int_distribution<mt19937::result_type> dist6(1,6);
    cout << dist6(rng) << endl;

    return EXIT_SUCCESS;
}