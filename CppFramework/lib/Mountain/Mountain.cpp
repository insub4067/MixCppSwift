//
//  Mountain.cpp
//  CppFramework
//
//  Created by 김인섭 on 10/21/23.
//

#include <CppFramework/IntrusiveRefCounted.hpp>
#include <CppFramework/Mountain.hpp>
#include <iostream>

Mountain::Mountain(std::string name, double height): name(name), height(height) {}

Mountain* _Nonnull Mountain::create(std::string name, double height) {
    auto result = new Mountain(name, height);

    return result;
}

void Mountain::displayInfo() {
    std::cout << "Mountain Name: " << name << std::endl;
    std::cout << "Height: " << height << " meters" << std::endl;
}

void Mountain::setHeight(double height) {
    this->height = height;
}

void mountainRetain(Mountain* _Nonnull mountain) {
    mountain->retain();
}

void mountainRelease(Mountain* _Nonnull mountain) {
    mountain->release();
}
