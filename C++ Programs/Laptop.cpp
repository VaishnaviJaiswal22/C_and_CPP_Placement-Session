#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string type;
    string features;
    string configuration;
    string processors[5];

public:
    // Parameterized Constructor
    Laptop(string t, string f, string c, string p[5]) {
        type = t;
        features = f;
        configuration = c;
        for (int i = 0; i < 5; i++) {
            processors[i] = p[i];
        }
    }

    // Function to display details
    void showDetails() {
        cout << "---------------------------------------------\n";
        cout << "Laptop Type       : " << type << endl;
        cout << "Key Features      : " << features << endl;
        cout << "Configuration     : " << configuration << endl;
        cout << "Best 5 Processors : " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "   " << i + 1 << ". " << processors[i] << endl;
        }
    }

    // Destructor
    ~Laptop() {
        cout << "\nDeallocate Memory for " << type << endl;
    }
};

int main() {
    // Processors for each type
    string devProc[5] = {
        "Intel Core i7-13700H",
        "Intel Core i9-13900H",
        "AMD Ryzen 7 7840HS",
        "Apple M2 Pro",
        "AMD Ryzen 9 7940HS"
    };

    string gamingProc[5] = {
        "Intel Core i9-13980HX",
        "Intel Core i7-13700HX",
        "AMD Ryzen 9 7945HX",
        "AMD Ryzen 7 7845HX",
        "Apple M3 Pro"
    };

    string graphicsProc[5] = {
        "Intel Xeon W-11955M",
        "AMD Ryzen 9 7900HS",
        "Apple M2 Max",
        "Intel Core i9-13900HK",
        "AMD Threadripper PRO 5975WX"
    };

    string workstationProc[5] = {
        "Intel Xeon W-11855M",
        "Intel Core i9-13950HX",
        "AMD Ryzen 9 PRO 7945HX",
        "Intel Xeon W-12955M",
        "AMD Ryzen Threadripper PRO 5995WX"
    };

    string normalProc[5] = {
        "Intel Core i5-1240P",
        "Intel Core i3-1315U",
        "AMD Ryzen 5 7530U",
        "Apple M1",
        "Intel Pentium Gold 8505"
    };

    // Objects with detailed features + config + processors (without CPU in config)
    Laptop dev("Developer Laptop",
               "Optimized for coding, multitasking, IDEs, lightweight VMs",
               "RAM: 16-32GB DDR5 | Storage: 1TB NVMe SSD | Keyboard: Backlit Mechanical-like (ThinkPad/HP EliteBook) | Display: 15.6inch FHD IPS | Battery: 70Wh (~10 hrs)",
               devProc);

    Laptop gaming("Gaming Laptop",
                  "High-end GPU, High Refresh Rate Display, RGB Keyboard",
                  "RAM: 16-32GB DDR5 | Storage: 1TB-2TB NVMe SSD | GPU: NVIDIA RTX 3070/3080/4080 | Display: 15.6inch QHD, 165Hz/240Hz | Keyboard: RGB Mechanical (SteelSeries/HyperX) | Battery: 80Wh (~4-6 hrs gaming)",
                  gamingProc);

    Laptop graphics("Graphics/Creator Laptop",
                    "High Color Accuracy Display, Stylus/SD Card Support",
                    "RAM: 32GB DDR5 | Storage: 2TB NVMe SSD | GPU: NVIDIA RTX Studio/Quadro | Display: 16inch 4K OLED, 100% AdobeRGB | Keyboard: Scissor Mechanism (Apple MacBook Pro/Asus ProArt) | Battery: 90Wh (~8 hrs)",
                    graphicsProc);

    Laptop workstation("Mobile Workstation",
                       "Desktop-Class Power, ISV Certified, Heavy-Duty Cooling",
                       "RAM: 64-128GB ECC DDR5 | Storage: 2TB-4TB NVMe SSD | GPU: NVIDIA Quadro/RTX A5000 | Display: 17inch 4K Mini-LED, HDR10 | Keyboard: Spill-resistant Business Class (Dell Precision/HP ZBook) | Battery: 99Wh (~6-7 hrs)",
                       workstationProc);

    Laptop normal("Normal/General Laptop",
                  "Affordable, Lightweight, Long Battery Life",
                  "RAM: 8-16GB DDR4 | Storage: 512GB SSD | GPU: Integrated Intel Iris Xe/AMD Vega | Display: 14-15.6inch FHD IPS | Keyboard: Chiclet Style (Dell Inspiron/HP Pavilion) | Battery: 50Wh (~8-10 hrs)",
                  normalProc);

    // Display Details
    dev.showDetails();
    gaming.showDetails();
    graphics.showDetails();
    workstation.showDetails();
    normal.showDetails();
}
