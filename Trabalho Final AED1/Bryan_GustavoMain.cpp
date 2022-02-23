/***************************************************************
 * Name:      Bryan-GustavoMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Bryan-Gustavo (bryanwac@gmail.com/gustavo-henrique-cunha@outlook.com)
 * Created:   2017-06-13
 * Copyright: Bryan-Gustavo ()
 * License:
 **************************************************************/
 //BryanWilliam Alvarenga Correa R.A=0036704-Gustavo Henrique da Cunha R.A=0034797

#include "Bryan_GustavoMain.h"
#include <wx/msgdlg.h>
#include<time.h>

//(*InternalHeaders(Bryan_GustavoFrame)
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/intl.h>
#include <wx/font.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Bryan_GustavoFrame)
const long Bryan_GustavoFrame::ID_BUTTON1 = wxNewId();
const long Bryan_GustavoFrame::ID_BUTTON2 = wxNewId();
const long Bryan_GustavoFrame::ID_BUTTON3 = wxNewId();
const long Bryan_GustavoFrame::ID_BUTTON4 = wxNewId();
const long Bryan_GustavoFrame::ID_BUTTON5 = wxNewId();
const long Bryan_GustavoFrame::ID_BUTTON6 = wxNewId();
const long Bryan_GustavoFrame::ID_BUTTON7 = wxNewId();
const long Bryan_GustavoFrame::ID_BUTTON9 = wxNewId();
const long Bryan_GustavoFrame::ID_BUTTON8 = wxNewId();
const long Bryan_GustavoFrame::mnReset = wxNewId();
const long Bryan_GustavoFrame::ID_MENUITEM1 = wxNewId();
const long Bryan_GustavoFrame::idMenuAbout = wxNewId();
const long Bryan_GustavoFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Bryan_GustavoFrame,wxFrame)
    //(*EventTable(Bryan_GustavoFrame)
    //*)
END_EVENT_TABLE()

Bryan_GustavoFrame::Bryan_GustavoFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Bryan_GustavoFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer3;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, _("Jogo da Velha"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    btn1 = new wxButton(this, ID_BUTTON1, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    btn1->SetDefault();
    btn1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn1Font(40,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Saab"),wxFONTENCODING_DEFAULT);
    btn1->SetFont(btn1Font);
    BoxSizer2->Add(btn1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btn2 = new wxButton(this, ID_BUTTON2, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    btn2->SetFocus();
    btn2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn2Font(40,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    btn2->SetFont(btn2Font);
    BoxSizer2->Add(btn2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btn3 = new wxButton(this, ID_BUTTON3, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    btn3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn3Font(40,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    btn3->SetFont(btn3Font);
    BoxSizer2->Add(btn3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    btn4 = new wxButton(this, ID_BUTTON4, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    btn4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn4Font(40,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    btn4->SetFont(btn4Font);
    BoxSizer3->Add(btn4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btn5 = new wxButton(this, ID_BUTTON5, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    btn5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn5Font(40,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    btn5->SetFont(btn5Font);
    BoxSizer3->Add(btn5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btn6 = new wxButton(this, ID_BUTTON6, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    btn6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn6Font(40,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    btn6->SetFont(btn6Font);
    BoxSizer3->Add(btn6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    btn7 = new wxButton(this, ID_BUTTON7, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    btn7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn7Font(40,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    btn7->SetFont(btn7Font);
    BoxSizer4->Add(btn7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btn8 = new wxButton(this, ID_BUTTON9, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    btn8->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn8Font(40,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    btn8->SetFont(btn8Font);
    BoxSizer4->Add(btn8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btn9 = new wxButton(this, ID_BUTTON8, wxEmptyString, wxDefaultPosition, wxSize(85,85), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    btn9->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HOTLIGHT));
    wxFont btn9Font(40,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Sans"),wxFONTENCODING_DEFAULT);
    btn9->SetFont(btn9Font);
    BoxSizer4->Add(btn9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu1, mnReset, _("&Reiniciar\tAlt + R"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("&Fechar\tAlt-F4"), _("Fecha a aplicação"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("Sobre\tF1"), _("Criado por:Bryan e Gustavo"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn1Click2);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn4Click);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn6Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn7Click);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn8Click);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Bryan_GustavoFrame::Onbtn9Click);
    Connect(mnReset,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Bryan_GustavoFrame::OnMenuItem3Selected);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Bryan_GustavoFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&Bryan_GustavoFrame::OnAbout);
    //*)
    srand((unsigned)(time(0)));
    reset();
}

Bryan_GustavoFrame::~Bryan_GustavoFrame()
{
    //(*Destroy(Bryan_GustavoFrame)
    //*)
}

void Bryan_GustavoFrame::OnQuit(wxCommandEvent& event) //Responde ao comando de Fechar o jogo
{
    Close();
}

void Bryan_GustavoFrame::OnAbout(wxCommandEvent& event) //Conteudo do Botao About
{
    wxString msg = _("Criado por: Bryan William e Gustavo Henrique.\n Trabalho da Disciplina: AED1");
    wxMessageBox(msg, _("Jogo da Velha"));
}

void Bryan_GustavoFrame::reset(){
    btn1->SetLabel(_(" "));                       //Labels definidas como " "
    btn2->SetLabel(_(" "));
    btn3->SetLabel(_(" "));
    btn4->SetLabel(_(" "));
    btn5->SetLabel(_(" "));
    btn6->SetLabel(_(" "));
    btn7->SetLabel(_(" "));
    btn8->SetLabel(_(" "));
    btn9->SetLabel(_(" "));
}

void Bryan_GustavoFrame::vencer(wxString ganhador){
    int resposta;
    if(ganhador == _("X")){
            resposta = wxMessageBox(_("Parabens!\nVoce ganhou!\nDeseja tentar novamente?"), _("Parabens!"), wxYES_NO);  //No primeiro if verifica se o usuario ganhou a partida
    }else if(ganhador == _("O")){
            resposta = wxMessageBox(_("Voce perdeu!\nDeseja tentar novamente?"), _("Que pena!"), wxYES_NO);             //No segundo if verifica se o usuario perdeu
    }else if(ganhador == _("E")){
            resposta = wxMessageBox(_("Deu Velha!\nDeseja tentar novamente?"), _("Empate!"), wxYES_NO);                 //No terceiro if verifica se deu empate
    }
    if(resposta == wxNO){        //Neste if analisa-se a resposta do jogador, caso seja No, Fecha o jogo
        Close();
    }else{
        reset();                 //Neste else, caso a resposta nao tenha sido "No" Reseta o tabuleiro
    }
}

bool Bryan_GustavoFrame::checar(){
    if(btn1->GetLabel() == btn5->GetLabel() && btn5->GetLabel() == btn9->GetLabel() && btn9->GetLabel() != _(' ')){                 //Diagonal
      vencer(btn9->GetLabel());
    }else if(btn7->GetLabel() == btn5->GetLabel() && btn5->GetLabel() == btn3->GetLabel() && btn3->GetLabel() != _(' ')){           //Diagoal Inversa
      vencer(btn3->GetLabel());
    }else if(btn1->GetLabel() == btn4->GetLabel() && btn4->GetLabel() == btn7->GetLabel() && btn7->GetLabel() != _(' ')){           //}
      vencer(btn7->GetLabel());
    }else if(btn2->GetLabel() == btn5->GetLabel() && btn5->GetLabel() == btn8->GetLabel() && btn8->GetLabel() != _(' ')){           //}vertical
      vencer(btn8->GetLabel());
    }else if(btn3->GetLabel() == btn6->GetLabel() && btn6->GetLabel() == btn9->GetLabel() && btn9->GetLabel() != _(' ')){           //}
      vencer(btn9->GetLabel());
    }else if(btn1->GetLabel() == btn2->GetLabel() && btn2->GetLabel() == btn3->GetLabel() && btn3->GetLabel() != _(' ')){           //
      vencer(btn3->GetLabel());
    }else if(btn4->GetLabel() == btn5->GetLabel() && btn5->GetLabel() == btn6->GetLabel() && btn6->GetLabel() != _(' ')){           //horizontal
      vencer(btn6->GetLabel());
    }else if(btn7->GetLabel() == btn8->GetLabel() && btn8->GetLabel() == btn9->GetLabel() && btn9->GetLabel() != _(' ')){           //
      vencer(btn9->GetLabel());
    }else if(btn1->GetLabel() != _(' ') && btn2->GetLabel() != _(' ') && btn3->GetLabel() != _(' ') && btn4->GetLabel() != _('0')   //}
    && btn5->GetLabel() != _(' ') && btn6->GetLabel() != _(' ') && btn7->GetLabel() != _(' ') && btn8->GetLabel() != _(' ')         //}empate
    && btn9->GetLabel() != _(' ')){                                                                                                 //}
      vencer(_("E"));
    }else{
      return false;
    }
    return true;
}

void Bryan_GustavoFrame::pc_joga(){   //Comando que gera numero Random para a jogada do computador
    int jogada = rand() % 9 + 1;
    preencher(jogada, false);
}

void Bryan_GustavoFrame::preencher(int posicao, bool jogador){
    char simbolo;
    int jogado = 0;
    wxString erro = "Quadrado marcado\nSelecione uma casa vazia!";   //Caso o quadrado selecionado pelo usuario esteja preenchido, A mensagem "Quadrado marcado\nTente Novamente" e exibida em tela
    if(jogador){
        simbolo = 'X'; //Define o caractere usado pelo usuario
    }else{
        simbolo = 'O'; //Define o caractere usado pelo computador
    }
    switch(posicao){
    case 1:
        if(btn1->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn1->SetLabel(simbolo);
            jogado = 1;
        }else if(btn1->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn1->SetLabel(simbolo);
        }else if(btn1->GetLabel() != ' ' && jogador){     // caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn1->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
          pc_joga();
        }
        break;
    case 2:
        if(btn2->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn2->SetLabel(simbolo);
            jogado = 1;
        }else if(btn2->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn2->SetLabel(simbolo);
        }else if(btn2->GetLabel() != ' ' && jogador){     //Caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn2->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
          pc_joga();
        }
        break;
    case 3:
        if(btn3->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn3->SetLabel(simbolo);
            jogado = 1;
        }else if(btn3->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn3->SetLabel(simbolo);
        }else if(btn3->GetLabel() != ' ' && jogador){     //Caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn3->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
          pc_joga();
        }
        break;
    case 4:
        if(btn4->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn4->SetLabel(simbolo);
            jogado = 1;
        }else if(btn4->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn4->SetLabel(simbolo);
        }else if(btn4->GetLabel() != ' ' && jogador){     //Caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn4->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
          pc_joga();
        }
        break;
    case 5:
        if(btn5->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn5->SetLabel(simbolo);
            jogado = 1;
        }else if(btn5->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn5->SetLabel(simbolo);
        }else if(btn5->GetLabel() != ' ' && jogador){     //Caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn5->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
          pc_joga();
        }
        break;
    case 6:
        if(btn6->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn6->SetLabel(simbolo);
            jogado = 1;
        }else if(btn6->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn6->SetLabel(simbolo);
        }else if(btn6->GetLabel() != ' ' && jogador){     //Caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn6->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
          pc_joga();
        }
        break;
    case 7:
        if(btn7->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn7->SetLabel(simbolo);
            jogado = 1;
        }else if(btn7->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn7->SetLabel(simbolo);
        }else if(btn7->GetLabel() != ' ' && jogador){     //Caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn7->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
          pc_joga();
        }
        break;
    case 8:
        if(btn8->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn8->SetLabel(simbolo);
            jogado = 1;
        }else if(btn8->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn8->SetLabel(simbolo);
        }else if(btn8->GetLabel() != ' ' && jogador){     //Caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn8->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
          pc_joga();
        }
        break;
    case 9:
        if(btn9->GetLabel() == ' ' && jogador){           //Responde ao click, Verifica se o Label esta vazio e verifica Se é o Usuario jogando, e caso seja, marca o caractere do jogador
            btn9->SetLabel(simbolo);
            jogado = 1;
        }else if(btn9->GetLabel() == ' ' && !jogador){    //Caso seja a vez do computador, marca o label com simbolo do computador
            btn9->SetLabel(simbolo);
        }else if(btn9->GetLabel() != ' ' && jogador){     //Caso ja esteja marcado pelo jogador, responde ao click com mensagem de Erro
            wxMessageBox(_(erro), _("Erro"));
        }else if(btn9->GetLabel() != ' ' && !jogador){    //Manda o computador jogar novamente caso o quadrado ja esteja marcado
          pc_joga();
        }
        break;

    }
    if(jogado == 1){    //caso o jogador tenha jogado e nao tenha ganho o jogo, passa a vez para o computador
        if(!checar()){
            pc_joga();
        }
    }else{
        checar();
    }


}

void Bryan_GustavoFrame::Onbtn1Click2(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 1
{
    preencher(1, true);
}


void Bryan_GustavoFrame::Onbtn2Click(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 2
{
    preencher(2, true);
}

void Bryan_GustavoFrame::Onbtn3Click(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 3
{
    preencher(3, true);
}

void Bryan_GustavoFrame::Onbtn4Click(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 4
{
    preencher(4, true);
}

void Bryan_GustavoFrame::Onbtn5Click(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 5
{
    preencher(5, true);
}

void Bryan_GustavoFrame::Onbtn6Click(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 6
{
    preencher(6, true);
}


void Bryan_GustavoFrame::Onbtn7Click(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 7
{
    preencher(7, true);
}

void Bryan_GustavoFrame::Onbtn8Click(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 8
{
    preencher(8, true);
}

void Bryan_GustavoFrame::Onbtn9Click(wxCommandEvent& event)//Responde ao click preenchendo o label do botao 9
{
    preencher(9, true);
}

void Bryan_GustavoFrame::OnMenuItem3Selected(wxCommandEvent& event)
{
    reset();
}
