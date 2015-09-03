#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -49676996;
int32_t t3 = -12;
uint32_t x18 = 125U;
uint8_t x27 = 3U;
uint64_t x40 = UINT64_MAX;
int32_t t8 = 574817;
uint8_t x46 = UINT8_MAX;
volatile uint64_t x47 = 22773506059LLU;
static int8_t x61 = -1;
volatile uint32_t x62 = 245437791U;
int8_t x64 = -1;
int8_t x65 = 8;
uint8_t x68 = 1U;
uint32_t x69 = UINT32_MAX;
volatile int32_t t14 = 384746545;
uint8_t x82 = 14U;
int8_t x86 = 0;
static int8_t x95 = -5;
volatile int32_t t18 = -208678877;
volatile int16_t x102 = INT16_MAX;
volatile int32_t x103 = INT32_MIN;
static int16_t x105 = INT16_MAX;
uint8_t x110 = 0U;
int64_t x111 = 4811132326525LL;
int8_t x118 = INT8_MIN;
volatile uint64_t x121 = UINT64_MAX;
volatile uint64_t x132 = 384LLU;
int32_t t27 = -919181816;
static int32_t t28 = 451;
static volatile int32_t t29 = 127336;
int16_t x166 = -1;
int8_t x174 = -1;
static int8_t x175 = 11;
uint64_t x178 = 59324805202LLU;
uint8_t x191 = 31U;
static int32_t t37 = 3810549;
static int32_t t39 = 25;
int16_t x214 = 3;
int32_t x215 = INT32_MIN;
uint32_t x216 = 101688100U;
int64_t x236 = 150511982554861797LL;
int64_t x248 = -102600LL;
static volatile uint64_t x251 = 37469LLU;
uint8_t x259 = 6U;
uint8_t x263 = 1U;
uint32_t x278 = 3U;
volatile int32_t t52 = 137;
int8_t x291 = -2;
static uint8_t x299 = 0U;
int32_t t56 = -2684;
uint32_t x303 = 117682482U;
int32_t t57 = 112376;
uint16_t x306 = 3U;
volatile int8_t x314 = INT8_MAX;
uint32_t x316 = 448608728U;
int16_t x322 = INT16_MAX;
int32_t t62 = -199782;
static int64_t x331 = -1312009LL;
int16_t x332 = INT16_MIN;
uint32_t x337 = 129016U;
uint64_t x338 = UINT64_MAX;
static volatile int32_t x356 = -12;
uint16_t x357 = UINT16_MAX;
uint8_t x358 = 9U;
int32_t x360 = -739;
static int16_t x368 = -1;
int64_t x373 = INT64_MIN;
volatile int32_t t69 = 160551;
int32_t x378 = INT32_MAX;
int8_t x380 = INT8_MAX;
int32_t x384 = 280297;
volatile int16_t x396 = INT16_MIN;
uint8_t x397 = 29U;
int8_t x399 = -1;
volatile uint64_t x400 = UINT64_MAX;
int32_t t76 = 1079313;
int32_t t79 = -26184;
uint16_t x437 = 0U;
uint16_t x444 = UINT16_MAX;
static uint32_t x450 = 311692654U;
int64_t x465 = -1LL;
uint16_t x467 = 233U;
int32_t t85 = 561244109;
uint64_t x480 = 806329697549LLU;
volatile int16_t x484 = 7957;
volatile int64_t x493 = INT64_MIN;
uint32_t x494 = UINT32_MAX;
int16_t x495 = -3728;
static volatile int16_t x500 = INT16_MIN;
static int32_t t90 = -284;
static int8_t x503 = 6;
int32_t x518 = INT32_MAX;
volatile int32_t t95 = 22;
volatile int32_t t96 = 112398465;
int64_t x530 = INT64_MAX;
uint32_t x532 = 15U;
static int32_t t97 = -661303;
static volatile int64_t x533 = -1LL;
volatile int32_t t99 = -123012738;


void f0(void) {
	volatile int64_t x1 = -222660142432801758LL;
	static uint32_t x2 = UINT32_MAX;
	uint8_t x3 = 1U;
	uint32_t x4 = 3389U;
	volatile int32_t t0 = -11148779;

	t0 = ((x1<x2)<=(x3*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = 7U;
	int8_t x8 = INT8_MIN;

	t1 = ((x5<x6)<=(x7*x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 3;
	volatile int16_t x10 = INT16_MAX;
	uint16_t x11 = 20182U;
	static int8_t x12 = 3;
	volatile int32_t t2 = -32266092;

	t2 = ((x9<x10)<=(x11*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int16_t x14 = -6;
	uint16_t x15 = 20U;
	uint16_t x16 = 641U;

	t3 = ((x13<x14)<=(x15*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 100U;
	int8_t x19 = -1;
	int64_t x20 = 6784094LL;
	int32_t t4 = -1827062;

	t4 = ((x17<x18)<=(x19*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	uint8_t x28 = 2U;
	volatile int32_t t5 = -799073;

	t5 = ((x25<x26)<=(x27*x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 1312U;
	static int8_t x30 = -10;
	uint32_t x31 = UINT32_MAX;
	static int32_t x32 = INT32_MAX;
	static volatile int32_t t6 = -638257851;

	t6 = ((x29<x30)<=(x31*x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 5U;
	static int8_t x34 = INT8_MIN;
	volatile int16_t x35 = INT16_MIN;
	uint8_t x36 = 0U;
	volatile int32_t t7 = -124826;

	t7 = ((x33<x34)<=(x35*x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = UINT8_MAX;
	int64_t x38 = 2120227LL;
	int16_t x39 = 389;

	t8 = ((x37<x38)<=(x39*x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 1865064149580LLU;
	uint16_t x48 = 217U;
	volatile int32_t t9 = -1968;

	t9 = ((x45<x46)<=(x47*x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x63 = 496192820U;
	volatile int32_t t10 = 1043253;

	t10 = ((x61<x62)<=(x63*x64));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x66 = 896222156U;
	int32_t x67 = 1;
	static int32_t t11 = -994028;

	t11 = ((x65<x66)<=(x67*x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x70 = -266;
	uint8_t x71 = 30U;
	static uint32_t x72 = UINT32_MAX;
	volatile int32_t t12 = 0;

	t12 = ((x69<x70)<=(x71*x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MAX;
	volatile uint8_t x74 = 1U;
	static int8_t x75 = 3;
	int64_t x76 = -603957LL;
	static int32_t t13 = 146953;

	t13 = ((x73<x74)<=(x75*x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	static uint8_t x79 = 0U;
	int8_t x80 = 32;

	t14 = ((x77<x78)<=(x79*x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -2387;
	volatile uint16_t x83 = 7237U;
	volatile int16_t x84 = -14;
	int32_t t15 = 103205897;

	t15 = ((x81<x82)<=(x83*x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int64_t x87 = -1LL;
	int8_t x88 = 0;
	static volatile int32_t t16 = -1;

	t16 = ((x85<x86)<=(x87*x88));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MIN;
	uint32_t x91 = 60931277U;
	uint32_t x92 = UINT32_MAX;
	int32_t t17 = 536696228;

	t17 = ((x89<x90)<=(x91*x92));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 4249880363698992211LL;
	uint8_t x94 = 29U;
	volatile uint64_t x96 = UINT64_MAX;

	t18 = ((x93<x94)<=(x95*x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int64_t x104 = -1LL;
	volatile int32_t t19 = -12240;

	t19 = ((x101<x102)<=(x103*x104));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x106 = INT16_MIN;
	int16_t x107 = -701;
	int16_t x108 = INT16_MIN;
	volatile int32_t t20 = -20322;

	t20 = ((x105<x106)<=(x107*x108));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	static volatile uint16_t x112 = 1930U;
	volatile int32_t t21 = -2998384;

	t21 = ((x109<x110)<=(x111*x112));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = UINT8_MAX;
	int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = 776176955709LLU;
	int32_t t22 = -1;

	t22 = ((x113<x114)<=(x115*x116));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x117 = UINT64_MAX;
	uint64_t x119 = 272576700518LLU;
	uint64_t x120 = 1064410179654LLU;
	volatile int32_t t23 = 163901686;

	t23 = ((x117<x118)<=(x119*x120));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x122 = 179;
	static volatile uint64_t x123 = 5LLU;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t24 = 519749;

	t24 = ((x121<x122)<=(x123*x124));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x125 = 6879272767293LLU;
	uint32_t x126 = 712U;
	volatile int32_t x127 = -335;
	int16_t x128 = INT16_MAX;
	static volatile int32_t t25 = -11;

	t25 = ((x125<x126)<=(x127*x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x129 = -11731650;
	static int16_t x130 = -1;
	int16_t x131 = -1;
	volatile int32_t t26 = 3927;

	t26 = ((x129<x130)<=(x131*x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = -7;
	volatile int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	static int32_t x140 = -298709;

	t27 = ((x137<x138)<=(x139*x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x153 = -440859LL;
	uint16_t x154 = 999U;
	volatile int64_t x155 = -862233334LL;
	uint32_t x156 = 105U;

	t28 = ((x153<x154)<=(x155*x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = INT16_MAX;
	int16_t x158 = INT16_MIN;
	int16_t x159 = -1;
	static uint32_t x160 = UINT32_MAX;

	t29 = ((x157<x158)<=(x159*x160));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x161 = 6854U;
	int8_t x162 = INT8_MAX;
	uint64_t x163 = 350110250LLU;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t30 = 13;

	t30 = ((x161<x162)<=(x163*x164));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x165 = INT8_MAX;
	uint16_t x167 = 177U;
	uint16_t x168 = 1U;
	static volatile int32_t t31 = -20;

	t31 = ((x165<x166)<=(x167*x168));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x173 = 2U;
	int8_t x176 = -1;
	volatile int32_t t32 = 683;

	t32 = ((x173<x174)<=(x175*x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x177 = INT16_MIN;
	volatile int8_t x179 = INT8_MIN;
	uint8_t x180 = 8U;
	int32_t t33 = -73472;

	t33 = ((x177<x178)<=(x179*x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x181 = 12U;
	volatile uint32_t x182 = UINT32_MAX;
	volatile int64_t x183 = -4347LL;
	uint32_t x184 = 728938U;
	volatile int32_t t34 = 48;

	t34 = ((x181<x182)<=(x183*x184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MAX;
	int16_t x192 = -136;
	static int32_t t35 = -47288;

	t35 = ((x189<x190)<=(x191*x192));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MAX;
	int16_t x199 = 0;
	uint64_t x200 = 397486181LLU;
	static int32_t t36 = -369187418;

	t36 = ((x197<x198)<=(x199*x200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MAX;
	volatile uint32_t x202 = UINT32_MAX;
	uint16_t x203 = UINT16_MAX;
	static int16_t x204 = INT16_MAX;

	t37 = ((x201<x202)<=(x203*x204));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x205 = INT64_MIN;
	static volatile int32_t x206 = 79;
	int16_t x207 = -1;
	static uint16_t x208 = 14U;
	int32_t t38 = -114;

	t38 = ((x205<x206)<=(x207*x208));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x209 = -1;
	static volatile int8_t x210 = -1;
	static uint32_t x211 = 255U;
	int16_t x212 = INT16_MAX;

	t39 = ((x209<x210)<=(x211*x212));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x213 = UINT32_MAX;
	static int32_t t40 = 7369932;

	t40 = ((x213<x214)<=(x215*x216));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = 0;
	int64_t x218 = -1665880990701413LL;
	static int64_t x219 = INT64_MIN;
	uint64_t x220 = 53045LLU;
	volatile int32_t t41 = -472880;

	t41 = ((x217<x218)<=(x219*x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x233 = INT32_MIN;
	static int64_t x234 = -1LL;
	uint8_t x235 = 0U;
	static int32_t t42 = 22;

	t42 = ((x233<x234)<=(x235*x236));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	uint64_t x239 = UINT64_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t43 = 708173;

	t43 = ((x237<x238)<=(x239*x240));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x241 = 1964757;
	int64_t x242 = -8467558LL;
	uint32_t x243 = UINT32_MAX;
	static volatile int8_t x244 = -7;
	volatile int32_t t44 = 407737895;

	t44 = ((x241<x242)<=(x243*x244));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = -15965LL;
	static int64_t x247 = -361792558190LL;
	static volatile int32_t t45 = 219670934;

	t45 = ((x245<x246)<=(x247*x248));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x249 = -1;
	static int8_t x250 = -5;
	volatile uint64_t x252 = 25944436LLU;
	int32_t t46 = 20686094;

	t46 = ((x249<x250)<=(x251*x252));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x257 = 15U;
	int8_t x258 = -1;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t47 = 0;

	t47 = ((x257<x258)<=(x259*x260));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x261 = 1U;
	uint32_t x262 = 568U;
	int8_t x264 = -4;
	volatile int32_t t48 = 63123;

	t48 = ((x261<x262)<=(x263*x264));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x265 = -1;
	volatile uint16_t x266 = UINT16_MAX;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = 1U;
	volatile int32_t t49 = -3956700;

	t49 = ((x265<x266)<=(x267*x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x269 = 5837194U;
	int32_t x270 = 3;
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t50 = 45;

	t50 = ((x269<x270)<=(x271*x272));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x273 = INT8_MIN;
	volatile int64_t x274 = INT64_MIN;
	volatile int32_t x275 = -1;
	int32_t x276 = -7663;
	volatile int32_t t51 = 218661;

	t51 = ((x273<x274)<=(x275*x276));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x277 = INT64_MAX;
	int16_t x279 = -1;
	uint16_t x280 = 86U;

	t52 = ((x277<x278)<=(x279*x280));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x281 = UINT32_MAX;
	volatile int8_t x282 = INT8_MIN;
	uint16_t x283 = 15U;
	volatile int64_t x284 = -4655414327LL;
	volatile int32_t t53 = 5193;

	t53 = ((x281<x282)<=(x283*x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x289 = 107909513;
	int64_t x290 = -1LL;
	volatile int64_t x292 = -1LL;
	volatile int32_t t54 = 169;

	t54 = ((x289<x290)<=(x291*x292));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	volatile uint16_t x295 = 50U;
	uint16_t x296 = 514U;
	volatile int32_t t55 = -386;

	t55 = ((x293<x294)<=(x295*x296));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x297 = 59474246884295LLU;
	static uint16_t x298 = UINT16_MAX;
	uint16_t x300 = UINT16_MAX;

	t56 = ((x297<x298)<=(x299*x300));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x301 = UINT64_MAX;
	uint64_t x302 = UINT64_MAX;
	int32_t x304 = 23867796;

	t57 = ((x301<x302)<=(x303*x304));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x305 = INT32_MAX;
	int8_t x307 = 1;
	static int16_t x308 = -9159;
	volatile int32_t t58 = 1187890;

	t58 = ((x305<x306)<=(x307*x308));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x309 = -1002222321LL;
	int16_t x310 = 566;
	uint32_t x311 = 103947U;
	int64_t x312 = -36320516072983LL;
	int32_t t59 = 12;

	t59 = ((x309<x310)<=(x311*x312));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x313 = 74U;
	int64_t x315 = -1LL;
	volatile int32_t t60 = -211219392;

	t60 = ((x313<x314)<=(x315*x316));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MIN;
	int16_t x319 = -1;
	int16_t x320 = INT16_MIN;
	int32_t t61 = 37;

	t61 = ((x317<x318)<=(x319*x320));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x321 = 0;
	uint64_t x323 = UINT64_MAX;
	uint16_t x324 = 20771U;

	t62 = ((x321<x322)<=(x323*x324));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x329 = 470659736LL;
	uint32_t x330 = 25U;
	static volatile int32_t t63 = -4260895;

	t63 = ((x329<x330)<=(x331*x332));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x339 = -13173LL;
	volatile uint16_t x340 = 8338U;
	static int32_t t64 = 12;

	t64 = ((x337<x338)<=(x339*x340));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x353 = 365358;
	volatile int64_t x354 = INT64_MIN;
	static int16_t x355 = -1;
	int32_t t65 = -1;

	t65 = ((x353<x354)<=(x355*x356));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x359 = UINT8_MAX;
	volatile int32_t t66 = -343;

	t66 = ((x357<x358)<=(x359*x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 3U;
	static volatile int32_t t67 = 1442;

	t67 = ((x365<x366)<=(x367*x368));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = 52105491423812853LLU;
	static int16_t x371 = INT16_MIN;
	uint8_t x372 = 0U;
	volatile int32_t t68 = 520;

	t68 = ((x369<x370)<=(x371*x372));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x374 = 15U;
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;

	t69 = ((x373<x374)<=(x375*x376));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x377 = INT16_MIN;
	volatile int8_t x379 = INT8_MIN;
	volatile int32_t t70 = -25222;

	t70 = ((x377<x378)<=(x379*x380));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x381 = -1;
	int64_t x382 = 17006653LL;
	uint8_t x383 = 0U;
	volatile int32_t t71 = -44;

	t71 = ((x381<x382)<=(x383*x384));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x385 = -1;
	int8_t x386 = -1;
	int8_t x387 = INT8_MAX;
	static volatile int32_t x388 = 61626;
	volatile int32_t t72 = 1124;

	t72 = ((x385<x386)<=(x387*x388));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x393 = -443;
	int8_t x394 = -14;
	uint8_t x395 = 1U;
	static volatile int32_t t73 = -16787;

	t73 = ((x393<x394)<=(x395*x396));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x398 = UINT16_MAX;
	int32_t t74 = -31193;

	t74 = ((x397<x398)<=(x399*x400));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x401 = INT8_MIN;
	volatile uint8_t x402 = 13U;
	uint16_t x403 = UINT16_MAX;
	int8_t x404 = -3;
	int32_t t75 = -268246182;

	t75 = ((x401<x402)<=(x403*x404));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x409 = INT64_MIN;
	int16_t x410 = INT16_MIN;
	int16_t x411 = -1;
	int64_t x412 = -1LL;

	t76 = ((x409<x410)<=(x411*x412));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x413 = 56674LL;
	int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = UINT16_MAX;
	static volatile int32_t t77 = 1097397;

	t77 = ((x413<x414)<=(x415*x416));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x417 = UINT16_MAX;
	volatile int16_t x418 = -410;
	int8_t x419 = INT8_MAX;
	int32_t x420 = -1;
	volatile int32_t t78 = 11160980;

	t78 = ((x417<x418)<=(x419*x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int64_t x422 = INT64_MIN;
	static uint8_t x423 = 12U;
	uint8_t x424 = 88U;

	t79 = ((x421<x422)<=(x423*x424));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x429 = INT16_MIN;
	static int16_t x430 = 92;
	static int16_t x431 = -1;
	static volatile int16_t x432 = -1;
	volatile int32_t t80 = -315945163;

	t80 = ((x429<x430)<=(x431*x432));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x438 = -9LL;
	static int64_t x439 = -1LL;
	int32_t x440 = INT32_MAX;
	volatile int32_t t81 = -327380875;

	t81 = ((x437<x438)<=(x439*x440));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x441 = INT64_MIN;
	int64_t x442 = -1995LL;
	uint16_t x443 = 61U;
	volatile int32_t t82 = 118;

	t82 = ((x441<x442)<=(x443*x444));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = -1LL;
	volatile int8_t x447 = INT8_MAX;
	int16_t x448 = INT16_MIN;
	volatile int32_t t83 = -983;

	t83 = ((x445<x446)<=(x447*x448));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x449 = -1;
	static uint8_t x451 = 4U;
	int32_t x452 = -149;
	volatile int32_t t84 = 0;

	t84 = ((x449<x450)<=(x451*x452));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x466 = UINT64_MAX;
	int16_t x468 = INT16_MIN;

	t85 = ((x465<x466)<=(x467*x468));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x469 = 3396188146899LLU;
	static int8_t x470 = INT8_MIN;
	int16_t x471 = 804;
	uint64_t x472 = UINT64_MAX;
	int32_t t86 = 8;

	t86 = ((x469<x470)<=(x471*x472));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x477 = -1;
	uint64_t x478 = 63576681807LLU;
	int32_t x479 = INT32_MAX;
	static volatile int32_t t87 = 286;

	t87 = ((x477<x478)<=(x479*x480));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x481 = -1;
	static volatile int32_t x482 = 204091216;
	uint8_t x483 = UINT8_MAX;
	static volatile int32_t t88 = -27241636;

	t88 = ((x481<x482)<=(x483*x484));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x496 = INT16_MIN;
	volatile int32_t t89 = 27;

	t89 = ((x493<x494)<=(x495*x496));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x497 = 253571436U;
	int16_t x498 = INT16_MIN;
	static volatile int16_t x499 = INT16_MAX;

	t90 = ((x497<x498)<=(x499*x500));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x501 = 0;
	uint64_t x502 = UINT64_MAX;
	static int32_t x504 = -5258;
	int32_t t91 = -100490;

	t91 = ((x501<x502)<=(x503*x504));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x509 = -1;
	int8_t x510 = INT8_MIN;
	int16_t x511 = 0;
	int8_t x512 = -1;
	int32_t t92 = -2005606;

	t92 = ((x509<x510)<=(x511*x512));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x513 = -1;
	volatile int16_t x514 = 1;
	int8_t x515 = -2;
	static int8_t x516 = INT8_MAX;
	volatile int32_t t93 = -1094278;

	t93 = ((x513<x514)<=(x515*x516));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x517 = UINT8_MAX;
	static uint64_t x519 = 12587LLU;
	uint64_t x520 = 68481495497LLU;
	int32_t t94 = 6309;

	t94 = ((x517<x518)<=(x519*x520));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x521 = -1;
	int32_t x522 = 1;
	volatile int16_t x523 = -1;
	static int8_t x524 = INT8_MIN;

	t95 = ((x521<x522)<=(x523*x524));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x525 = -1;
	uint64_t x526 = UINT64_MAX;
	uint8_t x527 = 3U;
	volatile int32_t x528 = -1;

	t96 = ((x525<x526)<=(x527*x528));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x529 = 46U;
	int16_t x531 = -468;

	t97 = ((x529<x530)<=(x531*x532));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x534 = INT64_MIN;
	int64_t x535 = -1LL;
	int8_t x536 = INT8_MIN;
	int32_t t98 = -15157;

	t98 = ((x533<x534)<=(x535*x536));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x537 = 1;
	uint8_t x538 = 0U;
	volatile uint64_t x539 = 209617775987584952LLU;
	static uint16_t x540 = UINT16_MAX;

	t99 = ((x537<x538)<=(x539*x540));

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

