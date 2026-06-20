 Currency Exchange System (OOP)

A C++ console application demonstrating Object-Oriented Programming concepts through a multi-currency exchange and wallet management system.

 Features
- User management with three tiers: Standard, Gold, and Premium users (each with different reward calculations)
- Multi-currency wallet system — one user has one wallet, one wallet holds multiple accounts, each account tied to one currency
- Support for 10+ currencies including USD, PKR, GBP, SAR, KWD, and cryptocurrencies (BTC, ETH, USDT, BNB, SOL)
- Real-time currency conversion between any two supported currencies
- Transaction history and transaction slip generation
- Admin section for managing exchange rates and currencies
- Analytics: total transactions, most frequent user, most used currency

 OOP Concepts Used
- **Inheritance** — `Users` as abstract base class for `GoldUser`, `StandardUsers`, `PremiumUser`; `Currency` as abstract base for `CryptoCurrency` and `FiatCurrency`
- **Polymorphism** — virtual functions for reward calculation, account status, and currency display
- **Encapsulation** — private member data with public getters/setters across all classes
- **Abstraction** — pure virtual functions defining contracts for derived classes

 
