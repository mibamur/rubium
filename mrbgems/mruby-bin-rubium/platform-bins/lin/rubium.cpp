#include "mruby_rubium.h"

int main(int argc, char** argv) {
  g_argc = argc;
  g_argv = argv;
  g_command_line = CefCommandLine::CreateCommandLine();
  g_command_line->InitFromArgv(argc, argv);
  rubium_check_usage();
  return rubium_main();
}
