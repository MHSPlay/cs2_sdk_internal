#include "..\includes.h"

bool c_cs2::init( ) {
	m_done = false;

	if ( m_done )
		return false;

	// grab some modules.
	m_kernel32_dll = PE::GetModule( HASH( "kernel32.dll" ) );
	m_user32_dll   = PE::GetModule( HASH( "user32.dll" ) );
	m_shell32_dll  = PE::GetModule( HASH( "shell32.dll" ) );
	m_shlwapi_dll  = PE::GetModule( HASH( "shlwapi.dll" ) );

	// grab game modules.
	m_client_dll   = PE::GetModule( HASH( "client.dll" ) );
	m_renderer_dll = PE::GetModule( HASH( "gameoverlayrenderer64.dll" ) );
	//m_engine_dll   = PE::GetModule( HASH( "engine.dll" ) );
	//m_vstdlib_dll  = PE::GetModule( HASH( "vstdlib.dll" ) );
	//m_tier0_dll    = PE::GetModule( HASH( "tier0.dll" ) );

	// import winapi functions.
	g_winapi->WideCharToMultiByte = PE::GetExport( m_kernel32_dll, HASH( "WideCharToMultiByte" ) ).as< c_WinAPI::WideCharToMultiByte_t >( );
	g_winapi->MultiByteToWideChar = PE::GetExport( m_kernel32_dll, HASH( "MultiByteToWideChar" ) ).as< c_WinAPI::MultiByteToWideChar_t >( );
	g_winapi->GetTickCount        = PE::GetExport( m_kernel32_dll, HASH( "GetTickCount" ) ).as< c_WinAPI::GetTickCount_t >( );
	g_winapi->VirtualProtect      = PE::GetExport( m_kernel32_dll, HASH( "VirtualProtect" ) ).as< c_WinAPI::VirtualProtect_t >( );
	g_winapi->VirtualQuery        = PE::GetExport( m_kernel32_dll, HASH( "VirtualQuery" ) ).as< c_WinAPI::VirtualQuery_t >( );
	g_winapi->CreateDirectoryA    = PE::GetExport( m_kernel32_dll, HASH( "CreateDirectoryA" ) ).as< c_WinAPI::CreateDirectoryA_t >( );
	g_winapi->SetWindowLongA      = PE::GetExport( m_user32_dll,   HASH( "SetWindowLongA" ) ).as< c_WinAPI::SetWindowLongA_t >( );
	g_winapi->CallWindowProcA     = PE::GetExport( m_user32_dll,   HASH( "CallWindowProcA" ) ).as< c_WinAPI::CallWindowProcA_t >( );
	g_winapi->SHGetFolderPathA    = PE::GetExport( m_shell32_dll,  HASH( "SHGetFolderPathA" ) ).as< c_WinAPI::SHGetFolderPathA_t >( );
	g_winapi->PathAppendA         = PE::GetExport( m_shlwapi_dll,  HASH( "PathAppendA" ) ).as< c_WinAPI::PathAppendA_t >( );


	g_hooks->init( );



	m_done = true;
	return true;
}