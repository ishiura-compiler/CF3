#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -201832265;
static uint64_t x10 = 22136460LLU;
int32_t x15 = INT32_MAX;
volatile uint16_t x17 = 592U;
int8_t x18 = INT8_MAX;
uint16_t x20 = 6U;
static int32_t t3 = 0;
volatile uint32_t x35 = UINT32_MAX;
static uint16_t x36 = UINT16_MAX;
uint16_t x46 = UINT16_MAX;
volatile int32_t t7 = 408;
int32_t x56 = -1;
int8_t x62 = INT8_MIN;
int32_t x63 = -3;
uint64_t x70 = 10641LLU;
uint32_t x72 = 238U;
int8_t x75 = -12;
int16_t x79 = INT16_MIN;
static int8_t x92 = -1;
static int16_t x93 = INT16_MAX;
uint16_t x96 = UINT16_MAX;
int16_t x105 = INT16_MAX;
static uint32_t x113 = UINT32_MAX;
int32_t t17 = -7843;
volatile int8_t x126 = INT8_MIN;
static int32_t t18 = -9532;
volatile uint64_t x133 = 19801573933201LLU;
volatile int32_t t21 = 13245193;
int8_t x147 = INT8_MIN;
int64_t x150 = -2353313LL;
int8_t x158 = -1;
static int32_t t24 = -4673;
int16_t x161 = -2157;
volatile uint64_t x165 = 123LLU;
uint16_t x170 = UINT16_MAX;
int32_t x174 = -9;
uint32_t x177 = 3413027U;
int32_t x178 = 1684;
volatile int32_t t29 = -64783;
static uint16_t x181 = UINT16_MAX;
int16_t x191 = -1;
static uint8_t x202 = 1U;
volatile int32_t t35 = -13487;
volatile int8_t x208 = INT8_MIN;
uint16_t x210 = 0U;
uint64_t x212 = 4457360264493506501LLU;
int8_t x215 = INT8_MIN;
uint8_t x216 = 3U;
int32_t x218 = INT32_MAX;
int32_t t40 = 56018;
volatile int32_t t41 = 96775062;
int16_t x233 = INT16_MIN;
int8_t x235 = 50;
int32_t t42 = -3691256;
int32_t t43 = -14594038;
static int32_t t44 = -13663;
int64_t x255 = 3737LL;
uint8_t x257 = 15U;
int16_t x272 = INT16_MIN;
int8_t x274 = 4;
volatile int32_t t51 = -1803902;
int64_t x278 = INT64_MAX;
int8_t x284 = -1;
static uint8_t x292 = 1U;
int32_t t56 = 255140;
int32_t x301 = 128;
int32_t t57 = 1231260;
volatile int32_t t58 = 2;
int16_t x313 = INT16_MAX;
int8_t x318 = INT8_MIN;
volatile int32_t t60 = 11869;
static int8_t x330 = -1;
int32_t x331 = -65026;
volatile int64_t x333 = -1158887755395112118LL;
uint32_t x336 = 48U;
volatile int32_t t63 = -94;
int16_t x338 = INT16_MAX;
uint8_t x339 = 9U;
uint16_t x340 = 1U;
int8_t x343 = INT8_MIN;
uint16_t x345 = 28U;
int8_t x361 = -29;
int32_t t69 = -237629906;
int16_t x381 = INT16_MAX;
int32_t x382 = -1;
volatile int8_t x385 = -1;
int64_t x388 = INT64_MAX;
static int16_t x395 = -1;
int32_t x396 = INT32_MIN;
int8_t x397 = INT8_MIN;
volatile int16_t x423 = INT16_MIN;
static int8_t x426 = INT8_MIN;
uint8_t x433 = 92U;
static int8_t x435 = INT8_MIN;
volatile uint16_t x437 = UINT16_MAX;
uint16_t x438 = UINT16_MAX;
uint64_t x440 = 38844238LLU;
int32_t t85 = -116877;
volatile int8_t x454 = INT8_MIN;
uint64_t x465 = UINT64_MAX;
int8_t x466 = 19;
static volatile uint8_t x482 = 1U;
uint16_t x495 = 37U;
static uint64_t x498 = 4012383835939040LLU;
int32_t t97 = -1;
static int64_t x516 = -1LL;
int32_t t99 = 8252;


void f0(void) {
	uint16_t x1 = 1U;
	int64_t x2 = -38386LL;
	int16_t x3 = -1;
	uint64_t x4 = UINT64_MAX;

	t0 = (x1<=((x2*x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	int32_t x11 = 1821;
	static volatile int64_t x12 = INT64_MIN;
	int32_t t1 = 27647099;

	t1 = (x9<=((x10*x11)==x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 23736U;
	uint32_t x14 = UINT32_MAX;
	volatile int64_t x16 = -14865868926019474LL;
	volatile int32_t t2 = -1;

	t2 = (x13<=((x14*x15)==x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x19 = UINT64_MAX;

	t3 = (x17<=((x18*x19)==x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x25 = INT8_MIN;
	volatile int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MIN;
	uint64_t x28 = 6395673533LLU;
	volatile int32_t t4 = -159;

	t4 = (x25<=((x26*x27)==x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 1099339U;
	volatile int32_t t5 = -288321248;

	t5 = (x33<=((x34*x35)==x36));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x37 = 0LL;
	uint32_t x38 = 0U;
	static uint8_t x39 = 31U;
	int32_t x40 = -46487632;
	int32_t t6 = 2138549;

	t6 = (x37<=((x38*x39)==x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = 19U;
	int32_t x47 = -1;
	int32_t x48 = INT32_MAX;

	t7 = (x45<=((x46*x47)==x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x53 = INT8_MAX;
	int8_t x54 = -21;
	uint64_t x55 = 842327LLU;
	int32_t t8 = 0;

	t8 = (x53<=((x54*x55)==x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x61 = 1U;
	volatile uint16_t x64 = 10U;
	volatile int32_t t9 = -1043410458;

	t9 = (x61<=((x62*x63)==x64));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = 14;
	static volatile int16_t x71 = INT16_MAX;
	int32_t t10 = -319725661;

	t10 = (x69<=((x70*x71)==x72));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x73 = INT16_MIN;
	uint16_t x74 = 1653U;
	volatile int16_t x76 = -1;
	static volatile int32_t t11 = 39;

	t11 = (x73<=((x74*x75)==x76));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x77 = 5U;
	static uint8_t x78 = UINT8_MAX;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t12 = -126;

	t12 = (x77<=((x78*x79)==x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x89 = 0;
	uint64_t x90 = 1261LLU;
	volatile int32_t x91 = INT32_MIN;
	volatile int32_t t13 = -1;

	t13 = (x89<=((x90*x91)==x92));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x94 = INT16_MIN;
	uint16_t x95 = 0U;
	volatile int32_t t14 = 1729;

	t14 = (x93<=((x94*x95)==x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x97 = INT8_MAX;
	volatile uint16_t x98 = 43U;
	uint64_t x99 = 91174024439575264LLU;
	int16_t x100 = INT16_MAX;
	int32_t t15 = 2063096;

	t15 = (x97<=((x98*x99)==x100));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x106 = -1;
	uint8_t x107 = UINT8_MAX;
	static int32_t x108 = -1;
	volatile int32_t t16 = -1717965;

	t16 = (x105<=((x106*x107)==x108));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x114 = -186135;
	volatile uint32_t x115 = 17595762U;
	int64_t x116 = INT64_MIN;

	t17 = (x113<=((x114*x115)==x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x125 = 5U;
	int16_t x127 = -4931;
	uint8_t x128 = UINT8_MAX;

	t18 = (x125<=((x126*x127)==x128));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MIN;
	volatile uint16_t x131 = UINT16_MAX;
	volatile int64_t x132 = -1LL;
	static int32_t t19 = -1060240650;

	t19 = (x129<=((x130*x131)==x132));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 437953915U;
	static volatile uint16_t x136 = 1U;
	int32_t t20 = -1317;

	t20 = (x133<=((x134*x135)==x136));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	volatile uint64_t x143 = 3257414737694784441LLU;
	int32_t x144 = INT32_MIN;

	t21 = (x141<=((x142*x143)==x144));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = -1LL;
	int16_t x146 = INT16_MIN;
	int32_t x148 = -4294;
	static volatile int32_t t22 = 12819083;

	t22 = (x145<=((x146*x147)==x148));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x149 = INT16_MIN;
	static int8_t x151 = INT8_MAX;
	volatile uint64_t x152 = 14939713882690662LLU;
	volatile int32_t t23 = 253095;

	t23 = (x149<=((x150*x151)==x152));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x157 = 0;
	int8_t x159 = INT8_MIN;
	static int64_t x160 = INT64_MIN;

	t24 = (x157<=((x158*x159)==x160));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x162 = 33;
	int64_t x163 = -253LL;
	static int64_t x164 = -1LL;
	int32_t t25 = 168;

	t25 = (x161<=((x162*x163)==x164));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x166 = 1U;
	uint64_t x167 = UINT64_MAX;
	uint16_t x168 = 2396U;
	int32_t t26 = -149732561;

	t26 = (x165<=((x166*x167)==x168));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x169 = 234U;
	static volatile int8_t x171 = INT8_MIN;
	int16_t x172 = -1;
	volatile int32_t t27 = 22;

	t27 = (x169<=((x170*x171)==x172));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x173 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t28 = 72;

	t28 = (x173<=((x174*x175)==x176));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x179 = 3;
	uint32_t x180 = 52134071U;

	t29 = (x177<=((x178*x179)==x180));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x182 = UINT8_MAX;
	volatile int8_t x183 = INT8_MAX;
	int32_t x184 = -3;
	volatile int32_t t30 = -2351;

	t30 = (x181<=((x182*x183)==x184));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x185 = 16LL;
	uint16_t x186 = 305U;
	uint32_t x187 = 673U;
	uint8_t x188 = 12U;
	volatile int32_t t31 = -22;

	t31 = (x185<=((x186*x187)==x188));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x189 = 2011928217417634363LLU;
	int8_t x190 = -1;
	int16_t x192 = INT16_MAX;
	static int32_t t32 = 4599;

	t32 = (x189<=((x190*x191)==x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x193 = INT8_MIN;
	uint8_t x194 = UINT8_MAX;
	uint64_t x195 = UINT64_MAX;
	static uint16_t x196 = 7U;
	volatile int32_t t33 = -71;

	t33 = (x193<=((x194*x195)==x196));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x197 = UINT64_MAX;
	static volatile uint64_t x198 = 31543499388LLU;
	int32_t x199 = -1;
	int32_t x200 = INT32_MIN;
	volatile int32_t t34 = -6887;

	t34 = (x197<=((x198*x199)==x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x201 = 605396731LL;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 37U;

	t35 = (x201<=((x202*x203)==x204));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x205 = -1;
	int16_t x206 = INT16_MAX;
	uint16_t x207 = 20131U;
	int32_t t36 = 244;

	t36 = (x205<=((x206*x207)==x208));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x209 = -7249622104774402LL;
	uint8_t x211 = 28U;
	volatile int32_t t37 = 17582;

	t37 = (x209<=((x210*x211)==x212));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x213 = INT16_MAX;
	int8_t x214 = INT8_MIN;
	static int32_t t38 = 458;

	t38 = (x213<=((x214*x215)==x216));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x217 = 68721006LLU;
	static int64_t x219 = 422LL;
	int64_t x220 = -17LL;
	int32_t t39 = -506394;

	t39 = (x217<=((x218*x219)==x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = 772;
	uint8_t x222 = 2U;
	uint64_t x223 = 117235339LLU;
	volatile uint16_t x224 = UINT16_MAX;

	t40 = (x221<=((x222*x223)==x224));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x229 = UINT8_MAX;
	int64_t x230 = -1LL;
	int64_t x231 = 96LL;
	int64_t x232 = -132991374195846374LL;

	t41 = (x229<=((x230*x231)==x232));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x234 = -4282163687929736LL;
	uint64_t x236 = UINT64_MAX;

	t42 = (x233<=((x234*x235)==x236));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x237 = -1;
	int8_t x238 = INT8_MAX;
	static uint32_t x239 = UINT32_MAX;
	int32_t x240 = -21;

	t43 = (x237<=((x238*x239)==x240));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x241 = INT64_MIN;
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x243 = -1508998LL;
	volatile int16_t x244 = -8233;

	t44 = (x241<=((x242*x243)==x244));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x249 = UINT8_MAX;
	static int32_t x250 = -1;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t45 = 67050;

	t45 = (x249<=((x250*x251)==x252));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x253 = 3638882475994LLU;
	uint64_t x254 = UINT64_MAX;
	static int64_t x256 = INT64_MIN;
	int32_t t46 = 0;

	t46 = (x253<=((x254*x255)==x256));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x258 = 262546358U;
	volatile int16_t x259 = INT16_MIN;
	uint8_t x260 = UINT8_MAX;
	int32_t t47 = -2006874;

	t47 = (x257<=((x258*x259)==x260));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = UINT16_MAX;
	static uint32_t x262 = UINT32_MAX;
	uint16_t x263 = 28U;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t48 = -144437;

	t48 = (x261<=((x262*x263)==x264));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x265 = -1;
	int32_t x266 = -6225;
	int8_t x267 = INT8_MAX;
	int64_t x268 = -623LL;
	int32_t t49 = 384644;

	t49 = (x265<=((x266*x267)==x268));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x269 = 15;
	int64_t x270 = -1LL;
	static uint32_t x271 = 1217411U;
	int32_t t50 = -6910028;

	t50 = (x269<=((x270*x271)==x272));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = INT16_MIN;
	uint16_t x275 = 12241U;
	static uint64_t x276 = 0LLU;

	t51 = (x273<=((x274*x275)==x276));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x277 = UINT64_MAX;
	int8_t x279 = -1;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t52 = -251634803;

	t52 = (x277<=((x278*x279)==x280));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x281 = INT32_MAX;
	int8_t x282 = -4;
	static uint8_t x283 = 9U;
	volatile int32_t t53 = -188448019;

	t53 = (x281<=((x282*x283)==x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = -1;
	int8_t x291 = -3;
	int32_t t54 = -17487801;

	t54 = (x289<=((x290*x291)==x292));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x293 = 3;
	int8_t x294 = 13;
	static int16_t x295 = 2;
	uint32_t x296 = 29U;
	int32_t t55 = 7135575;

	t55 = (x293<=((x294*x295)==x296));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x297 = -1;
	int64_t x298 = 11346851LL;
	int16_t x299 = -2894;
	int32_t x300 = -1;

	t56 = (x297<=((x298*x299)==x300));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x302 = INT8_MAX;
	static uint64_t x303 = UINT64_MAX;
	uint64_t x304 = 19841225LLU;

	t57 = (x301<=((x302*x303)==x304));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x305 = 37U;
	static volatile int8_t x306 = 2;
	static uint16_t x307 = UINT16_MAX;
	uint64_t x308 = 989709257LLU;

	t58 = (x305<=((x306*x307)==x308));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x314 = 351U;
	volatile uint8_t x315 = UINT8_MAX;
	int32_t x316 = -1;
	volatile int32_t t59 = -2451;

	t59 = (x313<=((x314*x315)==x316));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x317 = UINT16_MAX;
	int64_t x319 = -1LL;
	volatile int8_t x320 = INT8_MAX;

	t60 = (x317<=((x318*x319)==x320));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x321 = -1;
	volatile int16_t x322 = -1;
	int64_t x323 = INT64_MAX;
	volatile int32_t x324 = -1;
	volatile int32_t t61 = -1;

	t61 = (x321<=((x322*x323)==x324));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = INT32_MAX;
	uint16_t x332 = 14397U;
	volatile int32_t t62 = 7;

	t62 = (x329<=((x330*x331)==x332));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x334 = INT8_MIN;
	volatile uint64_t x335 = UINT64_MAX;

	t63 = (x333<=((x334*x335)==x336));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x337 = INT8_MIN;
	static volatile int32_t t64 = 2680;

	t64 = (x337<=((x338*x339)==x340));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x341 = INT64_MIN;
	volatile int16_t x342 = 139;
	uint16_t x344 = 23110U;
	volatile int32_t t65 = 5328877;

	t65 = (x341<=((x342*x343)==x344));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x346 = UINT8_MAX;
	uint64_t x347 = UINT64_MAX;
	static uint32_t x348 = 5U;
	volatile int32_t t66 = -25032;

	t66 = (x345<=((x346*x347)==x348));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x353 = 44;
	uint16_t x354 = 1676U;
	uint64_t x355 = 61117942LLU;
	uint16_t x356 = UINT16_MAX;
	int32_t t67 = 51677;

	t67 = (x353<=((x354*x355)==x356));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x357 = -31;
	static int8_t x358 = -2;
	static int64_t x359 = 29367LL;
	volatile uint16_t x360 = 6340U;
	volatile int32_t t68 = 21605;

	t68 = (x357<=((x358*x359)==x360));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x362 = 20492600U;
	int64_t x363 = -1LL;
	volatile int8_t x364 = -1;

	t69 = (x361<=((x362*x363)==x364));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x365 = 27108U;
	int32_t x366 = -1;
	int16_t x367 = INT16_MAX;
	uint16_t x368 = 36U;
	int32_t t70 = -54522187;

	t70 = (x365<=((x366*x367)==x368));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x373 = 2566101451691586852LL;
	int64_t x374 = 2LL;
	volatile uint8_t x375 = 3U;
	int32_t x376 = 1;
	int32_t t71 = 55258;

	t71 = (x373<=((x374*x375)==x376));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x377 = 40U;
	volatile int16_t x378 = 447;
	uint8_t x379 = UINT8_MAX;
	static int16_t x380 = INT16_MIN;
	int32_t t72 = 0;

	t72 = (x377<=((x378*x379)==x380));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x383 = -9267854026923172LL;
	int8_t x384 = INT8_MAX;
	int32_t t73 = -829432557;

	t73 = (x381<=((x382*x383)==x384));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x386 = 2628;
	volatile int32_t x387 = -23729;
	static int32_t t74 = -1571933;

	t74 = (x385<=((x386*x387)==x388));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x389 = 1U;
	static uint64_t x390 = 36243202599629LLU;
	int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	volatile int32_t t75 = -90;

	t75 = (x389<=((x390*x391)==x392));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 29039829U;
	volatile int32_t t76 = -57992265;

	t76 = (x393<=((x394*x395)==x396));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x398 = 11612871160747LL;
	static int16_t x399 = -16;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t77 = 94734;

	t77 = (x397<=((x398*x399)==x400));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x401 = INT8_MIN;
	int64_t x402 = 699511778LL;
	int8_t x403 = -1;
	static int32_t x404 = INT32_MIN;
	volatile int32_t t78 = -2;

	t78 = (x401<=((x402*x403)==x404));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x409 = -1;
	volatile int32_t x410 = -1;
	uint16_t x411 = 9956U;
	volatile int8_t x412 = INT8_MIN;
	int32_t t79 = 0;

	t79 = (x409<=((x410*x411)==x412));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x413 = -1005209LL;
	static int16_t x414 = 21;
	int16_t x415 = INT16_MAX;
	int16_t x416 = INT16_MAX;
	volatile int32_t t80 = 0;

	t80 = (x413<=((x414*x415)==x416));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x417 = INT8_MIN;
	int64_t x418 = INT64_MIN;
	uint64_t x419 = UINT64_MAX;
	static int8_t x420 = INT8_MIN;
	int32_t t81 = 110949;

	t81 = (x417<=((x418*x419)==x420));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x421 = -1;
	int8_t x422 = -3;
	int64_t x424 = 91031033065902115LL;
	int32_t t82 = -18517;

	t82 = (x421<=((x422*x423)==x424));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x425 = INT64_MIN;
	uint8_t x427 = 0U;
	int64_t x428 = 1956441LL;
	volatile int32_t t83 = -7550;

	t83 = (x425<=((x426*x427)==x428));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x434 = INT8_MIN;
	int16_t x436 = INT16_MIN;
	int32_t t84 = -8568744;

	t84 = (x433<=((x434*x435)==x436));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x439 = -1;

	t85 = (x437<=((x438*x439)==x440));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x441 = -1;
	uint64_t x442 = UINT64_MAX;
	int16_t x443 = -265;
	int8_t x444 = 3;
	static volatile int32_t t86 = 185953;

	t86 = (x441<=((x442*x443)==x444));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x453 = 3U;
	uint32_t x455 = 612U;
	int16_t x456 = INT16_MAX;
	int32_t t87 = 508669225;

	t87 = (x453<=((x454*x455)==x456));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x467 = 6554586329499939LLU;
	int64_t x468 = -1LL;
	volatile int32_t t88 = 200079;

	t88 = (x465<=((x466*x467)==x468));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x469 = -5138;
	uint8_t x470 = UINT8_MAX;
	uint16_t x471 = 27454U;
	static int64_t x472 = -364677710512463898LL;
	int32_t t89 = 50365689;

	t89 = (x469<=((x470*x471)==x472));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x477 = 3962556LLU;
	uint32_t x478 = UINT32_MAX;
	uint16_t x479 = 3704U;
	int16_t x480 = INT16_MIN;
	static int32_t t90 = 12;

	t90 = (x477<=((x478*x479)==x480));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x481 = 28;
	int16_t x483 = INT16_MAX;
	static uint32_t x484 = 337U;
	int32_t t91 = -2534;

	t91 = (x481<=((x482*x483)==x484));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x485 = 201755189126LLU;
	static int32_t x486 = INT32_MAX;
	uint64_t x487 = 816979350275LLU;
	volatile int64_t x488 = -515099614165LL;
	int32_t t92 = 969427;

	t92 = (x485<=((x486*x487)==x488));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x489 = UINT8_MAX;
	uint16_t x490 = 6829U;
	uint16_t x491 = UINT16_MAX;
	int64_t x492 = -1LL;
	int32_t t93 = -161;

	t93 = (x489<=((x490*x491)==x492));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x493 = UINT32_MAX;
	static int16_t x494 = -1;
	int8_t x496 = -1;
	int32_t t94 = -125837409;

	t94 = (x493<=((x494*x495)==x496));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x497 = INT8_MIN;
	int32_t x499 = -18343213;
	static int32_t x500 = -11;
	int32_t t95 = 900183;

	t95 = (x497<=((x498*x499)==x500));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x501 = -78LL;
	int8_t x502 = -1;
	static int16_t x503 = INT16_MIN;
	static int16_t x504 = INT16_MIN;
	int32_t t96 = 6715629;

	t96 = (x501<=((x502*x503)==x504));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x505 = 876;
	static int8_t x506 = 8;
	volatile uint32_t x507 = UINT32_MAX;
	int16_t x508 = INT16_MAX;

	t97 = (x505<=((x506*x507)==x508));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x509 = INT64_MIN;
	uint64_t x510 = 3508362993609LLU;
	static int64_t x511 = 890145056182785448LL;
	volatile uint64_t x512 = 3794LLU;
	volatile int32_t t98 = -14103;

	t98 = (x509<=((x510*x511)==x512));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x513 = INT32_MAX;
	uint16_t x514 = 599U;
	static int16_t x515 = -1;

	t99 = (x513<=((x514*x515)==x516));

	if (t99 != 0) { NG(); } else { ; }
	
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

