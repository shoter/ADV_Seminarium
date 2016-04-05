#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>

int main ()
{
  using std::chrono::system_clock;
  typedef std::chrono::duration<int,std::ratio<60*60*24> > day;

  day week (7);

  system_clock::time_point today = system_clock::now();
  system_clock::time_point next_week = today + week;

  std::time_t tt;

  tt = system_clock::to_time_t ( today );
  std::cout << "today is: " << ctime(&tt);

  tt = system_clock::to_time_t ( next_week );
  std::cout << "After 1 week will be: " << ctime(&tt);

  return 0;
}
