#pragma once

#include <goofit/GlobalCudaDefines.h>

#include <vector>

#ifdef GOOFIT_GPU
#include "SmartVectorGPU.h"
#else
#include "SmartVectorCPU.h"
#endif
