#pragma once
#ifndef BUILDXML_CONFIG_H
#define BUILDXML_CONFIG_H
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <filesystem>
#include <fstream>
#include <cstdio>
#include <cmath>
using namespace std;
namespace fs = std::filesystem;
class BuildXML_Config {
private:
    std::string m_content; //original text
    fs::path configPath;
    bool m_isTurnOnEmissions;
    bool m_isTurnOnTripinfo;
    double m_beginTime;
    double m_endTime;
    double m_stepTime;
public:
    BuildXML_Config();
    BuildXML_Config(std::string content);
    ~BuildXML_Config();
    void extractFeature_Config();
    bool writeConfig(); //build executable xml file
};

#endif