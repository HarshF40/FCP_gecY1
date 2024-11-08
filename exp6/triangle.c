#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

double perimeter(double a, double b, double c) {
    return a + b + c;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of the first vertex (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second vertex (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the coordinates of the third vertex (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);

    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    double tri_perimeter = perimeter(a, b, c);
    double tri_area = area(a, b, c);

    printf("The perimeter of the triangle is: %.2f\n", tri_perimeter);
    printf("The area of the triangle is: %.2f\n", tri_area);

    return 0;
}
