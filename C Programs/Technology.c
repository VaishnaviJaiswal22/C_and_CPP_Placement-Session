#include <stdio.h>
#include <string.h>

// Define constants for array sizes
#define MAX_TECH 10
#define MAX_COMPANIES 5
#define COMPANY_NAME_LEN 50
#define TECH_NAME_LEN 50
#define TOOLS_LEN 100

// Define the structure without typedef
struct Technology {
    char name[TECH_NAME_LEN];              // Technology name
    float min_package;                     // Minimum salary package
    float high_package;                    // Maximum salary package
    char tools[TOOLS_LEN];                 // Languages and tools used
    char companies[MAX_COMPANIES][COMPANY_NAME_LEN];  // Associated companies
};

// Function to display information for a single technology
void displayTechnology(struct Technology tech) {
    printf(" %s\n", tech.name);
    printf(" Package Range: $%.0f - $%.0f  \n", tech.min_package, tech.high_package);
    printf(" Languages/Tools: %s\n", tech.tools);
    printf(" Companies:                                                                    \n");
    
    // Display all companies for this technology
    for (int i = 0; i < MAX_COMPANIES; i++) {
        printf("    %s \n", tech.companies[i]);
    }
    printf("---------------------------------------------------------------\n");
}

// Function to display all technologies
void displayAllTechnologies(struct Technology techs[], int count) {

    for (int i = 0; i < count; i++) {
        displayTechnology(techs[i]);
    }
}

int main() {
    // Initialize technology data array using struct keyword
    struct Technology technologies[MAX_TECH] = {
        {
            "Artificial Intelligence (AI)",
            80000, 150000,
            "Python, TensorFlow, PyTorch",
            {"Google", "IBM", "Microsoft", "Amazon", "Facebook"}
        },
        {
            "Machine Learning (ML)",
            85000, 160000,
            "R, Python, Scikit-learn",
            {"NVIDIA", "Uber", "Airbnb", "Intel", "Salesforce"}
        },
        {
            "Data Science",
            75000, 140000,
            "Python, R, SQL",
            {"LinkedIn", "Spotify", "Twitter", "Accenture", "Deloitte"}
        },
        {
            "DevOps",
            70000, 130000,
            "Docker, Kubernetes, Jenkins",
            {"Atlassian", "Amazon", "Google", "Microsoft", "IBM"}
        },
        {
            "Internet of Things (IoT)",
            80000, 145000,
            "C, Python, MQTT",
            {"Cisco", "GE", "Siemens", "Bosch", "IBM"}
        },
        {
            "Blockchain",
            90000, 160000,
            "Solidity, JavaScript, Go",
            {"Coinbase", "Ripple", "ConsenSys", "IBM", "Binance"}
        },
        {
            "Cybersecurity",
            75000, 140000,
            "Python, C++, Wireshark",
            {"Palo Alto Networks", "CrowdStrike", "McAfee", "Symantec", "FireEye"}
        },
        {
            "Cloud Computing",
            80000, 150000,
            "AWS, Azure, Google Cloud",
            {"Amazon", "Microsoft", "Google", "IBM", "Oracle"}
        },
        {
            "Augmented Reality (AR) and Virtual Reality (VR)",
            70000, 130000,
            "Unity, Unreal Engine, C#",
            {"Oculus", "Magic Leap", "Sony", "HTC", "Niantic"}
        },
        {
            "5G Technology",
            85000, 150000,
            "C, C++, Python",
            {"Qualcomm", "Ericsson", "Nokia", "Huawei", "Verizon"}
        }
    };

    // Display all technologies
    displayAllTechnologies(technologies, MAX_TECH);
    
}
