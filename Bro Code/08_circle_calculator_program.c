# include <stdio.h>
# include <math.h>

int main() {

    // Circle Calculator Program

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // const makes it unchangeable; name it all uppercase (similar to "final" in other lang.)

    printf("Enter the radius (cm): ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius,2);
    volume = (4.0/3.0) * PI * pow(radius,3); // dividing by floats so we avoid integer division

    printf("Area: %.2lf cm\n", area);
    printf("Surface Area: %.2lf cm^2\n", surfaceArea);
    printf("Volume: %.2lf cm^3\n", volume);

    return 0;
}
