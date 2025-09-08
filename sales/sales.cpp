#include <iostream>

int main()
{
    const double sales = 95000;
    const double stateTaxDecimal = 0.04;
    const double countyTaxDecimal = 0.02;

    std::cout << "sales: $" << sales << "\n" 
              << "state tax: $" << sales * stateTaxDecimal << "\n"
              << "county tax: $" << sales * countyTaxDecimal << "\n"
              << "total tax paid: $" << (sales * stateTaxDecimal) + (sales * countyTaxDecimal);
}