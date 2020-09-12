#pragma once

#include <list>
#include <string>
#include <iostream>
#include <fstream>							//to save file
#include <filesystem> //C++ 17

/*
namespace fst {

	namespace {
		//resources

	}
}
*/
namespace ocv {
	class filestream
	{
	public:
		filestream() {}
		void filename(std::string& name);
		void listFiles(const std::string& foldername);
		bool checkExtension(const std::string& filename);

		void addFolderName(const std::string& foldername);
	protected:

	private:
		std::list<std::string> extenstionList = { "BMP", "JPEG", "JPG", "PNG" };
		std::string path;			//Path of work folder
		std::string folderName;		//Name of work folder



	};
}



