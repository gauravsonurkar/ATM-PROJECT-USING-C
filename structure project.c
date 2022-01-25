/*Manage the traival agency and want your n = 3 drivers to the input their following details 

1. name 
2. driving licence number 
3. route 
4. kms

your program shuld be able to take n = 3 as an input of your drives willl start 
inputing there  details one by one */

#include <stdio.h>
typedef struct agency
{
    char name[34];
    int drv_lic;
    char route[34];
    float km;

} driver;

int main()
{
    driver details;

    printf(" Enter the 1st driver details\n");

    printf("Enter the name of the driver = ");
    scanf("%s", &details.name);
    printf("Enter the drv_ lic number = ");
    scanf("%d", &details.drv_lic);
    printf("Enter the your route destination = ");
    scanf("%s", &details.route);
    printf("Enter the km of  destination = ");
    scanf("%f", &details.km);
    printf("\n");

    printf("Details of the first driver is : \n");
    printf("the 1st driver name  is = %s\n", details.name);
    printf("1st driver lic_number is = %d\n", details.drv_lic);
    printf("1st driver route destination is = %s\n", details.route);
    printf("1st driver km of  destination = %f\n", details.km);
    printf("\n");

    printf(" Enter the 2nd driver details\n");
    printf("Enter the name of the driver = ");
    scanf("%s", &details.name);
    printf("Enter the drv_ lic number = ");
    scanf("%d", &details.drv_lic);
    printf("Enter the your route destination = ");
    scanf("%s", &details.route);
    printf("Enter the km of  destination = ");
    scanf("%f", &details.km);
    printf("\n");

    printf("Details of the 2nd driver is : \n");
    printf("2nd driver lic_number is = %d\n", details.drv_lic);
    printf("2nd driver route destination is = %s\n", details.route);
    printf("2nd driver km of  destination = %f\n", details.km);
    printf("\n");

    printf(" Enter the 3rd driver details\n");
    printf("Enter the name of the driver = ");
    scanf("%s", &details.name);
    printf("Enter the drv_ lic number = ");
    scanf("%d", &details.drv_lic);
    printf("Enter the your route destination = ");
    scanf("%s", &details.route);
    printf("Enter the km of  destination = ");
    scanf("%f", &details.km);
    printf("\n");

    printf("Details of the 3rd driver is : \n");
    printf("the 3rd driver name  is = %s\n", details.name);
    printf("3rd driver lic_number is = %d\n", details.drv_lic);
    printf("3rd driver route destination is = %s\n", details.route);
    printf("3rd driver km of  destination = %f\n", details.km);
    printf("\n");

    return 0;
}
