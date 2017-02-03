#include<stdio.h>
struct student
{
    int student_id;
    int registration_id;
    float fee;
};
int main()
{
    struct student johncena;
    johncena.student_id=101;
    johncena.registration_id=1005;
    johncena.fee=10000.50;
    printf("johncena id=%d\n",johncena.student_id);
    printf("johncena registration id=%d\n",johncena.registration_id);
    printf("johncena fee=%f\n",johncena.fee);

    return ;
}
