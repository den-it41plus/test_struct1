#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct Student{
	int id;
	string name;
	string gender;
	float score1;
	float score2;
	float score3;
	float average;
	float total_score;
	string grade;
	
	void input(){
			
		cout<<"ID= ";cin>>id;
		cout<<"Name= ";cin>>name;
		cout<<"Gender= ";cin>>gender;
		cout<<"Score1= ";cin>>score1;
		cout<<"Score2= ";cin>>score2;
		cout<<"Score3= ";cin>>score3;
		
		total_score=score1+score2+score3;
		average=(total_score/3);
		if(average>=50){
			grade="Grade A";
		} else {
			grade="Fail";
		}
	}
	void output(){
		cout<<"ID= "<<id<<endl;
		cout<<"Name= "<<name<<endl;
		cout<<"Gender= "<<gender<<endl;
		cout<<"Score1= "<<score1<<endl;
		cout<<"Score2= "<<score2<<endl;
		cout<<"Score3= "<<score3<<endl;
		cout<<"Total_Score= "<<total_score<<endl;
		cout<<"Average Score= "<<average<<endl;
		cout<<"Grade= "<<grade<<endl;
	}
};

int main(){
	int i,n;
	cout<<"====Input Student Information====\n";
	cout<<"How many students do you want to input= ";cin>>n;
	Student newStudent[20];
	for(i=0;i<n;i++){
	cout<<"--------------------------------\n";
		newStudent[i].input();
	}
	
	for(i=0;i<n;i++){
		cout<<"--------------------------------\n";
		newStudent[i].output();
	}
	return 0;
}
