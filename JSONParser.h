#pragma once

// Forward declarations

// Typedefs
struct SJSONDocument;


// CJSONParser class
class CJSONParser
{
public:
	CJSONParser();
	~CJSONParser();
	
	bool initWithFile(const std::string &strJSONFile);

	bool initWithJSONData(const std::string &strJSONData);

	/*
	* Name: isDocumentValid
	* Desc: Returns a boolean value indicating if this document is valid or not
	*/
	bool isDocumentValid() const;

	bool isArray(const std::string &strName) const;
	bool isArrayEmpty(const std::string &strName) const;

	// 
	bool hasMember(const std::string &strName) const;

	// Get methods
	//

	std::string getString(const std::string &strName) const;
	uint32_t getStringLength(const std::string &strName) const;

	//
	// End of get methods

protected:
	SJSONDocument *m_pDocument;
	
};