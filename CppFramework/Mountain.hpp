//
//  Mountain.hpp
//  CppFramework
//
//  Created by 김인섭 on 10/21/23.
//

#pragma once

#include <string>
#include <swift/bridging>
#include "Files/CppClass.hpp"

class Mountain {
public:
    Mountain(std::string name, double height);
    void displayInfo();
    void setHeight(double height);

private:
    std::string name;
    double height;
};
