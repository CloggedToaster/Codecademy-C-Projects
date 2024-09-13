//Piggy Bank Project
#include <iostream>

int main(){

    float colombian_pesos, brazilian_reais, preuvian_soles, us_dollars;
    
    //Conversation rates accurate as of 9/13/2024 1:00 AM UTC
    float COP_to_USD = 0.00024;
    float BRL_to_USD = 0.18;
    float PEN_to_USD = 0.27;

    std::cout << "Enter number of Colombian Pesos:" << "\n";
    std::cin >> colombian_pesos;
    std::cout << "Enter number of Brazilian Reais:"  << "\n";
    std::cin >> brazilian_reais;
    std::cout << "Enter number of Peruvian Soles:"  << "\n";
    std::cin >> preuvian_soles;
    
    us_dollars = (colombian_pesos * COP_to_USD) + (brazilian_reais * BRL_to_USD) + (preuvian_soles * PEN_to_USD);
    
    std::cout << "US Dollars = $" << us_dollars << "\n";

    return 0;
}