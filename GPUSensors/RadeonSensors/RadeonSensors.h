/*
 *  Radeon.h
 *  HWSensors
 *
 *  Created by Sergey on 20.12.10.
 *  Copyright 2010 Slice. All rights reserved.
 *  Copyright 2013 kozlek. All rights reserved.
 *
 */

#include "FakeSMCPlugin.h"
#include "radeon.h"

class EXPORT RadeonMonitor : public FakeSMCPlugin
{
    OSDeclareDefaultStructors(RadeonMonitor)    
	
private:
    radeon_device       card;
    
protected:	
    virtual float       getSensorValue(FakeSMCSensor *sensor);
	
public:
    virtual bool		start(IOService *provider);
    virtual void		free(void);
};
