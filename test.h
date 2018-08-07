#include "testif.h"

class cTxn: public cTxnIf
{
    private:
       std::string class_name;

    public:
      int a;
      int b;

      void test1()
      {
          a = 1;
          b = 2;
      };
      
      cTxn(){
          set_classname("INITAL_CLASSNAME");
      }

      void set_classname(std::string fstparam);
      std::string get_classname();

      void call() {
          b = 3;
      };
};