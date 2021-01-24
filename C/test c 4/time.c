#include <stdio.h>
#include <windows.h>

int main(void)
{
    int d,m,a;

    SYSTEMTIME Time;

    GetLocalTime(&Time);

    d=Time.wDay;
    m=Time.wMonth;
    a=Time.wYear;

    printf("%d/%d/%d\n",d,m,a);

    printf("Nous sommes le : %02d/%02d/%04d.\n",
    Time.wDay, Time.wMonth, Time.wYear);

    printf("Et il est : %02dh %02dmn %02ds %03dms.\n",
    Time.wHour, Time.wMinute, Time.wSecond, Time.wMilliseconds);

    return 0;
}
