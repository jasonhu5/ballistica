// Released under the MIT License. See LICENSE for details.

#ifndef BALLISTICA_GENERIC_RUNNABLE_H_
#define BALLISTICA_GENERIC_RUNNABLE_H_

#include <string>

#include "ballistica/core/object.h"

namespace ballistica {

class Runnable : public Object {
 public:
  virtual void Run() = 0;

  // these are used on lots of threads; we lock to whichever
  // thread first creates a reference to us.
  auto GetThreadOwnership() const -> ThreadOwnership override;
};

}  // namespace ballistica

#endif  // BALLISTICA_GENERIC_RUNNABLE_H_
