#pragma once

class c_menu {
private:


public:
	void init( );
};

inline const std::unique_ptr< c_menu > g_menu{ new c_menu( ) };