#ifndef HELLO_HPP_
#define HELLO_HPP_

#include <iostream>
#include <string>
#include "Language.hpp"

void hello(Language Language = Language::English);
void hello(const std::string &name, Language Language = Language::English);

#endif /* HELLO_HPP_*/