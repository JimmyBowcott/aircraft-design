// solver.h

#pragma once

#include "aircraft_design.h"
#include "configuration.h"
#include "design_requirements.h"

namespace aircraft {
  AircraftDesign solve(const DesignRequirements& requirements, const Configuration& configuration);
}
