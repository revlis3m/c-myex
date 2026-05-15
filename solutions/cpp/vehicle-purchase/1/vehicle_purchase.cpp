#include "vehicle_purchase.h"

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    return kind == "car" || kind == "truck";
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    if (option1 <= option2 ) return option1 + " is clearly the better choice.";
    else return option2  + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    int percent3YearLess { 20 };
    int percent10YearLess { 30 };
    int percent10YearOlder { 50 };
    double priceFinal { 0 };

    if (age < 3.0)
    {
        priceFinal = original_price - (original_price * percent3YearLess / 100);
    }
    else if (age < 10.0)
    {
        priceFinal = original_price - (original_price * percent10YearLess / 100);
    }
    else
    {
        priceFinal = original_price - (original_price * percent10YearOlder / 100);
    }    

    return priceFinal;
}

}  // namespace vehicle_purchase
