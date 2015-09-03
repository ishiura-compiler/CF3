#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
static volatile uint8_t x3 = UINT8_MAX;
uint64_t x6 = UINT64_MAX;
int32_t x8 = -1;
int16_t x17 = -1;
int32_t x21 = -30823;
volatile int8_t x22 = INT8_MAX;
uint64_t x26 = UINT64_MAX;
static int8_t x33 = 1;
uint32_t x36 = 90160U;
volatile uint64_t x38 = 1394115548539409060LLU;
uint32_t x41 = UINT32_MAX;
volatile int8_t x44 = INT8_MAX;
static int8_t x46 = INT8_MAX;
int8_t x49 = INT8_MIN;
volatile int32_t t9 = 2683;
int32_t x57 = -67618866;
uint64_t x68 = UINT64_MAX;
static volatile uint64_t x76 = 67LLU;
uint64_t x80 = 393595783LLU;
volatile int32_t t17 = -32;
int64_t x88 = INT64_MIN;
int32_t x91 = 124;
volatile int32_t t19 = 1935;
volatile int32_t t21 = 96;
int64_t x110 = -1LL;
int8_t x118 = INT8_MAX;
int8_t x125 = INT8_MIN;
volatile int32_t t27 = 837;
uint8_t x133 = 21U;
uint64_t x134 = UINT64_MAX;
static uint8_t x142 = 1U;
int16_t x143 = INT16_MIN;
int32_t t30 = 671321651;
volatile int32_t x149 = 619489458;
volatile int16_t x154 = 1015;
int8_t x161 = INT8_MIN;
uint16_t x163 = 7U;
volatile int64_t x164 = 232028465LL;
int8_t x169 = INT8_MIN;
static int16_t x174 = 0;
int64_t x175 = -1LL;
int32_t x177 = INT32_MIN;
int32_t x182 = -108;
int16_t x187 = INT16_MIN;
volatile int32_t t40 = 38;
int16_t x189 = INT16_MAX;
uint64_t x193 = UINT64_MAX;
volatile int8_t x204 = INT8_MIN;
int8_t x205 = -1;
volatile uint8_t x209 = 2U;
int8_t x212 = INT8_MIN;
int16_t x214 = INT16_MIN;
uint32_t x220 = UINT32_MAX;
uint8_t x247 = 1U;
volatile int32_t t53 = 140;
int8_t x254 = INT8_MIN;
int16_t x262 = INT16_MIN;
volatile int16_t x269 = INT16_MIN;
volatile int32_t t57 = 514507299;
int16_t x284 = 463;
static int8_t x295 = -1;
int32_t x298 = INT32_MIN;
static volatile int32_t t62 = 1313;
static uint32_t x304 = 264560164U;
volatile int32_t t63 = -51196;
volatile uint64_t x305 = 144646109LLU;
volatile int16_t x309 = 1246;
uint32_t x310 = 260366U;
int32_t t65 = 37;
static uint8_t x318 = UINT8_MAX;
int32_t t67 = -76008369;
uint64_t x346 = 2LLU;
uint64_t x347 = UINT64_MAX;
static volatile int32_t t73 = 6368708;
int8_t x349 = INT8_MIN;
int16_t x350 = -1;
int32_t t75 = -323894471;
volatile int64_t x357 = -440618527813LL;
static uint32_t x371 = 7U;
static uint16_t x374 = 3U;
int8_t x394 = INT8_MIN;
static volatile int32_t t84 = -1;
volatile uint32_t x398 = 24876U;
int16_t x416 = INT16_MIN;
static int64_t x418 = INT64_MAX;
int8_t x432 = INT8_MAX;
int16_t x439 = INT16_MIN;
int8_t x440 = 20;
int8_t x451 = 9;
static volatile int16_t x457 = INT16_MIN;
int16_t x460 = -8116;
static volatile uint64_t x469 = UINT64_MAX;
uint32_t x470 = UINT32_MAX;
int16_t x474 = INT16_MIN;


void f0(void) {
	int32_t x2 = -4450;
	uint64_t x4 = 54250263903607LLU;
	volatile int32_t t0 = 257;

	t0 = (((x1<=x2)-x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = 427;

	t1 = (((x5<=x6)-x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x18 = 5LLU;
	int64_t x19 = -1LL;
	int32_t x20 = -1;
	volatile int32_t t2 = 219850107;

	t2 = (((x17<=x18)-x19)<=x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x23 = 202U;
	static int16_t x24 = INT16_MIN;
	int32_t t3 = 142910;

	t3 = (((x21<=x22)-x23)<=x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	volatile uint64_t x27 = UINT64_MAX;
	int64_t x28 = INT64_MIN;
	int32_t t4 = 2654;

	t4 = (((x25<=x26)-x27)<=x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x34 = 2079U;
	volatile int16_t x35 = -1;
	int32_t t5 = -2526561;

	t5 = (((x33<=x34)-x35)<=x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = 2982;
	int16_t x39 = -4582;
	volatile uint8_t x40 = UINT8_MAX;
	static volatile int32_t t6 = -3682142;

	t6 = (((x37<=x38)-x39)<=x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x42 = -1LL;
	static volatile uint32_t x43 = 200732914U;
	static int32_t t7 = 34;

	t7 = (((x41<=x42)-x43)<=x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int8_t x47 = 52;
	uint8_t x48 = 63U;
	volatile int32_t t8 = 5072168;

	t8 = (((x45<=x46)-x47)<=x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x50 = UINT8_MAX;
	uint16_t x51 = UINT16_MAX;
	static uint32_t x52 = 37109683U;

	t9 = (((x49<=x50)-x51)<=x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x53 = 1U;
	uint8_t x54 = 35U;
	int16_t x55 = INT16_MAX;
	int64_t x56 = 337502872908490495LL;
	int32_t t10 = -885644358;

	t10 = (((x53<=x54)-x55)<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = 7925;
	uint32_t x59 = 5U;
	static int32_t x60 = INT32_MIN;
	static int32_t t11 = -106;

	t11 = (((x57<=x58)-x59)<=x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = 23596833;
	int8_t x62 = 0;
	volatile int64_t x63 = INT64_MAX;
	volatile int64_t x64 = 6370659LL;
	static int32_t t12 = 2800276;

	t12 = (((x61<=x62)-x63)<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = -1;
	uint16_t x66 = 21718U;
	static int16_t x67 = -3468;
	static volatile int32_t t13 = 555662806;

	t13 = (((x65<=x66)-x67)<=x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	static volatile int8_t x71 = INT8_MAX;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t14 = -5;

	t14 = (((x69<=x70)-x71)<=x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x73 = UINT32_MAX;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 672U;
	int32_t t15 = 1;

	t15 = (((x73<=x74)-x75)<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = UINT16_MAX;
	volatile int16_t x78 = -1;
	int8_t x79 = -1;
	int32_t t16 = 1004;

	t16 = (((x77<=x78)-x79)<=x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x81 = INT8_MIN;
	static int8_t x82 = -1;
	static volatile int64_t x83 = -1LL;
	static int8_t x84 = 0;

	t17 = (((x81<=x82)-x83)<=x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = -1;
	int32_t x86 = INT32_MAX;
	static int8_t x87 = INT8_MIN;
	volatile int32_t t18 = 4;

	t18 = (((x85<=x86)-x87)<=x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = 502258867LL;
	static uint64_t x90 = 477743798LLU;
	int64_t x92 = -1LL;

	t19 = (((x89<=x90)-x91)<=x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	uint16_t x94 = 65U;
	volatile uint16_t x95 = 203U;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t20 = 58306;

	t20 = (((x93<=x94)-x95)<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = INT8_MIN;
	static uint32_t x98 = 26842U;
	static uint64_t x99 = 1LLU;
	int16_t x100 = INT16_MIN;

	t21 = (((x97<=x98)-x99)<=x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x102 = 1;
	int8_t x103 = -36;
	volatile int64_t x104 = INT64_MAX;
	int32_t t22 = -41;

	t22 = (((x101<=x102)-x103)<=x104);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = 7;
	int8_t x106 = INT8_MAX;
	volatile int8_t x107 = INT8_MAX;
	volatile uint8_t x108 = 120U;
	static volatile int32_t t23 = -1;

	t23 = (((x105<=x106)-x107)<=x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -18794245LL;
	uint32_t x111 = 2017389071U;
	int8_t x112 = 4;
	int32_t t24 = 92597887;

	t24 = (((x109<=x110)-x111)<=x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x117 = 12814;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 1988U;
	static int32_t t25 = -107219;

	t25 = (((x117<=x118)-x119)<=x120);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x126 = 452633839813610055LL;
	int16_t x127 = -51;
	uint32_t x128 = UINT32_MAX;
	int32_t t26 = 426404309;

	t26 = (((x125<=x126)-x127)<=x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x129 = -1;
	volatile uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -1LL;

	t27 = (((x129<=x130)-x131)<=x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x135 = INT16_MAX;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t28 = -84468184;

	t28 = (((x133<=x134)-x135)<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x137 = -3396;
	uint16_t x138 = 5323U;
	int8_t x139 = -1;
	int16_t x140 = INT16_MAX;
	volatile int32_t t29 = -2756648;

	t29 = (((x137<=x138)-x139)<=x140);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -1;
	int8_t x144 = INT8_MAX;

	t30 = (((x141<=x142)-x143)<=x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x145 = INT64_MIN;
	volatile int64_t x146 = INT64_MIN;
	uint8_t x147 = 2U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t31 = 3898;

	t31 = (((x145<=x146)-x147)<=x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x150 = INT8_MAX;
	static uint16_t x151 = UINT16_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t32 = 13;

	t32 = (((x149<=x150)-x151)<=x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x153 = INT64_MIN;
	int32_t x155 = -816825;
	volatile uint8_t x156 = UINT8_MAX;
	int32_t t33 = 40765;

	t33 = (((x153<=x154)-x155)<=x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = INT32_MAX;
	static volatile int8_t x158 = -1;
	static volatile int16_t x159 = -5642;
	int8_t x160 = INT8_MIN;
	volatile int32_t t34 = -224386;

	t34 = (((x157<=x158)-x159)<=x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x162 = INT8_MIN;
	static volatile int32_t t35 = -479;

	t35 = (((x161<=x162)-x163)<=x164);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x170 = 60U;
	static int8_t x171 = INT8_MAX;
	int16_t x172 = 0;
	int32_t t36 = -209771;

	t36 = (((x169<=x170)-x171)<=x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MAX;
	volatile int8_t x176 = INT8_MIN;
	int32_t t37 = -2;

	t37 = (((x173<=x174)-x175)<=x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x178 = UINT16_MAX;
	int32_t x179 = INT32_MAX;
	int8_t x180 = INT8_MAX;
	static int32_t t38 = -570;

	t38 = (((x177<=x178)-x179)<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x181 = -1;
	uint8_t x183 = 0U;
	uint64_t x184 = 1122LLU;
	volatile int32_t t39 = 362383680;

	t39 = (((x181<=x182)-x183)<=x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x185 = INT64_MIN;
	uint16_t x186 = 698U;
	static int16_t x188 = -232;

	t40 = (((x185<=x186)-x187)<=x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x190 = 896138704U;
	int64_t x191 = -1LL;
	uint16_t x192 = 2U;
	static volatile int32_t t41 = -114846683;

	t41 = (((x189<=x190)-x191)<=x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x194 = INT64_MAX;
	int16_t x195 = INT16_MIN;
	volatile int8_t x196 = 0;
	volatile int32_t t42 = -9693338;

	t42 = (((x193<=x194)-x195)<=x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x201 = -142;
	int64_t x202 = 3169180232LL;
	static int16_t x203 = INT16_MIN;
	int32_t t43 = -1;

	t43 = (((x201<=x202)-x203)<=x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x206 = INT16_MIN;
	uint8_t x207 = 0U;
	int64_t x208 = INT64_MAX;
	volatile int32_t t44 = -7;

	t44 = (((x205<=x206)-x207)<=x208);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x210 = 115;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t t45 = 1;

	t45 = (((x209<=x210)-x211)<=x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x213 = 4;
	uint64_t x215 = 23659LLU;
	volatile uint8_t x216 = 0U;
	volatile int32_t t46 = -2;

	t46 = (((x213<=x214)-x215)<=x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x217 = INT16_MAX;
	int32_t x218 = INT32_MIN;
	volatile uint64_t x219 = 6631979094LLU;
	int32_t t47 = 3;

	t47 = (((x217<=x218)-x219)<=x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = -1;
	uint64_t x222 = 220531LLU;
	uint8_t x223 = 0U;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t48 = 125881160;

	t48 = (((x221<=x222)-x223)<=x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = 805329101;
	static int64_t x227 = -3LL;
	volatile uint16_t x228 = UINT16_MAX;
	static int32_t t49 = -843502918;

	t49 = (((x225<=x226)-x227)<=x228);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = 203;
	static volatile int64_t x234 = -1346040LL;
	static volatile int8_t x235 = -1;
	uint64_t x236 = 1092LLU;
	volatile int32_t t50 = -1070073;

	t50 = (((x233<=x234)-x235)<=x236);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x237 = 16698081;
	volatile uint64_t x238 = 3381695588582996LLU;
	int8_t x239 = INT8_MIN;
	int16_t x240 = -1;
	int32_t t51 = -182;

	t51 = (((x237<=x238)-x239)<=x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1;
	uint64_t x242 = 1071700053039220LLU;
	int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MAX;
	volatile int32_t t52 = 18;

	t52 = (((x241<=x242)-x243)<=x244);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = 7;
	int16_t x246 = INT16_MIN;
	int64_t x248 = INT64_MIN;

	t53 = (((x245<=x246)-x247)<=x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = INT8_MAX;
	static uint16_t x250 = 28258U;
	uint16_t x251 = 10U;
	int8_t x252 = -1;
	volatile int32_t t54 = 14693;

	t54 = (((x249<=x250)-x251)<=x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x253 = UINT8_MAX;
	int64_t x255 = 40LL;
	uint32_t x256 = 4U;
	int32_t t55 = 359;

	t55 = (((x253<=x254)-x255)<=x256);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x261 = INT16_MAX;
	int16_t x263 = -1;
	int16_t x264 = -22;
	static int32_t t56 = 0;

	t56 = (((x261<=x262)-x263)<=x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x270 = INT8_MAX;
	int16_t x271 = 8387;
	uint8_t x272 = 1U;

	t57 = (((x269<=x270)-x271)<=x272);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = -2;
	int8_t x274 = -31;
	uint32_t x275 = 19398866U;
	uint64_t x276 = 85663427548583LLU;
	volatile int32_t t58 = -3415989;

	t58 = (((x273<=x274)-x275)<=x276);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = -1;
	volatile int8_t x278 = INT8_MIN;
	static int64_t x279 = 23208642LL;
	int32_t x280 = -1;
	int32_t t59 = 45796;

	t59 = (((x277<=x278)-x279)<=x280);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	static volatile int32_t t60 = 0;

	t60 = (((x281<=x282)-x283)<=x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x293 = -165;
	int16_t x294 = INT16_MAX;
	int64_t x296 = INT64_MAX;
	volatile int32_t t61 = -670;

	t61 = (((x293<=x294)-x295)<=x296);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x297 = 998U;
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;

	t62 = (((x297<=x298)-x299)<=x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = 29035U;
	uint16_t x302 = 744U;
	int32_t x303 = -100542990;

	t63 = (((x301<=x302)-x303)<=x304);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x306 = 6101;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = -787940531LL;
	volatile int32_t t64 = 1;

	t64 = (((x305<=x306)-x307)<=x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x311 = INT16_MIN;
	uint16_t x312 = UINT16_MAX;

	t65 = (((x309<=x310)-x311)<=x312);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = -1;
	static uint32_t x319 = 61871U;
	volatile int16_t x320 = -419;
	volatile int32_t t66 = -874;

	t66 = (((x317<=x318)-x319)<=x320);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x321 = -1LL;
	int64_t x322 = -1LL;
	uint32_t x323 = 156780U;
	volatile int8_t x324 = INT8_MIN;

	t67 = (((x321<=x322)-x323)<=x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = -214362825;
	uint32_t x326 = 1623807U;
	uint64_t x327 = 96141813762LLU;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t68 = -12964828;

	t68 = (((x325<=x326)-x327)<=x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = INT8_MIN;
	volatile int32_t x330 = 32458;
	uint64_t x331 = 863843841911841471LLU;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t69 = 0;

	t69 = (((x329<=x330)-x331)<=x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x333 = 10U;
	static uint8_t x334 = UINT8_MAX;
	int64_t x335 = -1LL;
	static volatile int16_t x336 = INT16_MIN;
	volatile int32_t t70 = -13813725;

	t70 = (((x333<=x334)-x335)<=x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x337 = 588U;
	int32_t x338 = INT32_MIN;
	static uint16_t x339 = 16140U;
	int64_t x340 = 2804325814LL;
	int32_t t71 = -6104052;

	t71 = (((x337<=x338)-x339)<=x340);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x341 = INT16_MAX;
	static uint8_t x342 = 6U;
	int32_t x343 = INT32_MAX;
	int16_t x344 = INT16_MIN;
	int32_t t72 = -4;

	t72 = (((x341<=x342)-x343)<=x344);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x345 = 443;
	int16_t x348 = 31;

	t73 = (((x345<=x346)-x347)<=x348);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x351 = 3550LLU;
	uint8_t x352 = 3U;
	static int32_t t74 = 2729;

	t74 = (((x349<=x350)-x351)<=x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x353 = INT32_MAX;
	static int8_t x354 = -1;
	int16_t x355 = 0;
	int64_t x356 = INT64_MIN;

	t75 = (((x353<=x354)-x355)<=x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x358 = INT8_MIN;
	int8_t x359 = 1;
	int64_t x360 = -1LL;
	int32_t t76 = 0;

	t76 = (((x357<=x358)-x359)<=x360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x361 = INT64_MIN;
	volatile uint32_t x362 = 2165516U;
	int16_t x363 = 1792;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t77 = 1195493;

	t77 = (((x361<=x362)-x363)<=x364);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = -1;
	uint32_t x367 = 12U;
	int8_t x368 = INT8_MIN;
	volatile int32_t t78 = 12;

	t78 = (((x365<=x366)-x367)<=x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = 5U;
	static volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t79 = 30740;

	t79 = (((x369<=x370)-x371)<=x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MIN;
	int16_t x375 = INT16_MAX;
	int64_t x376 = INT64_MIN;
	volatile int32_t t80 = 49465161;

	t80 = (((x373<=x374)-x375)<=x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = -1;
	int64_t x378 = 30517LL;
	volatile uint8_t x379 = 24U;
	uint32_t x380 = 920119379U;
	static int32_t t81 = 840436;

	t81 = (((x377<=x378)-x379)<=x380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x381 = -1;
	int32_t x382 = -1;
	static volatile int8_t x383 = INT8_MIN;
	uint8_t x384 = 5U;
	volatile int32_t t82 = -126471;

	t82 = (((x381<=x382)-x383)<=x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x385 = 6;
	int32_t x386 = -25625;
	static int8_t x387 = 0;
	int8_t x388 = INT8_MIN;
	static int32_t t83 = -10;

	t83 = (((x385<=x386)-x387)<=x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x393 = -35173LL;
	int64_t x395 = -1LL;
	uint64_t x396 = 2124120175LLU;

	t84 = (((x393<=x394)-x395)<=x396);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x397 = UINT32_MAX;
	static int16_t x399 = INT16_MAX;
	uint8_t x400 = 3U;
	volatile int32_t t85 = -483194;

	t85 = (((x397<=x398)-x399)<=x400);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x409 = 1;
	uint32_t x410 = UINT32_MAX;
	volatile uint8_t x411 = 0U;
	uint32_t x412 = UINT32_MAX;
	volatile int32_t t86 = -679834658;

	t86 = (((x409<=x410)-x411)<=x412);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x413 = -15512010478LL;
	uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	static volatile int32_t t87 = -4060;

	t87 = (((x413<=x414)-x415)<=x416);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x417 = -1LL;
	volatile uint16_t x419 = UINT16_MAX;
	int32_t x420 = INT32_MIN;
	static volatile int32_t t88 = -1;

	t88 = (((x417<=x418)-x419)<=x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x425 = 6543803U;
	int16_t x426 = INT16_MAX;
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = -120;
	int32_t t89 = 961007490;

	t89 = (((x425<=x426)-x427)<=x428);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x429 = 404343;
	uint32_t x430 = 0U;
	int16_t x431 = 0;
	int32_t t90 = -92;

	t90 = (((x429<=x430)-x431)<=x432);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x437 = INT16_MIN;
	int64_t x438 = 34395569LL;
	int32_t t91 = 783367280;

	t91 = (((x437<=x438)-x439)<=x440);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x441 = 20U;
	uint32_t x442 = UINT32_MAX;
	volatile int64_t x443 = 1566039807803338857LL;
	int8_t x444 = -1;
	int32_t t92 = 29;

	t92 = (((x441<=x442)-x443)<=x444);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x445 = UINT8_MAX;
	static int16_t x446 = INT16_MIN;
	int64_t x447 = INT64_MAX;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t93 = 23317521;

	t93 = (((x445<=x446)-x447)<=x448);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = INT32_MIN;
	volatile int64_t x450 = INT64_MIN;
	volatile uint16_t x452 = 7214U;
	volatile int32_t t94 = 2052827;

	t94 = (((x449<=x450)-x451)<=x452);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x453 = INT64_MAX;
	int32_t x454 = INT32_MAX;
	static volatile int64_t x455 = INT64_MAX;
	volatile uint8_t x456 = 6U;
	volatile int32_t t95 = 6773;

	t95 = (((x453<=x454)-x455)<=x456);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x458 = INT16_MIN;
	volatile uint16_t x459 = 15U;
	volatile int32_t t96 = 3228388;

	t96 = (((x457<=x458)-x459)<=x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = -1;
	uint32_t x462 = 12088U;
	uint64_t x463 = UINT64_MAX;
	volatile int8_t x464 = 1;
	static volatile int32_t t97 = 43;

	t97 = (((x461<=x462)-x463)<=x464);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x471 = UINT8_MAX;
	int8_t x472 = -5;
	volatile int32_t t98 = -2572;

	t98 = (((x469<=x470)-x471)<=x472);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = -983;
	uint64_t x475 = 96375LLU;
	static int16_t x476 = INT16_MAX;
	int32_t t99 = 4130;

	t99 = (((x473<=x474)-x475)<=x476);

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

