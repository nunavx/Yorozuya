#include "stdafx.h"

#include "AttackSystem.h"
#include <ATF/Global.hpp>
#include <ATF/_SiegeKitItem_fld.hpp>

namespace GameServer
{
    namespace Fixes
    {
        using namespace ATF;

        void CAttackSystem::load()
        {
            auto& core = CATFCore::get_instance();
            core.set_hook(&ATF::CPlayer::_pre_check_skill_attack, &CAttackSystem::_pre_check_skill_attack);
        }

        void CAttackSystem::unload()
        {
            auto& core = CATFCore::get_instance();
            core.unset_hook(&ATF::CPlayer::_pre_check_skill_attack);
        }

        void CAttackSystem::loop()
        {
        }

        ModuleVersion_t CAttackSystem::get_version()
        {
            return usVersion;
        }

        ModuleName_t CAttackSystem::get_name()
        {
            static const ModuleName_t name = "fix_AttackSystem";
            return name;
        }

        void CAttackSystem::configure(
            const rapidjson::Value & nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
        }

        int WINAPIV CAttackSystem::_pre_check_skill_attack(
            ATF::CPlayer * pPlayer, 
            ATF::CCharacter * pDst, 
            float * pfAttackPos, 
            char byEffectCode, 
            ATF::_skill_fld * pSkillFld, 
            uint16_t wBulletSerial, 
            ATF::_STORAGE_LIST::_db_con ** ppBulletProp, 
            ATF::_BulletItem_fld ** ppfldBullet, 
            int nEffectGroup, 
            uint16_t * pdwDecPoint, 
            uint16_t wEffBtSerial, 
            ATF::_STORAGE_LIST::_db_con ** ppEffBtProp, 
            ATF::_BulletItem_fld ** ppfldEffBt, 
            ATF::Info::CPlayer_pre_check_skill_attack1374_ptr next)
        {
            if (!pSkillFld)
                return -60;

            if (byEffectCode == 2)
            {
                if (pPlayer->IsSiegeMode())
                {
                    if (pSkillFld->m_nTempEffectType != 23)
                        return -20;

                    auto& RecordData = ATF::Global::g_MainThread->m_tblItemData[pPlayer->m_pSiegeItem->m_byTableCode];
                    ATF::_SiegeKitItem_fld* item = (ATF::_SiegeKitItem_fld*)RecordData.GetRecord(pPlayer->m_pSiegeItem->m_wItemIndex);

                    if (item->m_nLevelLim == 30 && pSkillFld->m_nLv != 0)
                        return -20;

                    if (item->m_nLevelLim == 40 && pSkillFld->m_nLv != 1)
                        return -20;
                }
                else if (pSkillFld->m_nTempEffectType == 23)
                {
                    return -20;
                }
            }

            return next(
                pPlayer,
                pDst,
                pfAttackPos,
                byEffectCode,
                pSkillFld,
                wBulletSerial,
                ppBulletProp,
                ppfldBullet,
                nEffectGroup,
                pdwDecPoint,
                wEffBtSerial,
                ppEffBtProp,
                ppfldEffBt);
        }
    }
}