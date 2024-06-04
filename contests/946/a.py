import math

# Function to calculate the minimum number of screens needed
def min_screens(x, y):
    # Calculate the total number of cells needed for 1x1 icons
    total_cells_1x1 = x

    # Calculate the total number of cells needed for 2x2 icons
    total_cells_2x2 = y * 4

    # Calculate the total number of screens needed
    total_cells = total_cells_1x1 + total_cells_2x2

    # Each screen can accommodate 15 cells (5x3 grid)
    screens_needed = math.ceil(total_cells / 15)

    return screens_needed

# Number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input for each test case
    x, y = map(int, input().split())

    # Calculate the number of screens needed for 1x1 icons
    screens_needed_1x1 = min_screens(x, y)

    # Calculate the number of remaining 2x2 icons after placing them on screens with 1x1 icons
    remaining_2x2 = max(0, y - x // 2)

    # Calculate the number of screens needed for remaining 2x2 icons
    screens_needed_2x2 = math.ceil(remaining_2x2 / 3)

    # Output the result for each test case
    print(screens_needed_1x1 + screens_needed_2x2)

