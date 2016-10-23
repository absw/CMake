/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#ifndef cmIncludeExternalMSProjectCommand_h
#define cmIncludeExternalMSProjectCommand_h

#include <cmConfigure.h>
#include <string>
#include <vector>

#include "cmCommand.h"
#include "cmTypeMacro.h"

class cmExecutionStatus;

/** \class cmIncludeExternalMSProjectCommand
 * \brief Specify an external MS project file for inclusion in the workspace.
 *
 * cmIncludeExternalMSProjectCommand is used to specify an externally
 * generated Microsoft project file for inclusion in the default workspace
 * generated by CMake.
 */
class cmIncludeExternalMSProjectCommand : public cmCommand
{
public:
  /**
   * This is a virtual constructor for the command.
   */
  cmCommand* Clone() CM_OVERRIDE
  {
    return new cmIncludeExternalMSProjectCommand;
  }

  /**
   * This is called when the command is first encountered in
   * the CMakeLists.txt file.
   */
  bool InitialPass(std::vector<std::string> const& args,
                   cmExecutionStatus& status) CM_OVERRIDE;

  /**
   * The name of the command as specified in CMakeList.txt.
   */
  std::string GetName() const CM_OVERRIDE
  {
    return "include_external_msproject";
  }
};

#endif
