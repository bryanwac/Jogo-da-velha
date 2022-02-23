/***************************************************************
 * Name:      Bryan_GustavoMain.h
 * Purpose:   Defines Application Frame
 * Author:    Bryan-Gustavo (bryanwac@gmail.com)
 * Created:   2017-06-13
 * Copyright: Bryan-Gustavo ()
 * License:
 **************************************************************/

#ifndef BRYAN_GUSTAVOMAIN_H
#define BRYAN_GUSTAVOMAIN_H

//(*Headers(Bryan_GustavoFrame)
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class Bryan_GustavoFrame: public wxFrame
{
    public:
        Bryan_GustavoFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Bryan_GustavoFrame();
        void vencer(wxString);
        bool checar();
        void pc_joga();
        void preencher(int, bool);
        void reset();


    private:

        //(*Handlers(Bryan_GustavoFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void Onbtn1Click(wxCommandEvent& event);
        void Onbtn1Click1(wxCommandEvent& event);
        void Onbtn1Click2(wxCommandEvent& event);
        void Onbtn2Click(wxCommandEvent& event);
        void Onbtn3Click(wxCommandEvent& event);
        void Onbtn4Click(wxCommandEvent& event);
        void Onbtn5Click(wxCommandEvent& event);
        void Onbtn6Click(wxCommandEvent& event);
        void Onbtn7Click(wxCommandEvent& event);
        void Onbtn8Click(wxCommandEvent& event);
        void Onbtn9Click(wxCommandEvent& event);
        void OnMenuItem3Selected(wxCommandEvent& event);
        //*)

        //(*Identifiers(Bryan_GustavoFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON9;
        static const long ID_BUTTON8;
        static const long mnReset;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Bryan_GustavoFrame)
        wxButton* btn6;
        wxButton* btn5;
        wxStatusBar* StatusBar1;
        wxButton* btn8;
        wxButton* btn2;
        wxButton* btn3;
        wxMenuItem* MenuItem3;
        wxButton* btn1;
        wxButton* btn9;
        wxButton* btn7;
        wxButton* btn4;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BRYAN_GUSTAVOMAIN_H
