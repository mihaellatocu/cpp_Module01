#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’tput enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
    std::cout<< "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[4])(void); //array of pointeri la functiile membre, 

    functions[0] = &Harl::debug; // fara paranteze e adresa
    functions[1] = &Harl::info;    // cu paranteze apelez functia
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;

    std::string messages[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (messages[i] == level)
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cerr<< "Invalid level: " <<level<< std::endl;
}
