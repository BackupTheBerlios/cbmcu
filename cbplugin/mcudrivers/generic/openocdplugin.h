#ifndef OPENOCD_H
#define OPENOCD_H

#include <wx/file.h>
#include "mcupluginmanager.h"
#include "openocd.h"

class OpenOCDPlugin : public OpenOCDDriver
{
    public:
        OpenOCDPlugin();
        virtual ~OpenOCDPlugin();
        //int OnWriteConfigFile(wxFile &file);
        //void DevSpecDlg();
        //bool ReadConfigData();

        //wxString m_FlashBase;
        //wxString m_FlashLen;
        //wxString m_FlashVariant;

    protected:
    private:
};

#endif // OPENOCD_H
