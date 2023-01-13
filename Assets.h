#ifndef ASSETS_H_INCLUDED
#define ASSETS_H_INCLUDED

#include <iostream>

using namespace std;

class Assets{
    private:
        string assetName;
        float assetAmount;
        bool contraAssetStatus;
    public:
        Assets();
        void setAssetName(string pAssetName);
        string getAssetName();
        void setAssetAmount(float pAmount);
        float getAssetAmount();
        void setContraAssetStatus(bool pTrueFalse);
        bool getContraAsset();
};

#endif // ASSETS_H_INCLUDED
