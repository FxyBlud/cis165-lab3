# cis165-lab3
CIS-165-B030

## Plan: diamond.cpp
- Output: Display all 7 cout lines on separate lines to form a diamond made of asterisks.
  - Lines 5 and 11: 3 spaces, 1 asterisk
  - Lines 6 and 10: 2 spaces, 3 asterisks
  - Lines 7 and 9: 1 space, 5 asterisks
  - Line 8: 0 spaces, 7 asterisks

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
  - Display level_1_hours and level_1_remainder with context and units (hours, minutes).
  - Display level_2_hours and level_2_remainder with context and units (hours, minutes).
  - Display difference_hours and difference_remainder with context and units (hours, minutes).

## Testing

### diamond.cpp

| Line | Expected pattern | Actual output | Spaces and asterisks match? |
|---|---|---|---|
| 5 | `   *` | `   *` | Yes |
| 6 | `  ***` | `  ***` | Yes |
| 7 | ` *****` | ` *****` | Yes |
| 8 | `*******` | `*******` | Yes |
| 9 | ` *****` | ` *****` | Yes |
| 10 | `  ***` | `  ***` | Yes |
| 11 | `   *` | `   *` | Yes |

### game_time.cpp

| Test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Given values | 78, 144 | Level 1: 1 hours and 18 minutes. Level 2: 2 hours and 24 minutes. Difference: 1 hours and 6 minutes. | Level 1: 1 hours and 18 minutes. Level 2: 2 hours and 24 minutes. Difference: 1 hours and 6 minutes. | Match |
| Changed values | 89, 256 | Level 1: 1 hours and 29 minutes. Level 2: 4 hours and 16 minutes. Difference: 2 hours and 47 minutes. | Level 1: 1 hours and 29 minutes. Level 2: 4 hours and 16 minutes. Difference: 2 hours and 47 minutes. | Match |

After testing the changed values, I set them back to 78 and 144.

## Explanations

### How the diamond is built and how I checked the spaces

- Lines 5 and 11: 3 spaces, 1 asterisk
- Lines 6 and 10: 2 spaces, 3 asterisks
- Lines 7 and 9: 1 space, 5 asterisks
- Line 8: 0 spaces, 7 asterisks
- I used the middle line (line 8) as my starting point to structure the diamond correctly.

### How / and % convert minutes

`/` does whole-number division, so it gives how many full hours fit into the minutes. `%` gives only the remainder, the minutes left over that don't make a full hour. Together they convert the minutes into as many whole hours as possible, then give the remaining minutes separately. For example, 78 / 60 = 1 hour and 78 % 60 = 18 minutes.

### Trace of the assigned values

- MIN_PER_HOUR = 60
- level_1_min = 78
- level_2_min = 144
- level_1_hours = 78 / 60 = 1
- level_1_remainder = 78 % 60 = 18
- level_2_hours = 144 / 60 = 2
- level_2_remainder = 144 % 60 = 24
- min_difference = 144 - 78 = 66
- difference_hours = 66 / 60 = 1
- difference_remainder = 66 % 60 = 6

### Why I store results before cout

I calculated each result first and then printed the variable, instead of putting the formula inside cout. This makes the code easier to understand, because the variable's name says what the number means. If the formula were inside cout, the result would be printed once and lost, so reusing it later would mean copying the formula again or turning it into a variable anyway. Storing results also lets me trace each value and check that every calculation is correct.

## How to Compile and Run

```
g++ -std=c++17 -Wall -Wextra diamond.cpp -o diamond
./diamond

g++ -std=c++17 -Wall -Wextra game_time.cpp -o game_time
./game_time
```

You can also paste the code into OnlineGDB and press Run.
