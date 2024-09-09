// Kevin Nguyen
// UCFID 5375555

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function
double calculateDistance();         // Function to calculate the distance between two points
double calculatePerimeter();        // Function to calculate the perimeter of a circle
double calculateArea();             // Function to calculate the area of a circle
double calculateWidth();            // Function to calculate the width of the city
double calculateHeight();           // Function to calculate the height of the city
void askForUserInput(double *x1, double *y1, double *x2, double *y2);  // Helper function to get input

int main(int argc, char **argv) {
    // Call each of the required functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

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
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    // Ask for user input using the helper function
    askForUserInput(&x1, &y1, &x2, &y2);

    // Calculate the distance using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Print the points and the calculated distance
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;  // Return the distance for use in other functions
}

// Function to calculate the perimeter of a circle based on the distance
double calculatePerimeter() {
    // Get the distance by calling the calculateDistance function
    double distance = calculateDistance();
    
    // Calculate the perimeter of the circle using the formula 2 * PI * radius
    double perimeter = 2 * PI * (distance / 2);

    // Print the perimeter
    printf("The perimeter of the city is %.2lf\n", perimeter);

    return 1.0;  // Return a difficulty rating
}

// Function to calculate the area of a circle based on the distance
double calculateArea() {
    // Get the distance by calling the calculateDistance function
    double distance = calculateDistance();
    
    // Calculate the area of the circle using the formula PI * radius^2
    double area = PI * pow((distance / 2), 2);

    // Print the area
    printf("The area of the city is %.2lf\n", area);

    // Return a difficulty rating
    return 2.0;
}

// Function to calculate the width of the city 
double calculateWidth() {
    // Get the distance by calling the calculateDistance function
    double distance = calculateDistance();
    
    // Print the width (which is the distance)
    printf("The width of the city is %.2lf\n", distance);

    // Return a difficulty rating
    return 3.0;
}

// Function to calculate the height of the city 
double calculateHeight() {
    // Get the distance by calling the calculateDistance function
    double distance = calculateDistance();
    
    // Print the height (which is the distance)
    printf("The height of the city is %.2lf\n", distance);

    // Return a difficulty rating
    return 4.0;
}
