

#ifndef ttcrtypedefs_h
#define ttcrtypedefs_h

#include "ttcr_t.h"
#include "Cell.h"

namespace ttcr {

typedef Node2Dcsp<double, uint32_t> node2d;
typedef Cell<double, node2d, sxz<double>> cell2d;

}

#endif