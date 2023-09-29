#include "hello.hpp"

void hello(Language Language)
{
    if (Language == Language::Spanish) {
        std::cout << "¡Hola extranjero!" << std::endl;
    } else if (Language == Language::French) {
        std::cout << "Bonjour inconnu!" << std::endl;
    } else if (Language == Language::English) {
        std::cout << "Hello Stranger!" << std::endl;
    } else {
        std::cerr << "Error : Language Unavailable" << std::endl;
    }
}

void hello(const std::string &name, Language Language)
{
    if (Language == Language::Spanish) {
        std::cout << "¡Hola " << name << "!" << std::endl;
    } else if (Language == Language::French) {
        std::cout << "Bonjour " << name << "!" << std::endl;
    } else if (Language == Language::English) {
        std::cout << "Hello " << name << "!" << std::endl;
    } else {
        std::cerr << "Error : Language Unavailable" << std::endl;
    }
}