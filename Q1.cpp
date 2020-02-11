#include<iostream>
#include<cstdlib> 
#include<fstream>
#include<string>

using namespace std;

int main(){
	
	char s;
	int count;
	
	ifstream myfile;
  myfile.open ("q1_a.txt");
   if (myfile.is_open())
  {
        while (myfile.get(s))
        {
	
	
		if (isdigit(s)){
		      count++;				
		}
		else{
		
		}
		
	

        }
	cout<<"The number of digits in the file are : " << count << endl;
	
	
    myfile.close();
  }

  else cout << "Unable to open file";
  
	return 0;
}

