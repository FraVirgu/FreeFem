/* clang-format off */
//ff-c++-LIBRARY-dep:
//ff-c++-cpp-dep:
/* clang-format on */

#include "ff++.hpp"
#include "AFunction_ext.hpp"

long validCenter(long const &i, KN< double > *const &pRx, KN< double > *const &pRy, KN< long > *const &pkeep, double const &minDistance) {
  double ddist;
  KN< double > &Rx = *pRx;
  KN< double > &Ry = *pRy;
  KN< long > &keep = *pkeep;
  for (int j = 0; j < i; ++j) {
    ddist = sqrt((Rx[i]-Rx[j])*(Rx[i]-Rx[j]) + (Ry[i]-Ry[j])*(Ry[i]-Ry[j]));
    if (ddist < minDistance) {
      keep[i] = 0;
      break;
    }
  }
  return 0;
}

static void Load_Init( ) {
  Global.Add("validCenter", "(",
             new OneOperator5_< long, long, KN< double > *, KN< double > *, KN< long > *, double >(validCenter));
}

LOADFUNC(Load_Init)
