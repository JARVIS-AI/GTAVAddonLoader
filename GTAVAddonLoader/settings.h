#pragma once
#include <vector>

namespace NativeMenu {
class Menu;
class MenuControls;
}

class Settings
{
public:
	Settings();
	~Settings();
	void ReadSettings();
	void SaveSettings();
	void SetFiles(const std::string &general);

	bool SpawnInside = false;
	bool SpawnByName = false;
	bool ListAllDLCs = false;
	bool MergeDLCs = false;
	bool Persistent = false;
	bool CategorizeMake = false;
	bool SpawnInplace = false;

private:
	std::string settingsGeneralFile;
	std::string settingsMenuFile;
};
