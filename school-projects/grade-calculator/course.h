#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

class Course{

    private:
        /** Private Members/Attributes **/
        string name;

    public:
        /**
        * Constructor
        */
        Course();

        /**Accessor and Mutators**/
        string GetName();
        void SetName(string n);


        /**
        * Calculate Students final grade
        *
        * @pre N/A
        * @post calculates average grade
        */
        void CalcFinalGrade();

};

#endif // COURSE_H_INCLUDED
