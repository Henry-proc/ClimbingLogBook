//
// Created by henry on 23/10/2025.
//

#ifndef CLIMBINGLOGBOOK_CLIMB_H
#define CLIMBINGLOGBOOK_CLIMB_H
#include <string>

using namespace std;
    class Climb {
    private:
        string name,grade;
        bool complete;
    public:
        Climb(string name = "n/a",string grade = "n/a",bool complete = false);
        string getName();

        Climb(string &name, string &grade, bool &complete);

        string getGrade();
        bool completed() const;

        void editComplete(bool& newComplete);

        ~Climb();
    };

#endif //CLIMBINGLOGBOOK_CLIMB_H