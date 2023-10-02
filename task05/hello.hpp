#ifndef HELLO_HPP_
#define HELLO_HPP_

#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include "Language.hpp"

void hello(Language lang = Language::English);
void hello(const std::string &name, Language lang = Language::English);

#endif /* HELLO_HPP_*/