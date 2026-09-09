#include "aircraft/weight_sizing.h"

namespace aircraft {

  WeightSizingResult size_weights(const WeightSizingInput& input) {
    const double takeoff_mass =
        input.payload_mass_kg / (1.0 - input.fuel_fraction - input.operating_empty_weight_fraction);

    return {.takeoff_mass_kg = takeoff_mass,
            .fuel_mass_kg = takeoff_mass * input.fuel_fraction,
            .operating_empty_mass_kg = takeoff_mass * input.operating_empty_weight_fraction};
  }

} // namespace aircraft
