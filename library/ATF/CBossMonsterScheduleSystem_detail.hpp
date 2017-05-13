// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CBossMonsterScheduleSystem_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CBossMonsterScheduleSystemAnalysisMsg2_ptr CBossMonsterScheduleSystemAnalysisMsg2_next(nullptr);
        static info::CBossMonsterScheduleSystemAnalysisMsg2_clbk CBossMonsterScheduleSystemAnalysisMsg2_user(nullptr);
        static info::CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_ptr CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_next(nullptr);
        static info::CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_clbk CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_user(nullptr);
        static info::CBossMonsterScheduleSystemCreateTaskPool6_ptr CBossMonsterScheduleSystemCreateTaskPool6_next(nullptr);
        static info::CBossMonsterScheduleSystemCreateTaskPool6_clbk CBossMonsterScheduleSystemCreateTaskPool6_user(nullptr);
        static info::CBossMonsterScheduleSystemCreateWorkerThread8_ptr CBossMonsterScheduleSystemCreateWorkerThread8_next(nullptr);
        static info::CBossMonsterScheduleSystemCreateWorkerThread8_clbk CBossMonsterScheduleSystemCreateWorkerThread8_user(nullptr);
        static info::CBossMonsterScheduleSystemInit10_ptr CBossMonsterScheduleSystemInit10_next(nullptr);
        static info::CBossMonsterScheduleSystemInit10_clbk CBossMonsterScheduleSystemInit10_user(nullptr);
        static info::CBossMonsterScheduleSystemInstance12_ptr CBossMonsterScheduleSystemInstance12_next(nullptr);
        static info::CBossMonsterScheduleSystemInstance12_clbk CBossMonsterScheduleSystemInstance12_user(nullptr);
        static info::CBossMonsterScheduleSystemLoadSchedule14_ptr CBossMonsterScheduleSystemLoadSchedule14_next(nullptr);
        static info::CBossMonsterScheduleSystemLoadSchedule14_clbk CBossMonsterScheduleSystemLoadSchedule14_user(nullptr);
        static info::CBossMonsterScheduleSystemMakeMap16_ptr CBossMonsterScheduleSystemMakeMap16_next(nullptr);
        static info::CBossMonsterScheduleSystemMakeMap16_clbk CBossMonsterScheduleSystemMakeMap16_user(nullptr);
        static info::CBossMonsterScheduleSystemMakeSchedule18_ptr CBossMonsterScheduleSystemMakeSchedule18_next(nullptr);
        static info::CBossMonsterScheduleSystemMakeSchedule18_clbk CBossMonsterScheduleSystemMakeSchedule18_user(nullptr);
        static info::CBossMonsterScheduleSystemMakeTBL20_ptr CBossMonsterScheduleSystemMakeTBL20_next(nullptr);
        static info::CBossMonsterScheduleSystemMakeTBL20_clbk CBossMonsterScheduleSystemMakeTBL20_user(nullptr);
        static info::CBossMonsterScheduleSystemRespawnMonster22_ptr CBossMonsterScheduleSystemRespawnMonster22_next(nullptr);
        static info::CBossMonsterScheduleSystemRespawnMonster22_clbk CBossMonsterScheduleSystemRespawnMonster22_user(nullptr);
        static info::CBossMonsterScheduleSystemSavechedule24_ptr CBossMonsterScheduleSystemSavechedule24_next(nullptr);
        static info::CBossMonsterScheduleSystemSavechedule24_clbk CBossMonsterScheduleSystemSavechedule24_user(nullptr);
        static info::CBossMonsterScheduleSystemWorkProc26_ptr CBossMonsterScheduleSystemWorkProc26_next(nullptr);
        static info::CBossMonsterScheduleSystemWorkProc26_clbk CBossMonsterScheduleSystemWorkProc26_user(nullptr);
        static info::CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_ptr CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_next(nullptr);
        static info::CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_clbk CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_user(nullptr);
        
        static void CBossMonsterScheduleSystemAnalysisMsg2_wrapper(struct CBossMonsterScheduleSystem* _this, struct ScheduleMSG* pMSG)
        {
           CBossMonsterScheduleSystemAnalysisMsg2_user(_this, pMSG, CBossMonsterScheduleSystemAnalysisMsg2_next);
        };
        static void CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_user(_this, CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_next);
        };
        static bool CBossMonsterScheduleSystemCreateTaskPool6_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           return CBossMonsterScheduleSystemCreateTaskPool6_user(_this, CBossMonsterScheduleSystemCreateTaskPool6_next);
        };
        static bool CBossMonsterScheduleSystemCreateWorkerThread8_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           return CBossMonsterScheduleSystemCreateWorkerThread8_user(_this, CBossMonsterScheduleSystemCreateWorkerThread8_next);
        };
        static bool CBossMonsterScheduleSystemInit10_wrapper(struct CBossMonsterScheduleSystem* _this, struct CMapOperation* pMapOper)
        {
           return CBossMonsterScheduleSystemInit10_user(_this, pMapOper, CBossMonsterScheduleSystemInit10_next);
        };
        static struct CBossMonsterScheduleSystem* CBossMonsterScheduleSystemInstance12_wrapper()
        {
           return CBossMonsterScheduleSystemInstance12_user(CBossMonsterScheduleSystemInstance12_next);
        };
        static struct BossSchedule* CBossMonsterScheduleSystemLoadSchedule14_wrapper(struct CBossMonsterScheduleSystem* _this, struct BossSchedule_Map* pMapSchedule, struct INI_Section* pSection)
        {
           return CBossMonsterScheduleSystemLoadSchedule14_user(_this, pMapSchedule, pSection, CBossMonsterScheduleSystemLoadSchedule14_next);
        };
        static struct BossSchedule_Map* CBossMonsterScheduleSystemMakeMap16_wrapper(struct CBossMonsterScheduleSystem* _this, int nIndex, struct CMapData* pMap)
        {
           return CBossMonsterScheduleSystemMakeMap16_user(_this, nIndex, pMap, CBossMonsterScheduleSystemMakeMap16_next);
        };
        static struct BossSchedule* CBossMonsterScheduleSystemMakeSchedule18_wrapper(struct CBossMonsterScheduleSystem* _this, struct BossSchedule_Map* pMapSchedule, struct _mon_active* pMonAct, struct _mon_block* pBlock, int nActIndex, int nBlockIndex)
        {
           return CBossMonsterScheduleSystemMakeSchedule18_user(_this, pMapSchedule, pMonAct, pBlock, nActIndex, nBlockIndex, CBossMonsterScheduleSystemMakeSchedule18_next);
        };
        static struct BossSchedule_TBL* CBossMonsterScheduleSystemMakeTBL20_wrapper(struct CBossMonsterScheduleSystem* _this, struct CMapOperation* pMapOper)
        {
           return CBossMonsterScheduleSystemMakeTBL20_user(_this, pMapOper, CBossMonsterScheduleSystemMakeTBL20_next);
        };
        static void CBossMonsterScheduleSystemRespawnMonster22_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           CBossMonsterScheduleSystemRespawnMonster22_user(_this, CBossMonsterScheduleSystemRespawnMonster22_next);
        };
        static void CBossMonsterScheduleSystemSavechedule24_wrapper(struct CBossMonsterScheduleSystem* _this, struct BossSchedule_Map* pMapSchedule, struct BossSchedule* pSchedule)
        {
           CBossMonsterScheduleSystemSavechedule24_user(_this, pMapSchedule, pSchedule, CBossMonsterScheduleSystemSavechedule24_next);
        };
        static int CBossMonsterScheduleSystemWorkProc26_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           return CBossMonsterScheduleSystemWorkProc26_user(_this, CBossMonsterScheduleSystemWorkProc26_next);
        };
        static void CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_wrapper(struct CBossMonsterScheduleSystem* _this)
        {
           CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_user(_this, CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_next);
        };
        
        static hook_record CBossMonsterScheduleSystem_functions[] = {
        {   (LPVOID)0x140419cb0L,
            (LPVOID *)&CBossMonsterScheduleSystemAnalysisMsg2_user,
            (LPVOID *)&CBossMonsterScheduleSystemAnalysisMsg2_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemAnalysisMsg2_wrapper),
            (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)(struct ScheduleMSG*))&CBossMonsterScheduleSystem::AnalysisMsg) },
        {   (LPVOID)0x140418610L,
            (LPVOID *)&CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_user,
            (LPVOID *)&CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_wrapper),
            (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::ctor_CBossMonsterScheduleSystem) },
        {   (LPVOID)0x140419a80L,
            (LPVOID *)&CBossMonsterScheduleSystemCreateTaskPool6_user,
            (LPVOID *)&CBossMonsterScheduleSystemCreateTaskPool6_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemCreateTaskPool6_wrapper),
            (LPVOID)cast_pointer_function((bool(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::CreateTaskPool) },
        {   (LPVOID)0x140419ae0L,
            (LPVOID *)&CBossMonsterScheduleSystemCreateWorkerThread8_user,
            (LPVOID *)&CBossMonsterScheduleSystemCreateWorkerThread8_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemCreateWorkerThread8_wrapper),
            (LPVOID)cast_pointer_function((bool(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::CreateWorkerThread) },
        {   (LPVOID)0x140419b60L,
            (LPVOID *)&CBossMonsterScheduleSystemInit10_user,
            (LPVOID *)&CBossMonsterScheduleSystemInit10_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemInit10_wrapper),
            (LPVOID)cast_pointer_function((bool(CBossMonsterScheduleSystem::*)(struct CMapOperation*))&CBossMonsterScheduleSystem::Init) },
        {   (LPVOID)0x1401991b0L,
            (LPVOID *)&CBossMonsterScheduleSystemInstance12_user,
            (LPVOID *)&CBossMonsterScheduleSystemInstance12_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemInstance12_wrapper),
            (LPVOID)cast_pointer_function((struct CBossMonsterScheduleSystem*(*)())&CBossMonsterScheduleSystem::Instance) },
        {   (LPVOID)0x140418ac0L,
            (LPVOID *)&CBossMonsterScheduleSystemLoadSchedule14_user,
            (LPVOID *)&CBossMonsterScheduleSystemLoadSchedule14_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemLoadSchedule14_wrapper),
            (LPVOID)cast_pointer_function((struct BossSchedule*(CBossMonsterScheduleSystem::*)(struct BossSchedule_Map*, struct INI_Section*))&CBossMonsterScheduleSystem::LoadSchedule) },
        {   (LPVOID)0x140419160L,
            (LPVOID *)&CBossMonsterScheduleSystemMakeMap16_user,
            (LPVOID *)&CBossMonsterScheduleSystemMakeMap16_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemMakeMap16_wrapper),
            (LPVOID)cast_pointer_function((struct BossSchedule_Map*(CBossMonsterScheduleSystem::*)(int, struct CMapData*))&CBossMonsterScheduleSystem::MakeMap) },
        {   (LPVOID)0x1404187f0L,
            (LPVOID *)&CBossMonsterScheduleSystemMakeSchedule18_user,
            (LPVOID *)&CBossMonsterScheduleSystemMakeSchedule18_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemMakeSchedule18_wrapper),
            (LPVOID)cast_pointer_function((struct BossSchedule*(CBossMonsterScheduleSystem::*)(struct BossSchedule_Map*, struct _mon_active*, struct _mon_block*, int, int))&CBossMonsterScheduleSystem::MakeSchedule) },
        {   (LPVOID)0x1404198c0L,
            (LPVOID *)&CBossMonsterScheduleSystemMakeTBL20_user,
            (LPVOID *)&CBossMonsterScheduleSystemMakeTBL20_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemMakeTBL20_wrapper),
            (LPVOID)cast_pointer_function((struct BossSchedule_TBL*(CBossMonsterScheduleSystem::*)(struct CMapOperation*))&CBossMonsterScheduleSystem::MakeTBL) },
        {   (LPVOID)0x140419d90L,
            (LPVOID *)&CBossMonsterScheduleSystemRespawnMonster22_user,
            (LPVOID *)&CBossMonsterScheduleSystemRespawnMonster22_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemRespawnMonster22_wrapper),
            (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::RespawnMonster) },
        {   (LPVOID)0x140419020L,
            (LPVOID *)&CBossMonsterScheduleSystemSavechedule24_user,
            (LPVOID *)&CBossMonsterScheduleSystemSavechedule24_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemSavechedule24_wrapper),
            (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)(struct BossSchedule_Map*, struct BossSchedule*))&CBossMonsterScheduleSystem::Savechedule) },
        {   (LPVOID)0x140419c10L,
            (LPVOID *)&CBossMonsterScheduleSystemWorkProc26_user,
            (LPVOID *)&CBossMonsterScheduleSystemWorkProc26_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemWorkProc26_wrapper),
            (LPVOID)cast_pointer_function((int(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::WorkProc) },
        {   (LPVOID)0x1404186d0L,
            (LPVOID *)&CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_user,
            (LPVOID *)&CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_next,
            (LPVOID)cast_pointer_function(CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_wrapper),
            (LPVOID)cast_pointer_function((void(CBossMonsterScheduleSystem::*)())&CBossMonsterScheduleSystem::dtor_CBossMonsterScheduleSystem) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
