#ifndef __BAO_HAN_H__
#define __BAO_HAN_H__

#pragma pack(push,1)

// ������ߵİ�����ϵ
// ������K�߸ߣ�*pHigh����K�ߵͣ�*pLow��
// �����K�ߵķ���*pDirection���������ģ��߸ߣ�*pOutHigh����������K�ߵͣ�*pOutLow����K���Ƿ��а�����*pInclude��
void BaoHan(int nCount, float *pDirection, float *pOutHigh, float *pOutLow,
		float *pInclude, float *pHigh, float *pLow);

#pragma pack(pop)

#endif
