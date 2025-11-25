#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include "Student.h"
#include <string>

class Physics_Student : public Student {
private:
    std::string concentration; // "Biophysics" or "Earth and Planetary Sciences"

public:
    // Default constructor
    Physics_Student();
    
    // Destructor
    virtual ~Physics_Student();
    
    // Getter and Setter for concentration
    std::string getConcentration() const;
    void setConcentration(const std::string& conc);
    
    // Override writeToFile to include concentration
    virtual void writeToFile(std::ofstream& outfile) const override;
};

#endif // PHYSICS_STUDENT_H

