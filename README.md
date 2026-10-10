# Week 02 Mini Project: Temperature Conversion App

Converts a temperature between Celsius and Fahrenheit from the terminal.

## Setup

Requires Ubuntu (or WSL) with g++ (C++17), Git, and bash.

    sudo apt update
    sudo apt install build-essential git gdb
    git clone https://github.com/advaith-git/week02-mini-project.git
    cd week02-mini-project

## Input/output contract

Input is a direction followed by a temperature, separated by a space.
The direction is `CtoF` or `FtoC` and is case-sensitive.

| Situation | Output |
|---|---|
| Celsius to Fahrenheit | `0 C = 32 F` |
| Fahrenheit to Celsius | `32 F = 0 C` |
| Direction other than CtoF or FtoC | `Unsupported direction` |
| Temperature is not a number | `Invalid input` |

## Acceptance tests

| Test | Input | Expected output |
|---|---|---|
| 1 | `CtoF 0` | `0 C = 32 F` |
| 2 | `FtoC 32` | `32 F = 0 C` |
| 3 | `KtoC 100` | `Unsupported direction` |
| 4 (edge case) | `CtoF abc` | `Invalid input` |
| 5 (edge case) | `CtoF -40` | `-40 C = -40 F` |

## Build and test

Build and run manually:

    mkdir -p build
    g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app
    ./build/app

Run all acceptance tests:

    bash test.sh

GitHub Actions runs `test.sh` on every push and pull request.

## Limitations

- The direction is case-sensitive, so `ctof` is rejected.
- Temperatures below absolute zero are not rejected.
- Extra input after the temperature is ignored.
- Output shows about 6 significant digits.

## AI-use Disclosure

Claude Opus 5.5 was used to help break the project guide into clear steps, divide the work between team members, and understand what each Git command does, including branching, committing, pushing, and syncing with main. It also explained the GitHub workflow the team followed, such as opening pull requests, reviewing a teammate’s work before merging, and fixing mistakes like an untracked .gitignore file. The team reviewed every file, wrote the main function, ran all tests ourselves, and confirmed the results before submitting.