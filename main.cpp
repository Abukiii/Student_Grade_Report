#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string.h>
#include<cstring>
#include<windows.h>

using namespace std;

string Grade(float ); // - - - - - - - - - - - - - - - - - - - - - - - - This function used used to change the received grade number value to Remark
void Search_Student(); // - - - - - - - - - - - - - - - - - - - - - - - - This function used used to search student profile from data base and display it.
void display_all();  // - - - - - - - - - - - - - - - - - - - - - - - - This function ids used to Display all students Profile.
void Ask_Question(); // - - - - - - - - - - - - - - - - - - - - - - - - This function ids used to get a question from student and write it to a comment file
void View_Questions(); // - - - - - - - - - - - - - - - - - - - - - - - -This function is used to see the questions asked by the students for the teacher.
void Registor(); // - - - - - - - - - - - - - - - - - - - - - - - - This function used used to register students to the database.
void Change_password(); // - - - - - - - - - - - - - - - - - - - - - - - - This function ids used to change log in password of the teacher
void Answer_Question(); // - - - - - - - - - - - - - - - - - - - - - - - - This function ids used by the teacher to give an answer for the questions asked from the students
void edit_Profile(); // - - - - - - - - - - - - - - - - - - - - - - - - This function ids used to edit a student profile that is already registered in the database.
void delete_Profile(); // - - - - - - - - - - - - - - - - - - - - - - - - This function ids used to delete student profile from DATABASE.
float GPA(char); // - - - - - - - - - - - - - - - - - - - - - - - - This function ids used to read the result remark of the student from the file and give it a value to calculate GRADE



struct stud_profile
{
 string ID;//ID number of student
 string F_Name;//Name of student
 string L_Name;//Name of student
 string Department;//Name of student
 string Section;//Experiance of the person
 string Year;//Pay of the Teacher
 float Maths;//Maths result
 float Electronics;//Electronics result
 float Physics;//Physics result
 float Thermodynamics;//Thermodynamics result
 float Programming;//Programming result
 float Workshop;//Workshop result
 float Lab;//Lab result
}stud[50];//Input Variable of student profile


int main()
{

        int catagory,Stchoice,Tchoice;
        int update; // category variable for update choice
        int View; // category variable for profile view choice
        Sleep(200);
        system("color 3");
        ifstream Wellcome("Wellcome.dat",ios::out|ios::app);
        string Wellcome_;

        if(!Wellcome.is_open())
         {
            cout << " The file does't exist"<< endl;
          }
         while(getline(Wellcome,Wellcome_)) //While function to copy the data in welcome file
         {
          cout<<Wellcome_<<endl;
         }
          Wellcome.close();
         Sleep(4000);
         system("cls");
        system("color 2");

    bool first=true;
    while(first)
    {

        cout<<"\n\n\t\tSelect Your Category Please\n";
        cout<<"\t\t\t1.Student\n\t\t\t2.Teacher\n\t\t\t3.About\n"<<endl;cout<<"\t\t";
        cin>>catagory;

     switch(catagory)
    {

        case 1://Student Category
            {
               system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLogging in"; Sleep(500);cout<<". ";Sleep(500);cout<<". ";Sleep(400);cout<<". ";Sleep(800);cout<<". ";
             system("cls");

                     system("color A");
                     system("cls");
                     cout<<"\n\n\n\t\tHello Student!";Sleep(1200);cout<<" Welcome Back";Sleep(1200);

                     bool flag = true;
                     while(flag)
                        {

                                    system("cls");
                                    system("color 3");
                                    system("cls");

                                    cout<<" \n\n\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    cout<<"\tEnter what you want to do"<<endl;
                                    cout<<"\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;Sleep(1300);
                                    cout << "\t\t1.View Result" << endl;
                                    cout << "\t\t2.Ask A question " << endl;
                                    cout << "\t\t3.View question asked before " << endl;
                                    cout << "\t\t4.Exit " << endl;
                                    cout<<" \t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<<endl<<"\t\t";
                                    cin>>Stchoice;

                                    switch(Stchoice)
                                    {
                                        case 1:
                                            system("color 5");
                                             Search_Student();
                                             break;
                                        case 2:
                                            Ask_Question();
                                            break;
                                        case 3:
                                            View_Questions();
                                            break;
                                        case 4:
                                            exit(1);
                                        default:
                                            cout<<"Wrong input"<<endl;

                                    }
                        char f;
                        cout<<"\t\tIf you want to continue to use press 'Y' or press any key to exit"<<endl;
                        cin>>f;
                            if(f!='y')
                        {
                            flag=false;
                        }

                        }//while
                } //case 1
                break;
            case 2: //teachers category
                {
                     bool flag=true;
                     while(flag)
                        {
                            system("color 6");
                            system("cls");
                    string pass;//Declaring Variable for login password for the teacher
                    cout<<"\n\n\n\n\n\t\tEnter Your Password Please"<<endl;cout<<"\t\t";
                    cin>>pass;

                        ifstream INfile("Password.dat");
                        string correct_pass;  // password = password123
                        INfile>>correct_pass;

                        if(pass==correct_pass)

                                {
                                    system("cls");
                                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLogging in"; Sleep(500);cout<<". ";Sleep(500);cout<<". ";Sleep(400);cout<<". ";Sleep(800);cout<<". ";
                                        system("cls");
                                    system("color A");
                                    system("cls");
                                    cout<<"\n\n\n\t\tHello Teacher!";Sleep(1200);cout<<" Welcome Back";Sleep(1200);
                                    system("cls");
                                    bool flag=true;
                                    while(flag)
                                    {
                                        system("cls");

                                    cout<<" \n\n\n\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    cout<<"\tEnter what you want to do"<<endl;
                                    cout<<"\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;Sleep(1300);
                                    cout << "\t1.Register A student" << endl;
                                    cout << "\t2.Update Student Profile" << endl;
                                    cout << "\t3.View Students Profile"<< endl;
                                    cout << "\t4.View Students question" << endl;
                                    cout << "\t5.Give an answer for students question" << endl;
                                    cout << "\t6.Change Login Password" << endl;
                                    cout << "\t7.Exit"<<endl;
                                    cout<<" \t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;cout<<"\t\t";

                                    cin>>Tchoice;

                                     switch(Tchoice)
                                      {
                                         case 1://Register A Student
                                              system("color 6");
                                                Registor();
                                                break;
                                         case 2: //update student profile
                                             cout << "\t\t1.Edit student profile" << endl;
                                             cout << "\t\t2.Delete Student Profile" << endl;
                                             cin>>update;
                                             switch(update)
                                             {
                                             case 1:
                                                edit_Profile();
                                                break;
                                             case 2:
                                               delete_Profile();
                                                break;
                                             }

                                            break;

                                         case 3:
                                             cout << "\t\t1.Single student profile" << endl;
                                             cout << "\t\t2.All Student Profile" << endl;
                                             cin>>View;
                                             switch(View)
                                             {
                                             case 1: //This case calls the display_all function to display the single student profile
                                                Search_Student();
                                                break;
                                             case 2: // This case calls the display_all function to display the profile of all students
                                               display_all();
                                                break;
                                             }

                                            break;
                                         case 4:
                                            View_Questions();
                                            break;
                                         case 5:
                                            Answer_Question();
                                            break;
                                         case 6:

                                            Change_password();
                                           break;
                                         case 7:
                                             exit(1);
                                           break;
                                         default:
                                            cout<<"Wrong input"<<endl;
                                      }
                                      char f;
                                      cout<<"\n\n\t\tIf you want to return to the top press 'y' . . ."<<endl;cout<<"\t\t";
                                      cin>> f;
                                      if (f!='y')
                                      {

                                       flag=false;
                                      }
                                    }
                                }//if -correct password
                        else
                            {
                                system("color 40");
                                cout<<"\t\tAccess Denied"<<endl;
                                int result;
                    result = MessageBox(NULL,"Incorrect password! Try Again \n Note:- It's Case Sensitive\nDo you want to try again","WARNING", MB_YESNO | MB_ICONERROR | MB_SYSTEMMODAL);


                                if(result == IDNO)
                                {
                                 flag=false;
                                }

                            }

                        }
                }// case 2 teachers choice
                   case 3: //about
                       {
                           system("cls");
                           ifstream About("About.dat",ios::out|ios::app);
                           string About_;
                           if(!About.is_open())
                            {
                                cout << " The file does't exist"<< endl;
                            }
                           while(getline(About,About_)) //While function to copy the data in About file
                            {
                                cout<<About_<<endl;
                            }

                                  About.close();
                        }
                        break;

                 default:
                   cout<<"Wrong input"<<endl;
    }//switch

    char f;
     cout<<"\n\n\n\t\tIf you want to return to the MAIN MENU press 'r' or press any key to exit"<<endl;
     cin>>f;
   if(f!='r')
    {
      first=false;
    }
    system("cls");
    }
    return 0;
}




//*****************************************************************************
//               Functions
//******************************************************************************


void Registor()
//This function is used to registor and record students data by the teacher
{

ofstream outfile("Database.dat",ios::out|ios::app);
int num;
system("color 6");

if(outfile.is_open())
 {
    cout<<" \t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
    cout << "\t\tEnter how many student you want to register" << endl<<"\t\t";
    cin>>num;
    system("cls");
    for(int i=0; i<num; i++)
         {

              cout<<"\t\t - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
              cout<<"\t\tEnter the "<<i+1<<" Student Profile"<<endl;
              cout<<"\t\t========================================="<<endl;
              cout<<"\t\tStudent ID: ";
              cin>>stud[i].ID;
              cout<<"\t\tFirst Name of student : ";
              cin>>stud[i].F_Name;
              cout<<"\t\tLast Name of student : ";
              cin>>stud[i].L_Name;
              cout<<"\t\tDepartment : ";
              cin>>stud[i].Department;
              cout<<"\t\tSection of the student : ";
              cin>>stud[i].Section;
              cout<<"\t\tYear of admission: ";
              cin>>stud[i].Year;
              cout<<"\t\t\tResults: "<<endl;
              cout<<"\t\t========================="<<endl;
              cout<<"\t\tMaths : ";
              cin>>stud[i].Maths;
              cout<<"\t\tElectronics : ";
              cin>>stud[i].Electronics;
              cout<<"\t\tPhysics : ";
              cin>>stud[i].Physics;
              cout<<"\t\tThermodynamics : ";
              cin>>stud[i].Thermodynamics;
              cout<<"\t\tProgramming : ";
              cin>>stud[i].Programming;
              cout<<"\t\tWorkshop: ";
              cin>>stud[i].Workshop;
              cout<<"\t\tLab : ";
              cin>>stud[i].Lab;


              outfile<<endl<<stud[i].ID<<endl<<stud[i].F_Name<<endl<<stud[i].L_Name<<endl
               <<stud[i].Department<<endl<<stud[i].Section<<endl
               <<stud[i].Year<<endl<<Grade(stud[i].Maths)<<endl<<Grade(stud[i].Electronics)<<endl<<Grade(stud[i].Physics)<<endl
               <<Grade(stud[i].Thermodynamics)<<endl<<Grade(stud[i].Programming)<<endl
               <<Grade(stud[i].Workshop)<<endl<<Grade(stud[i].Lab);

                system("cls");
        }//for loop
MessageBox(NULL,"Successfully Registered ","Registration", MB_OK | MB_ICONINFORMATION | MB_SYSTEMMODAL);

 }//if

}



string Grade(float mark)

   /* This function is used to convert marks that are given by the user and convert it to the Grading system and give an output of grade
    */
{
        char a,b,c,d,e,f,k;
      if((mark>=81) && (mark<=100))
       {
           k='a';

       }
       else if((mark>=70) && (mark<81))
       {
           k='b';
       }
       else if((mark>=60) && (mark<70))
       {
           k='c';
       }
       else if((mark>=48) && (mark<60))
       {
           k='d';
       }
       else if((mark>=40) && (mark<48))
       {
           k='e';
       }
       else if(mark<40)
       {
           k='f';
       }


    switch(k)
     {
        case 'a': return("A");
                    break;
        case 'b': return("B");
                    break;
        case 'c': return("C");
                    break;
        case 'd': return("D");
                    break;
        case 'f': return("F");
                    break;

        default : return("0");
    }

}


void Change_password()
 //This function is used to change a login Password for the teacher
{

string oldpassword;
 cout<<"\t\tEnter your old passsword"<<endl<<"\t\t";
 cin>>oldpassword;

 ifstream Password("Password.dat");
string correct_pass;
Password>>correct_pass;


 if(oldpassword==correct_pass)
 {
ofstream Password("Password.dat");

cout<<"\t\tPlease enter your new password"<<endl<<"\t\t";
char new_password[20];
cin>>new_password;
Password<<new_password<<endl;

 }
}




void Ask_Question()
    /*This function is used to place a comment or
    a question for the teacher by the students*/
{
    string Comment,ID,commen;
    fstream commentfile("comment.dat",ios::out|ios::in|ios::app);
    if(commentfile.is_open())
                {
                    cout<<"\t\tEnter your ID please : ";
                    cin>>ID;
                    cout<<"\n\t\tEnter your question Below"<<endl;
                    cout<<" \t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl<<endl<<"\t\t";
                    cin>>commen;
                    getline(cin,Comment);
                    commentfile<<ID<<" \t\tAsked the question below"<<endl;
                    commentfile<<" - - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
                    commentfile<<endl<<commen<<" "<<Comment<<endl;
                    commentfile<<"\n = = = = = = = = = = = = = = = = = = = = = = = = = = \n"<<endl;

                }
     else if(commentfile.fail())
                {
                    cout<<"\t\tThe Comment file cannot be access right now"<<endl;
                }
    commentfile.close();

}


void Answer_Question()
    /*This function is used to place a comment or
    a question for the teacher by the students*/
{
    string Comment,ID,commen;
    fstream commentfile("comment.dat",ios::out|ios::in|ios::app);
    if(commentfile.is_open())
                {
                    cout<<"\t\tEnter the ID you want to replay : ";
                    cin>>ID;
                    cout<<"\n\t\tEnter your answer Below"<<endl;
                    cout<<" \t\t- - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl<<endl<<"\t\t";
                    cin>>commen;
                    getline(cin,Comment);
                    commentfile<<"Teachers replay for : "<<ID<<endl;
                    commentfile<<"- - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
                    commentfile<<endl<<commen<<" "<<Comment<<endl;
                    commentfile<<"\n= = = = = = = = = = = = = = = = = = = = = = = = = = \n"<<endl;

                }
     else if(commentfile.fail())
                {
                    cout<<"\t\tThe Comment file cannot be access right now";
                }
    commentfile.close();

}





void Search_Student()
/*This function is used to  search a result for the students*/
{

struct stud_profile_search
{
 string ID;//ID number of student
 string F_Name;//First Name of student
 string L_Name;//Last Name of student
 string Department;//Name of student
 string Section;//Experiance of the person
 string Year;//Pay of the Teacher
 char Maths_;//Maths result
 char Electronics_;//Electronics result
 char Physics_;//Physics result
 char Thermodynamics_;//Thermodynamics result
 char Programming_;//Programming result
 char Workshop_;//Workshop result
 char Lab_;//Lab result
}stud_in[50];


    ifstream outfile("Database.dat");
    string num;
    cout<<"\t\tenter your Id : ";
    cin>>num;
    system("color 6");

    int i=0,j;
    int notFound=0;

for(j=0;((j<i)||(!outfile.eof()));j++ )

    {

     getline(outfile,stud[j].ID);

     if(stud[j].ID==num)
     {
      notFound = 1;
      system("cls");
      cout<<"\n\n\n";
      cout<<"\t\tSearching";Sleep(400);cout<<" .";Sleep(400);cout<<" .";Sleep(500);cout<<" .";Sleep(600);cout<<" ."<<endl;
      cout<<"\n\n\n";
      system("cls");
      cout<<"\n\n\n\n\n\n";
      cout<<"\t\t=================================="<<endl;
      cout<<"\t\t\tStudent Profile"<<endl;
      cout<<"\t\t=================================="<<endl;
      cout<<"\t\tStudent ID : "<<stud[j].ID<<endl;

      getline(outfile,stud_in[j].F_Name);
      getline(outfile,stud_in[j].L_Name);
      cout<<"\t\tName: "<<stud_in[j].F_Name<<" "<<stud_in[j].L_Name<<endl;

      getline(outfile,stud_in[j].Department);
      cout<<"\t\tDepartment : "<<stud_in[j].Department<<endl;

      getline(outfile,stud_in[j].Section);
      cout<<"\t\tSection: "<<stud_in[j].Section<<endl;

      getline(outfile,stud_in[j].Year);
      cout<<"\t\tYear of admission : "<<stud_in[j].Year<<endl;
      cout<<"\t\t=================================="<<endl;
      cout<<"\t\t\tResult\n";
      cout<<"\t\t=================================="<<endl;

      outfile>>stud_in[j].Maths_;
      cout<<"\t\tMaths : "<<stud_in[j].Maths_<<endl;

      outfile>>stud_in[j].Electronics_;
      cout<<"\t\tElectronics : "<<stud_in[j].Electronics_<<endl;

      outfile>>stud_in[j].Physics_;
      cout<<"\t\tPhysics : "<<stud_in[j].Physics_<<endl;

      outfile>>stud_in[j].Thermodynamics_;
      cout<<"\t\tThermodynamics : "<<stud_in[j].Thermodynamics_<<endl;

      outfile>>stud_in[j].Programming_;
      cout<<"\t\tPrograming : "<<stud_in[j].Programming_<<endl;

      outfile>>stud_in[j].Workshop_;
      cout<<"\t\tWorkshop : "<<stud_in[j].Workshop_<<endl;

      outfile>>stud_in[j].Lab_;
      cout<<"\t\tLab : "<<stud_in[j].Lab_<<endl;

      float sum1,sum2,sum3,Sum,GPAV;
      sum1=(GPA(stud_in[j].Maths_)*6)+(GPA(stud_in[j].Electronics_)*5)+(GPA(stud_in[j].Physics_)*5);
      sum2=(GPA(stud_in[j].Thermodynamics_)*4)+(GPA(stud_in[j].Programming_)*5);
      sum3=(GPA(stud_in[j].Workshop_)*2)+(GPA(stud_in[j].Lab_)*3);
      Sum=sum1+sum2+sum3;
      GPAV=Sum/30;
      cout<<"\t\t=================================="<<endl;
      cout<<"\t\tGPA : "<<GPAV<<endl;
      cout<<"\t\t=================================="<<endl;

     }//if

    }

       if (notFound==0)
    {
    cout<<"\n\t\tStudent Record Not Found"<<endl;
    MessageBox(NULL,"Student Record Not Found\nDo you want to try Again","WARNING", MB_OK | MB_ICONINFORMATION | MB_SYSTEMMODAL);
    }

    outfile.close();

}



void View_Questions()
    /*This function is used to view the comments and the questions given
    by the students for the teacher*/
{
            fstream commentfile("comment.dat",ios::out|ios::in|ios::app);
            string Comment;
            if(commentfile.is_open())
                {

                   while(getline(commentfile,Comment))
                        {
                            cout<<"\t\t"<<Comment<<endl;
                        }

                }

           else if(commentfile.fail())
                {
                    cout<<"\t\tThe Comment file cannot be access right now";
                }
    commentfile.close();
}



void display_all()
/*This function is used to display all
the profiles of the students in the Database*/
    {
            fstream outfile("Database.dat",ios::in);
            string Student_Profile;
            if(outfile.is_open())
            {


                struct stud_profile_search
                {
                 string ID;//ID number of student
                 string F_Name;//First Name of student
                 string L_Name;//Last Name of student
                 string Department;//Name of student
                 string Section;//Experiance of the person
                 string Year;//Pay of the Teacher
                 char Maths_;//Maths result
                 char Electronics_;//Electronics result
                 char Physics_;//Physics result
                 char Thermodynamics_;//Thermodynamics result
                 char Programming_;//Programming result
                 char Workshop_;//Workshop result
                 char Lab_;//Lab result

                }stud_in[50];
                system("cls");

                   int j,i=0;

                    for(int j=0;((j<i)||(!outfile.eof()));j++ )

                {

                  cout<<"\t\t=================================="<<endl;
                  cout<<"\t\t\tStudent Profile"<<endl;
                  cout<<"\t\t=================================="<<endl;

                  outfile>>stud_in[i].ID;
                  cout<<"\n\t\tStudent ID: "<<stud_in[i].ID<<endl;
                  outfile>>stud_in[i].F_Name;
                  outfile>>stud_in[i].L_Name;
                  cout<<"\t\tName of student : "<<stud_in[i].F_Name<<" "<<stud_in[i].L_Name<<endl;
                  outfile>>stud_in[i].Department;
                  cout<<"\t\tDepartment : "<<stud_in[i].Department<<endl;
                  outfile>>stud_in[i].Section;
                  cout<<"\t\tSection of the student : "<<stud_in[i].Section<<endl;
                  outfile>>stud_in[i].Year;
                  cout<<"\t\tYear of admission: "<<stud_in[i].Year<<endl;
                  cout<<"\t\t=================================="<<endl;
                  cout<<"\t\t\tResult\n";
                  cout<<"\t\t=================================="<<endl;
                  outfile>>stud_in[i].Maths_;
                  cout<<"\t\tMath : "<<stud_in[i].Maths_<<endl;
                  outfile>>stud_in[i].Electronics_;
                  cout<<"\t\tElectronics : "<<stud_in[i].Electronics_<<endl;
                  outfile>>stud_in[i].Physics_;
                  cout<<"\t\tPhysics : "<<stud_in[i].Physics_<<endl;
                  outfile>>stud_in[i].Thermodynamics_;
                  cout<<"\t\tThermodynamics : "<<stud_in[i].Thermodynamics_<<endl;
                  outfile>>stud_in[i].Programming_;
                  cout<<"\t\tProgramming : "<<stud_in[i].Programming_<<endl;
                  outfile>>stud_in[i].Workshop_;
                  cout<<"\t\tWorkshop : "<<stud_in[i].Workshop_<<endl;
                  outfile>>stud_in[i].Lab_;
                  cout<<"\t\tLab : "<<stud_in[i].Lab_<<endl;

                  float sum1,sum2,sum3,Sum,GPAV;

                  sum1=(GPA(stud_in[i].Maths_)*6)+(GPA(stud_in[i].Electronics_)*5)+(GPA(stud_in[i].Physics_)*5);
                  sum2=(GPA(stud_in[i].Thermodynamics_)*4)+(GPA(stud_in[i].Programming_)*5);
                  sum3=(GPA(stud_in[i].Workshop_)*2)+(GPA(stud_in[i].Lab_)*3);

                  Sum=sum1+sum2+sum3;

                  GPAV=Sum/30;

                  cout<<"\t\t=================================="<<endl;
                  cout<<"\t\tGPA : "<<GPAV<<endl;
                  cout<<"\t\t==================================\n";

                  cout<<"\t\t***********************************"<<endl<<endl<<endl;
                }
            }//if

            else if(outfile.fail())
            {
                cout<<"\t\tError While opening the database";
                MessageBox(NULL,"Error While opening the database","WARNING", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL);
            }
                     outfile.close();

    }



    void delete_Profile()
    /*This function is used to delete a record
    from a profile*/
{
    fstream outfile("Database.dat",ios::in);
    fstream temp("temp.dat",ios::out);

    if(!temp.is_open())
        {
            cout << " The file does't exist"<< endl;
        }
            struct stud_profile_search
                {
                 string ID;//ID number of student
                 string F_Name;// First Name of student
                 string L_Name;// Last Name of student
                 string Department;//Name of student
                 string Section;//Section of the student
                 string Year;//Pay of the Teacher
                 string Maths_;//Maths result
                 string Electronics_;//Electronics result
                 string Physics_;//Physics result
                 string Thermodynamics_;//Thermodynamics result
                 string Programming_;//Programming result
                 string Workshop_;//Workshop result
                 string Lab_;//Lab result

                }stud_in[50];
    string num;
    system("cls");
    cout<<"\t\tEnter Student Id you want to delete : ";
    cin>>num;

    system("color 6");

  int i=0;

 for(int j=0;((j<i)||(!outfile.eof()));j++ )

 {

    outfile>>stud_in[i].ID;
    outfile>>stud_in[i].F_Name;
    outfile>>stud_in[i].L_Name;
    outfile>>stud_in[i].Department;
    outfile>>stud_in[i].Section;
    outfile>>stud_in[i].Year;
    outfile>>stud_in[i].Maths_;
    outfile>>stud_in[i].Electronics_;
    outfile>>stud_in[i].Physics_;
    outfile>>stud_in[i].Thermodynamics_;
    outfile>>stud_in[i].Programming_;
    outfile>>stud_in[i].Workshop_;
    outfile>>stud_in[i].Lab_;

if(stud_in[i].ID!=num) //if function to give output of the profiles except the ID entered
{
    temp<<stud_in[i].ID<<endl<<stud_in[i].F_Name<<endl<<stud_in[i].L_Name<<endl
   <<stud_in[i].Department<<endl<<stud_in[i].Section<<endl
   <<stud_in[i].Year<<endl<<stud_in[i].Maths_<<endl
   <<stud_in[i].Electronics_<<endl<<stud_in[i].Physics_<<endl<<stud_in[i].Thermodynamics_<<endl
   <<stud_in[i].Programming_<<endl<<stud_in[i].Workshop_<<endl<<stud_in[i].Lab_<<endl;
}
    }//for loop


temp.close();
outfile.close();

outfile.open("Database.dat",ios::out);
temp.open("temp.dat",ios::in);
string students_profile;

while(getline(temp,students_profile)) //While function to copy the data in temp file to Database
{
    outfile<<endl<<students_profile;
}

      temp.close();
      outfile.close();

   remove("temp.dat");//delete the temporary file
  cout<<"\n\t\t* * * * * * * * * * * * * * * * * * "<<endl;
  cout<<"\t\t\tSuccessfully Deleted"<<endl;
  cout<<"\t\t* * * * * * * * * * * * * * * * * * "<<endl;

MessageBox(NULL,"X X X X X X X X X X X X X X X X X X X\n    Successfully Deleted\nX X X X X X X X X X X X X X X X X X X\n ","Delete Profile", MB_OK | MB_ICONINFORMATION | MB_SYSTEMMODAL);
}



void edit_Profile()
{
    fstream outfile("Database.dat",ios::in); //-----------------------------open a Database file as an input file
    fstream temp("temp.dat",ios::out); ////----------------------------- create a temporary file file as an input file

    if(!temp.is_open())
        {
            cout << " The file does't exist"<< endl;
        }
struct stud_profile_search
                {
                 string ID;//ID number of student
                 string F_Name;//First Name of student
                 string L_Name;//Last Name of student
                 string Department;//Name of student
                 string Section;//Section of the student
                 string Year;//Pay of the Teacher
                 string Maths_;//Maths result
                 string Electronics_;//Electronics result
                 string Physics_;//Physics result
                 string Thermodynamics_;//Thermodynamics result
                 string Programming_;//Programming result
                 string Workshop_;//Workshop result
                 string Lab_;//Lab result

                }stud_in[50];
    string num;
    system("cls");
    cout<<"\n\n\t\tEnter Student Id you want to edit : ";
    cin>>num;

    system("color 6");

  int i=0;

 for(int j=0;((j<i)||(!outfile.eof()));j++ )

 {

    outfile>>stud_in[i].ID;
    outfile>>stud_in[i].F_Name;
    outfile>>stud_in[i].L_Name;
    outfile>>stud_in[i].Department;
    outfile>>stud_in[i].Section;
    outfile>>stud_in[i].Year;
    outfile>>stud_in[i].Maths_;
    outfile>>stud_in[i].Electronics_;
    outfile>>stud_in[i].Physics_;
    outfile>>stud_in[i].Thermodynamics_;
    outfile>>stud_in[i].Programming_;
    outfile>>stud_in[i].Workshop_;
    outfile>>stud_in[i].Lab_;

if(stud_in[i].ID!=num) //if function to give output of the profiles except the ID entered
{
    temp<<stud_in[i].ID<<endl<<stud_in[i].F_Name<<endl<<stud_in[i].L_Name<<endl
   <<stud_in[i].Department<<endl<<stud_in[i].Section<<endl
   <<stud_in[i].Year<<endl<<stud_in[i].Maths_<<endl
   <<stud_in[i].Electronics_<<endl<<stud_in[i].Physics_<<endl<<stud_in[i].Thermodynamics_<<endl
   <<stud_in[i].Programming_<<endl<<stud_in[i].Workshop_<<endl<<stud_in[i].Lab_<<endl;
}
else
{
  system("cls");
  cout<<"\n\n";
  cout<<"\t\tTo confirm editing enter ID again \n\n";
  Search_Student();
  Sleep(1500);
  cout<<"\t\tYou are about to edit the profile above\n"<<endl;
  Sleep(1000);
  cout<<"\t\t***********************************"<<endl;
  cout<<"\n\t\tEnter the updated profile please:"<<endl;
  cout<<"\t\t=================================="<<endl;
  cout<<"\t\tStudent ID: ";
  cin>>stud[i].ID;
  cout<<"\t\tFirst Name of student : ";
  cin>>stud[i].F_Name;
  cout<<"\t\tLast Name of student : ";
  cin>>stud[i].L_Name;
  cout<<"\t\tDepartment : ";
  cin>>stud[i].Department;
  cout<<"\t\tSection of the student : ";
  cin>>stud[i].Section;
  cout<<"\t\tYear of admission: ";
  cin>>stud[i].Year;
  cout<<"\t\t\tResults: "<<endl;
  cout<<"\t\t========================="<<endl;
  cout<<"\t\tMaths : ";
  cin>>stud[i].Maths;
  cout<<"\t\tElectronics : ";
  cin>>stud[i].Electronics;
  cout<<"\t\tPhysics : ";
  cin>>stud[i].Physics;
  cout<<"\t\tThermodynamics : ";
  cin>>stud[i].Thermodynamics;
  cout<<"\t\tProgramming : ";
  cin>>stud[i].Programming;
  cout<<"\t\tWorkshop: ";
  cin>>stud[i].Workshop;
  cout<<"\t\tLab : ";
  cin>>stud[i].Lab;



   temp<<endl<<stud[i].ID<<endl<<stud[i].F_Name<<endl<<stud[i].L_Name<<endl
   <<stud[i].Department<<endl<<stud[i].Section<<endl
   <<stud[i].Year<<endl<<Grade(stud[i].Maths)<<endl<<Grade(stud[i].Electronics)<<endl<<Grade(stud[i].Physics)
   <<endl<<Grade(stud[i].Thermodynamics)<<endl<<Grade(stud[i].Programming)<<endl
   <<Grade(stud[i].Workshop)<<endl<<Grade(stud[i].Lab)<<endl;
}
    }


temp.close();
outfile.close();

outfile.open("Database.dat",ios::out);
temp.open("temp.dat",ios::in);

string students_profile; //variable to accept all the files written on temp file
while(getline(temp,students_profile)) //While function to copy the data in temp file to Database
{
    outfile<<endl<<students_profile;
}

      temp.close();
      outfile.close();

  remove("temp.dat");//delete the temporary file
  cout<<"\n\t\t* * * * * * * * * * * * * * * * * * "<<endl;
  cout<<"\t\t\tSuccessfully Edited"<<endl;
  cout<<"\t\t* * * * * * * * * * * * * * * * * * "<<endl;

MessageBox(NULL,"X X X X X X X X X X X X X X X X X X X\n    Successfully Edited\nX X X X X X X X X X X X X X X X X X X\n ","Edit Profile", MB_OK | MB_ICONINFORMATION | MB_SYSTEMMODAL);
}



float GPA(char x)
//This function is used to accept a students grade remark and change it to value
{

switch(x)
{
case 'A': return(4);
break;
case 'B': return(3);
break;
case 'C': return(2);
break;
case 'D': return(1);
break;
case 'F': return(0);
break;

}
}








