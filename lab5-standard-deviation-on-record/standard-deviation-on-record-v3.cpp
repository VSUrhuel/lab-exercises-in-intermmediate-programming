#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
struct Student
{
    string studentName;
    double scores;
};
vector<Student> readFromRecord();
double recAverage(vector<Student> students);
double rectSTDev(vector<Student> students);
void writeResultToFile(double ave, double stDev);
int main()
{
    vector<Student> students = readFromRecord();
    double average = recAverage(students);
    double STDV = rectSTDev(students);
    cout<<"Average: "<<average<<endl;
    cout<<"Standard Dev: "<<STDV<<endl;
    writeResultToFile(average, STDV);
}
vector<Student> readFromRecord()
{
    ifstream record;
    record.open("StudentRecords.txt");
    Student s;
    vector<Student> students;
    if(record.is_open())
    {
        while(!record.eof())
        {
            getline(record, s.studentName, '\t');
            record>>s.scores;
            students.push_back(s);
        }
    }
    else
    {
        cout<<"File Not Found";
    }
    record.close();
    return students;
}
double recAverage(vector<Student> students)
{
    double sum = 0;
    for(int i=0; i<students.size(); i++)
    {
        sum += students.at(i).scores;
    }
    return static_cast<double>(sum)/static_cast<double>(students.size());
}
double rectSTDev(vector<Student> students)
{
    double average = recAverage(students), sum = 0;
    for(int i=0; i<students.size(); i++)
    {
        sum += pow((students.at(i).scores - average),2);
    }
    return sqrt(sum/(students.size()-1));
}
void writeResultToFile(double ave, double stDev)
{
    ofstream outStudentsFile("StudentFile.txt");
    outStudentsFile<<"Average: "<<ave<<endl;
    outStudentsFile<<"Standard Deviation: "<<stDev<<endl;
    outStudentsFile.close();
}
