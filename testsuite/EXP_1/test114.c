#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = UINT8_MAX;
uint32_t x4 = UINT32_MAX;
volatile int8_t x10 = INT8_MAX;
int32_t x14 = 2533;
volatile uint64_t x16 = UINT64_MAX;
static volatile int32_t t2 = 1317267;
volatile uint64_t x18 = UINT64_MAX;
int32_t x21 = -31195331;
int8_t x22 = INT8_MAX;
int32_t t5 = -3260892;
static uint16_t x30 = 5U;
uint32_t x37 = UINT32_MAX;
uint16_t x38 = 30U;
int32_t x39 = -9;
int32_t x40 = INT32_MAX;
static volatile int32_t t7 = -703;
int16_t x45 = -1;
volatile int32_t t9 = 287320;
int64_t x55 = INT64_MIN;
static int8_t x56 = -1;
static volatile int32_t t11 = -16758762;
uint16_t x62 = 9389U;
int32_t x71 = -222;
int8_t x74 = -1;
int8_t x76 = -1;
int32_t t16 = 1;
volatile int32_t t17 = 3030737;
uint8_t x89 = UINT8_MAX;
volatile int32_t t18 = -14167670;
int64_t x98 = -1LL;
int32_t x100 = -2364;
volatile int16_t x101 = INT16_MIN;
uint32_t x108 = 821U;
volatile int16_t x110 = -316;
int64_t x112 = INT64_MAX;
int32_t t24 = -10202014;
static int32_t t26 = -19278;
uint32_t x129 = 2896521U;
static int8_t x141 = -1;
int64_t x142 = 4440288267083LL;
static uint16_t x143 = 67U;
uint64_t x144 = UINT64_MAX;
int16_t x146 = -6783;
volatile int8_t x149 = INT8_MIN;
uint64_t x153 = 100392530LLU;
uint8_t x154 = 34U;
uint8_t x155 = UINT8_MAX;
int16_t x156 = INT16_MIN;
volatile int32_t t33 = -914;
static volatile int32_t t34 = 189;
static uint8_t x174 = 8U;
volatile uint32_t x176 = 13313U;
volatile int32_t t38 = -15265;
volatile int8_t x181 = -7;
int64_t x182 = 17161892LL;
volatile int32_t t40 = 189479227;
volatile int32_t t41 = -385;
uint64_t x214 = UINT64_MAX;
static uint32_t x216 = 150275212U;
int32_t x220 = 0;
static volatile int32_t t45 = -994445604;
int8_t x225 = -5;
int16_t x227 = INT16_MIN;
static int16_t x230 = 4;
volatile int32_t x233 = INT32_MAX;
int32_t x234 = INT32_MIN;
static volatile int8_t x240 = INT8_MAX;
volatile uint32_t x241 = 12244872U;
int64_t x242 = 25LL;
int32_t x244 = INT32_MIN;
int32_t x247 = INT32_MIN;
int8_t x248 = -1;
int32_t x249 = -1;
static uint16_t x252 = UINT16_MAX;
int64_t x255 = INT64_MAX;
volatile int32_t t53 = -104;
volatile int8_t x258 = INT8_MIN;
uint32_t x259 = 5299U;
uint32_t x262 = 0U;
static uint32_t x274 = 2693U;
int8_t x276 = INT8_MIN;
int8_t x280 = -10;
int16_t x289 = INT16_MIN;
int16_t x292 = -186;
int8_t x297 = 1;
int16_t x299 = -249;
static int32_t t64 = 146;
volatile uint16_t x313 = 236U;
volatile int32_t x325 = INT32_MIN;
int32_t x327 = INT32_MIN;
int64_t x330 = -2260LL;
int8_t x337 = 13;
int8_t x339 = INT8_MIN;
static int64_t x351 = -1LL;
int32_t t75 = -10264957;
volatile int32_t t76 = 186;
int64_t x365 = -851857449600709413LL;
static uint8_t x368 = UINT8_MAX;
static int64_t x379 = -21677LL;
int32_t x381 = INT32_MIN;
int8_t x384 = -1;
int32_t x399 = -1;
int8_t x406 = -1;
uint8_t x408 = 92U;
volatile int32_t t85 = 1;
int8_t x411 = -2;
int16_t x416 = INT16_MIN;
int16_t x417 = INT16_MIN;
int16_t x420 = INT16_MIN;
static volatile int64_t x421 = -139LL;
int64_t x434 = -1LL;
volatile int16_t x436 = INT16_MIN;
volatile int64_t x446 = INT64_MAX;
uint16_t x451 = UINT16_MAX;
int32_t t96 = 1382;
volatile uint64_t x458 = 12744996LLU;
int32_t x460 = 488859;
int32_t t97 = 2568646;
static int8_t x462 = INT8_MIN;
int8_t x468 = 1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int32_t x2 = INT32_MIN;
	volatile int32_t t0 = -21789;

	t0 = (((x1+x2)<x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = 344U;
	static int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t1 = -79417;

	t1 = (((x9+x10)<x11)<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 10161348100685564LLU;
	uint64_t x15 = 3966773340228349396LLU;

	t2 = (((x13+x14)<x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 1U;
	volatile uint64_t x19 = 53216800164703401LLU;
	static int16_t x20 = -1;
	int32_t t3 = 107;

	t3 = (((x17+x18)<x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x23 = 3U;
	int32_t x24 = 9683;
	int32_t t4 = -1;

	t4 = (((x21+x22)<x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = UINT64_MAX;
	static uint16_t x27 = UINT16_MAX;
	static int32_t x28 = INT32_MAX;

	t5 = (((x25+x26)<x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 2959741654LLU;
	int8_t x31 = 0;
	int8_t x32 = 27;
	int32_t t6 = -607;

	t6 = (((x29+x30)<x31)<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {


	t7 = (((x37+x38)<x39)<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -53;
	int32_t x42 = -955170;
	int32_t x43 = INT32_MAX;
	static int64_t x44 = -1LL;
	volatile int32_t t8 = 3;

	t8 = (((x41+x42)<x43)<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x46 = 9U;
	uint8_t x47 = 28U;
	int32_t x48 = 221292;

	t9 = (((x45+x46)<x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -1;
	int32_t x50 = -28;
	int64_t x51 = -1LL;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t10 = -9380694;

	t10 = (((x49+x50)<x51)<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 5689U;
	uint32_t x54 = 7687U;

	t11 = (((x53+x54)<x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 1891331791LLU;
	static volatile int8_t x63 = -1;
	volatile uint8_t x64 = 4U;
	volatile int32_t t12 = 4206;

	t12 = (((x61+x62)<x63)<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x66 = 7U;
	int64_t x67 = -3883303989LL;
	int8_t x68 = INT8_MIN;
	int32_t t13 = -178181685;

	t13 = (((x65+x66)<x67)<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 4637U;
	uint64_t x70 = 6969LLU;
	uint32_t x72 = 57U;
	int32_t t14 = -482;

	t14 = (((x69+x70)<x71)<=x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1LL;
	int32_t x75 = 0;
	volatile int32_t t15 = -83;

	t15 = (((x73+x74)<x75)<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	uint8_t x80 = UINT8_MAX;

	t16 = (((x77+x78)<x79)<=x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MAX;
	int32_t x82 = -662;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = 12LLU;

	t17 = (((x81+x82)<x83)<=x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x90 = UINT64_MAX;
	static uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MAX;

	t18 = (((x89+x90)<x91)<=x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -1;
	int64_t x94 = -1LL;
	int8_t x95 = INT8_MAX;
	int32_t x96 = -1;
	volatile int32_t t19 = 79949813;

	t19 = (((x93+x94)<x95)<=x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x99 = 449U;
	int32_t t20 = 25452;

	t20 = (((x97+x98)<x99)<=x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x102 = UINT32_MAX;
	static int32_t x103 = INT32_MIN;
	volatile uint8_t x104 = UINT8_MAX;
	int32_t t21 = -7246;

	t21 = (((x101+x102)<x103)<=x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x105 = UINT32_MAX;
	uint16_t x106 = UINT16_MAX;
	volatile int32_t x107 = INT32_MAX;
	volatile int32_t t22 = 177008479;

	t22 = (((x105+x106)<x107)<=x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MAX;
	volatile int16_t x111 = 473;
	int32_t t23 = 500941057;

	t23 = (((x109+x110)<x111)<=x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x113 = 573145U;
	int32_t x114 = INT32_MAX;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MAX;

	t24 = (((x113+x114)<x115)<=x116);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -240861;
	static uint64_t x118 = 891522051919LLU;
	static int16_t x119 = INT16_MIN;
	int32_t x120 = -1;
	static int32_t t25 = -15788;

	t25 = (((x117+x118)<x119)<=x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x125 = 7;
	int16_t x126 = -5140;
	int64_t x127 = INT64_MAX;
	volatile int8_t x128 = INT8_MAX;

	t26 = (((x125+x126)<x127)<=x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x130 = -805;
	int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MAX;
	static int32_t t27 = -39;

	t27 = (((x129+x130)<x131)<=x132);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = 22275230LL;
	int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MIN;
	volatile int32_t t28 = -56357;

	t28 = (((x133+x134)<x135)<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x137 = INT32_MAX;
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MIN;
	volatile uint8_t x140 = UINT8_MAX;
	static int32_t t29 = -1595430;

	t29 = (((x137+x138)<x139)<=x140);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t t30 = 18938008;

	t30 = (((x141+x142)<x143)<=x144);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -1;
	uint32_t x147 = 218860667U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t31 = -13;

	t31 = (((x145+x146)<x147)<=x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x150 = -1LL;
	int8_t x151 = INT8_MAX;
	int32_t x152 = -1;
	volatile int32_t t32 = -26131485;

	t32 = (((x149+x150)<x151)<=x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {


	t33 = (((x153+x154)<x155)<=x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = 2;
	static int64_t x162 = -1LL;
	uint16_t x163 = 1217U;
	int16_t x164 = -1;

	t34 = (((x161+x162)<x163)<=x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 17051U;
	int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MIN;
	volatile int8_t x168 = INT8_MIN;
	int32_t t35 = -19704;

	t35 = (((x165+x166)<x167)<=x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = -874898722;
	volatile uint8_t x170 = 12U;
	int16_t x171 = 17;
	uint32_t x172 = UINT32_MAX;
	int32_t t36 = 111365844;

	t36 = (((x169+x170)<x171)<=x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MIN;
	int16_t x175 = 34;
	volatile int32_t t37 = 1;

	t37 = (((x173+x174)<x175)<=x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = 6175;
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MAX;

	t38 = (((x177+x178)<x179)<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x183 = INT64_MAX;
	volatile uint64_t x184 = 147109528062079407LLU;
	volatile int32_t t39 = -1268894;

	t39 = (((x181+x182)<x183)<=x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x185 = 32U;
	int64_t x186 = INT64_MIN;
	volatile uint8_t x187 = UINT8_MAX;
	int16_t x188 = INT16_MAX;

	t40 = (((x185+x186)<x187)<=x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x189 = 29U;
	volatile uint16_t x190 = UINT16_MAX;
	uint8_t x191 = 3U;
	uint16_t x192 = 939U;

	t41 = (((x189+x190)<x191)<=x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x201 = 8LLU;
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = -1;
	uint64_t x204 = 105897927571336LLU;
	volatile int32_t t42 = -30880;

	t42 = (((x201+x202)<x203)<=x204);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x213 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	int32_t t43 = 3954;

	t43 = (((x213+x214)<x215)<=x216);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = 653794142050106LL;
	uint64_t x218 = 14312865869908LLU;
	volatile uint8_t x219 = 9U;
	int32_t t44 = -1246;

	t44 = (((x217+x218)<x219)<=x220);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = 1U;
	int8_t x222 = -1;
	static uint8_t x223 = 32U;
	uint32_t x224 = UINT32_MAX;

	t45 = (((x221+x222)<x223)<=x224);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x226 = -1LL;
	int8_t x228 = -1;
	volatile int32_t t46 = 1;

	t46 = (((x225+x226)<x227)<=x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x229 = 8188976876LLU;
	int32_t x231 = INT32_MAX;
	int16_t x232 = INT16_MAX;
	static int32_t t47 = 23889191;

	t47 = (((x229+x230)<x231)<=x232);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x235 = INT8_MAX;
	int8_t x236 = -1;
	volatile int32_t t48 = -2245575;

	t48 = (((x233+x234)<x235)<=x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = UINT8_MAX;
	volatile int16_t x238 = INT16_MAX;
	int8_t x239 = 9;
	int32_t t49 = 500693;

	t49 = (((x237+x238)<x239)<=x240);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x243 = -1;
	volatile int32_t t50 = 86258657;

	t50 = (((x241+x242)<x243)<=x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x245 = 1331898923921671096LLU;
	uint8_t x246 = 12U;
	volatile int32_t t51 = -302253;

	t51 = (((x245+x246)<x247)<=x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x250 = UINT64_MAX;
	volatile int8_t x251 = INT8_MIN;
	int32_t t52 = 127776;

	t52 = (((x249+x250)<x251)<=x252);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = -2082547LL;
	int32_t x256 = INT32_MIN;

	t53 = (((x253+x254)<x255)<=x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x257 = 504610915051LL;
	int64_t x260 = -3487868356227LL;
	volatile int32_t t54 = 31671942;

	t54 = (((x257+x258)<x259)<=x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x263 = UINT8_MAX;
	static volatile int16_t x264 = INT16_MAX;
	int32_t t55 = 20;

	t55 = (((x261+x262)<x263)<=x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x269 = 2719U;
	static int8_t x270 = 3;
	int32_t x271 = -1;
	int64_t x272 = INT64_MIN;
	static volatile int32_t t56 = -114793;

	t56 = (((x269+x270)<x271)<=x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = INT16_MAX;
	volatile uint8_t x275 = 106U;
	volatile int32_t t57 = -415713797;

	t57 = (((x273+x274)<x275)<=x276);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x277 = INT64_MIN;
	int32_t x278 = 188157;
	int64_t x279 = -1LL;
	volatile int32_t t58 = 1;

	t58 = (((x277+x278)<x279)<=x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = 4LL;
	uint32_t x282 = 147566072U;
	static int32_t x283 = 32;
	uint8_t x284 = 1U;
	static volatile int32_t t59 = 7;

	t59 = (((x281+x282)<x283)<=x284);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x290 = -1LL;
	static int32_t x291 = INT32_MAX;
	static volatile int32_t t60 = -19;

	t60 = (((x289+x290)<x291)<=x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = 313443902;
	int8_t x295 = 1;
	static uint8_t x296 = 11U;
	int32_t t61 = 11;

	t61 = (((x293+x294)<x295)<=x296);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x298 = INT64_MIN;
	static int16_t x300 = INT16_MIN;
	int32_t t62 = 30;

	t62 = (((x297+x298)<x299)<=x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x301 = UINT16_MAX;
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MAX;
	static int8_t x304 = 0;
	int32_t t63 = -2;

	t63 = (((x301+x302)<x303)<=x304);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x305 = -2163509LL;
	int16_t x306 = -1;
	volatile int32_t x307 = INT32_MIN;
	static uint64_t x308 = 24LLU;

	t64 = (((x305+x306)<x307)<=x308);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = -429;
	int16_t x310 = -1;
	int64_t x311 = 79104491LL;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t65 = -1;

	t65 = (((x309+x310)<x311)<=x312);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x314 = -1;
	static int32_t x315 = 187792226;
	int64_t x316 = INT64_MIN;
	int32_t t66 = 2486;

	t66 = (((x313+x314)<x315)<=x316);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x317 = -434LL;
	uint32_t x318 = 56641324U;
	int32_t x319 = INT32_MIN;
	volatile int8_t x320 = INT8_MIN;
	volatile int32_t t67 = 59585231;

	t67 = (((x317+x318)<x319)<=x320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x321 = 28U;
	int8_t x322 = 1;
	static int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t68 = 96;

	t68 = (((x321+x322)<x323)<=x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x326 = INT16_MAX;
	int32_t x328 = INT32_MAX;
	int32_t t69 = 2837;

	t69 = (((x325+x326)<x327)<=x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x329 = INT8_MIN;
	volatile uint8_t x331 = 20U;
	static volatile uint64_t x332 = 5644881727LLU;
	int32_t t70 = -370377702;

	t70 = (((x329+x330)<x331)<=x332);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = 77592U;
	uint32_t x334 = 42U;
	int16_t x335 = 592;
	int16_t x336 = -1;
	int32_t t71 = -30;

	t71 = (((x333+x334)<x335)<=x336);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x338 = INT16_MAX;
	int64_t x340 = -453283LL;
	volatile int32_t t72 = 6;

	t72 = (((x337+x338)<x339)<=x340);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x341 = UINT16_MAX;
	int64_t x342 = INT64_MIN;
	static uint16_t x343 = 7U;
	volatile uint16_t x344 = 9255U;
	volatile int32_t t73 = 1553688;

	t73 = (((x341+x342)<x343)<=x344);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = -575;
	int16_t x346 = -1;
	int16_t x347 = 0;
	volatile int8_t x348 = -1;
	int32_t t74 = -322;

	t74 = (((x345+x346)<x347)<=x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x349 = 4238162292667069LLU;
	static int8_t x350 = INT8_MAX;
	static volatile int32_t x352 = -68238546;

	t75 = (((x349+x350)<x351)<=x352);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x353 = 3894807963050LLU;
	static volatile uint64_t x354 = 10264592859LLU;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = 52U;

	t76 = (((x353+x354)<x355)<=x356);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = -1;
	uint8_t x359 = 2U;
	volatile int8_t x360 = 46;
	volatile int32_t t77 = -141;

	t77 = (((x357+x358)<x359)<=x360);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x361 = UINT8_MAX;
	int16_t x362 = INT16_MIN;
	int32_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	static volatile int32_t t78 = -42650766;

	t78 = (((x361+x362)<x363)<=x364);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x366 = 879;
	int64_t x367 = 650025355239699818LL;
	int32_t t79 = -433835;

	t79 = (((x365+x366)<x367)<=x368);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x377 = INT16_MAX;
	static int8_t x378 = INT8_MIN;
	static int8_t x380 = INT8_MAX;
	int32_t t80 = -8;

	t80 = (((x377+x378)<x379)<=x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x382 = 68727221827156893LLU;
	volatile uint32_t x383 = UINT32_MAX;
	int32_t t81 = -25;

	t81 = (((x381+x382)<x383)<=x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = 29;
	int8_t x390 = -6;
	static int64_t x391 = INT64_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t82 = -1;

	t82 = (((x389+x390)<x391)<=x392);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = INT8_MIN;
	uint16_t x394 = UINT16_MAX;
	int32_t x395 = INT32_MIN;
	volatile uint16_t x396 = 1024U;
	volatile int32_t t83 = -21352;

	t83 = (((x393+x394)<x395)<=x396);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x397 = INT16_MAX;
	static int64_t x398 = -6110LL;
	static volatile int8_t x400 = INT8_MIN;
	int32_t t84 = 304368328;

	t84 = (((x397+x398)<x399)<=x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x405 = INT8_MIN;
	int16_t x407 = -1;

	t85 = (((x405+x406)<x407)<=x408);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x409 = 1;
	int32_t x410 = INT32_MIN;
	static int8_t x412 = -1;
	volatile int32_t t86 = -29765182;

	t86 = (((x409+x410)<x411)<=x412);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = INT16_MIN;
	volatile int16_t x414 = -1;
	static int8_t x415 = -1;
	int32_t t87 = -436953;

	t87 = (((x413+x414)<x415)<=x416);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x418 = 1839714U;
	int64_t x419 = -4104566607LL;
	volatile int32_t t88 = -2682;

	t88 = (((x417+x418)<x419)<=x420);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x422 = INT16_MAX;
	int32_t x423 = -1;
	uint8_t x424 = UINT8_MAX;
	static int32_t t89 = 14972256;

	t89 = (((x421+x422)<x423)<=x424);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x425 = 0LLU;
	static uint64_t x426 = 188744LLU;
	uint32_t x427 = UINT32_MAX;
	static int64_t x428 = -335LL;
	volatile int32_t t90 = -137;

	t90 = (((x425+x426)<x427)<=x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = 18;
	int16_t x430 = -161;
	int64_t x431 = -4069695930LL;
	int16_t x432 = INT16_MIN;
	volatile int32_t t91 = 2753;

	t91 = (((x429+x430)<x431)<=x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x433 = 8LLU;
	uint8_t x435 = 37U;
	volatile int32_t t92 = 448744;

	t92 = (((x433+x434)<x435)<=x436);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x441 = 16U;
	uint8_t x442 = 0U;
	int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;
	int32_t t93 = 715070;

	t93 = (((x441+x442)<x443)<=x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = -1;
	uint16_t x447 = 0U;
	uint64_t x448 = 168056690158LLU;
	static int32_t t94 = -26013421;

	t94 = (((x445+x446)<x447)<=x448);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x449 = UINT64_MAX;
	int8_t x450 = -1;
	volatile int16_t x452 = -2;
	volatile int32_t t95 = 165;

	t95 = (((x449+x450)<x451)<=x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x453 = 149U;
	uint8_t x454 = 51U;
	int64_t x455 = INT64_MIN;
	uint8_t x456 = 11U;

	t96 = (((x453+x454)<x455)<=x456);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = -11965LL;
	int64_t x459 = INT64_MIN;

	t97 = (((x457+x458)<x459)<=x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x461 = INT16_MIN;
	volatile int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MAX;
	int32_t t98 = 1205053;

	t98 = (((x461+x462)<x463)<=x464);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x465 = -1;
	int32_t x466 = -50;
	volatile int64_t x467 = INT64_MAX;
	int32_t t99 = -2;

	t99 = (((x465+x466)<x467)<=x468);

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

