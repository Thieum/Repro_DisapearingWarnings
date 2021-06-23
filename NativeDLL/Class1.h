#pragma once

class Class1
{
public:
    bool test();
    bool getManufacturerData(int& serialNumber,
        std::wstring& buildDate,
        std::wstring& buildCode,
        int& adc0,
        int& adc40,
        int& dac0,
        int& dac40);
private:
    int m_ADCSlope = 0;
    int m_ADCOffset = 0;
    int m_DACSlope = 0;
    int m_DACOffset = 0;
};