#include <stdio.h>

float calculateVolumeOfCylinder(float radius, float height) {
    return 3.14 * radius * radius * height;
}

float calculateAreaOfCylinder(float radius, float height) {
    return 2 * 3.14 * radius * (radius + height);
}

int main() {
    float radius, height;
    float volume, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("Enter the height: ");
    scanf("%f", &height);

    volume = calculateVolumeOfCylinder(radius, height);
    area = calculateAreaOfCylinder(radius, height);

    printf("Volume of Cylinder is: %.3f\n", volume);
    printf("Surface area of Cylinder is: %.3f\n", area);

    return 0;
}
