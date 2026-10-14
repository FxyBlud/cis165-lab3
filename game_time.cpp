#include <iostream>
using namespace std;
int main()
{
    const int MIN_PER_HOUR = 60;
    
    int level_1_min = 78;
    int level_2_min = 144;
    
    int level_1_hours = level_1_min / MIN_PER_HOUR;
    int level_1_remainder = level_1_min % MIN_PER_HOUR; 
    
    int level_2_hours = level_2_min / MIN_PER_HOUR;
    int level_2_remainder = level_2_min % MIN_PER_HOUR;
    
    int min_difference = level_2_min - level_1_min;
    int difference_hours = min_difference / MIN_PER_HOUR;
    int difference_remainder = min_difference % MIN_PER_HOUR;
    
    cout << "Level 1: " << level_1_hours
    <<  " hours and " << level_1_remainder << " minutes." << endl;
    cout << "Level 2: " << level_2_hours
    <<  " hours and " << level_2_remainder << " minutes." << endl;
    cout << "The time difference between level 1 and level 2 is "
    << difference_hours << " hours and " << difference_remainder << " minutes." << endl;
    
    return 0;
}