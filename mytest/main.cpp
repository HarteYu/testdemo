#include <QtCore/QCoreApplication>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char teststr1[]="dsWarning";
    char teststr2[]="dsWarning12";
    
    if (strstr(teststr1,"dsWarning")&&(strlen(teststr1)>=strlen("dsWarning")))
    {
        printf("1 ~~~%s\n",teststr1);
    }
    else
    {
        printf("1~~~error1\n");
    }

    if (strstr(teststr2,"dsWarning")&&(strlen(teststr2)>=strlen("dsWarning")))
    {
        printf("1~~~%s\n",teststr2);
    }
    else
    {
        printf("1~~~~error2");
    }

    if (strstr(teststr2,"dsWarning")&&(strlen(teststr2)<=strlen("dsWarning")))
    {
        printf("1~~~%s\n",teststr2);
    }
    else
    {
        printf("1~~~error3\n");
    }



    if (strstr(teststr1,"dsWarning12")&&(strlen(teststr1)>=strlen("dsWarning12")))
    {
        printf("2 ~~~%s\n",teststr1);
    }
    else
    {
        printf("2 ~~~error1\n");
    }

    if (strstr(teststr2,"dsWarning12")&&(strlen(teststr2)>=strlen("dsWarning12")))
    {
        printf("2 ~~~%s\n",teststr2);
    }
    else
    {
        printf("2 ~~~~~error2");
    }

    if (strstr(teststr2,"dsWarning12")&&(strlen(teststr2)<=strlen("dsWarning12")))
    {
        printf("2 ~~~~%s\n",teststr2);
    }
    else
    {
        printf("2 ~~~~error3\n");
    }


    return a.exec();
}
