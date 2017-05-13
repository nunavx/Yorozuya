// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CAsyncLogBuffer_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CAsyncLogBufferctor_CAsyncLogBuffer2_ptr CAsyncLogBufferctor_CAsyncLogBuffer2_next(nullptr);
        static info::CAsyncLogBufferctor_CAsyncLogBuffer2_clbk CAsyncLogBufferctor_CAsyncLogBuffer2_user(nullptr);
        static info::CAsyncLogBufferGetFileName4_ptr CAsyncLogBufferGetFileName4_next(nullptr);
        static info::CAsyncLogBufferGetFileName4_clbk CAsyncLogBufferGetFileName4_user(nullptr);
        static info::CAsyncLogBufferGetLength6_ptr CAsyncLogBufferGetLength6_next(nullptr);
        static info::CAsyncLogBufferGetLength6_clbk CAsyncLogBufferGetLength6_user(nullptr);
        static info::CAsyncLogBufferGetStr8_ptr CAsyncLogBufferGetStr8_next(nullptr);
        static info::CAsyncLogBufferGetStr8_clbk CAsyncLogBufferGetStr8_user(nullptr);
        static info::CAsyncLogBufferInit10_ptr CAsyncLogBufferInit10_next(nullptr);
        static info::CAsyncLogBufferInit10_clbk CAsyncLogBufferInit10_user(nullptr);
        static info::CAsyncLogBufferLog12_ptr CAsyncLogBufferLog12_next(nullptr);
        static info::CAsyncLogBufferLog12_clbk CAsyncLogBufferLog12_user(nullptr);
        static info::CAsyncLogBufferdtor_CAsyncLogBuffer16_ptr CAsyncLogBufferdtor_CAsyncLogBuffer16_next(nullptr);
        static info::CAsyncLogBufferdtor_CAsyncLogBuffer16_clbk CAsyncLogBufferdtor_CAsyncLogBuffer16_user(nullptr);
        
        static void CAsyncLogBufferctor_CAsyncLogBuffer2_wrapper(struct CAsyncLogBuffer* _this)
        {
           CAsyncLogBufferctor_CAsyncLogBuffer2_user(_this, CAsyncLogBufferctor_CAsyncLogBuffer2_next);
        };
        static char* CAsyncLogBufferGetFileName4_wrapper(struct CAsyncLogBuffer* _this)
        {
           return CAsyncLogBufferGetFileName4_user(_this, CAsyncLogBufferGetFileName4_next);
        };
        static int CAsyncLogBufferGetLength6_wrapper(struct CAsyncLogBuffer* _this)
        {
           return CAsyncLogBufferGetLength6_user(_this, CAsyncLogBufferGetLength6_next);
        };
        static char* CAsyncLogBufferGetStr8_wrapper(struct CAsyncLogBuffer* _this)
        {
           return CAsyncLogBufferGetStr8_user(_this, CAsyncLogBufferGetStr8_next);
        };
        static bool CAsyncLogBufferInit10_wrapper(struct CAsyncLogBuffer* _this, int iMaxBufferSize)
        {
           return CAsyncLogBufferInit10_user(_this, iMaxBufferSize, CAsyncLogBufferInit10_next);
        };
        static bool CAsyncLogBufferLog12_wrapper(struct CAsyncLogBuffer* _this, char* pszFileName, char* szLog, int iLen)
        {
           return CAsyncLogBufferLog12_user(_this, pszFileName, szLog, iLen, CAsyncLogBufferLog12_next);
        };
        static void CAsyncLogBufferdtor_CAsyncLogBuffer16_wrapper(struct CAsyncLogBuffer* _this)
        {
           CAsyncLogBufferdtor_CAsyncLogBuffer16_user(_this, CAsyncLogBufferdtor_CAsyncLogBuffer16_next);
        };
        
        static hook_record CAsyncLogBuffer_functions[] = {
        {   (LPVOID)0x1403bd290L,
            (LPVOID *)&CAsyncLogBufferctor_CAsyncLogBuffer2_user,
            (LPVOID *)&CAsyncLogBufferctor_CAsyncLogBuffer2_next,
            (LPVOID)cast_pointer_function(CAsyncLogBufferctor_CAsyncLogBuffer2_wrapper),
            (LPVOID)cast_pointer_function((void(CAsyncLogBuffer::*)())&CAsyncLogBuffer::ctor_CAsyncLogBuffer) },
        {   (LPVOID)0x1403c1110L,
            (LPVOID *)&CAsyncLogBufferGetFileName4_user,
            (LPVOID *)&CAsyncLogBufferGetFileName4_next,
            (LPVOID)cast_pointer_function(CAsyncLogBufferGetFileName4_wrapper),
            (LPVOID)cast_pointer_function((char*(CAsyncLogBuffer::*)())&CAsyncLogBuffer::GetFileName) },
        {   (LPVOID)0x1403c1130L,
            (LPVOID *)&CAsyncLogBufferGetLength6_user,
            (LPVOID *)&CAsyncLogBufferGetLength6_next,
            (LPVOID)cast_pointer_function(CAsyncLogBufferGetLength6_wrapper),
            (LPVOID)cast_pointer_function((int(CAsyncLogBuffer::*)())&CAsyncLogBuffer::GetLength) },
        {   (LPVOID)0x1403c1150L,
            (LPVOID *)&CAsyncLogBufferGetStr8_user,
            (LPVOID *)&CAsyncLogBufferGetStr8_next,
            (LPVOID)cast_pointer_function(CAsyncLogBufferGetStr8_wrapper),
            (LPVOID)cast_pointer_function((char*(CAsyncLogBuffer::*)())&CAsyncLogBuffer::GetStr) },
        {   (LPVOID)0x1403bd2f0L,
            (LPVOID *)&CAsyncLogBufferInit10_user,
            (LPVOID *)&CAsyncLogBufferInit10_next,
            (LPVOID)cast_pointer_function(CAsyncLogBufferInit10_wrapper),
            (LPVOID)cast_pointer_function((bool(CAsyncLogBuffer::*)(int))&CAsyncLogBuffer::Init) },
        {   (LPVOID)0x1403bd380L,
            (LPVOID *)&CAsyncLogBufferLog12_user,
            (LPVOID *)&CAsyncLogBufferLog12_next,
            (LPVOID)cast_pointer_function(CAsyncLogBufferLog12_wrapper),
            (LPVOID)cast_pointer_function((bool(CAsyncLogBuffer::*)(char*, char*, int))&CAsyncLogBuffer::Log) },
        {   (LPVOID)0x1403bc990L,
            (LPVOID *)&CAsyncLogBufferdtor_CAsyncLogBuffer16_user,
            (LPVOID *)&CAsyncLogBufferdtor_CAsyncLogBuffer16_next,
            (LPVOID)cast_pointer_function(CAsyncLogBufferdtor_CAsyncLogBuffer16_wrapper),
            (LPVOID)cast_pointer_function((void(CAsyncLogBuffer::*)())&CAsyncLogBuffer::dtor_CAsyncLogBuffer) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
