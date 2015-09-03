#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MIN;
int8_t x7 = INT8_MIN;
uint64_t x16 = 162544636015416LLU;
int8_t x21 = 13;
static uint64_t x22 = UINT64_MAX;
volatile int32_t t3 = 107;
volatile uint16_t x40 = UINT16_MAX;
int16_t x41 = 1501;
int32_t x43 = INT32_MIN;
volatile int8_t x64 = -1;
uint16_t x89 = 208U;
uint32_t x92 = 464337U;
volatile int32_t t8 = -27;
static uint8_t x112 = 3U;
volatile int32_t x137 = INT32_MAX;
int32_t t10 = INT32_MAX;
static volatile int64_t x142 = -4LL;
static uint8_t x150 = UINT8_MAX;
volatile uint32_t x168 = 211480116U;
volatile uint64_t t14 = 258871303LLU;
volatile int32_t x180 = INT32_MIN;
int16_t x208 = INT16_MIN;
int64_t t16 = 9849LL;
static int8_t x211 = INT8_MIN;
int32_t t17 = -14129582;
volatile int16_t x233 = 303;
int16_t x234 = INT16_MIN;
int32_t t19 = 241761099;
int16_t x277 = 326;
volatile int8_t x307 = INT8_MIN;
uint32_t x312 = UINT32_MAX;
int32_t x368 = -2511296;
volatile int64_t t29 = INT64_MAX;
static volatile int64_t t30 = -79622085774559LL;
static uint64_t x461 = UINT64_MAX;
static volatile int64_t x463 = 912078LL;
static int32_t x469 = INT32_MAX;
uint8_t x472 = 1U;
uint64_t x509 = UINT64_MAX;
int64_t x512 = -1993205595764LL;
static uint16_t x533 = UINT16_MAX;
uint32_t x534 = UINT32_MAX;
volatile int16_t x536 = -1;
volatile uint8_t x541 = 0U;
int32_t x544 = -292013628;
int32_t t38 = -434;
uint32_t x597 = 0U;
int64_t x628 = -1559234LL;
int64_t x638 = -3241LL;
static int16_t x640 = INT16_MAX;
int32_t t42 = 223403054;
int32_t x718 = INT32_MAX;
volatile int32_t x769 = INT32_MAX;
int8_t x772 = 1;
int32_t x798 = -10;
uint8_t x802 = 4U;
volatile uint64_t x803 = 1LLU;
volatile int32_t t52 = 18147;
static int64_t x809 = 57842007288590LL;
int64_t x812 = -1LL;
uint64_t x831 = 441349117218938744LLU;
int64_t x850 = -1LL;
int8_t x855 = -19;
uint32_t x875 = UINT32_MAX;
int16_t x886 = INT16_MIN;
int32_t t61 = -185480;
volatile uint16_t x913 = 1650U;
int32_t x971 = INT32_MAX;
static uint64_t x1060 = UINT64_MAX;
uint16_t x1070 = 61U;
int64_t t71 = INT64_MAX;
int16_t x1080 = INT16_MIN;
int32_t t72 = -387;
uint16_t x1127 = 24U;
uint64_t x1203 = 7300184LLU;
uint64_t x1258 = 96LLU;
volatile uint8_t x1261 = UINT8_MAX;
uint8_t x1264 = UINT8_MAX;
int16_t x1271 = INT16_MAX;
uint16_t x1272 = UINT16_MAX;
static int32_t x1277 = 1959;
static uint32_t x1321 = 5U;
int8_t x1322 = -8;
int64_t x1324 = -1LL;
volatile int64_t x1331 = -460342LL;
int64_t x1359 = INT64_MIN;
int16_t x1360 = 1;
static uint32_t t85 = UINT32_MAX;
static volatile int8_t x1370 = INT8_MIN;
uint32_t x1406 = 328U;
uint8_t x1408 = UINT8_MAX;
int32_t t88 = 1438216;
int16_t x1433 = 2;
int8_t x1434 = INT8_MIN;
uint64_t t91 = 29LLU;
static int32_t x1451 = INT32_MIN;
static int8_t x1457 = 1;
volatile uint64_t x1460 = UINT64_MAX;
int8_t x1513 = INT8_MAX;
int8_t x1535 = INT8_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int8_t x2 = -1;
	int64_t x3 = -1LL;
	int32_t t0 = -49;

	t0 = (x1>>(x2/(x3*x4)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 13U;
	volatile uint64_t x6 = 11818LLU;
	int16_t x8 = INT16_MIN;
	uint32_t t1 = 1674U;

	t1 = (x5>>(x6/(x7*x8)));

	if (t1 != 13U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	volatile uint16_t x14 = 862U;
	uint16_t x15 = 5U;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x13>>(x14/(x15*x16)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x23 = 544U;
	volatile int8_t x24 = -57;

	t3 = (x21>>(x22/(x23*x24)));

	if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = 1U;
	static int8_t x38 = INT8_MAX;
	uint32_t x39 = 1282U;
	volatile int32_t t4 = -11;

	t4 = (x37>>(x38/(x39*x40)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x42 = UINT16_MAX;
	volatile int64_t x44 = -3016LL;
	volatile int32_t t5 = 59;

	t5 = (x41>>(x42/(x43*x44)));

	if (t5 != 1501) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x61 = 408828503709152300LLU;
	uint32_t x62 = 3931146U;
	static volatile uint64_t x63 = 1471314681LLU;
	volatile uint64_t t6 = 10LLU;

	t6 = (x61>>(x62/(x63*x64)));

	if (t6 != 408828503709152300LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x69 = 21327U;
	static uint16_t x70 = UINT16_MAX;
	uint8_t x71 = 23U;
	uint32_t x72 = 46323936U;
	static int32_t t7 = 150703001;

	t7 = (x69>>(x70/(x71*x72)));

	if (t7 != 21327) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x90 = 39LLU;
	static int32_t x91 = INT32_MAX;

	t8 = (x89>>(x90/(x91*x92)));

	if (t8 != 208) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x109 = INT32_MAX;
	int32_t x110 = -1;
	uint8_t x111 = 1U;
	int32_t t9 = INT32_MAX;

	t9 = (x109>>(x110/(x111*x112)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x138 = 345;
	volatile int64_t x139 = -192995166LL;
	volatile int16_t x140 = 2;

	t10 = (x137>>(x138/(x139*x140)));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x141 = 8792LLU;
	int8_t x143 = INT8_MIN;
	volatile uint32_t x144 = UINT32_MAX;
	volatile uint64_t t11 = 2757704018101338LLU;

	t11 = (x141>>(x142/(x143*x144)));

	if (t11 != 8792LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x151 = 8629U;
	static volatile int16_t x152 = INT16_MAX;
	volatile int32_t t12 = 56;

	t12 = (x149>>(x150/(x151*x152)));

	if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x161 = INT8_MAX;
	uint8_t x162 = 6U;
	int16_t x163 = INT16_MIN;
	static int16_t x164 = 30;
	static volatile int32_t t13 = 65465;

	t13 = (x161>>(x162/(x163*x164)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x165 = 3264871093LLU;
	int8_t x166 = 17;
	uint32_t x167 = 187583065U;

	t14 = (x165>>(x166/(x167*x168)));

	if (t14 != 3264871093LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x177 = 426LL;
	static volatile int32_t x178 = -1;
	volatile int64_t x179 = -1LL;
	volatile int64_t t15 = -90811199575LL;

	t15 = (x177>>(x178/(x179*x180)));

	if (t15 != 426LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x205 = 13319LL;
	int32_t x206 = -1;
	volatile int32_t x207 = -1;

	t16 = (x205>>(x206/(x207*x208)));

	if (t16 != 13319LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x209 = 88U;
	uint32_t x210 = 5U;
	volatile uint64_t x212 = 4604675206025536LLU;

	t17 = (x209>>(x210/(x211*x212)));

	if (t17 != 88) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x225 = 2968LLU;
	volatile uint32_t x226 = 0U;
	static int16_t x227 = 50;
	static volatile uint16_t x228 = 27U;
	volatile uint64_t t18 = 1960053556LLU;

	t18 = (x225>>(x226/(x227*x228)));

	if (t18 != 2968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x235 = -1LL;
	int32_t x236 = -1229454;

	t19 = (x233>>(x234/(x235*x236)));

	if (t19 != 303) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x249 = 10U;
	int64_t x250 = -466977823LL;
	volatile int8_t x251 = INT8_MAX;
	static volatile uint64_t x252 = UINT64_MAX;
	volatile int32_t t20 = 7201073;

	t20 = (x249>>(x250/(x251*x252)));

	if (t20 != 10) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x278 = 58U;
	volatile uint8_t x279 = UINT8_MAX;
	int16_t x280 = INT16_MAX;
	int32_t t21 = 0;

	t21 = (x277>>(x278/(x279*x280)));

	if (t21 != 326) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x306 = -1LL;
	int64_t x308 = 12575556LL;
	volatile int32_t t22 = 980710255;

	t22 = (x305>>(x306/(x307*x308)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x309 = 1U;
	uint16_t x310 = UINT16_MAX;
	uint64_t x311 = 1741482339LLU;
	volatile int32_t t23 = 23157;

	t23 = (x309>>(x310/(x311*x312)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x321 = 4U;
	int64_t x322 = -1LL;
	volatile int8_t x323 = INT8_MIN;
	int64_t x324 = -151381LL;
	int32_t t24 = 2;

	t24 = (x321>>(x322/(x323*x324)));

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x325 = INT32_MAX;
	static volatile int16_t x326 = -1;
	volatile int8_t x327 = INT8_MIN;
	int8_t x328 = -1;
	static int32_t t25 = INT32_MAX;

	t25 = (x325>>(x326/(x327*x328)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x349 = UINT64_MAX;
	static volatile int32_t x350 = 521;
	uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;
	static volatile uint64_t t26 = UINT64_MAX;

	t26 = (x349>>(x350/(x351*x352)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x357 = INT32_MAX;
	uint8_t x358 = 16U;
	int16_t x359 = -10;
	volatile uint8_t x360 = UINT8_MAX;
	static volatile int32_t t27 = INT32_MAX;

	t27 = (x357>>(x358/(x359*x360)));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x361 = INT32_MAX;
	static int16_t x362 = -1;
	uint64_t x363 = 93586873108896314LLU;
	int32_t x364 = -99674;
	int32_t t28 = 52;

	t28 = (x361>>(x362/(x363*x364)));

	if (t28 != 268435455) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x365 = INT64_MAX;
	int32_t x366 = 364;
	int32_t x367 = 486;

	t29 = (x365>>(x366/(x367*x368)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x421 = 20368LL;
	int16_t x422 = INT16_MAX;
	volatile int32_t x423 = INT32_MIN;
	uint32_t x424 = 509563U;

	t30 = (x421>>(x422/(x423*x424)));

	if (t30 != 20368LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x462 = 743871LL;
	int8_t x464 = INT8_MIN;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = (x461>>(x462/(x463*x464)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x470 = 0;
	static uint32_t x471 = 5229U;
	volatile int32_t t32 = INT32_MAX;

	t32 = (x469>>(x470/(x471*x472)));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x477 = 1LLU;
	uint64_t x478 = 309850332974671LLU;
	int8_t x479 = INT8_MAX;
	int8_t x480 = INT8_MIN;
	uint64_t t33 = 94643209LLU;

	t33 = (x477>>(x478/(x479*x480)));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x485 = INT64_MAX;
	volatile uint32_t x486 = 4U;
	int64_t x487 = 84565LL;
	int16_t x488 = 10;
	static volatile int64_t t34 = INT64_MAX;

	t34 = (x485>>(x486/(x487*x488)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x510 = -1LL;
	static volatile int32_t x511 = -1;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x509>>(x510/(x511*x512)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x521 = UINT16_MAX;
	volatile int64_t x522 = -1LL;
	static int16_t x523 = INT16_MIN;
	uint8_t x524 = 8U;
	volatile int32_t t36 = -14875;

	t36 = (x521>>(x522/(x523*x524)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x535 = 84U;
	volatile int32_t t37 = 47267082;

	t37 = (x533>>(x534/(x535*x536)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x542 = INT32_MAX;
	static int64_t x543 = -1LL;

	t38 = (x541>>(x542/(x543*x544)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x598 = 402792U;
	static volatile uint16_t x599 = 1U;
	int8_t x600 = INT8_MIN;
	uint32_t t39 = 2437U;

	t39 = (x597>>(x598/(x599*x600)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x625 = 19281;
	volatile int8_t x626 = -1;
	int8_t x627 = -1;
	static int32_t t40 = 31686271;

	t40 = (x625>>(x626/(x627*x628)));

	if (t40 != 19281) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x629 = 24840U;
	volatile int32_t x630 = -1411483;
	int16_t x631 = 257;
	uint16_t x632 = UINT16_MAX;
	int32_t t41 = 0;

	t41 = (x629>>(x630/(x631*x632)));

	if (t41 != 24840) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x637 = 25223U;
	static int8_t x639 = 1;

	t42 = (x637>>(x638/(x639*x640)));

	if (t42 != 25223) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x665 = INT8_MAX;
	int16_t x666 = INT16_MIN;
	static volatile uint16_t x667 = UINT16_MAX;
	int8_t x668 = -54;
	volatile int32_t t43 = 28242609;

	t43 = (x665>>(x666/(x667*x668)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x717 = INT16_MAX;
	volatile uint64_t x719 = 2018LLU;
	volatile int16_t x720 = -1;
	int32_t t44 = 47167120;

	t44 = (x717>>(x718/(x719*x720)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x721 = 5957U;
	int32_t x722 = -257;
	uint16_t x723 = 253U;
	int16_t x724 = -14;
	volatile uint32_t t45 = 55800U;

	t45 = (x721>>(x722/(x723*x724)));

	if (t45 != 5957U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x725 = 43U;
	int32_t x726 = -15;
	uint8_t x727 = 31U;
	int16_t x728 = INT16_MIN;
	volatile int32_t t46 = 46902729;

	t46 = (x725>>(x726/(x727*x728)));

	if (t46 != 43) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x729 = 48U;
	int8_t x730 = -44;
	int16_t x731 = 411;
	static volatile int64_t x732 = 2406517880105LL;
	int32_t t47 = -3;

	t47 = (x729>>(x730/(x731*x732)));

	if (t47 != 48) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x733 = 87U;
	int16_t x734 = 1;
	uint8_t x735 = 21U;
	int64_t x736 = -218586609499518LL;
	volatile uint32_t t48 = 86748237U;

	t48 = (x733>>(x734/(x735*x736)));

	if (t48 != 87U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x749 = 413U;
	volatile uint16_t x750 = UINT16_MAX;
	static uint16_t x751 = 47U;
	uint32_t x752 = 17563755U;
	volatile int32_t t49 = 0;

	t49 = (x749>>(x750/(x751*x752)));

	if (t49 != 413) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x770 = 0U;
	uint8_t x771 = UINT8_MAX;
	static volatile int32_t t50 = INT32_MAX;

	t50 = (x769>>(x770/(x771*x772)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x797 = 152U;
	volatile int16_t x799 = INT16_MIN;
	volatile int8_t x800 = -1;
	static uint32_t t51 = 52570752U;

	t51 = (x797>>(x798/(x799*x800)));

	if (t51 != 152U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x801 = 22;
	uint16_t x804 = 838U;

	t52 = (x801>>(x802/(x803*x804)));

	if (t52 != 22) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x805 = UINT16_MAX;
	static int16_t x806 = INT16_MAX;
	static uint64_t x807 = 29638581481LLU;
	volatile int8_t x808 = INT8_MAX;
	int32_t t53 = -409;

	t53 = (x805>>(x806/(x807*x808)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x810 = 611971982LLU;
	int32_t x811 = INT32_MIN;
	volatile int64_t t54 = 24121148094702LL;

	t54 = (x809>>(x810/(x811*x812)));

	if (t54 != 57842007288590LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x829 = INT8_MAX;
	uint64_t x830 = 96591343616597958LLU;
	uint64_t x832 = UINT64_MAX;
	volatile int32_t t55 = 12;

	t55 = (x829>>(x830/(x831*x832)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x833 = UINT32_MAX;
	uint16_t x834 = 29U;
	static int64_t x835 = -1LL;
	int32_t x836 = INT32_MIN;
	uint32_t t56 = UINT32_MAX;

	t56 = (x833>>(x834/(x835*x836)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x849 = 30745U;
	uint64_t x851 = 196844996045458LLU;
	volatile uint64_t x852 = 2444729LLU;
	volatile uint32_t t57 = 532427U;

	t57 = (x849>>(x850/(x851*x852)));

	if (t57 != 15U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x853 = 298LL;
	static int8_t x854 = -1;
	volatile uint16_t x856 = 839U;
	volatile int64_t t58 = 291843273966108498LL;

	t58 = (x853>>(x854/(x855*x856)));

	if (t58 != 298LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x873 = 0U;
	volatile uint64_t x874 = 4309417190957299396LLU;
	int64_t x876 = -975LL;
	volatile int32_t t59 = -190;

	t59 = (x873>>(x874/(x875*x876)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x877 = 3111927704533LLU;
	uint64_t x878 = 90913459292294LLU;
	uint16_t x879 = 29013U;
	uint64_t x880 = UINT64_MAX;
	uint64_t t60 = 3230749067768LLU;

	t60 = (x877>>(x878/(x879*x880)));

	if (t60 != 3111927704533LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x885 = 4U;
	volatile int32_t x887 = 27809;
	int8_t x888 = -1;

	t61 = (x885>>(x886/(x887*x888)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x914 = INT16_MAX;
	int8_t x915 = -1;
	volatile int64_t x916 = 261624051LL;
	volatile int32_t t62 = -28848425;

	t62 = (x913>>(x914/(x915*x916)));

	if (t62 != 1650) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x917 = INT32_MAX;
	int16_t x918 = INT16_MAX;
	int16_t x919 = INT16_MAX;
	int32_t x920 = -2686;
	static int32_t t63 = INT32_MAX;

	t63 = (x917>>(x918/(x919*x920)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x937 = 529;
	int16_t x938 = INT16_MIN;
	volatile int32_t x939 = INT32_MAX;
	int64_t x940 = 11033LL;
	volatile int32_t t64 = 15;

	t64 = (x937>>(x938/(x939*x940)));

	if (t64 != 529) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x969 = 158192679367572017LL;
	uint32_t x970 = 18431U;
	volatile int64_t x972 = -1LL;
	static int64_t t65 = 29138660158967450LL;

	t65 = (x969>>(x970/(x971*x972)));

	if (t65 != 158192679367572017LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x993 = 10020U;
	uint16_t x994 = 360U;
	int32_t x995 = 3;
	int16_t x996 = INT16_MIN;
	int32_t t66 = -3579;

	t66 = (x993>>(x994/(x995*x996)));

	if (t66 != 10020) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x997 = UINT8_MAX;
	int8_t x998 = INT8_MAX;
	static uint8_t x999 = 91U;
	static uint64_t x1000 = UINT64_MAX;
	volatile int32_t t67 = 959;

	t67 = (x997>>(x998/(x999*x1000)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x1001 = INT8_MAX;
	int8_t x1002 = INT8_MAX;
	int64_t x1003 = 22LL;
	int8_t x1004 = 5;
	static int32_t t68 = -422;

	t68 = (x1001>>(x1002/(x1003*x1004)));

	if (t68 != 63) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1041 = UINT64_MAX;
	int64_t x1042 = -1LL;
	uint32_t x1043 = 681356945U;
	uint16_t x1044 = UINT16_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x1041>>(x1042/(x1043*x1044)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x1057 = 2;
	volatile uint16_t x1058 = 18U;
	static int8_t x1059 = INT8_MIN;
	int32_t t70 = 541;

	t70 = (x1057>>(x1058/(x1059*x1060)));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x1069 = INT64_MAX;
	volatile uint8_t x1071 = 15U;
	int8_t x1072 = 59;

	t71 = (x1069>>(x1070/(x1071*x1072)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1077 = INT16_MAX;
	uint16_t x1078 = UINT16_MAX;
	uint8_t x1079 = 58U;

	t72 = (x1077>>(x1078/(x1079*x1080)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x1125 = 1630;
	volatile int8_t x1126 = INT8_MAX;
	int64_t x1128 = 58641002068641LL;
	static volatile int32_t t73 = 20;

	t73 = (x1125>>(x1126/(x1127*x1128)));

	if (t73 != 1630) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x1173 = UINT16_MAX;
	int8_t x1174 = INT8_MAX;
	int32_t x1175 = INT32_MAX;
	int8_t x1176 = 1;
	static volatile int32_t t74 = -431271430;

	t74 = (x1173>>(x1174/(x1175*x1176)));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x1193 = 248317146LL;
	int32_t x1194 = 2;
	volatile int16_t x1195 = -958;
	int64_t x1196 = -1LL;
	int64_t t75 = -146870336084804LL;

	t75 = (x1193>>(x1194/(x1195*x1196)));

	if (t75 != 248317146LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1201 = 59556930;
	static int64_t x1202 = INT64_MIN;
	int64_t x1204 = INT64_MAX;
	static int32_t t76 = -8369;

	t76 = (x1201>>(x1202/(x1203*x1204)));

	if (t76 != 59556930) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1241 = 31U;
	static int8_t x1242 = INT8_MIN;
	uint8_t x1243 = 8U;
	int8_t x1244 = -1;
	volatile int32_t t77 = -253119937;

	t77 = (x1241>>(x1242/(x1243*x1244)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1257 = 481230U;
	static volatile uint32_t x1259 = 14895205U;
	static int32_t x1260 = INT32_MIN;
	volatile uint32_t t78 = 0U;

	t78 = (x1257>>(x1258/(x1259*x1260)));

	if (t78 != 481230U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1262 = -1;
	static volatile uint16_t x1263 = 190U;
	int32_t t79 = -241521236;

	t79 = (x1261>>(x1262/(x1263*x1264)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x1269 = 251;
	static int32_t x1270 = -58747550;
	volatile int32_t t80 = -57324;

	t80 = (x1269>>(x1270/(x1271*x1272)));

	if (t80 != 251) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1278 = UINT32_MAX;
	volatile int16_t x1279 = INT16_MIN;
	uint64_t x1280 = 231032LLU;
	int32_t t81 = -894981179;

	t81 = (x1277>>(x1278/(x1279*x1280)));

	if (t81 != 1959) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1317 = INT8_MAX;
	int64_t x1318 = -1LL;
	volatile int64_t x1319 = 25753LL;
	int64_t x1320 = 530474614LL;
	volatile int32_t t82 = 8588401;

	t82 = (x1317>>(x1318/(x1319*x1320)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1323 = 40270U;
	static uint32_t t83 = 204886U;

	t83 = (x1321>>(x1322/(x1323*x1324)));

	if (t83 != 5U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x1329 = 20LLU;
	static volatile int8_t x1330 = INT8_MAX;
	static int8_t x1332 = INT8_MAX;
	uint64_t t84 = 2415116LLU;

	t84 = (x1329>>(x1330/(x1331*x1332)));

	if (t84 != 20LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1357 = UINT32_MAX;
	volatile int64_t x1358 = -137747LL;

	t85 = (x1357>>(x1358/(x1359*x1360)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1369 = 168;
	static uint8_t x1371 = 1U;
	static int64_t x1372 = INT64_MIN;
	volatile int32_t t86 = 631563703;

	t86 = (x1369>>(x1370/(x1371*x1372)));

	if (t86 != 168) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x1405 = UINT8_MAX;
	volatile uint8_t x1407 = UINT8_MAX;
	volatile int32_t t87 = -18473;

	t87 = (x1405>>(x1406/(x1407*x1408)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1417 = INT32_MAX;
	static uint32_t x1418 = UINT32_MAX;
	volatile int8_t x1419 = INT8_MIN;
	static volatile int8_t x1420 = 6;

	t88 = (x1417>>(x1418/(x1419*x1420)));

	if (t88 != 1073741823) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1435 = UINT64_MAX;
	static int64_t x1436 = INT64_MAX;
	int32_t t89 = 18624403;

	t89 = (x1433>>(x1434/(x1435*x1436)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x1441 = 6U;
	volatile uint16_t x1442 = UINT16_MAX;
	int8_t x1443 = INT8_MAX;
	static int16_t x1444 = 267;
	volatile int32_t t90 = -47232662;

	t90 = (x1441>>(x1442/(x1443*x1444)));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1445 = 9331695120LLU;
	uint16_t x1446 = 1U;
	uint16_t x1447 = UINT16_MAX;
	uint64_t x1448 = 1591065LLU;

	t91 = (x1445>>(x1446/(x1447*x1448)));

	if (t91 != 9331695120LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1449 = INT16_MAX;
	uint64_t x1450 = UINT64_MAX;
	int64_t x1452 = 1729012LL;
	int32_t t92 = 25043;

	t92 = (x1449>>(x1450/(x1451*x1452)));

	if (t92 != 16383) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x1458 = INT16_MAX;
	static int32_t x1459 = -654146;
	int32_t t93 = -270698120;

	t93 = (x1457>>(x1458/(x1459*x1460)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1477 = INT32_MAX;
	static volatile uint16_t x1478 = UINT16_MAX;
	static int16_t x1479 = 1;
	uint16_t x1480 = 3763U;
	static volatile int32_t t94 = -4943;

	t94 = (x1477>>(x1478/(x1479*x1480)));

	if (t94 != 16383) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x1485 = 0LLU;
	uint32_t x1486 = 1U;
	int32_t x1487 = -1;
	uint16_t x1488 = 96U;
	volatile uint64_t t95 = 5LLU;

	t95 = (x1485>>(x1486/(x1487*x1488)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1497 = UINT32_MAX;
	uint16_t x1498 = 43U;
	int64_t x1499 = 65178499LL;
	volatile int16_t x1500 = INT16_MIN;
	static volatile uint32_t t96 = UINT32_MAX;

	t96 = (x1497>>(x1498/(x1499*x1500)));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x1514 = UINT64_MAX;
	static int32_t x1515 = -1;
	int8_t x1516 = INT8_MAX;
	int32_t t97 = -7483471;

	t97 = (x1513>>(x1514/(x1515*x1516)));

	if (t97 != 63) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x1533 = 2071U;
	uint8_t x1534 = UINT8_MAX;
	uint16_t x1536 = 18438U;
	int32_t t98 = 119597;

	t98 = (x1533>>(x1534/(x1535*x1536)));

	if (t98 != 2071) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x1545 = 7U;
	uint16_t x1546 = UINT16_MAX;
	static int64_t x1547 = -130LL;
	int16_t x1548 = INT16_MIN;
	volatile int32_t t99 = -1941;

	t99 = (x1545>>(x1546/(x1547*x1548)));

	if (t99 != 7) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

