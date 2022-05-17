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
