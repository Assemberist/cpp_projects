#include "loader.h"
#include "render.h"
#include "int_check.h"
#include "string_tree.h"

int main(){
	library lib = load_library("/home/sanya/source/alchimist/alchimist-beta-0.1.0/debug");
	check_library();
	draw(&lib);
	dispose_library(&lib);
	return 0;
}
