#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
//Intro loading part
void loading()
{
    cout<<"Made by"<<endl;
    cout<<"Rifat Hossen"<<endl;
    cout<<"ID:2004129"<<endl;
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\tWELCOME"<<endl;
    cout<<"\n\n\n\t\t\t\t\t\t\tLoading"<<endl;
    char a=219;
    cout<<"\t\t\t\t\t\t    ";
    for(int i=0; i<15; i++)
    {
        cout<<a;
        if(i<6) Sleep(300);
        else if(i<10) Sleep(90);
        else Sleep(300);
    }
    cout<<endl;
    cout<<"Press enter to continue..."<<endl;
    getchar();
}
//editData
class editData
{
public:
    void deleteCTdata();
    void deleteAttendencedata();
    void deleteTermdata();
};
//CT data delete
void editData::deleteCTdata()
{
    string s,r;
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t\t\t     To go back type exit"<<endl;
    while(1)
    {
        fstream fin;
        string z,mm;
        int chk=0;
        fin.open("ctmarks.txt",ios::in);
        if(!fin) chk=2;
        if(chk==2)
        {
            cout<<"There is no data file.Press enter to go back...";
            getchar();
            getchar();
            return;

        }
        cout<<"\n\n\t\t\t\t\t\t     Give Id or exit: ";
        cin>>s;
        if(s=="exit") return;
        while(fin && !fin.eof())
        {
            fin>>z>>mm;
            if(s==z)
            {
                chk=1;
                break;
            }
        }
        fin.close();

        if(chk==1)
        {
            fstream out;
            fstream in;
            in.open("ct1.txt",ios::out);
            out.open("ctmarks.txt",ios::in);
            while(out>>z>>mm)
            {
                if(s==z) continue;
                in<<z<<" "<<mm<<endl;
            }
            out.close();
            in.close();
            remove("ctmarks.txt");
            rename("ct1.txt","ctmarks.txt");
            cout<<"ID Data is deleted Successfully...";
        }
        else
        {
            cout<<"This ID doesn't exist.Try for another ID.Press enter to continue..."<<endl;
            getchar();
            getchar();
        }
    }
}
void editData::deleteAttendencedata()
{
    string s,r;
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t\t\t     To go back type exit"<<endl;
    while(1)
    {
        fstream fin;
        string z,mm;
        int chk=0;
        fin.open("attendence.txt",ios::in);
        if(!fin) chk=2;
        if(chk==2)
        {
            cout<<"There is no data file.Press enter to go back...";
            getchar();
            getchar();
            return;
        }
        cout<<"\n\n\t\t\t\t\t\t     Give Id or exit: ";
        cin>>s;
        if(s=="exit") return;
        while(fin && !fin.eof())
        {
            fin>>z>>mm;
            if(s==z)
            {
                chk=1;
                break;
            }
        }
        fin.close();

        if(chk==1)
        {
            fstream out;
            fstream in;
            in.open("attendence1.txt",ios::out);
            out.open("attendence.txt",ios::in);
            while(out>>z>>mm)
            {
                if(s==z) continue;
                in<<z<<" "<<mm<<endl;
            }
            out.close();
            in.close();
            remove("attendence.txt");
            rename("attendence1.txt","attendence.txt");
            cout<<"ID Data is deleted Successfully...";
        }
        else
        {
            cout<<"This ID doesn't exist.Try for another ID.Press enter to continue..."<<endl;
            getchar();
            getchar();
        }
    }
}
void editData::deleteTermdata()
{
    string s,r;
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t\t\t     To go back type exit"<<endl;
    while(1)
    {
        fstream fin;
        string z,mm;
        int chk=0;
        fin.open("termarks.txt",ios::in);
        if(!fin) chk=2;
        if(chk==2)
        {
            cout<<"There is no data file.Press enter to go back...";
            getchar();
            getchar();
            return;
        }
        cout<<"\n\n\t\t\t\t\t\t     Give Id or exit: ";
        cin>>s;
        if(s=="exit") return;
        while(fin && !fin.eof())
        {
            fin>>z>>mm;
            if(s==z)
            {
                chk=1;
                break;
            }
        }
        fin.close();

        if(chk==1)
        {
            fstream out;
            fstream in;
            in.open("term1.txt",ios::out);
            out.open("termarks.txt",ios::in);
            while(out>>z>>mm)
            {
                if(s==z) continue;
                in<<z<<" "<<mm<<endl;
            }
            out.close();
            in.close();
            remove("termarks.txt");
            rename("term1.txt","termarks.txt");
            cout<<"ID Data is deleted Successfully...";
        }
        else
        {
            cout<<"This ID doesn't exist.Try for another ID.Press enter to continue..."<<endl;
            getchar();
            getchar();
        }
    }
}

//Student class
class Student
{
    string s,r;
    int n;
public:
    void captainFunction();
    void seeSubjectResourse();
    void seeAnnouncement();
    void seeCTmarks();
    void seeAnnualMarks();
    void seeAttendence();
    friend void mainmenu();

};

//Student captainfunction
void Student::captainFunction()
{

    while(1)
    {
        system("cls");
        cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
        cout<<"\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\n\n\t\t\t\t\t\tWelcome Dear Student,"<<endl;

        cout<<"\n\n\t\t\t\t\t\t1.See Resourse of subject\n\t\t\t\t\t\t";
        cout<<"2.See Announcement\n\t\t\t\t\t\t3.See CT exam Marks\n\t\t\t\t\t\t";
        cout<<"4.See Term Marks\n\t\t\t\t\t\t5.See Attendence marks\n\t\t\t\t\t\t";
        cout<<"6.Back to Mainmenu\n\t\t\t\t\t\tChoose an option: ";
        cin>>n;
        switch(n)
        {
        case 1:
            seeSubjectResourse();
            break;
        case 2:
            seeAnnouncement();
            break;
        case 3:
            seeCTmarks();
            break;
        case 4:
            seeAnnualMarks();
            break;
        case 5:
            seeAttendence();
            break;
        case 6:
            return;
        default:
            cout<<"Invalid Option.Select from above options.\nPress enter to continue..."<<endl;
            getchar();
            getchar();
        }
    }
}
//see attendence
void Student::seeAttendence()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    fstream in;
    in.open("attendence.txt");
    cout<<"\n\n\t\t\t\t\t\t      Attendence List"<<endl;
    cout<<"\t\t\t\t\t\t      ---------------"<<endl;
    cout<<"\t\t\t\t\t\t"<<"ID"<<"\t\t\t"<<"Attendence"<<endl;
    while( in>>s>>r)
    {
        cout<<"\t\t\t\t\t\t"<<s<<"\t\t\t"<<r<<endl;
    }
    cout<<"To return type exit: ";
    string w;
    cin>>w;
}
//see resourse
void Student::seeSubjectResourse()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    fstream in;
    in.open("subjectResourse.txt");
    cout<<"\n\n\t\t\t\t\t\t     Resourse List"<<endl;
    cout<<"\t\t\t\t\t\t     -------------"<<endl;
    while(getline(in,s))
    {
        cout<<"\n\n\t=> "<<s<<endl;
    }
    cout<<"To return type exit: ";
    string w;
    cin>>w;
}
//see Announcement
void Student::seeAnnouncement()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    fstream in;
    in.open("announcement.txt");
    cout<<"\n\n\t\t\t\t\t\t     Announcement List"<<endl;
    cout<<"\t\t\t\t\t\t     -----------------"<<endl;
    while(getline(in,s))
    {
        cout<<"\n\n\t=> "<<s<<endl;
    }
    cout<<"To return type exit: ";
    string w;
    cin>>w;
}
//see CT marks
void Student::seeCTmarks()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    fstream fin;
    fin.open("ctmarks.txt");
    cout<<"\n\n\t\t\t\t\t\t       CT marks List"<<endl;
    cout<<"\t\t\t\t\t\t       -------------"<<endl;
    cout<<"\t\t\t\t\t\t"<<"ID"<<"\t\t\t"<<"CT Marks"<<endl;
    while(fin>>s>>r)
    {
        cout<<"\t\t\t\t\t\t"<<s<<"\t\t\t"<<r<<endl;
    }
    cout<<"To return type exit: ";
    string w;
    cin>>w;
}
void Student::seeAnnualMarks()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    fstream in;
    in.open("termarks.txt");
    cout<<"\n\n\t\t\t\t\t\t      Term Marks List"<<endl;
    cout<<"\t\t\t\t\t\t      ---------------"<<endl;
    cout<<"\t\t\t\t\t\t"<<"ID"<<"\t\t\t"<<"Annual Marks"<<endl;
    while(in>>s>>r)
    {
        cout<<"\t\t\t\t\t\t"<<s<<"\t\t\t"<<r<<endl;
    }
    cout<<"To return type exit: ";
    string w;
    cin>>w;
}
//Teacher class
class Teacher:private Student,private editData
{
    string s,r;
    int n;
public:
    void captainFunction();
    void addSubjectResourse();
    void addAnnouncement();
    void addCtMarks();
    void addTermMarks();
    void addAttendence();
    void changePassword();
    void erasedata();
    void seeData();
    void editData();
    friend void mainmenu();
};
//Teacher captainFunction
void Teacher::captainFunction()
{
    int f=0;
    while(f!=1)
    {
        string w,q;
        system("cls");
        cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
        cout<<"\t\t\t\t\t     ------------------------------"<<endl;
        if(f==0) cout<<"\n\n\t\t\t\t\t\t     Welcome Sir,"<<endl;
        else cout<<"\n\n\t\t\t\t\t\t     Sir,"<<endl;
        f=-1;
        fstream filecheck;
        filecheck.open("Teacherpass.txt",ios::in);
        if(!filecheck)
        {
            filecheck.close();
            fstream in;
            in.open("Teacherpass.txt",ios::out);
            in<<"admin"<<" "<<"admin"<<endl;
            in.close();
        }
        else filecheck.close();
        cout<<"\t\t\t\t\t\t     Please Login:"<<endl<<"\t\t\t\t\t\t     Username=> ";
        cin>>s;
        cout<<"\t\t\t\t\t\t     Password=> ";
        cin>>r;
        fstream check;
        check.open("Teacherpass.txt",ios::in);
        check>>w>>q;
        check.close();
        if(w!=s)
        {
            cout<<"Invalid username.TryAgain...."<<endl;
            cout<<"1.Back to Mainmenu\n2.TryAgain\nEnter your choice: ";
            cin>>f;
            if(f==1) return;
        }
        else if(q!=r)
        {
            cout<<"Invalid Password.TryAgain...."<<endl;
            cout<<"\n1.Back to Mainmenu\n2.TryAgain\nEnter your choice: ";
            cin>>f;
            if(f==1) return;
        }
        else
        {
            cout<<"Login Successful...."<<endl;
            f=1;
        }
    }
    while(f==1)
    {
        system("cls");
        cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
        cout<<"\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\n\n\t\t\t\t\t\t1.Add Resourse to subject\n\t\t\t\t\t\t2.Add an Announcement\n\t\t\t\t\t\t";
        cout<<"3.Add CT exam Marks\n\t\t\t\t\t\t4.Add Term Marks\n\t\t\t\t\t\t5.Add Attendence marks\n\t\t\t\t\t\t";
        cout<<"6.Change Password\n\t\t\t\t\t\t7.Erase specific field Data\n\t\t\t\t\t\t";
        cout<<"8.See Data\n\t\t\t\t\t\t9.Edit Data\n\t\t\t\t\t\t10.Back to Mainmenu\n\t\t\t\t\t\tChoose an option: ";
        cin>>n;
        switch(n)
        {
        case 1:
            addSubjectResourse();
            break;
        case 2:
            addAnnouncement();
            break;
        case 3:
            addCtMarks();
            break;
        case 4:
            addTermMarks();
            break;
        case 5:
            addAttendence();
            break;
        case 6:
            changePassword();
            break;
        case 7:
            erasedata();
            break;
        case 8:
            seeData();
            break;
        case 9:
            editData();
            break;
        case 10:
            return;
        default:
            cout<<"Invalid Option.Select from above options.Press enter to continue..."<<endl;
            getchar();
            getchar();

        }
    }
}
//add resourses
void Teacher::addSubjectResourse()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\nTo go back type exit"<<endl;
    cout<<"\n\nGive google drive link of that Resourse and proper information: ";
    getchar();
    getline(cin,s);
    if(s=="exit") return;
    fstream in;
    in.open("subjectResourse.txt",ios::app | ios::out);
    in<<s<<"\n";
    in.close();
}
//add announcement
void Teacher::addAnnouncement()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\nTo go back type exit"<<endl;
    cout<<"\n\nGive an announcement with Date: ";
    getchar();
    getline(cin,s);
    if(s=="exit") return;
    fstream in;
    in.open("announcement.txt",ios::app | ios::out);
    in<<s<<"\n";
    in.close();
}
//add attendence
void Teacher::addAttendence()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t\t\t     To go back type exit"<<endl;
    while(1)
    {
        cout<<"\n\n\t\t\t\t\t\t     Give Id or exit: ";
        cin>>s;
        if(s=="exit") return;
        cout<<"\t\t\t\t\t\t     Give Attendence percentage: ";
        cin>>r;
        fstream fin;
        string z,mm;
        int chk=1;
        fin.open("attendence.txt",ios::in);
        while(fin && !fin.eof())
        {
            fin>>z>>mm;
            if(s==z)
            {
                cout<<"This ID data is already exists.Try for another ID.\npress enter to continue..."<<endl;
                getchar();
                getchar();
                chk=0;
                break;
            }
        }
        fin.close();
        if(chk==1)
        {
            fstream out;
            out.open("attendence.txt",ios::app | ios::out);
            out<<s<<" "<<r<<"\n";
            out.close();
        }

    }
}
//add ctmarks
void Teacher::addCtMarks()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t\t\t     To go back type exit"<<endl;
    while(1)
    {
        cout<<"\n\n\t\t\t\t\t\t     Give Id or exit: ";
        cin>>s;
        if(s=="exit") return;
        cout<<"\t\t\t\t\t\t     Give ctmarks: ";
        cin>>r;
        fstream fin;
        string z,mm;
        int chk=1;
        fin.open("ctmarks.txt",ios::in);
        while(fin && !fin.eof())
        {
            fin>>z>>mm;
            if(s==z)
            {
                cout<<"This ID data is already exists.Try for another ID.\npress enter to continue..."<<endl;
                getchar();
                getchar();
                chk=0;
                break;
            }
        }
        fin.close();
        if(chk==1)
        {
            fstream out;
            out.open("ctmarks.txt",ios::app | ios::out);
            out<<s<<" "<<r<<"\n";
            out.close();
        }

    }
}
//term marks
void Teacher::addTermMarks()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t\t\t     To go back type exit"<<endl;

    while(1)
    {
        cout<<"\n\n\t\t\t\t\t\t     Give Id or exit: ";
        cin>>s;
        if(s=="exit") return;
        cout<<"\t\t\t\t\t\t     Give Term marks: ";
        cin>>r;
        fstream fin;
        string z,mm;
        int chk=1;
        fin.open("termarks.txt",ios::in);
        while(fin && !fin.eof())
        {
            fin>>z>>mm;
            if(s==z)
            {
                cout<<"This ID data is already exists.Try for another ID.\npress enter to continue..."<<endl;
                getchar();
                getchar();
                chk=0;
                break;
            }
        }
        fin.close();
        if(chk==1)
        {
            fstream out;
            out.open("termarks.txt",ios::app | ios::out);
            out<<s<<" "<<r<<"\n";
            out.close();
        }

    }
}
//change password
void Teacher::changePassword()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
    cout<<"\t\t\t\t\t     ------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t\t\t     Give new username: ";
    cin>>s;
    cout<<"\t\t\t\t\t\t     Give new password: ";
    cin>>r;
    fstream in;
    in.open("password1.txt",ios::app | ios::out);
    in<<s<<" "<<r;
    in.close();
    remove("Teacherpass.txt");
    rename("password1.txt","Teacherpass.txt");


}
//erase data
void Teacher::erasedata()
{
    while(1)
    {
        system("cls");
        cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
        cout<<"\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\n\n\t\t\t\t\t\t1.Erase Resourse Data\n\t\t\t\t\t\t";
        cout<<"2.Erase Announcement Data\n\t\t\t\t\t\t3.Erase CT marks Data\n\t\t\t\t\t\t";
        cout<<"4.Erase Term marks Data\n\t\t\t\t\t\t5.Erase Attendence Data\n\t\t\t\t\t\t";
        cout<<"6.Back to Mainmenu\n\t\t\t\t\t\tChoose an option: ";
        cin>>n;
        fstream ers;
        switch(n)
        {
        case 1:
            ers.open("subjectResourse.txt",ios::trunc | ios::out);
            ers.close();
            cout<<"\n\n\t\t\t\t\t\t...DONE..."<<endl;
            cout<<"Press enter to continue..."<<endl;
            getchar();
            getchar();
            break;
        case 2:
            ers.open("announcement.txt",ios::trunc | ios::out);
            ers.close();
            cout<<"\n\n\t\t\t\t\t\t...DONE..."<<endl;
            cout<<"Press enter to continue..."<<endl;
            getchar();
            getchar();
            break;
        case 3:
            ers.open("ctmarks.txt",ios::trunc | ios::out);
            ers.close();
            cout<<"\n\n\t\t\t\t\t\t...DONE..."<<endl;
            cout<<"Press enter to continue..."<<endl;
            getchar();
            getchar();
            break;
        case 4:
            ers.open("termarks.txt",ios::trunc | ios::out);
            ers.close();
            cout<<"\n\n\t\t\t\t\t\t    ...DONE..."<<endl;
            cout<<"Press enter to continue..."<<endl;
            getchar();
            getchar();
            break;
        case 5:
            ers.open("attendence.txt",ios::trunc | ios::out);
            ers.close();
            cout<<"\n\n\t\t\t\t\t\t...DONE..."<<endl;
            cout<<"Press enter to continue..."<<endl;
            getchar();
            getchar();
            break;
        case 6:
            return;
        default:
            cout<<"Invalid input.Choose from above options.\nPress enter to continue..."<<endl;
            getchar();
            getchar();
            break;
        }

    }
}
//see Data
void Teacher::seeData()
{
    while(1)
    {
        system("cls");
        cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
        cout<<"\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\n\n\t\t\t\t\t\tSir,"<<endl;

        cout<<"\n\n\t\t\t\t\t\t1.See Resourse of subject\n\t\t\t\t\t\t";
        cout<<"2.See Announcement\n\t\t\t\t\t\t3.See CT exam Marks\n\t\t\t\t\t\t";
        cout<<"4.See Term Marks\n\t\t\t\t\t\t5.See Attendence marks\n\t\t\t\t\t\t";
        cout<<"6.Back to Mainmenu\n\t\t\t\t\t\tChoose an option: ";
        cin>>n;
        switch(n)
        {
        case 1:
            seeSubjectResourse();
            break;
        case 2:
            seeAnnouncement();
            break;
        case 3:
            seeCTmarks();
            break;
        case 4:
            seeAnnualMarks();
            break;
        case 5:
            seeAttendence();
            break;
        case 6:
            return;
        default:
            cout<<"Invalid Option.Select from above options.\nPress enter to continue..."<<endl;
            getchar();
            getchar();
        }
    }
}
void Teacher::editData()
{
    while(1)
    {
        system("cls");
        cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
        cout<<"\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\n\n\t\t\t\t\t\t1.Delete CT Marks Data\n\t\t\t\t\t\t2.Delete Attendence Data\n\t\t\t\t\t\t";
        cout<<"3.Delete Term marks Data\n\t\t\t\t\t\t4.Go Back\n\t\t\t\t\t\tChoose an option: ";
        cin>>n;
        switch(n)
        {
        case 1:
            deleteCTdata();
            break;
        case 2:
            deleteAttendencedata();
            break;
        case 3:
            deleteTermdata();
            break;
        case 4:
            return;
        default:
            cout<<"Invalid Option.Select from above options.Press enter to continue..."<<endl;
            getchar();
            getchar();

        }
    }
}
//Mainmenu
void mainmenu()
{
    Teacher t;
    Student s;
    int choice=0;
    while(choice!=3)
    {
        system("cls");
        cout<<"\n\n\n\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\t\t\t\t\t     |CSE DEPARTMENT DATABASE,CUET|"<<endl;
        cout<<"\t\t\t\t\t     ------------------------------"<<endl;
        cout<<"\n\t\t\t\t\t\t   Choose an option:"<<endl;
        cout<<"\t\t\t\t\t\t   1.Teacher"<<endl;
        cout<<"\t\t\t\t\t\t   2.Student"<<endl;
        cout<<"\t\t\t\t\t\t   3.Exit"<<endl;
        cout<<"\n\t\t\t\t\t\t   Choose an option: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            t.captainFunction();
            break;
        case 2:
            s.captainFunction();
            break;
        case 3:
            break;
        default:
            cout<<"\nInvalid option.Please choose from above options.\nPress enter to continue..."<<endl;
            getchar();
            getchar();
            break;
        }
    }
}
//MainFunction
int main()
{
    system("color 9F");
    loading();
    mainmenu();
    cout<<"\n\n\n\t\t\t\t\t\t\tExiting"<<endl;
    char a=219;
    cout<<"\t\t\t\t\t\t    ";
    for(int i=0; i<15; i++)
    {
        cout<<a;
        if(i<5) Sleep(200);
        else if(i<10) Sleep(50);
        else Sleep(300);
    }
    return 0;
}
