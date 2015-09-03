#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x16 = 29U;
volatile int32_t t2 = 1;
static int32_t t4 = -120;
static uint64_t x31 = 7752LLU;
int8_t x32 = INT8_MIN;
int32_t t8 = -3649;
uint64_t x47 = 46229965007737854LLU;
uint32_t x49 = 25475U;
volatile int16_t x52 = INT16_MIN;
uint8_t x64 = 63U;
uint64_t x65 = 56653998932140LLU;
static int16_t x66 = INT16_MIN;
uint32_t x70 = 21U;
int32_t t14 = -204126;
volatile uint32_t x73 = UINT32_MAX;
int8_t x75 = -1;
int8_t x85 = INT8_MIN;
static int16_t x86 = INT16_MAX;
uint16_t x95 = 0U;
volatile int64_t x101 = -1LL;
int32_t t19 = -97252;
volatile int8_t x109 = INT8_MIN;
int64_t x112 = INT64_MAX;
volatile int16_t x116 = INT16_MIN;
uint8_t x120 = 123U;
uint8_t x123 = 3U;
uint16_t x128 = 9U;
int32_t t25 = -6145;
int32_t t26 = -2;
int16_t x139 = 4;
int32_t t28 = -247030;
volatile int16_t x147 = -1;
int8_t x165 = -4;
volatile uint32_t x166 = 5U;
uint16_t x175 = UINT16_MAX;
volatile int32_t t35 = -1801066;
static int64_t x177 = INT64_MIN;
static uint32_t x178 = 4180375U;
volatile int64_t x183 = -1LL;
int16_t x188 = INT16_MAX;
int32_t t38 = -263260874;
volatile int16_t x202 = -1;
volatile int8_t x205 = INT8_MIN;
static uint32_t x206 = UINT32_MAX;
volatile int8_t x221 = INT8_MIN;
int8_t x222 = INT8_MAX;
static uint32_t x226 = 47844U;
static int32_t t46 = 2413214;
int32_t t47 = -97;
volatile uint16_t x234 = 1423U;
uint64_t x236 = UINT64_MAX;
int32_t x240 = INT32_MAX;
int32_t t49 = -1101267;
volatile uint8_t x242 = UINT8_MAX;
volatile int32_t t50 = 9;
volatile uint32_t x248 = 78933136U;
int16_t x260 = INT16_MIN;
int16_t x272 = INT16_MAX;
uint8_t x282 = 26U;
uint32_t x290 = 0U;
volatile uint32_t x302 = 290508676U;
static int32_t x304 = INT32_MIN;
uint64_t x320 = 21LLU;
static int8_t x324 = INT8_MIN;
volatile int32_t t65 = -708807;
int16_t x326 = INT16_MIN;
static int8_t x330 = INT8_MIN;
int8_t x333 = -11;
volatile int16_t x336 = -5447;
uint16_t x342 = 1525U;
int32_t t70 = 24;
static int16_t x353 = INT16_MIN;
static uint64_t x355 = 1017LLU;
int64_t x369 = -295LL;
int8_t x376 = -1;
int8_t x385 = -1;
uint32_t x392 = UINT32_MAX;
int8_t x405 = INT8_MIN;
int32_t x410 = INT32_MAX;
uint32_t x411 = UINT32_MAX;
uint16_t x420 = 6772U;
volatile int16_t x422 = INT16_MIN;
int64_t x423 = -1LL;
volatile uint64_t x427 = 6412752894LLU;
int32_t t87 = 1;
volatile int16_t x443 = INT16_MAX;
int32_t t89 = -1;
static int8_t x469 = 9;
int8_t x475 = INT8_MAX;
volatile int8_t x476 = INT8_MIN;
static int16_t x477 = INT16_MAX;
volatile int32_t t95 = -22;
int64_t x482 = INT64_MAX;
static volatile uint64_t x483 = 21893LLU;
static volatile int32_t t97 = -1046799;
int32_t x501 = INT32_MIN;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	static int64_t x2 = INT64_MIN;
	int64_t x3 = 0LL;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -50362113;

	t0 = ((x1|(x2*x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 5631U;
	static uint32_t x6 = 302729U;
	int8_t x7 = -7;
	uint16_t x8 = 2081U;
	int32_t t1 = -359;

	t1 = ((x5|(x6*x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = 591;
	int64_t x14 = 1LL;
	uint64_t x15 = 72058LLU;

	t2 = ((x13|(x14*x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = UINT8_MAX;
	uint8_t x22 = 11U;
	int16_t x23 = -1;
	int32_t x24 = INT32_MAX;
	int32_t t3 = 195228;

	t3 = ((x21|(x22*x23))<x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x25 = INT32_MIN;
	int8_t x26 = 14;
	int64_t x27 = 1029303565471381LL;
	int8_t x28 = 45;

	t4 = ((x25|(x26*x27))<x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	volatile int64_t x30 = -126809802153310538LL;
	int32_t t5 = -16945;

	t5 = ((x29|(x30*x31))<x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MIN;
	uint8_t x35 = 1U;
	uint32_t x36 = 916U;
	volatile int32_t t6 = 0;

	t6 = ((x33|(x34*x35))<x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -9;
	int16_t x38 = 0;
	uint64_t x39 = 52742338129LLU;
	uint16_t x40 = 7035U;
	int32_t t7 = -5;

	t7 = ((x37|(x38*x39))<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 9038433290505551370LLU;
	volatile int8_t x42 = INT8_MIN;
	uint32_t x43 = 29825U;
	static int8_t x44 = INT8_MIN;

	t8 = ((x41|(x42*x43))<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = 3422038490673777491LL;
	static int64_t x46 = INT64_MIN;
	int32_t x48 = INT32_MAX;
	static int32_t t9 = -35670227;

	t9 = ((x45|(x46*x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x50 = 109828U;
	uint16_t x51 = UINT16_MAX;
	volatile int32_t t10 = -4;

	t10 = ((x49|(x50*x51))<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = -1;
	static uint32_t x58 = 12U;
	int16_t x59 = INT16_MIN;
	static volatile int8_t x60 = -1;
	int32_t t11 = -61;

	t11 = ((x57|(x58*x59))<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x61 = -1;
	static int16_t x62 = -1;
	uint32_t x63 = UINT32_MAX;
	volatile int32_t t12 = 5175478;

	t12 = ((x61|(x62*x63))<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x67 = 135654978527LLU;
	static uint32_t x68 = 14U;
	volatile int32_t t13 = -1150372;

	t13 = ((x65|(x66*x67))<x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x69 = 0U;
	int8_t x71 = -1;
	int32_t x72 = 278766088;

	t14 = ((x69|(x70*x71))<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x74 = INT8_MAX;
	uint16_t x76 = UINT16_MAX;
	static volatile int32_t t15 = 7;

	t15 = ((x73|(x74*x75))<x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x81 = -15125;
	uint32_t x82 = 1U;
	int16_t x83 = -1;
	uint16_t x84 = 14U;
	static volatile int32_t t16 = 4;

	t16 = ((x81|(x82*x83))<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x87 = -1;
	int64_t x88 = 121LL;
	int32_t t17 = 470940;

	t17 = ((x85|(x86*x87))<x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = 104U;
	volatile uint8_t x94 = 39U;
	static uint16_t x96 = 1U;
	int32_t t18 = -59;

	t18 = ((x93|(x94*x95))<x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x102 = 362LL;
	int32_t x103 = INT32_MIN;
	uint64_t x104 = 906493603LLU;

	t19 = ((x101|(x102*x103))<x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x105 = 31U;
	static int16_t x106 = INT16_MAX;
	int8_t x107 = 2;
	int16_t x108 = 1626;
	int32_t t20 = 8677717;

	t20 = ((x105|(x106*x107))<x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x110 = 14782955LLU;
	int64_t x111 = -23589252521696421LL;
	volatile int32_t t21 = -3320;

	t21 = ((x109|(x110*x111))<x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x113 = UINT64_MAX;
	uint8_t x114 = UINT8_MAX;
	uint64_t x115 = 47588LLU;
	volatile int32_t t22 = 1576;

	t22 = ((x113|(x114*x115))<x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = -71LL;
	static uint8_t x119 = 1U;
	int32_t t23 = -629039;

	t23 = ((x117|(x118*x119))<x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 43246089855806LLU;
	int64_t x122 = -1LL;
	volatile int32_t x124 = -61883491;
	int32_t t24 = 71669050;

	t24 = ((x121|(x122*x123))<x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = 213978237LL;
	volatile int32_t x126 = 60;
	int8_t x127 = -1;

	t25 = ((x125|(x126*x127))<x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = 295599LL;
	uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 0LLU;
	int16_t x132 = 335;

	t26 = ((x129|(x130*x131))<x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x133 = 2453562;
	int16_t x134 = -6;
	static uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t27 = -284500;

	t27 = ((x133|(x134*x135))<x136);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = -1;
	uint32_t x140 = 5027704U;

	t28 = ((x137|(x138*x139))<x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = -1;
	uint32_t x142 = UINT32_MAX;
	static uint64_t x143 = UINT64_MAX;
	volatile int8_t x144 = INT8_MIN;
	int32_t t29 = 760;

	t29 = ((x141|(x142*x143))<x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = INT8_MAX;
	static uint32_t x146 = 3447U;
	int64_t x148 = -4LL;
	volatile int32_t t30 = -48;

	t30 = ((x145|(x146*x147))<x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -561;
	int8_t x150 = -1;
	uint8_t x151 = 19U;
	int64_t x152 = INT64_MAX;
	int32_t t31 = 236;

	t31 = ((x149|(x150*x151))<x152);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 14U;
	uint32_t x154 = 896U;
	volatile uint64_t x155 = 13401LLU;
	uint32_t x156 = 675524631U;
	int32_t t32 = 944;

	t32 = ((x153|(x154*x155))<x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x167 = -736393227345814LL;
	static int32_t x168 = 46265628;
	int32_t t33 = 810123331;

	t33 = ((x165|(x166*x167))<x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = 15911967014461LL;
	uint64_t x170 = 15571673177829LLU;
	int64_t x171 = 27LL;
	static int8_t x172 = INT8_MIN;
	int32_t t34 = 1;

	t34 = ((x169|(x170*x171))<x172);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = -5535;
	volatile int64_t x174 = -60500095648LL;
	static volatile int64_t x176 = -1LL;

	t35 = ((x173|(x174*x175))<x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x179 = 31;
	uint8_t x180 = 73U;
	volatile int32_t t36 = 134578693;

	t36 = ((x177|(x178*x179))<x180);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x181 = 1055;
	uint8_t x182 = 6U;
	static uint8_t x184 = UINT8_MAX;
	static volatile int32_t t37 = 769;

	t37 = ((x181|(x182*x183))<x184);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MIN;
	volatile int8_t x186 = INT8_MIN;
	int64_t x187 = 1792663LL;

	t38 = ((x185|(x186*x187))<x188);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x189 = -203;
	int8_t x190 = INT8_MAX;
	int32_t x191 = 3358194;
	int64_t x192 = -95314761122107LL;
	static volatile int32_t t39 = 1465;

	t39 = ((x189|(x190*x191))<x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 19099609U;
	static volatile uint64_t x194 = 1574644LLU;
	int8_t x195 = INT8_MIN;
	volatile int16_t x196 = -1;
	static int32_t t40 = -120061;

	t40 = ((x193|(x194*x195))<x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x197 = 4U;
	int64_t x198 = -1LL;
	int64_t x199 = 153960130LL;
	uint16_t x200 = 1205U;
	volatile int32_t t41 = 1611192;

	t41 = ((x197|(x198*x199))<x200);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = INT32_MIN;
	static volatile int8_t x203 = -33;
	static int32_t x204 = INT32_MIN;
	static int32_t t42 = 5280;

	t42 = ((x201|(x202*x203))<x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x207 = INT16_MIN;
	static uint32_t x208 = 2U;
	volatile int32_t t43 = 373;

	t43 = ((x205|(x206*x207))<x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x213 = -3168910;
	uint16_t x214 = 290U;
	static volatile uint64_t x215 = 28812317688299LLU;
	int32_t x216 = INT32_MIN;
	int32_t t44 = -55892;

	t44 = ((x213|(x214*x215))<x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x223 = UINT32_MAX;
	int64_t x224 = INT64_MAX;
	static int32_t t45 = 6925003;

	t45 = ((x221|(x222*x223))<x224);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = INT8_MIN;
	static uint32_t x227 = 13823U;
	int16_t x228 = 1;

	t46 = ((x225|(x226*x227))<x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = -1;
	uint64_t x230 = 281230626746309LLU;
	int16_t x231 = -1;
	int64_t x232 = -1LL;

	t47 = ((x229|(x230*x231))<x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = 18102;
	uint64_t x235 = 11252687754353LLU;
	int32_t t48 = -22493554;

	t48 = ((x233|(x234*x235))<x236);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x237 = UINT64_MAX;
	volatile int16_t x238 = 0;
	uint16_t x239 = UINT16_MAX;

	t49 = ((x237|(x238*x239))<x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = INT8_MIN;
	int64_t x243 = 3400766362927LL;
	int16_t x244 = 249;

	t50 = ((x241|(x242*x243))<x244);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = -255;
	volatile int32_t x246 = -1;
	uint64_t x247 = 9728LLU;
	static volatile int32_t t51 = -72926404;

	t51 = ((x245|(x246*x247))<x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = -12690437493LL;
	int32_t x250 = 4608131;
	int64_t x251 = 753LL;
	int8_t x252 = INT8_MIN;
	int32_t t52 = 970;

	t52 = ((x249|(x250*x251))<x252);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x257 = UINT8_MAX;
	uint8_t x258 = 0U;
	uint8_t x259 = 0U;
	static int32_t t53 = 226759;

	t53 = ((x257|(x258*x259))<x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x261 = INT64_MAX;
	static int64_t x262 = -1LL;
	volatile int32_t x263 = INT32_MAX;
	static uint64_t x264 = UINT64_MAX;
	int32_t t54 = 114;

	t54 = ((x261|(x262*x263))<x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x265 = 2U;
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MIN;
	int16_t x268 = -808;
	volatile int32_t t55 = 3555703;

	t55 = ((x265|(x266*x267))<x268);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x269 = 2U;
	static int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MIN;
	int32_t t56 = 27221549;

	t56 = ((x269|(x270*x271))<x272);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x273 = INT8_MIN;
	static uint64_t x274 = 2921LLU;
	int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MIN;
	volatile int32_t t57 = 308533212;

	t57 = ((x273|(x274*x275))<x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = -1;
	int16_t x278 = 40;
	uint8_t x279 = 64U;
	uint64_t x280 = 487122205254358LLU;
	int32_t t58 = 86200146;

	t58 = ((x277|(x278*x279))<x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x281 = INT32_MIN;
	volatile int32_t x283 = 872242;
	int8_t x284 = INT8_MAX;
	int32_t t59 = -93414;

	t59 = ((x281|(x282*x283))<x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x289 = 592047U;
	int16_t x291 = 0;
	int32_t x292 = INT32_MAX;
	int32_t t60 = -89652170;

	t60 = ((x289|(x290*x291))<x292);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x301 = -1;
	static int8_t x303 = INT8_MAX;
	volatile int32_t t61 = 180930047;

	t61 = ((x301|(x302*x303))<x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = -1;
	static int8_t x311 = INT8_MIN;
	static uint8_t x312 = UINT8_MAX;
	static int32_t t62 = -141299;

	t62 = ((x309|(x310*x311))<x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x313 = 7U;
	int32_t x314 = -114;
	volatile int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MAX;
	volatile int32_t t63 = -4;

	t63 = ((x313|(x314*x315))<x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x317 = INT64_MAX;
	int64_t x318 = -232286LL;
	static int32_t x319 = INT32_MIN;
	volatile int32_t t64 = 1;

	t64 = ((x317|(x318*x319))<x320);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x321 = -1;
	uint64_t x322 = 2329671069555413149LLU;
	int16_t x323 = 1;

	t65 = ((x321|(x322*x323))<x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x325 = INT32_MIN;
	int8_t x327 = -23;
	int16_t x328 = INT16_MIN;
	volatile int32_t t66 = -268954497;

	t66 = ((x325|(x326*x327))<x328);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x329 = -1LL;
	int64_t x331 = -5404LL;
	uint32_t x332 = 8U;
	volatile int32_t t67 = -40899;

	t67 = ((x329|(x330*x331))<x332);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x334 = -1;
	int64_t x335 = INT64_MAX;
	int32_t t68 = 7809;

	t68 = ((x333|(x334*x335))<x336);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x337 = 337435741609248375LL;
	int16_t x338 = INT16_MAX;
	volatile uint32_t x339 = 303991U;
	static volatile int64_t x340 = -1LL;
	int32_t t69 = -914;

	t69 = ((x337|(x338*x339))<x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x341 = -12;
	int64_t x343 = -1LL;
	static int8_t x344 = INT8_MIN;

	t70 = ((x341|(x342*x343))<x344);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x345 = 105U;
	volatile uint32_t x346 = UINT32_MAX;
	int16_t x347 = -10595;
	uint32_t x348 = 19309732U;
	static volatile int32_t t71 = 3;

	t71 = ((x345|(x346*x347))<x348);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x349 = UINT64_MAX;
	static uint16_t x350 = UINT16_MAX;
	static volatile int16_t x351 = INT16_MIN;
	volatile uint16_t x352 = UINT16_MAX;
	static int32_t t72 = -1;

	t72 = ((x349|(x350*x351))<x352);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x354 = INT16_MIN;
	static volatile int32_t x356 = INT32_MIN;
	static volatile int32_t t73 = 13;

	t73 = ((x353|(x354*x355))<x356);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x365 = INT32_MIN;
	volatile uint64_t x366 = 59115045880595LLU;
	static volatile uint64_t x367 = UINT64_MAX;
	volatile uint64_t x368 = UINT64_MAX;
	int32_t t74 = -2194614;

	t74 = ((x365|(x366*x367))<x368);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x370 = -1;
	static int8_t x371 = -1;
	int32_t x372 = 9869;
	int32_t t75 = -7;

	t75 = ((x369|(x370*x371))<x372);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x373 = 5U;
	volatile int8_t x374 = 1;
	uint16_t x375 = 219U;
	volatile int32_t t76 = 5657381;

	t76 = ((x373|(x374*x375))<x376);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x377 = INT16_MIN;
	volatile uint8_t x378 = 3U;
	int8_t x379 = INT8_MAX;
	uint32_t x380 = 1001912927U;
	int32_t t77 = -48299;

	t77 = ((x377|(x378*x379))<x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x386 = 6U;
	int8_t x387 = -1;
	int32_t x388 = INT32_MAX;
	int32_t t78 = 0;

	t78 = ((x385|(x386*x387))<x388);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = 1U;
	uint16_t x391 = UINT16_MAX;
	static volatile int32_t t79 = 858433;

	t79 = ((x389|(x390*x391))<x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x393 = UINT16_MAX;
	static uint16_t x394 = 4477U;
	uint16_t x395 = 14553U;
	uint16_t x396 = 62U;
	int32_t t80 = 182376990;

	t80 = ((x393|(x394*x395))<x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x397 = -11;
	volatile int64_t x398 = -1LL;
	int32_t x399 = INT32_MIN;
	volatile int8_t x400 = INT8_MAX;
	volatile int32_t t81 = 328868;

	t81 = ((x397|(x398*x399))<x400);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x401 = -1;
	int8_t x402 = INT8_MAX;
	uint8_t x403 = 22U;
	int16_t x404 = -1;
	volatile int32_t t82 = 3704;

	t82 = ((x401|(x402*x403))<x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x406 = 4U;
	uint16_t x407 = 15162U;
	uint32_t x408 = 5U;
	int32_t t83 = -13804043;

	t83 = ((x405|(x406*x407))<x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x409 = 7586LLU;
	static volatile uint32_t x412 = 446507329U;
	int32_t t84 = -9;

	t84 = ((x409|(x410*x411))<x412);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x417 = INT8_MAX;
	int16_t x418 = -18;
	uint16_t x419 = 15U;
	volatile int32_t t85 = 51045126;

	t85 = ((x417|(x418*x419))<x420);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x421 = 1186U;
	uint32_t x424 = 59673717U;
	static int32_t t86 = -9009299;

	t86 = ((x421|(x422*x423))<x424);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x425 = 13U;
	int8_t x426 = -17;
	static uint32_t x428 = 31U;

	t87 = ((x425|(x426*x427))<x428);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x437 = 441699607U;
	int64_t x438 = -45LL;
	uint8_t x439 = 0U;
	uint64_t x440 = UINT64_MAX;
	int32_t t88 = 6;

	t88 = ((x437|(x438*x439))<x440);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x441 = UINT8_MAX;
	volatile uint32_t x442 = 1163197417U;
	uint32_t x444 = UINT32_MAX;

	t89 = ((x441|(x442*x443))<x444);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x445 = 33U;
	int8_t x446 = INT8_MAX;
	int16_t x447 = 2936;
	int8_t x448 = 16;
	volatile int32_t t90 = -735136;

	t90 = ((x445|(x446*x447))<x448);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x449 = UINT16_MAX;
	uint16_t x450 = UINT16_MAX;
	volatile uint64_t x451 = 1602486722LLU;
	static int64_t x452 = INT64_MIN;
	static int32_t t91 = 42;

	t91 = ((x449|(x450*x451))<x452);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x457 = INT32_MIN;
	volatile int8_t x458 = 0;
	volatile int16_t x459 = 3;
	static int16_t x460 = INT16_MIN;
	int32_t t92 = 6015310;

	t92 = ((x457|(x458*x459))<x460);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x470 = 1U;
	uint64_t x471 = 57635467822LLU;
	int8_t x472 = -1;
	volatile int32_t t93 = 11684;

	t93 = ((x469|(x470*x471))<x472);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x473 = UINT8_MAX;
	int64_t x474 = -7867LL;
	int32_t t94 = 67;

	t94 = ((x473|(x474*x475))<x476);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x478 = -84846622LL;
	volatile int8_t x479 = INT8_MIN;
	uint8_t x480 = 58U;

	t95 = ((x477|(x478*x479))<x480);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x481 = INT16_MIN;
	volatile uint8_t x484 = 24U;
	volatile int32_t t96 = -225;

	t96 = ((x481|(x482*x483))<x484);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x485 = 605U;
	volatile int8_t x486 = INT8_MIN;
	int8_t x487 = INT8_MAX;
	static int8_t x488 = INT8_MIN;

	t97 = ((x485|(x486*x487))<x488);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x489 = UINT64_MAX;
	uint32_t x490 = UINT32_MAX;
	volatile uint32_t x491 = UINT32_MAX;
	static volatile int32_t x492 = -98104671;
	int32_t t98 = 931;

	t98 = ((x489|(x490*x491))<x492);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x502 = 0;
	uint64_t x503 = UINT64_MAX;
	uint64_t x504 = 75123172017LLU;
	int32_t t99 = 52616178;

	t99 = ((x501|(x502*x503))<x504);

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

