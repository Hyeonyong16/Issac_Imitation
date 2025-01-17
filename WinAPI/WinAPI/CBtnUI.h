#pragma once
#include "CUI.h"

class CSprite;

class CBtnUI :
    public CUI
{
private:
    PARAM_0             m_Func;
    PARAM_1             m_Func1;

    // Delegate
    CBase* m_Inst;
    DELEGATE_0          m_MemFunc;

    CSprite* m_sprite;

public:
    void AddCallBack(PARAM_0 _Func) { m_Func = _Func; }
    void AddCallBack(PARAM_1 _Func) { m_Func1 = _Func; }
    void AddDelegate(CBase* _Inst, DELEGATE_0 _memFunc) { m_Inst = _Inst; m_MemFunc = _memFunc; }


public:
    virtual void Tick_UI() override;
    virtual void Render_UI() override;

    // Mouse Click
    virtual void MouseLBtnClikced() override;

    void SetSprite(CSprite* _sprite) { m_sprite = _sprite; }

public:
    CBtnUI();
    ~CBtnUI();    
};

