#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x3 = 3251U;
uint8_t x7 = 0U;
int64_t x11 = -4511438041566692340LL;
int32_t x24 = -1;
static int8_t x32 = INT8_MAX;
int8_t x35 = INT8_MIN;
uint64_t t9 = 6657186287146LLU;
volatile uint64_t t11 = 7889290578879981LLU;
static uint64_t x55 = 1020217844753424LLU;
static int8_t x64 = 22;
int16_t x68 = 0;
int16_t x71 = INT16_MIN;
int64_t x72 = 4530290239222775946LL;
static int8_t x73 = -1;
volatile int8_t x75 = INT8_MIN;
static volatile uint64_t t18 = 212785177LLU;
int32_t x82 = 22047;
static uint16_t x87 = 0U;
static uint8_t x88 = UINT8_MAX;
volatile uint16_t x95 = 1583U;
uint16_t x97 = 206U;
int64_t x104 = 1992LL;
volatile int64_t t23 = 8451870330LL;
volatile uint16_t x110 = UINT16_MAX;
static int16_t x111 = -1;
int64_t x114 = INT64_MIN;
static int8_t x120 = -1;
int32_t x123 = INT32_MIN;
static int32_t x125 = INT32_MIN;
uint8_t x128 = 18U;
int32_t x129 = -1;
int8_t x131 = INT8_MIN;
uint64_t t30 = 36481006LLU;
int32_t x134 = -3;
int16_t x138 = INT16_MAX;
static volatile int32_t t32 = -30017420;
int64_t x143 = INT64_MIN;
int64_t x147 = 8965LL;
int8_t x152 = INT8_MAX;
uint64_t x167 = UINT64_MAX;
volatile uint32_t t39 = 1U;
int32_t x177 = INT32_MIN;
int8_t x178 = INT8_MAX;
volatile int16_t x180 = -176;
int64_t x194 = -111380339864871LL;
volatile int16_t x199 = -1;
int16_t x201 = INT16_MIN;
uint16_t x206 = 1989U;
int16_t x212 = INT16_MIN;
int8_t x222 = 60;
int16_t x230 = -2;
int32_t x241 = -1;
int32_t x242 = -1;
volatile int32_t t52 = -14;
volatile uint32_t t53 = 75831975U;
static volatile uint16_t x249 = 229U;
uint64_t x250 = UINT64_MAX;
int32_t x251 = -1;
static volatile uint64_t t55 = 800342848939747083LLU;
static volatile uint64_t x258 = UINT64_MAX;
static int16_t x267 = -1;
volatile int32_t x285 = INT32_MIN;
int64_t x289 = -1LL;
int64_t t63 = 10117874583754LL;
volatile uint16_t x298 = 745U;
uint32_t x306 = UINT32_MAX;
int32_t x308 = INT32_MIN;
volatile int64_t t67 = -1063880986317064LL;
int32_t x314 = INT32_MAX;
int8_t x320 = INT8_MIN;
volatile int16_t x323 = 666;
static volatile uint32_t t72 = 7U;
static int16_t x343 = INT16_MIN;
volatile int64_t x344 = -34242LL;
int8_t x353 = 13;
volatile int32_t x354 = 5890206;
volatile uint32_t t77 = 103492532U;
int64_t x362 = -1LL;
int32_t x364 = INT32_MIN;
int64_t x369 = -1LL;
volatile int64_t x378 = INT64_MIN;
static int32_t x384 = 3;
int8_t x387 = INT8_MIN;
uint8_t x393 = 3U;
int8_t x395 = -1;
static int32_t t84 = -16266719;
static uint64_t x397 = 1062LLU;
static uint64_t t85 = 35992560LLU;
uint64_t x406 = 223483695301077LLU;
static uint32_t t88 = 53993U;
static int16_t x414 = INT16_MIN;
static volatile int32_t x416 = 2372;
int32_t t89 = -271034;
int16_t x417 = INT16_MAX;
int64_t t90 = -190120806405996344LL;
uint32_t x422 = 11U;
int64_t x424 = INT64_MIN;
int32_t x433 = INT32_MIN;
uint32_t t93 = 3U;
uint32_t x443 = 1083225U;
uint16_t x450 = 22U;
int32_t x466 = -1;
int32_t t98 = 1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static volatile uint16_t x2 = 3U;
	static volatile uint8_t x4 = 1U;
	static volatile int32_t t0 = 4757;

	t0 = ((x1%x2)^(x3-x4));

	if (t0 != 3251) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = 3660363904LL;
	static int8_t x8 = INT8_MIN;
	static volatile int64_t t1 = -107808189LL;

	t1 = ((x5%x6)^(x7-x8));

	if (t1 != -2147483520LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 837536LL;
	uint64_t x10 = 482685040LLU;
	volatile int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 1033373614LLU;

	t2 = ((x9%x10)^(x11-x12));

	if (t2 != 4711933995287804844LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x13 = 692LLU;
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	uint64_t x16 = 256835979LLU;
	static volatile uint64_t t3 = 8229530956LLU;

	t3 = ((x13%x14)^(x15-x16));

	if (t3 != 18446744073452682433LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	int32_t x18 = -82;
	uint64_t x19 = 193295LLU;
	int64_t x20 = INT64_MAX;
	uint64_t t4 = 16601531LLU;

	t4 = ((x17%x18)^(x19-x20));

	if (t4 != 9223372036854582432LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int8_t x22 = 62;
	int8_t x23 = INT8_MIN;
	static int32_t t5 = -183948;

	t5 = ((x21%x22)^(x23-x24));

	if (t5 != -126) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = 587019891LL;
	volatile int16_t x27 = -1;
	static int8_t x28 = INT8_MIN;
	volatile int64_t t6 = -20784981021551LL;

	t6 = ((x25%x26)^(x27-x28));

	if (t6 != -32641LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int16_t x30 = -1;
	uint16_t x31 = 34U;
	int32_t t7 = 0;

	t7 = ((x29%x30)^(x31-x32));

	if (t7 != -93) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -3598757181784374LL;
	static int64_t x34 = INT64_MAX;
	static int64_t x36 = INT64_MIN;
	int64_t t8 = -2063332LL;

	t8 = ((x33%x34)^(x35-x36));

	if (t8 != -9219773279672991414LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	uint64_t x38 = 232745470288LLU;
	int8_t x39 = -25;
	volatile uint32_t x40 = UINT32_MAX;

	t9 = ((x37%x38)^(x39-x40));

	if (t9 != 29034404264LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 9979U;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	uint64_t x44 = 1548121684253531LLU;
	static volatile uint64_t t10 = 335238431215LLU;

	t10 = ((x41%x42)^(x43-x44));

	if (t10 != 9221823915170522334LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = UINT64_MAX;
	static volatile int16_t x51 = 640;
	uint16_t x52 = UINT16_MAX;

	t11 = ((x49%x50)^(x51-x52));

	if (t11 != 64769LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	uint16_t x54 = UINT16_MAX;
	int64_t x56 = INT64_MIN;
	static uint64_t t12 = 545336161384LLU;

	t12 = ((x53%x54)^(x55-x56));

	if (t12 != 9224392254699529327LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	uint32_t x58 = UINT32_MAX;
	uint16_t x59 = 2U;
	int8_t x60 = INT8_MAX;
	volatile uint32_t t13 = 6U;

	t13 = ((x57%x58)^(x59-x60));

	if (t13 != 4294967171U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MAX;
	volatile uint32_t x63 = 54U;
	static uint32_t t14 = 782573099U;

	t14 = ((x61%x62)^(x63-x64));

	if (t14 != 4294967263U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	static uint8_t x66 = 29U;
	int32_t x67 = 14271;
	volatile int64_t t15 = 1920322923LL;

	t15 = ((x65%x66)^(x67-x68));

	if (t15 != -14272LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x69 = 3U;
	int8_t x70 = -1;
	int64_t t16 = 1002805888582LL;

	t16 = ((x69%x70)^(x71-x72));

	if (t16 != -4530290239222808714LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x74 = 29904U;
	int8_t x76 = 10;
	volatile int32_t t17 = -1;

	t17 = ((x73%x74)^(x75-x76));

	if (t17 != 137) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 127U;
	int16_t x78 = INT16_MAX;
	volatile uint64_t x79 = UINT64_MAX;
	int32_t x80 = -1;

	t18 = ((x77%x78)^(x79-x80));

	if (t18 != 127LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -61;
	int64_t x83 = INT64_MIN;
	volatile int16_t x84 = -1;
	int64_t t19 = 94599534528928143LL;

	t19 = ((x81%x82)^(x83-x84));

	if (t19 != 9223372036854775746LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x85 = -161680747LL;
	volatile int8_t x86 = INT8_MAX;
	volatile int64_t t20 = -6593084357660267LL;

	t20 = ((x85%x86)^(x87-x88));

	if (t20 != 160LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MAX;
	volatile int16_t x94 = -1;
	volatile int64_t x96 = -1LL;
	int64_t t21 = 3559LL;

	t21 = ((x93%x94)^(x95-x96));

	if (t21 != 1584LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x98 = INT32_MIN;
	volatile int16_t x99 = INT16_MAX;
	uint64_t x100 = 13049571277922LLU;
	uint64_t t22 = 508770833118896LLU;

	t22 = ((x97%x98)^(x99-x100));

	if (t22 != 18446731024138306387LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 194U;
	static uint32_t x102 = 20918517U;
	uint16_t x103 = 92U;

	t23 = ((x101%x102)^(x103-x104));

	if (t23 != -1962LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = -216518958LL;
	static volatile int32_t x106 = INT32_MIN;
	int8_t x107 = -1;
	volatile uint64_t x108 = 14014464459908LLU;
	static volatile uint64_t t24 = 12191LLU;

	t24 = ((x105%x106)^(x107-x108));

	if (t24 != 14014273476009LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -11075;
	static volatile uint16_t x112 = 1U;
	static int32_t t25 = 55698761;

	t25 = ((x109%x110)^(x111-x112));

	if (t25 != 11075) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	static int8_t x115 = 1;
	static int8_t x116 = INT8_MAX;
	volatile int64_t t26 = -1LL;

	t26 = ((x113%x114)^(x115-x116));

	if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	volatile int32_t x118 = -632727;
	int32_t x119 = INT32_MIN;
	volatile int32_t t27 = 50957;

	t27 = ((x117%x118)^(x119-x120));

	if (t27 != 2147483521) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	static int32_t x122 = INT32_MAX;
	int64_t x124 = -110058LL;
	uint64_t t28 = 2753921LLU;

	t28 = ((x121%x122)^(x123-x124));

	if (t28 != 18446744071562178025LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x126 = 550LLU;
	int64_t x127 = -4910LL;
	uint64_t t29 = 5449LLU;

	t29 = ((x125%x126)^(x127-x128));

	if (t29 != 18446744073709546600LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x130 = 8633385;
	volatile uint64_t x132 = 57229LLU;

	t30 = ((x129%x130)^(x131-x132));

	if (t30 != 57356LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MAX;
	uint8_t x135 = 1U;
	int64_t x136 = -7LL;
	volatile int64_t t31 = -441107793LL;

	t31 = ((x133%x134)^(x135-x136));

	if (t31 != 9LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MAX;
	volatile int8_t x139 = -1;
	volatile int16_t x140 = INT16_MIN;

	t32 = ((x137%x138)^(x139-x140));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = 1836437656895589LLU;
	uint64_t x142 = 624305671LLU;
	int8_t x144 = INT8_MIN;
	uint64_t t33 = 3588LLU;

	t33 = ((x141%x142)^(x143-x144));

	if (t33 != 9223372036927639141LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x145 = 957U;
	int64_t x146 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	int64_t t34 = -3829LL;

	t34 = ((x145%x146)^(x147-x148));

	if (t34 != 41144LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x149 = INT16_MIN;
	int8_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	static volatile uint32_t t35 = 201841U;

	t35 = ((x149%x150)^(x151-x152));

	if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	int64_t x158 = 559731087447473331LL;
	uint64_t x159 = 32721027LLU;
	static uint16_t x160 = UINT16_MAX;
	volatile uint64_t t36 = 7231482305863LLU;

	t36 = ((x157%x158)^(x159-x160));

	if (t36 != 18179069436021539764LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = 157;
	int16_t x163 = INT16_MIN;
	uint32_t x164 = 3U;
	volatile uint32_t t37 = 2130626610U;

	t37 = ((x161%x162)^(x163-x164));

	if (t37 != 32877U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MAX;
	uint8_t x168 = 1U;
	volatile uint64_t t38 = 2454LLU;

	t38 = ((x165%x166)^(x167-x168));

	if (t38 != 126LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	static volatile uint32_t x174 = 12U;
	volatile int16_t x175 = -1;
	uint8_t x176 = UINT8_MAX;

	t39 = ((x173%x174)^(x175-x176));

	if (t39 != 4294967048U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x179 = INT16_MAX;
	static int32_t t40 = 122147216;

	t40 = ((x177%x178)^(x179-x180));

	if (t40 != -32937) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = INT32_MAX;
	volatile int8_t x183 = INT8_MIN;
	uint16_t x184 = 5347U;
	volatile int32_t t41 = -234;

	t41 = ((x181%x182)^(x183-x184));

	if (t41 != -5475) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = 1;
	int32_t x190 = INT32_MIN;
	static uint32_t x191 = 88427U;
	int8_t x192 = INT8_MAX;
	volatile uint32_t t42 = 1649U;

	t42 = ((x189%x190)^(x191-x192));

	if (t42 != 88301U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -1000216LL;
	int32_t x195 = -1;
	static volatile int32_t x196 = 1207;
	int64_t t43 = -134684806392LL;

	t43 = ((x193%x194)^(x195-x196));

	if (t43 != 1001376LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MIN;
	uint8_t x198 = UINT8_MAX;
	int16_t x200 = -4243;
	int32_t t44 = -1901240;

	t44 = ((x197%x198)^(x199-x200));

	if (t44 != -4334) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x202 = INT32_MIN;
	volatile int64_t x203 = INT64_MIN;
	int64_t x204 = -9362620356LL;
	static int64_t t45 = 869530230835616LL;

	t45 = ((x201%x202)^(x203-x204));

	if (t45 != 9223372027492155332LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	int8_t x207 = INT8_MAX;
	int32_t x208 = 365;
	int64_t t46 = 198053298LL;

	t46 = ((x205%x206)^(x207-x208));

	if (t46 != 834LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MIN;
	volatile int64_t t47 = 991502117702868LL;

	t47 = ((x209%x210)^(x211-x212));

	if (t47 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	uint8_t x223 = 0U;
	volatile int32_t x224 = INT32_MAX;
	volatile int32_t t48 = -446296;

	t48 = ((x221%x222)^(x223-x224));

	if (t48 != 2147483641) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x225 = INT32_MIN;
	volatile uint64_t x226 = UINT64_MAX;
	int16_t x227 = -1;
	uint16_t x228 = 78U;
	uint64_t t49 = 2901LLU;

	t49 = ((x225%x226)^(x227-x228));

	if (t49 != 2147483569LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x229 = -3976LL;
	static int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MIN;
	static int64_t t50 = -344032405205597305LL;

	t50 = ((x229%x230)^(x231-x232));

	if (t50 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x233 = 0;
	static volatile int8_t x234 = INT8_MIN;
	int32_t x235 = -3313706;
	int16_t x236 = 3728;
	volatile int32_t t51 = 0;

	t51 = ((x233%x234)^(x235-x236));

	if (t51 != -3317434) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x243 = INT8_MIN;
	static int32_t x244 = INT32_MIN;

	t52 = ((x241%x242)^(x243-x244));

	if (t52 != 2147483520) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MAX;
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = UINT32_MAX;
	volatile int16_t x248 = 3761;

	t53 = ((x245%x246)^(x247-x248));

	if (t53 != 4294938289U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x252 = -1;
	uint64_t t54 = 2376962010468413LLU;

	t54 = ((x249%x250)^(x251-x252));

	if (t54 != 229LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x253 = 631091U;
	uint64_t x254 = 6750237948944LLU;
	int64_t x255 = 634601LL;
	int8_t x256 = INT8_MIN;

	t55 = ((x253%x254)^(x255-x256));

	if (t55 != 3674LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = 1;
	int8_t x259 = INT8_MAX;
	static uint8_t x260 = UINT8_MAX;
	volatile uint64_t t56 = 280128677LLU;

	t56 = ((x257%x258)^(x259-x260));

	if (t56 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = 85946U;
	uint64_t x262 = 231994LLU;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	uint64_t t57 = 61LLU;

	t57 = ((x261%x262)^(x263-x264));

	if (t57 != 9223372036854697914LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = 70U;
	int64_t x266 = -1LL;
	int8_t x268 = -35;
	static volatile int64_t t58 = -25572155329634046LL;

	t58 = ((x265%x266)^(x267-x268));

	if (t58 != 34LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x269 = INT16_MIN;
	int64_t x270 = 55099079457LL;
	int32_t x271 = INT32_MIN;
	int64_t x272 = -2LL;
	static int64_t t59 = -90760794872892571LL;

	t59 = ((x269%x270)^(x271-x272));

	if (t59 != 2147450882LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x273 = 80394;
	int64_t x274 = INT64_MIN;
	int64_t x275 = -1LL;
	volatile int64_t x276 = INT64_MAX;
	int64_t t60 = 87249200691LL;

	t60 = ((x273%x274)^(x275-x276));

	if (t60 != -9223372036854695414LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = 42;
	uint64_t x278 = 69130839259LLU;
	int16_t x279 = INT16_MIN;
	volatile uint16_t x280 = 6084U;
	volatile uint64_t t61 = 94696412LLU;

	t61 = ((x277%x278)^(x279-x280));

	if (t61 != 18446744073709512726LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x286 = 71U;
	int8_t x287 = INT8_MAX;
	uint16_t x288 = 7032U;
	int32_t t62 = -14900915;

	t62 = ((x285%x286)^(x287-x288));

	if (t62 != 6879) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x290 = 3U;
	int16_t x291 = -1;
	static int32_t x292 = INT32_MIN;

	t63 = ((x289%x290)^(x291-x292));

	if (t63 != -2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x294 = 11;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t64 = 2LLU;

	t64 = ((x293%x294)^(x295-x296));

	if (t64 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = UINT64_MAX;
	uint32_t x299 = 900401347U;
	volatile int8_t x300 = INT8_MIN;
	uint64_t t65 = 25112257714LLU;

	t65 = ((x297%x298)^(x299-x300));

	if (t65 != 900401593LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x301 = -101;
	volatile int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = 7U;
	static volatile uint32_t t66 = 184553U;

	t66 = ((x301%x302)^(x303-x304));

	if (t66 != 2147483746U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x305 = INT64_MAX;
	volatile uint32_t x307 = 62166801U;

	t67 = ((x305%x306)^(x307-x308));

	if (t67 != 4232800494LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = -1;
	volatile uint8_t x315 = 116U;
	static uint32_t x316 = UINT32_MAX;
	volatile uint32_t t68 = 94023U;

	t68 = ((x313%x314)^(x315-x316));

	if (t68 != 4294967178U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = UINT8_MAX;
	int32_t x318 = 4436;
	int16_t x319 = -7;
	int32_t t69 = -197;

	t69 = ((x317%x318)^(x319-x320));

	if (t69 != 134) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x321 = UINT64_MAX;
	static int32_t x322 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	static uint64_t t70 = 981917154573995LLU;

	t70 = ((x321%x322)^(x323-x324));

	if (t70 != 2147450213LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x325 = 14;
	volatile int32_t x326 = INT32_MIN;
	volatile uint64_t x327 = 149787703785LLU;
	int32_t x328 = INT32_MIN;
	volatile uint64_t t71 = 60473LLU;

	t71 = ((x325%x326)^(x327-x328));

	if (t71 != 151935187431LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = -1;
	volatile uint32_t x330 = 2222U;
	static uint16_t x331 = 778U;
	int8_t x332 = INT8_MIN;

	t72 = ((x329%x330)^(x331-x332));

	if (t72 != 1909U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x333 = 57U;
	volatile int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t73 = 726858;

	t73 = ((x333%x334)^(x335-x336));

	if (t73 != -32583) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x337 = -178;
	volatile int64_t x338 = 2311048980050575810LL;
	uint32_t x339 = 5U;
	uint8_t x340 = 77U;
	volatile int64_t t74 = -677070329977487LL;

	t74 = ((x337%x338)^(x339-x340));

	if (t74 != -4294967050LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = INT8_MAX;
	int32_t x342 = INT32_MIN;
	volatile int64_t t75 = -1518494736460743665LL;

	t75 = ((x341%x342)^(x343-x344));

	if (t75 != 1469LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x345 = 13141U;
	int16_t x346 = -1;
	int8_t x347 = 0;
	static uint16_t x348 = UINT16_MAX;
	int32_t t76 = -51017829;

	t76 = ((x345%x346)^(x347-x348));

	if (t76 != -65535) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x355 = INT32_MAX;
	uint32_t x356 = 120903515U;

	t77 = ((x353%x354)^(x355-x356));

	if (t77 != 2026580137U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x361 = UINT32_MAX;
	uint64_t x363 = 141205483053041928LLU;
	uint64_t t78 = 948037LLU;

	t78 = ((x361%x362)^(x363-x364));

	if (t78 != 141205485200525576LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	int32_t x372 = INT32_MIN;
	uint64_t t79 = 222918439319LLU;

	t79 = ((x369%x370)^(x371-x372));

	if (t79 != 2147483520LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x377 = UINT32_MAX;
	int8_t x379 = -17;
	int8_t x380 = -1;
	volatile int64_t t80 = 1610258038168029LL;

	t80 = ((x377%x378)^(x379-x380));

	if (t80 != -4294967281LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x381 = UINT8_MAX;
	static int64_t x382 = -1LL;
	static uint64_t x383 = UINT64_MAX;
	uint64_t t81 = 8207002LLU;

	t81 = ((x381%x382)^(x383-x384));

	if (t81 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MAX;
	volatile int16_t x388 = INT16_MAX;
	volatile int32_t t82 = -1;

	t82 = ((x385%x386)^(x387-x388));

	if (t82 != 65409) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x389 = INT8_MAX;
	uint32_t x390 = 712763968U;
	int8_t x391 = INT8_MIN;
	static volatile int32_t x392 = INT32_MIN;
	static uint32_t t83 = 1277U;

	t83 = ((x389%x390)^(x391-x392));

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x394 = INT32_MIN;
	uint8_t x396 = UINT8_MAX;

	t84 = ((x393%x394)^(x395-x396));

	if (t84 != -253) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x398 = INT16_MAX;
	int16_t x399 = -1;
	static int64_t x400 = -1LL;

	t85 = ((x397%x398)^(x399-x400));

	if (t85 != 1062LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 12U;
	int32_t x402 = INT32_MIN;
	static int8_t x403 = INT8_MIN;
	int64_t x404 = -202366150164939LL;
	volatile int64_t t86 = 28213096256809LL;

	t86 = ((x401%x402)^(x403-x404));

	if (t86 != 202366150164807LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x405 = 2644U;
	int16_t x407 = INT16_MIN;
	uint8_t x408 = UINT8_MAX;
	uint64_t t87 = 33777060770LLU;

	t87 = ((x405%x406)^(x407-x408));

	if (t87 != 18446744073709516117LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x409 = UINT16_MAX;
	uint32_t x410 = UINT32_MAX;
	int8_t x411 = INT8_MIN;
	volatile int16_t x412 = 1451;

	t88 = ((x409%x410)^(x411-x412));

	if (t88 != 4294903338U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x413 = INT32_MAX;
	static int16_t x415 = INT16_MAX;

	t89 = ((x413%x414)^(x415-x416));

	if (t89 != 2372) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x418 = INT16_MIN;
	int8_t x419 = INT8_MAX;
	static int64_t x420 = -2372LL;

	t90 = ((x417%x418)^(x419-x420));

	if (t90 != 30268LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x421 = INT8_MIN;
	uint64_t x423 = 81LLU;
	volatile uint64_t t91 = 66864968LLU;

	t91 = ((x421%x422)^(x423-x424));

	if (t91 != 9223372036854775897LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = 0;
	int8_t x426 = INT8_MIN;
	volatile int32_t x427 = 241654422;
	int64_t x428 = 2186716306326943LL;
	volatile int64_t t92 = 2327742LL;

	t92 = ((x425%x426)^(x427-x428));

	if (t92 != -2186716064672521LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x434 = -27;
	static uint32_t x435 = UINT32_MAX;
	uint8_t x436 = 13U;

	t93 = ((x433%x434)^(x435-x436));

	if (t93 != 7U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = INT8_MAX;
	int64_t x438 = 8422238691629764LL;
	int32_t x439 = 1;
	uint64_t x440 = UINT64_MAX;
	static uint64_t t94 = 404LLU;

	t94 = ((x437%x438)^(x439-x440));

	if (t94 != 125LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = INT8_MIN;
	volatile int32_t x442 = -1;
	int64_t x444 = INT64_MAX;
	volatile int64_t t95 = 686870LL;

	t95 = ((x441%x442)^(x443-x444));

	if (t95 != -9223372036853692582LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x449 = -6;
	uint16_t x451 = 722U;
	uint32_t x452 = 17540U;
	static volatile uint32_t t96 = 70440170U;

	t96 = ((x449%x450)^(x451-x452));

	if (t96 != 16820U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = INT16_MAX;
	int16_t x454 = INT16_MIN;
	int8_t x455 = 18;
	uint16_t x456 = UINT16_MAX;
	int32_t t97 = -29478334;

	t97 = ((x453%x454)^(x455-x456));

	if (t97 != -32788) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x465 = UINT8_MAX;
	int8_t x467 = INT8_MIN;
	int32_t x468 = -445;

	t98 = ((x465%x466)^(x467-x468));

	if (t98 != 317) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x469 = -1LL;
	uint16_t x470 = 19U;
	int64_t x471 = -220950583131910LL;
	int16_t x472 = INT16_MIN;
	static volatile int64_t t99 = 748847180637LL;

	t99 = ((x469%x470)^(x471-x472));

	if (t99 != 220950583099141LL) { NG(); } else { ; }
	
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

