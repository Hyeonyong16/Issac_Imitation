#pragma once
#include "CLevel.h"

class CTexture;

class CLevel_Editor_Sprite :
    public CLevel
{
private:
    CTexture*   m_AtlasTexture;
    HMENU       m_hMenu;

    bool        m_bSpriteMenu;

    HWND        m_hDlgHandle;   // 모달리스 다이얼로그 핸들 받기


    // Sprite Set 관련 변수
    Vec2        m_SpritePos;
    Vec2        m_SpriteScale;

    Vec2        m_dbgRectPos;   // 디버그용 사각형 좌표 기록

    bool        m_bDrawSprite;  // Picture Control 에 Sprite 를 다시 그려야 하는가
    bool        m_bMouseLBtnPressed;    // 마우스 클릭 유지 시 drawRect 여부


    // Flipbook 관련 변수

    // collider 관련 변수



public:
    void SetSpriteMenu(bool _bSpriteMenu) { m_bSpriteMenu = _bSpriteMenu; }
    void SetDlgHandle(HWND _hwnd) { m_hDlgHandle = _hwnd; }
    void SetSpritePos(Vec2 _pos) { m_SpritePos = _pos; }
    void SetSpriteScale(Vec2 _scale) { m_SpriteScale = _scale; }
    void SetDrawSprite(bool _drawSprite) { m_bDrawSprite = _drawSprite; }
   

    bool GetSpriteMenu() { return m_bSpriteMenu; }
    Vec2 GetSpritePos() { return m_SpritePos; }

public:
    virtual void Begin() override;
    virtual void Tick() override;
    virtual void Render() override;
    virtual void End() override;

public:

    // 만들어야 할 함수
    void LoadAtlasTexture();    // atlas 텍스쳐 가져오기
    void SaveSprite();          // 입력한 수치로 sprite 생성
    void LoadSprite();          // 생성된 sprite 수치 가져오기
    void SaveFlipbook();        // 현재 설정된 sprite 순서로 flipbook 제작
    void LoadFlipbook();        // flipbook 정보를 가져옴




public:
    CLevel_Editor_Sprite();
    ~CLevel_Editor_Sprite();
};

