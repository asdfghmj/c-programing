#include <stdio.h>
#include <math.h>

double calculate_stress(double load, double area) {
    /** Calculates stress. */
    return load / area;
}

double calculate_strain(double stress, double modulus_of_elasticity) {
    /** Calculates strain. */
    return stress / modulus_of_elasticity;
}

double calculate_area(const char* cross_section_type, double* dimensions) {
    /** Calculates area based on cross-section type. */
    if (strcmp(cross_section_type, "rectangle") == 0) {
        double width = dimensions[0];
        double height = dimensions[1];
        return width * height;
    } else if (strcmp(cross_section_type, "circle") == 0) {
        double radius = dimensions[0];
        return M_PI * radius * radius; // Use M_PI from math.h for π
    } else {
        printf("Invalid cross-section type.\n");
        return -1; // Indicate an error
    }
}

int main() {
    /** Calculate stress and strain function to calculate stress and strain. */
    double modulus_of_elasticity, load;
    char cross_section_type[20];
    double dimensions[2]; // To hold width/height or radius

    printf("Enter modulus of elasticity (Pa): ");
    scanf("%lf", &modulus_of_elasticity);
    
    printf("Enter applied load (N): ");
    scanf("%lf", &load);
    
    printf("Enter cross-section type (rectangle or circle): ");
    scanf("%s", cross_section_type);

    if (strcmp(cross_section_type, "rectangle") == 0) {
        printf("Enter width (m): ");
        scanf("%lf", &dimensions[0]);
        printf("Enter height (m): ");
        scanf("%lf", &dimensions[1]);
    } else if (strcmp(cross_section_type, "circle") == 0) {
        printf("Enter radius (m): ");
        scanf("%lf", &dimensions[0]);
    } else {
        printf("Invalid cross-section type.\n");
        return 1; // Exit with error
    }

    double area = calculate_area(cross_section_type, dimensions);
    if (area < 0) {
        return 1; // Exit due to error in area calculation
    }

    double stress = calculate_stress(load, area);
    double strain = calculate_strain(stress, modulus_of_elasticity);

    printf("Stress: %.2f Pa\n", stress);
    printf("Strain: %.6f\n", strain);

    return 0;
}
