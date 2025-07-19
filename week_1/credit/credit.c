#include <cs50.h>
#include <stdio.h>

int get_every_last(long n);
int get_every_other_last(long n);
int get_last_two_digits(int leg, long n, int gh);

int main(void)
{

    long n = get_long("Number: ");
    long no = n;
    int leg = 0;
    while (n > 0)
    {
        n /= 10;
        leg++;
    }

    if (leg != 15 && leg != 16 && leg != 13)
    {
        printf("INVALID\n");
    }
    else
    {
        int sum1 = get_every_last(no);
        int sum2 = get_every_other_last(no);


        int total_sum = sum2 + sum1;
        int fjk = total_sum % 10;
        if (fjk == 0)
        {
            int last_chosen_one = get_last_two_digits(leg, no, 2);
            int last_visa_chosen_one = get_last_two_digits(leg, no, 1);
            if (last_chosen_one == 34 || last_chosen_one == 37)
            {
                if (leg == 15)
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else if (last_chosen_one == 51 || last_chosen_one == 52 || last_chosen_one == 53 ||
                     last_chosen_one == 54 || last_chosen_one == 55)
            {
                if (leg == 16)
                {
                    printf("MASTERCARD\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else if (last_visa_chosen_one == 4)
            {
                if (leg == 13 || leg == 16)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
}

int get_every_last(long n)
{
    int sum = 0;
    bool alter = false;
    while (n > 0)
    {
        if (alter == true)
        {
            int d = n % 10;
            d *= 2;
            int d_but_cool = n % 10;
            int d_original = d;
            int lol = 0;
            while (d > 0)
            {
                d /= 10;
                lol++;
            }

            if (lol == 1)
            {

                sum = sum + d_but_cool * 2;
            }
            else
            {
                while (d_original > 0)
                {
                    int df = d_original % 10;
                    sum = sum + df;
                    d_original = d_original / 10;
                }
            }
        }
        alter = !alter;
        n = n / 10;
    }
    return sum;
}

int get_every_other_last(long n)
{
    int sum = 0;
    bool alter = true;
    while (n > 0)
    {
        if (alter == true)
        {
            int d = n % 10;
            sum = sum + d;
        }
        alter = !alter;
        n = n / 10;
    }
    return sum;
}

int get_last_two_digits(int leg, long n, int gh)
{
    while (leg > gh)
    {
        n = n / 10;
        leg--;
    }
    return n;
}
 
