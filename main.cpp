#include "holiday.h"

namespace Parkjooae2649017
{
    bool compareDayOfYear(const dayofyear& d1, const dayofyear& d2)
    {
        return (d1.getday() == d2.getday()) && (d1.getmonth() == d2.getmonth());
    };
}

int main()
{
    using namespace Parkjooae2649017;

    holiday h1; h1.print();
    holiday h2{{12,25},true}; h2.print();

    if (compareDayOfYear(h1.getDate(), h2.getDate()))
        std::cout << "same\n";
    else
        std::cout << "not same\n";

    return 0;
}