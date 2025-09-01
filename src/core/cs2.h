#pragma once

class c_cs2 {
public:
	//using MD5_PseudoRandom_t = uint32_t(__thiscall *)(uint32_t);
	//using GetGlowObjectManager_t = CGlowObjectManager * (__cdecl *)();
	//using RandomSeed_t = void(__cdecl *)(int);
	//using RandomInt_t = int(__cdecl *)(int, int);
	//using RandomFloat_t = float(__cdecl *)(float, float);
	//using IsBreakableEntity_t = bool(__thiscall *)(Entity *);
	//using AngleMatrix_t = void(__fastcall *)(const ang_t &, matrix3x4_t &);
	//using LoadFromBuffer_t = bool(__thiscall *)(KeyValues *, const char *, const char *, void *, void *, void *);
	//using ServerRankRevealAll_t = bool(__cdecl *)(CCSUsrMsg_ServerRankRevealAll *);
	//using IsReady_t = void(__cdecl *)();
	//using ShowAndUpdateSelection_t = void(__thiscall *)(CHudElement *, int, Weapon *, bool);
	//using GetEconItemView_t = C_EconItemView * (__thiscall *)(Weapon *);
	//using GetStaticData_t = CEconItemDefinition * (__thiscall *)(C_EconItemView *);
	//using ConcatTransforms_t = void(__fastcall *)();
	//using BeamAlloc_t = Beam_t * (__thiscall *)(IViewRenderBeams *, bool);
	//using SetupBeam_t = void(__stdcall *)(Beam_t *, const BeamInfo_t &);
	//using ClearNotices_t = void(__thiscall *)(KillFeed_t *);
	//using AddListenerEntity_t = void(__stdcall *)(IEntityListener *);
	//using GetShotgunSpread_t = void(__stdcall *)(int, int, int, float *, float *);

public:
	bool m_done;

	// module objects.
	PE::c_module m_kernel32_dll;
	PE::c_module m_user32_dll;
	PE::c_module m_shell32_dll;
	PE::c_module m_shlwapi_dll;

	PE::c_module m_client_dll;
	PE::c_module m_renderer_dll;


	//PE::Module m_engine_dll;
	//PE::Module m_vstdlib_dll;
	//PE::Module m_tier0_dll;
	//PE::Module m_serverbrowser_dll;

public:
	// interface ptrs.
	

public:
	// convars.
	/*ConVar *clear;
	ConVar *toggleconsole;
	ConVar *name;
	ConVar *sv_maxunlag;
	ConVar *sv_gravity;
	ConVar *sv_jump_impulse;
	ConVar *sv_enablebunnyhopping;
	ConVar *sv_airaccelerate;
	ConVar *sv_friction;
	ConVar *sv_stopspeed;
	ConVar *cl_interp;
	ConVar *cl_interp_ratio;
	ConVar *cl_updaterate;
	ConVar *cl_cmdrate;
	ConVar *cl_lagcompensation;
	ConVar *mp_teammates_are_enemies;
	ConVar *weapon_debug_spread_show;
	ConVar *net_showfragments;
	ConVar *molotov_throw_detonate_time;
	ConVar *weapon_molotov_maxdetonateslope;
	ConVar *weapon_recoil_scale;
	ConVar *view_recoil_tracking;
	ConVar *cl_fullupdate;
	ConVar *r_DrawSpecificStaticProp;
	ConVar *cl_crosshair_sniper_width;
	ConVar *hud_scaling;
	ConVar *sv_clip_penetration_traces_to_players;
	ConVar *weapon_accuracy_shotgun_spread_patterns;*/

public:
	// functions.
	

public:
	// initialize class.
	bool init( );
};

inline const std::unique_ptr< c_cs2 > g_cs{ new c_cs2( ) };