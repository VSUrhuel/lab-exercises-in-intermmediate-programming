#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
struct student
{
    string studentName;
    double score;
};
void readFromRecord(student studScoreRec[]);
double recAverage(student studScoreRec[], int s);
double recSTDev(student studScoreRec[], int s);
void writeResultToFile(double ave, double stDev);
int main()
{
    student studScoreRec[7];
    readFromRecord(studScoreRec);
    for(int i=0; i<7; i++)
    {
        cout<<studScoreRec[i].studentName<<'\t'<<studScoreRec[i].score;
    }
    cout<<endl<<recAverage(studScoreRec, 7);
    cout<<endl<<recSTDev(studScoreRec, 7);
    writeResultToFile(recAverage(studScoreRec, 7),recSTDev(studScoreRec, 7));
}
void readFromRecord(student studScoreRec[])
{
    ifstream inStudScoreRec;
    inStudScoreRec.open("StudentScore.txt");
    int i=0;
    while(!inStudScoreRec.eof())
    {
        getline(inStudScoreRec, studScoreRec[i].studentName, '\t');
        inStudScoreRec>>studScoreRec[i].score;
        i++;
    }
}
double recAverage(student studScoreRec[], int s)
{
    int sum=0;
    double average=0;
    for(int i=0; i<s; i++)
    {
        sum+=studScoreRec[i].score;
    }
    return average = static_cast<double>(sum)/s;
}
double recSTDev(student studScoreRec[], int s)
{
    double std=0, numerator = 0;
    double mean = recAverage(studScoreRec,s);
    for(int i=0; i<s; i++)
    {
        numerator+=pow((studScoreRec[i].score - mean),2);
    }
    return std = sqrt(numerator/(s-1));
}
void writeResultToFile(double ave, double stDev)
{
    ofstream outStudScoreRec("scoreDecsStat.txt");
    outStudScoreRec<<ave<<endl;
    outStudScoreRec<<stDev<<endl;
    outStudScoreRec.close();
}
