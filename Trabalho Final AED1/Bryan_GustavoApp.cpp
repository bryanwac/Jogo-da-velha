/***************************************************************
 * Name:      Bryan_GustavoApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Bryan-Gustavo (bryanwac@gmail.com)
 * Created:   2017-06-13
 * Copyright: Bryan-Gustavo ()
 * License:
 **************************************************************/

#include "Bryan_GustavoApp.h"

//(*AppHeaders
#include "Bryan_GustavoMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Bryan_GustavoApp);

bool Bryan_GustavoApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Bryan_GustavoFrame* Frame = new Bryan_GustavoFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
