// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CUnmannedTraderSortType_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CUnmannedTraderSortTypector_CUnmannedTraderSortType2_ptr CUnmannedTraderSortTypector_CUnmannedTraderSortType2_next(nullptr);
        static info::CUnmannedTraderSortTypector_CUnmannedTraderSortType2_clbk CUnmannedTraderSortTypector_CUnmannedTraderSortType2_user(nullptr);
        static info::CUnmannedTraderSortTypeGetID4_ptr CUnmannedTraderSortTypeGetID4_next(nullptr);
        static info::CUnmannedTraderSortTypeGetID4_clbk CUnmannedTraderSortTypeGetID4_user(nullptr);
        static info::CUnmannedTraderSortTypeGetQuery6_ptr CUnmannedTraderSortTypeGetQuery6_next(nullptr);
        static info::CUnmannedTraderSortTypeGetQuery6_clbk CUnmannedTraderSortTypeGetQuery6_user(nullptr);
        static info::CUnmannedTraderSortTypeLoadXML8_ptr CUnmannedTraderSortTypeLoadXML8_next(nullptr);
        static info::CUnmannedTraderSortTypeLoadXML8_clbk CUnmannedTraderSortTypeLoadXML8_user(nullptr);
        static info::CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_ptr CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_next(nullptr);
        static info::CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_clbk CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_user(nullptr);
        
        static void CUnmannedTraderSortTypector_CUnmannedTraderSortType2_wrapper(struct CUnmannedTraderSortType* _this, unsigned int dwID)
        {
           CUnmannedTraderSortTypector_CUnmannedTraderSortType2_user(_this, dwID, CUnmannedTraderSortTypector_CUnmannedTraderSortType2_next);
        };
        static unsigned int CUnmannedTraderSortTypeGetID4_wrapper(struct CUnmannedTraderSortType* _this)
        {
           return CUnmannedTraderSortTypeGetID4_user(_this, CUnmannedTraderSortTypeGetID4_next);
        };
        static char* CUnmannedTraderSortTypeGetQuery6_wrapper(struct CUnmannedTraderSortType* _this)
        {
           return CUnmannedTraderSortTypeGetQuery6_user(_this, CUnmannedTraderSortTypeGetQuery6_next);
        };
        static bool CUnmannedTraderSortTypeLoadXML8_wrapper(struct CUnmannedTraderSortType* _this, struct TiXmlElement* pkElemSortType, struct CLogFile* kLogger, unsigned int dwDivisionID)
        {
           return CUnmannedTraderSortTypeLoadXML8_user(_this, pkElemSortType, kLogger, dwDivisionID, CUnmannedTraderSortTypeLoadXML8_next);
        };
        static void CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_wrapper(struct CUnmannedTraderSortType* _this)
        {
           CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_user(_this, CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_next);
        };
        
        static hook_record CUnmannedTraderSortType_functions[] = {
        {   (LPVOID)0x140376c90L,
            (LPVOID *)&CUnmannedTraderSortTypector_CUnmannedTraderSortType2_user,
            (LPVOID *)&CUnmannedTraderSortTypector_CUnmannedTraderSortType2_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderSortTypector_CUnmannedTraderSortType2_wrapper),
            (LPVOID)cast_pointer_function((void(CUnmannedTraderSortType::*)(unsigned int))&CUnmannedTraderSortType::ctor_CUnmannedTraderSortType) },
        {   (LPVOID)0x14036f280L,
            (LPVOID *)&CUnmannedTraderSortTypeGetID4_user,
            (LPVOID *)&CUnmannedTraderSortTypeGetID4_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderSortTypeGetID4_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderSortType::*)())&CUnmannedTraderSortType::GetID) },
        {   (LPVOID)0x14035f6f0L,
            (LPVOID *)&CUnmannedTraderSortTypeGetQuery6_user,
            (LPVOID *)&CUnmannedTraderSortTypeGetQuery6_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderSortTypeGetQuery6_wrapper),
            (LPVOID)cast_pointer_function((char*(CUnmannedTraderSortType::*)())&CUnmannedTraderSortType::GetQuery) },
        {   (LPVOID)0x140376d20L,
            (LPVOID *)&CUnmannedTraderSortTypeLoadXML8_user,
            (LPVOID *)&CUnmannedTraderSortTypeLoadXML8_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderSortTypeLoadXML8_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderSortType::*)(struct TiXmlElement*, struct CLogFile*, unsigned int))&CUnmannedTraderSortType::LoadXML) },
        {   (LPVOID)0x140376d10L,
            (LPVOID *)&CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_user,
            (LPVOID *)&CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderSortTypedtor_CUnmannedTraderSortType14_wrapper),
            (LPVOID)cast_pointer_function((void(CUnmannedTraderSortType::*)())&CUnmannedTraderSortType::dtor_CUnmannedTraderSortType) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
