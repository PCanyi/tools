#ifndef _ARCHITECTURE_H_
#define _ARCHITECTURE_H_

#include <string>
#include "Alias.h"
#include "FieldList.h"
#include "RegisterSet.h"

namespace Architecture {
   extern std::string name;
   void init(const char* arch);
   void replaceRegSets(FieldList& fl);
   void destroy();
}

#endif /* _ARCHITECTURE_H_ */
