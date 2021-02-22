# Coding Standards

### C++ Version:
Please ensure that you use **C++17** throughout your contributions to this project. With regards to IDE preference, for development our team will use Eclipse 2020-12 as it is currently the most stable for development.

***

### Header Files:
Almost every .cc file should have an associated .h file, with the exception of unit tests and small .cc files containing just a main() function.
Correct use of header files can help inprove the readability, size and performance the code. The following advises on how best to implement header files.

#### Self-contained Headers
All header files should be self-contained (compile on their own), they should not require specific conditions to be included, and should have header guards and include all other headers it needs. Header files should usually end in .h, with exception of .inc files used for inclusion. .inc files should only be used where a file designed to be included is not self-contained, for example it may be in an unusual location. They may not use header guards or include their prerequisites. They should see limited use however, and in all situations, a self contained header should be prioritised.

#### #Define Guards
Within all header files ensure the use of #Define guards to prevent multiple inclusives and to avoid unneceassary code recursion. Conflicts or recursive errors could result in code failing to build.

Guards should be named uniquely. The standard naming convention is `<FILENAME>_H`

#### Include What You Use
The header file should only include all the header files needed for that source and header file, where either uses a symbol defined elsewhere. Transitive inclusions, inclusions where a header is included in one file but both use sybols from eachother, should be avoided at all cost. This allows includes to be simply removed without issues being caused elsewhere.

#### Forward Declarations
Forward declarations, declaration of an entity without an associated definition, should be avoided. While they do improve compile time and reduce the need for recompliation, they are likely to cause more mistakes and use more lines than just including the header.

#### Inline Functions
Functions should not be defined inline, with exception of short, performance-critical functions. While inlining of small individul functions may cause them to generate more efficient object code, overuse may cause a overall decline in program speed as cost is increased. As a rule, functions should not be inline if they are longer than 10 lines.

#### Names and Order of Includes

***

### Scoping:

***

### Classes:

***

### Functions:

***

### Naming:

***

### Comments:

***

### Formatting:

***

### Exception Rules:

***

### Other C++ Features:
#### Boost
