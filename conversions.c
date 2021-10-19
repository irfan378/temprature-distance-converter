#include<stdio.h>

int main(){
    char choice;
    printf("Pick the type of conversion that you would like to do \n");  
    printf("T or t for temprature\n D or d for distance\n");
    printf("Enter your choice\n");
    scanf("%c",&choice);
    switch(choice){
        case 'T':{
            int tempChoice;
            printf("Enter \n 1.Farenheit to celsius \n 2.Farenheit to kelvin\n 3.Celsius to farenheit \n 4. Celsius to kelvin \n 5.Kelvin to Farenheit\n 6.Kelvin to celsius\n");
            scanf("%d",&tempChoice);
            switch(tempChoice){
                case 1:{
                    double farenheit,celsius;
                    printf("Enter temprature in farenheit\n");
                    scanf("%lf",&farenheit);
                    celsius=(farenheit-32)*5/9;
                    printf("%.2lf farenheit=%lf celsius",farenheit,celsius);
                    break;
                }
                case 2:{
                    double farenheit,kelvin;
                    printf("Enter temprature in farenheit\n");
                    scanf("%lf",&farenheit);
                    kelvin=(farenheit-32)*5/9+273.15;
                    printf("%.2lf farenheit=%lf kelvin",farenheit,kelvin);
                    break;
                }
                case 3:{
                    double farenheit,celsius;
                    printf("Enter temprature in celsius\n");
                    scanf("%lf",&celsius);
                    farenheit=(celsius*9/5)+32;
                    printf("%.2lf celsius=%lf farenheit",celsius,farenheit);
                    break;
                }
                case 4:{
                    double kelvin,celsius;
                    printf("Enter temprature in celsius\n");
                    scanf("%lf",&celsius);
                    kelvin=celsius+273.15;
                    printf("%.2lf celsius=%lf kelvin",celsius,kelvin);
                    break;
                }
                case 5:{
                    double kelvin,farenheit;
                    printf("Enter temprature in kelvin\n");
                    scanf("%lf",&kelvin);
                    farenheit=(kelvin-273.15)*9/5+32;
                    printf("%.2lf kelvin=%lf farenheit",kelvin,farenheit);
                    break;
                }
                case 6:{
                    double kelvin,celsius;
                    printf("Enter temprature in kelvin\n");
                    scanf("%lf",&kelvin);
                    celsius=kelvin-273.15;
                    printf("%.2lf kelvin=%lf celsius",kelvin,celsius);
                    break;
                }
                default:{
                    printf("Enter valid temprature choice\n");
                }
            }
            break;
        }
        case 't':{
            int tempChoice;
            printf("Enter \n 1.Farenheit to celsius \n 2.Farenheit to kelvin\n 3.Celsius to farenheit \n 4. Celsius to kelvin \n 5.Kelvin to Farenheit\n 6.Kelvin to celsius\n");
            scanf("%d",&tempChoice);
            switch(tempChoice){
                case 1:{
                    double farenheit,celsius;
                    printf("Enter temprature in farenheit\n");
                    scanf("%lf",&farenheit);
                    celsius=(farenheit-32)*5/9;
                    printf("%.2lf farenheit=%lf celsius",farenheit,celsius);
                    break;
                }
                case 2:{
                    double farenheit,kelvin;
                    printf("Enter temprature in farenheit\n");
                    scanf("%lf",&farenheit);
                    kelvin=(farenheit-32)*5/9+273.15;
                    printf("%.2lf farenheit=%lf kelvin",farenheit,kelvin);
                    break;
                }
                case 3:{
                    double farenheit,celsius;
                    printf("Enter temprature in celsius\n");
                    scanf("%lf",&celsius);
                    farenheit=(celsius*9/5)+32;
                    printf("%.2lf celsius=%lf farenheit",celsius,farenheit);
                    break;
                }
                case 4:{
                    double kelvin,celsius;
                    printf("Enter temprature in celsius\n");
                    scanf("%lf",&celsius);
                    kelvin=celsius+273.15;
                    printf("%.2lf celsius=%lf kelvin",celsius,kelvin);
                    break;
                }
                case 5:{
                    double kelvin,farenheit;
                    printf("Enter temprature in kelvin\n");
                    scanf("%lf",&kelvin);
                    farenheit=(kelvin-273.15)*9/5+32;
                    printf("%.2lf kelvin=%lf farenheit",kelvin,farenheit);
                    break;
                }
                case 6:{
                    double kelvin,celsius;
                    printf("Enter temprature in kelvin\n");
                    scanf("%lf",&kelvin);
                    celsius=kelvin-273.15;
                    printf("%.2lf kelvin=%lf celsius",kelvin,celsius);
                    break;
                }
                default:{
                    printf("Enter valid temprature choice\n");
                }
            }
            break;
        }
        case 'D':{
            int distanceChoice;
            printf("Enter \n 1.inches to feet\n 2.inches to yard\n 3. inches to miles\n 4. feets to inches\n 5. feet to yard\n 6.feet to miles\n 7.yards to inches\n 8.yards to feet\n 9.yards to miles\n 10.miles to inches\n 11.miles to feet\n 12.miles to yards\n");
            scanf("%d",&distanceChoice);
            switch(distanceChoice){
                case 1:{
                    double inches,feet;
                    printf("Enter the distance in inches\n");
                    scanf("%lf",&inches);
                    feet=inches/12;
                    printf("%.2lf inches=%lf feet\n",inches,feet);
                    break;
                }
                case 2:{
                    double inches,yards;
                    printf("Enter the distance in inches\n");
                    scanf("%lf",&inches);
                    yards=inches/36;
                    printf("%.2lf inches=%lf yards\n",inches,yards);
                    break;
                }
                case 3:{
                    double inches,miles;
                    printf("Enter the distance in inches\n");
                    scanf("%lf",&inches);
                    miles=inches/63360;
                    printf("%.2lf inches=%lf miles\n",inches,miles);
                    break;
                }
                case 4:{
                    double feet,inches;
                    printf("Enter the distance in feet\n");
                    scanf("%lf",&feet);
                    inches=feet*12;
                    printf("%.2lf feet=%lf inches\n",feet,inches);
                    break;
                }
                case 5:{
                    double feet,yards;
                    printf("Enter the distance in feet\n");
                    scanf("%lf",&feet);
                    yards=feet/3;
                    printf("%.2lf feet=%lf yards\n",feet,yards);
                    break;
                }
                case 6:{
                    double feet,miles;
                    printf("Enter the distance in feet\n");
                    scanf("%lf",&feet);
                    miles=feet/5280;
                    printf("%.2lf feet=%lf miles\n",feet,miles);
                    break;
                }
                case 7:{
                    double yards,inches;
                    printf("Enter the distance in yards\n");
                    scanf("%lf",&yards);
                    inches=yards*36;
                    printf("%.2lf yards=%lf inches\n",yards,inches);
                    break;
                }
                case 8:{
                    double yards,feet;
                    printf("Enter the distance in yards\n");
                    scanf("%lf",&yards);
                    feet=yards*3;
                    printf("%.2lf yards=%lf feet\n",yards,feet);
                    break;
                }
                case 9:{
                    double yards,miles;
                    printf("Enter the distance in yards\n");
                    scanf("%lf",&yards);
                    miles=yards/1760;
                    printf("%.2lf yards=%lf miles\n",yards,miles);
                    break;
                }
                case 10:{
                    double miles,inches;
                    printf("Enter the distance in miles\n");
                    scanf("%lf",&miles);
                    inches=miles*63360;
                    printf("%.2lf miles=%lf inches\n",miles,inches);
                    break;
                }
                case 11:{
                    double miles,feet;
                    printf("Enter the distance in miles\n");
                    scanf("%lf",&miles);
                    feet=miles*5280;
                    printf("%.2lf miles=%lf feet\n",miles,feet);
                    break;
                }
                case 12:{
                    double miles,yards;
                    printf("Enter the distance in miles\n");
                    scanf("%lf",&miles);
                    yards=miles*1760;
                    printf("%.2lf miles=%lf yards\n",miles,yards);
                    break;
                }
                default:{
                    printf("Enter valid choice\n");
                    break;
                }
                
                
            }
        case 'd':{
            int distanceChoice;
            printf("Enter \n 1.inches to feet\n 2.inches to yard\n 3. inches to miles\n 4. feets to inches\n 5. feet to yard\n 6.feet to miles\n 7.yards to inches\n 8.yards to feet\n 9.yards to miles\n 10.miles to inches\n 11.miles to feet\n 12.miles to yards\n");
            scanf("%d",&distanceChoice);
            switch(distanceChoice){
                case 1:{
                    double inches,feet;
                    printf("Enter the distance in inches\n");
                    scanf("%lf",&inches);
                    feet=inches/12;
                    printf("%.2lf inches=%lf feet\n",inches,feet);
                    break;
                }
                case 2:{
                    double inches,yards;
                    printf("Enter the distance in inches\n");
                    scanf("%lf",&inches);
                    yards=inches/36;
                    printf("%.2lf inches=%lf yards\n",inches,yards);
                    break;
                }
                case 3:{
                    double inches,miles;
                    printf("Enter the distance in inches\n");
                    scanf("%lf",&inches);
                    miles=inches/63360;
                    printf("%.2lf inches=%lf miles\n",inches,miles);
                    break;
                }
                case 4:{
                    double feet,inches;
                    printf("Enter the distance in feet\n");
                    scanf("%lf",&feet);
                    inches=feet*12;
                    printf("%.2lf feet=%lf inches\n",feet,inches);
                    break;
                }
                case 5:{
                    double feet,yards;
                    printf("Enter the distance in feet\n");
                    scanf("%lf",&feet);
                    yards=feet/3;
                    printf("%.2lf feet=%lf yards\n",feet,yards);
                    break;
                }
                case 6:{
                    double feet,miles;
                    printf("Enter the distance in feet\n");
                    scanf("%lf",&feet);
                    miles=feet/5280;
                    printf("%.2lf feet=%lf miles\n",feet,miles);
                    break;
                }
                case 7:{
                    double yards,inches;
                    printf("Enter the distance in yards\n");
                    scanf("%lf",&yards);
                    inches=yards*36;
                    printf("%.2lf yards=%lf inches\n",yards,inches);
                    break;
                }
                case 8:{
                    double yards,feet;
                    printf("Enter the distance in yards\n");
                    scanf("%lf",&yards);
                    feet=yards*3;
                    printf("%.2lf yards=%lf feet\n",yards,feet);
                    break;
                }
                case 9:{
                    double yards,miles;
                    printf("Enter the distance in yards\n");
                    scanf("%lf",&yards);
                    miles=yards/1760;
                    printf("%.2lf yards=%lf miles\n",yards,miles);
                    break;
                }
                case 10:{
                    double miles,inches;
                    printf("Enter the distance in miles\n");
                    scanf("%lf",&miles);
                    inches=miles*63360;
                    printf("%.2lf miles=%lf inches\n",miles,inches);
                    break;
                }
                case 11:{
                    double miles,feet;
                    printf("Enter the distance in miles\n");
                    scanf("%lf",&miles);
                    feet=miles*5280;
                    printf("%.2lf miles=%lf feet\n",miles,feet);
                    break;
                }
                case 12:{
                    double miles,yards;
                    printf("Enter the distance in miles\n");
                    scanf("%lf",&miles);
                    yards=miles*1760;
                    printf("%.2lf miles=%lf yards\n",miles,yards);
                    break;
                }
                default:{
                    printf("Enter valid choice\n");
                    break;
                }
                
                
            }
            break;
        }
        default:{
            printf("Enter valid choice\n");
            break;
        }
        }
             }
    return 0;
}