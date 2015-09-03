#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = -1;
int64_t x10 = INT64_MIN;
static int8_t x11 = INT8_MAX;
volatile int64_t x18 = 5LL;
uint32_t x26 = 119015825U;
uint32_t t5 = 260851U;
static int16_t x34 = -1;
uint8_t x36 = 24U;
static int64_t x40 = INT64_MIN;
int32_t x45 = -98314;
int16_t x50 = INT16_MIN;
static uint32_t x53 = 406U;
uint8_t x55 = UINT8_MAX;
uint16_t x63 = UINT16_MAX;
uint32_t x66 = UINT32_MAX;
uint32_t x67 = UINT32_MAX;
int64_t x69 = 5477981726434LL;
static volatile int32_t x79 = INT32_MAX;
uint16_t x83 = 3U;
static int64_t x84 = 56410687372044208LL;
uint32_t x86 = UINT32_MAX;
int8_t x87 = -1;
uint8_t x92 = UINT8_MAX;
static int64_t t21 = 153347743197200LL;
int64_t x94 = 1114962837526LL;
volatile int64_t t22 = 801197919986635726LL;
static uint16_t x101 = 15U;
uint64_t t28 = 114LLU;
int64_t t29 = -360947LL;
static volatile int64_t t31 = 140008652047131LL;
volatile int64_t t32 = -25LL;
uint64_t t33 = 0LLU;
uint32_t x165 = 534772816U;
static int8_t x185 = -1;
int32_t x193 = INT32_MIN;
int8_t x198 = INT8_MAX;
volatile int64_t t40 = 46371547LL;
static volatile uint64_t t41 = 6866358557801071912LLU;
int16_t x213 = -8;
uint64_t t42 = 4735588464178853705LLU;
volatile int64_t t43 = 6764286424LL;
static int8_t x221 = -1;
static volatile uint32_t t45 = 1253U;
uint16_t x229 = UINT16_MAX;
volatile int8_t x232 = INT8_MAX;
volatile int16_t x234 = INT16_MIN;
uint16_t x237 = 19U;
int8_t x249 = INT8_MIN;
uint32_t x257 = 10U;
volatile int8_t x266 = INT8_MIN;
volatile int64_t x275 = INT64_MAX;
int16_t x279 = -1;
int64_t t59 = -430082153666477508LL;
static int64_t x288 = INT64_MAX;
static int64_t t60 = 3381452852080657168LL;
volatile uint64_t t61 = 752676821426LLU;
static int16_t x309 = -1;
int8_t x321 = -39;
volatile int32_t t68 = 28105397;
static int16_t x326 = INT16_MIN;
int16_t x328 = -1;
static volatile int32_t t69 = 0;
int64_t x331 = INT64_MAX;
static uint32_t x333 = 24795710U;
int64_t x335 = 136105046715395LL;
int64_t t71 = 64034349122LL;
static uint8_t x337 = UINT8_MAX;
int32_t x343 = -1032824;
uint64_t x344 = 1LLU;
uint64_t t73 = 860627590539983140LLU;
uint64_t x360 = UINT64_MAX;
uint64_t t76 = 1124040220480708LLU;
volatile int32_t t78 = -9;
int32_t t79 = -32749665;
uint16_t x375 = 2U;
static int64_t x379 = 19033LL;
uint8_t x397 = 12U;
static uint64_t x401 = 323005867LLU;
int8_t x403 = INT8_MIN;
volatile uint64_t t87 = 14058162569LLU;
uint32_t x406 = 59587467U;
uint8_t x410 = 6U;
int16_t x411 = 0;
int8_t x420 = -1;
static int32_t x429 = INT32_MAX;
int8_t x430 = -3;
volatile uint16_t x432 = UINT16_MAX;
static int8_t x433 = INT8_MIN;
int64_t x439 = 1666006278443377723LL;
int16_t x448 = INT16_MIN;
static int32_t x450 = -23965177;
int8_t x457 = INT8_MIN;
volatile uint8_t x458 = 3U;
uint8_t x459 = 39U;
volatile int64_t t99 = 31826699LL;


void f0(void) {
	uint64_t x1 = 6117038871960LLU;
	int32_t x2 = INT32_MIN;
	static uint16_t x3 = 0U;
	int8_t x4 = -1;
	volatile uint64_t t0 = 39874353765348391LLU;

	t0 = ((x1%x2)%(x3-x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = -44268;
	static uint64_t x7 = 21781LLU;
	volatile int8_t x8 = INT8_MIN;
	volatile uint64_t t1 = 19842712LLU;

	t1 = ((x5%x6)%(x7-x8));

	if (t1 != 10858LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x12 = 0U;
	int64_t t2 = -249LL;

	t2 = ((x9%x10)%(x11-x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 22U;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = 0;
	volatile int64_t t3 = -30LL;

	t3 = ((x17%x18)%(x19-x20));

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MAX;
	uint64_t x22 = 14313303371LLU;
	int32_t x23 = -1;
	static int16_t x24 = INT16_MAX;
	volatile uint64_t t4 = 1211692656273060295LLU;

	t4 = ((x21%x22)%(x23-x24));

	if (t4 != 127LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -1;
	uint16_t x27 = 93U;
	int16_t x28 = -1;

	t5 = ((x25%x26)%(x27-x28));

	if (t5 != 67U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = -177963LL;
	static volatile int8_t x30 = -1;
	int16_t x31 = -1;
	volatile uint64_t x32 = 1207451530LLU;
	uint64_t t6 = 1894592835LLU;

	t6 = ((x29%x30)%(x31-x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = 58;
	static int8_t x35 = INT8_MAX;
	int32_t t7 = 0;

	t7 = ((x33%x34)%(x35-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	volatile int16_t x38 = 10;
	int64_t x39 = -1LL;
	int64_t t8 = 2171713LL;

	t8 = ((x37%x38)%(x39-x40));

	if (t8 != 7LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = -1LL;
	volatile int32_t x42 = -83983;
	int8_t x43 = -19;
	int64_t x44 = INT64_MIN;
	static int64_t t9 = -13941805590LL;

	t9 = ((x41%x42)%(x43-x44));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = 246713943417751LLU;
	int64_t x47 = 1937173065076263LL;
	int8_t x48 = INT8_MIN;
	uint64_t t10 = 6091820LLU;

	t10 = ((x45%x46)%(x47-x48));

	if (t10 != 189238307628783LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = UINT16_MAX;
	int32_t t11 = 255;

	t11 = ((x49%x50)%(x51-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x54 = -126;
	int16_t x56 = INT16_MIN;
	static volatile uint32_t t12 = 184806U;

	t12 = ((x53%x54)%(x55-x56));

	if (t12 != 406U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x57 = INT8_MIN;
	uint32_t x58 = 7431778U;
	int16_t x59 = INT16_MIN;
	uint64_t x60 = 3527092LLU;
	volatile uint64_t t13 = 1343903640173LLU;

	t13 = ((x57%x58)%(x59-x60));

	if (t13 != 6831262LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	int32_t x62 = INT32_MIN;
	int64_t x64 = 38652984298069349LL;
	int64_t t14 = -128052576298LL;

	t14 = ((x61%x62)%(x63-x64));

	if (t14 != 255LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 1;
	int16_t x68 = 923;
	static volatile uint32_t t15 = 243425737U;

	t15 = ((x65%x66)%(x67-x68));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = -19;
	volatile int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;
	volatile int64_t t16 = -203112546968LL;

	t16 = ((x69%x70)%(x71-x72));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x73 = UINT64_MAX;
	int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;
	static uint64_t t17 = 4985102049LLU;

	t17 = ((x73%x74)%(x75-x76));

	if (t17 != 32767LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 16;
	static int32_t x78 = INT32_MIN;
	static uint8_t x80 = 0U;
	volatile int32_t t18 = 10;

	t18 = ((x77%x78)%(x79-x80));

	if (t18 != 16) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = -1233;
	static volatile int64_t t19 = -47LL;

	t19 = ((x81%x82)%(x83-x84));

	if (t19 != -710LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int16_t x88 = INT16_MAX;
	int64_t t20 = -6222701794LL;

	t20 = ((x85%x86)%(x87-x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MAX;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = UINT32_MAX;

	t21 = ((x89%x90)%(x91-x92));

	if (t21 != 127LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = INT64_MIN;
	int8_t x95 = 0;
	volatile int16_t x96 = INT16_MAX;

	t22 = ((x93%x94)%(x95-x96));

	if (t22 != -13493LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x97 = 6448241U;
	int8_t x98 = -1;
	volatile uint32_t x99 = UINT32_MAX;
	volatile int32_t x100 = INT32_MAX;
	uint32_t t23 = 1871139130U;

	t23 = ((x97%x98)%(x99-x100));

	if (t23 != 6448241U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = INT32_MIN;
	uint32_t x103 = 643847U;
	static int32_t x104 = INT32_MIN;
	volatile uint32_t t24 = 35015U;

	t24 = ((x101%x102)%(x103-x104));

	if (t24 != 15U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 30U;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -24331653LL;
	volatile int64_t x112 = 676069064420948025LL;
	static volatile int64_t t25 = -18LL;

	t25 = ((x109%x110)%(x111-x112));

	if (t25 != 30LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	volatile uint16_t x118 = 3443U;
	static int8_t x119 = -4;
	volatile int16_t x120 = INT16_MIN;
	uint32_t t26 = 28381U;

	t26 = ((x117%x118)%(x119-x120));

	if (t26 != 388U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = 0U;
	static int16_t x126 = INT16_MIN;
	volatile int8_t x127 = INT8_MAX;
	static uint8_t x128 = 0U;
	int32_t t27 = 97;

	t27 = ((x125%x126)%(x127-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x129 = INT64_MIN;
	volatile uint64_t x130 = 4348841306708297LLU;
	uint64_t x131 = 1748053LLU;
	int16_t x132 = INT16_MIN;

	t28 = ((x129%x130)%(x131-x132));

	if (t28 != 429577LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MAX;
	int64_t x134 = INT64_MAX;
	uint32_t x135 = 1U;
	static int32_t x136 = -1;

	t29 = ((x133%x134)%(x135-x136));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x137 = 131909U;
	int32_t x138 = -24;
	static uint16_t x139 = 460U;
	uint32_t x140 = 15U;
	uint32_t t30 = 168698U;

	t30 = ((x137%x138)%(x139-x140));

	if (t30 != 189U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MAX;
	int16_t x146 = 407;
	int16_t x147 = 6;
	int16_t x148 = INT16_MIN;

	t31 = ((x145%x146)%(x147-x148));

	if (t31 != 227LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = INT32_MIN;
	volatile uint16_t x154 = UINT16_MAX;
	int64_t x155 = -76089937099622LL;
	int8_t x156 = INT8_MIN;

	t32 = ((x153%x154)%(x155-x156));

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = INT8_MIN;
	static volatile uint64_t x162 = UINT64_MAX;
	int64_t x163 = INT64_MIN;
	uint64_t x164 = 13404987196LLU;

	t33 = ((x161%x162)%(x163-x164));

	if (t33 != 26809974264LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x166 = 98U;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -1;
	static volatile uint32_t t34 = 10360051U;

	t34 = ((x165%x166)%(x167-x168));

	if (t34 != 46U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x173 = INT32_MIN;
	static int16_t x174 = 9130;
	uint8_t x175 = 57U;
	uint8_t x176 = 32U;
	int32_t t35 = -3886104;

	t35 = ((x173%x174)%(x175-x176));

	if (t35 != -18) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = 3;
	static volatile int64_t x178 = 212273327959633LL;
	uint64_t x179 = UINT64_MAX;
	uint8_t x180 = 9U;
	volatile uint64_t t36 = 63200848558165322LLU;

	t36 = ((x177%x178)%(x179-x180));

	if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x186 = 7U;
	uint64_t x187 = UINT64_MAX;
	volatile int8_t x188 = INT8_MIN;
	static uint64_t t37 = 140233206614373354LLU;

	t37 = ((x185%x186)%(x187-x188));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x189 = 12225810U;
	volatile int64_t x190 = -68667047740917LL;
	int64_t x191 = 40831840LL;
	int16_t x192 = -7848;
	volatile int64_t t38 = -1LL;

	t38 = ((x189%x190)%(x191-x192));

	if (t38 != 12225810LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x194 = 1680;
	volatile int64_t x195 = -1LL;
	int64_t x196 = -568673697137269509LL;
	static int64_t t39 = -193276748LL;

	t39 = ((x193%x194)%(x195-x196));

	if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x197 = INT64_MIN;
	int16_t x199 = -1;
	int32_t x200 = -31;

	t40 = ((x197%x198)%(x199-x200));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = 501787509157606LLU;
	volatile int64_t x210 = INT64_MAX;
	static int8_t x211 = INT8_MIN;
	int16_t x212 = 1046;

	t41 = ((x209%x210)%(x211-x212));

	if (t41 != 501787509157606LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x214 = 4040384LL;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 1889478918365153118LLU;

	t42 = ((x213%x214)%(x215-x216));

	if (t42 != 1889478918365185878LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x217 = 2;
	static int16_t x218 = INT16_MAX;
	int64_t x219 = -1LL;
	int32_t x220 = INT32_MIN;

	t43 = ((x217%x218)%(x219-x220));

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x222 = INT64_MAX;
	int16_t x223 = INT16_MIN;
	int64_t x224 = -70532137LL;
	volatile int64_t t44 = -139496700772LL;

	t44 = ((x221%x222)%(x223-x224));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x225 = INT32_MAX;
	int32_t x226 = 783;
	volatile uint32_t x227 = 696623U;
	static int32_t x228 = INT32_MIN;

	t45 = ((x225%x226)%(x227-x228));

	if (t45 != 442U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x230 = -1;
	int32_t x231 = 348;
	int32_t t46 = 39929;

	t46 = ((x229%x230)%(x231-x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x233 = 169U;
	int32_t x235 = 3871683;
	volatile int16_t x236 = 6;
	int32_t t47 = 0;

	t47 = ((x233%x234)%(x235-x236));

	if (t47 != 169) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x238 = INT64_MAX;
	uint32_t x239 = UINT32_MAX;
	int32_t x240 = 5;
	volatile int64_t t48 = -14LL;

	t48 = ((x237%x238)%(x239-x240));

	if (t48 != 19LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = -416509053;
	int16_t x242 = 484;
	int64_t x243 = -2226064858842LL;
	static int8_t x244 = -41;
	static volatile int64_t t49 = -1024339864380LL;

	t49 = ((x241%x242)%(x243-x244));

	if (t49 != -433LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = 55;
	int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	uint64_t x248 = 1LLU;
	uint64_t t50 = 876874LLU;

	t50 = ((x245%x246)%(x247-x248));

	if (t50 != 55LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x250 = 25U;
	int64_t x251 = INT64_MIN;
	int8_t x252 = 0;
	static volatile int64_t t51 = -52261767002370987LL;

	t51 = ((x249%x250)%(x251-x252));

	if (t51 != -3LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x253 = 11652U;
	uint32_t x254 = 23284U;
	uint64_t x255 = 307453LLU;
	static uint64_t x256 = UINT64_MAX;
	uint64_t t52 = 2175034LLU;

	t52 = ((x253%x254)%(x255-x256));

	if (t52 != 11652LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x258 = INT64_MIN;
	int64_t x259 = -1LL;
	volatile uint16_t x260 = 11367U;
	volatile int64_t t53 = -3945432LL;

	t53 = ((x257%x258)%(x259-x260));

	if (t53 != 10LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x261 = -1;
	volatile uint32_t x262 = UINT32_MAX;
	uint16_t x263 = 12741U;
	volatile int16_t x264 = -10666;
	uint32_t t54 = 13513163U;

	t54 = ((x261%x262)%(x263-x264));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x265 = -1;
	uint32_t x267 = UINT32_MAX;
	volatile int32_t x268 = INT32_MAX;
	uint32_t t55 = 5U;

	t55 = ((x265%x266)%(x267-x268));

	if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x269 = -15343;
	int16_t x270 = INT16_MIN;
	int8_t x271 = 2;
	int8_t x272 = INT8_MAX;
	int32_t t56 = 568551;

	t56 = ((x269%x270)%(x271-x272));

	if (t56 != -93) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 1319752U;
	static int32_t x276 = 9;
	volatile int64_t t57 = 157791858020LL;

	t57 = ((x273%x274)%(x275-x276));

	if (t57 != 247144LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x277 = -160;
	int16_t x278 = -1;
	volatile int32_t x280 = INT32_MAX;
	int32_t t58 = 4120407;

	t58 = ((x277%x278)%(x279-x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = 11681106198824461LL;
	int64_t x282 = -1LL;
	static uint16_t x283 = 3587U;
	volatile int64_t x284 = -1LL;

	t59 = ((x281%x282)%(x283-x284));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = INT32_MIN;
	static int16_t x286 = INT16_MIN;
	uint8_t x287 = 1U;

	t60 = ((x285%x286)%(x287-x288));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x289 = UINT64_MAX;
	int8_t x290 = 29;
	volatile int16_t x291 = INT16_MIN;
	volatile int8_t x292 = -1;

	t61 = ((x289%x290)%(x291-x292));

	if (t61 != 23LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x293 = -95405604093719LL;
	static int16_t x294 = INT16_MIN;
	uint64_t x295 = 1051163318534273LLU;
	uint32_t x296 = 30U;
	volatile uint64_t t62 = 24364176562773872LLU;

	t62 = ((x293%x294)%(x295-x296));

	if (t62 != 930160070639301LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x297 = 1108159165416761981LLU;
	int32_t x298 = INT32_MIN;
	int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;
	static volatile uint64_t t63 = 2LLU;

	t63 = ((x297%x298)%(x299-x300));

	if (t63 != 1610898500LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x301 = 123330575LLU;
	static uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	int8_t x304 = -5;
	volatile uint64_t t64 = 2819038732589295816LLU;

	t64 = ((x301%x302)%(x303-x304));

	if (t64 != 59240LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x310 = 6800292LLU;
	volatile int16_t x311 = INT16_MIN;
	static int64_t x312 = -2LL;
	static volatile uint64_t t65 = 123LLU;

	t65 = ((x309%x310)%(x311-x312));

	if (t65 != 288915LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = 2;
	volatile int16_t x314 = INT16_MAX;
	int64_t x315 = INT64_MIN;
	int64_t x316 = -1LL;
	int64_t t66 = -101703540677762616LL;

	t66 = ((x313%x314)%(x315-x316));

	if (t66 != 2LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = 2;
	int8_t x318 = -2;
	int64_t x319 = -1LL;
	uint32_t x320 = 63191U;
	int64_t t67 = 642476248173570LL;

	t67 = ((x317%x318)%(x319-x320));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x322 = 3;
	int32_t x323 = 163635;
	static volatile int8_t x324 = INT8_MAX;

	t68 = ((x321%x322)%(x323-x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x325 = INT8_MIN;
	int16_t x327 = INT16_MAX;

	t69 = ((x325%x326)%(x327-x328));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x329 = INT64_MAX;
	int8_t x330 = -5;
	volatile int32_t x332 = 6295;
	int64_t t70 = -9502543648795LL;

	t70 = ((x329%x330)%(x331-x332));

	if (t70 != 2LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x334 = 2300;
	static int16_t x336 = -1;

	t71 = ((x333%x334)%(x335-x336));

	if (t71 != 1710LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x338 = 40150378;
	int64_t x339 = -1LL;
	int32_t x340 = 9;
	static volatile int64_t t72 = -1799022LL;

	t72 = ((x337%x338)%(x339-x340));

	if (t72 != 5LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = 638U;
	int64_t x342 = INT64_MAX;

	t73 = ((x341%x342)%(x343-x344));

	if (t73 != 638LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x345 = 6U;
	uint32_t x346 = UINT32_MAX;
	int16_t x347 = 13266;
	int8_t x348 = INT8_MAX;
	uint32_t t74 = 726647286U;

	t74 = ((x345%x346)%(x347-x348));

	if (t74 != 6U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = -1;
	static uint16_t x350 = UINT16_MAX;
	static int64_t x351 = -6146LL;
	int64_t x352 = -1LL;
	volatile int64_t t75 = -31871689LL;

	t75 = ((x349%x350)%(x351-x352));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = -1;
	int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MIN;

	t76 = ((x357%x358)%(x359-x360));

	if (t76 != 2147483646LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x361 = 81U;
	volatile int32_t x362 = INT32_MIN;
	uint16_t x363 = UINT16_MAX;
	static volatile int8_t x364 = -1;
	volatile int32_t t77 = 200;

	t77 = ((x361%x362)%(x363-x364));

	if (t77 != 81) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x365 = INT8_MIN;
	static volatile int32_t x366 = INT32_MIN;
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = 126;

	t78 = ((x365%x366)%(x367-x368));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x369 = 2U;
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = 0;
	int16_t x372 = -1;

	t79 = ((x369%x370)%(x371-x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MIN;
	static volatile uint32_t x374 = UINT32_MAX;
	uint8_t x376 = UINT8_MAX;
	volatile int64_t t80 = -1132487316LL;

	t80 = ((x373%x374)%(x375-x376));

	if (t80 != -167LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = 14;
	uint64_t x378 = 10LLU;
	uint8_t x380 = 1U;
	uint64_t t81 = 63140272239LLU;

	t81 = ((x377%x378)%(x379-x380));

	if (t81 != 4LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x381 = 1485793;
	int64_t x382 = INT64_MAX;
	int8_t x383 = -2;
	uint8_t x384 = 9U;
	int64_t t82 = 52440003874983274LL;

	t82 = ((x381%x382)%(x383-x384));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = -1;
	int16_t x386 = INT16_MAX;
	volatile uint32_t x387 = UINT32_MAX;
	int64_t x388 = INT64_MAX;
	int64_t t83 = 1460952128540274LL;

	t83 = ((x385%x386)%(x387-x388));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x389 = INT64_MIN;
	int8_t x390 = 1;
	int64_t x391 = -1LL;
	static int32_t x392 = INT32_MAX;
	int64_t t84 = 889835797LL;

	t84 = ((x389%x390)%(x391-x392));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x393 = 125U;
	uint16_t x394 = 422U;
	static volatile int8_t x395 = 16;
	int8_t x396 = INT8_MIN;
	static int32_t t85 = -5435719;

	t85 = ((x393%x394)%(x395-x396));

	if (t85 != 125) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x398 = UINT64_MAX;
	static uint32_t x399 = 107072U;
	static int32_t x400 = INT32_MIN;
	uint64_t t86 = 1079751830LLU;

	t86 = ((x397%x398)%(x399-x400));

	if (t86 != 12LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x402 = 2U;
	int32_t x404 = INT32_MIN;

	t87 = ((x401%x402)%(x403-x404));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MIN;
	static int16_t x407 = -3;
	int8_t x408 = INT8_MIN;
	uint32_t t88 = 455178833U;

	t88 = ((x405%x406)%(x407-x408));

	if (t88 != 44U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x409 = 930301;
	volatile uint16_t x412 = 28288U;
	int32_t t89 = 13179510;

	t89 = ((x409%x410)%(x411-x412));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x417 = 0U;
	int64_t x418 = INT64_MAX;
	volatile int8_t x419 = INT8_MIN;
	int64_t t90 = 627058LL;

	t90 = ((x417%x418)%(x419-x420));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x425 = INT64_MIN;
	int32_t x426 = -9643;
	int8_t x427 = INT8_MAX;
	int8_t x428 = INT8_MIN;
	int64_t t91 = 3018450622399293010LL;

	t91 = ((x425%x426)%(x427-x428));

	if (t91 != -169LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x431 = 41015993U;
	uint32_t t92 = 18021U;

	t92 = ((x429%x430)%(x431-x432));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x434 = 8U;
	volatile int64_t x435 = -1LL;
	int32_t x436 = -10611773;
	volatile int64_t t93 = -3650614180327089LL;

	t93 = ((x433%x434)%(x435-x436));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x437 = -3878058;
	int64_t x438 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	volatile int64_t t94 = 294910LL;

	t94 = ((x437%x438)%(x439-x440));

	if (t94 != -3878058LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = -1;
	static int64_t x442 = 126369LL;
	volatile uint16_t x443 = 27249U;
	volatile uint32_t x444 = 12520U;
	volatile int64_t t95 = 3274225780850927633LL;

	t95 = ((x441%x442)%(x443-x444));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x445 = 193749LLU;
	uint64_t x446 = 43194692795LLU;
	uint32_t x447 = 145719596U;
	volatile uint64_t t96 = 1521772375583295LLU;

	t96 = ((x445%x446)%(x447-x448));

	if (t96 != 193749LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x449 = INT8_MIN;
	volatile int8_t x451 = 0;
	uint16_t x452 = 1411U;
	int32_t t97 = -62913897;

	t97 = ((x449%x450)%(x451-x452));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x460 = 854LL;
	volatile int64_t t98 = -3550699LL;

	t98 = ((x457%x458)%(x459-x460));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x465 = 0U;
	int8_t x466 = INT8_MAX;
	int64_t x467 = INT64_MIN;
	static volatile int16_t x468 = -241;

	t99 = ((x465%x466)%(x467-x468));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

