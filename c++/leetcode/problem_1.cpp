#include<iostream>

using namespace std;

typedef unsigned int U32;

typedef struct HatPart
{
  U32 iPartCode;
  U32 iCost;
  U32 iColor; 
}
HatPart;

typedef struct Hat
{
  //char hatName[64]; //null-terminated ascii string, might be empty
  char hatName[64]; //null-terminated ascii string, might be empty
  U32 iHatSize;
  U32 iHatModel;
  char manufacturerName[64]; //null-terminated ascii string, might be empty
  U32 iNumParts; //the number of parts in this hat, min = 0, max = 16
  HatPart parts[16];
  //HatPart **parts;
}
Hat;

typedef struct CompactHat
{
  //char hatName[64]; //null-terminated ascii string, might be empty
  char *hatName; //null-terminated ascii string, might be empty
  U32 iHatSize;
  U32 iHatModel;
  char manufacturerName[64]; //null-terminated ascii string, might be empty
  U32 iNumParts; //the number of parts in this hat, min = 0, max = 16
  HatPart **parts;
  //HatPart **parts;
}
CompactHat;

struct serialsizedCompcHatHeader{
   int firstfSz;
   int fourthfSz;
   


};

// expected size: 84 bytes
Hat hat1 =
{
  "Bowler",
  17,
  1000000,
  "United Hats of San Francisco",
  3,
  {
       {
              20,30,40,
          },
          {
              50,60,70,
          },
          {
              80,90,100,
          },
  }
};

// returns the packed buffer, and the output size
void *PackHat(const Hat *pHat, int *piOutSize)
{
    int len;
	//find the characters in the name and allocatel memory.
	if(phat->hatName!=NULL){
		//find the size 
		len=strlen(phat->hatName);
	}
	int datalen = strlen(phat->hatName) + 4 + 4 + strlen(phat->manufacturerName) + 4 + pHat->iNumParts*size_of(HatPart);

	int headerSz = sizeof(serialsizedCompcHatHeader);
	void * packedHeaderData = malloc(headerSz + datalen);
	void *wptmp = packedHeaderData
	*(int*)wptmp = strlen(phat->hatName);
	wptmp+4;
	*(int*)wptmp = strlen(phat->manufacturerName);
	wptmp+4;
	strcpy((char*)wptemp, phat->hatName);
	wptmp + strlen(phat->hatName)
	;






}

// returns false on failure
bool UnpackHat(const void *pPackedBuffer, int iPackedBufferSize, Hat *pOutHat);


