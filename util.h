#include <string>
#include <unistd.h>

int runfile(std::string file){
  std::string cmd = "bash "+file;
  const char *command = cmd.c_str();
  system(command);
}

int install_pkg(std::string pkg){
      std::string cmd = "mkdir bindir/"+pkg;
      const char *command = cmd.c_str();
      system(command);

      chdir("builddir/");
      cmd = "bash ../run_semcfile_from_cpp "+pkg;
      command = cmd.c_str();
      system(command);
}

int downloadfile(std::string url){
  std::string cmd="curl -LO "+url+" >> /dev/null";
  const char *command = cmd.c_str();
  system(command);
}
