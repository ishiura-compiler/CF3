#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
volatile int16_t x8 = -1;
static int16_t x12 = 3;
uint32_t x21 = UINT32_MAX;
int16_t x22 = INT16_MIN;
int8_t x23 = INT8_MIN;
static int16_t x24 = -387;
int16_t x26 = 293;
static int8_t x28 = INT8_MIN;
int32_t x30 = -32237871;
static volatile uint64_t x32 = UINT64_MAX;
volatile int16_t x39 = -1;
uint8_t x40 = 7U;
uint64_t x47 = 1723LLU;
int32_t t9 = -42;
int16_t x55 = -19;
uint8_t x72 = UINT8_MAX;
int8_t x84 = INT8_MIN;
int8_t x88 = INT8_MIN;
int64_t x89 = INT64_MIN;
static uint64_t x101 = 11914138LLU;
volatile uint8_t x104 = 7U;
int8_t x106 = INT8_MIN;
uint16_t x109 = 1U;
volatile int32_t t20 = 241093131;
static volatile uint8_t x123 = 4U;
static volatile int64_t x125 = INT64_MIN;
int64_t x133 = INT64_MAX;
int8_t x143 = INT8_MAX;
volatile int32_t x153 = INT32_MAX;
int64_t x155 = -494675352595975LL;
static volatile int32_t t29 = -6748;
uint64_t x162 = 7927863LLU;
volatile int16_t x166 = INT16_MAX;
int32_t x168 = -1;
volatile int32_t x169 = -1;
int8_t x192 = INT8_MAX;
static int16_t x194 = -5197;
volatile int32_t t36 = 183702278;
volatile int32_t x209 = INT32_MIN;
uint64_t x219 = 460434207885612LLU;
static volatile uint64_t x228 = UINT64_MAX;
volatile int32_t t42 = 357351777;
static int32_t x253 = INT32_MIN;
int32_t x255 = 447384602;
volatile int64_t x256 = INT64_MIN;
uint32_t x262 = 1071009U;
int8_t x270 = INT8_MIN;
int16_t x272 = -1;
int16_t x273 = 4;
int32_t x275 = INT32_MIN;
int32_t x281 = -1;
int32_t x288 = INT32_MAX;
static uint32_t x302 = 381012U;
int32_t x305 = 0;
int32_t x309 = INT32_MAX;
static uint64_t x310 = 8331343652LLU;
static volatile int16_t x311 = -2886;
static int16_t x312 = INT16_MIN;
volatile int16_t x323 = INT16_MIN;
uint8_t x334 = 42U;
uint64_t x335 = UINT64_MAX;
static int32_t x353 = 0;
int8_t x357 = INT8_MIN;
int32_t t59 = -1;
static int16_t x376 = 15;
volatile int32_t x377 = INT32_MIN;
volatile int16_t x379 = 6;
uint64_t x394 = 26801LLU;
int64_t x404 = -1LL;
int32_t t67 = 20;
volatile int16_t x406 = 0;
int32_t t68 = -1049757206;
int32_t x410 = -925;
volatile int32_t t69 = 1836;
int64_t x413 = -1LL;
uint32_t x415 = 21348U;
int64_t x416 = -1573891562LL;
static int16_t x439 = INT16_MIN;
volatile uint64_t x440 = 2710003093685LLU;
int32_t t75 = -450998584;
uint64_t x462 = UINT64_MAX;
uint32_t x475 = 65157U;
uint8_t x479 = 0U;
int64_t x493 = INT64_MAX;
uint32_t x498 = 1927779U;
uint64_t x499 = 73466654578LLU;
int64_t x501 = 0LL;
volatile int32_t x503 = 1044965947;
int64_t x507 = -1368534LL;
volatile int32_t t87 = 59800;
uint32_t x528 = 31133630U;
static volatile int32_t t88 = -1;
int32_t t89 = 608;
int32_t x534 = -1;
int32_t t91 = 1055757714;
int64_t x544 = INT64_MAX;
int64_t x545 = -1LL;
volatile int8_t x547 = -55;
volatile int32_t t93 = 497113152;
volatile uint8_t x550 = UINT8_MAX;
static volatile int32_t t95 = 47020;
static uint64_t x559 = UINT64_MAX;
static volatile int8_t x561 = 2;
static uint16_t x565 = UINT16_MAX;


void f0(void) {
	int8_t x1 = -47;
	static volatile uint64_t x2 = 370736LLU;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = -1;
	int32_t t0 = 80111;

	t0 = (x1<((x2*x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = 0;
	volatile int32_t x7 = INT32_MAX;
	int32_t t1 = 13;

	t1 = (x5<((x6*x7)^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = -1;
	static int8_t x10 = INT8_MIN;
	uint64_t x11 = UINT64_MAX;
	int32_t t2 = -1136;

	t2 = (x9<((x10*x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MIN;
	int64_t x15 = -796444317886669LL;
	static int32_t x16 = -1;
	volatile int32_t t3 = 0;

	t3 = (x13<((x14*x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t t4 = 7;

	t4 = (x21<((x22*x23)^x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -4734511LL;
	int8_t x27 = -1;
	int32_t t5 = 0;

	t5 = (x25<((x26*x27)^x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	static int32_t x31 = -1;
	volatile int32_t t6 = -19148;

	t6 = (x29<((x30*x31)^x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	int8_t x38 = INT8_MAX;
	int32_t t7 = 87647;

	t7 = (x37<((x38*x39)^x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = 0U;
	int32_t x42 = -1;
	uint16_t x43 = UINT16_MAX;
	int32_t x44 = -1798;
	static int32_t t8 = -1;

	t8 = (x41<((x42*x43)^x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	volatile uint64_t x46 = 7LLU;
	static uint64_t x48 = 3590734372LLU;

	t9 = (x45<((x46*x47)^x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = INT64_MAX;
	int8_t x54 = -1;
	volatile uint16_t x56 = 23U;
	static int32_t t10 = -2856;

	t10 = (x53<((x54*x55)^x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -700086843;
	int8_t x58 = -27;
	static volatile int8_t x59 = INT8_MAX;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t11 = -39831;

	t11 = (x57<((x58*x59)^x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MAX;
	int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	static int32_t t12 = -354996;

	t12 = (x69<((x70*x71)^x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x77 = 5625879711LLU;
	volatile uint64_t x78 = 3287LLU;
	static int32_t x79 = -13680;
	static volatile int64_t x80 = -1LL;
	volatile int32_t t13 = -1722753;

	t13 = (x77<((x78*x79)^x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 0U;
	int64_t x82 = -1LL;
	int64_t x83 = -12700638714742243LL;
	int32_t t14 = 6045;

	t14 = (x81<((x82*x83)^x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x85 = -1;
	int16_t x86 = 451;
	uint64_t x87 = 24958411318965LLU;
	volatile int32_t t15 = 949475084;

	t15 = (x85<((x86*x87)^x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x90 = INT16_MIN;
	int16_t x91 = -50;
	int32_t x92 = INT32_MIN;
	static volatile int32_t t16 = -99876;

	t16 = (x89<((x90*x91)^x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MIN;
	static volatile int32_t t17 = 46837;

	t17 = (x101<((x102*x103)^x104));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x105 = UINT8_MAX;
	volatile uint16_t x107 = 887U;
	volatile int32_t x108 = INT32_MIN;
	volatile int32_t t18 = -24232;

	t18 = (x105<((x106*x107)^x108));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x110 = INT32_MAX;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = 922;
	volatile int32_t t19 = -295;

	t19 = (x109<((x110*x111)^x112));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = INT64_MIN;
	int64_t x114 = -26LL;
	uint32_t x115 = 237446426U;
	int8_t x116 = INT8_MIN;

	t20 = (x113<((x114*x115)^x116));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 2479U;
	static int16_t x122 = INT16_MIN;
	int8_t x124 = -1;
	int32_t t21 = -18;

	t21 = (x121<((x122*x123)^x124));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x126 = 60561434U;
	uint8_t x127 = 0U;
	static uint64_t x128 = 144335335660324LLU;
	int32_t t22 = 121;

	t22 = (x125<((x126*x127)^x128));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x129 = 4U;
	int64_t x130 = INT64_MIN;
	volatile uint64_t x131 = 28564914652554998LLU;
	volatile int8_t x132 = INT8_MIN;
	static int32_t t23 = -556117;

	t23 = (x129<((x130*x131)^x132));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x134 = -1;
	uint64_t x135 = UINT64_MAX;
	static int64_t x136 = 3332785599440401178LL;
	int32_t t24 = 1703074;

	t24 = (x133<((x134*x135)^x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x137 = INT64_MIN;
	volatile uint64_t x138 = UINT64_MAX;
	uint64_t x139 = 6769347888406395824LLU;
	volatile uint32_t x140 = UINT32_MAX;
	volatile int32_t t25 = 517641037;

	t25 = (x137<((x138*x139)^x140));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x141 = 0U;
	int64_t x142 = -1LL;
	uint8_t x144 = 1U;
	int32_t t26 = 1;

	t26 = (x141<((x142*x143)^x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = -1;
	int8_t x150 = -1;
	static int64_t x151 = 4919690917796717LL;
	int16_t x152 = INT16_MIN;
	volatile int32_t t27 = -12;

	t27 = (x149<((x150*x151)^x152));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x154 = 86U;
	static uint8_t x156 = 72U;
	volatile int32_t t28 = -473598;

	t28 = (x153<((x154*x155)^x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = UINT16_MAX;
	static int8_t x158 = INT8_MAX;
	int64_t x159 = -1LL;
	int64_t x160 = 5255LL;

	t29 = (x157<((x158*x159)^x160));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = -1;
	volatile int32_t x163 = INT32_MIN;
	int32_t x164 = 3;
	volatile int32_t t30 = -158198;

	t30 = (x161<((x162*x163)^x164));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x165 = -60LL;
	int8_t x167 = INT8_MAX;
	int32_t t31 = 4281;

	t31 = (x165<((x166*x167)^x168));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x170 = 86U;
	int32_t x171 = -1;
	int16_t x172 = -355;
	int32_t t32 = -28335;

	t32 = (x169<((x170*x171)^x172));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x189 = INT64_MAX;
	static int8_t x190 = 5;
	int16_t x191 = 117;
	volatile int32_t t33 = -867833028;

	t33 = (x189<((x190*x191)^x192));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x193 = -1;
	volatile uint16_t x195 = 60U;
	uint16_t x196 = 229U;
	volatile int32_t t34 = 23;

	t34 = (x193<((x194*x195)^x196));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x197 = -1;
	volatile int64_t x198 = -133888002LL;
	uint32_t x199 = 57166143U;
	int32_t x200 = INT32_MIN;
	static int32_t t35 = -1459;

	t35 = (x197<((x198*x199)^x200));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x201 = -1;
	int16_t x202 = -1;
	int32_t x203 = INT32_MAX;
	uint32_t x204 = 56427730U;

	t36 = (x201<((x202*x203)^x204));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x205 = 334560468LLU;
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t37 = -683084;

	t37 = (x205<((x206*x207)^x208));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x210 = 347572U;
	uint8_t x211 = 40U;
	volatile uint8_t x212 = 5U;
	int32_t t38 = 147574049;

	t38 = (x209<((x210*x211)^x212));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x217 = INT8_MIN;
	int64_t x218 = INT64_MIN;
	uint8_t x220 = 8U;
	volatile int32_t t39 = 3212;

	t39 = (x217<((x218*x219)^x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x225 = 2082432391LL;
	static int8_t x226 = 0;
	static volatile int64_t x227 = -122177756535141821LL;
	static int32_t t40 = 908143;

	t40 = (x225<((x226*x227)^x228));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x229 = 9U;
	int64_t x230 = 60409735046LL;
	int16_t x231 = 0;
	int8_t x232 = -3;
	int32_t t41 = 109;

	t41 = (x229<((x230*x231)^x232));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x245 = -216;
	static uint16_t x246 = 31324U;
	int8_t x247 = INT8_MAX;
	volatile int32_t x248 = INT32_MIN;

	t42 = (x245<((x246*x247)^x248));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x254 = -1;
	int32_t t43 = -12;

	t43 = (x253<((x254*x255)^x256));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x261 = 70U;
	int32_t x263 = INT32_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t44 = 2361;

	t44 = (x261<((x262*x263)^x264));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x265 = INT8_MIN;
	uint16_t x266 = 102U;
	int32_t x267 = 56338;
	static int8_t x268 = -1;
	static volatile int32_t t45 = -7;

	t45 = (x265<((x266*x267)^x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x269 = 1U;
	int64_t x271 = -43209789LL;
	volatile int32_t t46 = 3;

	t46 = (x269<((x270*x271)^x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x274 = UINT32_MAX;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t47 = -6850556;

	t47 = (x273<((x274*x275)^x276));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x282 = INT16_MIN;
	int32_t x283 = 1;
	int64_t x284 = -461009550846LL;
	volatile int32_t t48 = 1;

	t48 = (x281<((x282*x283)^x284));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x285 = 32249150;
	volatile int32_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	int32_t t49 = 204360675;

	t49 = (x285<((x286*x287)^x288));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x289 = 3;
	uint16_t x290 = 1U;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = -5;
	volatile int32_t t50 = 31990;

	t50 = (x289<((x290*x291)^x292));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x297 = -1;
	volatile uint64_t x298 = 695923575LLU;
	static uint8_t x299 = UINT8_MAX;
	static int64_t x300 = INT64_MIN;
	volatile int32_t t51 = 112602;

	t51 = (x297<((x298*x299)^x300));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x301 = INT16_MIN;
	static int16_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	static int32_t t52 = 206765;

	t52 = (x301<((x302*x303)^x304));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x306 = -1;
	uint8_t x307 = 85U;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t53 = 0;

	t53 = (x305<((x306*x307)^x308));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t t54 = -8371439;

	t54 = (x309<((x310*x311)^x312));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x321 = 57;
	int64_t x322 = -43018372LL;
	static volatile int16_t x324 = INT16_MAX;
	volatile int32_t t55 = 815262446;

	t55 = (x321<((x322*x323)^x324));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x333 = UINT8_MAX;
	uint8_t x336 = 44U;
	volatile int32_t t56 = -1227;

	t56 = (x333<((x334*x335)^x336));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x341 = 0;
	uint16_t x342 = 17833U;
	static uint8_t x343 = 56U;
	static int64_t x344 = INT64_MAX;
	volatile int32_t t57 = -40;

	t57 = (x341<((x342*x343)^x344));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x354 = INT8_MIN;
	static int8_t x355 = -1;
	int64_t x356 = INT64_MAX;
	static volatile int32_t t58 = 0;

	t58 = (x353<((x354*x355)^x356));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x358 = -1LL;
	static volatile int8_t x359 = INT8_MIN;
	int32_t x360 = -62703368;

	t59 = (x357<((x358*x359)^x360));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x361 = INT8_MIN;
	int64_t x362 = -71LL;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t60 = 105;

	t60 = (x361<((x362*x363)^x364));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x365 = 4083029988954701143LLU;
	volatile uint64_t x366 = 12175071LLU;
	int16_t x367 = INT16_MAX;
	uint16_t x368 = 23U;
	int32_t t61 = 1497;

	t61 = (x365<((x366*x367)^x368));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x369 = 1397U;
	int64_t x370 = -17LL;
	int8_t x371 = 1;
	int32_t x372 = 77286363;
	volatile int32_t t62 = 304311467;

	t62 = (x369<((x370*x371)^x372));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x373 = 14307U;
	uint16_t x374 = 301U;
	static uint16_t x375 = UINT16_MAX;
	int32_t t63 = -3;

	t63 = (x373<((x374*x375)^x376));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x378 = 570892556LLU;
	int64_t x380 = INT64_MAX;
	int32_t t64 = -496;

	t64 = (x377<((x378*x379)^x380));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x393 = INT64_MIN;
	volatile uint8_t x395 = UINT8_MAX;
	uint8_t x396 = 12U;
	volatile int32_t t65 = 121;

	t65 = (x393<((x394*x395)^x396));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x397 = 0U;
	uint64_t x398 = 1769779282678LLU;
	int16_t x399 = INT16_MIN;
	int8_t x400 = -1;
	int32_t t66 = 4;

	t66 = (x397<((x398*x399)^x400));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x401 = INT16_MIN;
	volatile int8_t x402 = -1;
	static uint64_t x403 = UINT64_MAX;

	t67 = (x401<((x402*x403)^x404));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x405 = 379;
	volatile int16_t x407 = INT16_MAX;
	int16_t x408 = -778;

	t68 = (x405<((x406*x407)^x408));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x409 = INT64_MIN;
	uint16_t x411 = 461U;
	volatile int32_t x412 = -1;

	t69 = (x409<((x410*x411)^x412));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x414 = INT32_MIN;
	static volatile int32_t t70 = 1;

	t70 = (x413<((x414*x415)^x416));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x417 = 991840;
	int64_t x418 = 10139LL;
	uint8_t x419 = 25U;
	uint64_t x420 = 161LLU;
	int32_t t71 = -4;

	t71 = (x417<((x418*x419)^x420));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x421 = -940210100;
	static int16_t x422 = -2411;
	volatile uint8_t x423 = 106U;
	int32_t x424 = INT32_MIN;
	static int32_t t72 = -393011260;

	t72 = (x421<((x422*x423)^x424));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x433 = INT8_MIN;
	static uint64_t x434 = 28143121682LLU;
	static uint16_t x435 = 396U;
	int8_t x436 = INT8_MIN;
	int32_t t73 = -8551885;

	t73 = (x433<((x434*x435)^x436));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x437 = -49;
	uint8_t x438 = 23U;
	volatile int32_t t74 = -894;

	t74 = (x437<((x438*x439)^x440));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x441 = 24U;
	static uint8_t x442 = 66U;
	int32_t x443 = -1;
	volatile int32_t x444 = INT32_MAX;

	t75 = (x441<((x442*x443)^x444));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x449 = -1LL;
	int16_t x450 = INT16_MIN;
	volatile int16_t x451 = INT16_MIN;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t76 = -1;

	t76 = (x449<((x450*x451)^x452));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x453 = -1;
	static int32_t x454 = INT32_MAX;
	int32_t x455 = -1;
	int32_t x456 = -518;
	static volatile int32_t t77 = -745;

	t77 = (x453<((x454*x455)^x456));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x461 = INT64_MAX;
	uint16_t x463 = 3U;
	int8_t x464 = -12;
	volatile int32_t t78 = -8179;

	t78 = (x461<((x462*x463)^x464));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x465 = -1;
	int16_t x466 = -13713;
	int16_t x467 = INT16_MAX;
	volatile uint8_t x468 = 5U;
	volatile int32_t t79 = -1;

	t79 = (x465<((x466*x467)^x468));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x473 = -7;
	static volatile uint8_t x474 = UINT8_MAX;
	static volatile uint64_t x476 = 0LLU;
	volatile int32_t t80 = -1;

	t80 = (x473<((x474*x475)^x476));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x477 = -1;
	int64_t x478 = INT64_MIN;
	int64_t x480 = INT64_MIN;
	static int32_t t81 = 479;

	t81 = (x477<((x478*x479)^x480));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x485 = -27933;
	int16_t x486 = -773;
	static int16_t x487 = INT16_MIN;
	int32_t x488 = INT32_MAX;
	int32_t t82 = -37;

	t82 = (x485<((x486*x487)^x488));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x494 = -1070;
	volatile int8_t x495 = 60;
	int8_t x496 = INT8_MIN;
	int32_t t83 = 53568131;

	t83 = (x493<((x494*x495)^x496));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x497 = -121;
	volatile uint64_t x500 = 180826312908LLU;
	int32_t t84 = -13;

	t84 = (x497<((x498*x499)^x500));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x502 = -1LL;
	volatile int8_t x504 = -1;
	volatile int32_t t85 = -54;

	t85 = (x501<((x502*x503)^x504));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x505 = UINT32_MAX;
	static int16_t x506 = 2;
	static int16_t x508 = INT16_MAX;
	volatile int32_t t86 = -532655066;

	t86 = (x505<((x506*x507)^x508));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x509 = 938995LLU;
	int16_t x510 = 6;
	volatile int32_t x511 = 90730;
	int16_t x512 = INT16_MIN;

	t87 = (x509<((x510*x511)^x512));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x525 = 365;
	int8_t x526 = INT8_MIN;
	static uint8_t x527 = UINT8_MAX;

	t88 = (x525<((x526*x527)^x528));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x529 = INT16_MAX;
	int8_t x530 = -1;
	int16_t x531 = 12;
	static uint32_t x532 = UINT32_MAX;

	t89 = (x529<((x530*x531)^x532));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x533 = 232471LL;
	uint64_t x535 = 13550591LLU;
	int16_t x536 = -1;
	static int32_t t90 = -92393;

	t90 = (x533<((x534*x535)^x536));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MIN;
	int8_t x539 = INT8_MAX;
	uint64_t x540 = 99517225LLU;

	t91 = (x537<((x538*x539)^x540));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x541 = 1374712U;
	int32_t x542 = -1;
	int16_t x543 = 13;
	static int32_t t92 = -109049130;

	t92 = (x541<((x542*x543)^x544));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x546 = 115;
	volatile uint16_t x548 = UINT16_MAX;

	t93 = (x545<((x546*x547)^x548));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x549 = 1065141LL;
	uint64_t x551 = UINT64_MAX;
	int8_t x552 = INT8_MIN;
	int32_t t94 = -633;

	t94 = (x549<((x550*x551)^x552));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x553 = INT16_MAX;
	int64_t x554 = INT64_MIN;
	volatile uint64_t x555 = 36LLU;
	uint64_t x556 = 335LLU;

	t95 = (x553<((x554*x555)^x556));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x557 = INT64_MAX;
	int32_t x558 = -1;
	uint32_t x560 = UINT32_MAX;
	volatile int32_t t96 = -632480762;

	t96 = (x557<((x558*x559)^x560));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x562 = -1;
	int16_t x563 = -1;
	uint64_t x564 = UINT64_MAX;
	int32_t t97 = -1830851;

	t97 = (x561<((x562*x563)^x564));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x566 = UINT16_MAX;
	int16_t x567 = -1;
	static int64_t x568 = INT64_MIN;
	int32_t t98 = 53640631;

	t98 = (x565<((x566*x567)^x568));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x569 = -1;
	static int32_t x570 = -1;
	uint8_t x571 = 7U;
	volatile int64_t x572 = -1LL;
	static int32_t t99 = 675;

	t99 = (x569<((x570*x571)^x572));

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

