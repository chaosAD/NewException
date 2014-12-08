#include "unity.h"
#include "NewException.h"
#include "Exception.h"

void setUp(void) {}

void tearDown(void) {}

void test_module_generator_needs_to_be_implemented(void) {
	CEXCEPTION_T e;
  
  Exception e1, e2;
  
  e1 = e2;
  
  Try {
    e = createException("Error: this is a dummy exception", 7);
    Throw(e);
  } Catch(e) {
    dumpException(e);
    freeException(e);
  }
}
