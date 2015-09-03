#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x17 = 16U;
volatile int32_t x21 = INT32_MIN;
int64_t x22 = -1LL;
uint8_t x25 = 28U;
uint32_t x48 = 2828U;
volatile int64_t x49 = -60333529LL;
uint64_t x53 = UINT64_MAX;
int16_t x58 = INT16_MIN;
uint16_t x68 = 1126U;
volatile int64_t x80 = 39LL;
int64_t t16 = 16010781736071019LL;
static volatile uint32_t t17 = 12U;
int8_t x89 = 22;
volatile uint8_t x91 = 8U;
int8_t x95 = -15;
int8_t x101 = INT8_MIN;
int8_t x110 = INT8_MIN;
volatile int32_t x111 = INT32_MAX;
static volatile int32_t t23 = 10648602;
volatile int64_t t25 = -1022192359215LL;
static int8_t x129 = INT8_MIN;
uint64_t x130 = 77481248LLU;
uint16_t x141 = 106U;
static volatile int64_t x147 = INT64_MIN;
volatile int8_t x156 = INT8_MIN;
uint8_t x157 = 7U;
int16_t x170 = INT16_MIN;
static volatile int16_t x175 = -1;
int64_t x179 = INT64_MIN;
int32_t x181 = 451609010;
static int16_t x182 = -1;
volatile int16_t x193 = INT16_MIN;
static int16_t x201 = -1968;
uint64_t t40 = 4484590366183LLU;
uint32_t x210 = UINT32_MAX;
int64_t x214 = -1LL;
static int64_t x216 = 3590619LL;
volatile int64_t t42 = 40LL;
int32_t x218 = INT32_MAX;
static uint8_t x222 = UINT8_MAX;
int8_t x226 = -4;
volatile uint32_t t46 = 262U;
uint64_t x237 = 211302706224LLU;
volatile int64_t x244 = 6LL;
int16_t x246 = -12;
static volatile int32_t t50 = 88329;
int8_t x264 = -1;
static int8_t x265 = INT8_MIN;
int8_t x272 = 0;
int16_t x291 = 10;
volatile uint32_t x300 = UINT32_MAX;
static int64_t x307 = INT64_MIN;
volatile int16_t x312 = -23;
int32_t x320 = -1;
int8_t x334 = -12;
static int32_t x335 = INT32_MIN;
int8_t x337 = INT8_MAX;
uint16_t x338 = 0U;
int64_t x339 = 11LL;
uint32_t x342 = 376878533U;
volatile int8_t x346 = 9;
static int64_t x347 = -1789407465217839LL;
volatile uint64_t x357 = UINT64_MAX;
uint64_t x365 = UINT64_MAX;
volatile uint64_t t72 = 435361LLU;
int64_t x376 = 438LL;
volatile int64_t t75 = INT64_MAX;
uint8_t x387 = UINT8_MAX;
volatile int8_t x390 = INT8_MIN;
int32_t x392 = -1;
uint16_t x401 = 1U;
uint16_t x405 = 22548U;
volatile int32_t t81 = 399;
uint32_t x424 = 3U;
int8_t x429 = INT8_MAX;
uint64_t x430 = 1726573071964LLU;
static volatile uint64_t t86 = 70889944LLU;
int16_t x435 = INT16_MAX;
int16_t x447 = INT16_MAX;
int64_t x464 = -1LL;
static uint8_t x467 = 4U;
volatile int8_t x468 = -29;
uint16_t x474 = 571U;
int64_t x475 = INT64_MIN;
int32_t x476 = INT32_MIN;
int16_t x482 = INT16_MAX;
uint8_t x498 = 0U;
int16_t x500 = INT16_MIN;
volatile uint64_t t96 = 232350430882824343LLU;
volatile uint8_t x509 = UINT8_MAX;
uint32_t x512 = 1154712956U;
uint16_t x513 = 46U;


void f0(void) {
	uint16_t x9 = 4U;
	int32_t x10 = 40;
	static uint64_t x11 = 233193LLU;
	volatile uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t0 = 15222697447LLU;

	t0 = (((x9*x10)%x11)+x12);

	if (t0 != 159LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 13893306862LLU;
	int32_t x14 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	int64_t x16 = 2017899971548123LL;
	volatile uint64_t t1 = 19249LLU;

	t1 = (((x13*x14)%x15)+x16);

	if (t1 != 7059856744599458779LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x18 = INT16_MAX;
	int16_t x19 = -1672;
	int32_t x20 = 18596;
	int32_t t2 = -17357;

	t2 = (((x17*x18)%x19)+x20);

	if (t2 != 19532) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	volatile int64_t t3 = -240771821LL;

	t3 = (((x21*x22)%x23)+x24);

	if (t3 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x26 = INT8_MIN;
	static int16_t x27 = INT16_MAX;
	uint64_t x28 = 663624LLU;
	uint64_t t4 = 173221969520748LLU;

	t4 = (((x25*x26)%x27)+x28);

	if (t4 != 660040LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 4431LL;
	int16_t x30 = INT16_MIN;
	int8_t x31 = 34;
	volatile int16_t x32 = INT16_MAX;
	int64_t t5 = -62720LL;

	t5 = (((x29*x30)%x31)+x32);

	if (t5 != 32753LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = UINT16_MAX;
	volatile uint16_t x38 = 32552U;
	int16_t x39 = INT16_MIN;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t6 = -58208;

	t6 = (((x37*x38)%x39)+x40);

	if (t6 != -2147483432) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = 35;
	volatile uint32_t x42 = UINT32_MAX;
	int64_t x43 = INT64_MAX;
	int8_t x44 = INT8_MAX;
	volatile int64_t t7 = 15947735LL;

	t7 = (((x41*x42)%x43)+x44);

	if (t7 != 4294967388LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 1U;
	int32_t x46 = -20;
	uint64_t x47 = UINT64_MAX;
	static volatile uint64_t t8 = 20040LLU;

	t8 = (((x45*x46)%x47)+x48);

	if (t8 != 2808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	static int64_t t9 = 16587719851256997LL;

	t9 = (((x49*x50)%x51)+x52);

	if (t9 != 88LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x54 = UINT16_MAX;
	static uint8_t x55 = 3U;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t10 = 26561LLU;

	t10 = (((x53*x54)%x55)+x56);

	if (t10 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x57 = 3;
	volatile int8_t x59 = INT8_MIN;
	static volatile int16_t x60 = -32;
	static int32_t t11 = 860992430;

	t11 = (((x57*x58)%x59)+x60);

	if (t11 != -32) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 1U;
	volatile uint64_t x62 = UINT64_MAX;
	int16_t x63 = INT16_MIN;
	int32_t x64 = -3388898;
	volatile uint64_t t12 = 4LLU;

	t12 = (((x61*x62)%x63)+x64);

	if (t12 != 18446744073706195485LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = 2;
	static volatile int8_t x66 = INT8_MIN;
	static volatile int64_t x67 = -1LL;
	volatile int64_t t13 = 43964466677LL;

	t13 = (((x65*x66)%x67)+x68);

	if (t13 != 1126LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = INT32_MIN;
	static int64_t x70 = 244660LL;
	int64_t x71 = INT64_MIN;
	volatile uint16_t x72 = 0U;
	static volatile int64_t t14 = -16LL;

	t14 = (((x69*x70)%x71)+x72);

	if (t14 != -525403349319680LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -21;
	int8_t x74 = 0;
	int8_t x75 = INT8_MAX;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t15 = INT32_MIN;

	t15 = (((x73*x74)%x75)+x76);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 41U;
	uint32_t x78 = 115804969U;
	static volatile int8_t x79 = INT8_MIN;

	t16 = (((x77*x78)%x79)+x80);

	if (t16 != 453036472LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x85 = INT32_MAX;
	volatile uint32_t x86 = 29U;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = -1;

	t17 = (((x85*x86)%x87)+x88);

	if (t17 != 98U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x90 = 1U;
	uint64_t x92 = UINT64_MAX;
	static uint64_t t18 = 406776065014LLU;

	t18 = (((x89*x90)%x91)+x92);

	if (t18 != 5LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = UINT8_MAX;
	static int8_t x94 = INT8_MIN;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t19 = -28553;

	t19 = (((x93*x94)%x95)+x96);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	static int16_t x98 = INT16_MIN;
	int64_t x99 = -3LL;
	int32_t x100 = -3;
	volatile int64_t t20 = -133553443039235LL;

	t20 = (((x97*x98)%x99)+x100);

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x102 = INT16_MAX;
	int16_t x103 = 8;
	static uint64_t x104 = 913627006638559LLU;
	uint64_t t21 = 6261419676LLU;

	t21 = (((x101*x102)%x103)+x104);

	if (t21 != 913627006638559LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x105 = -1LL;
	int64_t x106 = 459007600477053079LL;
	int16_t x107 = -22;
	int64_t x108 = 1932272837611278442LL;
	volatile int64_t t22 = 15009909331360369LL;

	t22 = (((x105*x106)%x107)+x108);

	if (t22 != 1932272837611278441LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -1;
	static int16_t x112 = INT16_MIN;

	t23 = (((x109*x110)%x111)+x112);

	if (t23 != -32640) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = 7U;
	uint8_t x122 = 3U;
	int64_t x123 = INT64_MAX;
	int16_t x124 = INT16_MIN;
	int64_t t24 = 40LL;

	t24 = (((x121*x122)%x123)+x124);

	if (t24 != -32747LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = 30LL;
	int8_t x126 = 3;
	static volatile uint16_t x127 = UINT16_MAX;
	uint32_t x128 = 233203275U;

	t25 = (((x125*x126)%x127)+x128);

	if (t25 != 233203365LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x131 = -4721;
	int32_t x132 = -762;
	static volatile uint64_t t26 = 10LLU;

	t26 = (((x129*x130)%x131)+x132);

	if (t26 != 18446744063791951110LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = 8148;
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = INT8_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t27 = 3417008426671807LL;

	t27 = (((x133*x134)%x135)+x136);

	if (t27 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = 23;
	uint8_t x138 = 29U;
	static int32_t x139 = 709052;
	volatile int64_t x140 = INT64_MIN;
	volatile int64_t t28 = 138429467659411LL;

	t28 = (((x137*x138)%x139)+x140);

	if (t28 != -9223372036854775141LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x142 = 1U;
	int32_t x143 = 2;
	int8_t x144 = INT8_MIN;
	volatile int32_t t29 = -15396383;

	t29 = (((x141*x142)%x143)+x144);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = 1;
	volatile uint32_t x148 = 883553U;
	int64_t t30 = -100017273025119824LL;

	t30 = (((x145*x146)%x147)+x148);

	if (t30 != 916320LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x149 = 120U;
	static int16_t x150 = INT16_MIN;
	uint8_t x151 = 67U;
	uint64_t x152 = 0LLU;
	uint64_t t31 = 114589640744LLU;

	t31 = (((x149*x150)%x151)+x152);

	if (t31 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = 1;
	int64_t x154 = INT64_MAX;
	int16_t x155 = INT16_MAX;
	int64_t t32 = -5392091679713792LL;

	t32 = (((x153*x154)%x155)+x156);

	if (t32 != -121LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x158 = 3810;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t x160 = INT32_MAX;
	volatile uint32_t t33 = 92U;

	t33 = (((x157*x158)%x159)+x160);

	if (t33 != 2147510317U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = -5;
	uint16_t x162 = 0U;
	volatile int32_t x163 = 120723619;
	static int32_t x164 = 6796;
	int32_t t34 = -4292;

	t34 = (((x161*x162)%x163)+x164);

	if (t34 != 6796) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 317U;
	uint64_t x171 = 37465LLU;
	int64_t x172 = -1LL;
	uint64_t t35 = 182627611LLU;

	t35 = (((x169*x170)%x171)+x172);

	if (t35 != 7509LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x173 = -1;
	uint8_t x174 = 16U;
	int8_t x176 = -12;
	int32_t t36 = -722;

	t36 = (((x173*x174)%x175)+x176);

	if (t36 != -12) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x177 = 204U;
	int16_t x178 = INT16_MIN;
	uint32_t x180 = UINT32_MAX;
	int64_t t37 = -57242LL;

	t37 = (((x177*x178)%x179)+x180);

	if (t37 != 8583249919LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x183 = -1LL;
	int8_t x184 = INT8_MIN;
	volatile int64_t t38 = -1527249316011444399LL;

	t38 = (((x181*x182)%x183)+x184);

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x194 = -3;
	int16_t x195 = INT16_MIN;
	static int16_t x196 = INT16_MIN;
	volatile int32_t t39 = 28656173;

	t39 = (((x193*x194)%x195)+x196);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x202 = UINT8_MAX;
	static int32_t x203 = -1327;
	uint64_t x204 = 6797742LLU;

	t40 = (((x201*x202)%x203)+x204);

	if (t40 != 6797508LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = 156365511381218953LLU;
	volatile int64_t x211 = INT64_MIN;
	uint32_t x212 = 55U;
	volatile uint64_t t41 = 204861235978LLU;

	t41 = (((x209*x210)%x211)+x212);

	if (t41 != 2797985437468068270LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x213 = 28U;
	uint32_t x215 = 534406337U;

	t42 = (((x213*x214)%x215)+x216);

	if (t42 != 3590591LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x217 = 196436110LLU;
	int64_t x219 = -1LL;
	int8_t x220 = -2;
	volatile uint64_t t43 = 1772087650LLU;

	t43 = (((x217*x218)%x219)+x220);

	if (t43 != 421843333905293168LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x221 = 27842U;
	uint16_t x223 = 246U;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t44 = 1228559883U;

	t44 = (((x221*x222)%x223)+x224);

	if (t44 != 149U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x225 = -145;
	uint64_t x227 = 233366427546998LLU;
	int16_t x228 = INT16_MAX;
	uint64_t t45 = 29539754374LLU;

	t45 = (((x225*x226)%x227)+x228);

	if (t45 != 33347LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x229 = 3U;
	static uint8_t x230 = UINT8_MAX;
	int8_t x231 = -1;
	volatile uint32_t x232 = 115U;

	t46 = (((x229*x230)%x231)+x232);

	if (t46 != 115U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x238 = 79U;
	volatile uint32_t x239 = UINT32_MAX;
	uint64_t x240 = 9603554LLU;
	volatile uint64_t t47 = 13627LLU;

	t47 = (((x237*x238)%x239)+x240);

	if (t47 != 2680486880LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = -1;
	uint64_t x242 = UINT64_MAX;
	volatile uint8_t x243 = 1U;
	volatile uint64_t t48 = 501952136731518292LLU;

	t48 = (((x241*x242)%x243)+x244);

	if (t48 != 6LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x245 = INT16_MAX;
	int8_t x247 = INT8_MAX;
	int32_t x248 = INT32_MAX;
	static volatile int32_t t49 = -52526;

	t49 = (((x245*x246)%x247)+x248);

	if (t49 != 2147483635) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x253 = 65U;
	static int32_t x254 = -1;
	volatile int8_t x255 = 1;
	uint8_t x256 = UINT8_MAX;

	t50 = (((x253*x254)%x255)+x256);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x257 = -1496374186178901LL;
	int8_t x258 = -28;
	uint32_t x259 = UINT32_MAX;
	uint64_t x260 = 30083LLU;
	volatile uint64_t t51 = 235LLU;

	t51 = (((x257*x258)%x259)+x260);

	if (t51 != 1803457856LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x261 = INT8_MIN;
	static volatile int64_t x262 = -261323LL;
	uint8_t x263 = 2U;
	volatile int64_t t52 = -1LL;

	t52 = (((x261*x262)%x263)+x264);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x266 = 658986929248125205LLU;
	volatile int32_t x267 = -1;
	uint16_t x268 = 1U;
	static uint64_t t53 = 291LLU;

	t53 = (((x265*x266)%x267)+x268);

	if (t53 != 7883393424787731841LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x269 = -1;
	uint16_t x270 = UINT16_MAX;
	uint16_t x271 = UINT16_MAX;
	volatile int32_t t54 = -121173122;

	t54 = (((x269*x270)%x271)+x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int16_t x275 = 21;
	int64_t x276 = 5790928645333LL;
	volatile int64_t t55 = -44316345LL;

	t55 = (((x273*x274)%x275)+x276);

	if (t55 != 5790928645335LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x281 = UINT16_MAX;
	uint16_t x282 = 1U;
	static int64_t x283 = 201LL;
	static volatile int8_t x284 = -1;
	int64_t t56 = 213814245071LL;

	t56 = (((x281*x282)%x283)+x284);

	if (t56 != 8LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x285 = -1;
	int32_t x286 = 220949868;
	uint16_t x287 = UINT16_MAX;
	static uint32_t x288 = 1007466891U;
	static uint32_t t57 = 915U;

	t57 = (((x285*x286)%x287)+x288);

	if (t57 != 1007435508U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x289 = -88814018870169118LL;
	int8_t x290 = -38;
	static int8_t x292 = INT8_MAX;
	volatile int64_t t58 = -1LL;

	t58 = (((x289*x290)%x291)+x292);

	if (t58 != 131LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x293 = -1;
	int16_t x294 = 6226;
	uint8_t x295 = UINT8_MAX;
	int64_t x296 = 784913LL;
	int64_t t59 = 4691296412LL;

	t59 = (((x293*x294)%x295)+x296);

	if (t59 != 784807LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x297 = 30U;
	static uint8_t x298 = 1U;
	uint32_t x299 = 1105258U;
	uint32_t t60 = 229U;

	t60 = (((x297*x298)%x299)+x300);

	if (t60 != 29U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x301 = 622711917489157LLU;
	volatile int8_t x302 = 44;
	int32_t x303 = 43368;
	int32_t x304 = -1;
	static volatile uint64_t t61 = 12328LLU;

	t61 = (((x301*x302)%x303)+x304);

	if (t61 != 41011LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x305 = UINT32_MAX;
	static int32_t x306 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	volatile int64_t t62 = -1LL;

	t62 = (((x305*x306)%x307)+x308);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x309 = UINT32_MAX;
	volatile uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MIN;
	volatile uint32_t t63 = 193903U;

	t63 = (((x309*x310)%x311)+x312);

	if (t63 != 32490U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x317 = 1;
	uint64_t x318 = 1415481859LLU;
	volatile uint32_t x319 = UINT32_MAX;
	static volatile uint64_t t64 = 118LLU;

	t64 = (((x317*x318)%x319)+x320);

	if (t64 != 1415481858LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x329 = UINT8_MAX;
	uint32_t x330 = 45U;
	int16_t x331 = INT16_MIN;
	static volatile int64_t x332 = -436LL;
	static volatile int64_t t65 = -131455290LL;

	t65 = (((x329*x330)%x331)+x332);

	if (t65 != 11039LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x333 = -1;
	int32_t x336 = 60373;
	volatile int32_t t66 = -25;

	t66 = (((x333*x334)%x335)+x336);

	if (t66 != 60385) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x340 = -35601;
	static int64_t t67 = 799307918859LL;

	t67 = (((x337*x338)%x339)+x340);

	if (t67 != -35601LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = INT16_MIN;
	volatile uint64_t x343 = 7534370537508613299LLU;
	int32_t x344 = 44730405;
	volatile uint64_t t68 = 31172LLU;

	t68 = (((x341*x342)%x343)+x344);

	if (t68 != 2814904357LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x345 = UINT8_MAX;
	static int8_t x348 = INT8_MIN;
	int64_t t69 = -1625574LL;

	t69 = (((x345*x346)%x347)+x348);

	if (t69 != 2167LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x349 = 10U;
	static uint64_t x350 = 1407LLU;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = 3273061422322LLU;
	volatile uint64_t t70 = 9074936393LLU;

	t70 = (((x349*x350)%x351)+x352);

	if (t70 != 3273061436392LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x358 = 4051LLU;
	uint32_t x359 = 111266233U;
	uint8_t x360 = UINT8_MAX;
	static uint64_t t71 = 937836933088659LLU;

	t71 = (((x357*x358)%x359)+x360);

	if (t71 != 51042488LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x366 = 20710427193490LLU;
	int64_t x367 = INT64_MIN;
	volatile int16_t x368 = INT16_MIN;

	t72 = (((x365*x366)%x367)+x368);

	if (t72 != 9223351326427549550LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x373 = UINT16_MAX;
	uint8_t x374 = UINT8_MAX;
	int32_t x375 = 258263117;
	int64_t t73 = 3580LL;

	t73 = (((x373*x374)%x375)+x376);

	if (t73 != 16711863LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x377 = 96;
	int8_t x378 = INT8_MAX;
	static int8_t x379 = -2;
	int32_t x380 = INT32_MAX;
	int32_t t74 = INT32_MAX;

	t74 = (((x377*x378)%x379)+x380);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = 0;
	volatile int32_t x382 = 2377368;
	int16_t x383 = -5625;
	int64_t x384 = INT64_MAX;

	t75 = (((x381*x382)%x383)+x384);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x385 = -12;
	uint64_t x386 = 1926004546648139555LLU;
	int64_t x388 = -1LL;
	uint64_t t76 = 10741LLU;

	t76 = (((x385*x386)%x387)+x388);

	if (t76 != 136LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x389 = 0;
	static int16_t x391 = 691;
	int32_t t77 = 380646;

	t77 = (((x389*x390)%x391)+x392);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x393 = -1;
	int16_t x394 = 1978;
	int32_t x395 = -4437;
	uint32_t x396 = 0U;
	static volatile uint32_t t78 = 52518564U;

	t78 = (((x393*x394)%x395)+x396);

	if (t78 != 4294965318U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x397 = -1;
	int16_t x398 = -1;
	int8_t x399 = INT8_MAX;
	int8_t x400 = 1;
	static volatile int32_t t79 = -6975;

	t79 = (((x397*x398)%x399)+x400);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x402 = -29LL;
	volatile int64_t x403 = INT64_MAX;
	volatile uint8_t x404 = UINT8_MAX;
	int64_t t80 = 282616122454LL;

	t80 = (((x401*x402)%x403)+x404);

	if (t80 != 226LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x406 = INT8_MIN;
	uint8_t x407 = UINT8_MAX;
	uint8_t x408 = UINT8_MAX;

	t81 = (((x405*x406)%x407)+x408);

	if (t81 != 201) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x409 = INT8_MIN;
	int8_t x410 = 1;
	uint32_t x411 = 6353U;
	int32_t x412 = INT32_MIN;
	uint32_t t82 = 13297U;

	t82 = (((x409*x410)%x411)+x412);

	if (t82 != 2147486107U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x417 = -1LL;
	volatile uint32_t x418 = UINT32_MAX;
	int16_t x419 = INT16_MIN;
	static int32_t x420 = INT32_MAX;
	volatile int64_t t83 = 564713439041142LL;

	t83 = (((x417*x418)%x419)+x420);

	if (t83 != 2147450880LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x421 = INT16_MIN;
	uint16_t x422 = UINT16_MAX;
	int16_t x423 = INT16_MIN;
	volatile uint32_t t84 = 1U;

	t84 = (((x421*x422)%x423)+x424);

	if (t84 != 3U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x425 = 9387U;
	static uint32_t x426 = 14689295U;
	uint16_t x427 = 2921U;
	int64_t x428 = -1LL;
	static volatile int64_t t85 = -2LL;

	t85 = (((x425*x426)%x427)+x428);

	if (t85 != 1501LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x431 = -1;
	uint16_t x432 = 24069U;

	t86 = (((x429*x430)%x431)+x432);

	if (t86 != 219274780163497LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x433 = 15064652LLU;
	static uint8_t x434 = 0U;
	int8_t x436 = INT8_MAX;
	uint64_t t87 = 1327136678749LLU;

	t87 = (((x433*x434)%x435)+x436);

	if (t87 != 127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x441 = 1;
	int8_t x442 = INT8_MIN;
	uint32_t x443 = 11659U;
	int8_t x444 = -20;
	static uint32_t t88 = 248913U;

	t88 = (((x441*x442)%x443)+x444);

	if (t88 != 1410U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x445 = INT8_MIN;
	volatile int64_t x446 = 252LL;
	uint64_t x448 = UINT64_MAX;
	uint64_t t89 = 113815049393563LLU;

	t89 = (((x445*x446)%x447)+x448);

	if (t89 != 18446744073709519359LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x461 = INT16_MIN;
	int8_t x462 = INT8_MIN;
	uint64_t x463 = UINT64_MAX;
	volatile uint64_t t90 = 1648LLU;

	t90 = (((x461*x462)%x463)+x464);

	if (t90 != 4194303LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x465 = 175508603580LLU;
	volatile uint32_t x466 = 890U;
	volatile uint64_t t91 = 1631885064465580LLU;

	t91 = (((x465*x466)%x467)+x468);

	if (t91 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x469 = -5;
	static int64_t x470 = 126155738512453LL;
	uint8_t x471 = 1U;
	uint8_t x472 = 8U;
	volatile int64_t t92 = 2538623985716856226LL;

	t92 = (((x469*x470)%x471)+x472);

	if (t92 != 8LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x473 = UINT64_MAX;
	uint64_t t93 = 32765469850LLU;

	t93 = (((x473*x474)%x475)+x476);

	if (t93 != 9223372034707291589LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x477 = 990U;
	uint32_t x478 = 63241941U;
	uint64_t x479 = 33725384238302LLU;
	static uint8_t x480 = UINT8_MAX;
	static uint64_t t94 = 2106977900LLU;

	t94 = (((x477*x478)%x479)+x480);

	if (t94 != 2479979701LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x481 = -616;
	int32_t x483 = -4;
	static volatile int64_t x484 = 1058LL;
	volatile int64_t t95 = 999777687736LL;

	t95 = (((x481*x482)%x483)+x484);

	if (t95 != 1058LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x497 = INT8_MAX;
	uint64_t x499 = 3726043109LLU;

	t96 = (((x497*x498)%x499)+x500);

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x510 = 59046204U;
	volatile int16_t x511 = INT16_MIN;
	uint32_t t97 = 318493860U;

	t97 = (((x509*x510)%x511)+x512);

	if (t97 != 3326593088U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x514 = 1LL;
	uint8_t x515 = 21U;
	uint16_t x516 = 124U;
	static int64_t t98 = -2889291727LL;

	t98 = (((x513*x514)%x515)+x516);

	if (t98 != 128LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x521 = -1;
	uint32_t x522 = UINT32_MAX;
	static int16_t x523 = -1;
	int8_t x524 = INT8_MIN;
	static volatile uint32_t t99 = 5U;

	t99 = (((x521*x522)%x523)+x524);

	if (t99 != 4294967169U) { NG(); } else { ; }
	
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

