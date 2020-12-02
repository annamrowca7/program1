#include <iostream>
#include <random>

int main()
{
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, 6);
    int n = uniform_dist(e1);
    return n;
}

