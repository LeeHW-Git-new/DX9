#include "stdafx.h"
#include "cHead.h"


cHead::cHead()
{
}


cHead::~cHead()
{
}

void cHead::Setup()
{
	cCubeNode::Setup();
	D3DXMATRIXA16 matS, matT, mat;
	D3DXMatrixScaling(&matS, 0.4f, 0.4f, 0.4f);
	D3DXMatrixTranslation(&matT, 0.0f, 0.0f, 0.0f);
	mat = matS * matT;
	for (size_t i = 0; i < m_vecVertex.size(); i++)
	{
		D3DXVec3TransformCoord(&m_vecVertex[i].p, &m_vecVertex[i].p, &mat);
	}
	//µÚ
	m_vecVertex[0].t = D3DXVECTOR2(8/64, 8/64);
	m_vecVertex[1].t = D3DXVECTOR2(8/64, 0);
	m_vecVertex[2].t = D3DXVECTOR2(16/64, 0);

	m_vecVertex[3].t = D3DXVECTOR2(8/64, 8/64);
	m_vecVertex[4].t = D3DXVECTOR2(16/64, 0);
	m_vecVertex[5].t = D3DXVECTOR2(16/64, 16/64);

	//¾Õ
	m_vecVertex[6].t = D3DXVECTOR2(16.f/64.f, 16.f/64.f);
	m_vecVertex[7].t = D3DXVECTOR2(8.f/64.f, 8.f/64.f);
	m_vecVertex[8].t = D3DXVECTOR2(16.f/64.f,8.f/64.f);

	m_vecVertex[9].t = D3DXVECTOR2(16.f / 64.f, 16.f / 64.f);
	m_vecVertex[10].t = D3DXVECTOR2(8.f / 64.f, 16.f / 64.f);
	m_vecVertex[11].t = D3DXVECTOR2(8.f / 64.f, 8.f / 64.f);
	//¿Þ
	m_vecVertex[12].t = D3DXVECTOR2(16.f / 64.f, 16.f / 64.f);
	m_vecVertex[13].t = D3DXVECTOR2(16.f / 64.f, 8.f  / 64.f);
	m_vecVertex[14].t = D3DXVECTOR2(24.f / 64.f, 8.f  / 64.f);

	m_vecVertex[15].t = D3DXVECTOR2(16.f  / 64.f, 16.f / 64.f);
	m_vecVertex[16].t = D3DXVECTOR2(24.f  / 64.f, 8.f  / 64.f);
	m_vecVertex[17].t = D3DXVECTOR2(24.f  / 64.f, 16.f / 64.f);
	//¿À
	m_vecVertex[18].t = D3DXVECTOR2(16.f / 64.f, 16.f / 64.f);
	m_vecVertex[19].t = D3DXVECTOR2(16.f / 64.f, 8.f / 64.f);
	m_vecVertex[20].t = D3DXVECTOR2(24.f / 64.f, 8.f / 64.f);

	m_vecVertex[21].t = D3DXVECTOR2(16.f / 64.f, 16.f / 64.f);
	m_vecVertex[22].t = D3DXVECTOR2(24.f / 64.f, 8.f / 64.f);
	m_vecVertex[23].t = D3DXVECTOR2(24.f / 64.f, 16.f / 64.f);
	m_vLocalPos.y = 0.5f;
}
