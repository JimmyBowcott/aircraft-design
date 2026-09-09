#pragma once

namespace aircraft {

  struct WeightSizingInput {
    double payload_mass_kg;
    double fuel_fraction;
    double operating_empty_weight_fraction;
  };

  struct WeightSizingResult {
    double takeoff_mass_kg;
    double fuel_mass_kg;
    double operating_empty_mass_kg;
  };

  WeightSizingResult size_weights(const WeightSizingInput& input);

} // namespace aircraft
