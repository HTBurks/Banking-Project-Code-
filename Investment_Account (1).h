//Investment_Account.h
#include"Account.h"
#ifndef INVESTMENT_ACCOUNT_H
#define INVESTMENT_ACCOUNT_H
class Investment_Account: public Account{
      public:
      		 Investment_Account();
             Investment_Account(string accMgr, string accNum, string accOwnerID);
             virtual string print() const;
      private:
          string accountManager;
};
#endif
