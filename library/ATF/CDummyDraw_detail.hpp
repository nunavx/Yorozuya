// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CDummyDraw_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CDummyDrawctor_CDummyDraw2_ptr CDummyDrawctor_CDummyDraw2_next(nullptr);
        static info::CDummyDrawctor_CDummyDraw2_clbk CDummyDrawctor_CDummyDraw2_user(nullptr);
        static info::CDummyDrawCalcAbsExt4_ptr CDummyDrawCalcAbsExt4_next(nullptr);
        static info::CDummyDrawCalcAbsExt4_clbk CDummyDrawCalcAbsExt4_user(nullptr);
        static info::CDummyDrawCalcScrExt6_ptr CDummyDrawCalcScrExt6_next(nullptr);
        static info::CDummyDrawCalcScrExt6_clbk CDummyDrawCalcScrExt6_user(nullptr);
        static info::CDummyDrawDeletePen8_ptr CDummyDrawDeletePen8_next(nullptr);
        static info::CDummyDrawDeletePen8_clbk CDummyDrawDeletePen8_user(nullptr);
        static info::CDummyDrawctor_Draw10_ptr CDummyDrawctor_Draw10_next(nullptr);
        static info::CDummyDrawctor_Draw10_clbk CDummyDrawctor_Draw10_user(nullptr);
        static info::CDummyDrawInitPen12_ptr CDummyDrawInitPen12_next(nullptr);
        static info::CDummyDrawInitPen12_clbk CDummyDrawInitPen12_user(nullptr);
        static info::CDummyDrawSetDummyPoint14_ptr CDummyDrawSetDummyPoint14_next(nullptr);
        static info::CDummyDrawSetDummyPoint14_clbk CDummyDrawSetDummyPoint14_user(nullptr);
        static info::CDummyDrawSetDummyRange16_ptr CDummyDrawSetDummyRange16_next(nullptr);
        static info::CDummyDrawSetDummyRange16_clbk CDummyDrawSetDummyRange16_user(nullptr);
        static info::CDummyDrawdtor_CDummyDraw22_ptr CDummyDrawdtor_CDummyDraw22_next(nullptr);
        static info::CDummyDrawdtor_CDummyDraw22_clbk CDummyDrawdtor_CDummyDraw22_user(nullptr);
        
        static void CDummyDrawctor_CDummyDraw2_wrapper(struct CDummyDraw* _this)
        {
           CDummyDrawctor_CDummyDraw2_user(_this, CDummyDrawctor_CDummyDraw2_next);
        };
        static bool CDummyDrawCalcAbsExt4_wrapper(struct CDummyDraw* _this, struct CRect* prcArea)
        {
           return CDummyDrawCalcAbsExt4_user(_this, prcArea, CDummyDrawCalcAbsExt4_next);
        };
        static void CDummyDrawCalcScrExt6_wrapper(struct CDummyDraw* _this, struct CRect* prcArea, struct CRect* prcWnd)
        {
           CDummyDrawCalcScrExt6_user(_this, prcArea, prcWnd, CDummyDrawCalcScrExt6_next);
        };
        static void CDummyDrawDeletePen8_wrapper()
        {
           CDummyDrawDeletePen8_user(CDummyDrawDeletePen8_next);
        };
        static HRESULT CDummyDrawctor_Draw10_wrapper(struct CDummyDraw* _this, struct CSurface* pSF, struct CRect* prcArea)
        {
           return CDummyDrawctor_Draw10_user(_this, pSF, prcArea, CDummyDrawctor_Draw10_next);
        };
        static void CDummyDrawInitPen12_wrapper()
        {
           CDummyDrawInitPen12_user(CDummyDrawInitPen12_next);
        };
        static void CDummyDrawSetDummyPoint14_wrapper(struct CDummyDraw* _this, struct CMapData* pMap, float* pCenterPos, int nType, struct CRect* prcWnd)
        {
           CDummyDrawSetDummyPoint14_user(_this, pMap, pCenterPos, nType, prcWnd, CDummyDrawSetDummyPoint14_next);
        };
        static void CDummyDrawSetDummyRange16_wrapper(struct CDummyDraw* _this, struct CMapData* pMap, float* pLT, float* pRB, float* pRT, float* pLB, int nType, struct CRect* prcWnd)
        {
           CDummyDrawSetDummyRange16_user(_this, pMap, pLT, pRB, pRT, pLB, nType, prcWnd, CDummyDrawSetDummyRange16_next);
        };
        static void CDummyDrawdtor_CDummyDraw22_wrapper(struct CDummyDraw* _this)
        {
           CDummyDrawdtor_CDummyDraw22_user(_this, CDummyDrawdtor_CDummyDraw22_next);
        };
        
        static hook_record CDummyDraw_functions[] = {
        {   (LPVOID)0x14019c510L,
            (LPVOID *)&CDummyDrawctor_CDummyDraw2_user,
            (LPVOID *)&CDummyDrawctor_CDummyDraw2_next,
            (LPVOID)cast_pointer_function(CDummyDrawctor_CDummyDraw2_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)())&CDummyDraw::ctor_CDummyDraw) },
        {   (LPVOID)0x14019ca00L,
            (LPVOID *)&CDummyDrawCalcAbsExt4_user,
            (LPVOID *)&CDummyDrawCalcAbsExt4_next,
            (LPVOID)cast_pointer_function(CDummyDrawCalcAbsExt4_wrapper),
            (LPVOID)cast_pointer_function((bool(CDummyDraw::*)(struct CRect*))&CDummyDraw::CalcAbsExt) },
        {   (LPVOID)0x14019cbf0L,
            (LPVOID *)&CDummyDrawCalcScrExt6_user,
            (LPVOID *)&CDummyDrawCalcScrExt6_next,
            (LPVOID)cast_pointer_function(CDummyDrawCalcScrExt6_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)(struct CRect*, struct CRect*))&CDummyDraw::CalcScrExt) },
        {   (LPVOID)0x14019d160L,
            (LPVOID *)&CDummyDrawDeletePen8_user,
            (LPVOID *)&CDummyDrawDeletePen8_next,
            (LPVOID)cast_pointer_function(CDummyDrawDeletePen8_wrapper),
            (LPVOID)cast_pointer_function((void(*)())&CDummyDraw::DeletePen) },
        {   (LPVOID)0x14019cd40L,
            (LPVOID *)&CDummyDrawctor_Draw10_user,
            (LPVOID *)&CDummyDrawctor_Draw10_next,
            (LPVOID)cast_pointer_function(CDummyDrawctor_Draw10_wrapper),
            (LPVOID)cast_pointer_function((HRESULT(CDummyDraw::*)(struct CSurface*, struct CRect*))&CDummyDraw::Draw) },
        {   (LPVOID)0x14019d050L,
            (LPVOID *)&CDummyDrawInitPen12_user,
            (LPVOID *)&CDummyDrawInitPen12_next,
            (LPVOID)cast_pointer_function(CDummyDrawInitPen12_wrapper),
            (LPVOID)cast_pointer_function((void(*)())&CDummyDraw::InitPen) },
        {   (LPVOID)0x14019c560L,
            (LPVOID *)&CDummyDrawSetDummyPoint14_user,
            (LPVOID *)&CDummyDrawSetDummyPoint14_next,
            (LPVOID)cast_pointer_function(CDummyDrawSetDummyPoint14_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)(struct CMapData*, float*, int, struct CRect*))&CDummyDraw::SetDummyPoint) },
        {   (LPVOID)0x14019c7b0L,
            (LPVOID *)&CDummyDrawSetDummyRange16_user,
            (LPVOID *)&CDummyDrawSetDummyRange16_next,
            (LPVOID)cast_pointer_function(CDummyDrawSetDummyRange16_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)(struct CMapData*, float*, float*, float*, float*, int, struct CRect*))&CDummyDraw::SetDummyRange) },
        {   (LPVOID)0x14019c540L,
            (LPVOID *)&CDummyDrawdtor_CDummyDraw22_user,
            (LPVOID *)&CDummyDrawdtor_CDummyDraw22_next,
            (LPVOID)cast_pointer_function(CDummyDrawdtor_CDummyDraw22_wrapper),
            (LPVOID)cast_pointer_function((void(CDummyDraw::*)())&CDummyDraw::dtor_CDummyDraw) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
