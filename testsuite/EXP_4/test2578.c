
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
int64_t x7 = INT64_MIN;
int32_t x26 = 0;
uint64_t x40 = 5111875883639430LLU;
int32_t x51 = INT32_MIN;
static volatile int64_t x59 = INT64_MIN;
volatile int64_t x62 = INT64_MIN;
uint32_t t13 = 3U;
uint64_t t15 = 3578295988181699107LLU;
static uint64_t x95 = 10LLU;
uint32_t x101 = UINT32_MAX;
uint64_t x104 = 3741180107277LLU;
uint64_t x108 = UINT64_MAX;
uint64_t t18 = 52653LLU;
static volatile int64_t t19 = -820001595454LL;
static int64_t x120 = -1LL;
int32_t x125 = INT32_MIN;
static int8_t x130 = INT8_MAX;
int8_t x163 = INT8_MIN;
static uint16_t x165 = 25640U;
uint32_t x177 = UINT32_MAX;
volatile int16_t x183 = -1;
int8_t x184 = INT8_MIN;
int64_t t32 = 373206475888539LL;
uint64_t x185 = 157354286LLU;
uint8_t x188 = 0U;
static uint8_t x193 = UINT8_MAX;
uint64_t x194 = UINT64_MAX;
static volatile int8_t x200 = 35;
int8_t x218 = -1;
static int32_t x224 = -655827;
int16_t x240 = -1;
int32_t t41 = 32;
int16_t x243 = -1;
int8_t x245 = INT8_MIN;
static uint64_t t45 = 5704LLU;
uint64_t x269 = 7130LLU;
int64_t x270 = -1LL;
int8_t x279 = INT8_MIN;
int8_t x286 = -14;
static int16_t x294 = INT16_MIN;
volatile uint16_t x295 = 96U;
int32_t t52 = -3;
volatile uint64_t t53 = 200LLU;
int16_t x320 = -1;
static volatile int32_t x327 = INT32_MAX;
static int8_t x331 = -1;
int16_t x357 = INT16_MIN;
int64_t x361 = INT64_MAX;
static uint16_t x362 = 6152U;
int8_t x369 = 11;
int8_t x372 = 26;
int64_t x388 = -55685684795LL;
int64_t t63 = -14LL;
uint32_t t64 = 2U;
volatile int8_t x394 = 0;
int8_t x414 = INT8_MIN;
static int8_t x415 = INT8_MIN;
uint64_t t67 = 454117905904925276LLU;
int16_t x423 = -10;
int8_t x424 = INT8_MIN;
static volatile int32_t x432 = -1;
int64_t x435 = -1LL;
uint64_t x439 = 88460649261434LLU;
uint32_t x443 = UINT32_MAX;
volatile uint64_t t73 = 15322LLU;
int32_t x447 = INT32_MAX;
int32_t x448 = INT32_MIN;
volatile uint32_t t74 = 190U;
static int8_t x455 = 1;
static volatile int8_t x461 = INT8_MIN;
static uint64_t x470 = 7567LLU;
static volatile uint64_t t79 = 222715458016LLU;
static int32_t x488 = INT32_MIN;
static int32_t x490 = INT32_MIN;
uint64_t x504 = 205505122859LLU;
int16_t x507 = -3;
uint8_t x512 = 3U;
int32_t t84 = 466736789;
int32_t x533 = INT32_MIN;
uint32_t t88 = 897000491U;
int16_t x561 = INT16_MIN;
static int16_t x565 = INT16_MIN;
uint16_t x570 = 120U;
volatile uint64_t t97 = 5490191740LLU;
volatile int32_t x585 = INT32_MIN;
int64_t x586 = -27LL;
int64_t x588 = INT64_MIN;
uint16_t x604 = 6611U;
volatile int32_t t102 = 4678460;
int16_t x606 = 0;
volatile int32_t x607 = -60898;
uint64_t t103 = 27LLU;
uint32_t t104 = 0U;
volatile int8_t x622 = INT8_MIN;
int16_t x634 = INT16_MIN;
int8_t x635 = INT8_MIN;
uint32_t t107 = 1245301U;
int32_t x638 = -1;
int64_t x639 = -1LL;
static uint8_t x643 = 0U;
uint32_t x648 = 88U;
uint8_t x655 = 3U;
volatile int16_t x656 = 1;
int64_t x662 = INT64_MAX;
uint32_t x663 = UINT32_MAX;
uint64_t t113 = 769LLU;
volatile int8_t x673 = INT8_MIN;
uint64_t t117 = 25890235648LLU;
volatile uint64_t x722 = UINT64_MAX;
int16_t x724 = INT16_MAX;
static volatile uint64_t x729 = 998324304068LLU;
int16_t x732 = -1;
int8_t x733 = 5;
int32_t x734 = INT32_MIN;
uint32_t x735 = 123U;
volatile uint32_t x736 = 3U;
int32_t x744 = INT32_MAX;
volatile uint64_t t125 = 273410717531834235LLU;
int64_t x765 = 14LL;
volatile int32_t x767 = 1909831;
volatile int8_t x768 = -1;
volatile uint64_t t128 = 910837LLU;
int16_t x781 = INT16_MIN;
static int16_t x785 = INT16_MAX;
int64_t x788 = -114LL;
uint16_t x798 = 36U;
static uint16_t x811 = UINT16_MAX;
uint8_t x817 = 83U;
int64_t x818 = -36LL;
int8_t x819 = -1;
volatile uint8_t x828 = 70U;
int64_t x835 = -3392LL;
uint64_t t135 = 4043020136LLU;
int32_t x837 = INT32_MIN;
static int32_t x842 = -39;
static int16_t x855 = INT16_MIN;
int8_t x859 = 54;
int64_t x865 = INT64_MIN;
int16_t x866 = INT16_MAX;
uint16_t x889 = UINT16_MAX;
volatile uint64_t x891 = 173005LLU;
uint64_t t144 = 13664713187252LLU;
volatile int64_t x899 = -1409137LL;
int64_t x913 = -14916407LL;
static volatile uint8_t x927 = UINT8_MAX;
int32_t x928 = -1;
uint32_t x949 = UINT32_MAX;
int64_t x950 = -7771818645825LL;
uint8_t x951 = 3U;
uint8_t x952 = 19U;
static volatile int64_t t155 = 0LL;
int64_t x953 = -93LL;
int8_t x963 = INT8_MAX;
int64_t x979 = -1LL;
uint8_t x988 = UINT8_MAX;
uint8_t x998 = 63U;
int32_t x999 = INT32_MAX;
uint64_t x1000 = 49260354120LLU;
int32_t x1001 = INT32_MIN;
volatile int32_t t164 = -2171;
uint64_t x1007 = UINT64_MAX;
int64_t x1009 = INT64_MIN;
static int16_t x1020 = -1;
int32_t x1021 = INT32_MIN;
int8_t x1023 = -1;
static volatile uint64_t t168 = 40231946LLU;
int8_t x1026 = 1;
volatile uint64_t t169 = 505LLU;
int32_t x1029 = INT32_MAX;
int16_t x1032 = -3;
int32_t x1035 = INT32_MIN;
volatile int32_t x1036 = 5;
static int8_t x1038 = -1;
uint64_t t172 = 1LLU;
int64_t x1042 = -1LL;
static uint8_t x1056 = UINT8_MAX;
static uint64_t x1060 = UINT64_MAX;
int8_t x1074 = INT8_MAX;
uint32_t x1089 = 7U;
uint8_t x1097 = 0U;
static int32_t t181 = -1628;
uint16_t x1104 = 134U;
int8_t x1106 = -1;
int64_t x1107 = INT64_MAX;
static int64_t x1121 = INT64_MAX;
static uint32_t x1132 = UINT32_MAX;
volatile uint32_t t188 = 97U;
uint16_t x1134 = 4U;
int64_t x1137 = -1LL;
int8_t x1139 = -1;
static volatile int64_t t190 = 4172472242604561LL;
uint32_t x1150 = 15721U;
int8_t x1153 = INT8_MIN;
volatile uint32_t t195 = 28356430U;
int8_t x1187 = INT8_MIN;
volatile int64_t t198 = INT64_MAX;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	static int8_t x2 = INT8_MAX;
	volatile uint64_t x4 = 92763998420927316LLU;
	static volatile uint64_t t0 = 2248829517LLU;

    t0 = (x1-(x2*(x3^x4)));

    if (t0 != 6665716274251782484LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	static uint64_t x6 = 8351LLU;
	static uint8_t x8 = UINT8_MAX;
	volatile uint64_t t1 = 14247301LLU;

    t1 = (x5-(x6*(x7^x8)));

    if (t1 != 9223372041147613598LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = INT8_MIN;
	int8_t x18 = 1;
	int8_t x19 = 3;
	static int32_t x20 = INT32_MIN;
	volatile int32_t t2 = -4465;

    t2 = (x17-(x18*(x19^x20)));

    if (t2 != 2147483517) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x25 = -1;
	int16_t x27 = INT16_MAX;
	int32_t x28 = 25;
	int32_t t3 = -632117;

    t3 = (x25-(x26*(x27^x28)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x33 = 791LL;
	uint16_t x34 = UINT16_MAX;
	static volatile int16_t x35 = -127;
	int8_t x36 = INT8_MIN;
	int64_t t4 = -892269183543765256LL;

    t4 = (x33-(x34*(x35^x36)));

    if (t4 != -64744LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x37 = 0U;
	int8_t x38 = -1;
	volatile uint16_t x39 = UINT16_MAX;
	static volatile uint64_t t5 = 1283LLU;

    t5 = (x37-(x38*(x39^x40)));

    if (t5 != 5111875883687289LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x41 = 8;
	static uint8_t x42 = UINT8_MAX;
	volatile int8_t x43 = INT8_MIN;
	volatile int16_t x44 = 540;
	static volatile int32_t t6 = -925798;

    t6 = (x41-(x42*(x43^x44)));

    if (t6 != 156068) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x45 = INT8_MAX;
	int32_t x46 = INT32_MIN;
	static int8_t x47 = -1;
	static int8_t x48 = -1;
	volatile int32_t t7 = 36489;

    t7 = (x45-(x46*(x47^x48)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x49 = -1;
	volatile uint64_t x50 = 10LLU;
	int64_t x52 = 3749079LL;
	uint64_t t8 = 187649795141490041LLU;

    t8 = (x49-(x50*(x51^x52)));

    if (t8 != 21437345689LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x53 = 3;
	int64_t x54 = -1LL;
	int64_t x55 = -1LL;
	volatile uint8_t x56 = UINT8_MAX;
	int64_t t9 = -1LL;

    t9 = (x53-(x54*(x55^x56)));

    if (t9 != -253LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x57 = 39;
	static uint64_t x58 = 5878LLU;
	int16_t x60 = INT16_MIN;
	uint64_t t10 = 1147LLU;

    t10 = (x57-(x58*(x59^x60)));

    if (t10 != 192610343LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x61 = -1;
	volatile uint64_t x63 = UINT64_MAX;
	volatile int32_t x64 = 135;
	volatile uint64_t t11 = UINT64_MAX;

    t11 = (x61-(x62*(x63^x64)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x65 = UINT16_MAX;
	uint32_t x66 = 5978280U;
	int8_t x67 = -1;
	int8_t x68 = -4;
	volatile uint32_t t12 = 2991U;

    t12 = (x65-(x66*(x67^x68)));

    if (t12 != 4277097991U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x69 = 14U;
	int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MAX;
	static uint32_t x72 = 871469910U;

    t13 = (x69-(x70*(x71^x72)));

    if (t13 != 1033727159U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x73 = -1;
	int8_t x74 = INT8_MIN;
	int64_t x75 = -19531384418041LL;
	int8_t x76 = -1;
	volatile int64_t t14 = -753114989076LL;

    t14 = (x73-(x74*(x75^x76)));

    if (t14 != 2500017205509119LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x77 = 6581549973LLU;
	volatile int16_t x78 = -168;
	int32_t x79 = -329715653;
	uint64_t x80 = UINT64_MAX;

    t15 = (x77-(x78*(x79^x80)));

    if (t15 != 61973779509LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x93 = -1LL;
	uint64_t x94 = 1334LLU;
	volatile uint32_t x96 = 515391U;
	uint64_t t16 = 45983748937898729LLU;

    t16 = (x93-(x94*(x95^x96)));

    if (t16 != 18446744073022033361LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x102 = INT8_MIN;
	int32_t x103 = 520;
	volatile uint64_t t17 = 3885LLU;

    t17 = (x101-(x102*(x103^x104)));

    if (t17 != 478875348632191LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x105 = INT8_MAX;
	uint32_t x106 = UINT32_MAX;
	int64_t x107 = -1LL;

    t18 = (x105-(x106*(x107^x108)));

    if (t18 != 127LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x109 = -48713LL;
	int32_t x110 = INT32_MAX;
	int16_t x111 = INT16_MAX;
	uint32_t x112 = 7U;

    t19 = (x109-(x110*(x111^x112)));

    if (t19 != -4294983249LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x117 = INT16_MIN;
	uint32_t x118 = 426U;
	uint64_t x119 = 1957204491LLU;
	volatile uint64_t t20 = 2413652624584657501LLU;

    t20 = (x117-(x118*(x119^x120)));

    if (t20 != 833769080824LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x121 = INT16_MIN;
	uint16_t x122 = 2U;
	uint32_t x123 = 15335348U;
	int32_t x124 = INT32_MIN;
	uint32_t t21 = 1333U;

    t21 = (x121-(x122*(x123^x124)));

    if (t21 != 4264263832U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x126 = UINT64_MAX;
	static int32_t x127 = INT32_MAX;
	uint32_t x128 = 25968U;
	static volatile uint64_t t22 = 837470372LLU;

    t22 = (x125-(x126*(x127^x128)));

    if (t22 != 18446744073709525647LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x129 = 138;
	volatile uint8_t x131 = 2U;
	uint16_t x132 = 215U;
	int32_t t23 = -44724463;

    t23 = (x129-(x130*(x131^x132)));

    if (t23 != -26913) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x133 = 15U;
	int64_t x134 = -1LL;
	uint64_t x135 = 37220LLU;
	int32_t x136 = -1;
	static volatile uint64_t t24 = 776624LLU;

    t24 = (x133-(x134*(x135^x136)));

    if (t24 != 18446744073709514410LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x141 = UINT64_MAX;
	int64_t x142 = 3053288805LL;
	static int8_t x143 = -1;
	volatile uint32_t x144 = UINT32_MAX;
	uint64_t t25 = UINT64_MAX;

    t25 = (x141-(x142*(x143^x144)));

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x149 = 46730296431883LL;
	volatile int8_t x150 = -41;
	int64_t x151 = 62452037LL;
	volatile int8_t x152 = INT8_MAX;
	int64_t t26 = 11074LL;

    t26 = (x149-(x150*(x151^x152)));

    if (t26 != 46732856964949LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x161 = 16U;
	int8_t x162 = -9;
	static int64_t x164 = -292467137382302910LL;
	volatile int64_t t27 = 66LL;

    t27 = (x161-(x162*(x163^x164)));

    if (t27 != 2632204236440726242LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x166 = INT8_MAX;
	static uint64_t x167 = 23539423LLU;
	int16_t x168 = INT16_MIN;
	uint64_t t28 = 228146403LLU;

    t28 = (x165-(x166*(x167^x168)));

    if (t28 != 2990646151LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x169 = -339049663;
	static uint8_t x170 = 0U;
	volatile uint16_t x171 = 56U;
	volatile int8_t x172 = INT8_MAX;
	volatile int32_t t29 = 6979500;

    t29 = (x169-(x170*(x171^x172)));

    if (t29 != -339049663) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x173 = -1;
	int8_t x174 = 0;
	int8_t x175 = -1;
	int16_t x176 = 1;
	int32_t t30 = -6;

    t30 = (x173-(x174*(x175^x176)));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x178 = INT16_MIN;
	uint16_t x179 = 7U;
	static int8_t x180 = INT8_MIN;
	volatile uint32_t t31 = 5U;

    t31 = (x177-(x178*(x179^x180)));

    if (t31 != 4291002367U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x181 = 1;
	int64_t x182 = -132359540456133LL;

    t32 = (x181-(x182*(x183^x184)));

    if (t32 != 16809661637928892LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x186 = 9U;
	uint32_t x187 = 41U;
	volatile uint64_t t33 = 71903226LLU;

    t33 = (x185-(x186*(x187^x188)));

    if (t33 != 157353917LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x189 = -7;
	int8_t x190 = -1;
	volatile int32_t x191 = -7307;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t34 = 29507LLU;

    t34 = (x189-(x190*(x191^x192)));

    if (t34 != 7299LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x195 = -1;
	int32_t x196 = INT32_MIN;
	volatile uint64_t t35 = 1065031490LLU;

    t35 = (x193-(x194*(x195^x196)));

    if (t35 != 2147483902LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x197 = 18U;
	uint8_t x198 = 66U;
	volatile int64_t x199 = -1LL;
	static int64_t t36 = 16064LL;

    t36 = (x197-(x198*(x199^x200)));

    if (t36 != 2394LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x205 = INT8_MAX;
	volatile int8_t x206 = INT8_MAX;
	int64_t x207 = -1LL;
	int32_t x208 = INT32_MIN;
	int64_t t37 = -474LL;

    t37 = (x205-(x206*(x207^x208)));

    if (t37 != -272730423042LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x209 = 88436087289LLU;
	int32_t x210 = INT32_MIN;
	static int32_t x211 = -1;
	volatile int64_t x212 = -1LL;
	static volatile uint64_t t38 = 10218631LLU;

    t38 = (x209-(x210*(x211^x212)));

    if (t38 != 88436087289LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x217 = 10119542497314LL;
	static int16_t x219 = -440;
	static int8_t x220 = -1;
	volatile int64_t t39 = 174LL;

    t39 = (x217-(x218*(x219^x220)));

    if (t39 != 10119542497753LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = UINT32_MAX;
	volatile uint32_t t40 = 124089137U;

    t40 = (x221-(x222*(x223^x224)));

    if (t40 != 83945727U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x237 = INT16_MAX;
	static int8_t x238 = 1;
	int8_t x239 = INT8_MIN;

    t41 = (x237-(x238*(x239^x240)));

    if (t41 != 32640) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x241 = 2044133264LL;
	static uint32_t x242 = 3456U;
	static int32_t x244 = -1;
	volatile int64_t t42 = -1419LL;

    t42 = (x241-(x242*(x243^x244)));

    if (t42 != 2044133264LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x246 = 2U;
	uint8_t x247 = UINT8_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t43 = -1057202;

    t43 = (x245-(x246*(x247^x248)));

    if (t43 != -130688) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x249 = 99;
	int16_t x250 = 1;
	int16_t x251 = -1;
	uint16_t x252 = 105U;
	volatile int32_t t44 = -2422511;

    t44 = (x249-(x250*(x251^x252)));

    if (t44 != 205) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x257 = INT32_MIN;
	uint16_t x258 = 1362U;
	volatile int16_t x259 = INT16_MIN;
	uint64_t x260 = 375974LLU;

    t45 = (x257-(x258*(x259^x260)));

    if (t45 != 18446744072076481748LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x265 = -3;
	uint64_t x266 = 222267855LLU;
	uint8_t x267 = UINT8_MAX;
	uint32_t x268 = UINT32_MAX;
	volatile uint64_t t46 = 118LLU;

    t46 = (x265-(x266*(x267^x268)));

    if (t46 != 17492110962433052413LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x271 = 498587U;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t47 = 30973LLU;

    t47 = (x269-(x270*(x271^x272)));

    if (t47 != 18446744073709060158LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x273 = -1;
	volatile int16_t x274 = -1;
	int32_t x275 = -1;
	uint8_t x276 = 79U;
	volatile int32_t t48 = -2090927;

    t48 = (x273-(x274*(x275^x276)));

    if (t48 != -81) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x277 = -1;
	static int8_t x278 = INT8_MIN;
	int64_t x280 = -1LL;
	int64_t t49 = -4378483251128834LL;

    t49 = (x277-(x278*(x279^x280)));

    if (t49 != 16255LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x285 = UINT8_MAX;
	volatile uint32_t x287 = 18319692U;
	int8_t x288 = -2;
	volatile uint32_t t50 = 16U;

    t50 = (x285-(x286*(x287^x288)));

    if (t50 != 4038491835U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x289 = UINT64_MAX;
	static uint16_t x290 = 2U;
	volatile uint8_t x291 = UINT8_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile uint64_t t51 = 1003277137072940968LLU;

    t51 = (x289-(x290*(x291^x292)));

    if (t51 != 18446744069414584831LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x293 = 5;
	volatile int16_t x296 = INT16_MIN;

    t52 = (x293-(x294*(x295^x296)));

    if (t52 != -1070596091) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x309 = 54U;
	static uint64_t x310 = 4LLU;
	volatile int16_t x311 = INT16_MIN;
	static int64_t x312 = 24496499LL;

    t53 = (x309-(x310*(x311^x312)));

    if (t53 != 97966698LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x317 = INT64_MAX;
	uint64_t x318 = UINT64_MAX;
	static int8_t x319 = INT8_MIN;
	volatile uint64_t t54 = 556691384LLU;

    t54 = (x317-(x318*(x319^x320)));

    if (t54 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x325 = -1;
	uint64_t x326 = 109336462586370526LLU;
	volatile uint16_t x328 = 97U;
	uint64_t t55 = 300617715057732LLU;

    t55 = (x325-(x326*(x327^x328)));

    if (t55 != 1871402372671760123LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x329 = -1;
	uint64_t x330 = 528491041708LLU;
	int64_t x332 = INT64_MIN;
	uint64_t t56 = 44911LLU;

    t56 = (x329-(x330*(x331^x332)));

    if (t56 != 528491041707LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	static uint64_t x335 = UINT64_MAX;
	static volatile uint32_t x336 = 32654907U;
	static uint64_t t57 = 7487LLU;

    t57 = (x333-(x334*(x335^x336)));

    if (t57 != 2140039395779LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x341 = INT32_MIN;
	uint8_t x342 = 26U;
	volatile int8_t x343 = -1;
	uint64_t x344 = 38835356142568666LLU;
	uint64_t t58 = 36518179194LLU;

    t58 = (x341-(x342*(x343^x344)));

    if (t58 != 1009719257559301694LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x358 = INT8_MIN;
	int64_t x359 = 2LL;
	int16_t x360 = -2046;
	volatile int64_t t59 = 739528958735LL;

    t59 = (x357-(x358*(x359^x360)));

    if (t59 != -294912LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x363 = UINT64_MAX;
	uint32_t x364 = 1U;
	static volatile uint64_t t60 = 685LLU;

    t60 = (x361-(x362*(x363^x364)));

    if (t60 != 9223372036854788111LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x370 = 1;
	int8_t x371 = INT8_MIN;
	volatile int32_t t61 = -681024420;

    t61 = (x369-(x370*(x371^x372)));

    if (t61 != 113) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x381 = 9U;
	int8_t x382 = INT8_MIN;
	static uint32_t x383 = UINT32_MAX;
	volatile int8_t x384 = 3;
	volatile uint32_t t62 = 0U;

    t62 = (x381-(x382*(x383^x384)));

    if (t62 != 4294966793U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x385 = -454091767;
	int16_t x386 = 1;
	int32_t x387 = 4;

    t63 = (x385-(x386*(x387^x388)));

    if (t63 != 55231593032LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x389 = 141518U;
	static int8_t x390 = INT8_MAX;
	int8_t x391 = -1;
	uint8_t x392 = UINT8_MAX;

    t64 = (x389-(x390*(x391^x392)));

    if (t64 != 174030U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x393 = INT8_MAX;
	int16_t x395 = INT16_MAX;
	static int8_t x396 = INT8_MIN;
	int32_t t65 = 9;

    t65 = (x393-(x394*(x395^x396)));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x409 = -1;
	uint8_t x410 = 126U;
	static volatile int32_t x411 = 7;
	int8_t x412 = 30;
	int32_t t66 = 808991903;

    t66 = (x409-(x410*(x411^x412)));

    if (t66 != -3151) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x413 = 6U;
	uint64_t x416 = UINT64_MAX;

    t67 = (x413-(x414*(x415^x416)));

    if (t67 != 16262LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x421 = -3;
	int32_t x422 = -1;
	static volatile int32_t t68 = -4;

    t68 = (x421-(x422*(x423^x424)));

    if (t68 != 115) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x425 = -55;
	static uint16_t x426 = 118U;
	uint8_t x427 = UINT8_MAX;
	int8_t x428 = INT8_MIN;
	static int32_t t69 = 9546;

    t69 = (x425-(x426*(x427^x428)));

    if (t69 != 15167) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x429 = -43201432;
	int16_t x430 = -1;
	uint8_t x431 = 52U;
	volatile int32_t t70 = -7102;

    t70 = (x429-(x430*(x431^x432)));

    if (t70 != -43201485) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x433 = -2642308;
	uint8_t x434 = UINT8_MAX;
	volatile uint64_t x436 = 2753267423736LLU;
	uint64_t t71 = 577976059408585305LLU;

    t71 = (x433-(x434*(x435^x436)));

    if (t71 != 702083190410627LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x437 = INT16_MIN;
	uint16_t x438 = UINT16_MAX;
	static uint8_t x440 = 62U;
	uint64_t t72 = 1826435225088940LLU;

    t72 = (x437-(x438*(x439^x440)));

    if (t72 != 12649475424364980548LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x441 = -33260952;
	int64_t x442 = INT64_MIN;
	static uint64_t x444 = UINT64_MAX;

    t73 = (x441-(x442*(x443^x444)));

    if (t73 != 18446744073676290664LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x445 = 6U;
	uint32_t x446 = 23685U;

    t74 = (x445-(x446*(x447^x448)));

    if (t74 != 23691U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x449 = 7U;
	int16_t x450 = INT16_MAX;
	int8_t x451 = -1;
	int32_t x452 = 1;
	int32_t t75 = -1646125;

    t75 = (x449-(x450*(x451^x452)));

    if (t75 != 65541) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x453 = 5;
	uint64_t x454 = UINT64_MAX;
	uint32_t x456 = 84U;
	uint64_t t76 = 193020LLU;

    t76 = (x453-(x454*(x455^x456)));

    if (t76 != 90LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x462 = INT64_MIN;
	static int64_t x463 = 6449LL;
	uint64_t x464 = 2LLU;
	static uint64_t t77 = 1LLU;

    t77 = (x461-(x462*(x463^x464)));

    if (t77 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x469 = UINT8_MAX;
	uint64_t x471 = 2235765265731LLU;
	int16_t x472 = INT16_MIN;
	volatile uint64_t t78 = 69884252704298171LLU;

    t78 = (x469-(x470*(x471^x472)));

    if (t78 != 16918035931367826LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x481 = INT8_MAX;
	uint64_t x482 = 1317LLU;
	int64_t x483 = INT64_MAX;
	int16_t x484 = INT16_MIN;

    t79 = (x481-(x482*(x483^x484)));

    if (t79 != 9223372036811621796LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x485 = UINT16_MAX;
	int64_t x486 = 2LL;
	volatile uint8_t x487 = 12U;
	volatile int64_t t80 = -529131390168522LL;

    t80 = (x485-(x486*(x487^x488)));

    if (t80 != 4295032807LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x489 = 112U;
	static volatile int8_t x491 = INT8_MAX;
	int64_t x492 = -1LL;
	int64_t t81 = 260455745951096088LL;

    t81 = (x489-(x490*(x491^x492)));

    if (t81 != -274877906832LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x501 = INT16_MAX;
	static uint8_t x502 = UINT8_MAX;
	int16_t x503 = INT16_MIN;
	uint64_t t82 = 37834019LLU;

    t82 = (x501-(x502*(x503^x504)));

    if (t82 != 52403803989802LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x505 = 1U;
	int32_t x506 = 102047;
	int16_t x508 = 577;
	static int32_t t83 = 255076;

    t83 = (x505-(x506*(x507^x508)));

    if (t83 != 59187261) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x509 = 250924256;
	int32_t x510 = 0;
	static int8_t x511 = INT8_MAX;

    t84 = (x509-(x510*(x511^x512)));

    if (t84 != 250924256) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x517 = -1;
	static uint32_t x518 = 161331U;
	int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	volatile uint32_t t85 = 229272U;

    t85 = (x517-(x518*(x519^x520)));

    if (t85 != 3324090751U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x521 = -1;
	uint32_t x522 = UINT32_MAX;
	static int32_t x523 = -410274410;
	volatile int32_t x524 = -15673322;
	static volatile uint32_t t86 = 1U;

    t86 = (x521-(x522*(x523^x524)));

    if (t86 != 412839295U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x529 = 24100U;
	int64_t x530 = INT64_MAX;
	static int32_t x531 = 0;
	int16_t x532 = 1;
	int64_t t87 = -229008160472LL;

    t87 = (x529-(x530*(x531^x532)));

    if (t87 != -9223372036854751707LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x534 = 2;
	int16_t x535 = 3;
	uint32_t x536 = 1699098245U;

    t88 = (x533-(x534*(x535^x536)));

    if (t88 != 3044254452U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x537 = INT32_MAX;
	uint64_t x538 = 28LLU;
	uint16_t x539 = 5U;
	static uint8_t x540 = 0U;
	volatile uint64_t t89 = 139069LLU;

    t89 = (x537-(x538*(x539^x540)));

    if (t89 != 2147483507LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x545 = -6;
	int32_t x546 = -1;
	int32_t x547 = INT32_MIN;
	uint32_t x548 = 243983U;
	uint32_t t90 = 707852183U;

    t90 = (x545-(x546*(x547^x548)));

    if (t90 != 2147727625U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x549 = -1LL;
	int8_t x550 = INT8_MIN;
	uint32_t x551 = UINT32_MAX;
	volatile uint8_t x552 = UINT8_MAX;
	int64_t t91 = -27LL;

    t91 = (x549-(x550*(x551^x552)));

    if (t91 != -32769LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x553 = 1;
	static int16_t x554 = INT16_MIN;
	int16_t x555 = INT16_MIN;
	int16_t x556 = INT16_MIN;
	static int32_t t92 = -714;

    t92 = (x553-(x554*(x555^x556)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x557 = -239979;
	uint8_t x558 = 125U;
	int32_t x559 = -1;
	int32_t x560 = -1;
	static volatile int32_t t93 = 25654;

    t93 = (x557-(x558*(x559^x560)));

    if (t93 != -239979) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x562 = -34116;
	int32_t x563 = INT32_MAX;
	static int32_t x564 = INT32_MIN;
	volatile int32_t t94 = -256374;

    t94 = (x561-(x562*(x563^x564)));

    if (t94 != -66884) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x566 = -34;
	uint64_t x567 = 6706300516LLU;
	int32_t x568 = -1;
	volatile uint64_t t95 = 7007308LLU;

    t95 = (x565-(x566*(x567^x568)));

    if (t95 != 18446743845695301270LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x569 = -1;
	int32_t x571 = INT32_MAX;
	volatile int32_t x572 = INT32_MIN;
	volatile int32_t t96 = -3907;

    t96 = (x569-(x570*(x571^x572)));

    if (t96 != 119) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x573 = -1;
	uint8_t x574 = 11U;
	uint64_t x575 = 1LLU;
	int8_t x576 = -11;

    t97 = (x573-(x574*(x575^x576)));

    if (t97 != 131LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x577 = -1;
	volatile int8_t x578 = INT8_MIN;
	uint8_t x579 = 9U;
	int32_t x580 = 15;
	volatile int32_t t98 = 13;

    t98 = (x577-(x578*(x579^x580)));

    if (t98 != 767) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x587 = 59308LLU;
	volatile uint64_t t99 = 4243152313LLU;

    t99 = (x585-(x586*(x587^x588)));

    if (t99 != 9223372034708893476LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x589 = UINT32_MAX;
	static volatile int32_t x590 = -751117;
	volatile int8_t x591 = INT8_MIN;
	volatile uint64_t x592 = 267774064299531LLU;
	static volatile uint64_t t100 = 25287LLU;

    t100 = (x589-(x590*(x591^x592)));

    if (t100 != 1784532960549590542LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x597 = INT16_MAX;
	int32_t x598 = 9678;
	static volatile uint16_t x599 = UINT16_MAX;
	int64_t x600 = 107093504557LL;
	volatile int64_t t101 = 3LL;

    t101 = (x597-(x598*(x599^x600)));

    if (t101 != -1036451322689789LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x601 = 0;
	static int16_t x602 = INT16_MIN;
	int16_t x603 = -1;

    t102 = (x601-(x602*(x603^x604)));

    if (t102 != -216662016) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x605 = 29U;
	uint64_t x608 = 258LLU;

    t103 = (x605-(x606*(x607^x608)));

    if (t103 != 29LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x609 = 182580800U;
	int16_t x610 = -1;
	int32_t x611 = -1;
	static int32_t x612 = -234;

    t104 = (x609-(x610*(x611^x612)));

    if (t104 != 182581033U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x621 = -1LL;
	int8_t x623 = -1;
	volatile int8_t x624 = INT8_MAX;
	int64_t t105 = -276268439LL;

    t105 = (x621-(x622*(x623^x624)));

    if (t105 != -16385LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x625 = UINT16_MAX;
	int32_t x626 = 1;
	uint32_t x627 = UINT32_MAX;
	uint64_t x628 = 1949LLU;
	uint64_t t106 = 6049139874716041761LLU;

    t106 = (x625-(x626*(x627^x628)));

    if (t106 != 18446744069414651805LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x633 = 59U;
	static uint32_t x636 = UINT32_MAX;

    t107 = (x633-(x634*(x635^x636)));

    if (t107 != 4161595U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x637 = 241U;
	volatile uint64_t x640 = UINT64_MAX;
	volatile uint64_t t108 = 1284559233043376LLU;

    t108 = (x637-(x638*(x639^x640)));

    if (t108 != 241LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x641 = -1LL;
	uint32_t x642 = 1166U;
	uint8_t x644 = UINT8_MAX;
	int64_t t109 = -902023LL;

    t109 = (x641-(x642*(x643^x644)));

    if (t109 != -297331LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x645 = -18;
	uint64_t x646 = UINT64_MAX;
	static uint8_t x647 = UINT8_MAX;
	volatile uint64_t t110 = 30833085802043392LLU;

    t110 = (x645-(x646*(x647^x648)));

    if (t110 != 149LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x653 = INT32_MAX;
	uint8_t x654 = 0U;
	int32_t t111 = INT32_MAX;

    t111 = (x653-(x654*(x655^x656)));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x661 = UINT32_MAX;
	uint32_t x664 = UINT32_MAX;
	int64_t t112 = -539691671890LL;

    t112 = (x661-(x662*(x663^x664)));

    if (t112 != 4294967295LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x669 = 119059167655935666LLU;
	static volatile int8_t x670 = 1;
	volatile uint16_t x671 = 28U;
	int16_t x672 = INT16_MAX;

    t113 = (x669-(x670*(x671^x672)));

    if (t113 != 119059167655902927LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x674 = UINT16_MAX;
	volatile int16_t x675 = INT16_MIN;
	static int32_t x676 = -1;
	volatile int32_t t114 = -295459542;

    t114 = (x673-(x674*(x675^x676)));

    if (t114 != -2147385473) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x677 = INT16_MIN;
	static int64_t x678 = -1LL;
	int64_t x679 = 2328218136181LL;
	uint8_t x680 = 81U;
	volatile int64_t t115 = 13524666936LL;

    t115 = (x677-(x678*(x679^x680)));

    if (t115 != 2328218103332LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x697 = 18;
	uint8_t x698 = UINT8_MAX;
	static int64_t x699 = 592763484830LL;
	int32_t x700 = INT32_MIN;
	volatile int64_t t116 = -7692125215553LL;

    t116 = (x697-(x698*(x699^x700)));

    if (t116 != 151672717991088LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x705 = INT8_MIN;
	static uint16_t x706 = 6358U;
	int64_t x707 = 219084677LL;
	static uint64_t x708 = 332295336163655436LLU;

    t117 = (x705-(x706*(x707^x708)));

    if (t117 != 8641819765732836602LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x721 = 20297679LLU;
	int16_t x723 = -1;
	volatile uint64_t t118 = 269531997936259700LLU;

    t118 = (x721-(x722*(x723^x724)));

    if (t118 != 20264911LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x730 = 1U;
	volatile uint64_t x731 = 2LLU;
	uint64_t t119 = 106413645258039LLU;

    t119 = (x729-(x730*(x731^x732)));

    if (t119 != 998324304071LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t t120 = 196466529U;

    t120 = (x733-(x734*(x735^x736)));

    if (t120 != 5U) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x741 = 4560U;
	uint64_t x742 = 496288LLU;
	volatile int32_t x743 = INT32_MAX;
	uint64_t t121 = 136LLU;

    t121 = (x741-(x742*(x743^x744)));

    if (t121 != 4560LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x745 = INT8_MIN;
	int8_t x746 = -1;
	int16_t x747 = -5921;
	uint16_t x748 = 2U;
	volatile int32_t t122 = -1;

    t122 = (x745-(x746*(x747^x748)));

    if (t122 != -6051) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x749 = 179250754U;
	uint8_t x750 = 70U;
	volatile uint8_t x751 = 64U;
	uint16_t x752 = UINT16_MAX;
	uint32_t t123 = 22U;

    t123 = (x749-(x750*(x751^x752)));

    if (t123 != 174667784U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x753 = INT32_MIN;
	volatile int32_t x754 = INT32_MAX;
	uint64_t x755 = 1433651773201LLU;
	int64_t x756 = -1LL;
	uint64_t t124 = 12538832195503LLU;

    t124 = (x753-(x754*(x755^x756)));

    if (t124 != 16584222205914775790LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x757 = INT64_MAX;
	volatile int64_t x758 = 25239737629LL;
	volatile uint64_t x759 = UINT64_MAX;
	int16_t x760 = -7;

    t125 = (x757-(x758*(x759^x760)));

    if (t125 != 9223371885416350033LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x766 = 24553LLU;
	static uint64_t t126 = 121LLU;

    t126 = (x765-(x766*(x767^x768)));

    if (t126 != 46892105110LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x769 = 290;
	int32_t x770 = -308768349;
	volatile int8_t x771 = -9;
	int64_t x772 = -3126416LL;
	int64_t t127 = -6658290256495LL;

    t127 = (x769-(x770*(x771^x772)));

    if (t127 != 965335527692333LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x773 = 4LLU;
	uint32_t x774 = 2041533U;
	volatile int8_t x775 = -1;
	volatile int16_t x776 = -1;

    t128 = (x773-(x774*(x775^x776)));

    if (t128 != 4LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x782 = 3U;
	uint32_t x783 = 28531U;
	int32_t x784 = -1;
	volatile uint32_t t129 = 44U;

    t129 = (x781-(x782*(x783^x784)));

    if (t129 != 52828U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x786 = 5014878817573117851LLU;
	uint8_t x787 = 40U;
	uint64_t t130 = 25586LLU;

    t130 = (x785-(x786*(x787^x788)));

    if (t130 != 8617235812551400573LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x797 = 24U;
	int32_t x799 = -104288;
	int32_t x800 = 35327;
	volatile int32_t t131 = 1;

    t131 = (x797-(x798*(x799^x800)));

    if (t131 != 2641596) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x809 = INT16_MAX;
	int16_t x810 = -1;
	int16_t x812 = 1662;
	volatile int32_t t132 = -17205;

    t132 = (x809-(x810*(x811^x812)));

    if (t132 != 96640) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x820 = INT32_MIN;
	volatile int64_t t133 = -37LL;

    t133 = (x817-(x818*(x819^x820)));

    if (t133 != 77309411375LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x825 = -1016560194LL;
	volatile uint8_t x826 = UINT8_MAX;
	int8_t x827 = 12;
	volatile int64_t t134 = -254561LL;

    t134 = (x825-(x826*(x827^x828)));

    if (t134 != -1016579064LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x833 = INT32_MAX;
	uint64_t x834 = 15664147103207818LLU;
	int16_t x836 = INT16_MIN;

    t135 = (x833-(x834*(x835^x836)));

    if (t135 != 1018616541053412479LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x838 = 1U;
	volatile int64_t x839 = 580886376277671810LL;
	volatile uint8_t x840 = UINT8_MAX;
	static int64_t t136 = 97LL;

    t136 = (x837-(x838*(x839^x840)));

    if (t136 != -580886378425155453LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x841 = INT8_MIN;
	static int8_t x843 = 1;
	uint32_t x844 = 113284533U;
	volatile uint32_t t137 = 304695U;

    t137 = (x841-(x842*(x843^x844)));

    if (t137 != 123129324U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x849 = INT32_MIN;
	static int32_t x850 = -390;
	static int16_t x851 = -13;
	uint64_t x852 = 19189LLU;
	uint64_t t138 = 239654742266793LLU;

    t138 = (x849-(x850*(x851^x852)));

    if (t138 != 18446744071554582308LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x853 = 1;
	int16_t x854 = INT16_MAX;
	int16_t x856 = -1;
	volatile int32_t t139 = 0;

    t139 = (x853-(x854*(x855^x856)));

    if (t139 != -1073676288) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x857 = 3;
	int16_t x858 = INT16_MAX;
	uint32_t x860 = UINT32_MAX;
	uint32_t t140 = 84525U;

    t140 = (x857-(x858*(x859^x860)));

    if (t140 != 1802188U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x861 = 479LLU;
	volatile uint16_t x862 = 6036U;
	int32_t x863 = INT32_MAX;
	static uint64_t x864 = 20LLU;
	volatile uint64_t t141 = 165525934325177142LLU;

    t141 = (x861-(x862*(x863^x864)));

    if (t141 != 18446731111498379523LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x867 = INT16_MAX;
	uint64_t x868 = 773024360LLU;
	volatile uint64_t t142 = 993036877753949LLU;

    t142 = (x865-(x866*(x867^x868)));

    if (t142 != 9223346707877041559LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x869 = 24U;
	int16_t x870 = -1;
	int64_t x871 = INT64_MAX;
	uint32_t x872 = 2967U;
	volatile int64_t t143 = 1LL;

    t143 = (x869-(x870*(x871^x872)));

    if (t143 != 9223372036854772864LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x890 = -2020;
	static int8_t x892 = INT8_MIN;

    t144 = (x889-(x890*(x891^x892)));

    if (t144 != 18446744073360199571LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x893 = 11712863;
	int32_t x894 = -1;
	int32_t x895 = -303893;
	uint16_t x896 = 1U;
	volatile int32_t t145 = 8765600;

    t145 = (x893-(x894*(x895^x896)));

    if (t145 != 11408969) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x897 = INT8_MIN;
	uint32_t x898 = UINT32_MAX;
	int8_t x900 = 0;
	int64_t t146 = 144401LL;

    t146 = (x897-(x898*(x899^x900)));

    if (t146 != 6052197329174287LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x909 = -26;
	volatile int8_t x910 = -1;
	int8_t x911 = -2;
	int16_t x912 = INT16_MAX;
	static volatile int32_t t147 = -88974;

    t147 = (x909-(x910*(x911^x912)));

    if (t147 != -32793) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x914 = -1;
	static volatile int16_t x915 = -6697;
	int64_t x916 = 2672309LL;
	int64_t t148 = 3819154069924758842LL;

    t148 = (x913-(x914*(x915^x916)));

    if (t148 != -17594325LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint16_t x921 = 25U;
	volatile int16_t x922 = INT16_MIN;
	static volatile int8_t x923 = INT8_MIN;
	int64_t x924 = -1LL;
	int64_t t149 = -10679278685790LL;

    t149 = (x921-(x922*(x923^x924)));

    if (t149 != 4161561LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x925 = INT8_MAX;
	uint16_t x926 = 2U;
	volatile int32_t t150 = -48402;

    t150 = (x925-(x926*(x927^x928)));

    if (t150 != 639) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x929 = 439U;
	volatile int64_t x930 = -1LL;
	static uint8_t x931 = UINT8_MAX;
	uint64_t x932 = 11102LLU;
	uint64_t t151 = 121023835LLU;

    t151 = (x929-(x930*(x931^x932)));

    if (t151 != 11608LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x937 = 2940593457LL;
	volatile uint32_t x938 = 2976U;
	int8_t x939 = 29;
	int16_t x940 = INT16_MIN;
	int64_t t152 = 200401LL;

    t152 = (x937-(x938*(x939^x940)));

    if (t152 != -1256942575LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x941 = 83U;
	uint64_t x942 = 2030237LLU;
	int16_t x943 = INT16_MIN;
	int32_t x944 = -385;
	static uint64_t t153 = 557509LLU;

    t153 = (x941-(x942*(x943^x944)));

    if (t153 != 18446744007964386928LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x945 = INT8_MIN;
	uint32_t x946 = UINT32_MAX;
	int8_t x947 = -4;
	int16_t x948 = INT16_MIN;
	static volatile uint32_t t154 = 531402U;

    t154 = (x945-(x946*(x947^x948)));

    if (t154 != 32636U) { NG(); } else { ; }
	
}

void f155(void) {
    

    t155 = (x949-(x950*(x951^x952)));

    if (t155 != 124353393300495LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x954 = UINT16_MAX;
	volatile int16_t x955 = -1;
	int64_t x956 = -9201LL;
	volatile int64_t t156 = 1LL;

    t156 = (x953-(x954*(x955^x956)));

    if (t156 != -602922093LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x957 = 1931;
	static uint64_t x958 = 46LLU;
	uint16_t x959 = 8510U;
	int32_t x960 = INT32_MIN;
	uint64_t t157 = 3434758949LLU;

    t157 = (x957-(x958*(x959^x960)));

    if (t157 != 98783858279LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x961 = -1;
	static int8_t x962 = 0;
	static volatile int16_t x964 = INT16_MIN;
	static volatile int32_t t158 = -227873354;

    t158 = (x961-(x962*(x963^x964)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x977 = -242;
	int16_t x978 = INT16_MAX;
	uint32_t x980 = 669421U;
	int64_t t159 = -3467570824157330741LL;

    t159 = (x977-(x978*(x979^x980)));

    if (t159 != 21934950432LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x981 = 16458709851LL;
	int8_t x982 = -1;
	uint64_t x983 = UINT64_MAX;
	uint64_t x984 = UINT64_MAX;
	uint64_t t160 = 1554686519108609LLU;

    t160 = (x981-(x982*(x983^x984)));

    if (t160 != 16458709851LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x985 = UINT32_MAX;
	volatile int64_t x986 = -126LL;
	volatile int32_t x987 = INT32_MIN;
	int64_t t161 = 1701305193187698158LL;

    t161 = (x985-(x986*(x987^x988)));

    if (t161 != -266287940223LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x993 = -17024359935LL;
	int8_t x994 = 2;
	int64_t x995 = 199177LL;
	static int32_t x996 = 1;
	volatile int64_t t162 = 84215493LL;

    t162 = (x993-(x994*(x995^x996)));

    if (t162 != -17024758287LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x997 = 14748LLU;
	volatile uint64_t t163 = 19058057781599274LLU;

    t163 = (x997-(x998*(x999^x1000)));

    if (t163 != 18446741088995733907LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1002 = INT16_MIN;
	int8_t x1003 = -47;
	static int8_t x1004 = INT8_MIN;

    t164 = (x1001-(x1002*(x1003^x1004)));

    if (t164 != -2144829440) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x1005 = -15911622219251LL;
	int8_t x1006 = INT8_MAX;
	volatile int64_t x1008 = INT64_MIN;
	uint64_t t165 = 35469926833580LLU;

    t165 = (x1005-(x1006*(x1007^x1008)));

    if (t165 != 9223356125232556684LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x1010 = -1LL;
	int32_t x1011 = INT32_MIN;
	int32_t x1012 = INT32_MIN;
	volatile int64_t t166 = INT64_MIN;

    t166 = (x1009-(x1010*(x1011^x1012)));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1017 = -456414060LL;
	static uint16_t x1018 = 32020U;
	volatile int16_t x1019 = INT16_MIN;
	static volatile int64_t t167 = 3662065844468622LL;

    t167 = (x1017-(x1018*(x1019^x1020)));

    if (t167 != -1505613400LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1022 = UINT64_MAX;
	int64_t x1024 = -1LL;

    t168 = (x1021-(x1022*(x1023^x1024)));

    if (t168 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1025 = 65248404LL;
	volatile uint64_t x1027 = 919587LLU;
	static int64_t x1028 = 756LL;

    t169 = (x1025-(x1026*(x1027^x1028)));

    if (t169 != 64328125LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1030 = INT8_MIN;
	uint8_t x1031 = 16U;
	volatile int32_t t170 = -864742;

    t170 = (x1029-(x1030*(x1031^x1032)));

    if (t170 != 2147481215) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1033 = 24867U;
	static uint64_t x1034 = 170390819649039616LLU;
	uint64_t t171 = 557052739111114569LLU;

    t171 = (x1033-(x1034*(x1035^x1036)));

    if (t171 != 1099677391789785123LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x1037 = UINT32_MAX;
	uint64_t x1039 = 3079741595720LLU;
	int8_t x1040 = INT8_MAX;

    t172 = (x1037-(x1038*(x1039^x1040)));

    if (t172 != 3084036562998LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x1041 = INT64_MIN;
	int64_t x1043 = INT64_MIN;
	int8_t x1044 = INT8_MIN;
	volatile int64_t t173 = 21461301000390243LL;

    t173 = (x1041-(x1042*(x1043^x1044)));

    if (t173 != -128LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1053 = INT16_MIN;
	static int64_t x1054 = -347LL;
	static int8_t x1055 = INT8_MAX;
	int64_t t174 = -1337618LL;

    t174 = (x1053-(x1054*(x1055^x1056)));

    if (t174 != 11648LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1057 = -1;
	uint32_t x1058 = 1409U;
	volatile uint16_t x1059 = 4U;
	volatile uint64_t t175 = 921LLU;

    t175 = (x1057-(x1058*(x1059^x1060)));

    if (t175 != 7044LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1061 = INT8_MAX;
	static volatile uint8_t x1062 = UINT8_MAX;
	int64_t x1063 = -1LL;
	int8_t x1064 = 0;
	int64_t t176 = 436660840408687774LL;

    t176 = (x1061-(x1062*(x1063^x1064)));

    if (t176 != 382LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1069 = -1;
	int64_t x1070 = -11458657LL;
	static int16_t x1071 = INT16_MAX;
	int32_t x1072 = INT32_MAX;
	volatile int64_t t177 = 0LL;

    t177 = (x1069-(x1070*(x1071^x1072)));

    if (t177 != 24606903058268159LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1073 = INT64_MIN;
	int16_t x1075 = 3;
	int32_t x1076 = -38364;
	int64_t t178 = -1753LL;

    t178 = (x1073-(x1074*(x1075^x1076)));

    if (t178 != -9223372036849903961LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1081 = -394078190359365LL;
	static int64_t x1082 = INT64_MAX;
	int8_t x1083 = 9;
	uint64_t x1084 = 591842645886004LLU;
	uint64_t t179 = 938166702758584525LLU;

    t179 = (x1081-(x1082*(x1083^x1084)));

    if (t179 != 9223569801310302456LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x1090 = -1LL;
	int32_t x1091 = -353965;
	static uint16_t x1092 = 79U;
	volatile int64_t t180 = 2560775753LL;

    t180 = (x1089-(x1090*(x1091^x1092)));

    if (t180 != -354013LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1098 = 1;
	int32_t x1099 = INT32_MAX;
	int8_t x1100 = INT8_MAX;

    t181 = (x1097-(x1098*(x1099^x1100)));

    if (t181 != -2147483520) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1101 = INT16_MIN;
	int64_t x1102 = 53LL;
	uint16_t x1103 = 2466U;
	int64_t t182 = 1LL;

    t182 = (x1101-(x1102*(x1103^x1104)));

    if (t182 != -156788LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1105 = 1;
	uint64_t x1108 = 168881651936904323LLU;
	uint64_t t183 = 64985449LLU;

    t183 = (x1105-(x1106*(x1107^x1108)));

    if (t183 != 9054490384917871485LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1109 = -6393375;
	int64_t x1110 = INT64_MIN;
	uint64_t x1111 = 6947666580047747512LLU;
	int16_t x1112 = INT16_MIN;
	uint64_t t184 = 493752LLU;

    t184 = (x1109-(x1110*(x1111^x1112)));

    if (t184 != 18446744073703158241LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1117 = 2U;
	int64_t x1118 = -13094560LL;
	static uint16_t x1119 = 16246U;
	uint8_t x1120 = 0U;
	int64_t t185 = 45667701459220LL;

    t185 = (x1117-(x1118*(x1119^x1120)));

    if (t185 != 212734221762LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1122 = INT16_MIN;
	static int8_t x1123 = INT8_MAX;
	uint64_t x1124 = UINT64_MAX;
	static uint64_t t186 = 14239913284916LLU;

    t186 = (x1121-(x1122*(x1123^x1124)));

    if (t186 != 9223372036850581503LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1125 = 114U;
	int8_t x1126 = INT8_MAX;
	int16_t x1127 = -1;
	static uint16_t x1128 = 241U;
	int32_t t187 = 98348;

    t187 = (x1125-(x1126*(x1127^x1128)));

    if (t187 != 30848) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1129 = INT16_MIN;
	uint16_t x1130 = 2136U;
	int16_t x1131 = -1;

    t188 = (x1129-(x1130*(x1131^x1132)));

    if (t188 != 4294934528U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1133 = 8994001U;
	uint16_t x1135 = 13149U;
	static volatile uint64_t x1136 = 12319523565232LLU;
	volatile uint64_t t189 = 346LLU;

    t189 = (x1133-(x1134*(x1135^x1136)));

    if (t189 != 18446694795624301853LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1138 = -10;
	int8_t x1140 = INT8_MIN;

    t190 = (x1137-(x1138*(x1139^x1140)));

    if (t190 != 1269LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1141 = 18398927176617LL;
	static int8_t x1142 = INT8_MIN;
	uint32_t x1143 = 3579687U;
	int64_t x1144 = -41357197LL;
	volatile int64_t t191 = -428307LL;

    t191 = (x1141-(x1142*(x1143^x1144)));

    if (t191 != 18394082209193LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1149 = -1LL;
	int8_t x1151 = INT8_MIN;
	uint32_t x1152 = UINT32_MAX;
	volatile int64_t t192 = 1666470496LL;

    t192 = (x1149-(x1150*(x1151^x1152)));

    if (t192 != -1996568LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1154 = 14;
	static volatile int8_t x1155 = -56;
	uint32_t x1156 = 12509735U;
	volatile uint32_t t193 = 70U;

    t193 = (x1153-(x1154*(x1155^x1156)));

    if (t193 != 175135854U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1161 = 97683U;
	int8_t x1162 = -58;
	uint32_t x1163 = 898913U;
	uint8_t x1164 = UINT8_MAX;
	uint32_t t194 = 763U;

    t194 = (x1161-(x1162*(x1163^x1164)));

    if (t194 != 52238175U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x1165 = UINT32_MAX;
	int32_t x1166 = -1;
	volatile int16_t x1167 = INT16_MIN;
	int32_t x1168 = -1;

    t195 = (x1165-(x1166*(x1167^x1168)));

    if (t195 != 32766U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1173 = INT8_MAX;
	uint16_t x1174 = 12780U;
	volatile uint32_t x1175 = 2U;
	uint32_t x1176 = 0U;
	volatile uint32_t t196 = 12937033U;

    t196 = (x1173-(x1174*(x1175^x1176)));

    if (t196 != 4294941863U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1185 = INT32_MIN;
	int16_t x1186 = -1;
	int16_t x1188 = INT16_MIN;
	volatile int32_t t197 = -7;

    t197 = (x1185-(x1186*(x1187^x1188)));

    if (t197 != -2147451008) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1189 = INT64_MAX;
	int64_t x1190 = INT64_MIN;
	int64_t x1191 = INT64_MIN;
	static int64_t x1192 = INT64_MIN;

    t198 = (x1189-(x1190*(x1191^x1192)));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1193 = 3977;
	int8_t x1194 = -1;
	static uint16_t x1195 = 11200U;
	static int8_t x1196 = INT8_MIN;
	volatile int32_t t199 = 1;

    t199 = (x1193-(x1194*(x1195^x1196)));

    if (t199 != -7223) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

