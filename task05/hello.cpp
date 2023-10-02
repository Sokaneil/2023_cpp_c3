#include "hello.hpp"

static void printHello(const std::string &name)
{
    std::cout << "Hello " << name << "!" << std::endl;
}

static void printHola(const std::string &name)
{
    std::cout << "¡Hola " << name << "!" << std::endl;
}

static void printBonjour(const std::string &name)
{
    std::cout << "Bonjour " << name << "!" << std::endl;
}

static void unknownHello()
{
    std::cout << "Hello Stranger!" << std::endl;
}

static void unknownHola()
{
    std::cout << "¡Hola extranjero!" << std::endl;
}

static void unknownBonjour()
{
    std::cout << "Bonjour inconnu!" << std::endl;
}

void hello(Language lang)
{
    std::unordered_map<Language, std::function<void()>> unknownMap{
        {Language::English, unknownHello},
        {Language::Spanish, unknownHola},
        {Language::French, unknownBonjour}};
    unknownMap[lang]();
}

void hello(const std::string &name, Language lang)
{
    std::unordered_map<Language, std::function<void(const std::string &)>> Map{
        {Language::English, printHello},
        {Language::Spanish, printHola},
        {Language::French, printBonjour}};
    Map[lang](name);
}
