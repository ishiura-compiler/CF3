#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = INT64_MAX;
volatile uint64_t x10 = UINT64_MAX;
int16_t x11 = INT16_MIN;
static int32_t x15 = INT32_MIN;
int16_t x17 = INT16_MAX;
int8_t x18 = 1;
int64_t x19 = -1LL;
uint8_t x21 = 5U;
int16_t x23 = -1;
uint8_t x30 = 13U;
int16_t x32 = INT16_MIN;
volatile int64_t t7 = -800510LL;
int16_t x33 = -1;
int8_t x34 = 41;
int16_t x38 = -1866;
uint64_t x40 = 60019990108621LLU;
volatile int32_t x43 = INT32_MIN;
int16_t x52 = INT16_MAX;
static int64_t x53 = -1LL;
volatile int8_t x63 = INT8_MAX;
int8_t x64 = INT8_MIN;
static volatile int16_t x68 = -1;
static int8_t x70 = INT8_MAX;
int16_t x72 = -2338;
volatile int32_t x79 = INT32_MAX;
volatile uint32_t x85 = 79U;
static int16_t x90 = -1;
uint16_t x92 = 46U;
int32_t t22 = INT32_MAX;
uint64_t x94 = 435410805677824LLU;
uint64_t x96 = 22190206LLU;
volatile uint32_t t24 = 3231U;
int64_t t25 = -1659702343917437371LL;
static int32_t t26 = -4985;
int16_t x121 = -1;
uint64_t x122 = UINT64_MAX;
volatile uint32_t x125 = 11U;
int8_t x131 = INT8_MIN;
volatile int32_t t30 = 637861168;
int8_t x137 = INT8_MIN;
int16_t x144 = INT16_MIN;
int64_t x150 = INT64_MAX;
int8_t x157 = -3;
uint16_t x158 = 3397U;
int32_t t36 = -1;
int64_t t37 = 455226857567843LL;
static int32_t t39 = -35324739;
static int32_t x173 = INT32_MAX;
volatile int32_t x176 = 184224163;
static int64_t t40 = -198517805188864822LL;
uint8_t x178 = 1U;
static int32_t t41 = -2;
uint64_t t42 = 548117607LLU;
int64_t x185 = INT64_MIN;
int8_t x193 = -2;
int32_t x198 = -1;
int32_t x202 = -5;
static int8_t x205 = 3;
uint32_t x209 = 983972410U;
int64_t x216 = INT64_MIN;
int32_t t50 = 267;
volatile int32_t t52 = INT32_MAX;
int32_t x225 = INT32_MIN;
int32_t x226 = -1;
uint16_t x231 = 5U;
int8_t x243 = -3;
int8_t x244 = INT8_MIN;
int32_t t56 = -1120551;
int8_t x264 = INT8_MIN;
static uint64_t x276 = UINT64_MAX;
uint64_t x281 = 1060457783903LLU;
volatile int16_t x282 = -330;
static volatile int64_t x288 = INT64_MIN;
int32_t x294 = -1;
static int32_t x298 = 60842;
uint8_t x300 = 7U;
int16_t x306 = 2;
int32_t x308 = INT32_MIN;
int32_t x311 = 30546784;
static int32_t x313 = INT32_MAX;
uint8_t x314 = 40U;
int32_t t73 = 0;
uint64_t x321 = UINT64_MAX;
static int64_t x323 = INT64_MAX;
volatile uint64_t t75 = 1LLU;
volatile uint16_t x331 = UINT16_MAX;
static uint8_t x348 = 15U;
int16_t x350 = INT16_MIN;
volatile int32_t x355 = -2;
static uint32_t x359 = 28450U;
int16_t x370 = INT16_MIN;
static int32_t t85 = -2067155;
static int32_t x376 = -1;
static uint16_t x381 = 689U;
static uint64_t x383 = UINT64_MAX;
int64_t x388 = INT64_MAX;
int16_t x393 = INT16_MAX;
static uint32_t x396 = 422U;
uint64_t x398 = UINT64_MAX;
static uint64_t t92 = 198274220LLU;
static volatile uint32_t x401 = 15502900U;
int8_t x406 = 42;
int16_t x414 = -1;
volatile uint32_t t96 = 3210420U;
volatile int32_t x419 = -2;
volatile uint64_t x423 = 29098840300LLU;
static volatile int64_t x424 = 26984445971LL;


void f0(void) {
	int32_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MAX;
	uint32_t x4 = 1U;

	t0 = (x1^(x2-(x3<=x4)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint8_t x6 = UINT8_MAX;
	static uint16_t x7 = 510U;
	volatile int8_t x8 = -6;
	volatile int32_t t1 = -15165870;

	t1 = (x5^(x6-(x7<=x8)));

	if (t1 != -256) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -9;
	static volatile int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 93949504LLU;

	t2 = (x9^(x10-(x11<=x12)));

	if (t2 != 8LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	uint32_t x14 = 222U;
	int32_t x16 = -1246;
	volatile uint32_t t3 = 1U;

	t3 = (x13^(x14-(x15<=x16)));

	if (t3 != 162U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x20 = -1;
	int32_t t4 = -15344;

	t4 = (x17^(x18-(x19<=x20)));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 123LLU;
	volatile int16_t x24 = INT16_MIN;
	volatile uint64_t t5 = 92042929LLU;

	t5 = (x21^(x22-(x23<=x24)));

	if (t5 != 126LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	volatile int16_t x26 = INT16_MIN;
	int64_t x27 = 3LL;
	int32_t x28 = -3358;
	volatile int32_t t6 = -1034655185;

	t6 = (x25^(x26-(x27<=x28)));

	if (t6 != -32641) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 56LL;
	uint32_t x31 = 3414U;

	t7 = (x29^(x30-(x31<=x32)));

	if (t7 != 52LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x35 = -1;
	uint64_t x36 = 89726848451465671LLU;
	volatile int32_t t8 = -60;

	t8 = (x33^(x34-(x35<=x36)));

	if (t8 != -42) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1540956;
	uint32_t x39 = 1U;
	int32_t t9 = -65301;

	t9 = (x37^(x38-(x39<=x40)));

	if (t9 != 1541137) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	int8_t x42 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	int64_t t10 = -1846711567LL;

	t10 = (x41^(x42-(x43<=x44)));

	if (t10 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 23180;
	volatile int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	int16_t x48 = -1;
	volatile int32_t t11 = 1;

	t11 = (x45^(x46-(x47<=x48)));

	if (t11 != -23284) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = 1;
	uint32_t x51 = 142U;
	volatile uint32_t t12 = UINT32_MAX;

	t12 = (x49^(x50-(x51<=x52)));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -1LL;
	static int16_t x55 = -3;
	uint16_t x56 = 37U;
	volatile int64_t t13 = -596332334241887LL;

	t13 = (x53^(x54-(x55<=x56)));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 557U;
	volatile int32_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = 7723;

	t14 = (x57^(x58-(x59<=x60)));

	if (t14 != -558) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 0;
	int16_t x62 = 1;
	volatile int32_t t15 = 549186719;

	t15 = (x61^(x62-(x63<=x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MAX;
	volatile int8_t x66 = 1;
	uint16_t x67 = 145U;
	volatile int32_t t16 = -8678255;

	t16 = (x65^(x66-(x67<=x68)));

	if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 3631U;
	static int64_t x71 = -5893345LL;
	int32_t t17 = -46;

	t17 = (x69^(x70-(x71<=x72)));

	if (t17 != 3665) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint16_t x74 = UINT16_MAX;
	static int32_t x75 = INT32_MIN;
	int16_t x76 = INT16_MIN;
	int64_t t18 = -56LL;

	t18 = (x73^(x74-(x75<=x76)));

	if (t18 != -65535LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 5;
	uint64_t x78 = 811LLU;
	int32_t x80 = 263;
	volatile uint64_t t19 = 844389315716LLU;

	t19 = (x77^(x78-(x79<=x80)));

	if (t19 != 814LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	int16_t x82 = -559;
	static int32_t x83 = INT32_MIN;
	uint64_t x84 = 6816336782395188867LLU;
	volatile int64_t t20 = 14347471170LL;

	t20 = (x81^(x82-(x83<=x84)));

	if (t20 != 9223372036854775249LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -1;
	uint8_t x87 = 0U;
	int8_t x88 = INT8_MIN;
	static uint32_t t21 = 33U;

	t21 = (x85^(x86-(x87<=x88)));

	if (t21 != 4294967216U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	static uint16_t x91 = UINT16_MAX;

	t22 = (x89^(x90-(x91<=x92)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 12439U;
	int8_t x95 = INT8_MAX;
	static volatile uint64_t t23 = 7617718LLU;

	t23 = (x93^(x94-(x95<=x96)));

	if (t23 != 435410805681768LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MIN;
	int16_t x99 = -1;
	volatile uint64_t x100 = UINT64_MAX;

	t24 = (x97^(x98-(x99<=x100)));

	if (t24 != 32768U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = 511565804769LL;
	uint16_t x102 = UINT16_MAX;
	uint16_t x103 = 51U;
	int8_t x104 = -4;

	t25 = (x101^(x102-(x103<=x104)));

	if (t25 != 511565777694LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -6;
	volatile uint16_t x114 = 30U;
	static int32_t x115 = INT32_MIN;
	int8_t x116 = 51;

	t26 = (x113^(x114-(x115<=x116)));

	if (t26 != -25) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = -1;
	static int64_t x119 = INT64_MIN;
	int8_t x120 = 56;
	volatile int32_t t27 = -109365113;

	t27 = (x117^(x118-(x119<=x120)));

	if (t27 != 32766) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MIN;
	uint64_t t28 = 63033169LLU;

	t28 = (x121^(x122-(x123<=x124)));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x126 = 2434U;
	volatile uint8_t x127 = UINT8_MAX;
	int16_t x128 = INT16_MIN;
	static volatile uint32_t t29 = 7906U;

	t29 = (x125^(x126-(x127<=x128)));

	if (t29 != 2441U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -47;
	volatile int32_t x130 = INT32_MAX;
	uint32_t x132 = 7971155U;

	t30 = (x129^(x130-(x131<=x132)));

	if (t30 != -2147483602) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x138 = 8U;
	int16_t x139 = INT16_MIN;
	static int32_t x140 = INT32_MAX;
	static volatile int32_t t31 = 56952;

	t31 = (x137^(x138-(x139<=x140)));

	if (t31 != -121) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 4U;
	uint16_t x142 = 31957U;
	uint64_t x143 = 1798LLU;
	volatile int32_t t32 = -537;

	t32 = (x141^(x142-(x143<=x144)));

	if (t32 != 31952) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x145 = -1;
	static int16_t x146 = INT16_MAX;
	volatile int8_t x147 = -11;
	volatile int64_t x148 = -1LL;
	int32_t t33 = 0;

	t33 = (x145^(x146-(x147<=x148)));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = UINT32_MAX;
	int32_t x151 = -1;
	int8_t x152 = INT8_MIN;
	volatile int64_t t34 = -1895767487938650243LL;

	t34 = (x149^(x150-(x151<=x152)));

	if (t34 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -559;
	volatile int8_t x154 = INT8_MAX;
	uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 68U;
	static int32_t t35 = 33;

	t35 = (x153^(x154-(x155<=x156)));

	if (t35 != -594) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x159 = -25046;
	int8_t x160 = INT8_MIN;

	t36 = (x157^(x158-(x159<=x160)));

	if (t36 != -3399) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -1LL;
	volatile uint8_t x162 = 0U;
	volatile uint8_t x163 = UINT8_MAX;
	int16_t x164 = 0;

	t37 = (x161^(x162-(x163<=x164)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = -152229941814990LL;
	uint64_t x166 = 359221LLU;
	static int16_t x167 = INT16_MAX;
	int8_t x168 = -1;
	uint64_t t38 = 327LLU;

	t38 = (x165^(x166-(x167<=x168)));

	if (t38 != 18446591843767525895LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = 133U;
	volatile int16_t x170 = INT16_MIN;
	int8_t x171 = -1;
	int32_t x172 = INT32_MAX;

	t39 = (x169^(x170-(x171<=x172)));

	if (t39 != -32902) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x174 = -1LL;
	int8_t x175 = 9;

	t40 = (x173^(x174-(x175<=x176)));

	if (t40 != -2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = INT8_MIN;
	static int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;

	t41 = (x177^(x178-(x179<=x180)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = 275692869868069LL;
	uint64_t x182 = 34300LLU;
	int8_t x183 = INT8_MIN;
	static uint32_t x184 = 4U;

	t42 = (x181^(x182-(x183<=x184)));

	if (t42 != 275692869902297LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x186 = INT32_MAX;
	static int16_t x187 = 14137;
	uint8_t x188 = 77U;
	int64_t t43 = 245184422495443468LL;

	t43 = (x185^(x186-(x187<=x188)));

	if (t43 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x189 = UINT8_MAX;
	static uint32_t x190 = UINT32_MAX;
	uint16_t x191 = UINT16_MAX;
	volatile int16_t x192 = INT16_MIN;
	static uint32_t t44 = 1480U;

	t44 = (x189^(x190-(x191<=x192)));

	if (t44 != 4294967040U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x194 = 33;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = 14;
	volatile int32_t t45 = -611400133;

	t45 = (x193^(x194-(x195<=x196)));

	if (t45 != -33) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x197 = 2932;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = INT64_MAX;
	volatile int32_t t46 = 1477362;

	t46 = (x197^(x198-(x199<=x200)));

	if (t46 != -2934) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	int32_t x203 = 121642;
	int64_t x204 = -1LL;
	static int32_t t47 = -1;

	t47 = (x201^(x202-(x203<=x204)));

	if (t47 != 2147483643) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	static int64_t x208 = INT64_MAX;
	volatile int32_t t48 = 526901779;

	t48 = (x205^(x206-(x207<=x208)));

	if (t48 != -132) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x210 = INT8_MAX;
	static int64_t x211 = INT64_MIN;
	uint32_t x212 = 5224U;
	static volatile uint32_t t49 = 11096241U;

	t49 = (x209^(x210-(x211<=x212)));

	if (t49 != 983972420U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x213 = 503U;
	volatile int8_t x214 = 42;
	int8_t x215 = -1;

	t50 = (x213^(x214-(x215<=x216)));

	if (t50 != 477) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = 1201299U;
	int8_t x218 = 12;
	uint64_t x219 = 9435840215599736LLU;
	int64_t x220 = -775LL;
	static uint32_t t51 = 154897551U;

	t51 = (x217^(x218-(x219<=x220)));

	if (t51 != 1201304U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = -1;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = 245LLU;
	int8_t x224 = 15;

	t52 = (x221^(x222-(x223<=x224)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 1U;
	volatile int32_t t53 = 11505364;

	t53 = (x225^(x226-(x227<=x228)));

	if (t53 != 2147483646) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x229 = INT32_MIN;
	int16_t x230 = INT16_MAX;
	static uint16_t x232 = 13005U;
	volatile int32_t t54 = -368302833;

	t54 = (x229^(x230-(x231<=x232)));

	if (t54 != -2147450882) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x237 = INT32_MAX;
	static volatile int32_t x238 = -1;
	static volatile int8_t x239 = INT8_MIN;
	int16_t x240 = 309;
	int32_t t55 = -3147684;

	t55 = (x237^(x238-(x239<=x240)));

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = -1;

	t56 = (x241^(x242-(x243<=x244)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = -7273;
	int64_t x246 = INT64_MAX;
	uint16_t x247 = 6127U;
	static uint64_t x248 = UINT64_MAX;
	volatile int64_t t57 = -25224211218612371LL;

	t57 = (x245^(x246-(x247<=x248)));

	if (t57 != -9223372036854768535LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -8455;
	static volatile int32_t x250 = INT32_MAX;
	static int8_t x251 = -1;
	uint64_t x252 = 5341356750433430LLU;
	static int32_t t58 = -4666;

	t58 = (x249^(x250-(x251<=x252)));

	if (t58 != -2147475194) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x253 = -9;
	int8_t x254 = -36;
	int8_t x255 = 1;
	int32_t x256 = INT32_MIN;
	volatile int32_t t59 = -11;

	t59 = (x253^(x254-(x255<=x256)));

	if (t59 != 43) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = -1;
	int8_t x258 = -1;
	static uint64_t x259 = 33632LLU;
	int32_t x260 = 222028751;
	volatile int32_t t60 = -1;

	t60 = (x257^(x258-(x259<=x260)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 3U;
	int8_t x262 = INT8_MIN;
	int16_t x263 = -5;
	int32_t t61 = 255;

	t61 = (x261^(x262-(x263<=x264)));

	if (t61 != -125) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = UINT8_MAX;
	static int32_t x266 = INT32_MIN;
	volatile uint16_t x267 = 20212U;
	int64_t x268 = INT64_MIN;
	int32_t t62 = -286309;

	t62 = (x265^(x266-(x267<=x268)));

	if (t62 != -2147483393) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x269 = 24748U;
	int64_t x270 = 259258114443289LL;
	int16_t x271 = INT16_MIN;
	volatile uint16_t x272 = 428U;
	volatile int64_t t63 = 400932666LL;

	t63 = (x269^(x270-(x271<=x272)));

	if (t63 != 259258114468020LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MAX;
	uint8_t x274 = 0U;
	uint32_t x275 = 1624295460U;
	int64_t t64 = INT64_MIN;

	t64 = (x273^(x274-(x275<=x276)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MIN;
	int8_t x279 = 0;
	int64_t x280 = INT64_MIN;
	int32_t t65 = 250176255;

	t65 = (x277^(x278-(x279<=x280)));

	if (t65 != 2147483520) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x283 = 3645934U;
	int8_t x284 = INT8_MIN;
	uint64_t t66 = 67LLU;

	t66 = (x281^(x282-(x283<=x284)));

	if (t66 != 18446743013251767530LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1046922LL;
	int8_t x286 = 22;
	volatile int32_t x287 = -293774;
	int64_t t67 = -635LL;

	t67 = (x285^(x286-(x287<=x288)));

	if (t67 != -1046944LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = -1LL;
	uint64_t x290 = 20741034250873LLU;
	static volatile uint16_t x291 = 41U;
	uint8_t x292 = 3U;
	volatile uint64_t t68 = 479647LLU;

	t68 = (x289^(x290-(x291<=x292)));

	if (t68 != 18446723332675300742LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = 2U;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = -7;
	volatile int32_t t69 = -299733;

	t69 = (x293^(x294-(x295<=x296)));

	if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = 103U;
	volatile int64_t x299 = INT64_MIN;
	int32_t t70 = 1411583;

	t70 = (x297^(x298-(x299<=x300)));

	if (t70 != 60878) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x305 = INT32_MIN;
	int64_t x307 = 1LL;
	volatile int32_t t71 = 53952;

	t71 = (x305^(x306-(x307<=x308)));

	if (t71 != -2147483646) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	uint16_t x310 = 29713U;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t72 = 17895899;

	t72 = (x309^(x310-(x311<=x312)));

	if (t72 != -29808) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x315 = UINT16_MAX;
	uint8_t x316 = UINT8_MAX;

	t73 = (x313^(x314-(x315<=x316)));

	if (t73 != 2147483607) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = UINT8_MAX;
	int64_t x318 = 508940LL;
	int32_t x319 = INT32_MIN;
	int32_t x320 = 10642580;
	static int64_t t74 = -1870871529569639702LL;

	t74 = (x317^(x318-(x319<=x320)));

	if (t74 != 509172LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x322 = -57;
	uint64_t x324 = 29827178034368862LLU;

	t75 = (x321^(x322-(x323<=x324)));

	if (t75 != 56LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MIN;
	static uint32_t x326 = 4182329U;
	static uint32_t x327 = 1071U;
	uint64_t x328 = 10761074838948637LLU;
	static volatile int64_t t76 = -3353675LL;

	t76 = (x325^(x326-(x327<=x328)));

	if (t76 != -9223372036850593480LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x329 = INT64_MIN;
	static uint8_t x330 = UINT8_MAX;
	int32_t x332 = 737;
	volatile int64_t t77 = -644632283LL;

	t77 = (x329^(x330-(x331<=x332)));

	if (t77 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = INT64_MAX;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MAX;
	uint8_t x336 = 8U;
	int64_t t78 = 13403240308LL;

	t78 = (x333^(x334-(x335<=x336)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x341 = 207U;
	static volatile uint64_t x342 = 22488126387410551LLU;
	int32_t x343 = 0;
	int8_t x344 = -1;
	uint64_t t79 = 513LLU;

	t79 = (x341^(x342-(x343<=x344)));

	if (t79 != 22488126387410616LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = -1;
	static uint8_t x346 = UINT8_MAX;
	int32_t x347 = -1;
	volatile int32_t t80 = 23050410;

	t80 = (x345^(x346-(x347<=x348)));

	if (t80 != -255) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x349 = 0;
	volatile int64_t x351 = 121329498645213630LL;
	uint64_t x352 = 353LLU;
	static int32_t t81 = 11509;

	t81 = (x349^(x350-(x351<=x352)));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = -1756;
	static volatile int32_t x354 = -19335958;
	int16_t x356 = INT16_MIN;
	int32_t t82 = 968034;

	t82 = (x353^(x354-(x355<=x356)));

	if (t82 != 19336654) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x357 = 23;
	uint16_t x358 = 615U;
	int8_t x360 = 11;
	int32_t t83 = 13;

	t83 = (x357^(x358-(x359<=x360)));

	if (t83 != 624) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = INT64_MIN;
	volatile uint32_t x366 = 844045U;
	int32_t x367 = INT32_MAX;
	volatile uint8_t x368 = 12U;
	volatile int64_t t84 = 428238LL;

	t84 = (x365^(x366-(x367<=x368)));

	if (t84 != -9223372036853931763LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = -1;
	static uint8_t x371 = 1U;
	int64_t x372 = -58LL;

	t85 = (x369^(x370-(x371<=x372)));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = -23459LL;
	volatile uint8_t x374 = UINT8_MAX;
	int16_t x375 = 6;
	int64_t t86 = 10745163465806744LL;

	t86 = (x373^(x374-(x375<=x376)));

	if (t86 != -23390LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = -197;
	volatile uint8_t x378 = 16U;
	uint32_t x379 = 2115U;
	uint64_t x380 = 1305535645878049315LLU;
	volatile int32_t t87 = -1756745;

	t87 = (x377^(x378-(x379<=x380)));

	if (t87 != -204) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x382 = INT32_MAX;
	int64_t x384 = INT64_MAX;
	volatile int32_t t88 = -437;

	t88 = (x381^(x382-(x383<=x384)));

	if (t88 != 2147482958) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = UINT16_MAX;
	uint32_t x386 = 2U;
	volatile int8_t x387 = INT8_MAX;
	uint32_t t89 = 863758U;

	t89 = (x385^(x386-(x387<=x388)));

	if (t89 != 65534U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x389 = 0U;
	volatile int64_t x390 = INT64_MIN;
	static uint8_t x391 = 0U;
	volatile int16_t x392 = -1;
	volatile int64_t t90 = INT64_MIN;

	t90 = (x389^(x390-(x391<=x392)));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x394 = INT16_MIN;
	volatile int64_t x395 = -1LL;
	volatile int32_t t91 = 37084202;

	t91 = (x393^(x394-(x395<=x396)));

	if (t91 != -65536) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = -18;
	volatile int32_t x399 = -1;
	uint64_t x400 = 1896675652871830LLU;

	t92 = (x397^(x398-(x399<=x400)));

	if (t92 != 17LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x402 = UINT8_MAX;
	static volatile int32_t x403 = -55227;
	int64_t x404 = -1LL;
	uint32_t t93 = 479245U;

	t93 = (x401^(x402-(x403<=x404)));

	if (t93 != 15503050U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x405 = UINT8_MAX;
	static int32_t x407 = -6947432;
	uint32_t x408 = UINT32_MAX;
	static volatile int32_t t94 = -1415;

	t94 = (x405^(x406-(x407<=x408)));

	if (t94 != 214) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x409 = 861;
	int32_t x410 = -2010;
	static uint16_t x411 = 8616U;
	static uint32_t x412 = 737355U;
	volatile int32_t t95 = 1;

	t95 = (x409^(x410-(x411<=x412)));

	if (t95 != -1160) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x413 = UINT32_MAX;
	uint16_t x415 = 4U;
	uint8_t x416 = UINT8_MAX;

	t96 = (x413^(x414-(x415<=x416)));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x417 = INT32_MIN;
	uint8_t x418 = 39U;
	int16_t x420 = -1;
	int32_t t97 = 15;

	t97 = (x417^(x418-(x419<=x420)));

	if (t97 != -2147483610) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x421 = UINT32_MAX;
	volatile int16_t x422 = INT16_MIN;
	uint32_t t98 = 478907U;

	t98 = (x421^(x422-(x423<=x424)));

	if (t98 != 32767U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = -1532833;
	int16_t x426 = -3;
	int64_t x427 = 855286026969141819LL;
	volatile int32_t x428 = -1;
	int32_t t99 = 1;

	t99 = (x425^(x426-(x427<=x428)));

	if (t99 != 1532834) { NG(); } else { ; }
	
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

