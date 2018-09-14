//autor: Bruno Portilla Hinojosa
// en este programa calcularemos el imc on los datos dados por el usuario.
#include <stdio.h>
#include <math.h>

int BMIcalcms(double weight, double height) {
    double ibmms = ( weight / (height * height) );
    return ibmms;

}

int BMIcalciu(double weight2, double height2) {
    double kg = ( weight2 / 2.2 );
    double mts = ( height2 / 3.28 );
    double ibmiu = ( kg / (mts * mts) );
    return ibmiu;

}


int main()
{
    double massms;
    double massiu;
    double heightms;
    double heightiu;
    double ibm;
    int select;

    printf("Please Select:\n 1.-Metric System\n 2.-Imperial Units\n");
    scanf("%i", &select);

    switch (select) {
        case 1:
            printf("please intro duce your weight and height. in this form only. (kg and m)\n");
            scanf("%d and %d", &massms, &heightms);
            ibm = BMIcalcms(massms, heightms);
            printf("your BMI is: %d", &ibm);

            break;


        case 2:
            printf("please intro duce your weight and height. in this form only. (pounds and ft)\n");
            scanf("%d and %d", &massiu, &heightiu);
            ibm = BMIcalciu(massiu, heightiu);
            printf("your BMI is: %d", &ibm);

            break;


        default:
            printf("enter a valid number");
            return 0;

    }

    return 0;

}
