# Coffee Sales

## Overview

The Coffee Sales program calculates the total cost of coffee purchased based on the weight in pounds. It applies discounts based on the quantity purchased and displays the total cost before and after the discount.

## Features

- Calculates the total cost based on the number of pounds purchased.
- Applies discounts based on the quantity of coffee purchased.
- Displays a summary of the total cost, discount rate, and final price.

## Technologies Used

- C++

## File Structure

```
coffee-sales/
│
├── main.cpp                      # Main C++ source file containing the program logic
```

## Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/mrochelle23/Coffee-Sales.git
   ```
2. Navigate to the project directory:
   ```bash
   cd coffee-sales
   ```
3. Compile the program using a C++ compiler (e.g., g++):
   ```bash
   g++ main.cpp -o Coffee-Sales
   ```

4. Run the executable:
   ```bash
   ./Coffee-Sales
   ```

## Usage

- The program prompts the user to enter the number of pounds of coffee purchased.
- It calculates the total cost before applying any discounts based on the quantity.
- The program outputs the total cost, the discount applied, and the final cost after the discount.

## Example Output

```
Enter the number of pounds of coffee purchased: 10
Total cost before discount: $129.90
Discount applied: 10.00%
Total cost after discount: $116.91
```

## Code Explanation

- **Constants**: The program defines constants for the price per pound and various discount rates based on the quantity purchased.
- **Input Validation**: It checks for valid input, ensuring the number of pounds is non-negative.
- **Cost Calculation**: The program calculates the total cost without discount, determines the applicable discount rate, and computes the discounted price.
- **Output Formatting**: The output is formatted to display monetary values with two decimal places.

## STRETCH CHALLENGES

- Allow users to input the price per pound to make the program more flexible.
- Implement functionality to handle multiple purchases and aggregate totals.
- Add error handling for non-integer inputs for pounds.

