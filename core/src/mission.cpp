#include "aircraft/mission.h"

#include <cmath>

namespace aircraft {

  double cruise_weight_fraction(double range_m, double tsfc, double velocity_mps, double lift_to_drag) {
    return std::exp(-range_m * tsfc / (velocity_mps * lift_to_drag));
  }

  double fuel_fraction(const std::vector<MissionSegment>& segments) {
    double mission_weight_fraction = 1.0;

    for (const auto& segment : segments) {
      mission_weight_fraction *= segment.weight_fraction;
    }

    return 1.0 - mission_weight_fraction;
  }

} // namespace aircraft
