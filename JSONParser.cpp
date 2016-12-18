//
//

#include "stdafx.h"
#include "DataTypes.h"
#include "JSONParser.h"


CJSONParser::CJSONParser()
{
	m_pDocument = nullptr;
}

CJSONParser::~CJSONParser()
{

}

bool CJSONParser::initWithFile(const std::string &strJSONFile)
{
	std::ifstream fileStream(strJSONFile);
	if (!fileStream.is_open())
		return false;

	fileStream.close();

	return true;
}

bool CJSONParser::initWithJSONData(const std::string &strJSONData)
{
	return true;
}

bool CJSONParser::isDocumentValid() const
{
	return m_pDocument->m_document.IsObject();
}

bool CJSONParser::isArray(const std::string &strName) const
{
	return m_pDocument->m_document.IsArray();
}

bool CJSONParser::isArrayEmpty(const std::string &strName) const
{
	return m_pDocument->m_document.Empty();
}

bool CJSONParser::hasMember(const std::string &strName) const
{
	return m_pDocument->m_document.HasMember(strName.c_str());
}

std::string CJSONParser::getString(const std::string &strName) const
{
	return m_pDocument->m_document.GetString();
}

uint32_t CJSONParser::getStringLength(const std::string &strName) const
{
	return m_pDocument->m_document.GetStringLength();
}