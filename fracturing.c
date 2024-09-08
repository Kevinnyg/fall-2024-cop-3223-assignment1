// Kevin Nguyen
// UCFID 5375555

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Functions
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    // Call each of the required functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2, distance;
    
    // Get input from user
    printf("Enter Point #1 (x1 and y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter Point #2 (x2 and y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    // Calculate the distance using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Print the result
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate the perimeter of a circle
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * (distance / 2); // Circumference formula
    
    // Print the result
    printf("The perimeter of the city is %.2lf\n", perimeter);
    return perimeter;
}

// Function to calculate the area of a circle
double calculateArea() {
    double distance = calculateDistance();
    double area = PI * pow((distance / 2), 2); // Area of a circle formula
    
    // Print the result
    printf("The area of the city is %.2lf\n", area);
    return area;
}

// Function to calculate the width of the city
double calculateWidth() {
    double distance = calculateDistance();
    
    // Print the result
    printf("The width of the city is %.2lf\n", distance);
    return distance;
}

// Function to calculate the height of the city
double calculateHeight() {
    double distance = calculateDistance();
    
    // Print the result
    printf("The height of the city is %.2lf\n", distance);
    return distance;
}
