#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = INT8_MAX;
uint64_t x4 = UINT64_MAX;
volatile int32_t t0 = -2786973;
int32_t t1 = 1;
volatile uint8_t x23 = 27U;
int8_t x24 = INT8_MAX;
static uint32_t x28 = 11340500U;
int16_t x33 = INT16_MIN;
volatile int32_t x34 = -1;
uint8_t x38 = 103U;
uint64_t x40 = 6365113927283699LLU;
volatile int32_t t6 = -227;
static uint64_t x45 = 1288080350375030630LLU;
int32_t x51 = -1;
int32_t x58 = INT32_MIN;
volatile int32_t t12 = -1;
uint8_t x76 = UINT8_MAX;
int64_t x85 = INT64_MIN;
uint64_t x93 = 925406756545788LLU;
uint32_t x94 = 1671564U;
uint64_t x99 = 0LLU;
static uint64_t x105 = 15685780193236LLU;
static volatile int32_t x107 = 5299;
volatile int32_t t18 = 4322;
int64_t x118 = 1407969097028LL;
int32_t t21 = 70395033;
uint16_t x129 = 11073U;
volatile int32_t t22 = -28828102;
static int16_t x136 = INT16_MAX;
volatile int32_t t23 = 108162;
int16_t x143 = INT16_MAX;
volatile int32_t t25 = -356628;
int64_t x153 = 5030430170148794LL;
int8_t x156 = 3;
volatile int8_t x161 = INT8_MIN;
int16_t x165 = 7969;
volatile uint32_t x170 = 55U;
int32_t t30 = -17715;
volatile uint16_t x178 = 23078U;
uint64_t x182 = 25LLU;
volatile int16_t x190 = INT16_MIN;
int8_t x191 = -1;
static int32_t t34 = 917050;
int8_t x200 = -1;
int8_t x203 = INT8_MIN;
int32_t t38 = 308469;
volatile int32_t x228 = INT32_MIN;
volatile int32_t t41 = 202769;
int64_t x230 = -1LL;
int8_t x232 = INT8_MIN;
uint16_t x235 = UINT16_MAX;
static int8_t x237 = INT8_MIN;
int64_t x249 = INT64_MIN;
static uint16_t x251 = 671U;
int32_t x252 = INT32_MAX;
int16_t x261 = INT16_MIN;
uint64_t x265 = 3354399097669LLU;
uint64_t x276 = UINT64_MAX;
static int32_t x281 = 58036;
volatile int32_t x289 = INT32_MAX;
uint16_t x292 = UINT16_MAX;
uint16_t x301 = 56U;
int32_t x303 = INT32_MIN;
uint8_t x307 = 2U;
int32_t t54 = -24682432;
volatile uint32_t x318 = 11U;
int32_t x333 = -2341280;
int32_t t57 = 113;
int8_t x339 = -1;
int8_t x341 = 0;
volatile int32_t t59 = 1775322;
int32_t x348 = INT32_MAX;
int8_t x352 = INT8_MAX;
volatile uint16_t x365 = 234U;
int16_t x367 = -6140;
uint64_t x379 = 3149071589311LLU;
static int32_t x390 = INT32_MIN;
static uint8_t x397 = 3U;
static volatile int32_t x398 = INT32_MIN;
static int8_t x400 = INT8_MAX;
int16_t x407 = INT16_MAX;
uint32_t x414 = UINT32_MAX;
volatile int32_t t72 = 1;
static volatile uint8_t x418 = UINT8_MAX;
static volatile int32_t x456 = INT32_MIN;
int32_t t79 = -1;
int64_t x469 = INT64_MAX;
static volatile int16_t x478 = 1;
uint32_t x479 = UINT32_MAX;
int8_t x480 = 30;
int32_t x482 = -1;
int64_t x484 = -1LL;
int32_t t86 = -29581;
int64_t x505 = 472LL;
int8_t x507 = INT8_MAX;
volatile uint32_t x521 = UINT32_MAX;
uint32_t x523 = 1U;
int16_t x537 = INT16_MIN;
volatile int32_t x538 = -2797663;
int64_t x540 = INT64_MIN;
int8_t x542 = -9;
static uint64_t x546 = UINT64_MAX;
int16_t x548 = INT16_MAX;
volatile int32_t t97 = -3;
int32_t t98 = -7;
int16_t x564 = -2184;


void f0(void) {
	uint8_t x1 = 17U;
	int16_t x2 = INT16_MIN;

	t0 = (x1<=((x2*x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static int8_t x6 = 0;
	uint32_t x7 = 25U;
	int8_t x8 = -3;

	t1 = (x5<=((x6*x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int16_t x10 = -13;
	volatile int16_t x11 = -1;
	static volatile uint32_t x12 = 1U;
	int32_t t2 = -2507;

	t2 = (x9<=((x10*x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = -1;
	int8_t x22 = -1;
	int32_t t3 = -55;

	t3 = (x21<=((x22*x23)%x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 7535966U;
	uint16_t x26 = 3699U;
	uint16_t x27 = 1U;
	volatile int32_t t4 = 16021;

	t4 = (x25<=((x26*x27)%x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x35 = INT16_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t5 = -281;

	t5 = (x33<=((x34*x35)%x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x37 = 0;
	static int32_t x39 = 14481;

	t6 = (x37<=((x38*x39)%x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = 949;
	static int64_t x42 = -1LL;
	int16_t x43 = INT16_MAX;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t7 = -14383052;

	t7 = (x41<=((x42*x43)%x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x46 = 26877824LL;
	volatile int16_t x47 = -1;
	static int16_t x48 = -1;
	volatile int32_t t8 = -58;

	t8 = (x45<=((x46*x47)%x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = -28;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t9 = 47629909;

	t9 = (x49<=((x50*x51)%x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = INT64_MAX;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = INT8_MIN;
	volatile int32_t t10 = 498381166;

	t10 = (x57<=((x58*x59)%x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 34U;
	uint64_t x66 = 2240206784399581LLU;
	int8_t x67 = -24;
	static uint32_t x68 = UINT32_MAX;
	static int32_t t11 = -29480;

	t11 = (x65<=((x66*x67)%x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x69 = 2U;
	static uint8_t x70 = UINT8_MAX;
	static volatile int16_t x71 = -1;
	volatile int32_t x72 = INT32_MIN;

	t12 = (x69<=((x70*x71)%x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MAX;
	uint32_t x75 = UINT32_MAX;
	volatile int32_t t13 = -1;

	t13 = (x73<=((x74*x75)%x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x86 = 0U;
	uint64_t x87 = 216895944146686LLU;
	volatile uint8_t x88 = UINT8_MAX;
	volatile int32_t t14 = 425;

	t14 = (x85<=((x86*x87)%x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x95 = -27;
	uint16_t x96 = 7U;
	volatile int32_t t15 = -1682799;

	t15 = (x93<=((x94*x95)%x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = 1920U;
	int32_t x100 = -1;
	volatile int32_t t16 = -113087;

	t16 = (x97<=((x98*x99)%x100));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x106 = -1;
	static int16_t x108 = -1;
	int32_t t17 = 52658919;

	t17 = (x105<=((x106*x107)%x108));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x113 = -1;
	int32_t x114 = INT32_MAX;
	volatile uint64_t x115 = 69396217201LLU;
	volatile uint32_t x116 = UINT32_MAX;

	t18 = (x113<=((x114*x115)%x116));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x117 = -1;
	int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MAX;
	int32_t t19 = 94;

	t19 = (x117<=((x118*x119)%x120));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x121 = INT64_MIN;
	static volatile int8_t x122 = -23;
	static int16_t x123 = INT16_MIN;
	int32_t x124 = 401;
	int32_t t20 = -32613;

	t20 = (x121<=((x122*x123)%x124));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x125 = 398U;
	uint8_t x126 = 51U;
	int64_t x127 = -1LL;
	volatile int64_t x128 = INT64_MAX;

	t21 = (x125<=((x126*x127)%x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x130 = -8543251;
	uint8_t x131 = 13U;
	static volatile int8_t x132 = 7;

	t22 = (x129<=((x130*x131)%x132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x133 = UINT64_MAX;
	static int8_t x134 = INT8_MIN;
	uint32_t x135 = 1650314665U;

	t23 = (x133<=((x134*x135)%x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = 25;
	volatile uint16_t x144 = 7U;
	volatile int32_t t24 = -4719874;

	t24 = (x141<=((x142*x143)%x144));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x149 = -1;
	static int8_t x150 = -1;
	int32_t x151 = -112122;
	int16_t x152 = INT16_MIN;

	t25 = (x149<=((x150*x151)%x152));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x154 = 2236796402064LL;
	int8_t x155 = INT8_MAX;
	static int32_t t26 = -14386264;

	t26 = (x153<=((x154*x155)%x156));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = INT16_MIN;
	volatile int16_t x158 = -25;
	static uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MIN;
	volatile int32_t t27 = -3;

	t27 = (x157<=((x158*x159)%x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x162 = -10;
	uint64_t x163 = UINT64_MAX;
	volatile uint32_t x164 = 1U;
	volatile int32_t t28 = -1;

	t28 = (x161<=((x162*x163)%x164));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x166 = INT16_MIN;
	uint8_t x167 = UINT8_MAX;
	int16_t x168 = -1;
	volatile int32_t t29 = 734122354;

	t29 = (x165<=((x166*x167)%x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x169 = UINT8_MAX;
	static volatile uint64_t x171 = 850138089046757661LLU;
	int64_t x172 = 253304782802608057LL;

	t30 = (x169<=((x170*x171)%x172));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x177 = -1LL;
	uint16_t x179 = 4U;
	volatile uint64_t x180 = 62LLU;
	volatile int32_t t31 = -1;

	t31 = (x177<=((x178*x179)%x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x181 = -1;
	static uint8_t x183 = 3U;
	volatile uint8_t x184 = 11U;
	volatile int32_t t32 = -5409957;

	t32 = (x181<=((x182*x183)%x184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x185 = 118067104838LLU;
	static int8_t x186 = 2;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t33 = 115163426;

	t33 = (x185<=((x186*x187)%x188));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x189 = -10999243;
	volatile int32_t x192 = INT32_MIN;

	t34 = (x189<=((x190*x191)%x192));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = INT32_MIN;
	static uint16_t x194 = 63U;
	int8_t x195 = 4;
	int8_t x196 = -1;
	volatile int32_t t35 = -1;

	t35 = (x193<=((x194*x195)%x196));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x197 = INT32_MIN;
	static uint8_t x198 = 2U;
	volatile uint16_t x199 = 2058U;
	volatile int32_t t36 = -400;

	t36 = (x197<=((x198*x199)%x200));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = -986360634577473LL;
	static int8_t x204 = INT8_MIN;
	static int32_t t37 = 3;

	t37 = (x201<=((x202*x203)%x204));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x209 = 65369371U;
	static int16_t x210 = INT16_MIN;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;

	t38 = (x209<=((x210*x211)%x212));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x213 = 104605391262294923LLU;
	uint64_t x214 = 52LLU;
	int64_t x215 = -1LL;
	int32_t x216 = -1;
	int32_t t39 = 6;

	t39 = (x213<=((x214*x215)%x216));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x217 = 22937U;
	static volatile uint16_t x218 = UINT16_MAX;
	int64_t x219 = 55619091207LL;
	int8_t x220 = 1;
	volatile int32_t t40 = -40;

	t40 = (x217<=((x218*x219)%x220));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x225 = INT64_MIN;
	uint64_t x226 = 65163660889869LLU;
	int32_t x227 = INT32_MIN;

	t41 = (x225<=((x226*x227)%x228));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x229 = -1;
	int64_t x231 = INT64_MAX;
	volatile int32_t t42 = -944277523;

	t42 = (x229<=((x230*x231)%x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x233 = INT32_MIN;
	volatile uint32_t x234 = UINT32_MAX;
	int8_t x236 = -39;
	static volatile int32_t t43 = 1;

	t43 = (x233<=((x234*x235)%x236));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x238 = 15;
	int64_t x239 = -1LL;
	int32_t x240 = -1;
	int32_t t44 = -384437084;

	t44 = (x237<=((x238*x239)%x240));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x250 = 6164868776252LL;
	volatile int32_t t45 = -623676351;

	t45 = (x249<=((x250*x251)%x252));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x262 = 73701LLU;
	int8_t x263 = INT8_MAX;
	int16_t x264 = -5224;
	volatile int32_t t46 = -43815841;

	t46 = (x261<=((x262*x263)%x264));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x266 = 16174758370LLU;
	uint8_t x267 = 1U;
	int64_t x268 = 5349421036780113LL;
	int32_t t47 = 58;

	t47 = (x265<=((x266*x267)%x268));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x269 = -1;
	uint64_t x270 = 103541760LLU;
	int32_t x271 = 7629;
	volatile uint64_t x272 = UINT64_MAX;
	int32_t t48 = -661436579;

	t48 = (x269<=((x270*x271)%x272));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x273 = 27948726U;
	volatile int32_t x274 = -1;
	int64_t x275 = -1LL;
	volatile int32_t t49 = -84828;

	t49 = (x273<=((x274*x275)%x276));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x277 = 1U;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = -1;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t50 = 3;

	t50 = (x277<=((x278*x279)%x280));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x282 = 2772U;
	uint8_t x283 = 3U;
	uint64_t x284 = 464160LLU;
	volatile int32_t t51 = 4414250;

	t51 = (x281<=((x282*x283)%x284));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x290 = -1LL;
	uint8_t x291 = UINT8_MAX;
	int32_t t52 = -8;

	t52 = (x289<=((x290*x291)%x292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x302 = 3LLU;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t53 = -12131;

	t53 = (x301<=((x302*x303)%x304));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x305 = 4985;
	volatile uint16_t x306 = UINT16_MAX;
	int16_t x308 = INT16_MIN;

	t54 = (x305<=((x306*x307)%x308));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x317 = 20462U;
	uint16_t x319 = UINT16_MAX;
	uint16_t x320 = 144U;
	int32_t t55 = 1720;

	t55 = (x317<=((x318*x319)%x320));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = -70152314710741LL;
	static volatile int8_t x331 = INT8_MIN;
	static int8_t x332 = INT8_MIN;
	int32_t t56 = 118801;

	t56 = (x329<=((x330*x331)%x332));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x334 = 12674817937LLU;
	volatile uint8_t x335 = UINT8_MAX;
	static volatile uint16_t x336 = 3703U;

	t57 = (x333<=((x334*x335)%x336));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x337 = 1880U;
	int32_t x338 = -1;
	static int32_t x340 = -27572;
	int32_t t58 = -177029;

	t58 = (x337<=((x338*x339)%x340));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x342 = UINT64_MAX;
	static int8_t x343 = -1;
	static int32_t x344 = 889428810;

	t59 = (x341<=((x342*x343)%x344));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x345 = INT64_MIN;
	int8_t x346 = -2;
	int8_t x347 = -13;
	volatile int32_t t60 = 4;

	t60 = (x345<=((x346*x347)%x348));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x349 = UINT16_MAX;
	volatile uint16_t x350 = UINT16_MAX;
	static uint8_t x351 = 1U;
	volatile int32_t t61 = -1;

	t61 = (x349<=((x350*x351)%x352));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x357 = -6;
	uint16_t x358 = 434U;
	volatile uint16_t x359 = 94U;
	int16_t x360 = INT16_MIN;
	int32_t t62 = -46831;

	t62 = (x357<=((x358*x359)%x360));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x366 = INT16_MAX;
	uint16_t x368 = 23U;
	volatile int32_t t63 = -641083;

	t63 = (x365<=((x366*x367)%x368));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x373 = -1LL;
	int16_t x374 = 11;
	int32_t x375 = 4928;
	uint8_t x376 = UINT8_MAX;
	int32_t t64 = -2207;

	t64 = (x373<=((x374*x375)%x376));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x377 = 9165098LLU;
	static int8_t x378 = -1;
	uint8_t x380 = UINT8_MAX;
	int32_t t65 = -4033;

	t65 = (x377<=((x378*x379)%x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x385 = INT64_MIN;
	uint64_t x386 = 2094063LLU;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t66 = -2;

	t66 = (x385<=((x386*x387)%x388));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x389 = UINT16_MAX;
	uint64_t x391 = 81068596LLU;
	int16_t x392 = -1;
	int32_t t67 = -465;

	t67 = (x389<=((x390*x391)%x392));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x393 = INT8_MAX;
	uint32_t x394 = 555U;
	static int16_t x395 = INT16_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t68 = -5822425;

	t68 = (x393<=((x394*x395)%x396));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x399 = 20602577775LLU;
	int32_t t69 = -1287082;

	t69 = (x397<=((x398*x399)%x400));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x401 = 4983161147643925511LLU;
	int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MIN;
	int32_t t70 = -977473111;

	t70 = (x401<=((x402*x403)%x404));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x405 = 55435LLU;
	volatile int8_t x406 = -1;
	uint8_t x408 = 9U;
	volatile int32_t t71 = 13;

	t71 = (x405<=((x406*x407)%x408));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int16_t x415 = 3767;
	int32_t x416 = 11;

	t72 = (x413<=((x414*x415)%x416));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x417 = INT32_MIN;
	volatile uint32_t x419 = 437840031U;
	uint8_t x420 = 11U;
	int32_t t73 = -975606596;

	t73 = (x417<=((x418*x419)%x420));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x421 = 250LL;
	volatile int8_t x422 = 7;
	static uint16_t x423 = 7U;
	static int8_t x424 = -1;
	volatile int32_t t74 = -412304786;

	t74 = (x421<=((x422*x423)%x424));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x429 = -46845860;
	uint64_t x430 = 633812948612LLU;
	static int32_t x431 = -97335;
	int8_t x432 = INT8_MIN;
	volatile int32_t t75 = -63331315;

	t75 = (x429<=((x430*x431)%x432));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x433 = 26970790025LLU;
	int8_t x434 = -1;
	uint32_t x435 = UINT32_MAX;
	uint64_t x436 = 3721LLU;
	int32_t t76 = 819558837;

	t76 = (x433<=((x434*x435)%x436));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x449 = INT64_MAX;
	static int8_t x450 = INT8_MIN;
	uint16_t x451 = UINT16_MAX;
	uint32_t x452 = 578676351U;
	volatile int32_t t77 = -16;

	t77 = (x449<=((x450*x451)%x452));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x453 = -942971623;
	int16_t x454 = INT16_MIN;
	int16_t x455 = INT16_MIN;
	volatile int32_t t78 = -352;

	t78 = (x453<=((x454*x455)%x456));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x457 = INT64_MIN;
	int32_t x458 = INT32_MAX;
	volatile int8_t x459 = 0;
	static uint64_t x460 = 19LLU;

	t79 = (x457<=((x458*x459)%x460));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x461 = 26332487659LLU;
	volatile uint16_t x462 = UINT16_MAX;
	static int16_t x463 = -1;
	int8_t x464 = -1;
	int32_t t80 = -71558;

	t80 = (x461<=((x462*x463)%x464));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x465 = INT16_MIN;
	static uint8_t x466 = 51U;
	int32_t x467 = -1;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t81 = -19;

	t81 = (x465<=((x466*x467)%x468));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x470 = 508951753LLU;
	int64_t x471 = INT64_MIN;
	int16_t x472 = INT16_MAX;
	int32_t t82 = 116235;

	t82 = (x469<=((x470*x471)%x472));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x477 = 2654315137LL;
	int32_t t83 = 1374;

	t83 = (x477<=((x478*x479)%x480));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x481 = 12822U;
	uint16_t x483 = UINT16_MAX;
	int32_t t84 = -44239349;

	t84 = (x481<=((x482*x483)%x484));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x485 = -1LL;
	volatile int8_t x486 = INT8_MAX;
	volatile uint16_t x487 = 37U;
	int16_t x488 = 108;
	volatile int32_t t85 = -152;

	t85 = (x485<=((x486*x487)%x488));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x489 = INT64_MAX;
	int64_t x490 = -69169LL;
	int16_t x491 = INT16_MAX;
	volatile int8_t x492 = INT8_MIN;

	t86 = (x489<=((x490*x491)%x492));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x493 = -28;
	static int8_t x494 = INT8_MIN;
	static int8_t x495 = INT8_MAX;
	static int8_t x496 = INT8_MAX;
	volatile int32_t t87 = 15;

	t87 = (x493<=((x494*x495)%x496));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x497 = INT16_MAX;
	int64_t x498 = -706123342994098LL;
	int8_t x499 = INT8_MIN;
	int64_t x500 = INT64_MIN;
	volatile int32_t t88 = 322438;

	t88 = (x497<=((x498*x499)%x500));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x501 = 8U;
	uint32_t x502 = UINT32_MAX;
	int16_t x503 = -1;
	volatile int32_t x504 = -61;
	volatile int32_t t89 = -6414;

	t89 = (x501<=((x502*x503)%x504));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x506 = 1;
	uint32_t x508 = UINT32_MAX;
	static volatile int32_t t90 = -195853897;

	t90 = (x505<=((x506*x507)%x508));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x522 = UINT64_MAX;
	static volatile int8_t x524 = INT8_MIN;
	volatile int32_t t91 = 24;

	t91 = (x521<=((x522*x523)%x524));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x525 = 10373LLU;
	static int64_t x526 = -1LL;
	int32_t x527 = -10426111;
	static int8_t x528 = INT8_MIN;
	int32_t t92 = -2;

	t92 = (x525<=((x526*x527)%x528));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x533 = INT8_MIN;
	uint8_t x534 = UINT8_MAX;
	static int32_t x535 = -2632724;
	static int32_t x536 = -4242;
	int32_t t93 = 1;

	t93 = (x533<=((x534*x535)%x536));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x539 = UINT32_MAX;
	int32_t t94 = -31659473;

	t94 = (x537<=((x538*x539)%x540));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x541 = 61LLU;
	volatile int16_t x543 = 9;
	int16_t x544 = INT16_MIN;
	static volatile int32_t t95 = 68019605;

	t95 = (x541<=((x542*x543)%x544));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x545 = 14;
	volatile int16_t x547 = INT16_MIN;
	int32_t t96 = -4839273;

	t96 = (x545<=((x546*x547)%x548));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x549 = INT64_MIN;
	int32_t x550 = -1;
	uint8_t x551 = 2U;
	uint8_t x552 = 57U;

	t97 = (x549<=((x550*x551)%x552));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x557 = 11;
	static int32_t x558 = INT32_MAX;
	uint32_t x559 = 13879510U;
	int8_t x560 = 1;

	t98 = (x557<=((x558*x559)%x560));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x561 = INT16_MIN;
	static int16_t x562 = -1;
	static int16_t x563 = 13;
	int32_t t99 = -315378;

	t99 = (x561<=((x562*x563)%x564));

	if (t99 != 1) { NG(); } else { ; }
	
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

