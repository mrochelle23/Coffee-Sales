//
//  main.cpp
//  Coffee Sales
//
//  Created by Mikhai Rochelle on 5/19/24.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // COnstanrs
    const double PricePerPound = 12.99;
    const double Discount_5_to_9 = 0.05;
    const double Discount_10_to_19 = 0.10;
    const double Discount_20_to_29 = 0.15;
    const double Discount_30_or_more = 0.20;
    
    // Variables
    int pounds;
    double TotalCost, DiscountRate, DiscountedPrice;
    
    // Input
    cout << "Enter the number of pounds of coffee purchased: ";
    cin >> pounds;
    
    // Input Invalidation
    if (pounds < 0) {
        cout << "Invalid input. Enter a valid quantity of pounds." << endl;
        return 1;
    }
    
    // Calculate total cosr without discount
    TotalCost = pounds * PricePerPound;
    
    // Determine discount based on quantity purchased
    if (pounds >= 5 && pounds <= 9) {
        DiscountRate = Discount_5_to_9;
    } else if (pounds >= 10 && pounds <= 19) {
        DiscountRate = Discount_10_to_19;
    } else if (pounds >= 20 && pounds <= 29) {
        DiscountRate = Discount_20_to_29;
    } else if (pounds >= 30) {
        DiscountRate = Discount_30_or_more;
    } else {
        DiscountRate = 0.0;
    }
    
    // Calculate discounted price
    DiscountedPrice = TotalCost * (1 - DiscountRate);
    
    // Output
    cout << fixed << setprecision(2);
    cout << "Total cost before discount: $" << TotalCost << endl;
    cout << "Discount applied: " << (DiscountRate * 100) << "%" << endl;
    cout << "Total cost after discount: $" << DiscountedPrice << endl;
    
    return 0;
}
