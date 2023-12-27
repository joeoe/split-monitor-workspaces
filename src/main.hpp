#include <hyprland/src/helpers/Monitor.hpp>
#include <string>

const std::string& getWorkspaceFromMonitor(CMonitor* monitor, const std::string& workspace);
CMonitor* getMonitor(std::string value);
void mapWorkspacesToMonitors();

// Plugin dispatch functions
void splitGoToWorkspace(std::string workspace);
void splitMoveToWorkspace(std::string workspace);
void splitMoveToWorkspaceSilent(std::string workspace);

void splitGoToMonitor(std::string monitor);
void splitMoveToMonitor(std::string monitor);
void splitMoveToMonitorSilent(std::string monitor);
