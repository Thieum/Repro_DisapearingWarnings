#include "pch.h"
#include <xstring>
#include "Class1.h"

bool Class1::test()
{
    if (m_ADCSlope == 0 && m_ADCOffset == 0)
    {
        int serialNumber;
        int adc0;
        int adc40;
        int dac0;
        int dac40;
        std::wstring buildDate;
        std::wstring buildCode;

        if (const auto result = getManufacturerData(serialNumber, buildDate, buildCode, adc0, adc40, dac0, dac40); result != true)
        {
            return result;
        }

        m_ADCSlope = ((0 - 40) / static_cast<double>(adc0 - adc40));
        m_ADCOffset = (40 - m_ADCSlope * adc40);
        m_DACSlope = ((0 - 40) / static_cast<double>(dac0 - dac40));
        m_DACOffset = (40 - m_DACSlope * dac40);
        return true;
    }
    return false;
}

bool Class1::getManufacturerData(int& serialNumber,
    std::wstring& buildDate,
    std::wstring& buildCode,
    int& adc0,
    int& adc40,
    int& dac0,
    int& dac40)
{
    serialNumber = 0;
    buildDate = L"";
    buildCode = L"";
    adc0 = 0;
    adc40 = 0;
    dac0 = 0;
    dac40;
    return true;
}
