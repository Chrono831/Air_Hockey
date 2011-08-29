/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * FileStarter.c
 *
 * Created: <date> <time>
 *
 */

#include "c_includes.h"


typedef struct {
  string name;
  string email;
  string githubId;
} personalInfo;


const string d[] = { "Dylan Hall", "dylan.p.hall@gmail.com", "Chrono831" };
const string j[] = { "John Tramm", "john.tramm@gmail.com", "jtramm" };


void writeHeader(FILE *, string, personalInfo*);
personalInfo * setPersInfo(string, string, string);

int main (int argc, char *argv[]) {
  FILE * fout = NULL;
  personalInfo *name = NULL;
  int i;
  for(i = 0; i < argc; i++) {
    //printf(">%s<\n",argv[i]);
  }
  if ( (argc != 3) ) {
    fprintf(stderr, "Usage: FileStarter <j/d> <filename>\n");
    exit(1);
  }
  if ( (fout = fopen(argv[2], "w")) == NULL) {
    fprintf(stderr, "Error opening %s\n",argv[2]);
    exit(1);
  }
  if ( (argv[1][0] != 'j') && (argv[1][0] != 'd') )  {
    fprintf(stderr, "Usage: FileStarter <j/d> <filename>\n");
    exit(1);
  } 
  if ( argv[1][0] == 'd' ) {
    name = setPersInfo(d[0], d[1], d[2]);
  } else { //argv[1] == "j"
    name = setPersInfo(j[0], j[1], j[2]);
  }
  writeHeader(fout, argv[2], name);
  fclose(fout);
  return 0;
}

personalInfo * setPersInfo(string n, string e, string g) {
  personalInfo *new = (personalInfo *) malloc (sizeof(personalInfo));
  new->name = n;
  new->email = e;
  new->githubId = g;
  return new;
}

void writeHeader(FILE *fout, string filename, personalInfo *author) {
  fprintf(fout,
	  "/**\n" 
	  " * Air_Hockey Project File\n"
	  " * https://github.com/Chrono831/Air_Hockey\n"
	  " * %s\n"
	  " * %s\n"
	  " * github: %s\n"
	  " * \n"
	  " * \n"
	  " * %s\n"
	  " * \n"
	  " * Created: %s %s\n"
	  " * \n"
	  " * Comments: \n"
	  " * \n"
	  " */\n"
	  "\n"
	  "#include \"stdincludes.h\"\n"
	  "\n"
	  "\n"
	  "\n"
	  "int main (int argc, char *argv[]) {\n"
	  "  fprintf(stdout, \"Hello, World!\\n\");\n"
	  "\n"
	  "\n"
	  "  return 0;\n"
	  "}\n"
	  "\n",
	  author->name, author->email, author->githubId,
	  filename, __DATE__, __TIME__);
}
