#include<iostream>
#include <string.h>
using namespace std;


//IT21285974	Nimsara K.M.C.A
//Admin class
class Admin
{
private:
    int admin_ID;
    char admin_email[50];
    char admin_username[50];
    char admin_password[50];
    Inquiries* I1;

public:
    Admin();
    Admin(int a_id, const char a_email[], const char a_uname[], const char a_pass[]);
    void login();
    void check_inquiries(Inquiries* nI1);
    void approve_appli();
    void find_solution();
    void change_con();
    ~Admin();
};


//IT21284120	Rashmitha K.M
//Co-admin Class 
class Co_admin
{
private:

    int co_admin_ID;
    char co_admin_email[50];
    char co_admin_username[50];
    char co_admin_password[20];

public:

    Co_admin();
    Co_admin(int co_ID, const char co_email[], const char co_username[], const char co_password[]);
    void login();
    void check_payment();
    void manage_users();
    void manage_job();

};


//IT21288012	De Vass Gunawardane A.P.D.N
//Coordinator Class 
class Coordinator
{
private:
    int coordinator_ID;
    char coordinator_email[50];
    char coordinator_username[50];
    char coordinator_password[50];

public:
    Coordinator();
    Coordinator(int co_ID, const char co_email[], const char co_username[],const char co_password[]);
    void login();
    void collect_inquiries();
    void find_solution();
    Inquiries* inquire;
    ~Coordinator();
};


//IT21285974	Nimsara K.M.C.A
//Guest User Class 
class GuestUser
{
protected:
    char guest_name[20];
    char guest_email[40];
    char guest_contact_no[11];

public:
    GuestUser();
    GuestUser(const char g_name[], const char g_email[], const char g_contact_no[]);
    void register_Guest();
    void search_job(Job* J1);
    void display_details();
    ~GuestUser();
};


//IT21290824	Dias W.J.S.L
//Job introducer Class
class JobIntroducer
{
private:
    int introducer_ID;
    char introducer_username[12];
    char introducer_password[20];
public:
    JobIntroducer();
    JobIntroducer(int i_id, const char i_username[], const char i_password[]);
    void edit_profile();
    void post_job();
    void check_jobs();
    void manage_appli();
    void view_feedback();
        ~JobIntroducer();

};


//IT21290756	Dissanayake D.M.I.B.B
//Job seeker Class
class JobSeeker
{
private:
    int jobseeker_ID;
    char jobseeker_email[50];
    char jobseeker_username[50];
    char jobseeker_password[50];

public:
    JobSeeker();
    JobSeeker(int js_ID, const char js_email[], const char js_username[], const char js_password[]);
    void login();
    void display_dashboard();
    void apply_jobs();
    void add_feedback();
    void update_profile();
};


//IT21290824	Dias W.J.S.L
//Job Class
class Job
{
private:
    int job_ID;
    char job_category[50];
    char job_descript[120];
    int job_salary;
    int job_vacancies;
public:
    Job();
    Job(int j_id, const char j_category[], const char j_descript[], int j_salary, int j_vacancies);
    void add_job();
    void edit_job();
    void delete_job();
    ~Job();
};

//IT21290824	Dias W.J.S.L
//Application Class
class Application
{
private:
    int application_ID;
    char application_type[50];
public:
    Application();
    Application(int appli_id, const char appli_type[]);
    void manage_appli();
    ~Application();
};


//IT21284120	Rashmitha K.M
//Payment Class
class Payment
{
private:
    int payment_ID;
    int payment_amount;
    char payment_date[10];
    char payment_type[10];

public:
    Payment();
    Payment(int p_ID, int p_amount, const char p_date[], const char p_type[]);
    void check_payment();
    void display_payment();

};

//IT21290756	Dissanayake D.M.I.B.B
//Profile Class
class Profiles {
private:
    char profile_type[50];

public:
    Profiles();
    Profiles(const char p_type[]);
    void add_acc();
    void update_acc();

};


//IT21284120	Rashmitha K.M
//Feedback Class
class Feedback
{

private:
    int feedback_ID;

public:
    Feedback();
    void check_feedback();
    void display_feedback();

};


//IT21288012	De Vass Gunawardane A.P.D.N
//Inquires Class
class Inquiries {
private:
    int inquirie_ID;
    char inquire_description[50];
    char inquire_date[20];

public:
    Inquiries();
    Inquiries(int inq_ID, const char inq_discrip[], const char inq_date[]);
    void check_inquire();
    ~Inquiries();
};


//Method implement
Admin::Admin()
{
    admin_ID = 0;
    strcpy(admin_email, "");
    strcpy(admin_username, "");
    strcpy(admin_password, "");
}

Admin::Admin(int a_id, const char a_email[], const char a_uname[], const char a_pass[])
{
    admin_ID = a_id;
    strcpy(admin_email, a_email);
    strcpy(admin_username, a_uname);
    strcpy(admin_password, a_pass);
}

void Admin::check_inquiries()
{

}
void Admin::approve_appli()
{

}

void Admin::change_con()
{

}

void Admin::find_solution()
{

}

void Admin::login()
{

}


//Method implement
Co_admin::Co_admin()
{
    co_admin_ID = 0;
    strcpy(co_admin_email, "");
    strcpy(co_admin_username, "");
    strcpy(co_admin_password, "");

}
Co_admin::Co_admin(int co_ID, const char co_email[], const char co_username[], const char co_password[])
{

    co_admin_ID = co_ID;
    strcpy(co_admin_email, co_email);
    strcpy(co_admin_username, co_username);
    strcpy(co_admin_password, co_password);

}

void Co_admin::login()
{

}
void Co_admin::check_payment()
{

}
void Co_admin::manage_users()
{

}
void Co_admin::manage_job()
{

}



//Method implement
Coordinator::Coordinator()
{
    coordinator_ID = 0000;
    strcpy(coordinator_email, "");
    strcpy(coordinator_username, "");
    strcpy(coordinator_password, "");

    cout << "Default constructor is running" << endl;
}

Coordinator::Coordinator(int co_ID, const char co_email[], const char co_username[], const char co_password[])
{
    coordinator_ID = co_ID;
    strcpy(coordinator_email, co_email);
    strcpy(coordinator_username, co_username);
    strcpy(coordinator_password, co_password);

    cout << "Overload constructor is running" << endl;
}

void Coordinator::login()
{

}

void Coordinator::collect_inquiries()
{

}

void Coordinator::find_solution()
{

}

//Method implement
JobSeeker::JobSeeker()
{
    jobseeker_ID = 0;
    strcpy(jobseeker_email, "");
    strcpy(jobseeker_username, "");
    strcpy(jobseeker_password, "");
}
JobSeeker::JobSeeker(int js_ID, const char js_email[], const char js_username[], const char js_password[])
{
    jobseeker_ID = js_ID;
    strcpy(jobseeker_email, js_email);
    strcpy(jobseeker_username, js_username);
    strcpy(jobseeker_password, js_password);
}

void JobSeeker::login()
{

}
void JobSeeker::display_dashboard()
{

}
void JobSeeker::apply_jobs()
{

}
void JobSeeker::add_feedback()
{

}
void JobSeeker::update_profile()
{

}


//Method implement
JobIntroducer::JobIntroducer()
{
    introducer_ID = 0;
    strcpy(introducer_username, "");
    strcpy(introducer_password, "");
}

JobIntroducer::JobIntroducer(int i_id, const char i_username[], const char i_password[])
{
    introducer_ID = i_id;
    strcpy(introducer_username, i_username);
    strcpy(introducer_password, i_password);
}

void JobIntroducer::check_jobs()
{

}

void JobIntroducer::edit_profile()
{

}

void JobIntroducer::post_job()
{

}

void JobIntroducer::view_feedback()
{

}

void JobIntroducer::manage_appli()
{

}

//Method implement
Inquiries::Inquiries()
{
    inquirie_ID = 000;
    strcpy(inquire_description, "..........");
    strcpy(inquire_date, "date.....");

    cout << "Default constructor is running" << endl;
}

Inquiries::Inquiries(int inq_ID, const char inq_discrip[], const char inq_date[])
{
    inquirie_ID = inq_ID;
    strcpy(inquire_description, inq_discrip);
    strcpy(inquire_date, inq_date);

    cout << "Overload constructor is running" << endl;
}


//Method implement
Job::Job()
{
    job_ID = 0;
    strcpy(job_category, "");
    strcpy(job_descript, "");
    job_salary = 0;
    job_vacancies = 0;
}

Job::Job(int j_id, const char j_category[], const char j_descript[], int j_salary, int j_vacancies)
{
    job_ID = j_id;
    strcpy(job_category, j_category);
    strcpy(job_descript, j_descript);
    job_salary = j_salary;
    job_vacancies = j_vacancies;
}

void Job::add_job() 
{

}

void Job::edit_job()
{

}

void Job::delete_job()
{

}


//Method implement
Application::Application()
{
    application_ID = 0;
    strcpy(application_type, "");
}

Application::Application(int appli_id, const char appli_type[])
{
    application_ID = appli_id;
    strcpy(application_type, appli_type);
}


void Application::manage_appli()
{

}

//Method implement
Payment::Payment()
{
    payment_ID = 0;
    payment_amount = 0;
    strcpy(payment_date, "");
    strcpy(payment_type, "");

}
Payment::Payment(int p_ID, int p_amount, const char p_date[], const char p_type[])
{

    payment_ID = p_ID;
    payment_amount = p_amount;
    strcpy(payment_date, p_date);
    strcpy(payment_type, p_type);

}
void Payment::check_payment()
{

}
void Payment::display_payment()
{

}

// method implementation
Profiles::Profiles()
{
    strcpy(profile_type, "");

}
Profiles::Profiles(const char p_type[])
{
    strcpy(profile_type, p_type);

}

void Profiles::add_acc()
{

}
void Profiles::update_acc()
{

}




//main program
int main()
{
    Admin* admin1 = new();// object creating 
    Co_admin* co_admin1 = new(); // object creating
    Coordinator* coodinator1 = new();// object creating 
    JobSeeker* jobSeeker1 = new();// object creating 
    JobIntroducer* jobIntroducer1 = new();// object creating
    GuestUser* guest1 = new();// object creating 
    Profiles* Profiles1 = new();// object creating 
    Inquiries* inquire1 = new();// object creating 
    Job* job1 = new();// object creating 
    Application* application1 = new();
    Feedback* feedback1 = new(); //object creating
    Payment* payment1 = new(); // object creating



    //method calling
    admin1->login();
    admin1->check_inquiries();
    admin1->approve_appli();
    admin1->find_solution();
    admin1->change_con();
    
    // method calling
    co_admin1->login();
    co_admin1->check_payment();
    co_admin1->manage_users();
    co_admin1->manage_job();

    // method calling
    coodinator1->login();
    coodinator1->collect_inquiries();
    coodinator1->find_solution();


    //Method Calling
    jobIntroducer1->edit_profile();
    jobIntroducer1->post_job();
    jobIntroducer1->check_jobs();
    jobIntroducer1->manage_appli();
    jobIntroducer1->view_feedback();


    // method calling
    jobSeeker1->login();
    jobSeeker1->display_dashboard();
    jobSeeker1->apply_jobs();
    jobSeeker1->add_feedback();
    jobSeeker1->update_profile();

    // method calling
    guest1->register_Guest();
    guest1->display_details();
    guest1->search_job();

    // method calling
    inquire1->check_inquire();

    // method calling
    feedback1->check_feedback();
    feedback1->display_feedback();

    // method calling
    payment1->check_payment();
    payment1->display_payment();
    
    //Method Calling
    job1->add_job();
    job1->edit_job();
    job1->delete_job();

    //Method Calling
    application1->manage_appli();

    // method calling
    Profiles1->add_acc();
    Profiles1->update_acc();




    //delete dynamic objects 
    delete admin1;
    delete co_admin1;
    delete coodinator1;
    delete guest1;
    delete feedback1;
    delete payment1;
    delete inquire1;
    delete jobIntroducer1;
    delete job1;
    delete application1;
    delete jobSeeker1;
    delete Profiles1;
}
