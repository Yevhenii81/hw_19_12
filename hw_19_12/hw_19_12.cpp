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
        SetBrand("");
        SetModel("");
        SetStorageSizeGB(0);
        SetDisplayType("");
        SetIsSmartphone(false);
    }

    Phone(const string& brand, const string& model, int storageSizeGB, const string& displayType, bool isSmartphone)
    {
        cout << "C-TOR with 5 parameter\n";
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
        SetColor("");
        SetBrand("");
        SetTipType("");
        SetIsClickable(false);
        SetInkType("");
    }

    Pan(const string& color, const string& brand, const string& tipType, bool isClickable, const string& inkType)
    {
        cout << "C-TOR with 5 parameter\n";
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
        SetBrand("");
        SetModel("");
        SetRamGB(0);
        SetHardDiskSize(0);
        SetScreenSizeInches(0.0);
    }

    Laptop(const string& brand, const string& model, int ramGB, int hardDiskSize, float screenSizeInches)
    {
        cout << "C-TOR with 5 parameter\n";
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
        SetModel("");
        SetBatteryLevel(0);
        SetColorCount(0);
        SetManufacturer(nullptr);
        SetNumberOfModes(0);
    }

    LEOController(const string& model, int batteryLevel, unsigned long long colorCount, const char* manufacturer, int numberOfModes)
    {
        cout << "C-TOR with 5 parameter\n";
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
        SetBrand("");
        SetModel("");
        SetIsWireless(false);
        SetBatteryLevel(0);
        SetNumberOfButtons(0);
    }

    Mouse(const string& brand, const string& model, bool isWireless, int batteryLevel, int numberOfButtons)
    {
        cout << "C-TOR with 5 parameter\n";
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

    Phone myPhone; // Выведет "C-TOR without parameters"
    Phone myPhoneWithArgs("Samsung", "Galaxy S21", 256, "AMOLED", true); // Выведет "C-TOR with 5 parameters"


    ////Тестирование класса Phone
    //Phone myPhone;
    //myPhone.SetBrand("Iphone");
    //myPhone.SetModel("11");
    //myPhone.SetStorageSizeGB(128);
    //myPhone.SetDisplayType("AMOLED");
    //myPhone.SetIsSmartphone(true);

    //cout << "Phone Details:\n";
    //cout << "Brand: " << myPhone.GetBrand() << "\n";
    //cout << "Model: " << myPhone.GetModel() << "\n";
    //cout << "Storage Size: " << myPhone.GetStorageSizeGB() << "GB" << "\n";
    //cout << "Display Type: " << myPhone.GetDisplayType() << "\n";
    //cout << "Is Smartphone? " << (myPhone.GetIsSmartphone() ? "Yes" : "No") << "\n";

    //// Тестирование класса Pan
    //Pan myPen;
    //myPen.SetBrand("Parker");
    //myPen.SetColor("Blue");
    //myPen.SetTipType("Ballpoint");
    //myPen.SetIsClickable(true);
    //myPen.SetInkType("Gel");

    //cout << "Pen Details:\n";
    //cout << "Brand: " << myPen.GetBrand() << "\n";
    //cout << "Color: " << myPen.GetColor() << "\n";
    //cout << "Tip Type: " << myPen.GetTipType() << "\n";
    //cout << "Is Clickable? " << (myPen.GetIsClickable() ? "Yes" : "No") << "\n";
    //cout << "Ink Type: " << myPen.GetInkType() << "\n";

    //// Тестирование класса Laptop
    //Laptop myLaptop;
    //myLaptop.SetBrand("HP");
    //myLaptop.SetModel("HP ZBook 17 G3");
    //myLaptop.SetRamGB(16);
    //myLaptop.SetHardDiskSize(1000);
    //myLaptop.SetScreenSizeInches(17.3);

    //cout << "Laptop Details:\n";
    //cout << "Brand: " << myLaptop.GetBrand() << "\n";
    //cout << "Model: " << myLaptop.GetModel() << "\n";
    //cout << "RAM: " << myLaptop.GetRamGB() << "GB" << "\n";
    //cout << "Hard Disk Size: " << myLaptop.GetHardDiskSize() << "GB" << "\n";
    //cout << "Screen Size: " << myLaptop.GetScreenSizeInches() << " inches" << "\n";

    //// Тестирование класса LEOController
    //LEOController myLEOController;
    //myLEOController.SetModel("LEO-100");
    //myLEOController.SetBatteryLevel(80);
    //myLEOController.SetColorCount(16777216);
    //myLEOController.SetManufacturer("ABC Electronics");
    //myLEOController.SetNumberOfModes(5);

    //cout << "LEO Controller Details:\n";
    //cout << "Model: " << myLEOController.GetModel() << "\n";
    //cout << "Battery Level: " << myLEOController.GetBatteryLevel() << "%" << "\n";
    //cout << "Color Count: " << myLEOController.GetColorCount() << "\n";
    //cout << "Manufacturer: " << myLEOController.GetManufacturer() << "\n";
    //cout << "Number of Modes: " << myLEOController.GetNumberOfModes() << "\n";

    //// Тестирование класса Mouse
    //Mouse myMouse;
    //myMouse.SetBrand("Hator");
    //myMouse.SetModel("Pulsar Pro Wireless");
    //myMouse.SetIsWireless(true);
    //myMouse.SetBatteryLevel(70);
    //myMouse.SetNumberOfButtons(6);

    //cout << "Mouse Details:\n";
    //cout << "Brand: " << myMouse.GetBrand() << "\n";
    //cout << "Model: " << myMouse.GetModel() << "\n";
    //cout << "Is Wireless? " << (myMouse.GetIsWireless() ? "Yes" : "No") << "\n";
    //cout << "Battery Level: " << myMouse.GetBatteryLevel() << "%" << "\n";
    //cout << "Number of Buttons: " << myMouse.GetNumberOfButtons() << "\n";
}