# cis165-lab3
CIS-165-B030

## Plan: diamond.cpp
- Output: Display all 7 cout on different lines to visualize the diamond made of asterisks. 
-     Lines 5 and 11: 3 spaces, 1 asterisks
-     Lines 6 and 10: 2 spaces, 3 asterisks
-     Lines 7 and 9: 1 spaces, 5 asterisks
-     Lines 8: 0 spaces, 7 asterisks

## Plan: game_time.cpp
- Variables:
    - MIN_PER_HOUR (const int) = 60
    - level_1_min (int) = 78
    - level_2_min (int) = 144
- Calculations:
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

| Line | Expected pattern | Actual output | Spaces and asterisks match? |
|---|---|---|---|
| 5 | `   *` | `   *`| Yes  |
| 6 | `  ***` | `  ***` | Yes |
| 7 | ` *****` | ` *****` | Yes |
| 8 | `*******` | `*******` | Yes |
| 9 | ` *****` | ` *****` | Yes |
| 10 | `  ***` | `  ***` | Yes |
| 11 | `   *` | `   *` | Yes |

### game_time.cpp
| Program and test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| game_time.cpp - given values | 78, 144 | Level 1: 1 hours and 18 minutes, Level 2: 2 hours and 24 minutes. | Level 1: 1 hours and 18 minutes, Level 2: 2 hours and 24 minutes. | Match |
| game_time.cpp - changed values | 89, 256 | Level 1: 1 hours and 29 minutes, Level 2: 4 and 16 minute. | Level 1: 1 hours and 29 minutes, Level 2: 4 and 16 minute. | Match |

## Explanations

### How the diamond is built and how I checked the spaces

- Lines 5 and 11: 3 spaces, 1 asterisks
- Lines 6 and 10: 2 spaces, 3 asterisks
- Lines 7 and 9: 1 spaces, 5 asterisks
- Lines 8: 0 spaces, 7 asterisks
- I used the middle cout as a starting point to correctly structure the diamond.

### How / and % convert minutes

- '/' is used to do the whole division, while '%' does the division, but only gives what cannot be divided into a whole number. With these two we can convert the minutes into hours as wholly as we can and then be able to calculate the remainding minutes seperately.

### Trace of the assigned values
[Go variable by variable: what each variable holds after its line runs, starting from 78 and 144 and ending with the difference.]

### Why I store results before cout
[In my own words: why I calculate first and print the variable instead of putting the formula inside cout.]

## How to Compile and Run

    g++ -std=c++17 -Wall -Wextra diamond.cpp -o diamond
    ./diamond

    g++ -std=c++17 -Wall -Wextra game_time.cpp -o game_time
    ./game_time

[Optional: one line saying you can also paste the code into OnlineGDB and press Run.]
