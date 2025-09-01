#include "..\includes.h"

void c_menu::init( ) {
	
	ImGui::SetNextWindowPos( ImVec2( 50, 50 ), ImGuiCond_Once );
	ImGui::SetNextWindowSize( ImVec2( 800, 700 ), ImGuiCond_Once );
	ImGui::Begin( "Mighty - internal [WIP]" );
	{
	
		ImGui::Text( "Hello World!" );
	
	}
	ImGui::End( );

}