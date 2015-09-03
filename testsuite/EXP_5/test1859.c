#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
int16_t x11 = -1;
uint8_t x21 = 56U;
int16_t x23 = -4227;
int8_t x24 = 0;
static uint32_t x37 = 5068U;
static volatile int64_t t11 = -488007723LL;
static int16_t x49 = -1;
static uint8_t x60 = UINT8_MAX;
int16_t x61 = 30;
static int16_t x62 = -10;
static int64_t x67 = 20414085LL;
uint8_t x70 = UINT8_MAX;
int64_t t17 = 37539384LL;
volatile int8_t x80 = INT8_MIN;
int64_t x82 = INT64_MIN;
volatile uint64_t x85 = UINT64_MAX;
uint32_t x86 = UINT32_MAX;
int32_t x95 = INT32_MIN;
uint32_t x98 = UINT32_MAX;
static volatile uint8_t x101 = 25U;
uint8_t x106 = 3U;
int64_t x109 = INT64_MIN;
volatile int32_t x111 = -1;
static volatile int64_t t27 = 0LL;
uint8_t x124 = UINT8_MAX;
uint64_t x126 = 4281816016LLU;
int16_t x130 = INT16_MAX;
int32_t x135 = INT32_MIN;
uint64_t x141 = 6LLU;
uint32_t x143 = 183U;
int32_t x148 = INT32_MAX;
uint16_t x151 = UINT16_MAX;
static int32_t x155 = INT32_MAX;
static int64_t x156 = INT64_MAX;
int32_t x157 = -1;
int32_t x158 = 14094;
uint32_t x159 = UINT32_MAX;
uint64_t x162 = UINT64_MAX;
int16_t x163 = INT16_MIN;
volatile uint64_t t40 = 14726LLU;
static volatile uint32_t x169 = UINT32_MAX;
int32_t x171 = INT32_MIN;
volatile uint64_t x172 = 8751519790LLU;
uint64_t t44 = 1287578110228374LLU;
int64_t x185 = -1LL;
int64_t x196 = -1LL;
static volatile uint64_t x198 = 116LLU;
int16_t x204 = -1;
uint64_t t52 = 36586095398LLU;
int16_t x215 = 1;
volatile int64_t t53 = 4656832480005LL;
int16_t x228 = INT16_MIN;
volatile int64_t t57 = -13LL;
static uint8_t x233 = 12U;
volatile int32_t x236 = INT32_MIN;
int8_t x238 = -1;
uint64_t x240 = 8608964LLU;
int8_t x241 = -1;
volatile uint64_t t60 = 664534100631939LLU;
volatile uint8_t x245 = 33U;
static volatile int8_t x246 = INT8_MIN;
int8_t x254 = -35;
int8_t x256 = -1;
volatile int32_t t63 = -18;
int8_t x258 = INT8_MIN;
static int32_t x266 = -1;
static int8_t x269 = INT8_MAX;
int64_t x273 = 26374790775LL;
static uint8_t x277 = 5U;
uint8_t x291 = 0U;
uint32_t x292 = UINT32_MAX;
int32_t x296 = -1;
uint64_t t73 = 189009LLU;
static uint32_t x297 = 303026090U;
int64_t t74 = -8398987980263021LL;
uint16_t x302 = 3U;
int64_t x304 = 10579899348992LL;
volatile int64_t t75 = -650768827476524LL;
uint16_t x305 = UINT16_MAX;
volatile int64_t t76 = -2274890164666499001LL;
int8_t x309 = -8;
int8_t x310 = INT8_MAX;
int64_t x311 = INT64_MAX;
int32_t x314 = INT32_MIN;
uint16_t x318 = 16U;
volatile int32_t x319 = -1;
int32_t x324 = 12182;
volatile int64_t x325 = -7147210393LL;
static volatile int64_t x330 = INT64_MIN;
volatile uint64_t t82 = 32609235361911164LLU;
uint32_t x333 = 4174612U;
uint64_t t83 = 165159030668508583LLU;
uint64_t t84 = 544105715764LLU;
int64_t t86 = -474855LL;
volatile uint8_t x352 = 51U;
volatile int16_t x366 = -1;
int8_t x367 = 0;
int32_t t91 = 2387376;
static int32_t x369 = -2463;
static int32_t t92 = 104530647;
uint8_t x373 = UINT8_MAX;
static volatile int64_t x383 = 0LL;
int64_t t95 = -986673171963354165LL;
int64_t x385 = -1LL;
volatile uint64_t t98 = 23LLU;


void f0(void) {
	static int64_t x1 = 4115043052LL;
	int64_t x2 = INT64_MIN;
	uint64_t x4 = 7424173152LLU;
	static uint64_t t0 = 8121170783LLU;

	t0 = (x1^((x2&x3)^x4));

	if (t0 != 5633308300LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	static uint16_t x6 = 11U;
	uint64_t x7 = UINT64_MAX;
	uint16_t x8 = 5522U;
	volatile uint64_t t1 = 119LLU;

	t1 = (x5^((x6&x7)^x8));

	if (t1 != 5478LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -111216479723347790LL;
	uint64_t x10 = 25904107902242223LLU;
	static uint32_t x12 = UINT32_MAX;
	uint64_t t2 = 1LLU;

	t2 = (x9^((x10&x11)^x12));

	if (t2 != 18314141414787175138LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2750U;
	static int8_t x14 = 1;
	int64_t x15 = -1655LL;
	volatile uint16_t x16 = 673U;
	volatile int64_t t3 = -4976LL;

	t3 = (x13^((x14&x15)^x16));

	if (t3 != 2078LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1;
	int8_t x18 = -2;
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 340LL;

	t4 = (x17^((x18&x19)^x20));

	if (t4 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -8LL;
	volatile int64_t t5 = 21958233826LL;

	t5 = (x21^((x22&x23)^x24));

	if (t5 != -4288LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	uint8_t x26 = UINT8_MAX;
	int64_t x27 = -6329535850424235LL;
	int32_t x28 = INT32_MIN;
	static int64_t t6 = 68855LL;

	t6 = (x25^((x26&x27)^x28));

	if (t6 != -2147483606LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MIN;
	uint16_t x31 = 0U;
	int64_t x32 = INT64_MAX;
	volatile int64_t t7 = -2111982681612520780LL;

	t7 = (x29^((x30&x31)^x32));

	if (t7 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile uint32_t x34 = 418U;
	uint32_t x35 = UINT32_MAX;
	uint16_t x36 = 2589U;
	static int64_t t8 = -58293LL;

	t8 = (x33^((x34&x35)^x36));

	if (t8 != -3008LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x38 = INT32_MIN;
	uint64_t x39 = 339336241LLU;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t9 = 134128380LLU;

	t9 = (x37^((x38&x39)^x40));

	if (t9 != 18446744073709523916LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1062947584U;
	int32_t x42 = -1;
	static volatile int32_t x43 = 82;
	int16_t x44 = INT16_MAX;
	static uint32_t t10 = 0U;

	t10 = (x41^((x42&x43)^x44));

	if (t10 != 1062941869U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = INT8_MAX;
	int16_t x46 = INT16_MAX;
	int64_t x47 = -1833925755335361LL;
	static volatile int16_t x48 = INT16_MIN;

	t11 = (x45^((x46&x47)^x48));

	if (t11 != -29376LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -2569413;
	int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	int64_t t12 = -47550LL;

	t12 = (x49^((x50&x51)^x52));

	if (t12 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	static volatile int64_t x54 = INT64_MIN;
	int16_t x55 = -1;
	int8_t x56 = INT8_MAX;
	volatile int64_t t13 = -4447LL;

	t13 = (x53^((x54&x55)^x56));

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 3U;
	uint16_t x58 = 4U;
	int16_t x59 = INT16_MIN;
	int32_t t14 = -2012;

	t14 = (x57^((x58&x59)^x60));

	if (t14 != 252) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = INT64_MIN;
	volatile uint8_t x64 = UINT8_MAX;
	volatile int64_t t15 = 153354631113078842LL;

	t15 = (x61^((x62&x63)^x64));

	if (t15 != -9223372036854775583LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x65 = UINT16_MAX;
	volatile int32_t x66 = INT32_MIN;
	volatile int16_t x68 = INT16_MIN;
	int64_t t16 = -148981215LL;

	t16 = (x65^((x66&x67)^x68));

	if (t16 != -32769LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 0U;
	int64_t x71 = INT64_MAX;
	static int32_t x72 = -7;

	t17 = (x69^((x70&x71)^x72));

	if (t17 != -250LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 28U;
	int8_t x74 = 0;
	int64_t x75 = INT64_MAX;
	int32_t x76 = 3789;
	int64_t t18 = 0LL;

	t18 = (x73^((x74&x75)^x76));

	if (t18 != 3793LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int32_t x78 = INT32_MAX;
	uint16_t x79 = 1U;
	static uint32_t t19 = 20U;

	t19 = (x77^((x78&x79)^x80));

	if (t19 != 126U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	volatile int32_t x83 = 1207860;
	static int32_t x84 = 56;
	static volatile int64_t t20 = 3142873264545109LL;

	t20 = (x81^((x82&x83)^x84));

	if (t20 != -57LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x87 = 24;
	volatile int8_t x88 = INT8_MIN;
	static volatile uint64_t t21 = 206LLU;

	t21 = (x85^((x86&x87)^x88));

	if (t21 != 18446744069414584423LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint8_t x90 = 0U;
	uint64_t x91 = 1307279423LLU;
	static uint8_t x92 = 9U;
	uint64_t t22 = 54004618LLU;

	t22 = (x89^((x90&x91)^x92));

	if (t22 != 9223372036854775817LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	static volatile int16_t x94 = 2;
	static volatile int32_t x96 = -1;
	volatile int32_t t23 = INT32_MAX;

	t23 = (x93^((x94&x95)^x96));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 4;
	volatile int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MIN;
	volatile int64_t t24 = 7551971LL;

	t24 = (x97^((x98&x99)^x100));

	if (t24 != -2147483644LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MIN;
	uint16_t x103 = UINT16_MAX;
	uint64_t x104 = 1LLU;
	uint64_t t25 = 142915777822704914LLU;

	t25 = (x101^((x102&x103)^x104));

	if (t25 != 32792LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 1U;
	volatile uint8_t x107 = 21U;
	static int32_t x108 = INT32_MAX;
	volatile int32_t t26 = INT32_MAX;

	t26 = (x105^((x106&x107)^x108));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 70719444;
	int64_t x112 = INT64_MAX;

	t27 = (x109^((x110&x111)^x112));

	if (t27 != -70719445LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x113 = UINT16_MAX;
	static int8_t x114 = 6;
	int8_t x115 = INT8_MAX;
	uint32_t x116 = 124099401U;
	static uint32_t t28 = 329363541U;

	t28 = (x113^((x114&x115)^x116));

	if (t28 != 124085424U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x118 = 1U;
	volatile uint64_t x119 = 951652250156655125LLU;
	static uint16_t x120 = 2316U;
	uint64_t t29 = 277997488008840LLU;

	t29 = (x117^((x118&x119)^x120));

	if (t29 != 18446744073709521165LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 7U;
	int32_t x122 = -244;
	uint64_t x123 = 2262LLU;
	volatile uint64_t t30 = 6649278LLU;

	t30 = (x121^((x122&x123)^x124));

	if (t30 != 2300LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -1;
	int32_t x127 = INT32_MAX;
	volatile uint32_t x128 = 183U;
	uint64_t t31 = 655597624280258LLU;

	t31 = (x125^((x126&x127)^x128));

	if (t31 != 18446744071575219352LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -2;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MIN;
	static volatile uint32_t t32 = 4050U;

	t32 = (x129^((x130&x131)^x132));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	volatile uint64_t x136 = 491LLU;
	static volatile uint64_t t33 = 124LLU;

	t33 = (x133^((x134&x135)^x136));

	if (t33 != 491LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 27325092625082473LLU;
	int16_t x138 = -1;
	int8_t x139 = -12;
	int64_t x140 = 5366596432756132LL;
	uint64_t t34 = 3329LLU;

	t34 = (x137^((x138&x139)^x140));

	if (t34 != 18414650553404910137LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -5219771758046LL;
	int32_t x144 = INT32_MIN;
	uint64_t t35 = 15LLU;

	t35 = (x141^((x142&x143)^x144));

	if (t35 != 18446744071562068004LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static int32_t x146 = -6;
	static volatile int8_t x147 = INT8_MAX;
	volatile int32_t t36 = -149755536;

	t36 = (x145^((x146&x147)^x148));

	if (t36 != -2147483643) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	int64_t x150 = INT64_MAX;
	uint8_t x152 = UINT8_MAX;
	static int64_t t37 = 31LL;

	t37 = (x149^((x150&x151)^x152));

	if (t37 != -65281LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int16_t x154 = INT16_MAX;
	int64_t t38 = -9LL;

	t38 = (x153^((x154&x155)^x156));

	if (t38 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x160 = -10;
	uint32_t t39 = 9682U;

	t39 = (x157^((x158&x159)^x160));

	if (t39 != 14087U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = UINT64_MAX;
	uint16_t x164 = 55U;

	t40 = (x161^((x162&x163)^x164));

	if (t40 != 32712LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 6060426LLU;
	static int64_t x166 = -18145174LL;
	int32_t x167 = INT32_MAX;
	static int16_t x168 = -1;
	static uint64_t t41 = 142060967248LLU;

	t41 = (x165^((x166&x167)^x168));

	if (t41 != 18446744071583606303LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = -1LL;
	static volatile uint64_t t42 = 177549734310802629LLU;

	t42 = (x169^((x170&x171)^x172));

	if (t42 != 18446744062810548177LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	static uint64_t x174 = 1963LLU;
	int16_t x175 = -82;
	volatile int64_t x176 = 3LL;
	volatile uint64_t t43 = 393303830201796LLU;

	t43 = (x173^((x174&x175)^x176));

	if (t43 != 18446744073709549654LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 7001864974890LLU;
	int64_t x178 = 10813168768437LL;
	volatile int8_t x179 = INT8_MAX;
	static uint64_t x180 = UINT64_MAX;

	t44 = (x177^((x178&x179)^x180));

	if (t44 != 18446737071844576736LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 43921539270946092LLU;
	static int64_t x182 = INT64_MAX;
	int8_t x183 = INT8_MIN;
	int64_t x184 = -1LL;
	static volatile uint64_t t45 = 3187812468LLU;

	t45 = (x181^((x182&x183)^x184));

	if (t45 != 9267293576125721939LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MIN;
	uint16_t x188 = 29850U;
	volatile int64_t t46 = 100LL;

	t46 = (x185^((x186&x187)^x188));

	if (t46 != 9223372036854745957LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -428;
	static int8_t x190 = -1;
	int64_t x191 = INT64_MAX;
	uint8_t x192 = UINT8_MAX;
	static int64_t t47 = 120026153321231LL;

	t47 = (x189^((x190&x191)^x192));

	if (t47 != -9223372036854775468LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int64_t x194 = -49931LL;
	volatile int16_t x195 = INT16_MAX;
	static int64_t t48 = -1638243534449LL;

	t48 = (x193^((x194&x195)^x196));

	if (t48 != -9223372036854760203LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 30U;
	uint16_t x199 = UINT16_MAX;
	static int64_t x200 = INT64_MIN;
	uint64_t t49 = 71030712052421124LLU;

	t49 = (x197^((x198&x199)^x200));

	if (t49 != 9223372036854775914LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int32_t x202 = INT32_MIN;
	uint8_t x203 = 2U;
	static volatile int64_t t50 = INT64_MIN;

	t50 = (x201^((x202&x203)^x204));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = 0;
	int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MIN;
	int64_t x208 = -7426269165LL;
	volatile int64_t t51 = -244072368134489LL;

	t51 = (x205^((x206&x207)^x208));

	if (t51 != 9223372029428506643LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 6U;
	uint64_t x210 = 1716LLU;
	uint8_t x211 = 1U;
	uint64_t x212 = 539LLU;

	t52 = (x209^((x210&x211)^x212));

	if (t52 != 541LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = UINT32_MAX;
	volatile int64_t x214 = INT64_MIN;
	static int16_t x216 = -50;

	t53 = (x213^((x214&x215)^x216));

	if (t53 != -4294967247LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 354431723LLU;
	volatile int32_t x218 = INT32_MIN;
	volatile int32_t x219 = -14296;
	int64_t x220 = INT64_MAX;
	volatile uint64_t t54 = 5823096975893LLU;

	t54 = (x217^((x218&x219)^x220));

	if (t54 != 9223372038647827732LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MAX;
	static int16_t x223 = INT16_MIN;
	volatile int16_t x224 = INT16_MAX;
	int64_t t55 = 5509685378045042LL;

	t55 = (x221^((x222&x223)^x224));

	if (t55 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 2578;
	static uint64_t x226 = 15846211623466340LLU;
	int16_t x227 = -1;
	volatile uint64_t t56 = 9144483832LLU;

	t56 = (x225^((x226&x227)^x228));

	if (t56 != 18430897862086082422LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x229 = -252525231;
	int16_t x230 = INT16_MIN;
	volatile int32_t x231 = -35;
	static volatile int64_t x232 = 15402743431939685LL;

	t57 = (x229^((x230&x231)^x232));

	if (t57 != 15402743348757300LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MAX;
	uint64_t x235 = 87895359883638LLU;
	volatile uint64_t t58 = 3681LLU;

	t58 = (x233^((x234&x235)^x236));

	if (t58 != 18446744071562068090LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	int64_t x239 = INT64_MIN;
	volatile uint64_t t59 = 418143723135448291LLU;

	t59 = (x237^((x238&x239)^x240));

	if (t59 != 9223372036846166843LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MIN;
	volatile uint64_t x243 = 163LLU;
	int32_t x244 = 167438;

	t60 = (x241^((x242&x243)^x244));

	if (t60 != 18446744073709384177LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x247 = INT8_MIN;
	static int64_t x248 = -1LL;
	int64_t t61 = 194865LL;

	t61 = (x245^((x246&x247)^x248));

	if (t61 != 94LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 859U;
	int32_t x250 = INT32_MAX;
	volatile int16_t x251 = INT16_MIN;
	static volatile uint32_t x252 = 145639U;
	volatile uint32_t t62 = 233818U;

	t62 = (x249^((x250&x251)^x252));

	if (t62 != 2147335100U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 15U;
	static uint16_t x255 = 28413U;

	t63 = (x253^((x254&x255)^x256));

	if (t63 != -28371) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 15030U;
	static uint32_t x259 = 0U;
	static uint16_t x260 = UINT16_MAX;
	uint32_t t64 = 5921190U;

	t64 = (x257^((x258&x259)^x260));

	if (t64 != 50505U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 467;
	int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	static uint32_t x264 = 472686U;
	volatile int64_t t65 = 213341638957320169LL;

	t65 = (x261^((x262&x263)^x264));

	if (t65 != -9223372036854302787LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 1U;
	int16_t x267 = INT16_MIN;
	int32_t x268 = 9248;
	static volatile uint32_t t66 = 3U;

	t66 = (x265^((x266&x267)^x268));

	if (t66 != 4294943777U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x270 = 0LL;
	int64_t x271 = 82052572502220702LL;
	static uint8_t x272 = UINT8_MAX;
	static int64_t t67 = -11573396876870122LL;

	t67 = (x269^((x270&x271)^x272));

	if (t67 != 128LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = 6LL;
	uint64_t x275 = 86LLU;
	uint8_t x276 = UINT8_MAX;
	uint64_t t68 = 204LLU;

	t68 = (x273^((x274&x275)^x276));

	if (t68 != 26374790798LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x278 = -106;
	static volatile uint8_t x279 = UINT8_MAX;
	static int8_t x280 = INT8_MIN;
	static int32_t t69 = 1;

	t69 = (x277^((x278&x279)^x280));

	if (t69 != -237) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 1U;
	uint32_t x283 = 609921U;
	uint32_t x284 = UINT32_MAX;
	static uint32_t t70 = 245U;

	t70 = (x281^((x282&x283)^x284));

	if (t70 != 2147483646U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	int16_t x286 = -5;
	static volatile uint32_t x287 = 352369554U;
	static uint32_t x288 = 7505883U;
	uint32_t t71 = 1566276069U;

	t71 = (x285^((x286&x287)^x288));

	if (t71 != 3935159241U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = -1;
	int16_t x290 = -4363;
	uint32_t t72 = 13356U;

	t72 = (x289^((x290&x291)^x292));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	static uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;

	t73 = (x293^((x294&x295)^x296));

	if (t73 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = -1;
	volatile int64_t x299 = -1LL;
	int8_t x300 = 0;

	t74 = (x297^((x298&x299)^x300));

	if (t74 != -303026091LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x301 = 12499U;
	uint8_t x303 = 6U;

	t75 = (x301^((x302&x303)^x304));

	if (t75 != 10579899336913LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -15;
	volatile int16_t x307 = -4;
	int64_t x308 = INT64_MAX;

	t76 = (x305^((x306&x307)^x308));

	if (t76 != -9223372036854710288LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x312 = INT8_MAX;
	volatile int64_t t77 = 1814692941023359LL;

	t77 = (x309^((x310&x311)^x312));

	if (t77 != -8LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 118U;
	uint16_t x315 = 138U;
	int64_t x316 = -1LL;
	int64_t t78 = 62978LL;

	t78 = (x313^((x314&x315)^x316));

	if (t78 != -119LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = INT8_MIN;
	volatile uint32_t x320 = 698U;
	static volatile uint32_t t79 = 43984138U;

	t79 = (x317^((x318&x319)^x320));

	if (t79 != 4294966570U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 55791149167204118LLU;
	int32_t x322 = -1;
	uint32_t x323 = UINT32_MAX;
	uint64_t t80 = 5341546582052699LLU;

	t80 = (x321^((x322&x323)^x324));

	if (t80 != 55791151995094911LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x326 = INT32_MIN;
	static volatile int8_t x327 = 8;
	int64_t x328 = INT64_MAX;
	static int64_t t81 = -166754126LL;

	t81 = (x325^((x326&x327)^x328));

	if (t81 != -9223372029707565416LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 57099934017850LLU;
	static int64_t x331 = INT64_MIN;
	uint32_t x332 = 5995097U;

	t82 = (x329^((x330&x331)^x332));

	if (t82 != 9223429136785331043LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -6;
	static uint64_t x335 = 46184242805LLU;
	volatile int64_t x336 = -127LL;

	t83 = (x333^((x334&x335)^x336));

	if (t83 != 18446744027522650853LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	static int16_t x340 = INT16_MIN;

	t84 = (x337^((x338&x339)^x340));

	if (t84 != 32512LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	uint8_t x342 = 49U;
	int32_t x343 = 15474;
	uint32_t x344 = 21U;
	volatile int64_t t85 = -945008132593LL;

	t85 = (x341^((x342&x343)^x344));

	if (t85 != -9223372036854775771LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int64_t x346 = INT64_MIN;
	uint8_t x347 = 0U;
	int8_t x348 = INT8_MIN;

	t86 = (x345^((x346&x347)^x348));

	if (t86 != -2147483521LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint32_t x350 = 1028U;
	static uint64_t x351 = UINT64_MAX;
	uint64_t t87 = 182LLU;

	t87 = (x349^((x350&x351)^x352));

	if (t87 != 18446744073709519927LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x354 = 542509573U;
	static volatile int32_t x355 = 9;
	static volatile int32_t x356 = -1;
	volatile uint32_t t88 = 2340899U;

	t88 = (x353^((x354&x355)^x356));

	if (t88 != 126U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x357 = 3LLU;
	int64_t x358 = -3128LL;
	int64_t x359 = INT64_MAX;
	static uint32_t x360 = UINT32_MAX;
	volatile uint64_t t89 = 5161061019378LLU;

	t89 = (x357^((x358&x359)^x360));

	if (t89 != 9223372032559811636LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 21645925221590603LLU;
	uint64_t x364 = 92454970433LLU;
	uint64_t t90 = 1LLU;

	t90 = (x361^((x362&x363)^x364));

	if (t90 != 9223372129309746241LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -4670;
	uint8_t x368 = 0U;

	t91 = (x365^((x366&x367)^x368));

	if (t91 != -4670) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = 7;
	int32_t x371 = INT32_MIN;
	int16_t x372 = -1;

	t92 = (x369^((x370&x371)^x372));

	if (t92 != 2462) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = 356441;
	static uint64_t x375 = UINT64_MAX;
	uint16_t x376 = UINT16_MAX;
	volatile uint64_t t93 = 7464384630LLU;

	t93 = (x373^((x374&x375)^x376));

	if (t93 != 364377LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 0U;
	uint32_t x378 = 317684598U;
	int16_t x379 = -1;
	int32_t x380 = INT32_MIN;
	volatile uint32_t t94 = 12U;

	t94 = (x377^((x378&x379)^x380));

	if (t94 != 2465168246U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 1;
	int64_t x382 = -204362875245LL;
	volatile int16_t x384 = INT16_MIN;

	t95 = (x381^((x382&x383)^x384));

	if (t95 != -32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = INT8_MIN;
	uint32_t x387 = 7017U;
	uint16_t x388 = 5362U;
	int64_t t96 = 439239297101649LL;

	t96 = (x385^((x386&x387)^x388));

	if (t96 != -4083LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	int64_t x390 = -61622LL;
	int16_t x391 = INT16_MIN;
	int8_t x392 = -5;
	int64_t t97 = -3LL;

	t97 = (x389^((x390&x391)^x392));

	if (t97 != -65532LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MIN;
	volatile uint64_t x394 = 2LLU;
	uint64_t x395 = 1576061676718LLU;
	static int64_t x396 = INT64_MIN;

	t98 = (x393^((x394&x395)^x396));

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x397 = INT32_MIN;
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MAX;
	volatile int64_t x400 = -1LL;
	static int64_t t99 = 53121LL;

	t99 = (x397^((x398&x399)^x400));

	if (t99 != 2147483520LL) { NG(); } else { ; }
	
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

