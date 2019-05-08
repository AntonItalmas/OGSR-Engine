#pragma once
// Для изменения настроек нужно создать папку build_config_overrides,
// скопировать этот файл в нее и изменить, как требуется.

//***********************************[Настройки отладочных режимов]***********************************
// Включает кастомное окно с сообщением об ошибках, выключает стандартное "Прекращена работа программы..."
#define USE_OWN_ERROR_MESSAGE_WINDOW

// Включает создание минидампов при вылетах
#define USE_OWN_MINI_DUMP

// Включает новые отладочные сообщения и ассерты - LogDbg, MsgDbg, FuncDbg, ASSERT_FMT_DBG
//#define OGSR_TOTAL_DBG

// Включает вылет, если в vertex() будет передан не валидный вертекс. Совсем строгий режим, более строгий чем OGSR_TOTAL_DBG, поэтому отдельно.
//#define CRASH_ON_INVALID_VERTEX_ID

// Отключить все отладочные ассерты DEBUG конфигурации
// Это может пригодиться в случае, если нужно отлаживать какой-нибудь мод, но отладочную сборку с этим модом запустить нереально.
// Из-за того, что в модах зачастую всё очень криво сделано, ассерты будут срабатывать на каждый чих. Это и на ОГСЕ так, на солянке - думаю, ещё хуже.
// В этом случае нужно переключиться на DEBUG конфигурацию, и раскомментировать этот дефайн:
#define DISABLE_DBG_ASSERTIONS

// Валидатор желательно использовать только при отладке проблем с памятью.
//#define USE_MEMORY_VALIDATOR
//****************************************************************************************************

#define FSLTX "fsgame.ltx"

// Сколько последних сообщений показывать в истории ПДА
#define NEWS_TO_SHOW 500

// Включить эксклюзивный режим для DirectInput ( В чём его профит - я не знаю, но совершенно точно в нём блокируются мультимедийные кнопки на клавиатуре и мыши )
// Для переключения режима без пересборки движка есть специальный ключ запуска "-switch_exclusive_dinput"
#define DINPUT_ENABLE_EXCLUSIVE_MODE false

// Изменяет принцип работы дуплета для оружия на классе CWeaponShotgun
// Вместо дуплета по кнопке прицеливания, дуплет можно включить\выключить скриптом 
// Вкдючить\выключить - wpn:get_weapon_sg():switch_duplet()
// Проверить статус - wpn:get_weapon_sg().is_duplet_enabled
// Сделано для того, что бы сохранить возможность прицеливания
// KRodin to all: Дуплет вообще надо вынести в отдельный режим стрельбы, и убрать эту опцию вообще.
//#define DUPLET_STATE_SWITCH

// Включает учет параметра k_ap у патрона при расчета урона для НПС
// Формула такая же как при расчете урона для ГГ
// Может потребовать перенстройку конфигов патронов
//#define APPLY_ARMOR_PIERCING_TO_NPC

// В этом режиме удаление поршня, в котором указаны <article>, удалит и эти
// статьи.
//#define REMOVE_ARTICLES_ON_DISABLE_INFO

//****************************************************************************************************
// Использовать формат .thm файлов ТЧ вместо ЗП
#define USE_SHOC_THM_FORMAT

// Включить поддержку textures.ltx, parallax из OGSE так же поддерживается
#define USE_TEXTURES_LTX

// Включить обработку секции [reduce_lod_texture_list]
//#define USE_REDUCE_LOD_TEXTURE_LIST

// По умолчанию объемный туман выключен, т.к. он тянет кучу всего из физики, которого нет в ТЧ.
// На самом деле он не особо и нужен, т.к. его надо на локациях расставлять, насколько я знаю.
// Если уж когда-то вздумаю его включить - надо не забыть этот фикс перенести: https://github.com/OpenXRay/xray-16/commit/673ce46f3f26b0eafd7396389d6ae060076e6ba8
//#define DX10_FLUID_ENABLE

// Включить использование ЗП-конфигов погоды
//#define USE_COP_WEATHER_CONFIGS

// Убрать поддержку статического рендера
//#define EXCLUDE_R1
//****************************************************************************************************
