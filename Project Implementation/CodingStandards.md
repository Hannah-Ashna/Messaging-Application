# Coding Standards
https://google.github.io/styleguide/cppguide.html#Self_contained_Headers
### C++ Version:
Please ensure that you use **C++17** throughout your contributions to this project. With regards to IDE preference, for development our team will use Eclipse 2020-12 as it is currently the most stable for development.

***

### Header Files:
Almost every .cc file should have an associated .h file, with the exception of unit tests and small .cc files containing just a main() function.
Correct use of header files can help inprove the readability, size and performance the code. The following advises on how best to implement header files.

#### Self-contained Headers:
All header files should be self-contained (compile on their own), they should not require specific conditions to be included, and should have header guards and include all other headers it needs. Header files should usually end in .h, with exception of .inc files used for inclusion. .inc files should only be used where a file designed to be included is not self-contained, for example it may be in an unusual location. They may not use header guards or include their prerequisites. They should see limited use however, and in all situations, a self contained header should be prioritised.

#### #Define Guards:
Within all header files ensure the use of #Define guards to prevent multiple inclusives and to avoid unneceassary code recursion. Conflicts or recursive errors could result in code failing to build.

Guards should be named uniquely. The standard naming convention is `<FILENAME>_H`

#### Include What You Use:
The header file should only include all the header files needed for that source and header file, where either uses a symbol defined elsewhere. Transitive inclusions, inclusions where a header is included in one file but both use sybols from eachother, should be avoided at all cost. This allows includes to be simply removed without issues being caused elsewhere.

#### Forward Declarations:
Forward declarations, declaration of an entity without an associated definition, should be avoided. While they do improve compile time and reduce the need for recompliation, they are likely to cause more mistakes and use more lines than just including the header.

#### Inline Functions:
Functions should not be defined inline, with exception of short, performance-critical functions. While inlining of small individul functions may cause them to generate more efficient object code, overuse may cause a overall decline in program speed as cost is increased. As a rule, functions should not be inline if they are longer than 10 lines.

#### Names and Order of Includes:
To ensure that missing includes are caught early, include headers should be grouped in the following order: 
- The Related header e.g. `#include "main.h"`
- The C system headers e.g. `#include <stddef.h>`
- The C++ standard library headers e.g. `#include <string>`
- The other libraries' headers e.g. `#include "basictypes.h"` 
- The project's headers e.g. `#include "other.h"`

Each group should be seperated by one blank line. The exception to this rule is system-specific code which needs conditional includes, these may be put after other includes. System-specific should be small and localized.

***

### Scoping:

#### Namespaces:

#### Internal Linkage:

#### Nonmember, Static Member and Global Functions:

#### Local Variables:
A function variable should be in the narrowest scope possible. Variables should be declared as close as possible to the use. Initialization should be used rather than separate declaration and assignment. If variables are needed in an condition statement such as an if statement they should be within that statement it may be appropriate to do this just above the constructor.
#### Static and Global Variables:

#### thread_local Variables:

***

### Classes:

***

### Functions:
#### Short Functions
Functions will always be short and focused keeping code short helps isolate bugs and testing. You should always look to break up large functions into smaller ones unless it adds unneeded complexity.
#### Inputs/Outputs
We should always use return values when possible where you should aim to return a value. When haveing non-optional parameters they should be constant refrences or values.
#### Style
You should use cpplint to detect style errors, it is preinstalled on QT creator but can be run seprately if needed.
***

### Naming:

***

### Comments:
Comments improve readability and makes code more accessable to team members and future developers, improving maintainability aswell. While commenting is important, good code should be readable without comments; variables and types with good naming shouldn't need a comment to explain them.

#### Comment Style:
Commenting style should be consistent. Comments are to done using the Qt style provided by Doxygen, as seen below:

`/*! \brief Brief Description
Brief Description continued

Detailed description starts here
more detailed description
*/`

By using Doxygen, the documentation process can be automated, by developing a Doxyfile.

***

### Formatting:

***

### Exception Rules:

***

### Other C++ Features:
#### Boost
