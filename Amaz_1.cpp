#include <string>
#include <iostream>
#include <utility>

/**
 * @brief Calculates the time required for the system pipeline to stabilize.
 * * The stabilization process involves iteratively removing any service
 * (represented by 'failedService') that is immediately followed by any other service.
 * Time complexity: O(N * M) overall, where N is max pipeline length, M is failedService length.
 * * @param pipeline The initial service pipeline string.
 * @param failedService The category of the failed service string.
 * @return int The time (number of steps) until the system stabilizes.
 */
int getTimeToStabilize(std::string pipeline, const std::string& failedService) {
    if (failedService.empty()) {
        return 0;
    }

    int time = 0;
    const int M = failedService.length();

    while (true) {
        std::string next_pipeline = "";
        bool services_terminated_in_step = false;

        int i = 0;
        const int N = pipeline.length();

        while (i < N) {
            // Check 1: Does the substring at 'i' match 'failedService'?
            bool is_failed_service = (i + M <= N) && 
                                     (pipeline.compare(i, M, failedService) == 0);

            if (is_failed_service) {
                // Check 2: Is it followed by another service (i + M < N)?
                if (i + M < N) {
                    // Termination condition met! Skip the 'failedService' block.
                    i += M;
                    services_terminated_in_step = true;
                    continue; 
                }
            }
            
            // If termination condition is NOT met:
            if (is_failed_service) {
                // It's a failedService at the end; it remains.
                next_pipeline.append(pipeline, i, M);
                i += M;
            } else {
                // It's a regular service; it remains.
                next_pipeline += pipeline[i];
                i++;
            }
        }

        if (!services_terminated_in_step) {
            // No changes occurred in this step.
            break;
        }

        pipeline = std::move(next_pipeline);
        time++;
    }

    return time;
}

// -----------------------------------------------------------------------------

int main() {
    // Example from the problem description:
    std::string p1 = "database";
    std::string f1 = "a";
    std::cout << "Example 1 (database, a): " << getTimeToStabilize(p1, f1) << std::endl; // Expected: 2

    // Sample Case 0 from the problem:
    std::string p2 = "acetbbbb";
    std::string f2 = "b";
    std::cout << "Example 2 (acebbbb, b): " << getTimeToStabilize(p2, f2) << std::endl; // Expected: 1

    // Custom Case for verification: No termination
    std::string p3 = "zzzzz";
    std::string f3 = "z";
    std::cout << "Example 3 (zzzzz, z): " << getTimeToStabilize(p3, f3) << std::endl; // Expected: 0
    
    // Custom Case: Multiple removals in one step
    std::string p4 = "ababa";
    std::string f4 = "a";
    // Time 1: "baba" -> "bb"
    // Time 2: "bb" -> "bb" (Stabilized)
    std::cout << "Example 4 (ababa, a): " << getTimeToStabilize(p4, f4) << std::endl; // Expected: 1

    return 0;
}