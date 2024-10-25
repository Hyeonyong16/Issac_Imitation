#pragma once
#include "CComponent.h"

class CCollider :
    public CComponent
{
private:
    Vec2 m_Scale;       // ũ��

    Vec2 m_Offset;      // ��� ��ǥ
    Vec2 m_FinalPos;    // �浹ü�� ���� ��ġ

    bool m_Active;      // �ݶ��̴� Ȱ��ȭ ����

    int m_OverlapCount;   // ���� �浹���� ��ü�� ����

public:
    void SetScale(Vec2 _Scale) { m_Scale = _Scale; }
    Vec2 GetScale() { return m_Scale; }

    void SetOffset(Vec2 _Offset) { m_Offset = _Offset; }
    Vec2 GetOffset() { return m_Offset; }

    Vec2 GetFinalPos() { return m_FinalPos; }

public:
    void BeginOverlap(CCollider* _Other);   // �ٸ� �浹ü�� ���� �浹 ��
    void Overlap(CCollider* _Other);        // �ٸ� �浹ü�� ���� ���� �� (BeginOverlap ����)
    void EndOverlap(CCollider* _Other);     // �����ִ� �ٸ� �浹ü�� ���ʷ� �������� ��


public:
    virtual void FinalTick() override;

public:
    CCollider();
    ~CCollider();
};
