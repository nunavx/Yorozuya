// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
#pragma pack(push, 1)
    struct _BUDDY_DB_BASE
    {
        struct  _LIST
        {
            unsigned int dwSerial;
            char wszName[17];
        public:
            void Init()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140076c90L))(this);
            };
            bool IsFilled()
            {
                using org_ptr = bool (WINAPIV*)(struct _LIST*);
                return (org_ptr(0x140075110L))(this);
            };
            _LIST()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140076c40L))(this);
            };
            void ctor__LIST()
            {
                using org_ptr = void (WINAPIV*)(struct _LIST*);
                (org_ptr(0x140076c40L))(this);
            };
        };
        _LIST m_List[50];
    public:
        void Init()
        {
            using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE*);
            (org_ptr(0x140076cc0L))(this);
        };
        _BUDDY_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE*);
            (org_ptr(0x140076bd0L))(this);
        };
        void ctor__BUDDY_DB_BASE()
        {
            using org_ptr = void (WINAPIV*)(struct _BUDDY_DB_BASE*);
            (org_ptr(0x140076bd0L))(this);
        };
    };
#pragma pack(pop)
END_ATF_NAMESPACE
