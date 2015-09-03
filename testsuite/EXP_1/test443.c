#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = -1;
int16_t x9 = -10361;
uint64_t x13 = 63252758353LLU;
int16_t x14 = -1;
int8_t x21 = -1;
volatile int32_t t4 = INT32_MIN;
int16_t x25 = -19;
volatile uint32_t x26 = UINT32_MAX;
volatile uint8_t x29 = 11U;
int16_t x41 = 573;
static int8_t x43 = INT8_MAX;
uint8_t x46 = 96U;
int16_t x48 = 58;
int32_t x53 = INT32_MAX;
volatile int32_t t11 = -30;
uint8_t x70 = UINT8_MAX;
static int64_t t12 = INT64_MIN;
int32_t x77 = -1;
static int8_t x89 = -1;
volatile int32_t t15 = 1508;
static int64_t x96 = -67020423LL;
int64_t t16 = 3901115386LL;
volatile uint8_t x105 = 8U;
uint16_t x106 = UINT16_MAX;
static uint8_t x108 = 2U;
volatile int64_t x128 = INT64_MIN;
uint32_t x129 = 9687823U;
int32_t t25 = -871107032;
int32_t x157 = INT32_MIN;
int16_t x165 = -1;
int64_t x168 = INT64_MIN;
volatile int64_t t30 = INT64_MIN;
static int32_t x185 = INT32_MIN;
volatile int32_t t33 = -881659;
int16_t x203 = INT16_MIN;
uint8_t x208 = 1U;
static int64_t x209 = INT64_MAX;
int16_t x211 = INT16_MAX;
static uint8_t x216 = 12U;
int16_t x217 = 0;
int16_t x219 = INT16_MIN;
int32_t x231 = -1;
uint16_t x232 = 12U;
int16_t x245 = -1;
int64_t x262 = 6092347LL;
volatile int16_t x264 = -1;
int64_t x267 = -64057497970552LL;
uint64_t x286 = UINT64_MAX;
volatile uint16_t x287 = UINT16_MAX;
int64_t t51 = INT64_MAX;
uint32_t x292 = 4025U;
int8_t x294 = 0;
static volatile int64_t t54 = 131463135465968440LL;
int32_t x322 = 494771;
volatile int32_t t58 = 57696;
static volatile int32_t t59 = -9730;
uint32_t x329 = 45983U;
int16_t x334 = INT16_MIN;
uint8_t x337 = 25U;
int32_t x338 = -76597;
volatile int8_t x339 = -1;
int16_t x353 = -27;
int8_t x367 = -1;
int64_t x368 = INT64_MIN;
int8_t x369 = INT8_MIN;
int32_t t69 = 120699883;
volatile uint8_t x378 = 70U;
int64_t x380 = 3026733255LL;
uint8_t x398 = 1U;
uint32_t x399 = 93466334U;
int8_t x400 = INT8_MIN;
int16_t x411 = INT16_MIN;
int8_t x413 = 23;
uint8_t x416 = 43U;
int8_t x422 = INT8_MAX;
int32_t x423 = -9674;
volatile int32_t t77 = 0;
int8_t x426 = INT8_MAX;
static volatile int64_t t80 = 8076595120665LL;
int64_t x438 = -7292LL;
int16_t x440 = INT16_MIN;
volatile int32_t t82 = 117808;
uint8_t x453 = 5U;
int8_t x456 = -1;
int64_t x458 = -1LL;
static volatile int32_t t85 = -365900756;
int32_t x472 = -55822;
static int32_t x475 = -796204759;
int16_t x490 = -26;
int8_t x493 = INT8_MAX;
uint16_t x494 = 1183U;
static int16_t x501 = 55;
int8_t x504 = INT8_MIN;
static volatile int32_t t92 = -61288;
int32_t x511 = INT32_MIN;
int8_t x512 = -1;
int32_t t93 = 1;
int32_t x525 = -1;
volatile int8_t x528 = -1;
volatile int32_t t97 = INT32_MIN;
volatile int8_t x535 = 43;
uint32_t x536 = 854U;
static uint32_t t98 = 3583110U;
int32_t t99 = 2172322;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint64_t x2 = UINT64_MAX;
	static int8_t x4 = 3;
	static volatile int32_t t0 = -1853;

	t0 = (((x1*x2)<x3)+x4);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = -312;
	int32_t x11 = -113098;
	uint8_t x12 = 30U;
	volatile int32_t t1 = 304;

	t1 = (((x9*x10)<x11)+x12);

	if (t1 != 30) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x15 = 31765U;
	int8_t x16 = 1;
	volatile int32_t t2 = 4402517;

	t2 = (((x13*x14)<x15)+x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 51U;
	static int32_t x18 = INT32_MAX;
	int64_t x19 = 7645LL;
	uint16_t x20 = 7U;
	int32_t t3 = -6;

	t3 = (((x17*x18)<x19)+x20);

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x22 = 58U;
	int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MIN;

	t4 = (((x21*x22)<x23)+x24);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x27 = INT32_MAX;
	int16_t x28 = 23;
	volatile int32_t t5 = -15;

	t5 = (((x25*x26)<x27)+x28);

	if (t5 != 24) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x30 = 1;
	uint8_t x31 = UINT8_MAX;
	static uint16_t x32 = UINT16_MAX;
	static volatile int32_t t6 = -14443;

	t6 = (((x29*x30)<x31)+x32);

	if (t6 != 65536) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x42 = -1;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t7 = 53;

	t7 = (((x41*x42)<x43)+x44);

	if (t7 != 32768) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	static int64_t x47 = INT64_MIN;
	static int32_t t8 = 21320;

	t8 = (((x45*x46)<x47)+x48);

	if (t8 != 58) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	static int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t9 = 0;

	t9 = (((x49*x50)<x51)+x52);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x54 = 911426LLU;
	int16_t x55 = -1;
	uint64_t x56 = 103737979041982061LLU;
	uint64_t t10 = 109917LLU;

	t10 = (((x53*x54)<x55)+x56);

	if (t10 != 103737979041982062LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x65 = INT8_MIN;
	uint8_t x66 = 3U;
	static int64_t x67 = 155LL;
	int8_t x68 = 7;

	t11 = (((x65*x66)<x67)+x68);

	if (t11 != 8) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;

	t12 = (((x69*x70)<x71)+x72);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t13 = 1896836;

	t13 = (((x77*x78)<x79)+x80);

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = 5;
	static uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 251355012LLU;
	volatile uint32_t x84 = 222970515U;
	uint32_t t14 = 6U;

	t14 = (((x81*x82)<x83)+x84);

	if (t14 != 222970515U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x90 = -9;
	static int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;

	t15 = (((x89*x90)<x91)+x92);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = 0;
	static int8_t x94 = INT8_MIN;
	static uint16_t x95 = 3984U;

	t16 = (((x93*x94)<x95)+x96);

	if (t16 != -67020422LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x101 = 0U;
	static int8_t x102 = -1;
	volatile uint16_t x103 = 23879U;
	int16_t x104 = INT16_MIN;
	int32_t t17 = -9175;

	t17 = (((x101*x102)<x103)+x104);

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x107 = INT64_MAX;
	volatile int32_t t18 = 1355122;

	t18 = (((x105*x106)<x107)+x108);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MIN;
	volatile int8_t x111 = INT8_MAX;
	int16_t x112 = -1;
	volatile int32_t t19 = 277357;

	t19 = (((x109*x110)<x111)+x112);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = INT32_MAX;
	volatile uint32_t x122 = 460U;
	int8_t x123 = INT8_MAX;
	int32_t x124 = -58126871;
	volatile int32_t t20 = -3979029;

	t20 = (((x121*x122)<x123)+x124);

	if (t20 != -58126871) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x125 = INT16_MIN;
	volatile int16_t x126 = -1;
	volatile int8_t x127 = INT8_MIN;
	volatile int64_t t21 = INT64_MIN;

	t21 = (((x125*x126)<x127)+x128);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x130 = 190LL;
	static int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MAX;
	static volatile int32_t t22 = -37185;

	t22 = (((x129*x130)<x131)+x132);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x137 = 1;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 12U;
	uint64_t x140 = 1400838LLU;
	volatile uint64_t t23 = 34596055565LLU;

	t23 = (((x137*x138)<x139)+x140);

	if (t23 != 1400838LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x141 = 1267491;
	volatile int64_t x142 = 2LL;
	volatile int32_t x143 = -391349924;
	static int8_t x144 = -2;
	int32_t t24 = 1;

	t24 = (((x141*x142)<x143)+x144);

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x145 = -1;
	int16_t x146 = 197;
	volatile int8_t x147 = INT8_MIN;
	int32_t x148 = 110786;

	t25 = (((x145*x146)<x147)+x148);

	if (t25 != 110787) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x153 = 26889;
	volatile int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MAX;
	volatile int64_t x156 = INT64_MIN;
	volatile int64_t t26 = 366895646330010352LL;

	t26 = (((x153*x154)<x155)+x156);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x158 = UINT64_MAX;
	int32_t x159 = INT32_MIN;
	int32_t x160 = 61;
	volatile int32_t t27 = 490581006;

	t27 = (((x157*x158)<x159)+x160);

	if (t27 != 62) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = UINT32_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile uint64_t x164 = 399894725201648084LLU;
	volatile uint64_t t28 = 6104055497007LLU;

	t28 = (((x161*x162)<x163)+x164);

	if (t28 != 399894725201648085LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x166 = 22401U;
	uint8_t x167 = 1U;
	static int64_t t29 = -473447346968LL;

	t29 = (((x165*x166)<x167)+x168);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x169 = -242561LL;
	int32_t x170 = -1;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MIN;

	t30 = (((x169*x170)<x171)+x172);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	int16_t x184 = -239;
	volatile int32_t t31 = 20468269;

	t31 = (((x181*x182)<x183)+x184);

	if (t31 != -239) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x186 = 68634112319543LLU;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	volatile int32_t t32 = -93536439;

	t32 = (((x185*x186)<x187)+x188);

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x189 = 2344;
	int64_t x190 = -1LL;
	volatile int32_t x191 = -1;
	int16_t x192 = INT16_MIN;

	t33 = (((x189*x190)<x191)+x192);

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x193 = 221717572766834309LLU;
	int64_t x194 = -138105164874LL;
	int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MAX;
	volatile int32_t t34 = 97;

	t34 = (((x193*x194)<x195)+x196);

	if (t34 != 32768) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x201 = -3;
	int16_t x202 = INT16_MAX;
	int64_t x204 = -25174814648754LL;
	int64_t t35 = -3472LL;

	t35 = (((x201*x202)<x203)+x204);

	if (t35 != -25174814648753LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x205 = -3103861;
	int8_t x206 = 20;
	int64_t x207 = -1LL;
	volatile int32_t t36 = 95827059;

	t36 = (((x205*x206)<x207)+x208);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x210 = -1LL;
	int16_t x212 = 6806;
	int32_t t37 = 31477538;

	t37 = (((x209*x210)<x211)+x212);

	if (t37 != 6807) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x213 = UINT64_MAX;
	uint64_t x214 = UINT64_MAX;
	uint32_t x215 = 39549020U;
	int32_t t38 = -49300;

	t38 = (((x213*x214)<x215)+x216);

	if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x218 = INT32_MIN;
	volatile uint8_t x220 = 17U;
	volatile int32_t t39 = -6606767;

	t39 = (((x217*x218)<x219)+x220);

	if (t39 != 17) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x221 = -406LL;
	int32_t x222 = INT32_MAX;
	static int8_t x223 = 14;
	volatile uint64_t x224 = 14044391LLU;
	static uint64_t t40 = 694LLU;

	t40 = (((x221*x222)<x223)+x224);

	if (t40 != 14044392LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x229 = UINT64_MAX;
	int8_t x230 = INT8_MAX;
	static int32_t t41 = -14609152;

	t41 = (((x229*x230)<x231)+x232);

	if (t41 != 13) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x233 = UINT64_MAX;
	int16_t x234 = -249;
	int8_t x235 = INT8_MAX;
	static volatile uint16_t x236 = 7U;
	volatile int32_t t42 = -232;

	t42 = (((x233*x234)<x235)+x236);

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x246 = INT8_MIN;
	uint32_t x247 = 3406U;
	int32_t x248 = 32;
	static int32_t t43 = 54333;

	t43 = (((x245*x246)<x247)+x248);

	if (t43 != 33) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x249 = 991LLU;
	static int8_t x250 = INT8_MAX;
	int32_t x251 = 2640;
	static uint8_t x252 = 91U;
	int32_t t44 = -44846;

	t44 = (((x249*x250)<x251)+x252);

	if (t44 != 91) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x253 = 0;
	volatile uint64_t x254 = 2997LLU;
	int32_t x255 = 14468841;
	int64_t x256 = -1LL;
	static int64_t t45 = -15076547298685074LL;

	t45 = (((x253*x254)<x255)+x256);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x257 = UINT32_MAX;
	static int16_t x258 = INT16_MAX;
	uint32_t x259 = 32122U;
	int64_t x260 = INT64_MIN;
	static int64_t t46 = INT64_MIN;

	t46 = (((x257*x258)<x259)+x260);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x261 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	int32_t t47 = -114;

	t47 = (((x261*x262)<x263)+x264);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = 2213LL;
	uint64_t x268 = 60321234LLU;
	volatile uint64_t t48 = 3LLU;

	t48 = (((x265*x266)<x267)+x268);

	if (t48 != 60321234LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x273 = -1;
	static int16_t x274 = -203;
	uint32_t x275 = UINT32_MAX;
	static volatile int32_t x276 = -1;
	int32_t t49 = 907241362;

	t49 = (((x273*x274)<x275)+x276);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x277 = 2337358;
	int8_t x278 = INT8_MIN;
	volatile int64_t x279 = 13919LL;
	int16_t x280 = -11719;
	int32_t t50 = -884206277;

	t50 = (((x277*x278)<x279)+x280);

	if (t50 != -11718) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x285 = 115105866U;
	int64_t x288 = INT64_MAX;

	t51 = (((x285*x286)<x287)+x288);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x290 = -1;
	uint64_t x291 = 55079092LLU;
	static uint32_t t52 = 107779272U;

	t52 = (((x289*x290)<x291)+x292);

	if (t52 != 4026U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = INT64_MAX;
	int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MAX;
	int32_t t53 = INT32_MAX;

	t53 = (((x293*x294)<x295)+x296);

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x297 = -5;
	int16_t x298 = 6;
	static int64_t x299 = INT64_MIN;
	int64_t x300 = -1LL;

	t54 = (((x297*x298)<x299)+x300);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x305 = 11028262730LLU;
	volatile uint16_t x306 = 1U;
	volatile int16_t x307 = INT16_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t55 = 8242943;

	t55 = (((x305*x306)<x307)+x308);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = -1;
	uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t56 = 0;

	t56 = (((x313*x314)<x315)+x316);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x317 = -1;
	int32_t x318 = -9;
	int64_t x319 = -217191093879702133LL;
	static uint8_t x320 = 0U;
	volatile int32_t t57 = -2228324;

	t57 = (((x317*x318)<x319)+x320);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x321 = 1;
	static uint32_t x323 = UINT32_MAX;
	uint8_t x324 = UINT8_MAX;

	t58 = (((x321*x322)<x323)+x324);

	if (t58 != 256) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x325 = UINT16_MAX;
	int16_t x326 = 81;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;

	t59 = (((x325*x326)<x327)+x328);

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	int8_t x332 = -1;
	volatile int32_t t60 = 157;

	t60 = (((x329*x330)<x331)+x332);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x333 = 13868U;
	volatile int64_t x335 = INT64_MIN;
	uint64_t x336 = 19LLU;
	static uint64_t t61 = 0LLU;

	t61 = (((x333*x334)<x335)+x336);

	if (t61 != 19LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x340 = 20;
	int32_t t62 = 1;

	t62 = (((x337*x338)<x339)+x340);

	if (t62 != 21) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x345 = UINT8_MAX;
	uint64_t x346 = 4627562123401LLU;
	int64_t x347 = INT64_MIN;
	int32_t x348 = 15617;
	volatile int32_t t63 = -2014896;

	t63 = (((x345*x346)<x347)+x348);

	if (t63 != 15618) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x349 = INT16_MIN;
	volatile int16_t x350 = INT16_MIN;
	static int64_t x351 = INT64_MAX;
	volatile int32_t x352 = INT32_MIN;
	int32_t t64 = 125;

	t64 = (((x349*x350)<x351)+x352);

	if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t65 = -3310859;

	t65 = (((x353*x354)<x355)+x356);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x357 = INT16_MAX;
	volatile int64_t x358 = -200832807027609LL;
	static int16_t x359 = INT16_MAX;
	int32_t x360 = -272948;
	static volatile int32_t t66 = 56991;

	t66 = (((x357*x358)<x359)+x360);

	if (t66 != -272947) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x361 = 30;
	static uint32_t x362 = 26U;
	int8_t x363 = INT8_MAX;
	uint8_t x364 = 5U;
	volatile int32_t t67 = 108368;

	t67 = (((x361*x362)<x363)+x364);

	if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x365 = 2;
	int8_t x366 = 0;
	int64_t t68 = INT64_MIN;

	t68 = (((x365*x366)<x367)+x368);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x370 = 0;
	volatile int8_t x371 = -1;
	uint8_t x372 = 7U;

	t69 = (((x369*x370)<x371)+x372);

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x373 = 21;
	uint16_t x374 = 107U;
	int8_t x375 = INT8_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t70 = 653;

	t70 = (((x373*x374)<x375)+x376);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x377 = 1U;
	int64_t x379 = INT64_MIN;
	static int64_t t71 = -19489LL;

	t71 = (((x377*x378)<x379)+x380);

	if (t71 != 3026733255LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x389 = 78191U;
	volatile uint32_t x390 = UINT32_MAX;
	int64_t x391 = -233999438222LL;
	static int8_t x392 = 3;
	int32_t t72 = 9;

	t72 = (((x389*x390)<x391)+x392);

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x397 = 6287325;
	int32_t t73 = 944371;

	t73 = (((x397*x398)<x399)+x400);

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x405 = 122U;
	int8_t x406 = INT8_MIN;
	static uint64_t x407 = UINT64_MAX;
	volatile uint8_t x408 = 0U;
	volatile int32_t t74 = -322649;

	t74 = (((x405*x406)<x407)+x408);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x409 = UINT32_MAX;
	volatile int16_t x410 = -1;
	static uint8_t x412 = 6U;
	int32_t t75 = 4285186;

	t75 = (((x409*x410)<x411)+x412);

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x414 = 741U;
	volatile int8_t x415 = INT8_MIN;
	volatile int32_t t76 = 105566;

	t76 = (((x413*x414)<x415)+x416);

	if (t76 != 43) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x421 = -2700125;
	int16_t x424 = INT16_MIN;

	t77 = (((x421*x422)<x423)+x424);

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x425 = -7;
	int16_t x427 = INT16_MAX;
	uint64_t x428 = 968920373496344116LLU;
	volatile uint64_t t78 = 923036919LLU;

	t78 = (((x425*x426)<x427)+x428);

	if (t78 != 968920373496344117LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = -1;
	static int16_t x430 = 7368;
	static uint8_t x431 = 19U;
	int64_t x432 = 305350LL;
	volatile int64_t t79 = 3863683267393LL;

	t79 = (((x429*x430)<x431)+x432);

	if (t79 != 305351LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x433 = INT16_MIN;
	static uint16_t x434 = 0U;
	volatile int8_t x435 = INT8_MAX;
	int64_t x436 = 1749502631910847465LL;

	t80 = (((x433*x434)<x435)+x436);

	if (t80 != 1749502631910847466LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x437 = UINT16_MAX;
	int64_t x439 = INT64_MIN;
	int32_t t81 = -468;

	t81 = (((x437*x438)<x439)+x440);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x441 = INT8_MIN;
	static volatile int16_t x442 = -2623;
	uint8_t x443 = 1U;
	volatile int16_t x444 = INT16_MAX;

	t82 = (((x441*x442)<x443)+x444);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = INT16_MIN;
	uint16_t x450 = UINT16_MAX;
	int32_t x451 = -163162287;
	volatile int8_t x452 = INT8_MAX;
	static int32_t t83 = 3503;

	t83 = (((x449*x450)<x451)+x452);

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x454 = 423LL;
	volatile int16_t x455 = INT16_MAX;
	volatile int32_t t84 = -31346;

	t84 = (((x453*x454)<x455)+x456);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x457 = 96;
	volatile uint8_t x459 = 13U;
	int8_t x460 = -1;

	t85 = (((x457*x458)<x459)+x460);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x461 = -1;
	static int16_t x462 = -150;
	volatile int8_t x463 = -5;
	uint32_t x464 = 23679U;
	uint32_t t86 = 449712215U;

	t86 = (((x461*x462)<x463)+x464);

	if (t86 != 23679U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x469 = -1;
	volatile uint16_t x470 = 431U;
	uint16_t x471 = 179U;
	int32_t t87 = 54290462;

	t87 = (((x469*x470)<x471)+x472);

	if (t87 != -55821) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x473 = INT16_MAX;
	static int8_t x474 = -2;
	int64_t x476 = -1LL;
	static volatile int64_t t88 = 44LL;

	t88 = (((x473*x474)<x475)+x476);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = INT32_MIN;
	static int64_t x478 = -40LL;
	uint8_t x479 = 3U;
	int32_t x480 = 7483200;
	static int32_t t89 = -901;

	t89 = (((x477*x478)<x479)+x480);

	if (t89 != 7483200) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x489 = UINT32_MAX;
	int64_t x491 = INT64_MIN;
	int64_t x492 = -1LL;
	static int64_t t90 = -314738153992984LL;

	t90 = (((x489*x490)<x491)+x492);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x495 = 11U;
	volatile uint32_t x496 = UINT32_MAX;
	uint32_t t91 = UINT32_MAX;

	t91 = (((x493*x494)<x495)+x496);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x502 = 0;
	int8_t x503 = -4;

	t92 = (((x501*x502)<x503)+x504);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x509 = 30984U;
	int16_t x510 = INT16_MAX;

	t93 = (((x509*x510)<x511)+x512);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x513 = -9;
	volatile uint64_t x514 = UINT64_MAX;
	int64_t x515 = INT64_MIN;
	volatile uint8_t x516 = UINT8_MAX;
	int32_t t94 = 4155041;

	t94 = (((x513*x514)<x515)+x516);

	if (t94 != 256) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = -1;
	int16_t x522 = INT16_MAX;
	int16_t x523 = INT16_MIN;
	int32_t x524 = 1;
	static int32_t t95 = -1520;

	t95 = (((x521*x522)<x523)+x524);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x526 = 0;
	uint16_t x527 = 5U;
	volatile int32_t t96 = -1042983774;

	t96 = (((x525*x526)<x527)+x528);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x529 = INT8_MAX;
	int64_t x530 = 11LL;
	int64_t x531 = -1LL;
	volatile int32_t x532 = INT32_MIN;

	t97 = (((x529*x530)<x531)+x532);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x533 = INT16_MIN;
	volatile uint64_t x534 = 51871947LLU;

	t98 = (((x533*x534)<x535)+x536);

	if (t98 != 854U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x537 = 9534U;
	uint16_t x538 = UINT16_MAX;
	int32_t x539 = -379;
	int16_t x540 = 0;

	t99 = (((x537*x538)<x539)+x540);

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

