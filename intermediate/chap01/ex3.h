union MyUnion {
    char arr[10];
    long myLng;
};  

struct MyBitfield {
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12; 
};  

struct MyOrdinaryStruct {
    char initial;
    char fName[100];
    char lName[100];
};  
