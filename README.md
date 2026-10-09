# Week 02 Class Project: Ohm's Law Calculator

## Purpose
Reads a voltage in volts and a resistance in ohms and prints the current using I = V / R.

## Input format
Two numbers separated by whitespace: voltage first, then resistance.
Example: `12 4`

## Build and run
    g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app
    ./build/app

## Run the tests
    bash test.sh

## Example output
    $ echo "12 4" | ./build/app
    Current: 3 A
    $ echo "12 0" | ./build/app
    Invalid input

## Limitations
- Resistance must be positive. Zero or negative resistance prints "Invalid input".
- Negative voltage is accepted.
- Extra input after the two numbers is ignored.
- Output uses default stream formatting, so long decimals are rounded to about 6 significant digits.

## Debugging reflection
(Write 2 to 4 sentences about a problem you hit, such as a diff mismatch or a warning, and how you fixed it.)