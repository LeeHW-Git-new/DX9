#pragma once
class cMtlTex;
class cGroup;

class cObjLoader
{
public:
	cObjLoader();
	~cObjLoader();

private:
	map<string, cMtlTex*> m_mapMtlTex;
public:
	void Load(OUT vector<cGroup*> & vecGroup, IN char* szFolder, IN char* szFile);
	void LoadMtlLib(char* szFolder, char* szFile);
};

