#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x9 = -1;
int16_t x13 = INT16_MAX;
static volatile uint64_t x15 = UINT64_MAX;
volatile int32_t t4 = -4508;
uint64_t x35 = 211472811LLU;
static volatile uint32_t x41 = 462U;
int8_t x50 = -22;
uint16_t x51 = UINT16_MAX;
static int64_t x52 = -12LL;
int32_t x54 = INT32_MIN;
static volatile int32_t t9 = -2604059;
int8_t x61 = -1;
int32_t x62 = INT32_MIN;
static int32_t x77 = INT32_MIN;
volatile int16_t x78 = -5100;
volatile int64_t x81 = 172258040961939610LL;
uint32_t x100 = UINT32_MAX;
volatile int8_t x101 = INT8_MIN;
volatile int32_t t18 = 1660877;
int8_t x108 = 7;
uint32_t x113 = 20148U;
static int32_t t22 = -57345527;
uint8_t x130 = UINT8_MAX;
int32_t t23 = 0;
static int16_t x137 = -167;
int16_t x142 = -1;
static uint64_t x143 = UINT64_MAX;
int64_t x148 = INT64_MAX;
volatile int32_t t27 = 433707;
uint32_t x155 = 1823U;
static uint8_t x169 = 108U;
uint32_t x173 = UINT32_MAX;
volatile int32_t t35 = 54;
static volatile int32_t t36 = 226328;
static int32_t t38 = -5699;
int64_t x227 = -1LL;
static uint32_t x228 = UINT32_MAX;
int16_t x238 = INT16_MIN;
uint32_t x239 = UINT32_MAX;
int8_t x242 = -1;
static int8_t x243 = INT8_MAX;
int32_t x253 = -3119955;
static volatile int8_t x266 = INT8_MIN;
uint32_t x269 = 54357779U;
volatile int32_t t46 = -175311;
int16_t x273 = -1;
int32_t x276 = 3558;
volatile int32_t t47 = 398628295;
int8_t x282 = INT8_MIN;
static int32_t x285 = INT32_MAX;
static int8_t x300 = -1;
static uint64_t x301 = 991667LLU;
int64_t x304 = 14965896816283797LL;
uint16_t x310 = UINT16_MAX;
static int32_t x311 = -2;
int16_t x317 = INT16_MIN;
volatile int32_t t58 = -113770;
int8_t x338 = INT8_MIN;
int8_t x340 = INT8_MAX;
int64_t x343 = -1LL;
uint64_t x353 = 43125LLU;
int64_t x362 = 441LL;
int8_t x364 = INT8_MAX;
volatile uint8_t x367 = 3U;
int16_t x371 = INT16_MAX;
uint16_t x373 = 23471U;
int8_t x374 = 6;
int32_t t68 = -345097;
int32_t x380 = INT32_MIN;
volatile int32_t t69 = 121093;
volatile int64_t x385 = INT64_MAX;
static volatile int32_t t71 = 10623;
uint64_t x389 = 61233438433895LLU;
volatile int8_t x391 = INT8_MIN;
int8_t x409 = INT8_MIN;
volatile int32_t t80 = -16830;
volatile int8_t x453 = INT8_MIN;
int32_t x456 = INT32_MIN;
int32_t t81 = 219;
int16_t x459 = INT16_MIN;
volatile uint64_t x460 = 831194785907LLU;
int32_t t82 = -479;
uint8_t x474 = 1U;
int8_t x480 = INT8_MIN;
uint8_t x481 = 7U;
uint64_t x500 = UINT64_MAX;
int32_t t90 = 412;
int8_t x502 = INT8_MAX;
int8_t x517 = INT8_MIN;
volatile int8_t x530 = -1;
int32_t t96 = 98912;
static int32_t t97 = 83254946;
int16_t x545 = INT16_MAX;
uint64_t x548 = 10503219428321210LLU;


void f0(void) {
	uint32_t x5 = 81324U;
	int64_t x6 = 4102744LL;
	uint16_t x7 = 78U;
	int64_t x8 = 264LL;
	volatile int32_t t0 = -22059;

	t0 = ((x5<=(x6*x7))==x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = -25;
	int16_t x11 = 974;
	int16_t x12 = 7;
	int32_t t1 = 8;

	t1 = ((x9<=(x10*x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MIN;
	int16_t x16 = 43;
	volatile int32_t t2 = 1683987;

	t2 = ((x13<=(x14*x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	static int16_t x19 = INT16_MIN;
	volatile uint8_t x20 = 0U;
	volatile int32_t t3 = -14462;

	t3 = ((x17<=(x18*x19))==x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x29 = 517;
	int64_t x30 = -6960LL;
	int16_t x31 = 2489;
	int16_t x32 = INT16_MIN;

	t4 = ((x29<=(x30*x31))==x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x33 = INT32_MIN;
	int16_t x34 = INT16_MIN;
	volatile int64_t x36 = 857649433183192431LL;
	volatile int32_t t5 = -1;

	t5 = ((x33<=(x34*x35))==x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -1;
	static uint16_t x38 = 648U;
	uint8_t x39 = UINT8_MAX;
	int16_t x40 = -1;
	int32_t t6 = 7;

	t6 = ((x37<=(x38*x39))==x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x42 = 12U;
	volatile uint8_t x43 = 0U;
	int32_t x44 = -1;
	volatile int32_t t7 = -6853099;

	t7 = ((x41<=(x42*x43))==x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x49 = 13U;
	static int32_t t8 = 901;

	t8 = ((x49<=(x50*x51))==x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x53 = 2038799U;
	uint32_t x55 = UINT32_MAX;
	static int64_t x56 = INT64_MIN;

	t9 = ((x53<=(x54*x55))==x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x63 = 1039264273693086711LLU;
	uint32_t x64 = UINT32_MAX;
	int32_t t10 = 414445181;

	t10 = ((x61<=(x62*x63))==x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x65 = -431980040LL;
	volatile int32_t x66 = 1477;
	uint32_t x67 = 54896U;
	uint64_t x68 = 16594610349806851LLU;
	int32_t t11 = -88372666;

	t11 = ((x65<=(x66*x67))==x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x73 = 3205902LL;
	volatile uint8_t x74 = 3U;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = -1;
	static volatile int32_t t12 = 11;

	t12 = ((x73<=(x74*x75))==x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x79 = -59;
	static int32_t x80 = INT32_MAX;
	int32_t t13 = 73;

	t13 = ((x77<=(x78*x79))==x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x82 = INT16_MAX;
	static int64_t x83 = -14137LL;
	uint8_t x84 = 0U;
	volatile int32_t t14 = -522625553;

	t14 = ((x81<=(x82*x83))==x84);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x89 = 1084390LLU;
	uint32_t x90 = UINT32_MAX;
	uint64_t x91 = 20059016769LLU;
	uint64_t x92 = 21292831131953509LLU;
	volatile int32_t t15 = 151021098;

	t15 = ((x89<=(x90*x91))==x92);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = 715535708;
	static uint16_t x94 = UINT16_MAX;
	int64_t x95 = -5086630322LL;
	int8_t x96 = -1;
	int32_t t16 = -617;

	t16 = ((x93<=(x94*x95))==x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = 0;
	volatile int64_t x99 = INT64_MIN;
	int32_t t17 = -6147007;

	t17 = ((x97<=(x98*x99))==x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x102 = 1239256895591441363LLU;
	int64_t x103 = -1LL;
	int8_t x104 = INT8_MAX;

	t18 = ((x101<=(x102*x103))==x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x105 = -30566907LL;
	int16_t x106 = -690;
	volatile int64_t x107 = 7922100517LL;
	static volatile int32_t t19 = -251518;

	t19 = ((x105<=(x106*x107))==x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x109 = -7026;
	int16_t x110 = -5068;
	int16_t x111 = 0;
	static int8_t x112 = INT8_MIN;
	volatile int32_t t20 = -1;

	t20 = ((x109<=(x110*x111))==x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x114 = INT32_MIN;
	int64_t x115 = 193814448LL;
	uint16_t x116 = 82U;
	int32_t t21 = 74715044;

	t21 = ((x113<=(x114*x115))==x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = 2U;
	static volatile int32_t x126 = 16919616;
	uint32_t x127 = UINT32_MAX;
	volatile int32_t x128 = -1;

	t22 = ((x125<=(x126*x127))==x128);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x129 = 7U;
	int16_t x131 = INT16_MIN;
	volatile int32_t x132 = 6;

	t23 = ((x129<=(x130*x131))==x132);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x138 = 10U;
	uint32_t x139 = UINT32_MAX;
	uint8_t x140 = 14U;
	int32_t t24 = 45;

	t24 = ((x137<=(x138*x139))==x140);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	volatile int32_t t25 = -129523947;

	t25 = ((x141<=(x142*x143))==x144);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x145 = 16090650616LLU;
	int8_t x146 = INT8_MIN;
	static uint64_t x147 = 26634238459914LLU;
	static volatile int32_t t26 = 1384;

	t26 = ((x145<=(x146*x147))==x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = 8U;
	uint32_t x150 = UINT32_MAX;
	int16_t x151 = -571;
	int16_t x152 = 925;

	t27 = ((x149<=(x150*x151))==x152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MIN;
	uint64_t x156 = 12380769LLU;
	volatile int32_t t28 = 772076;

	t28 = ((x153<=(x154*x155))==x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x165 = 2;
	uint8_t x166 = 0U;
	static uint16_t x167 = 31U;
	uint8_t x168 = 31U;
	int32_t t29 = 873450795;

	t29 = ((x165<=(x166*x167))==x168);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x170 = UINT32_MAX;
	uint64_t x171 = UINT64_MAX;
	uint64_t x172 = 38206733173430LLU;
	volatile int32_t t30 = -3439;

	t30 = ((x169<=(x170*x171))==x172);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x174 = INT16_MIN;
	uint32_t x175 = 31U;
	volatile uint64_t x176 = UINT64_MAX;
	static int32_t t31 = -58152808;

	t31 = ((x173<=(x174*x175))==x176);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x181 = 21967U;
	uint32_t x182 = UINT32_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	int64_t x184 = 9362LL;
	static volatile int32_t t32 = -1563091;

	t32 = ((x181<=(x182*x183))==x184);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = -1LL;
	int64_t x191 = 79LL;
	uint32_t x192 = 1722U;
	int32_t t33 = -6497074;

	t33 = ((x189<=(x190*x191))==x192);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x193 = -44339384LL;
	static int32_t x194 = -1;
	int32_t x195 = 437;
	int32_t x196 = -1;
	int32_t t34 = 9027;

	t34 = ((x193<=(x194*x195))==x196);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x197 = -1;
	int64_t x198 = INT64_MIN;
	uint64_t x199 = 67251436761556LLU;
	int8_t x200 = -1;

	t35 = ((x197<=(x198*x199))==x200);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x201 = INT32_MIN;
	int8_t x202 = -30;
	static uint8_t x203 = UINT8_MAX;
	uint8_t x204 = 9U;

	t36 = ((x201<=(x202*x203))==x204);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x205 = UINT16_MAX;
	int8_t x206 = -1;
	static volatile int64_t x207 = -534102401357667870LL;
	uint16_t x208 = UINT16_MAX;
	int32_t t37 = 4;

	t37 = ((x205<=(x206*x207))==x208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = INT16_MIN;
	uint8_t x214 = UINT8_MAX;
	uint16_t x215 = 19180U;
	int16_t x216 = INT16_MAX;

	t38 = ((x213<=(x214*x215))==x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = -1LL;
	static int16_t x218 = -1;
	static uint16_t x219 = 1285U;
	uint8_t x220 = 12U;
	int32_t t39 = 0;

	t39 = ((x217<=(x218*x219))==x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x225 = UINT8_MAX;
	volatile uint64_t x226 = UINT64_MAX;
	static int32_t t40 = -46;

	t40 = ((x225<=(x226*x227))==x228);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x237 = 3701;
	volatile int32_t x240 = INT32_MIN;
	volatile int32_t t41 = 177780806;

	t41 = ((x237<=(x238*x239))==x240);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x241 = INT16_MIN;
	int64_t x244 = INT64_MAX;
	volatile int32_t t42 = 1;

	t42 = ((x241<=(x242*x243))==x244);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x254 = INT32_MIN;
	static uint64_t x255 = 14LLU;
	volatile int16_t x256 = -1;
	volatile int32_t t43 = -2738967;

	t43 = ((x253<=(x254*x255))==x256);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x261 = -102860406609LL;
	uint32_t x262 = 1045450738U;
	int64_t x263 = -61LL;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t44 = -32;

	t44 = ((x261<=(x262*x263))==x264);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x265 = -1;
	int64_t x267 = -33003545942258LL;
	uint32_t x268 = 78U;
	volatile int32_t t45 = -30343370;

	t45 = ((x265<=(x266*x267))==x268);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x270 = UINT32_MAX;
	int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MIN;

	t46 = ((x269<=(x270*x271))==x272);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x274 = 2550U;
	int8_t x275 = INT8_MIN;

	t47 = ((x273<=(x274*x275))==x276);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x277 = -356506986;
	int8_t x278 = INT8_MIN;
	static uint8_t x279 = UINT8_MAX;
	uint16_t x280 = UINT16_MAX;
	static int32_t t48 = 6165;

	t48 = ((x277<=(x278*x279))==x280);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x281 = -1;
	uint8_t x283 = 0U;
	static uint32_t x284 = UINT32_MAX;
	int32_t t49 = -336451;

	t49 = ((x281<=(x282*x283))==x284);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x286 = -97;
	uint32_t x287 = UINT32_MAX;
	uint8_t x288 = 79U;
	volatile int32_t t50 = 1;

	t50 = ((x285<=(x286*x287))==x288);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x293 = INT16_MIN;
	volatile uint8_t x294 = 1U;
	int8_t x295 = -1;
	uint8_t x296 = 0U;
	int32_t t51 = -1;

	t51 = ((x293<=(x294*x295))==x296);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x297 = 24;
	int8_t x298 = 0;
	static int64_t x299 = INT64_MIN;
	static volatile int32_t t52 = -52272;

	t52 = ((x297<=(x298*x299))==x300);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x302 = 6U;
	int8_t x303 = 1;
	int32_t t53 = -1;

	t53 = ((x301<=(x302*x303))==x304);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x309 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	volatile int32_t t54 = -1;

	t54 = ((x309<=(x310*x311))==x312);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x318 = INT16_MIN;
	int16_t x319 = -35;
	int8_t x320 = INT8_MAX;
	int32_t t55 = 73382;

	t55 = ((x317<=(x318*x319))==x320);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x325 = 4822207495330LLU;
	int32_t x326 = -1;
	int64_t x327 = 1291080116406200630LL;
	static uint32_t x328 = 11414826U;
	int32_t t56 = 116;

	t56 = ((x325<=(x326*x327))==x328);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x329 = INT8_MAX;
	uint8_t x330 = UINT8_MAX;
	int32_t x331 = -1;
	uint16_t x332 = 6856U;
	int32_t t57 = 88535932;

	t57 = ((x329<=(x330*x331))==x332);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x333 = UINT8_MAX;
	uint64_t x334 = 0LLU;
	int32_t x335 = 979132115;
	int32_t x336 = -1;

	t58 = ((x333<=(x334*x335))==x336);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x337 = -5;
	static volatile uint32_t x339 = 511U;
	int32_t t59 = -2343875;

	t59 = ((x337<=(x338*x339))==x340);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MAX;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t60 = 7;

	t60 = ((x341<=(x342*x343))==x344);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x345 = -300;
	static int16_t x346 = -1;
	static int64_t x347 = -2525232LL;
	uint32_t x348 = 119U;
	volatile int32_t t61 = -414261327;

	t61 = ((x345<=(x346*x347))==x348);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x349 = 109479LLU;
	int8_t x350 = -1;
	static int32_t x351 = -106435;
	static int16_t x352 = INT16_MAX;
	volatile int32_t t62 = -877569995;

	t62 = ((x349<=(x350*x351))==x352);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x354 = 481U;
	volatile int8_t x355 = -1;
	int16_t x356 = INT16_MIN;
	int32_t t63 = 159;

	t63 = ((x353<=(x354*x355))==x356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x357 = INT64_MIN;
	uint64_t x358 = 5317082199356623197LLU;
	uint64_t x359 = UINT64_MAX;
	uint16_t x360 = 642U;
	volatile int32_t t64 = -3717346;

	t64 = ((x357<=(x358*x359))==x360);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x361 = 505681438LLU;
	static uint8_t x363 = 0U;
	int32_t t65 = 113;

	t65 = ((x361<=(x362*x363))==x364);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = UINT32_MAX;
	int32_t x368 = INT32_MAX;
	volatile int32_t t66 = 41;

	t66 = ((x365<=(x366*x367))==x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x369 = 8;
	uint64_t x370 = 56121842408947720LLU;
	uint16_t x372 = 192U;
	volatile int32_t t67 = -12605;

	t67 = ((x369<=(x370*x371))==x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x375 = -1;
	volatile int64_t x376 = INT64_MIN;

	t68 = ((x373<=(x374*x375))==x376);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x377 = -43;
	volatile int16_t x378 = INT16_MIN;
	static volatile uint8_t x379 = 5U;

	t69 = ((x377<=(x378*x379))==x380);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x381 = 368U;
	static volatile uint8_t x382 = 3U;
	volatile uint8_t x383 = 116U;
	volatile int8_t x384 = -22;
	volatile int32_t t70 = -5949;

	t70 = ((x381<=(x382*x383))==x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x386 = 12U;
	int64_t x387 = -1LL;
	int32_t x388 = -1;

	t71 = ((x385<=(x386*x387))==x388);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x390 = -9;
	int32_t x392 = INT32_MIN;
	volatile int32_t t72 = -63419288;

	t72 = ((x389<=(x390*x391))==x392);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MAX;
	volatile uint32_t x395 = 3U;
	int16_t x396 = INT16_MIN;
	int32_t t73 = -14;

	t73 = ((x393<=(x394*x395))==x396);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x401 = -1;
	uint64_t x402 = UINT64_MAX;
	int32_t x403 = INT32_MIN;
	int32_t x404 = 9343367;
	volatile int32_t t74 = -3;

	t74 = ((x401<=(x402*x403))==x404);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x410 = -1;
	static uint32_t x411 = 13U;
	static int8_t x412 = -1;
	volatile int32_t t75 = -2132;

	t75 = ((x409<=(x410*x411))==x412);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x413 = 1101865642504727988LL;
	static int8_t x414 = 5;
	int32_t x415 = 131;
	uint32_t x416 = 797U;
	volatile int32_t t76 = 236;

	t76 = ((x413<=(x414*x415))==x416);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x433 = 22020U;
	int8_t x434 = 0;
	int64_t x435 = INT64_MAX;
	uint32_t x436 = 5434U;
	volatile int32_t t77 = 0;

	t77 = ((x433<=(x434*x435))==x436);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x441 = INT64_MIN;
	int64_t x442 = -12481LL;
	uint64_t x443 = 43533173335086LLU;
	uint64_t x444 = 27LLU;
	volatile int32_t t78 = 5823;

	t78 = ((x441<=(x442*x443))==x444);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x445 = -1LL;
	static int32_t x446 = 40;
	int32_t x447 = 2;
	volatile uint64_t x448 = UINT64_MAX;
	static int32_t t79 = 1620656;

	t79 = ((x445<=(x446*x447))==x448);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x449 = UINT32_MAX;
	uint16_t x450 = 5U;
	int64_t x451 = -8803510200672838LL;
	int8_t x452 = 36;

	t80 = ((x449<=(x450*x451))==x452);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x454 = UINT8_MAX;
	int8_t x455 = INT8_MIN;

	t81 = ((x453<=(x454*x455))==x456);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x457 = 2;
	uint16_t x458 = UINT16_MAX;

	t82 = ((x457<=(x458*x459))==x460);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x461 = INT64_MIN;
	int32_t x462 = -1;
	volatile int8_t x463 = INT8_MAX;
	int16_t x464 = INT16_MIN;
	volatile int32_t t83 = -310917;

	t83 = ((x461<=(x462*x463))==x464);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x465 = INT32_MAX;
	int16_t x466 = INT16_MAX;
	volatile uint16_t x467 = 197U;
	uint32_t x468 = 63059U;
	volatile int32_t t84 = -1581;

	t84 = ((x465<=(x466*x467))==x468);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x469 = 33199598U;
	uint32_t x470 = UINT32_MAX;
	uint16_t x471 = 0U;
	int64_t x472 = INT64_MAX;
	volatile int32_t t85 = -33506499;

	t85 = ((x469<=(x470*x471))==x472);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = 6;
	int16_t x475 = INT16_MIN;
	static uint32_t x476 = 1699053288U;
	static volatile int32_t t86 = 2649;

	t86 = ((x473<=(x474*x475))==x476);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x477 = INT16_MAX;
	uint8_t x478 = 4U;
	int8_t x479 = 1;
	int32_t t87 = -51349557;

	t87 = ((x477<=(x478*x479))==x480);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x482 = INT32_MIN;
	uint32_t x483 = 2U;
	volatile uint32_t x484 = 210878680U;
	int32_t t88 = 2122;

	t88 = ((x481<=(x482*x483))==x484);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x489 = INT32_MAX;
	int32_t x490 = -1;
	uint32_t x491 = 30220U;
	int16_t x492 = 0;
	volatile int32_t t89 = 1367447;

	t89 = ((x489<=(x490*x491))==x492);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x497 = -1;
	int16_t x498 = 0;
	volatile int8_t x499 = -3;

	t90 = ((x497<=(x498*x499))==x500);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x501 = -270;
	static uint8_t x503 = UINT8_MAX;
	int8_t x504 = INT8_MIN;
	volatile int32_t t91 = 18;

	t91 = ((x501<=(x502*x503))==x504);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x509 = 6;
	int16_t x510 = INT16_MIN;
	int16_t x511 = -1;
	int16_t x512 = INT16_MIN;
	int32_t t92 = -19;

	t92 = ((x509<=(x510*x511))==x512);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x513 = 319040615;
	int16_t x514 = INT16_MIN;
	uint8_t x515 = 1U;
	int64_t x516 = -1LL;
	volatile int32_t t93 = 21006;

	t93 = ((x513<=(x514*x515))==x516);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x518 = -64027LL;
	int32_t x519 = 1874773;
	uint16_t x520 = 12U;
	int32_t t94 = -186;

	t94 = ((x517<=(x518*x519))==x520);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x521 = 10U;
	static volatile int8_t x522 = -37;
	int32_t x523 = -1;
	int32_t x524 = INT32_MIN;
	volatile int32_t t95 = 7525902;

	t95 = ((x521<=(x522*x523))==x524);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x529 = INT64_MAX;
	int32_t x531 = 61835;
	int32_t x532 = -1;

	t96 = ((x529<=(x530*x531))==x532);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x533 = -1;
	int16_t x534 = INT16_MAX;
	int32_t x535 = -1;
	int64_t x536 = -1LL;

	t97 = ((x533<=(x534*x535))==x536);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x541 = 3U;
	static uint64_t x542 = UINT64_MAX;
	int16_t x543 = INT16_MIN;
	uint32_t x544 = UINT32_MAX;
	volatile int32_t t98 = 15;

	t98 = ((x541<=(x542*x543))==x544);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x546 = 107320537948LL;
	uint16_t x547 = 1854U;
	volatile int32_t t99 = 14382;

	t99 = ((x545<=(x546*x547))==x548);

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

