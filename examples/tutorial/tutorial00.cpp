#include "daScript/daScript.h"
#include "msvc32.inc"

#define TUTORIAL_NAME   "dummy.das"

const char * tutorial_text = R""""(
[export]
def test
    print("this is nano tutorial\n")
)"""";

using namespace das;

void tutorial () {
    // make file access, introduce string as if it was a file
    auto fAccess = make_smart<FsFileAccess>();
    auto fileInfo = make_unique<FileInfo>(tutorial_text, uint32_t(strlen(tutorial_text)));
    fAccess->setFileInfo(TUTORIAL_NAME, move(fileInfo));
    // compile script
    TextPrinter tout;
    ModuleGroup dummyLibGroup;
    auto program = compileDaScript(TUTORIAL_NAME, fAccess, tout, dummyLibGroup);
    // create context
    Context ctx(program->getContextStackSize());
    program->simulate(ctx, tout);
    // call context function
    ctx.eval(ctx.findFunction("test"), nullptr);
}

int main( int, char * [] ) {
    // request all da-script built in modules
    NEED_ALL_DEFAULT_MODULES
    // run the tutorial
    tutorial();
    // shut-down daScript, free all memory
    Module::Shutdown();
    return 0;
}
