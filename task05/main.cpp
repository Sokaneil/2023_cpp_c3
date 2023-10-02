#include "hello.hpp"

int main(void)
{
    hello(Language::Spanish);
    // ¡Hola extranjero!

    hello("toto");
    // Hello toto!

    hello("toto", Language::French);
    // Bonjour toto !
    return 0;
}