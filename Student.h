#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>

class Student {
protected:
    std::string first_name;
    std::string last_name;
    double gpa;
    int graduation_year;
    std::string graduation_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string degree_level; // "Undergraduate" or "Graduate"

public:
    // Default constructor
    Student();
    
    // Virtual destructor
    virtual ~Student();
    
    // Getter functions
    std::string getFirstName() const;
    std::string getLastName() const;
    double getGPA() const;
    int getGraduationYear() const;
    std::string getGraduationSemester() const;
    int getEnrolledYear() const;
    std::string getEnrolledSemester() const;
    std::string getDegreeLevel() const;
    
    // Setter functions
    void setName(const std::string& first, const std::string& last);
    void setGPA(double gpa);
    void setGPA(const std::string& gpa_str);
    void setGraduationYear(int year);
    void setGraduationSemester(const std::string& semester);
    void setEnrolledYear(int year);
    void setEnrolledSemester(const std::string& semester);
    void setDegreeLevel(const std::string& level);
    
    // Virtual function for writing student info (can be overridden in derived classes)
    virtual void writeToFile(std::ofstream& outfile) const;
};

#endif // STUDENT_H

