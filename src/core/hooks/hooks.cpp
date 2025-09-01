#include "..\..\includes.h"
#include "..\..\utils\minhook\MinHook.h"

#define CreateHook( Pointer, Function, Original ) if ( MH_CreateHook( ( LPVOID )( Pointer ), ( LPVOID )( Function ), ( LPVOID* )( &Original ) ) != MH_OK ) { return 0; }
bool c_hooks::init( ) {

	MH_STATUS Status = MH_Initialize( );
	if ( Status != MH_OK )
		return 0;

	// PresentHook
	CreateHook( pattern::find( g_cs->m_renderer_dll, "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 EC ? 41 8B E8" ).as< void* >( ), c_hooks::hkPresent, g_hooks->oPresent );

























	MH_EnableHook( MH_ALL_HOOKS );

	return 1;
}