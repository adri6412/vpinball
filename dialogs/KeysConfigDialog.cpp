#include "stdafx.h"
#include "resource.h"
#include "KeysConfigDialog.h"

const char rgszKeyName[][10] = {
    "",
    "Escape", //DIK_ESCAPE          0x01
    "1", //DIK_1               0x02
    "2", //DIK_2               0x03
    "3", //DIK_3               0x04
    "4", //DIK_4               0x05
    "5", //DIK_5               0x06
    "6", //DIK_6               0x07
    "7", //DIK_7               0x08
    "8", //DIK_8               0x09
    "9", //DIK_9               0x0A
    "0", //DIK_0               0x0B
    "-", //DIK_MINUS           0x0C    /* - on main keyboard */
    "=", //DIK_EQUALS          0x0D
    "Backspace", //DIK_BACK            0x0E    /* backspace */
    "Tab", //DIK_TAB             0x0F
    "Q", //DIK_Q               0x10
    "W", //DIK_W               0x11
    "E", //DIK_E               0x12
    "R", //DIK_R               0x13
    "T", //DIK_T               0x14
    "Y", //DIK_Y               0x15
    "U", //DIK_U               0x16
    "I", //DIK_I               0x17
    "O", //DIK_O               0x18
    "P", //DIK_P               0x19
    "[", //DIK_LBRACKET        0x1A
    "]", //DIK_RBRACKET        0x1B
    "Enter", //DIK_RETURN          0x1C    /* Enter on main keyboard */
    "L Ctrl", //DIK_LCONTROL        0x1D
    "A", //DIK_A               0x1E
    "S", //DIK_S               0x1F
    "D", //DIK_D               0x20
    "F", //DIK_F               0x21
    "G", //DIK_G               0x22
    "H", //DIK_H               0x23
    "J", //DIK_J               0x24
    "K", //DIK_K               0x25
    "L", //DIK_L               0x26
    ";", //DIK_SEMICOLON       0x27
    "'", //DIK_APOSTROPHE      0x28
    "`", //DIK_GRAVE           0x29    /* accent grave */
    "L Shift", //DIK_LSHIFT          0x2A
    "\\", //DIK_BACKSLASH       0x2B
    "Z", //DIK_Z               0x2C
    "X", //DIK_X               0x2D
    "C", //DIK_C               0x2E
    "V", //DIK_V               0x2F
    "B", //DIK_B               0x30
    "N", //DIK_N               0x31
    "M", //DIK_M               0x32
    ",", //DIK_COMMA           0x33
    ".", //DIK_PERIOD          0x34    /* . on main keyboard */
    "/", //DIK_SLASH           0x35    /* / on main keyboard */
    "R Shift", //DIK_RSHIFT          0x36
    "*", //DIK_MULTIPLY        0x37    /* * on numeric keypad */
    "Menu", //DIK_LMENU           0x38    /* left Alt */
    "Space", //DIK_SPACE           0x39
    "Caps Lock", //DIK_CAPITAL         0x3A
    "F1", //DIK_F1              0x3B
    "F2", //DIK_F2              0x3C
    "F3", //DIK_F3              0x3D
    "F4", //DIK_F4              0x3E
    "F5", //DIK_F5              0x3F
    "F6", //DIK_F6              0x40
    "F7", //DIK_F7              0x41
    "F8", //DIK_F8              0x42
    "F9", //DIK_F9              0x43
    "F10", //DIK_F10             0x44
    "NumLock", //DIK_NUMLOCK         0x45
    "ScrollLck", //DIK_SCROLL          0x46    /* Scroll Lock */
    "Numpad 7", //DIK_NUMPAD7         0x47
    "Numpad 8", //DIK_NUMPAD8         0x48
    "Numpad 9", //DIK_NUMPAD9         0x49
    "-", //DIK_SUBTRACT        0x4A    /* - on numeric keypad */
    "Numpad 4", //DIK_NUMPAD4         0x4B
    "Numpad 5", //DIK_NUMPAD5         0x4C
    "Numpad 6", //DIK_NUMPAD6         0x4D
    "+", //DIK_ADD             0x4E    /* + on numeric keypad */
    "Numpad 1", //DIK_NUMPAD1         0x4F
    "Numpad 2", //DIK_NUMPAD2         0x50
    "Numpad 3", //DIK_NUMPAD3         0x51
    "Numpad 0", //DIK_NUMPAD0         0x52
    "Numpad .", //DIK_DECIMAL         0x53    /* . on numeric keypad */
    "", //0x54
    "", //0x55
    "<>|", //DIK_OEM_102         0x56    /* < > | on UK/Germany keyboards */
    "F11", //DIK_F11             0x57
    "F12", //DIK_F12             0x58
    "", //0x59
    "", //0x5A
    "", //0x5B
    "", //0x5C
    "", //0x5D
    "", //0x5E
    "", //0x5F
    "", //0x60
    "", //0x61
    "", //0x62
    "", //0x63
    "F13", //DIK_F13             0x64    /*                     (NEC PC98) */
    "F14", //DIK_F14             0x65    /*                     (NEC PC98) */
    "F15", //DIK_F15             0x66    /*                     (NEC PC98) */
    "", //0x67
    "", //0x68
    "", //0x69
    "", //0x6A
    "", //0x6B
    "", //0x6C
    "", //0x6D
    "", //0x6E
    "", //0x6F

    "", //0x70
    "", //0x71
    "", //0x72
    "", //0x73
    "", //0x74
    "", //0x75
    "", //0x76
    "", //0x77
    "", //0x78
    "", //0x79
    "", //0x7A
    "", //0x7B
    "", //0x7C
    "", //0x7D
    "", //0x7E
    "", //0x7F

    "", //0x80
    "", //0x81
    "", //0x82
    "", //0x83
    "", //0x84
    "", //0x85
    "", //0x86
    "", //0x87
    "", //0x88
    "", //0x89
    "", //0x8A
    "", //0x8B
    "", //0x8C
    "", //0x8D
    "", //0x8E
    "", //0x8F

    "", //0x90
    "", //0x91
    "", //0x92
    "", //0x93
    "", //0x94
    "", //0x95
    "", //0x96
    "", //0x97
    "", //0x98
    "", //0x99
    "", //0x9A
    "", //0x9B

    "Num Enter",	//#define DIK_NUMPADENTER     0x9C    /* Enter on numeric keypad */
    "R Ctrl",		//DIK_RCONTROL        0x9D

    "", //0x9E
    "", //0x9F

    "", //0xA0
    "", //0xA1
    "", //0xA2
    "", //0xA3
    "", //0xA4
    "", //0xA5
    "", //0xA6
    "", //0xA7
    "", //0xA8
    "", //0xA9
    "", //0xAA
    "", //0xAB
    "", //0xAC
    "", //0xAD
    "", //0xAE
    "", //0xAF

    "", //0xB0
    "", //0xB1
    "", //0xB2
    "", //0xB3
    "", //0xB4

    "Numpad /", //#define DIK_DIVIDE          0xB5    /* / on numeric keypad */
    "", //0xB6
    "", //#define DIK_SYSRQ           0xB7
    "R Alt", //DIK_RMENU           0xB8    /* right Alt */

    "", //0xB9
    "", //0xBA
    "", //0xBB
    "", //0xBC
    "", //0xBD
    "", //0xBE
    "", //0xBF

    "", //0xC0
    "", //0xC1
    "", //0xC2
    "", //0xC3
    "", //0xC4
    "", //0xC5
    "", //0xC6

    "Home", //DIK_HOME            0xC7    /* Home on arrow keypad */
    "Up", //DIK_UP              0xC8    /* UpArrow on arrow keypad */
    "Page Up", //DIK_PRIOR           0xC9    /* PgUp on arrow keypad */
    "", //0xCA
    "Left", //DIK_LEFT            0xCB    /* LeftArrow on arrow keypad */
    "", //0xCC
    "Right", //DIK_RIGHT           0xCD    /* RightArrow on arrow keypad */
    "", //0xCE
    "End", //DIK_END             0xCF    /* End on arrow keypad */
    "Down", //DIK_DOWN            0xD0    /* DownArrow on arrow keypad */
    "Page Down", //DIK_NEXT            0xD1    /* PgDn on arrow keypad */
    "Insert", //DIK_INSERT          0xD2    /* Insert on arrow keypad */
    "Delete", //DIK_DELETE          0xD3    /* Delete on arrow keypad */

    "", //0xD4
    "", //0xD5
    "", //0xD6
    "", //0xD7
    "", //0xD8
    "", //0xD9
    "", //0xDA

    "L Windows", //DIK_LWIN            0xDB    /* Left Windows key */
    "R Windows", //DIK_RWIN            0xDC    /* Right Windows key */
    "Apps Menu", //DIK_APPS            0xDD    /* AppMenu key */
};


class KeyWindowStruct
{
public:
    PinInput pi;
    HWND hwndKeyControl; // window to get the key assignment
    UINT_PTR m_timerid; // timer id for our key assignment
};

WNDPROC g_ButtonProc;

LRESULT CALLBACK MyKeyButtonProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if (uMsg == WM_GETDLGCODE)
        // Eat all acceleratable messges
        return (DLGC_WANTARROWS | DLGC_WANTTAB | DLGC_WANTALLKEYS | DLGC_WANTCHARS);
    else
        return CallWindowProc(g_ButtonProc, hwnd, uMsg, wParam, lParam);
}


KeysConfigDialog::KeysConfigDialog() : CDialog(IDD_KEYS)
{
}

BOOL KeysConfigDialog::OnInitDialog()
{
    bool on = LoadValueBoolWithDefault("Player", "PBWDefaultLayout", false);
    ::SendMessage(GetDlgItem(IDC_DefaultLayout).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "DisableESC", false);
    ::SendMessage(GetDlgItem(IDC_DisableESC_CB).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "PBWRotationCB", false);
    ::SendMessage(GetDlgItem(IDC_CBGLOBALROTATION).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    int key = LoadValueIntWithDefault("Player", "PBWRotationValue", 0);
    SetDlgItemInt( IDC_GLOBALROTATION, key, FALSE);

    on = LoadValueBoolWithDefault("Player", "TiltSensCB", false);
    ::SendMessage(GetDlgItem(IDC_CBGLOBALTILT).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    key = LoadValueIntWithDefault("Player", "TiltSensValue", 400);
    SetDlgItemInt( IDC_GLOBALTILT, key, FALSE);

    key = LoadValueIntWithDefault("Player", "DeadZone", 0);
    SetDlgItemInt( IDC_DEADZONEAMT, key, FALSE);

    on = LoadValueBoolWithDefault("Player", "PBWEnabled", false);
    ::SendMessage(GetDlgItem(IDC_GLOBALACCEL).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "PBWNormalMount", false);
    ::SendMessage(GetDlgItem(IDC_GLOBALNMOUNT).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "ReversePlungerAxis", false);
    ::SendMessage(GetDlgItem(IDC_ReversePlunger).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "PlungerRetract", false);
    ::SendMessage(GetDlgItem(IDC_PLUNGERRETRACT).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "LRAxisFlip", false);
    ::SendMessage(GetDlgItem(IDC_LRAXISFLIP).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "UDAxisFlip", false);
    ::SendMessage(GetDlgItem(IDC_UDAXISFLIP).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    key = LoadValueIntWithDefault("Player", "PBWAccelGainX", 150);
    SetDlgItemInt( IDC_LRAXISGAIN, key, FALSE);

    key = LoadValueIntWithDefault("Player", "PBWAccelGainY", 150);
    SetDlgItemInt( IDC_UDAXISGAIN, key, FALSE);

    key = LoadValueIntWithDefault("Player", "PBWAccelMaxX", 100);
    SetDlgItemInt( IDC_XMAX_EDIT, key, FALSE);

    key = LoadValueIntWithDefault("Player", "PBWAccelMaxY", 100);
    SetDlgItemInt( IDC_YMAX_EDIT, key, FALSE);

    on = LoadValueBoolWithDefault("Player", "EnableMouseInPlayer", true);
    ::SendMessage(GetDlgItem(IDC_ENABLE_MOUSE_PLAYER).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "EnableCameraModeFlyAround", false);
    ::SendMessage(GetDlgItem(IDC_ENABLE_CAMERA_FLY_AROUND).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "EnableNudgeFilter", false);
    ::SendMessage(GetDlgItem(IDC_ENABLE_NUDGE_FILTER).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    on = LoadValueBoolWithDefault("Player", "EnableLegacyNudge", false);
    ::SendMessage(GetDlgItem(IDC_ENABLE_LEGACY_NUDGE).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    const float legacyNudgeStrength = LoadValueFloatWithDefault("Player", "LegacyNudgeStrength", 1.f);
    SetDlgItemInt(IDC_LEGACY_NUDGE_STRENGTH, quantizeUnsignedPercent(legacyNudgeStrength), FALSE);

    for (unsigned int i = 0; i <= 30; ++i)
    {
        HRESULT hr;
        int item,selected;
        switch (i)
        {
            case 0: hr = LoadValue("Player", "JoyLFlipKey", selected); item = IDC_JOYLFLIPCOMBO; break;
            case 1: hr = LoadValue("Player", "JoyRFlipKey", selected); item = IDC_JOYRFLIPCOMBO; break;
            case 2: hr = LoadValue("Player", "JoyPlungerKey", selected); item = IDC_JOYPLUNGERCOMBO; break;
            case 3: hr = LoadValue("Player", "JoyAddCreditKey", selected); item = IDC_JOYADDCREDITCOMBO; break;
            case 4: hr = LoadValue("Player", "JoyAddCredit2Key", selected); item = IDC_JOYADDCREDIT2COMBO; break;
            case 5: hr = LoadValue("Player", "JoyLMagnaSave", selected); item = IDC_JOYLMAGNACOMBO; break;
            case 6: hr = LoadValue("Player", "JoyRMagnaSave", selected); item = IDC_JOYRMAGNACOMBO; break;
            case 7: hr = LoadValue("Player", "JoyStartGameKey", selected); item = IDC_JOYSTARTCOMBO; break;
            case 8: hr = LoadValue("Player", "JoyExitGameKey", selected); item = IDC_JOYEXITCOMBO; break;
            case 9: hr = LoadValue("Player", "JoyFrameCount", selected); item = IDC_JOYFPSCOMBO; break;
            case 10:hr = LoadValue("Player", "JoyVolumeUp", selected); item = IDC_JOYVOLUPCOMBO; break;
            case 11:hr = LoadValue("Player", "JoyVolumeDown", selected); item = IDC_JOYVOLDNCOMBO; break;
            case 12:hr = LoadValue("Player", "JoyLTiltKey", selected); item = IDC_JOYLTILTCOMBO; break;
            case 13:hr = LoadValue("Player", "JoyCTiltKey", selected); item = IDC_JOYCTILTCOMBO; break;
            case 14:hr = LoadValue("Player", "JoyRTiltKey", selected); item = IDC_JOYRTILTCOMBO; break;
            case 15:hr = LoadValue("Player", "JoyMechTiltKey", selected); item = IDC_JOYMECHTILTCOMBO; break;
            case 16:hr = LoadValue("Player", "JoyDebugKey", selected); item = IDC_JOYDEBUGCOMBO; break;
            case 17:hr = LoadValue("Player", "JoyDebuggerKey", selected); item = IDC_JOYDEBUGGERCOMBO; break;
            case 18:hr = LoadValue("Player", "JoyCustom1", selected); item = IDC_JOYCUSTOM1COMBO; break;
            case 19:hr = LoadValue("Player", "JoyCustom2", selected); item = IDC_JOYCUSTOM2COMBO; break;
            case 20:hr = LoadValue("Player", "JoyCustom3", selected); item = IDC_JOYCUSTOM3COMBO; break;
            case 21:hr = LoadValue("Player", "JoyCustom4", selected); item = IDC_JOYCUSTOM4COMBO; break;
            case 22:hr = LoadValue("Player", "JoyPMBuyIn", selected); item = IDC_JOYPMBUYIN; break;
            case 23:hr = LoadValue("Player", "JoyPMCoin3", selected); item = IDC_JOYPMCOIN3; break;
            case 24:hr = LoadValue("Player", "JoyPMCoin4", selected); item = IDC_JOYPMCOIN4; break;
            case 25:hr = LoadValue("Player", "JoyPMCoinDoor", selected); item = IDC_JOYPMCOINDOOR; break;
            case 26:hr = LoadValue("Player", "JoyPMCancel", selected); item = IDC_JOYPMCANCEL; break;
            case 27:hr = LoadValue("Player", "JoyPMDown", selected); item = IDC_JOYPMDOWN; break;
            case 28:hr = LoadValue("Player", "JoyPMUp", selected); item = IDC_JOYPMUP; break;
            case 29:hr = LoadValue("Player", "JoyPMEnter", selected); item = IDC_JOYPMENTER; break;
            case 30:hr = LoadValue("Player", "JoyLockbarKey", selected); item = IDC_JOYLOCKBARCOMBO; break;
        }

        if (hr != S_OK)
            selected = 0; // assume no assignment as standard

        const HWND hwnd = GetDlgItem(item).GetHwnd();
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"(none)");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 1");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 2");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 3");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 4");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 5");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 6");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 7");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 8");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 9");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 10");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 11");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 12");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 13");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 14");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 15");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 16");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 17");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 18");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 19");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 20");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 21");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 22");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 23");
        ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Button 24");
        if (item == IDC_JOYLFLIPCOMBO || item == IDC_JOYRFLIPCOMBO || item == IDC_JOYPLUNGERCOMBO)
        {
            ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Left Mouse");
            ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Right Mouse");
            ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Middle Mouse");
        }
        ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);
    }

    //

    on = LoadValueBoolWithDefault("Controller", "ForceDisableB2S", false);
    ::SendMessage(GetDlgItem(IDC_DOF_FORCEDISABLE).GetHwnd(), BM_SETCHECK, on ? BST_CHECKED : BST_UNCHECKED, 0);

    int selected = LoadValueIntWithDefault("Controller", "DOFContactors", 2); // assume both as standard
    HWND hwnd = GetDlgItem(IDC_DOF_CONTACTORS).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Controller", "DOFKnocker", 2); // assume both as standard
    hwnd = GetDlgItem(IDC_DOF_KNOCKER).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Controller", "DOFChimes", 2); // assume both as standard
    hwnd = GetDlgItem(IDC_DOF_CHIMES).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Controller", "DOFBell", 2); // assume both as standard
    hwnd = GetDlgItem(IDC_DOF_BELL).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Controller", "DOFGear", 2); // assume both as standard
    hwnd = GetDlgItem(IDC_DOF_GEAR).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Controller", "DOFShaker", 2); // assume both as standard
    hwnd = GetDlgItem(IDC_DOF_SHAKER).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Controller", "DOFFlippers", 2); // assume both as standard
    hwnd = GetDlgItem(IDC_DOF_FLIPPERS).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Controller", "DOFTargets", 2); // assume both as standard
    hwnd = GetDlgItem(IDC_DOF_TARGETS).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Controller", "DOFDropTargets", 2); // assume both as standard
    hwnd = GetDlgItem(IDC_DOF_DROPTARGETS).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Sound FX");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"DOF");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Both");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    //

    selected = LoadValueIntWithDefault("Player", "PlungerAxis", 3); // assume Z Axis as standard
    hwnd = GetDlgItem(IDC_PLUNGERAXIS).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"(disabled)");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"X Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Y Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Z Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rX Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rY Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rZ Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Slider 1");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Slider 2");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Player", "LRAxis", 1); // assume X Axis as standard
    hwnd = GetDlgItem(IDC_LRAXISCOMBO).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"(disabled)");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"X Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Y Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Z Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rX Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rY Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rZ Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Slider 1");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Slider 2");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    selected = LoadValueIntWithDefault("Player", "UDAxis", 2); // assume Y Axis as standard
    hwnd = GetDlgItem(IDC_UDAXISCOMBO).GetHwnd();
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"(disabled)");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"X Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Y Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Z Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rX Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rY Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"rZ Axis");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Slider 1");
    ::SendMessage(hwnd, CB_ADDSTRING, 0, (LPARAM)"Slider 2");
    ::SendMessage(hwnd, CB_SETCURSEL, selected, 0);

    for (unsigned int i = 0; i < eCKeys; ++i) if (regkey_idc[i] != -1)
    {
        const HRESULT hr = LoadValue("Player", regkey_string[i], key);
        if (hr != S_OK || key > 0xdd)
            key = regkey_defdik[i];
        const HWND hwndControl = GetDlgItem(regkey_idc[i]);
        ::SetWindowText(hwndControl, rgszKeyName[key]);
        ::SetWindowLongPtr(hwndControl, GWLP_USERDATA, key);
    }

    HRESULT hr = LoadValue("Player", "JoyCustom1Key", key);
    if (hr != S_OK || key > 0xdd)
        key = DIK_UP;
    HWND hwndControl = GetDlgItem(IDC_JOYCUSTOM1);
    ::SetWindowText(hwndControl, rgszKeyName[key]);
    ::SetWindowLongPtr(hwndControl, GWLP_USERDATA, key);

    hr = LoadValue("Player", "JoyCustom2Key", key);
    if (hr != S_OK || key > 0xdd)
        key = DIK_DOWN;
    hwndControl = GetDlgItem(IDC_JOYCUSTOM2);
    ::SetWindowText(hwndControl, rgszKeyName[key]);
    ::SetWindowLongPtr(hwndControl, GWLP_USERDATA, key);

    hr = LoadValue("Player", "JoyCustom3Key", key);
    if (hr != S_OK || key > 0xdd)
        key = DIK_LEFT;
    hwndControl = GetDlgItem(IDC_JOYCUSTOM3);
    ::SetWindowText(hwndControl, rgszKeyName[key]);
    ::SetWindowLongPtr(hwndControl, GWLP_USERDATA, key);

    hr = LoadValue("Player", "JoyCustom4Key", key);
    if (hr != S_OK || key > 0xdd)
        key = DIK_RIGHT;
    hwndControl = GetDlgItem(IDC_JOYCUSTOM4);
    ::SetWindowText(hwndControl, rgszKeyName[key]);
    ::SetWindowLongPtr(hwndControl, GWLP_USERDATA, key);

    //

    KeyWindowStruct * const pksw = new KeyWindowStruct();
    pksw->pi.Init(GetHwnd());
    pksw->m_timerid = 0;
    ::SetWindowLongPtr(GetHwnd(), GWLP_USERDATA, (size_t)pksw);

    // Set buttons to ignore keyboard shortcuts when using DirectInput
    HWND hwndButton = GetDlgItem(IDC_LEFTFLIPPERBUTTON).GetHwnd();
    g_ButtonProc = (WNDPROC)::GetWindowLongPtr(hwndButton, GWLP_WNDPROC);
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_RIGHTFLIPPERBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_LEFTTILTBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_RIGHTTILTBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_CENTERTILTBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_PLUNGERBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_ADDCREDITBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_ADDCREDITBUTTON2).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_STARTGAMEBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_EXITGAMEBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_FRAMECOUNTBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_VOLUPBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_VOLDOWNBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_LOCKBARBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_DEBUGBALLSBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_DEBUGGERBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_RMAGSAVEBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_LMAGSAVEBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_MECHTILTBUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_JOYCUSTOM1BUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_JOYCUSTOM2BUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_JOYCUSTOM3BUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    hwndButton = GetDlgItem(IDC_JOYCUSTOM4BUTTON).GetHwnd();
    ::SetWindowLongPtr(hwndButton, GWLP_WNDPROC, (size_t)MyKeyButtonProc);
    ::SetWindowLongPtr(hwndButton, GWLP_USERDATA, (size_t)pksw);

    return TRUE;
}

INT_PTR KeysConfigDialog::DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        case WM_TIMER:
        {
            KeyWindowStruct * const pksw = (KeyWindowStruct *)::GetWindowLongPtr(GetHwnd(), GWLP_USERDATA);
            const int key = pksw->pi.GetNextKey();
            if (key != 0)
            {
                if (key < 0xDD)	// Key mapping
                {
                    int key_esc;
                    const HRESULT hr = LoadValue("Player", "EscapeKey", key_esc);
                    if (hr != S_OK || key_esc > 0xdd)
                        key_esc = DIK_ESCAPE;

                    if (key == key_esc)
                    {
                        // reset key to old value
                        const size_t oldkey = ::GetWindowLongPtr(pksw->hwndKeyControl, GWLP_USERDATA);
                        ::SetWindowText(pksw->hwndKeyControl, rgszKeyName[oldkey]);
                    }
                    else
                    {
                        ::SetWindowText(pksw->hwndKeyControl, rgszKeyName[key]);
                        ::SetWindowLongPtr(pksw->hwndKeyControl, GWLP_USERDATA, key);
                    }
                    ::KillTimer(GetHwnd(), pksw->m_timerid);
                    pksw->m_timerid = 0;
                }
            }
            break;
        }
    }
    return DialogProcDefault(uMsg, wParam, lParam);
}

BOOL KeysConfigDialog::OnCommand(WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    if (HIWORD(wParam) == BN_CLICKED)
    {
        switch (LOWORD(wParam))
        {
            case IDC_LEFTFLIPPERBUTTON:
            {
                StartTimer(IDC_LEFTFLIPPER);
                break;
            }
            case IDC_RIGHTFLIPPERBUTTON:
            {
                StartTimer(IDC_RIGHTFLIPPER);
                break;
            }
            case IDC_LEFTTILTBUTTON:
            {
                StartTimer(IDC_LEFTTILT);
                break;
            }
            case IDC_RIGHTTILTBUTTON:
            {
                StartTimer(IDC_RIGHTTILT);
                break;
            }
            case IDC_CENTERTILTBUTTON:
            {
                StartTimer(IDC_CENTERTILT);
                break;
            }
            case IDC_PLUNGERBUTTON:
            {
                StartTimer(IDC_PLUNGER_TEXT);
                break;
            }
            case IDC_ADDCREDITBUTTON:
            {
                StartTimer(IDC_ADDCREDIT);
                break;
            }
            case IDC_ADDCREDITBUTTON2:
            {
                StartTimer(IDC_ADDCREDIT2);
                break;
            }
            case IDC_STARTGAMEBUTTON:
            {
                StartTimer(IDC_STARTGAME);
                break;
            }
            case IDC_EXITGAMEBUTTON:
            {
                StartTimer(IDC_EXITGAME);
                break;
            }
            case IDC_FRAMECOUNTBUTTON:
            {
                StartTimer(IDC_FRAMECOUNT);
                break;
            }
            case IDC_DEBUGBALLSBUTTON:
            {
                StartTimer(IDC_DEBUGBALL);
                break;
            }
            case IDC_DEBUGGERBUTTON:
            {
                StartTimer(IDC_DEBUGGER);
                break;
            }
            case IDC_VOLUPBUTTON:
            {
                StartTimer(IDC_VOLUMEUP);
                break;
            }
            case IDC_VOLDOWNBUTTON:
            {
                StartTimer(IDC_VOLUMEDN);
                break;
            }
            case IDC_LOCKBARBUTTON:
            {
                StartTimer(IDC_LOCKBAR);
                break;
            }
            case IDC_RMAGSAVEBUTTON:
            {
                StartTimer(IDC_RMAGSAVE);
                break;
            }
            case IDC_LMAGSAVEBUTTON:
            {
                StartTimer(IDC_LMAGSAVE);
                break;
            }
            case IDC_MECHTILTBUTTON:
            {
                StartTimer(IDC_MECHTILT);
                break;
            }
            case IDC_JOYCUSTOM1BUTTON:
            {
                StartTimer(IDC_JOYCUSTOM1);
                break;
            }
            case IDC_JOYCUSTOM2BUTTON:
            {
                StartTimer(IDC_JOYCUSTOM2);
                break;
            }
            case IDC_JOYCUSTOM3BUTTON:
            {
                StartTimer(IDC_JOYCUSTOM3);
                break;
            }
            case IDC_JOYCUSTOM4BUTTON:
            {
                StartTimer(IDC_JOYCUSTOM4);
                break;
            }
            default:
                return FALSE;
        }//switch
    }//if (HIWORD(wParam) == BN_CLICKED)
    return TRUE;
}

void KeysConfigDialog::OnOK()
{
    SetValue(IDC_JOYCUSTOM1COMBO, "Player", "JoyCustom1");
    SetValue(IDC_JOYCUSTOM2COMBO, "Player", "JoyCustom2");
    SetValue(IDC_JOYCUSTOM3COMBO, "Player", "JoyCustom3");
    SetValue(IDC_JOYCUSTOM4COMBO, "Player", "JoyCustom4");
    SetValue(IDC_JOYPMBUYIN, "Player", "JoyPMBuyIn");
    SetValue(IDC_JOYPMCOIN3, "Player", "JoyPMCoin3");
    SetValue(IDC_JOYPMCOIN4, "Player", "JoyPMCoin4");
    SetValue(IDC_JOYPMCOINDOOR, "Player", "JoyPMCoinDoor");
    SetValue(IDC_JOYPMCANCEL, "Player", "JoyPMCancel");
    SetValue(IDC_JOYPMDOWN, "Player", "JoyPMDown");
    SetValue(IDC_JOYPMUP, "Player", "JoyPMUp");
    SetValue(IDC_JOYPMENTER, "Player", "JoyPMEnter");
    SetValue(IDC_JOYLFLIPCOMBO, "Player", "JoyLFlipKey");
    SetValue(IDC_JOYRFLIPCOMBO, "Player", "JoyRFlipKey");
    SetValue(IDC_JOYPLUNGERCOMBO, "Player", "JoyPlungerKey");
    SetValue(IDC_JOYADDCREDITCOMBO, "Player", "JoyAddCreditKey");
    SetValue(IDC_JOYADDCREDIT2COMBO, "Player", "JoyAddCredit2Key");
    SetValue(IDC_JOYLMAGNACOMBO, "Player", "JoyLMagnaSave");
    SetValue(IDC_JOYRMAGNACOMBO, "Player", "JoyRMagnaSave");
    SetValue(IDC_JOYSTARTCOMBO, "Player", "JoyStartGameKey");
    SetValue(IDC_JOYEXITCOMBO, "Player", "JoyExitGameKey");
    SetValue(IDC_JOYFPSCOMBO, "Player", "JoyFrameCount");
    SetValue(IDC_JOYVOLUPCOMBO, "Player", "JoyVolumeUp");
    SetValue(IDC_JOYVOLDNCOMBO, "Player", "JoyVolumeDown");
    SetValue(IDC_JOYLTILTCOMBO, "Player", "JoyLTiltKey");
    SetValue(IDC_JOYCTILTCOMBO, "Player", "JoyCTiltKey");
    SetValue(IDC_JOYRTILTCOMBO, "Player", "JoyRTiltKey");
    SetValue(IDC_JOYMECHTILTCOMBO, "Player", "JoyMechTiltKey");
    SetValue(IDC_JOYDEBUGCOMBO, "Player", "JoyDebugKey");
    SetValue(IDC_JOYDEBUGGERCOMBO, "Player", "JoyDebuggerKey");
    SetValue(IDC_JOYLOCKBARCOMBO, "Player", "JoyLockbarKey");
    SetValue(IDC_PLUNGERAXIS, "Player", "PlungerAxis");
    SetValue(IDC_LRAXISCOMBO, "Player", "LRAxis");
    SetValue(IDC_UDAXISCOMBO, "Player", "UDAxis");

    size_t selected;
    int newvalue;
    BOOL nothing;

    newvalue = GetDlgItemInt(IDC_LRAXISGAIN, nothing, TRUE);
    if (newvalue < 0) { newvalue = 0; }
    SaveValueInt("Player", "PBWAccelGainX", newvalue);

    newvalue = GetDlgItemInt(IDC_UDAXISGAIN, nothing, TRUE);
    if (newvalue < 0) { newvalue = 0; }
    SaveValueInt("Player", "PBWAccelGainY", newvalue);

    newvalue = GetDlgItemInt(IDC_DEADZONEAMT, nothing, TRUE);
    if (newvalue < 0) { newvalue = 0; }
    if (newvalue > 100) { newvalue = 100; }
    SaveValueInt("Player", "DeadZone", newvalue);

    newvalue = GetDlgItemInt(IDC_XMAX_EDIT, nothing, TRUE);
    if (newvalue < 0) { newvalue = 0; }
    if (newvalue > 100) { newvalue = 100; }
    SaveValueInt("Player", "PBWAccelMaxX", newvalue);

    newvalue = GetDlgItemInt(IDC_YMAX_EDIT, nothing, TRUE);
    if (newvalue < 0) { newvalue = 0; }
    if (newvalue > 100) { newvalue = 100; }
    SaveValueInt("Player", "PBWAccelMaxY", newvalue);

    selected = ::SendMessage(GetDlgItem(IDC_DefaultLayout).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "PBWDefaultLayout", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_DisableESC_CB).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "DisableESC", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_LRAXISFLIP).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "LRAxisFlip", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_UDAXISFLIP).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "UDAxisFlip", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_ReversePlunger).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "ReversePlungerAxis", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_PLUNGERRETRACT).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "PlungerRetract", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_GLOBALACCEL).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "PBWEnabled", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_GLOBALNMOUNT).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "PBWNormalMount", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_CBGLOBALROTATION).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "PBWRotationCB", selected != 0);

    newvalue = GetDlgItemInt(IDC_GLOBALROTATION, nothing, TRUE);
    SaveValueInt("Player", "PBWRotationValue", newvalue);

    const bool tscb = (::SendMessage(GetDlgItem(IDC_CBGLOBALTILT).GetHwnd(), BM_GETCHECK, 0, 0) != 0);
    SaveValueBool("Player", "TiltSensCB", tscb);

    newvalue = GetDlgItemInt(IDC_GLOBALTILT, nothing, TRUE);
    if (newvalue < 0) { newvalue = 0; }
    if (newvalue > 1000) { newvalue = 1000; }
    SaveValueInt("Player", "TiltSensValue", newvalue);
    if (tscb)
        SaveValueInt("Player", "TiltSensitivity", newvalue);
    else
    {
        HKEY hkey;
        RegOpenKey(HKEY_CURRENT_USER, "Software\\Visual Pinball\\Player", &hkey);
        RegDeleteValue(hkey, "TiltSensitivity");
        RegCloseKey(hkey);
    }

    for (unsigned int i = 0; i < eCKeys; ++i) if (regkey_idc[i] != -1)
    {        
        const size_t key = ::GetWindowLongPtr(GetDlgItem(regkey_idc[i]).GetHwnd(), GWLP_USERDATA);
        SaveValueInt("Player", regkey_string[i], (int)key);
    }

    SetValue(IDC_JOYCUSTOM1, "Player", "JoyCustom1Key");
    SetValue(IDC_JOYCUSTOM2, "Player", "JoyCustom2Key");
    SetValue(IDC_JOYCUSTOM3, "Player", "JoyCustom3Key");
    SetValue(IDC_JOYCUSTOM4, "Player", "JoyCustom4Key");
    SetValue(IDC_DOF_CONTACTORS, "Controller", "DOFContactors");
    SetValue(IDC_DOF_KNOCKER, "Controller", "DOFKnocker");
    SetValue(IDC_DOF_CHIMES, "Controller", "DOFChimes");
    SetValue(IDC_DOF_BELL, "Controller", "DOFBell");
    SetValue(IDC_DOF_GEAR, "Controller", "DOFGear");
    SetValue(IDC_DOF_SHAKER, "Controller", "DOFShaker");
    SetValue(IDC_DOF_FLIPPERS, "Controller", "DOFFlippers");
    SetValue(IDC_DOF_TARGETS, "Controller", "DOFTargets");
    SetValue(IDC_DOF_DROPTARGETS, "Controller", "DOFDropTargets");

    selected = ::SendMessage(GetDlgItem(IDC_ENABLE_NUDGE_FILTER).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "EnableNudgeFilter", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_ENABLE_LEGACY_NUDGE).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "EnableLegacyNudge", selected != 0);

    newvalue = GetDlgItemInt(IDC_LEGACY_NUDGE_STRENGTH, nothing, TRUE);
    SaveValueFloat("Player", "LegacyNudgeStrength", dequantizeUnsignedPercent((unsigned int)newvalue));

    selected = ::SendMessage(GetDlgItem(IDC_ENABLE_MOUSE_PLAYER).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "EnableMouseInPlayer", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_ENABLE_CAMERA_FLY_AROUND).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Player", "EnableCameraModeFlyAround", selected != 0);

    selected = ::SendMessage(GetDlgItem(IDC_DOF_FORCEDISABLE).GetHwnd(), BM_GETCHECK, 0, 0);
    SaveValueBool("Controller", "ForceDisableB2S", selected != 0);

    CDialog::OnOK();
}

void KeysConfigDialog::OnDestroy()
{
    KeyWindowStruct * const pksw = (KeyWindowStruct *)::GetWindowLongPtr(GetHwnd(), GWLP_USERDATA);
    if (pksw->m_timerid)
    {
        ::KillTimer(GetHwnd(), pksw->m_timerid);
        pksw->m_timerid = 0;
    }
    pksw->pi.UnInit();
    CDialog::OnDestroy();
}

HWND KeysConfigDialog::GetItemHwnd(int nID)
{
    return GetDlgItem(nID).GetHwnd();
}

void KeysConfigDialog::SetValue(int nID, const char * const regKey, const char * const regValue)
{
    size_t selected = ::SendMessage(GetDlgItem(nID).GetHwnd(), CB_GETCURSEL, 0, 0);
    if (selected == LB_ERR)
        selected = 2; // assume both as standard
    SaveValueInt(regKey, regValue, (int)selected);
}

void KeysConfigDialog::StartTimer(int nID)
{
    KeyWindowStruct * const pksw = (KeyWindowStruct *)::GetWindowLongPtr(GetHwnd(), GWLP_USERDATA);
    HWND hwndKeyWindow = GetItemHwnd(nID);
    if (pksw->m_timerid == NULL) //add
    { //add
        // corrects input error with space bar
        const int key = pksw->pi.GetNextKey();
        if (key == 0x39)
        {
            pksw->pi.GetNextKey(); // Clear the current buffer out
            return;
        }

        pksw->pi.GetNextKey(); // Clear the current buffer out

        pksw->m_timerid = ::SetTimer(GetHwnd(), 100, 50, NULL);
        pksw->hwndKeyControl = hwndKeyWindow;
        ::SetWindowText(pksw->hwndKeyControl, "????");
        while (pksw->pi.GetNextKey() != NULL) //clear entire keyboard buffer contents
        {
            pksw->pi.GetNextKey();
        }
    }
}
