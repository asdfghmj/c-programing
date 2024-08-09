#include <stdio.h>

double calculate_stress(double modulus_of_elasticity, double beam_width, double beam_height, double load) {
    /** Calculates stress. */
    double area = beam_width * beam_height;
    return load / area;
}

double calculate_strain(double stress, double modulus_of_elasticity) {
    /** Calculates strain. */
    return stress / modulus_of_elasticity;
}

int main() {
    /** Main function to calculate stress and strain. */
    double modulus_of_elasticity = 200e9;  // Young's modulus in Pa
    double beam_width = 0.1;                // Width of the beam in meters
    double beam_height = 0.2;               // Height of the beam in meters
    double load = 1000;                     // Applied load in Newtons

    double stress = calculate_stress(modulus_of_elasticity, beam_width, beam_height, load);
    double strain = calculate_strain(stress, modulus_of_elasticity);

    printf("Stress: %.2f Pa\n", stress);
    printf("Strain: %.6f\n", strain);

    return 0;
}
