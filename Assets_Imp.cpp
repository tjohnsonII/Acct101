#include "Assets.h"

Assets::Assets()
{
    std::cout << "Starting Asset Prg" << std::endl;
}

void Assets::setAssetName(string pAssetName)
{
    assetName = pAssetName;
}

string Assets::getAssetName()
{
    return assetName;
}

void Assets::setAssetAmount(float pAssetAmount)
{
    assetAmount = pAssetAmount;
}

float Assets::getAssetAmount()
{
    return assetAmount;
}

