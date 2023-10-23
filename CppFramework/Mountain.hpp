//
//  Mountain.hpp
//  CppFramework
//
//  Created by 김인섭 on 10/21/23.
//

#pragma once

#include <CppFramework/IntrusiveRefCounted.hpp>
#include <swift/bridging>
#include <string>

class Mountain: public IntrusiveRefCounted<Mountain> {
public:
    Mountain(std::string name, double height);
    void displayInfo();
    void setHeight(double height);

private:
    int retainCount = 0;
    std::string name;
    double height;
} SWIFT_SHARED_REFERENCE(mountainRetain,mountainRelease);
