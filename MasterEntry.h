#ifndef MASTER_ENTRY_H_
#define MASTER_ENTRY_H_

#include "BaseFunc.h"


class MasterEntry
{
public:
	virtual void AddNewMember() = 0;
	virtual void ShowMember() = 0;
	virtual void UpdateRecord() = 0;
	virtual void DeleteRecord() = 0;
	virtual void SearchRecord() = 0;
	virtual void Menu() = 0;
};
#endif // !MASTER_ENTRY_H_
