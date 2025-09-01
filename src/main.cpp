#include "includes.h"

int __stdcall undo( ) {
	//events::undo();

	//hooks::undo();

	//input::undo();

	return 1;
}

ulong_t __stdcall init( LPVOID module ) {
	
	if ( !g_cs->init( ) )
		return 0;

	//while ( !input::get_key< ON_KEY >( VK_END ) ) 
	//	std::this_thread::sleep_for( std::chrono::milliseconds( 200 ) );
	//
	//undo( );

	//FreeLibraryAndExitThread( reinterpret_cast< HMODULE >( module ), 0 );

	return 1;
}

int __stdcall DllMain( HMODULE module, ulong_t reason, void* reserved ) {

    if ( reason != DLL_PROCESS_ATTACH )
        return reserved || reason != DLL_PROCESS_DETACH ? 0 : undo( );

    DisableThreadLibraryCalls( module );

    if ( const auto thread = CreateThread( 0, 0, init, module, 0, 0 ) ) 
        CloseHandle( thread );

    return 1;
}