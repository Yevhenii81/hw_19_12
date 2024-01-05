#include <iostream>
using namespace std;

class Phone {
private:
    string brand;
    string model;
    int storageSizeGB;
    string displayType;
    bool isSmartphone;

public:

    Phone() 
    {
        cout << "C-TOR without parameters\n";
        SetBrand("Iphone");
        SetModel("11");
        SetStorageSizeGB(128);
        SetDisplayType("AMOLED");
        SetIsSmartphone(true);
    }

    Phone(const string& brand, const string& model, int storageSizeGB, const string& displayType, bool isSmartphone)
    {
        cout << "\nC-TOR with 5 parameter\n";
        SetBrand(brand);
        SetModel(model);
        SetStorageSizeGB(storageSizeGB);
        SetDisplayType(displayType);
        SetIsSmartphone(isSmartphone);
    }

    void MakeCall(string phoneNumber)
    {
        cout << "Calling " << phoneNumber << "...\n";
    }

    void SendMessage(string message)
    {
        cout << "Sending message: " << message << "\n";
    }

    void TakePictures()
    {
        cout << "Taking a photo...\n";
    }

    void InstallApp(string appName)
    {
        cout << "Application installation: " << appName << "\n";
    }

    void PlatMusic()
    {
        cout << "Playing music...\n";
    }

    void Print() const
    {
        cout << "Phone Details:\n";
        cout << "Brand: " << GetBrand() << "\n";
        cout << "Model: " << GetModel() << "\n";
        cout << "Storage Size: " << GetStorageSizeGB() << "GB" << "\n";
        cout << "Display Type: " << GetDisplayType() << "\n";
        cout << "Is Smartphone? " << (GetIsSmartphone() ? "Yes" : "No") << "\n";
    }

    string GetBrand() const {
        return brand;
    }

    string GetModel() const {
        return model;
    }

    int GetStorageSizeGB() const {
        return storageSizeGB;
    }

    string GetDisplayType() const {
        return displayType;
    }

    bool GetIsSmartphone() const {
        return isSmartphone;
    }

    void SetBrand(const string& brand) {
        this->brand = brand;
    }

    void SetModel(const string& model) {
        this->model = model;
    }

    void SetStorageSizeGB(int storageSizeGB) {
        this->storageSizeGB = storageSizeGB;
    }

    void SetDisplayType(const string& displayType) {
        this->displayType = displayType;
    }

    void SetIsSmartphone(bool isSmartphone) {
        this->isSmartphone = isSmartphone;
    }
};


class Pan {
private:
    string color;
    string brand;
    string tipType;
    bool isClickable;
    string inkType;

public:

    Pan()
    {
        cout << "\nC-TOR without parameters\n";
        SetBrand("Parker");
        SetColor("Blue");
        SetTipType("Ballpoint");
        SetIsClickable(true);
        SetInkType("Gel");
    }

    Pan(const string& color, const string& brand, const string& tipType, bool isClickable, const string& inkType)
    {
        cout << "\nC-TOR with 5 parameter\n";
        SetColor(color);
        SetBrand(brand);
        SetTipType(tipType);
        SetIsClickable(isClickable);
        SetInkType(inkType);
    }

    void Write(string text)
    {
        cout << "Writting: " << text << "\n";
    }

    void ChangeColor(string newColor)
    {
        cout << "Changing pen color to: " << newColor << "\n";
    }

    void Click()
    {
        if (isClickable)
        {
            cout << "Clicking the pen...\n";
        }
        else {
            cout << "This pen cannot be clicked\n";
        }
    }

    void TestPen()
    {
        cout << "Testing the pen...\n";
    }

    void RefillInk()
    {
        cout << "Refilling ink...\n";
    }

    void Print() const
    {
        cout << "Pen Details:\n";
        cout << "Brand: " << GetBrand() << "\n";
        cout << "Color: " << GetColor() << "\n";
        cout << "Tip Type: " << GetTipType() << "\n";
        cout << "Is Clickable? " << (GetIsClickable() ? "Yes" : "No") << "\n";
        cout << "Ink Type: " << GetInkType() << "\n";
    }

    string GetColor() const {
        return color;
    }

    string GetBrand() const {
        return brand;
    }

    string GetTipType() const {
        return tipType;
    }

    bool GetIsClickable() const {
        return isClickable;
    }

    string GetInkType() const {
        return inkType;
    }

    void SetColor(const string& color) {
        this->color = color;
    }

    void SetBrand(const string& brand) {
        this->brand = brand;
    }

    void SetTipType(const string& tipType) {
        this->tipType = tipType;
    }

    void SetIsClickable(bool isClickable) {
        this->isClickable = isClickable;
    }

    void SetInkType(const string& inkType) {
        this->inkType = inkType;
    }
};


class Laptop {
private:
    string brand;
    string model;
    int ramGB;
    int hardDiskSize;
    float screenSizeInches;

public:

    Laptop()
    {
        cout << "\nC-TOR without parameters\n";
        SetBrand("HP");
        SetModel("HP ZBook 17 G3");
        SetRamGB(16);
        SetHardDiskSize(1000);
        SetScreenSizeInches(17.3);
    }

    Laptop(const string& brand, const string& model, int ramGB, int hardDiskSize, float screenSizeInches)
    {
        cout << "\nC-TOR with 5 parameter\n";
        SetBrand(brand);
        SetModel(model);
        SetRamGB(ramGB);
        SetHardDiskSize(hardDiskSize);
        SetScreenSizeInches(screenSizeInches);
    }

    string GetBrand() const {
        return brand;
    }

    string GetModel() const {
        return model;
    }

    int GetRamGB() const {
        return ramGB;
    }

    int GetHardDiskSize() const {
        return hardDiskSize;
    }

    float GetScreenSizeInches() const {
        return screenSizeInches;
    }

    void SetBrand(const string& brand) {
        this->brand = brand;
    }

    void SetModel(const string& model) {
        this->model = model;
    }

    void SetRamGB(int ramGB) {
        this->ramGB = ramGB;
    }

    void SetHardDiskSize(int hardDiskSize) {
        this->hardDiskSize = hardDiskSize;
    }

    void SetScreenSizeInches(float screenSizeInches) {
        this->screenSizeInches = screenSizeInches;
    }

    void PowerOn()
    {
        cout << "Powering on the laptop...\n";
    }

    void PowerOff()
    {
        cout << "Shutting down the laptop...\n";
    }

    void OpenApplication()
    {
        cout << "Opening application: ";
    }

    void PlayGame()
    {
        cout << "Playing game: ";
    }

    void InternetCheck()
    {
        cout << "There's an Internet check...\n";
    }

    void Print() const
    {
        cout << "Laptop Details:\n";
        cout << "Brand: " << GetBrand() << "\n";
        cout << "Model: " << GetModel() << "\n";
        cout << "RAM: " << GetRamGB() << "GB" << "\n";
        cout << "Hard Disk Size: " << GetHardDiskSize() << "GB" << "\n";
        cout << "Screen Size: " << GetScreenSizeInches() << " inches" << "\n";
    }
};


class LEOController {
private:
    string model;
    int batteryLevel;
    unsigned long long colorCount;
    const char* manufacturer;
    int numberOfModes;

public:

    LEOController()
    {
        cout << "\nC-TOR without parameters\n";
        SetModel("LEO-100");
        SetBatteryLevel(80);
        SetColorCount(16777216);
        SetManufacturer("ABC Electronics");
        SetNumberOfModes(5);
    }

    LEOController(const string& model, int batteryLevel, unsigned long long colorCount, const char* manufacturer, int numberOfModes)
    {
        cout << "\nC-TOR with 5 parameter\n";
        SetModel(model);
        SetBatteryLevel(batteryLevel);
        SetColorCount(colorCount);
        SetManufacturer(manufacturer);
        SetNumberOfModes(numberOfModes);
    }

    void TurnOn()
    {
        cout << "Turning on the LED controller...\n";
    }

    void TurnOff()
    {
        cout << "Turning off the LED controller...\n";
    }

    void ChangeColor(string color)
    {
        cout << "Changing color to " << color << "\n";
    }

    void SwitchMode(int mode) {
        cout << "Switching to mode" << mode << "\n";
    }

    void ChangeBrightness(int level) {
        cout << "Changing brightness to level " << level << "\n";
    }

    void Print() const
    {
        cout << "LEO Controller Details:\n";
        cout << "Model: " << GetModel() << "\n";
        cout << "Battery Level: " << GetBatteryLevel() << "%" << "\n";
        cout << "Color Count: " << GetColorCount() << "\n";
        cout << "Manufacturer: " << GetManufacturer() << "\n";
        cout << "Number of Modes: " << GetNumberOfModes() << "\n";
    }

    string GetModel() const {
        return model;
    }

    int GetBatteryLevel() const {
        return batteryLevel;
    }

    unsigned long long GetColorCount() const {
        return colorCount;
    }

    const char* GetManufacturer() const {
        return manufacturer;
    }

    int GetNumberOfModes() const {
        return numberOfModes;
    }

    void SetModel(const string& model) {
        this->model = model;
    }

    void SetBatteryLevel(int batteryLevel) {
        this->batteryLevel = batteryLevel;
    }

    void SetColorCount(unsigned long long colorCount) {
        this->colorCount = colorCount;
    }

    void SetManufacturer(const char* manufacturer) {
        this->manufacturer = manufacturer;
    }

    void SetNumberOfModes(int numberOfModes) {
        this->numberOfModes = numberOfModes;
    }
};


class Mouse {
private:
    string brand;
    string model;
    bool isWireless;
    int batteryLevel;
    int numberOfButtons;

public:

    Mouse()
    {
        cout << "\nC-TOR without parameters\n";
        SetBrand("Hator");
        SetModel("Pulsar Pro Wireless");
        SetIsWireless(true);
        SetBatteryLevel(70);
        SetNumberOfButtons(6);
    }

    Mouse(const string& brand, const string& model, bool isWireless, int batteryLevel, int numberOfButtons)
    {
        cout << "\nC-TOR with 5 parameter\n";
        SetBrand(brand);
        SetModel(model);
        SetIsWireless(isWireless);
        SetBatteryLevel(batteryLevel);
        SetNumberOfButtons(numberOfButtons);
    }

    void ClickLeftButton()
    {
        cout << "Left button clicked!\n";
    }

    void ClickRightButton()
    {
        cout << "Right button clicked!\n";
    }

    void Scroll(int distance)
    {
        cout << "Scrolling by " << distance << " units\n";
    }

    void SelectButtons(int numberOfButtons)
    {
        int buttons = numberOfButtons;
        cout << "Mouse buttons set to " << numberOfButtons;
    }

    void Print() const
    {
       cout << "Mouse Details:\n";
       cout << "Brand: " << GetBrand() << "\n";
       cout << "Model: " << GetModel() << "\n";
       cout << "Is Wireless? " << (GetIsWireless() ? "Yes" : "No") << "\n";
       cout << "Battery Level: " << GetBatteryLevel() << "%" << "\n";
       cout << "Number of Buttons: " << GetNumberOfButtons() << "\n";
    }

    bool IsWirelessConnected() const {
        return isWireless;
    }

    string GetBrand() const {
        return brand;
    }

    string GetModel() const {
        return model;
    }

    bool GetIsWireless() const {
        return isWireless;
    }

    int GetBatteryLevel() const {
        return batteryLevel;
    }

    int GetNumberOfButtons() const {
        return numberOfButtons;
    }

    void SetBrand(const string& brand) {
        this->brand = brand;
    }

    void SetModel(const string& model) {
        this->model = model;
    }

    void SetIsWireless(bool isWireless) {
        this->isWireless = isWireless;
    }

    void SetBatteryLevel(int batteryLevel) {
        this->batteryLevel = batteryLevel;
    }

    void SetNumberOfButtons(int numberOfButtons) {
        this->numberOfButtons = numberOfButtons;
    }
};

int main()
{
    Phone myPhone;
    myPhone.Print();

    Phone myPhoneWithArgs("Iphone", "11", 128, "AMOLED", true); 
    myPhoneWithArgs.Print();
    cout << "----------------------------";

    Pan myPan;
    myPan.Print();

    Pan myPanWithArgs("Blue", "Parker", "Ballpoint", true, "Gel");
    myPanWithArgs.Print();
    cout << "----------------------------";

    Laptop myLaptop;
    myLaptop.Print();

    Laptop myLaptopWithArgs("HP", "HP ZBook 17 G3", 16, 1000, 17.3);
    myLaptopWithArgs.Print();
    cout << "----------------------------";
    
    LEOController myLEOController;
    myLEOController.Print();

    LEOController myLEOControllerWithArgs("LEO-100", 80, 16777216, "ABC Electronics", 5);
    myLEOController.Print();
    cout << "----------------------------";
    
    Mouse myMouse;
    myMouse.Print();

    Mouse myMouseWithArgs("Hator", "Pulsar Pro Wireless", true, 70, 6);
    myMouse.Print();
}
