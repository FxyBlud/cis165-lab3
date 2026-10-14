# cis165-lab3
## Plan: diamond.cpp
- Output: Display all 7 cout to visualize the diamond made of asterisks.

## Plan: game_time.cpp
- Variables:
- MIN_PER_HOUR (const int) = 60
- level_1_min (int) = 78
- level_2_min (int) = 144

Calculations:
- level_1_hours (int) = level_1_min / MIN_PER_HOUR
- level_1_remainder (int) = level_1_min % MIN_PER_HOUR

- level_2_hours (int) = level_2_min / MIN_PER_HOUR
- level_2_remainder (int) = level_2_min % MIN_PER_HOUR

- min_difference (int) = level_2_min - level_1_min
- difference_hours (int) = min_difference / MIN_PER_HOUR
- difference_remainder (int) = min_difference % MIN_PER_HOUR

- Output:
- Display level_1_hours and level_1_remainder with appropriate context and metric. (hours, minutes)
- Display level_2_hours and level_2_remainder with appropriate context and metric. (hours, minutes)
- Display difference_hours and difference_remainder with appropriate context and metric. (hours, minutes)

  ## Testing
| Program and test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| diamond.cpp |  | Expected -  | Actual -  |  |
| game_time.cpp - given values |  | Expected -  | Actual -  |  |
| game_time.cpp — changed values |  | Expected -  | Actual -  |  |

## Explanations

## How to Compile and Run

    g++ -std=c++17 -Wall -Wextra diamond.cpp -o diamond
    ./diamond

    g++ -std=c++17 -Wall -Wextra game_time.cpp -o game_time
    ./game_time
