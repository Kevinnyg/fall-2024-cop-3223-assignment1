// Kevin Nguyen
// UCFID 5375555

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function declarations
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double distance);
double calculateArea(double distance);
double calculateWidth(double distance);
double calculateHeight(double distance);
void askForUserInput(double *x1, double *y1, double *x2, double *y2);  // Helper function to get input

int main(int argc, char **argv) {
    double x1, y1, x2, y2, distance;

    // Ask for user input
    askForUserInput(&x1, &y1, &x2, &y2);

    // Calculate the distance between the two points
    distance = calculateDistance(x1, y1, x2, y2);

    // Call the remaining functions using the distance
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);

    return 0;
}

// Helper function to get the coordinates from the user
void askForUserInput(double *x1, double *y1, double *x2, double *y2) {
    // Get input for point #1
    printf("Enter Point #1 (x1 and y1): ");
    scanf("%lf %lf", x1, y1);

    // Get input for point #2
    printf("Enter Point #2 (x2 and y2): ");
    scanf("%lf %lf", x2, y2);
}

// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance;

    // Calculate the distance using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print the points and the calculated distance
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;  // Return the distance for use in other functions
}

// Function to calculate the perimeter of a circle based on the distance
double calculatePerimeter(double distance) {
    // Calculate the perimeter of the circle using the formula 2 * PI * radius
    double perimeter = 2 * PI * (distance / 2);

    // Print the perimeter
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return perimeter;  // Return the perimeter
}

// Function to calculate the area of a circle based on the distance
double calculateArea(double distance) {
    // Calculate the area of the circle using the formula PI * radius^2
    double area = PI * pow((distance / 2), 2);

    // Print the area
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return area;  // Return the area
}

// Function to calculate the width of the city 
double calculateWidth(double distance) {
    // Print the width 
    printf("The width of the city encompassed by your request is %.2lf\n", distance);

    return distance;  // Return the width
}

// Function to calculate the height of the city 
double calculateHeight(double distance) {
    // Print the height 
    printf("The height of the city encompassed by your request is %.2lf\n", distance);

    return distance;  // Return the height
}
