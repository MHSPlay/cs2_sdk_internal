#pragma once

class c_hooks {
public:
	typedef HRESULT( __stdcall* Present_t ) ( IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags );
	Present_t oPresent = nullptr;

public:
	static HRESULT __stdcall hkPresent( IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags );


public:
	// initialize class.
	bool init( );
};

inline const std::unique_ptr< c_hooks > g_hooks{ new c_hooks( ) };