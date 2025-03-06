#include <stdio.h>
#include <conio.h>
int main()
{
    float sales, commission;
    printf("Enter The Sales Amount : ");
    scanf("%f", &sales);

    if (sales < 5000)
    {
        commission = sales * 0.05;
        printf("The Commission Is : %f", commission);
    }
    else if (sales > 5000 && sales < 10000)
    {
        commission = sales * 0.10;
        printf("The Commission Is : %f", commission);
    }
    else if (sales > 10000 && sales < 20000)
    {
        commission = sales * 0.15;
        printf("The Commission Is : %f", commission);
    }
    else if (sales > 20000)
    {
        commission = sales * 0.20;
        printf("The Commission Is : %f", commission);
    }
    else
    {
        printf("Sales Commission Invalid");
    }
    
    return 0;
}
