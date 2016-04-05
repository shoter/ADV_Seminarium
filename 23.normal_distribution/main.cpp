#include <iostream>
#include <random>
#include <chrono>
#include <iomanip>

const int RAND_COUNT = 100000;
const int NUMBER_COUNT = 30;
const int STARS_NUMBER = NUMBER_COUNT * 15;

int main()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::ranlux24 generator(seed);
    std::normal_distribution<double> distribution(NUMBER_COUNT / 2,5.0);

    int p[NUMBER_COUNT]={};

      for (int i=0; i< RAND_COUNT; ++i) {
        double number = distribution(generator);
        if ((number>=0.0)&&(number<(double)NUMBER_COUNT)) ++p[int(number)];
      }

      std::cout << "normal_distribution :" << std::endl;

      for (int i=0; i<NUMBER_COUNT; ++i) {
        std::cout << std::setw(3) << i << "-" << std::setw(3) <<  (i+1) << ": ";
        std::cout << std::string(p[i]*STARS_NUMBER/RAND_COUNT,'*') << std::endl;
      }



    std::cin.get();
    return 0;
}


//http://www.cplusplus.com/reference/random/normal_distribution/ USED FROM HERE
