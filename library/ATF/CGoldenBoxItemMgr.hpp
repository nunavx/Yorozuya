// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>
#include <CMyTimer.hpp>
#include <_ItemExchange_fld.hpp>
#include <_STORAGE_LIST.hpp>
#include <_SYSTEMTIME.hpp>
#include <_db_golden_box_item.hpp>
#include <_goldbox_index.hpp>
#include <_golden_box_item.hpp>
#include <_golden_box_item_event.hpp>
#include <_golden_box_item_ini.hpp>


START_ATF_NAMESPACE
    struct CGoldenBoxItemMgr
    {
        struct _BoxItemOpen_output
        {
            char m_itmPdOutput[8];
            int m_nPdProCnt;
            unsigned int m_dwProb;
        };
        CLogFile _kLogger;
        CMyTimer m_tmLoopTimer;
        _golden_box_item_event m_golden_box_event;
        _golden_box_item m_golden_box_item;
        _db_golden_box_item m_golden_box_item_New;
        _db_golden_box_item m_golden_box_item_Old;
        _db_golden_box_item m_temp_db;
        unsigned __int16 m_wStarterBoxNum;
        bool m_bInit;
        _SYSTEMTIME tm;
        _SYSTEMTIME tm1;
        bool m_bConsume;
        _goldbox_index *m_pItemIndex;
        int m_nDBSerial;
        _BoxItemOpen_output *m_pBoxItemOpen;
    public:
        void BoxItemDataCopy();
        struct _ItemExchange_fld::_output* BoxItemOpen(char byIndex);
        void BoxItemOpenEffectType(char* szUseItem, char* szNewItem, char* pbyType, bool* bCircle);
        CGoldenBoxItemMgr();
        void ctor_CGoldenBoxItemMgr();
        void Check_Event_Status();
        void Check_Loaded_Event_Status();
        struct _db_golden_box_item* GetGodBoxItemInfoPtr();
        uint16_t GetGoldBoxItemIndex(uint16_t wIndex);
        char* GetGoldBoxItemPtr();
        char GetLoopCount();
        uint16_t GetOreItemTotalCnt();
        char* GetStarterBoxCode(uint16_t wIndex);
        uint16_t Get_BoxItem_Count(char byIndex, unsigned int dwIndex);
        uint16_t Get_Box_Count(char byIndex);
        char Get_Event_Status();
        uint16_t Get_StarterBox_Count();
        bool Initialize();
        static struct CGoldenBoxItemMgr* Instance();
        char IsBuyRaceBossGoldBox(struct CPlayer* pOne);
        bool Load_Event_INI(struct _golden_box_item_ini* pIni);
        bool Load_Golden_Box_Item_Event();
        void Loop_Event();
        void PushDQSUpdate();
        void RateCheck(char byIndex);
        void SendMsg_RaceChat(struct CPlayer* pOne, char* pwszChatData);
        void SetDBSerial(int nDBSerial);
        bool SetGoldBoxItemIndex();
        void Set_BoxItem_Count(char byIndex, unsigned int dwIndex);
        void Set_Box_Count(char byIndex);
        void Set_DCK(char byDCK);
        void Set_Event_Status(char byStatus);
        void Set_FromINIToStruct(struct _golden_box_item_ini* pIni);
        void Set_FromStruct();
        void Set_StarterBox_Count(unsigned int dwNum, bool bAdd);
        void Set_ToStruct();
        bool StarterBox_InsertToInven(struct CPlayer* pOne, char* szItemCode);
        bool SynchINIANDDB();
        void WriteEventCouponLog(struct CPlayer* pOne, struct _STORAGE_LIST::_db_con* pItem);
        void WriteGetGoldBarLog(struct CPlayer* pOne, struct _STORAGE_LIST::_db_con* pItem);
        bool _init_loggers();
        bool _insert_to_inven(struct CPlayer* pOne, char byTableCode, uint16_t wItemIndex);
        ~CGoldenBoxItemMgr();
        void dtor_CGoldenBoxItemMgr();
    };
END_ATF_NAMESPACE
