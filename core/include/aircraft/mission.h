#pragma once

#include <vector>

namespace aircraft {

  struct MissionSegment {
    double weight_fraction;
  };

  double cruise_weight_fraction(double range_m, double tsfc, double velocity_mps, double lift_to_drag);

  double fuel_fraction(const std::vector<MissionSegment>& segments);

} // namespace aircraft
