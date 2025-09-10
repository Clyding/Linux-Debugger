#include <vector>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <sys/personality.h>
#include <unistd.h>
#include <ssteam.h>
#include <fstream>
#include <iostream>
#include <iomanip>

#include <sys/types.h>
#include <sys/stats.h>
#include <fcntl.h>

#include "linenoise.h"
#include "debugger.hpp"
#include "registers.hpp"

using namespace debugger