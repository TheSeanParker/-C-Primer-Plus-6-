#pragma once

#include <iostream>
#include <valarray>

namespace n_wine
{
	using std::string;
	using std::pair;
	using std::valarray;

	class Wine
	{
		private:
			typedef valarray<unsigned> UnsignedArray;

		public:
			Wine (const string& name, unsigned years_total, unsigned vintage_years[], unsigned bottles_total[]);
			Wine (const string& name, unsigned years_total);
			const string& getLabel (void) const;
			void getBottles (void);
			void show (void) const;
			unsigned sum (void) const;

		private:
			const string	name_;
			const unsigned	years_total_;	// 年份数量
			pair<UnsignedArray, UnsignedArray>	vintage_year_and_bottles_total_;	// 酿造年份与对应瓶数
	};
}
