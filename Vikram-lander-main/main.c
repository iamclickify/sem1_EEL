#include <stdio.h>

int main() {
    double altitude, v_vel, h_vel, tilt, fuel;

    // Thresholds
    const double SAFE_ALTITUDE = 5.0;   // m
    const double MAX_VVEL = 2.0;        // m/s
    const double MAX_HVEL = 0.5;        // m/s
    const double MAX_TILT = 12.0;       // degrees
    const double MIN_FUEL = 5.0;        // %

    printf("=== Vikram Lander Landing Simulation ===\n");

    // Step 1: Altitude
    printf("Enter altitude (m): ");
    scanf("%lf", &altitude);
    if (altitude > SAFE_ALTITUDE) {
        printf("ABORT: Altitude too high (%.2f m).\n", altitude);
        return 0;
    }

    // Step 2: Vertical Velocity
    printf("Enter vertical velocity (m/s): ");
    scanf("%lf", &v_vel);
    if (v_vel > MAX_VVEL) {
        printf("ABORT: Vertical velocity too high (%.2f m/s).\n", v_vel);
        return 0;
    }

    // Step 3: Horizontal Velocity
    printf("Enter horizontal velocity (m/s): ");
    scanf("%lf", &h_vel);
    if (h_vel > MAX_HVEL) {
        printf("ABORT: Horizontal velocity too high (%.2f m/s).\n", h_vel);
        return 0;
    }

    // Step 4: Tilt
    printf("Enter tilt (degrees): ");
    scanf("%lf", &tilt);
    if (tilt > MAX_TILT) {
        printf("ABORT: Tilt angle too steep (%.2f degrees).\n", tilt);
        return 0;
    }

    // Step 5: Fuel
    printf("Enter fuel remaining (%%): ");
    scanf("%lf", &fuel);
    if (fuel < MIN_FUEL) {
        printf("ABORT: Insufficient fuel (%.2f%%).\n", fuel);
        return 0;
    }

    // If all safe
    printf("\nSUCCESS: All parameters nominal. Safe soft landing achieved!\n");

    return 0;
}
