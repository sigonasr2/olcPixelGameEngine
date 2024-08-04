#define OLC_PGE_APPLICATION
#define OLC_GFX_OPENGL33
#include "olcPixelGameEngine.h"

struct Key
{
    olc::vi2d position;
    olc::vi2d size;
    int key;
};

class DemoKeyboard : public olc::PixelGameEngine
{
public:
    
    DemoKeyboard()
    {
        sAppName = "Demo App";
    }

    bool OnUserCreate() override
    {
        vecKeys.push_back(Key{ olc::vi2d{ 18,16 },olc::vi2d{ 12,12 },64 });
        vecKeys.push_back(Key{ olc::vi2d{ 40,16 },olc::vi2d{ 12,12 },37 });
        vecKeys.push_back(Key{ olc::vi2d{ 53,16 },olc::vi2d{ 12,12 },38 });
        vecKeys.push_back(Key{ olc::vi2d{ 66,16 },olc::vi2d{ 12,12 },39 });
        vecKeys.push_back(Key{ olc::vi2d{ 79,16 },olc::vi2d{ 12,12 },40 });
        vecKeys.push_back(Key{ olc::vi2d{ 98,16 },olc::vi2d{ 12,12 },41 });
        vecKeys.push_back(Key{ olc::vi2d{ 111,16 },olc::vi2d{ 12,12 },42 });
        vecKeys.push_back(Key{ olc::vi2d{ 124,16 },olc::vi2d{ 12,12 },43 });
        vecKeys.push_back(Key{ olc::vi2d{ 137,16 },olc::vi2d{ 12,12 },44 });
        vecKeys.push_back(Key{ olc::vi2d{ 155,16 },olc::vi2d{ 12,12 },45 });
        vecKeys.push_back(Key{ olc::vi2d{ 168,16 },olc::vi2d{ 12,12 },46 });
        vecKeys.push_back(Key{ olc::vi2d{ 181,16 },olc::vi2d{ 12,12 },47 });
        vecKeys.push_back(Key{ olc::vi2d{ 194,16 },olc::vi2d{ 12,12 },48 });
        vecKeys.push_back(Key{ olc::vi2d{ 212,16 },olc::vi2d{ 12,12 },0 });
        vecKeys.push_back(Key{ olc::vi2d{ 226,16 },olc::vi2d{ 12,12 },68 });
        vecKeys.push_back(Key{ olc::vi2d{ 240,16 },olc::vi2d{ 12,12 },67 });
        vecKeys.push_back(Key{ olc::vi2d{ 9,35 },olc::vi2d{ 12,12 },90 });
        vecKeys.push_back(Key{ olc::vi2d{ 22,35 },olc::vi2d{ 12,12 },28 });
        vecKeys.push_back(Key{ olc::vi2d{ 29,48 },olc::vi2d{ 11,12 },17 });
        vecKeys.push_back(Key{ olc::vi2d{ 32,61 },olc::vi2d{ 11,12 },1 });
        vecKeys.push_back(Key{ olc::vi2d{ 35,35 },olc::vi2d{ 12,12 },29 });
        vecKeys.push_back(Key{ olc::vi2d{ 42,48 },olc::vi2d{ 11,12 },23 });
        vecKeys.push_back(Key{ olc::vi2d{ 45,61 },olc::vi2d{ 11,12 },19 });
        vecKeys.push_back(Key{ olc::vi2d{ 49,35 },olc::vi2d{ 12,12 },30 });
        vecKeys.push_back(Key{ olc::vi2d{ 55,48 },olc::vi2d{ 11,12 },5 });
        vecKeys.push_back(Key{ olc::vi2d{ 58,61 },olc::vi2d{ 11,12 },4 });
        vecKeys.push_back(Key{ olc::vi2d{ 62,35 },olc::vi2d{ 12,12 },31 });
        vecKeys.push_back(Key{ olc::vi2d{ 68,48 },olc::vi2d{ 11,12 },18 });
        vecKeys.push_back(Key{ olc::vi2d{ 72,61 },olc::vi2d{ 11,12 },6 });
        vecKeys.push_back(Key{ olc::vi2d{ 75,35 },olc::vi2d{ 12,12 },32 });
        vecKeys.push_back(Key{ olc::vi2d{ 82,48 },olc::vi2d{ 11,12 },20 });
        vecKeys.push_back(Key{ olc::vi2d{ 85,61 },olc::vi2d{ 11,12 },7 });
        vecKeys.push_back(Key{ olc::vi2d{ 88,35 },olc::vi2d{ 12,12 },33 });
        vecKeys.push_back(Key{ olc::vi2d{ 95,48 },olc::vi2d{ 11,12 },25 });
        vecKeys.push_back(Key{ olc::vi2d{ 98,61 },olc::vi2d{ 11,12 },8 });
        vecKeys.push_back(Key{ olc::vi2d{ 102,35 },olc::vi2d{ 12,12 },34 });
        vecKeys.push_back(Key{ olc::vi2d{ 108,48 },olc::vi2d{ 11,12 },21 });
        vecKeys.push_back(Key{ olc::vi2d{ 111,61 },olc::vi2d{ 11,12 },10 });
        vecKeys.push_back(Key{ olc::vi2d{ 115,35 },olc::vi2d{ 12,12 },35 });
        vecKeys.push_back(Key{ olc::vi2d{ 121,48 },olc::vi2d{ 11,12 },9 });
        vecKeys.push_back(Key{ olc::vi2d{ 125,61 },olc::vi2d{ 11,12 },11 });
        vecKeys.push_back(Key{ olc::vi2d{ 128,35 },olc::vi2d{ 12,12 },36 });
        vecKeys.push_back(Key{ olc::vi2d{ 134,48 },olc::vi2d{ 11,12 },15 });
        vecKeys.push_back(Key{ olc::vi2d{ 138,61 },olc::vi2d{ 11,12 },12 });
        vecKeys.push_back(Key{ olc::vi2d{ 141,35 },olc::vi2d{ 12,12 },27 });
        vecKeys.push_back(Key{ olc::vi2d{ 148,48 },olc::vi2d{ 11,12 },16 });
        vecKeys.push_back(Key{ olc::vi2d{ 151,61 },olc::vi2d{ 11,12 },88 });
        vecKeys.push_back(Key{ olc::vi2d{ 155,35 },olc::vi2d{ 12,12 },87 });
        vecKeys.push_back(Key{ olc::vi2d{ 161,48 },olc::vi2d{ 11,12 },91 });
        vecKeys.push_back(Key{ olc::vi2d{ 165,61 },olc::vi2d{ 11,12 },94 });
        vecKeys.push_back(Key{ olc::vi2d{ 168,35 },olc::vi2d{ 12,12 },85 });
        vecKeys.push_back(Key{ olc::vi2d{ 175,48 },olc::vi2d{ 11,12 },93 });
        vecKeys.push_back(Key{ olc::vi2d{ 181,35 },olc::vi2d{ 25,12 },63 });
        vecKeys.push_back(Key{ olc::vi2d{ 188,48 },olc::vi2d{ 18,12 },92 });
        vecKeys.push_back(Key{ olc::vi2d{ 178,61 },olc::vi2d{ 28,12 },66 });
        vecKeys.push_back(Key{ olc::vi2d{ 39,74 },olc::vi2d{ 11,12 },26 });
        vecKeys.push_back(Key{ olc::vi2d{ 52,74 },olc::vi2d{ 11,12 },24 });
        vecKeys.push_back(Key{ olc::vi2d{ 65,74 },olc::vi2d{ 11,12 },3 });
        vecKeys.push_back(Key{ olc::vi2d{ 78,74 },olc::vi2d{ 11,12 },22 });
        vecKeys.push_back(Key{ olc::vi2d{ 91,74 },olc::vi2d{ 11,12 },2 });
        vecKeys.push_back(Key{ olc::vi2d{ 105,74 },olc::vi2d{ 11,12 },14 });
        vecKeys.push_back(Key{ olc::vi2d{ 118,74 },olc::vi2d{ 11,12 },13 });
        vecKeys.push_back(Key{ olc::vi2d{ 131,74 },olc::vi2d{ 11,12 },86 });
        vecKeys.push_back(Key{ olc::vi2d{ 144,74 },olc::vi2d{ 11,12 },84 });
        vecKeys.push_back(Key{ olc::vi2d{ 157,74 },olc::vi2d{ 11,12 },89 });
        vecKeys.push_back(Key{ olc::vi2d{ 171,74 },olc::vi2d{ 35,12 },55 });
        vecKeys.push_back(Key{ olc::vi2d{ 9,48 },olc::vi2d{ 19,12 },54 });
        vecKeys.push_back(Key{ olc::vi2d{ 9,61 },olc::vi2d{ 22,12 },96 });
        vecKeys.push_back(Key{ olc::vi2d{ 9,74 },olc::vi2d{ 29,12 },55 });
        vecKeys.push_back(Key{ olc::vi2d{ 212,35 },olc::vi2d{ 12,12 },57 });
        vecKeys.push_back(Key{ olc::vi2d{ 212,48 },olc::vi2d{ 12,12 },58 });
        vecKeys.push_back(Key{ olc::vi2d{ 226,35 },olc::vi2d{ 12,12 },59 });
        vecKeys.push_back(Key{ olc::vi2d{ 226,48 },olc::vi2d{ 12,12 },60 });
        vecKeys.push_back(Key{ olc::vi2d{ 240,35 },olc::vi2d{ 12,12 },61 });
        vecKeys.push_back(Key{ olc::vi2d{ 240,48 },olc::vi2d{ 12,12 },62 });
        vecKeys.push_back(Key{ olc::vi2d{ 257,48 },olc::vi2d{ 12,12 },76 });
        vecKeys.push_back(Key{ olc::vi2d{ 270,48 },olc::vi2d{ 12,12 },77 });
        vecKeys.push_back(Key{ olc::vi2d{ 283,48 },olc::vi2d{ 12,12 },78 });
        vecKeys.push_back(Key{ olc::vi2d{ 296,48 },olc::vi2d{ 12,24 },81 });
        vecKeys.push_back(Key{ olc::vi2d{ 257,35 },olc::vi2d{ 12,12 },0 });
        vecKeys.push_back(Key{ olc::vi2d{ 270,35 },olc::vi2d{ 12,12 },80 });
        vecKeys.push_back(Key{ olc::vi2d{ 283,35 },olc::vi2d{ 12,12 },79 });
        vecKeys.push_back(Key{ olc::vi2d{ 296,35 },olc::vi2d{ 12,12 },82 });
        vecKeys.push_back(Key{ olc::vi2d{ 257,61 },olc::vi2d{ 12,12 },73 });
        vecKeys.push_back(Key{ olc::vi2d{ 270,61 },olc::vi2d{ 12,12 },74 });
        vecKeys.push_back(Key{ olc::vi2d{ 283,61 },olc::vi2d{ 12,12 },75 });
        vecKeys.push_back(Key{ olc::vi2d{ 257,74 },olc::vi2d{ 12,12 },70 });
        vecKeys.push_back(Key{ olc::vi2d{ 270,74 },olc::vi2d{ 12,12 },71 });
        vecKeys.push_back(Key{ olc::vi2d{ 283,74 },olc::vi2d{ 12,12 },72 });
        vecKeys.push_back(Key{ olc::vi2d{ 296,74 },olc::vi2d{ 12,24 },66 });
        vecKeys.push_back(Key{ olc::vi2d{ 257,87 },olc::vi2d{ 24,12 },69 });
        vecKeys.push_back(Key{ olc::vi2d{ 283,87 },olc::vi2d{ 12,12 },83 });
        vecKeys.push_back(Key{ olc::vi2d{ 226,75 },olc::vi2d{ 12,12 },49 });
        vecKeys.push_back(Key{ olc::vi2d{ 212,88 },olc::vi2d{ 12,12 },51 });
        vecKeys.push_back(Key{ olc::vi2d{ 226,88 },olc::vi2d{ 12,12 },50 });
        vecKeys.push_back(Key{ olc::vi2d{ 240,88 },olc::vi2d{ 12,12 },52 });
        vecKeys.push_back(Key{ olc::vi2d{ 30,87 },olc::vi2d{ 11,11 },0 });
        vecKeys.push_back(Key{ olc::vi2d{ 47,87 },olc::vi2d{ 11,11 },0 });
        vecKeys.push_back(Key{ olc::vi2d{ 64,87 },olc::vi2d{ 75,11 },53 });
        vecKeys.push_back(Key{ olc::vi2d{ 143,87 },olc::vi2d{ 11,11 },0 });
        vecKeys.push_back(Key{ olc::vi2d{ 160,87 },olc::vi2d{ 11,11 },0 });
        vecKeys.push_back(Key{ olc::vi2d{ 176,87 },olc::vi2d{ 11,11 },0 });
        vecKeys.push_back(Key{ olc::vi2d{ 192,87 },olc::vi2d{ 14,11 },56 });
        vecKeys.push_back(Key{ olc::vi2d{ 9,87 },olc::vi2d{ 18,11 },56 });
        renKeyboard.Load("assets/keyboard.png");
        
        return true;
    }

    bool OnUserUpdate(float fElapsedTime) override
    {
        Clear(olc::BLACK);
        DrawSprite(0,0, renKeyboard.Sprite());
        for(auto &key : vecKeys)
        {
            if(GetKey((olc::Key)key.key).bHeld)
            {
                FillRect(key.position, key.size, olc::BLUE);
            }
            DrawRect(key.position, key.size - olc::vi2d{1, 1}, olc::WHITE);
        }
        return true;
    }

    std::vector<Key> vecKeys;
    olc::Renderable renKeyboard;
};


int main(void)
{
    DemoKeyboard demo;
    
    if(demo.Construct(320,180,4,4))
    {
        demo.Start();
    }
        
    
    return 0;
}