#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = -1;
static int32_t x8 = -1;
static uint16_t x13 = UINT16_MAX;
int16_t x15 = 1136;
int32_t t3 = -35308;
uint32_t x17 = 335563084U;
volatile int32_t t4 = 300695;
uint16_t x21 = 2U;
uint8_t x31 = 6U;
int64_t x33 = INT64_MIN;
int32_t x51 = 0;
volatile uint32_t t11 = 237104396U;
int32_t x59 = 684;
uint32_t x67 = UINT32_MAX;
volatile uint32_t t16 = 3401U;
volatile int64_t x80 = -609557829530727391LL;
uint16_t x83 = 14U;
volatile uint32_t t20 = 18755U;
int16_t x102 = -1;
static volatile int32_t t22 = 1858;
static volatile int16_t x106 = INT16_MIN;
int8_t x107 = 0;
uint64_t x111 = 1265391591375944551LLU;
volatile int8_t x112 = INT8_MIN;
uint16_t x128 = UINT16_MAX;
int16_t x147 = INT16_MIN;
static uint64_t t33 = 632683720LLU;
uint32_t x163 = UINT32_MAX;
uint32_t t34 = 47693U;
int64_t x170 = INT64_MIN;
int32_t x175 = -1;
volatile int32_t t36 = 1241527;
uint16_t x190 = UINT16_MAX;
uint64_t x192 = 2414273505194348600LLU;
uint64_t t40 = 3768883687135461306LLU;
int32_t x209 = 1952;
static uint32_t x211 = UINT32_MAX;
int32_t x220 = -1;
volatile uint64_t t44 = 85100254211LLU;
static int32_t x230 = -1;
volatile uint64_t x231 = 1405511777593595889LLU;
int16_t x237 = INT16_MIN;
volatile int32_t t46 = -96226;
static int32_t t47 = 2035;
static int64_t x249 = INT64_MIN;
int16_t x258 = 1;
uint64_t x259 = 220076023415LLU;
static int32_t x260 = -1;
int16_t x273 = INT16_MIN;
int32_t x281 = -1;
int64_t x283 = 2541066LL;
int16_t x284 = INT16_MAX;
uint64_t x291 = UINT64_MAX;
uint32_t x294 = 5U;
int32_t x297 = INT32_MIN;
static volatile uint32_t x298 = 3873U;
int16_t x303 = INT16_MIN;
int16_t x312 = INT16_MIN;
int16_t x316 = 3;
static volatile int64_t x319 = -1LL;
int16_t x330 = 1;
int64_t t65 = 1781952185LL;
int32_t x337 = INT32_MAX;
volatile int8_t x341 = INT8_MAX;
static volatile uint8_t x357 = 0U;
static volatile uint16_t x360 = UINT16_MAX;
int8_t x363 = -43;
volatile uint64_t t70 = 7018674741179844LLU;
int8_t x374 = -15;
int32_t x376 = -50;
uint8_t x377 = 78U;
static int32_t t74 = -3;
volatile uint16_t x395 = 145U;
static volatile int32_t t76 = 3977356;
int64_t x397 = 26LL;
uint8_t x399 = 4U;
int32_t x400 = 1030399;
int32_t x409 = INT32_MIN;
int16_t x412 = -197;
int32_t x421 = INT32_MIN;
uint32_t x427 = 1707U;
volatile int32_t t85 = -255023;
uint16_t x442 = 1U;
int64_t x443 = 31LL;
volatile int64_t t86 = 4092271137LL;
volatile int64_t t88 = 76425LL;
int64_t x462 = INT64_MAX;
static volatile uint32_t x473 = UINT32_MAX;
volatile uint16_t x474 = UINT16_MAX;
static int16_t x475 = 11915;
static int64_t x476 = -1LL;
volatile int8_t x479 = -1;
volatile uint32_t x483 = 1832U;
volatile uint32_t t93 = 1014U;
uint64_t x492 = 427449381LLU;
static int64_t x496 = 1287LL;
volatile uint8_t x499 = 1U;
int8_t x501 = -1;
int16_t x503 = INT16_MAX;
uint64_t x505 = 87827069111LLU;
uint64_t x507 = 31057265689147LLU;


void f0(void) {
	volatile uint8_t x1 = 31U;
	volatile int32_t x2 = -158611999;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = 93;
	int32_t t0 = 142;

	t0 = (((x1<=x2)-x3)*x4);

	if (t0 != -6094755) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	uint32_t x7 = 62U;
	uint32_t t1 = 89U;

	t1 = (((x5<=x6)-x7)*x8);

	if (t1 != 62U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -3;
	int64_t x10 = -195098425LL;
	volatile int8_t x11 = 55;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 2987;

	t2 = (((x9<=x10)-x11)*x12);

	if (t2 != 1802240) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x14 = 5U;
	volatile int16_t x16 = INT16_MIN;

	t3 = (((x13<=x14)-x15)*x16);

	if (t3 != 37224448) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -15;
	uint16_t x19 = 318U;
	int8_t x20 = INT8_MAX;

	t4 = (((x17<=x18)-x19)*x20);

	if (t4 != -40259) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = INT16_MIN;
	int8_t x23 = -1;
	uint8_t x24 = 25U;
	int32_t t5 = 6;

	t5 = (((x21<=x22)-x23)*x24);

	if (t5 != 25) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	uint64_t x26 = 17064039496559301LLU;
	int16_t x27 = -1;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 11743027;

	t6 = (((x25<=x26)-x27)*x28);

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	volatile int32_t x30 = INT32_MIN;
	uint16_t x32 = 4U;
	volatile int32_t t7 = 1204301;

	t7 = (((x29<=x30)-x31)*x32);

	if (t7 != -24) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MAX;
	int32_t t8 = -13;

	t8 = (((x33<=x34)-x35)*x36);

	if (t8 != 1073741823) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	uint32_t x44 = 3265U;
	static uint32_t t9 = 1664300U;

	t9 = (((x41<=x42)-x43)*x44);

	if (t9 != 417920U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = INT64_MIN;
	volatile int8_t x50 = -1;
	uint8_t x52 = 84U;
	int32_t t10 = 9985;

	t10 = (((x49<=x50)-x51)*x52);

	if (t10 != 84) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = UINT32_MAX;
	int16_t x54 = INT16_MIN;
	uint32_t x55 = 3166U;
	int32_t x56 = -1;

	t11 = (((x53<=x54)-x55)*x56);

	if (t11 != 3166U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 13887LLU;
	int32_t x58 = 51786996;
	int8_t x60 = -1;
	int32_t t12 = 2016;

	t12 = (((x57<=x58)-x59)*x60);

	if (t12 != 683) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = INT16_MIN;
	int8_t x62 = -1;
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = INT32_MIN;
	volatile uint64_t t13 = 74165497137LLU;

	t13 = (((x61<=x62)-x63)*x64);

	if (t13 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	volatile int16_t x68 = -11;
	volatile uint32_t t14 = 1509881U;

	t14 = (((x65<=x66)-x67)*x68);

	if (t14 != 4294967274U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x69 = INT16_MIN;
	uint16_t x70 = 5358U;
	int8_t x71 = -17;
	uint32_t x72 = 1876U;
	uint32_t t15 = 1272U;

	t15 = (((x69<=x70)-x71)*x72);

	if (t15 != 33768U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = INT32_MAX;
	uint64_t x74 = 805583657829933LLU;
	static uint8_t x75 = UINT8_MAX;
	uint32_t x76 = 13699U;

	t16 = (((x73<=x74)-x75)*x76);

	if (t16 != 4291487750U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x77 = 4181562928906734868LLU;
	volatile int16_t x78 = 0;
	int32_t x79 = -1;
	int64_t t17 = 369627LL;

	t17 = (((x77<=x78)-x79)*x80);

	if (t17 != -609557829530727391LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x81 = 287956LLU;
	int32_t x82 = INT32_MIN;
	static volatile int64_t x84 = -1LL;
	volatile int64_t t18 = 257138854026236970LL;

	t18 = (((x81<=x82)-x83)*x84);

	if (t18 != 13LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 1836;
	static volatile uint32_t x86 = 11U;
	uint64_t x87 = 27166707668LLU;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t19 = 24393LLU;

	t19 = (((x85<=x86)-x87)*x88);

	if (t19 != 890198676865024LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 59220LLU;
	int32_t x90 = INT32_MIN;
	uint32_t x91 = 0U;
	int16_t x92 = INT16_MIN;

	t20 = (((x89<=x90)-x91)*x92);

	if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = 76LL;
	int32_t x98 = INT32_MIN;
	uint32_t x99 = UINT32_MAX;
	int8_t x100 = -1;
	uint32_t t21 = UINT32_MAX;

	t21 = (((x97<=x98)-x99)*x100);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x101 = UINT16_MAX;
	int8_t x103 = INT8_MAX;
	volatile int16_t x104 = INT16_MIN;

	t22 = (((x101<=x102)-x103)*x104);

	if (t22 != 4161536) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	static int16_t x108 = -141;
	int32_t t23 = -394;

	t23 = (((x105<=x106)-x107)*x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = 844;
	int32_t x110 = -1;
	uint64_t t24 = 93250817081LLU;

	t24 = (((x109<=x110)-x111)*x112);

	if (t24 != 14396171106444489600LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	volatile int8_t x114 = INT8_MIN;
	volatile int16_t x115 = INT16_MIN;
	static int16_t x116 = -1;
	volatile int32_t t25 = 77;

	t25 = (((x113<=x114)-x115)*x116);

	if (t25 != -32769) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MAX;
	uint8_t x126 = 20U;
	int16_t x127 = -1;
	volatile int32_t t26 = 54;

	t26 = (((x125<=x126)-x127)*x128);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -72LL;
	uint16_t x130 = 410U;
	int64_t x131 = -1LL;
	int16_t x132 = -13;
	volatile int64_t t27 = -327517632801863LL;

	t27 = (((x129<=x130)-x131)*x132);

	if (t27 != -26LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MAX;
	uint64_t x138 = 43270537401LLU;
	volatile int8_t x139 = 0;
	uint64_t x140 = 114247365621190LLU;
	uint64_t t28 = 20LLU;

	t28 = (((x137<=x138)-x139)*x140);

	if (t28 != 114247365621190LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x141 = 3175LL;
	int32_t x142 = -1;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = -49956;
	static int32_t t29 = 1;

	t29 = (((x141<=x142)-x143)*x144);

	if (t29 != -6394368) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x145 = -32848969;
	int8_t x146 = INT8_MAX;
	int32_t x148 = 14649;
	volatile int32_t t30 = 12;

	t30 = (((x145<=x146)-x147)*x148);

	if (t30 != 480033081) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MAX;
	int32_t x150 = 0;
	static int16_t x151 = INT16_MIN;
	static volatile int32_t x152 = -40638;
	volatile int32_t t31 = 1738780;

	t31 = (((x149<=x150)-x151)*x152);

	if (t31 != -1331625984) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x153 = 63U;
	int8_t x154 = -1;
	int16_t x155 = -10;
	uint32_t x156 = 542896U;
	static volatile uint32_t t32 = 658U;

	t32 = (((x153<=x154)-x155)*x156);

	if (t32 != 5428960U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x157 = 1U;
	uint16_t x158 = UINT16_MAX;
	uint64_t x159 = 88LLU;
	static int32_t x160 = 10;

	t33 = (((x157<=x158)-x159)*x160);

	if (t33 != 18446744073709550746LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x161 = INT8_MIN;
	volatile uint32_t x162 = 5981703U;
	static volatile uint32_t x164 = 1856655624U;

	t34 = (((x161<=x162)-x163)*x164);

	if (t34 != 1856655624U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x169 = 22U;
	int64_t x171 = 979LL;
	int16_t x172 = INT16_MIN;
	static int64_t t35 = 653035130651LL;

	t35 = (((x169<=x170)-x171)*x172);

	if (t35 != 32079872LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 2U;
	int8_t x174 = INT8_MIN;
	static uint16_t x176 = 31166U;

	t36 = (((x173<=x174)-x175)*x176);

	if (t36 != 31166) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = UINT32_MAX;
	int16_t x178 = INT16_MIN;
	int8_t x179 = -1;
	uint32_t x180 = 15U;
	uint32_t t37 = 32097U;

	t37 = (((x177<=x178)-x179)*x180);

	if (t37 != 15U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = 186832754LL;
	static uint32_t x182 = 90411U;
	int64_t x183 = INT64_MAX;
	uint64_t x184 = UINT64_MAX;
	static volatile uint64_t t38 = 32LLU;

	t38 = (((x181<=x182)-x183)*x184);

	if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = INT8_MIN;
	volatile uint64_t x186 = 8LLU;
	uint32_t x187 = 0U;
	int8_t x188 = 47;
	volatile uint32_t t39 = 388805U;

	t39 = (((x185<=x186)-x187)*x188);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MIN;
	int64_t x191 = INT64_MAX;

	t40 = (((x189<=x190)-x191)*x192);

	if (t40 != 4828547010388697200LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = -1LL;
	int8_t x206 = INT8_MIN;
	volatile uint16_t x207 = 544U;
	int8_t x208 = -1;
	int32_t t41 = -143670733;

	t41 = (((x205<=x206)-x207)*x208);

	if (t41 != 544) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x210 = -1;
	int32_t x212 = INT32_MIN;
	volatile uint32_t t42 = 41867U;

	t42 = (((x209<=x210)-x211)*x212);

	if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = INT8_MIN;
	volatile uint16_t x218 = UINT16_MAX;
	uint8_t x219 = 10U;
	int32_t t43 = -8048770;

	t43 = (((x217<=x218)-x219)*x220);

	if (t43 != 9) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MIN;
	uint64_t x227 = UINT64_MAX;
	volatile int64_t x228 = -1LL;

	t44 = (((x225<=x226)-x227)*x228);

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x229 = -8701;
	static int8_t x232 = -8;
	volatile uint64_t t45 = 757921LLU;

	t45 = (((x229<=x230)-x231)*x232);

	if (t45 != 11244094220748767104LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x238 = UINT32_MAX;
	int16_t x239 = INT16_MAX;
	uint16_t x240 = 1996U;

	t46 = (((x237<=x238)-x239)*x240);

	if (t46 != -65400936) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x245 = INT32_MAX;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -49;
	static uint16_t x248 = 115U;

	t47 = (((x245<=x246)-x247)*x248);

	if (t47 != 5635) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x250 = INT16_MIN;
	uint64_t x251 = UINT64_MAX;
	static int32_t x252 = INT32_MIN;
	uint64_t t48 = 3020204712LLU;

	t48 = (((x249<=x250)-x251)*x252);

	if (t48 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x253 = 394281657LLU;
	int8_t x254 = INT8_MAX;
	uint16_t x255 = 2568U;
	volatile int16_t x256 = 28;
	volatile int32_t t49 = -798833800;

	t49 = (((x253<=x254)-x255)*x256);

	if (t49 != -71904) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = -1944;
	volatile uint64_t t50 = 67726189594172LLU;

	t50 = (((x257<=x258)-x259)*x260);

	if (t50 != 220076023414LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x269 = -19;
	int32_t x270 = INT32_MAX;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t51 = -52;

	t51 = (((x269<=x270)-x271)*x272);

	if (t51 != -4128642) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x274 = 24;
	static uint8_t x275 = 2U;
	static int8_t x276 = 0;
	int32_t t52 = 6209;

	t52 = (((x273<=x274)-x275)*x276);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x282 = 120875424692098449LLU;
	static volatile int64_t t53 = 1122644651171008LL;

	t53 = (((x281<=x282)-x283)*x284);

	if (t53 != -83263109622LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x285 = INT8_MIN;
	volatile int16_t x286 = 14407;
	static int16_t x287 = 232;
	int16_t x288 = INT16_MIN;
	volatile int32_t t54 = 827308746;

	t54 = (((x285<=x286)-x287)*x288);

	if (t54 != 7569408) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x289 = -1;
	uint16_t x290 = 19770U;
	int32_t x292 = INT32_MAX;
	volatile uint64_t t55 = 1555689364LLU;

	t55 = (((x289<=x290)-x291)*x292);

	if (t55 != 4294967294LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x293 = INT8_MAX;
	uint64_t x295 = 138758329052LLU;
	static uint8_t x296 = UINT8_MAX;
	uint64_t t56 = 2230040080410835683LLU;

	t56 = (((x293<=x294)-x295)*x296);

	if (t56 != 18446708690335643356LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x299 = INT8_MIN;
	int32_t x300 = 2;
	int32_t t57 = -104;

	t57 = (((x297<=x298)-x299)*x300);

	if (t57 != 256) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = INT64_MIN;
	static int16_t x302 = 9;
	int16_t x304 = -1;
	int32_t t58 = -62;

	t58 = (((x301<=x302)-x303)*x304);

	if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MIN;
	static int32_t x307 = 310991;
	int8_t x308 = INT8_MIN;
	int32_t t59 = 103135707;

	t59 = (((x305<=x306)-x307)*x308);

	if (t59 != 39806848) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x309 = INT16_MIN;
	volatile int16_t x310 = INT16_MIN;
	static int16_t x311 = INT16_MIN;
	volatile int32_t t60 = 59648374;

	t60 = (((x309<=x310)-x311)*x312);

	if (t60 != -1073774592) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x313 = UINT16_MAX;
	uint16_t x314 = 4U;
	int16_t x315 = INT16_MIN;
	int32_t t61 = 845890483;

	t61 = (((x313<=x314)-x315)*x316);

	if (t61 != 98304) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = 6;
	uint32_t x318 = 836U;
	static uint32_t x320 = 1401U;
	volatile int64_t t62 = -224501LL;

	t62 = (((x317<=x318)-x319)*x320);

	if (t62 != 2802LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x321 = INT32_MIN;
	static uint16_t x322 = 8385U;
	int16_t x323 = INT16_MAX;
	uint8_t x324 = 1U;
	volatile int32_t t63 = -7430;

	t63 = (((x321<=x322)-x323)*x324);

	if (t63 != -32766) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x329 = 304655206117590949LLU;
	int16_t x331 = -1;
	int32_t x332 = INT32_MAX;
	volatile int32_t t64 = INT32_MAX;

	t64 = (((x329<=x330)-x331)*x332);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = 0;
	static int64_t x335 = 9881LL;
	volatile int16_t x336 = 488;

	t65 = (((x333<=x334)-x335)*x336);

	if (t65 != -4821440LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x338 = INT16_MIN;
	volatile uint16_t x339 = 7487U;
	static uint8_t x340 = UINT8_MAX;
	volatile int32_t t66 = 110;

	t66 = (((x337<=x338)-x339)*x340);

	if (t66 != -1909185) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 651LLU;
	volatile uint64_t t67 = 1367949472921LLU;

	t67 = (((x341<=x342)-x343)*x344);

	if (t67 != 83979LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = INT64_MIN;
	volatile uint8_t x346 = 8U;
	int8_t x347 = INT8_MIN;
	static uint8_t x348 = 4U;
	int32_t t68 = -14;

	t68 = (((x345<=x346)-x347)*x348);

	if (t68 != 516) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x358 = -1;
	uint64_t x359 = 0LLU;
	uint64_t t69 = 65867835LLU;

	t69 = (((x357<=x358)-x359)*x360);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x361 = -1863;
	uint64_t x362 = 1098226980392LLU;
	volatile uint64_t x364 = 1099040245485287194LLU;

	t70 = (((x361<=x362)-x363)*x364);

	if (t70 != 10365242408448246110LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x369 = 3818LLU;
	uint8_t x370 = 0U;
	int16_t x371 = -1;
	static int32_t x372 = -1;
	static volatile int32_t t71 = 60;

	t71 = (((x369<=x370)-x371)*x372);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int16_t x375 = INT16_MAX;
	volatile int32_t t72 = -322;

	t72 = (((x373<=x374)-x375)*x376);

	if (t72 != 1638350) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x378 = 51916874U;
	int64_t x379 = -487LL;
	volatile uint16_t x380 = 1U;
	int64_t t73 = -5400008744LL;

	t73 = (((x377<=x378)-x379)*x380);

	if (t73 != 488LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x381 = 2440U;
	int64_t x382 = 197LL;
	int8_t x383 = -1;
	volatile int16_t x384 = INT16_MIN;

	t74 = (((x381<=x382)-x383)*x384);

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = 0;
	int32_t x386 = INT32_MAX;
	int8_t x387 = INT8_MIN;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t75 = 0;

	t75 = (((x385<=x386)-x387)*x388);

	if (t75 != 16383) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x393 = UINT8_MAX;
	int32_t x394 = 2794656;
	int32_t x396 = -484664;

	t76 = (((x393<=x394)-x395)*x396);

	if (t76 != 69791616) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x398 = -2902921LL;
	volatile int32_t t77 = 121;

	t77 = (((x397<=x398)-x399)*x400);

	if (t77 != -4121596) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x401 = -1;
	int32_t x402 = INT32_MIN;
	uint8_t x403 = 1U;
	static uint8_t x404 = 12U;
	int32_t t78 = -3;

	t78 = (((x401<=x402)-x403)*x404);

	if (t78 != -12) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MAX;
	uint32_t x407 = 6521292U;
	int16_t x408 = 121;
	static uint32_t t79 = 1232U;

	t79 = (((x405<=x406)-x407)*x408);

	if (t79 != 3505891085U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x410 = 7;
	static volatile int8_t x411 = INT8_MAX;
	volatile int32_t t80 = 0;

	t80 = (((x409<=x410)-x411)*x412);

	if (t80 != 24822) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = 11777;
	uint64_t x415 = UINT64_MAX;
	uint64_t x416 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (((x413<=x414)-x415)*x416);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x417 = INT32_MIN;
	int16_t x418 = INT16_MAX;
	volatile uint64_t x419 = 4353LLU;
	uint32_t x420 = 0U;
	uint64_t t82 = 38LLU;

	t82 = (((x417<=x418)-x419)*x420);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x422 = -1;
	static int64_t x423 = 2675036969LL;
	int8_t x424 = -1;
	volatile int64_t t83 = 774138757506015099LL;

	t83 = (((x421<=x422)-x423)*x424);

	if (t83 != 2675036968LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x425 = -1;
	static volatile int8_t x426 = INT8_MIN;
	int16_t x428 = 20;
	static uint32_t t84 = 15481U;

	t84 = (((x425<=x426)-x427)*x428);

	if (t84 != 4294933156U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x437 = 27U;
	static uint64_t x438 = 61887LLU;
	int8_t x439 = INT8_MIN;
	volatile uint8_t x440 = UINT8_MAX;

	t85 = (((x437<=x438)-x439)*x440);

	if (t85 != 32895) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x441 = -1;
	uint8_t x444 = 99U;

	t86 = (((x441<=x442)-x443)*x444);

	if (t86 != -2970LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x445 = 0U;
	volatile uint16_t x446 = 2U;
	uint16_t x447 = 166U;
	static uint8_t x448 = UINT8_MAX;
	volatile int32_t t87 = 0;

	t87 = (((x445<=x446)-x447)*x448);

	if (t87 != -42075) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x457 = -28LL;
	int16_t x458 = -213;
	int64_t x459 = -20333LL;
	int32_t x460 = INT32_MIN;

	t88 = (((x457<=x458)-x459)*x460);

	if (t88 != -43664785014784LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x461 = 158110298U;
	int16_t x463 = -77;
	int16_t x464 = -10544;
	volatile int32_t t89 = 32796205;

	t89 = (((x461<=x462)-x463)*x464);

	if (t89 != -822432) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x469 = 36U;
	int32_t x470 = 28319626;
	int16_t x471 = -11;
	int32_t x472 = -15275;
	int32_t t90 = -30797;

	t90 = (((x469<=x470)-x471)*x472);

	if (t90 != -183300) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t t91 = 1598630234539309LL;

	t91 = (((x473<=x474)-x475)*x476);

	if (t91 != 11915LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x477 = UINT64_MAX;
	uint8_t x478 = UINT8_MAX;
	static int32_t x480 = INT32_MIN;
	int32_t t92 = INT32_MIN;

	t92 = (((x477<=x478)-x479)*x480);

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x481 = UINT32_MAX;
	int16_t x482 = 3;
	static int16_t x484 = 1504;

	t93 = (((x481<=x482)-x483)*x484);

	if (t93 != 4292211968U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x485 = 1;
	uint64_t x486 = 2731LLU;
	int64_t x487 = 857850950479133195LL;
	int64_t x488 = 1LL;
	int64_t t94 = -495649961949901898LL;

	t94 = (((x485<=x486)-x487)*x488);

	if (t94 != -857850950479133194LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x489 = UINT8_MAX;
	static int8_t x490 = INT8_MIN;
	static volatile int8_t x491 = 11;
	uint64_t t95 = 1089753349251432LLU;

	t95 = (((x489<=x490)-x491)*x492);

	if (t95 != 18446744069007608425LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x493 = INT16_MIN;
	uint8_t x494 = UINT8_MAX;
	static uint16_t x495 = 7204U;
	volatile int64_t t96 = 394LL;

	t96 = (((x493<=x494)-x495)*x496);

	if (t96 != -9270261LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x497 = INT16_MIN;
	int64_t x498 = INT64_MIN;
	static int64_t x500 = -1LL;
	int64_t t97 = 2337367470150LL;

	t97 = (((x497<=x498)-x499)*x500);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x502 = 4U;
	uint32_t x504 = UINT32_MAX;
	uint32_t t98 = 15491291U;

	t98 = (((x501<=x502)-x503)*x504);

	if (t98 != 32766U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x506 = INT32_MIN;
	uint32_t x508 = 372U;
	uint64_t t99 = 122147225859008LLU;

	t99 = (((x505<=x506)-x507)*x508);

	if (t99 != 18435190770873189304LLU) { NG(); } else { ; }
	
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

