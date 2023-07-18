#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
struct student
{
    string name;
    double score;
};
void writeToFile(student studentRec[])
{
    ofstream outStudentRec("StudentRecords.txt");
    outStudentRec<<"Rhuel"<<'\t';
    outStudentRec<<97<<endl;
    outStudentRec<<"Swisha"<<'\t';
    outStudentRec<<95<<endl;
    outStudentRec<<"Claire"<<'\t';
    outStudentRec<<92<<endl;
    outStudentRec<<"Hannah"<<'\t';
    outStudentRec<<98<<endl;
    outStudentRec.close();
}
void readFile(student studentRec[])
{
    ifstream inStudentRec;
    inStudentRec.open("StudentRecords.txt");
    int i=0;
    while(!inStudentRec.eof() && i!=4)
    {
        getline(inStudentRec, studentRec[i].name, '\t');
        inStudentRec>>studentRec[i].score;
        i++;
    }
}
int minScore(student studentRec[], int s)
{
    int i=0;
    int minScore = studentRec[i].score;
    for(int i=0; i<s; i++)
    {
        if(minScore > studentRec[i].score)
        {
            minScore = studentRec[i].score;
        }
    }
    return minScore;
}
int main()
{
    student studentRec[4];
    writeToFile(studentRec);
    readFile(studentRec);
    int i=0;
    for(i; i<4; i++)
    {
        cout<<studentRec[i].name<<'\t'<<studentRec[i].score;
    }
    cout<<endl<<minScore(studentRec, 4);
    ofstream outStudentRec;
    outStudentRec.open("StudentRecords.txt", ios::app);
    outStudentRec<<"The minimum grade is "<<minScore(studentRec, 4)<<endl;
}
