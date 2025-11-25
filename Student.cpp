#include "Student.h"
#include <fstream>
#include <sstream>
#include <iomanip>

// Default constructor
Student::Student() 
    : first_name(""), last_name(""), gpa(0.0), 
      graduation_year(0), graduation_semester(""),
      enrolled_year(0), enrolled_semester(""),
      degree_level("Undergraduate") {
}

// Destructor
Student::~Student() {
    // No dynamic memory to delete in base class
}

// Getter functions
std::string Student::getFirstName() const {
    return first_name;
}

std::string Student::getLastName() const {
    return last_name;
}

double Student::getGPA() const {
    return gpa;
}

int Student::getGraduationYear() const {
    return graduation_year;
}

std::string Student::getGraduationSemester() const {
    return graduation_semester;
}

int Student::getEnrolledYear() const {
    return enrolled_year;
}

std::string Student::getEnrolledSemester() const {
    return enrolled_semester;
}

std::string Student::getDegreeLevel() const {
    return degree_level;
}

// Setter functions
void Student::setName(const std::string& first, const std::string& last) {
    first_name = first;
    last_name = last;
}

void Student::setGPA(double gpa) {
    this->gpa = gpa;
}

void Student::setGPA(const std::string& gpa_str) {
    gpa = std::stod(gpa_str);
}

void Student::setGraduationYear(int year) {
    graduation_year = year;
}

void Student::setGraduationSemester(const std::string& semester) {
    graduation_semester = semester;
}

void Student::setEnrolledYear(int year) {
    enrolled_year = year;
}

void Student::setEnrolledSemester(const std::string& semester) {
    enrolled_semester = semester;
}

void Student::setDegreeLevel(const std::string& level) {
    degree_level = level;
}

// Write student info to file
void Student::writeToFile(std::ofstream& outfile) const {
    outfile << "Name: " << first_name << " " << last_name << std::endl;
    outfile << "GPA: " << std::fixed << std::setprecision(2) << gpa << std::endl;
    outfile << "Degree Level: " << degree_level << std::endl;
    outfile << "Enrolled: " << enrolled_semester << " " << enrolled_year << std::endl;
    outfile << "Graduation: " << graduation_semester << " " << graduation_year << std::endl;
}

