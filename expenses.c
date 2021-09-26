#include <stdio.h>
#include <float.h>
#include <conio.h>
#include <string.h>
int main()
{
    double school_fee = 0;
    double Total_Fee;
    double books_expenses;
    double tuition_fees;
    double dress_fees;
    double activities_fees;
    double grad_fees;
    double accomodation_expenses;
    char type_of_school;
    char school_stream;
    char level_of_education;
    char type_of_course;
    char type_of_university;
    char type_of_accomodation;
    int c;
    ("cls");
    printf(" WELCOME TO THE B.P.M.C.E  MADHEPURA");
    printf("\n\n\n\n\n********************************************************");
    printf("\n\n\n\n\n WELCOME TO THE EDUCATION EXPENSES CALCULATOR PROGRAM");
    printf("\n\n GROUP NAME H");
    printf("\n\n\n\n\n********************************************************");
    getche();
    //clrscr();
    ("cls");
    printf("\n\n\n\n Enter the level at which the child is studying : ");
    printf("\n\n S for SCHOOL");
    printf("\n\n G for GRADUATION");
    printf("\n\n P for POST GRADUATION");
    printf("\n\n R for RESEARCH");
    printf("\n\n");
    fflush(stdin);
    scanf("%c", &level_of_education);
    ("cls"); //clrscr();
    switch (level_of_education)
    {
    case 's':
    case 'S':
        printf("\n\n\n Enter the type of school in which the child studied : ");
        printf("\n\n I for International");
        printf("\n\n G for Government");
        printf("\n\n P for Private");
        printf("\n\n");
        fflush(stdin);
        scanf("%c", &type_of_school);
        ("cls"); //clrscr();
        printf("\n\n\n In which class the child study : ");
        scanf("%d", &c);
        if (c == 11 || c == 12)
        {
            ("cls"); //clrscr();
            printf("\n\n\n Enter the stream which the child studied in school: ");
            printf("\n\n S for Science");
            printf("\n\n C for Commerce");
            printf("\n\n H for Hummanities");
            printf("\n\n");
            fflush(stdin);
            scanf("%c", &school_stream);
        }
        switch (type_of_school)
        {
        case 'i':
        case 'I':
            if (c <= 10)
                school_fee = 5000;
            else
            {
                if (school_stream == 'S' || school_stream == 's')
                    school_fee = 8000;
                else if (school_stream == 'C' ||
                         school_stream == 'c')
                    school_fee = 7000;
                else if (school_stream == 'H' ||
                         school_stream == 'h')
                    school_fee = 6000;
                books_expenses = 2000;
                tuition_fees = 24000;
                dress_fees = 2000;
                activities_fees = 2000;
            }
            break;
        case 'g':
        case 'G':
            if (c <= 10)
                school_fee = 500;
            else
            {
                if (school_stream == 'S' || school_stream == 's')
                    school_fee = 1000;
                else if (school_stream == 'C' ||
                         school_stream == 'c')
                    school_fee = 800;
                else if (school_stream == 'H' ||
                         school_stream == 'h')
                    school_fee = 600;
            }
            books_expenses = 500;
            tuition_fees = 400;
            dress_fees = 200;
            activities_fees = 100;
            break;
        case 'p':
        case 'P':
            if (c <= 10)
                school_fee = 3000;
            else
            {
                if (school_stream == 'S' || school_stream == 's')
                    school_fee = 5000;
                else if (school_stream == 'C' ||
                         school_stream == 'c')
                    school_fee = 4000;
                else if (school_stream == 'H' ||
                         school_stream == 'h')
                    school_fee = 3000;
            }
            books_expenses = 2000;
            tuition_fees = 15000;
            dress_fees = 2000;
            activities_fees = 1000;
            break;
        }
        ("cls"); //clrscr();
        printf("\n\n\n FEES PAID IN SCHOOL FOR ONE MONTH = %lf",
               school_fee);
        printf("\n\n\n FEES PAID IN TUTITIONS FOR ONE MONTH = %lf",
               tuition_fees);
        printf("\n\n\n FEES PAID FOR DRESS = %lf", dress_fees);
        printf("\n\n\n FEES PAID FOR EXTRA CURRICULAR ACTIVITIES IN SCHOOL FOR ONE MONTH = %lf", activities_fees);
        printf("\n\n\n FEES PAID FOR BOOKS = %lf",
               books_expenses);
        break;
    /* FOR GRADUATION CORSES */
    case 'g':
    case 'G':
        ("cls"); //clrscr();
        printf("\n\n\n Enter the type of course");
        printf("\n\n P for Professional");
        printf("\n\n N for Non Professtional");
        printf("\n\n\n");
        fflush(stdin);
        scanf("%c", &type_of_course);
        ("cls"); //clrscr();
        printf("\n\n\n Enter the type of university");
        printf("\n\n G for Government");
        printf("\n\n D for Deemed");
        printf("\n\n P for Private");
        printf("\n\n\n");
        fflush(stdin);
        scanf("%c", &type_of_university);
        ("cls"); //clrscr();
        printf("\n\n\n Enter the type of accomodation : ");
        printf("\n\n S for Self");
        printf("\n\n H for College Hostel");
        printf("\n\n P for Paying Guest");
        printf("\n\n\n");
        fflush(stdin);
        scanf("%c", &type_of_accomodation);
        switch (type_of_university)
        {
        case 'g':
        case 'G':
            if (type_of_course == 'p' ||
                type_of_course == 'P')
            {
                grad_fees = 25000;
                books_expenses = 5000;
                books_expenses = 5000;
            }
            else
            {
                grad_fees = 10000;
                books_expenses = 2000;
            }
            break;
        case 'd':
        case 'D':
            if (type_of_course == 'p' ||
                type_of_course == 'P')
            {
                grad_fees = 35000;
                books_expenses = 5000;
            }
            else
            {
                grad_fees = 20000;
                books_expenses = 2000;
            }
            break;
        case 'p':
        case 'P':
            if (type_of_course == 'p' ||
                type_of_course == 'P')
            {
                grad_fees = 50000;
                books_expenses = 5000;
            }
            else
            {
                grad_fees = 30000;
                books_expenses = 2000;
            }
            break;
        }
        if (type_of_accomodation == 's' || type_of_accomodation ==
                                               'S')
            accomodation_expenses = 0;
        if (type_of_accomodation == 'h' || type_of_accomodation ==
                                               'H')
            accomodation_expenses = 2000;
        if (type_of_accomodation == 'p' || type_of_accomodation ==
                                               'P')
            accomodation_expenses = 3000;
        ("cls"); //clrscr();
        printf("\n\n\n EXPENSES FOR COURSE = %lf", grad_fees);
        printf("\n\n\n EXPENSES FOR BOOKS = %lf",
               books_expenses);
        printf("\n\n\n EXPENSES FOR ACCOMODATION = %lf",
               accomodation_expenses);
        break;
    /* FOR POST GRADUATION */
    case 'p':
    case 'P':
        ("cls"); //clrscr();
        printf("\n\n\n Enter the type of course");
        printf("\n\n P for Professional");
        printf("\n\n N for Non Professtional");
        printf("\n\n\n");
        fflush(stdin);
        scanf("%c", &type_of_course);
        ("cls"); //clrscr();
        printf("\n\n\n Enter the type of university");
        printf("\n\n G for Government");
        printf("\n\n D for Deemed");
        printf("\n\n P for Private");
        printf("\n\n\n");
        fflush(stdin);
        scanf("%c", &type_of_university);
        ("cls"); //clrscr();
        printf("\n\n\n Enter the type of accomodation : ");
        printf("\n\n S for Self");
        printf("\n\n H for College Hostel");
        printf("\n\n P for Paying Guest");
        printf("\n\n\n");
        fflush(stdin);
        scanf("%c", &type_of_accomodation);
        switch (type_of_university)
        {
        case 'g':
        case 'G':
            if (type_of_course == 'p' ||
                type_of_course == 'P')
            {
                grad_fees = 35000;
                books_expenses = 5000;
                books_expenses = 5000;
            }
            else
            {
                grad_fees = 15000;
                books_expenses = 2000;
            }
            break;
        case 'd':
        case 'D':
            if (type_of_course == 'p' ||
                type_of_course == 'P')
            {
                grad_fees = 50000;
                books_expenses = 5000;
            }
            else
            {
                grad_fees = 30000;
                books_expenses = 2000;
            }
            break;
        case 'p':
        case 'P':
            if (type_of_course == 'p' ||
                type_of_course == 'P')
            {
                grad_fees = 75000;
                books_expenses = 5000;
            }
            else
            {
                grad_fees = 50000;
                books_expenses = 2000;
            }
            break;
        }
        if (type_of_accomodation == 's' || type_of_accomodation ==
                                               'S')
            accomodation_expenses = 0;
        if (type_of_accomodation == 'h' || type_of_accomodation ==
                                               'H')
            accomodation_expenses = 2000;
        if (type_of_accomodation == 'p' || type_of_accomodation ==
                                               'P')
            accomodation_expenses = 3000;
        ("cls"); //clrscr();
        printf("\n\n\n EXPENSES FOR COURSE = %lf", grad_fees);
        printf("\n\n\n EXPENSES FOR BOOKS = %lf",
               books_expenses);
        printf("\n\n\n EXPENSES FOR ACCOMODATION = %lf",
               accomodation_expenses);
        break;
    case 'r':
    case 'R':
        ("cls"); //clrscr();
        printf("\n\n\n Enter the type of university");
        printf("\n\n G for Government");
        printf("\n\n D for Deemed");
        printf("\n\n P for Private");
        printf("\n\n\n");
        fflush(stdin);
        scanf("%c", &type_of_university);
        ("cls"); //clrscr();
        printf("\n\n\n Enter the type of accomodation : ");
        printf("\n\n S for Self");
        printf("\n\n H for College Hostel");
        printf("\n\n P for Paying Guest");
        printf("\n\n\n");
        fflush(stdin);
        scanf("%c", &type_of_accomodation);
        switch (type_of_university)
        {
        case 'g':
        case 'G':
            grad_fees = 20000;
            books_expenses = 5000;
            break;
        case 'd':
        case 'D':
            grad_fees = 35000;
            books_expenses = 5000;
            break;
        case 'p':
        case 'P':
            grad_fees = 50000;
            books_expenses = 5000;
            break;
        }
        if (type_of_accomodation == 's' || type_of_accomodation ==
                                               'S')
            accomodation_expenses = 0;
        if (type_of_accomodation == 'h' || type_of_accomodation ==
                                               'H')
            accomodation_expenses = 2000;
        if (type_of_accomodation == 'p' || type_of_accomodation ==
                                               'P')
            accomodation_expenses = 3000;
        ("cls"); //clrscr();
        printf("\n\n\n EXPENSES FOR COURSE = %lf", grad_fees);
        printf("\n\n\n EXPENSES FOR BOOKS = %lf",
               books_expenses);
        printf("\n\n\n EXPENSES FOR ACCOMODATION = %lf",
               accomodation_expenses);
    }
    getch();
    return 1;
}
