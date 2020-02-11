#include<iostream>
#include<cstdlib> 
#include<fstream>
#include<string>



using namespace std;

int main(){
	
	int option;
	
	string name;
	string rollnumber;
	string email;
	string rn;
	
	cout<< "if you want to add record, enter 1" <<endl;
	cout<< "if you want to read record, enter 2" <<endl;
	cout<< "if you want to delete record, enter 3" <<endl;
	
	cin>>option;
	
	if(option<1 || option>3){
		cout<<"Invalid input. Enter your choice again. " << endl;
		cin>>option;
	}
	
	
	if(option==1){
		cout << "add the record of the student" << endl;
		cout<<"Enter name" << endl;
		cin>>name; 
		cout<<"Enter rollnumber"<<endl;
		cin>>rollnumber;
		cout<<"Enter email address"<<endl;
		cin>>email;
		
		ofstream myfile;
		myfile.open("records.text")
		myfile<<name","rollnumber","email<<endl; 
		
	}
	else if(option==2){
		
		cout<<"enter the roll number of which you want to read the record"<<endl;
		cin>>rn;
		
		if(rn==rollnumber){
			if (myfile.is_open())
  {
    while ( getline (myfile,s) )
    {
       
    }
	myfile.close();
  }
			
		}
		
		cout<<"the information of the entered roll number is:"<< s<<endl;
		
		
	}
	else if(option==3){
		
		cout<<"enter the roll number of which you want to delete the record"<<endl;
		cin>>rn;
		
		
		
		if(rn==rollnumber){
			if (myfile.is_open())
  {
    while ( getline (myfile,s) )
    {
         
    }
	myfile.close();
  }
			
		}
		
		remove(s);
		cout<<"the information of the entered roll number has been deleted."<<endl;
		
	}
	
	
	
	return 0;
}