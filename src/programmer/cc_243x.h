/*
 * cc_243x.h
 *
 * Created on: Nov 9, 2011
 *     Author: George Stark <george-u@yandex.com>
 *
 * License: GNU GPL v2
 *
 */

#ifndef _CC_243X_H_
#define _CC_243X_H_

#include "cc_unit_driver.h"

class CC_243x : public CC_UnitDriver
{
public:
	virtual void supported_units(Unit_ID_List &units);
	virtual void find_unit_info(UnitInfo &info);

	virtual bool erase_check_comleted();

	virtual void mac_address_read(size_t index, ByteVector &mac_address);
	virtual void mac_address_write(ByteVector &mac_address);

	virtual void flash_write(const DataSectionStore &sections);
	virtual void flash_read_block(size_t offset, size_t size, ByteVector &data);

	virtual bool lock_write(const ByteVector &data);

	CC_243x(USB_Device &programmer, ProgressWatcher &pw);
};

#endif // !_CC_243X_H_
