// solver.h

#pragma once

#include "design_requirements.h"
#include "configuration.h"
#include "aircraft_design.h"

namespace aircraft
{
    AircraftDesign solve(
        const DesignRequirements& requirements,
        const Configuration& configuration
    );
}
