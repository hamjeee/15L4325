#include<iostream>
#include<cstdlib> 
#include<fstream>
#include<string>



using namespace std;

int main()
{
	

		string s;
	    char temp;
	ifstream myfile;
  
  
  
  myfile.open("q3_a.txt")
  

   if (myfile.is_open())
 {
    while(myfile.eof()){
    while ( getline (myfile,s) )
   {
         
    
	
	for (int i=0; i < s.length(  )/2; i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
			   
		                                                }
		   else{
			        swap(s[i],s[s.length()-i-1]);               
			   
			   
		       }
		
                                
	                                   }
//
ofstream file;
file.open("output.txt");
if(file.is_open())
  {

    file<<s;
  }
file.close();
   }

	
    myfile.close();}
 }

  else cout << "Unable to open file";
	
	
  
	return 0;
}
