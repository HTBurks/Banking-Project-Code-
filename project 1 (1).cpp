#include<iostream>
#include <string>
using namespace std;
class Person{
      public:
             Person(string n, int a);
             string getName() const;
             int getAge() const;
             
             virtual void print()const = 0;
      private:
             string name;
             int age;   
      };
      
Person::Person(string n, int a)
{
     name = n;
     age = a;
	 }
string Person::getName() const{ return name;}
int Person::getAge() const{return age;}

///////////////////////////////////////////////////////
class Student: public Person{
      public:
          Student(string theName, int theAge, double g, int stID);   
          
          double getGpa() const ;
		  int getStudentID() const; 
          void print()const{cout <<"Name: "<<getName()<<" Age: "<<getAge()<<" GPA: "<<getGpa()<<" ID: "<<getStudentID()<<endl;};
      private:
        double gpa;
        int StudentID;
};
              
Student::Student(string theName, int theAge, double g, int stID):Person(theName, theAge)
{
  gpa = g;
  StudentID = stID;
}


double Student::getGpa() const
{
	return gpa;
}

int Student::getStudentID() const
{
	return StudentID;
}

//////////////////////

class Faculty : public Person
{
	public:
		Faculty(string fname,int fage, int staffID, bool isTeacher);
	//	~Faculty();
		int getID() const;
		
		bool getTeacher() const;//re you a teacher or not
		void print()const{cout <<"Name: "<<getName()<<" Age: "<<getAge()<<" ID: "<<getID()<<" is a teacher:"<<getTeacher()<<endl;};
	protected:
		int ID;
		bool teacher;
	
	
		
};

Faculty::Faculty(string fname, int fage, int staffID, bool isTeacher):Person(fname, fage)
{
	ID = staffID;
	teacher = isTeacher;
}



int Faculty::getID() const
{
	return ID;
}

bool Faculty::getTeacher()const
{
	//cout<<"Teacher: "<<teacher<<endl;
	
	if (teacher == 1)
	{
	 return true;
	}
	else 
	return false;
	
	
	
}





/////////////////////////////
int main()
{
	
			
	Student st1("HT",20,3.50, 112344);
//	st1.gender("Male");
	st1.print();
	cout<<"\n";
	Faculty f1("James", 32,2155999, true );
	f1.print();
	cout<<"\n";
	Faculty f2("CHicken",1000,2255662,false);
	f2.print();

	cout<<"\n";
	 Person* st2;//st2 = Student 2
    
    st2 = &st1;
    
    st2->print();
    
    (*st2).print();
    	
    Person* st3[3];//st3 = Stundent 3
    cout<<"\n";
    Student superHero1("Batman", 35, 4.0,2555);
    Student superHero2 ("Wonder Woman", 100, 3.5,668822);
    Student superHero3 ("Aqua Man", 5000, 1.0,55658);
    
    
    st3[0] = &superHero1;
    st3[1] = &superHero2;
    st3[2] = &superHero3;
    int i;
    for (i = 0; i < 3; i++)
        st3[i] -> print();
	
	cout<<"\n";
	Person* f3[2];
	Faculty admin1("Prf .jones",55,3212,true );
	Faculty admin2("Mr.Sam",21,4545,false);
	
	f3[0] = &admin1;
	f3[1] = &admin2;
	for (i = 0; i < 2; i++)
        f3[i] -> print();
	
	
	

	return 0;



}


