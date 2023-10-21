//
//  Mountain.hpp
//  CppFramework
//
//  Created by 김인섭 on 10/21/23.
//

#ifndef Mountain_hpp
#define Mountain_hpp

#include <stdio.h>
#include <string>

class Mountain {
public:
    Mountain(std::string name, double height);
    void displayInfo();
    void setHeight(double height);

private:
    std::string name;
    double height;
};

#endif /* Mountain_hpp */
