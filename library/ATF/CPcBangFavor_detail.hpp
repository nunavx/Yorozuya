// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPcBangFavor_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CPcBangFavorctor_CPcBangFavor2_ptr CPcBangFavorctor_CPcBangFavor2_next(nullptr);
        static info::CPcBangFavorctor_CPcBangFavor2_clbk CPcBangFavorctor_CPcBangFavor2_user(nullptr);
        static info::CPcBangFavorClassCodePasing4_ptr CPcBangFavorClassCodePasing4_next(nullptr);
        static info::CPcBangFavorClassCodePasing4_clbk CPcBangFavorClassCodePasing4_user(nullptr);
        static info::CPcBangFavorInitialzie6_ptr CPcBangFavorInitialzie6_next(nullptr);
        static info::CPcBangFavorInitialzie6_clbk CPcBangFavorInitialzie6_user(nullptr);
        static info::CPcBangFavorInstance8_ptr CPcBangFavorInstance8_next(nullptr);
        static info::CPcBangFavorInstance8_clbk CPcBangFavorInstance8_user(nullptr);
        static info::CPcBangFavorIsEnable10_ptr CPcBangFavorIsEnable10_next(nullptr);
        static info::CPcBangFavorIsEnable10_clbk CPcBangFavorIsEnable10_user(nullptr);
        static info::CPcBangFavorLoadPcBangData12_ptr CPcBangFavorLoadPcBangData12_next(nullptr);
        static info::CPcBangFavorLoadPcBangData12_clbk CPcBangFavorLoadPcBangData12_user(nullptr);
        static info::CPcBangFavorPcBangDeleteItem14_ptr CPcBangFavorPcBangDeleteItem14_next(nullptr);
        static info::CPcBangFavorPcBangDeleteItem14_clbk CPcBangFavorPcBangDeleteItem14_user(nullptr);
        static info::CPcBangFavorPcBangGiveItem16_ptr CPcBangFavorPcBangGiveItem16_next(nullptr);
        static info::CPcBangFavorPcBangGiveItem16_clbk CPcBangFavorPcBangGiveItem16_user(nullptr);
        static info::CPcBangFavordtor_CPcBangFavor21_ptr CPcBangFavordtor_CPcBangFavor21_next(nullptr);
        static info::CPcBangFavordtor_CPcBangFavor21_clbk CPcBangFavordtor_CPcBangFavor21_user(nullptr);
        
        static void CPcBangFavorctor_CPcBangFavor2_wrapper(struct CPcBangFavor* _this)
        {
           CPcBangFavorctor_CPcBangFavor2_user(_this, CPcBangFavorctor_CPcBangFavor2_next);
        };
        static unsigned int CPcBangFavorClassCodePasing4_wrapper(struct CPcBangFavor* _this, struct _AVATOR_DATA* pData, struct CPlayer* pOne)
        {
           return CPcBangFavorClassCodePasing4_user(_this, pData, pOne, CPcBangFavorClassCodePasing4_next);
        };
        static int CPcBangFavorInitialzie6_wrapper(struct CPcBangFavor* _this)
        {
           return CPcBangFavorInitialzie6_user(_this, CPcBangFavorInitialzie6_next);
        };
        static struct CPcBangFavor* CPcBangFavorInstance8_wrapper()
        {
           return CPcBangFavorInstance8_user(CPcBangFavorInstance8_next);
        };
        static int CPcBangFavorIsEnable10_wrapper(struct CPcBangFavor* _this)
        {
           return CPcBangFavorIsEnable10_user(_this, CPcBangFavorIsEnable10_next);
        };
        static int CPcBangFavorLoadPcBangData12_wrapper(struct CPcBangFavor* _this)
        {
           return CPcBangFavorLoadPcBangData12_user(_this, CPcBangFavorLoadPcBangData12_next);
        };
        static void CPcBangFavorPcBangDeleteItem14_wrapper(struct CPcBangFavor* _this, struct CPlayer* pOne)
        {
           CPcBangFavorPcBangDeleteItem14_user(_this, pOne, CPcBangFavorPcBangDeleteItem14_next);
        };
        static bool CPcBangFavorPcBangGiveItem16_wrapper(struct CPcBangFavor* _this, struct CPlayer* pOne, unsigned int dwRecIndex, char* bySeletItemIndex, int nSelectCount)
        {
           return CPcBangFavorPcBangGiveItem16_user(_this, pOne, dwRecIndex, bySeletItemIndex, nSelectCount, CPcBangFavorPcBangGiveItem16_next);
        };
        static void CPcBangFavordtor_CPcBangFavor21_wrapper(struct CPcBangFavor* _this)
        {
           CPcBangFavordtor_CPcBangFavor21_user(_this, CPcBangFavordtor_CPcBangFavor21_next);
        };
        
        static hook_record CPcBangFavor_functions[] = {
        {   (LPVOID)0x14040bb10L,
            (LPVOID *)&CPcBangFavorctor_CPcBangFavor2_user,
            (LPVOID *)&CPcBangFavorctor_CPcBangFavor2_next,
            (LPVOID)cast_pointer_function(CPcBangFavorctor_CPcBangFavor2_wrapper),
            (LPVOID)cast_pointer_function((void(CPcBangFavor::*)())&CPcBangFavor::ctor_CPcBangFavor) },
        {   (LPVOID)0x14040bd90L,
            (LPVOID *)&CPcBangFavorClassCodePasing4_user,
            (LPVOID *)&CPcBangFavorClassCodePasing4_next,
            (LPVOID)cast_pointer_function(CPcBangFavorClassCodePasing4_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CPcBangFavor::*)(struct _AVATOR_DATA*, struct CPlayer*))&CPcBangFavor::ClassCodePasing) },
        {   (LPVOID)0x14040bca0L,
            (LPVOID *)&CPcBangFavorInitialzie6_user,
            (LPVOID *)&CPcBangFavorInitialzie6_next,
            (LPVOID)cast_pointer_function(CPcBangFavorInitialzie6_wrapper),
            (LPVOID)cast_pointer_function((int(CPcBangFavor::*)())&CPcBangFavor::Initialzie) },
        {   (LPVOID)0x140079730L,
            (LPVOID *)&CPcBangFavorInstance8_user,
            (LPVOID *)&CPcBangFavorInstance8_next,
            (LPVOID)cast_pointer_function(CPcBangFavorInstance8_wrapper),
            (LPVOID)cast_pointer_function((struct CPcBangFavor*(*)())&CPcBangFavor::Instance) },
        {   (LPVOID)0x14040bc80L,
            (LPVOID *)&CPcBangFavorIsEnable10_user,
            (LPVOID *)&CPcBangFavorIsEnable10_next,
            (LPVOID)cast_pointer_function(CPcBangFavorIsEnable10_wrapper),
            (LPVOID)cast_pointer_function((int(CPcBangFavor::*)())&CPcBangFavor::IsEnable) },
        {   (LPVOID)0x14040bbc0L,
            (LPVOID *)&CPcBangFavorLoadPcBangData12_user,
            (LPVOID *)&CPcBangFavorLoadPcBangData12_next,
            (LPVOID)cast_pointer_function(CPcBangFavorLoadPcBangData12_wrapper),
            (LPVOID)cast_pointer_function((int(CPcBangFavor::*)())&CPcBangFavor::LoadPcBangData) },
        {   (LPVOID)0x14040c540L,
            (LPVOID *)&CPcBangFavorPcBangDeleteItem14_user,
            (LPVOID *)&CPcBangFavorPcBangDeleteItem14_next,
            (LPVOID)cast_pointer_function(CPcBangFavorPcBangDeleteItem14_wrapper),
            (LPVOID)cast_pointer_function((void(CPcBangFavor::*)(struct CPlayer*))&CPcBangFavor::PcBangDeleteItem) },
        {   (LPVOID)0x14040bff0L,
            (LPVOID *)&CPcBangFavorPcBangGiveItem16_user,
            (LPVOID *)&CPcBangFavorPcBangGiveItem16_next,
            (LPVOID)cast_pointer_function(CPcBangFavorPcBangGiveItem16_wrapper),
            (LPVOID)cast_pointer_function((bool(CPcBangFavor::*)(struct CPlayer*, unsigned int, char*, int))&CPcBangFavor::PcBangGiveItem) },
        {   (LPVOID)0x14040bb70L,
            (LPVOID *)&CPcBangFavordtor_CPcBangFavor21_user,
            (LPVOID *)&CPcBangFavordtor_CPcBangFavor21_next,
            (LPVOID)cast_pointer_function(CPcBangFavordtor_CPcBangFavor21_wrapper),
            (LPVOID)cast_pointer_function((void(CPcBangFavor::*)())&CPcBangFavor::dtor_CPcBangFavor) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
