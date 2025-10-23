//
// Created by henry on 23/10/2025.
//

#include "Climb.h"

#include <memory>

using namespace std;

Climb::Climb(string& name,string& grade,bool& complete) {
    this->name =name;
    this->grade = grade;
    this->complete = complete;
}

string Climb::getGrade() {
    return this->grade;
}

string Climb::getName() {
    return this->name;
}

bool Climb::completed() const {
    return this->complete;
}

void Climb::editComplete(bool& newComplete) {
    this->complete = newComplete;
}

Climb::~Climb() = default;


