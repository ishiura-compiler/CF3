#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = UINT64_MAX;
int8_t x2 = INT8_MAX;
int8_t x7 = INT8_MIN;
uint32_t x14 = UINT32_MAX;
int32_t t5 = 2;
volatile int64_t t6 = -192414784402177LL;
uint16_t x41 = 6U;
int64_t x44 = INT64_MIN;
volatile uint8_t x49 = UINT8_MAX;
static int32_t x54 = 3643;
static int32_t x58 = -1;
uint16_t x59 = UINT16_MAX;
uint32_t x61 = 979267U;
uint64_t x63 = UINT64_MAX;
int64_t x68 = INT64_MIN;
int16_t x74 = INT16_MAX;
static int32_t t16 = 10570;
int64_t x83 = -678533056747860694LL;
int32_t x90 = -1;
static int16_t x96 = INT16_MIN;
static int8_t x97 = 12;
volatile int16_t x101 = INT16_MAX;
int8_t x102 = 23;
int64_t t21 = -48387665173LL;
static int16_t x108 = -3;
volatile int32_t x120 = INT32_MIN;
uint16_t x125 = 783U;
int16_t x131 = -160;
int32_t x138 = INT32_MIN;
uint32_t x149 = 2139965U;
volatile int8_t x153 = INT8_MAX;
volatile uint64_t t31 = 3140143LLU;
static volatile uint8_t x166 = 5U;
static volatile int8_t x173 = INT8_MIN;
static int16_t x178 = INT16_MIN;
uint8_t x180 = UINT8_MAX;
static uint32_t x183 = UINT32_MAX;
volatile int64_t t37 = 907LL;
uint32_t x193 = 3870569U;
static int64_t x196 = -1LL;
int32_t x198 = -34;
int16_t x199 = INT16_MAX;
volatile int32_t t39 = -976033;
volatile uint64_t x203 = 5LLU;
int16_t x215 = INT16_MAX;
volatile int8_t x216 = INT8_MIN;
int32_t t42 = -234082370;
uint32_t x220 = UINT32_MAX;
volatile uint32_t t43 = 62007U;
int32_t x226 = -10;
int8_t x231 = -1;
uint16_t x238 = 84U;
volatile uint16_t x239 = 1497U;
uint64_t t46 = 138LLU;
int8_t x241 = -22;
static int32_t x244 = INT32_MIN;
int8_t x251 = INT8_MIN;
volatile uint64_t t49 = 19953LLU;
volatile int32_t t53 = -1;
int32_t x279 = INT32_MIN;
int16_t x289 = INT16_MIN;
int64_t x292 = -546378779LL;
int16_t x296 = -1;
int64_t x297 = -1LL;
int16_t x298 = -1;
static int16_t x305 = INT16_MIN;
int16_t x308 = INT16_MIN;
uint64_t t60 = 5786450658516LLU;
int32_t t62 = -12067;
int64_t x334 = -1LL;
int32_t x335 = INT32_MAX;
uint64_t t64 = 3030LLU;
static uint32_t x341 = 0U;
uint64_t t65 = 15640275168701747LLU;
int16_t x349 = INT16_MIN;
uint8_t x350 = UINT8_MAX;
int16_t x355 = 0;
int32_t t68 = 13;
static uint32_t t69 = 15U;
int64_t x369 = -1047LL;
static uint16_t x375 = 3U;
int8_t x383 = INT8_MIN;
static volatile int64_t t74 = 13722777636434LL;
int64_t x391 = INT64_MAX;
static uint32_t x411 = UINT32_MAX;
volatile uint64_t t79 = 0LLU;
int8_t x415 = -1;
static volatile int32_t t80 = 5;
uint16_t x422 = UINT16_MAX;
int64_t x432 = 3461723047478022320LL;
static volatile int64_t t84 = -83531374LL;
int16_t x436 = INT16_MAX;
volatile int64_t x437 = INT64_MIN;
static uint64_t x440 = 833563943LLU;
int32_t x442 = INT32_MAX;
int32_t x452 = -1;
int16_t x457 = -1;
volatile int32_t x461 = INT32_MIN;
int16_t x463 = -1;
volatile uint64_t t93 = UINT64_MAX;
int8_t x481 = -31;
static int64_t x489 = INT64_MAX;
int16_t x493 = -1;
uint8_t x494 = 21U;
volatile int64_t x495 = INT64_MAX;
int64_t t98 = -22LL;
static uint8_t x497 = 78U;
static uint8_t x498 = 3U;


void f0(void) {
	static int64_t x3 = -1LL;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 47787203499783LLU;

	t0 = (x1^((x2-x3)-x4));

	if (t0 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -6053214255855LL;
	static volatile int64_t x6 = 2427218LL;
	int64_t x8 = -1LL;
	static int64_t t1 = 1LL;

	t1 = (x5^((x6-x7)-x8));

	if (t1 != -6053211829054LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	int32_t x10 = INT32_MIN;
	int64_t x11 = 27064965281783989LL;
	uint64_t x12 = 3152975121020142549LLU;
	static uint64_t t2 = 11780487419213795LLU;

	t2 = (x9^((x10-x11)-x12));

	if (t2 != 15266703984304809097LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -796;
	int32_t x15 = INT32_MIN;
	volatile int32_t x16 = INT32_MIN;
	static uint32_t t3 = 50838U;

	t3 = (x13^((x14-x15)-x16));

	if (t3 != 795U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 2560065556894LL;
	uint32_t x22 = 19483512U;
	volatile uint32_t x23 = 23263U;
	static int32_t x24 = INT32_MIN;
	volatile int64_t t4 = 3150154395451323LL;

	t4 = (x21^((x22-x23)-x24));

	if (t4 != 2562197856519LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -1;
	int16_t x26 = INT16_MIN;
	static uint8_t x27 = 2U;
	int8_t x28 = 15;

	t5 = (x25^((x26-x27)-x28));

	if (t5 != 32784) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = INT32_MIN;
	static int64_t x34 = INT64_MAX;
	int64_t x35 = 30LL;
	int8_t x36 = 4;

	t6 = (x33^((x34-x35)-x36));

	if (t6 != -9223372034707292195LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	int64_t t7 = -38422807062553LL;

	t7 = (x41^((x42-x43)-x44));

	if (t7 != 32774LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x45 = -251803LL;
	int64_t x46 = -2543654332667699LL;
	uint16_t x47 = 184U;
	volatile uint64_t x48 = 1957040400261624LLU;
	static volatile uint64_t t8 = 601431936399725LLU;

	t8 = (x45^((x46-x47)-x48));

	if (t8 != 4500694733139576LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x50 = -2785835;
	static int8_t x51 = 1;
	int32_t x52 = INT32_MIN;
	volatile int32_t t9 = 279089948;

	t9 = (x49^((x50-x51)-x52));

	if (t9 != 2144697643) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	volatile int32_t x55 = 864153613;
	volatile int16_t x56 = INT16_MAX;
	static volatile int32_t t10 = -52;

	t10 = (x53^((x54-x55)-x56));

	if (t10 != 864182703) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = 2539978;
	static volatile int32_t x60 = INT32_MIN;
	int32_t t11 = -88603663;

	t11 = (x57^((x58-x59)-x60));

	if (t11 != 2144977354) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x62 = 5U;
	static int32_t x64 = INT32_MIN;
	static volatile uint64_t t12 = 5746414LLU;

	t12 = (x61^((x62-x63)-x64));

	if (t12 != 2148462917LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x65 = UINT16_MAX;
	int64_t x66 = 14885095904420LL;
	int64_t x67 = INT64_MAX;
	volatile int64_t t13 = -31813332LL;

	t13 = (x65^((x66-x67)-x68));

	if (t13 != 14885095893850LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 41;
	static uint8_t x70 = 4U;
	static int32_t x71 = 0;
	volatile uint16_t x72 = 8U;
	volatile int32_t t14 = 14579;

	t14 = (x69^((x70-x71)-x72));

	if (t14 != -43) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MAX;
	uint8_t x75 = 5U;
	uint32_t x76 = UINT32_MAX;
	int64_t t15 = 0LL;

	t15 = (x73^((x74-x75)-x76));

	if (t15 != 9223372036854743044LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	static volatile int16_t x78 = -11;
	int32_t x79 = -1;
	static int8_t x80 = INT8_MAX;

	t16 = (x77^((x78-x79)-x80));

	if (t16 != 136) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	int32_t x82 = -96785;
	uint8_t x84 = 41U;
	volatile int64_t t17 = 10639594623869178LL;

	t17 = (x81^((x82-x83)-x84));

	if (t17 != 678533056747763939LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x89 = -1;
	int8_t x91 = -1;
	uint32_t x92 = 67016823U;
	uint32_t t18 = 132U;

	t18 = (x89^((x90-x91)-x92));

	if (t18 != 67016822U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MAX;
	uint32_t x95 = 7U;
	uint32_t t19 = 195972U;

	t19 = (x93^((x94-x95)-x96));

	if (t19 != 4294901880U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x98 = 121506U;
	int64_t x99 = 5120145LL;
	static int8_t x100 = 0;
	volatile int64_t t20 = -4335280990332LL;

	t20 = (x97^((x98-x99)-x100));

	if (t20 != -4998627LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x103 = 2571751LL;
	int8_t x104 = -1;

	t21 = (x101^((x102-x103)-x104));

	if (t21 != -2572850LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = 11;
	int8_t x107 = -1;
	int32_t t22 = -5;

	t22 = (x105^((x106-x107)-x108));

	if (t22 != 2147483632) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	volatile uint32_t x110 = 6162U;
	static uint16_t x111 = UINT16_MAX;
	int16_t x112 = -258;
	uint32_t t23 = 691522U;

	t23 = (x109^((x110-x111)-x112));

	if (t23 != 2147424533U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = INT16_MIN;
	static uint32_t x114 = 1U;
	static uint32_t x115 = 7124U;
	uint8_t x116 = UINT8_MAX;
	volatile uint32_t t24 = 41496U;

	t24 = (x113^((x114-x115)-x116));

	if (t24 != 25390U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	static int64_t x118 = -990893893LL;
	uint64_t x119 = 17819986026113LLU;
	volatile uint64_t t25 = 6166974847LLU;

	t25 = (x117^((x118-x119)-x120));

	if (t25 != 17818661702202LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x126 = -236102171LL;
	int64_t x127 = INT64_MIN;
	uint32_t x128 = 1559827U;
	volatile int64_t t26 = -34033532791LL;

	t26 = (x125^((x126-x127)-x128));

	if (t26 != 9223372036617114589LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MIN;
	volatile int64_t x130 = -1LL;
	volatile uint64_t x132 = 676570490256156026LLU;
	volatile uint64_t t27 = 123863957LLU;

	t27 = (x129^((x130-x131)-x132));

	if (t27 != 8546801546598619941LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = INT32_MIN;
	static int8_t x139 = -1;
	int64_t x140 = INT64_MIN;
	volatile int64_t t28 = 361723521302890256LL;

	t28 = (x137^((x138-x139)-x140));

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x141 = 9U;
	int32_t x142 = -3;
	uint64_t x143 = 9215005774879320LLU;
	int16_t x144 = INT16_MIN;
	static volatile uint64_t t29 = 1584925LLU;

	t29 = (x141^((x142-x143)-x144));

	if (t29 != 18437529067934705068LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x150 = UINT32_MAX;
	static int64_t x151 = -1LL;
	static int8_t x152 = 0;
	int64_t t30 = -4LL;

	t30 = (x149^((x150-x151)-x152));

	if (t30 != 4297107261LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x154 = 613286613LLU;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;

	t31 = (x153^((x154-x155)-x156));

	if (t31 != 613286570LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = -1;
	volatile int32_t x163 = -7447627;
	volatile int64_t x164 = INT64_MAX;
	volatile int64_t t32 = 2097871669193LL;

	t32 = (x161^((x162-x163)-x164));

	if (t32 != 9223372036847313995LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = -1;
	int16_t x167 = -1;
	int8_t x168 = INT8_MAX;
	int32_t t33 = -10;

	t33 = (x165^((x166-x167)-x168));

	if (t33 != 120) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = INT16_MAX;
	volatile int32_t x170 = -11972975;
	uint16_t x171 = 3677U;
	int8_t x172 = 6;
	int32_t t34 = 16163;

	t34 = (x169^((x170-x171)-x172));

	if (t34 != -11976751) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x174 = 1209213620754159721LL;
	volatile uint32_t x175 = 851594U;
	volatile int16_t x176 = -2431;
	int64_t t35 = 19028404LL;

	t35 = (x173^((x174-x175)-x176));

	if (t35 != -1209213620753310498LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x177 = 120U;
	volatile uint8_t x179 = 16U;
	static volatile int32_t t36 = 24459114;

	t36 = (x177^((x178-x179)-x180));

	if (t36 != -33143) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = -3201708602978LL;
	int32_t x184 = INT32_MIN;

	t37 = (x181^((x182-x183)-x184));

	if (t37 != 3203856091551LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x194 = 292U;
	int16_t x195 = INT16_MAX;
	int64_t t38 = -1076149477154985LL;

	t38 = (x193^((x194-x195)-x196));

	if (t38 != 4291071567LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x197 = INT32_MAX;
	int32_t x200 = INT32_MIN;

	t39 = (x197^((x198-x199)-x200));

	if (t39 != 32800) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = 1;
	volatile int32_t x202 = INT32_MIN;
	static int16_t x204 = -1;
	volatile uint64_t t40 = 3027120702630464LLU;

	t40 = (x201^((x202-x203)-x204));

	if (t40 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x205 = INT64_MIN;
	uint16_t x206 = 45U;
	uint16_t x207 = UINT16_MAX;
	static int64_t x208 = INT64_MIN;
	static volatile int64_t t41 = -9044638023750LL;

	t41 = (x205^((x206-x207)-x208));

	if (t41 != -65490LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = -1;
	volatile int32_t x214 = -1;

	t42 = (x213^((x214-x215)-x216));

	if (t42 != 32639) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x218 = UINT32_MAX;
	int16_t x219 = INT16_MIN;

	t43 = (x217^((x218-x219)-x220));

	if (t43 != 2147516416U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x225 = -1;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = INT32_MIN;
	uint64_t t44 = 5640938318429LLU;

	t44 = (x225^((x226-x227)-x228));

	if (t44 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x229 = 478135460U;
	int32_t x230 = 70085;
	volatile int32_t x232 = -1;
	uint32_t t45 = 501701U;

	t45 = (x229^((x230-x231)-x232));

	if (t45 != 478074211U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x237 = UINT64_MAX;
	int16_t x240 = -1;

	t46 = (x237^((x238-x239)-x240));

	if (t46 != 1411LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x242 = 5526004U;
	uint64_t x243 = 1777178498788LLU;
	volatile uint64_t t47 = 2224051004038892LLU;

	t47 = (x241^((x242-x243)-x244));

	if (t47 != 1775025489146LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x245 = INT64_MIN;
	int32_t x246 = INT32_MIN;
	volatile int16_t x247 = INT16_MIN;
	int64_t x248 = 15299164LL;
	volatile int64_t t48 = 44702330187LL;

	t48 = (x245^((x246-x247)-x248));

	if (t48 != 9223372034692025764LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = 1;
	uint64_t x250 = 12LLU;
	static volatile int16_t x252 = -3;

	t49 = (x249^((x250-x251)-x252));

	if (t49 != 142LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	volatile int32_t x256 = -4;
	int64_t t50 = -128129227550451825LL;

	t50 = (x253^((x254-x255)-x256));

	if (t50 != 9223372034707324932LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x257 = -1LL;
	int64_t x258 = 2090369LL;
	static int8_t x259 = INT8_MIN;
	volatile uint16_t x260 = UINT16_MAX;
	volatile int64_t t51 = 19134387LL;

	t51 = (x257^((x258-x259)-x260));

	if (t51 != -2024963LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x265 = -1282;
	volatile int8_t x266 = INT8_MIN;
	volatile uint8_t x267 = 13U;
	int64_t x268 = -1LL;
	volatile int64_t t52 = -1702459222LL;

	t52 = (x265^((x266-x267)-x268));

	if (t52 != 1418LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = -7138;
	int16_t x270 = INT16_MAX;
	uint16_t x271 = 1U;
	int16_t x272 = 0;

	t53 = (x269^((x270-x271)-x272));

	if (t53 != -25632) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = 55941032639021697LLU;
	static int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;
	static uint64_t t54 = 892270059LLU;

	t54 = (x273^((x274-x275)-x276));

	if (t54 != 55941032639021696LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x277 = INT8_MAX;
	int8_t x278 = -59;
	int16_t x280 = INT16_MAX;
	int32_t t55 = 92044;

	t55 = (x277^((x278-x279)-x280));

	if (t55 != 2147450809) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x281 = 24U;
	static uint32_t x282 = 898280U;
	int16_t x283 = 2468;
	static uint64_t x284 = 565268828794502LLU;
	uint64_t t56 = 848750889661LLU;

	t56 = (x281^((x282-x283)-x284));

	if (t56 != 18446178804881652902LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x290 = -28;
	int8_t x291 = INT8_MAX;
	int64_t t57 = 683950771LL;

	t57 = (x289^((x290-x291)-x292));

	if (t57 != -546401408LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x293 = 1600LLU;
	uint8_t x294 = UINT8_MAX;
	volatile uint16_t x295 = UINT16_MAX;
	uint64_t t58 = 227465646LLU;

	t58 = (x293^((x294-x295)-x296));

	if (t58 != 18446744073709487937LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x299 = 51U;
	volatile uint32_t x300 = UINT32_MAX;
	volatile int64_t t59 = 180711548827009537LL;

	t59 = (x297^((x298-x299)-x300));

	if (t59 != -4294967246LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x306 = -1;
	uint64_t x307 = 8647910138417910LLU;

	t60 = (x305^((x306-x307)-x308));

	if (t60 != 8647910138408201LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x325 = 575LLU;
	int64_t x326 = INT64_MIN;
	uint8_t x327 = 0U;
	int8_t x328 = INT8_MIN;
	uint64_t t61 = 107665181147LLU;

	t61 = (x325^((x326-x327)-x328));

	if (t61 != 9223372036854776511LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x329 = 919U;
	static int8_t x330 = -1;
	static int8_t x331 = -1;
	static int32_t x332 = -1;

	t62 = (x329^((x330-x331)-x332));

	if (t62 != 918) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x333 = -1;
	uint32_t x336 = 333734U;
	volatile int64_t t63 = 615LL;

	t63 = (x333^((x334-x335)-x336));

	if (t63 != 2147817381LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x337 = UINT16_MAX;
	int32_t x338 = INT32_MIN;
	uint64_t x339 = 15552577287LLU;
	int64_t x340 = INT64_MIN;

	t64 = (x337^((x338-x339)-x340));

	if (t64 != 9223372019154714374LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x342 = -218088092;
	volatile uint64_t x343 = 1623482728158LLU;
	int8_t x344 = INT8_MIN;

	t65 = (x341^((x342-x343)-x344));

	if (t65 != 18446742450008735494LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x345 = INT64_MAX;
	volatile int8_t x346 = -48;
	volatile uint16_t x347 = 338U;
	uint32_t x348 = 293265U;
	volatile int64_t t66 = -16099170469131685LL;

	t66 = (x345^((x346-x347)-x348));

	if (t66 != 9223372032560102162LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x351 = 10LLU;
	int8_t x352 = INT8_MIN;
	static volatile uint64_t t67 = 10836424873974LLU;

	t67 = (x349^((x350-x351)-x352));

	if (t67 != 18446744073709519221LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x353 = -1;
	volatile int8_t x354 = -3;
	static volatile uint8_t x356 = UINT8_MAX;

	t68 = (x353^((x354-x355)-x356));

	if (t68 != 257) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x357 = UINT16_MAX;
	uint8_t x358 = UINT8_MAX;
	uint32_t x359 = 24683U;
	uint16_t x360 = UINT16_MAX;

	t69 = (x357^((x358-x359)-x360));

	if (t69 != 4294860650U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x361 = -35271LL;
	int64_t x362 = INT64_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = 0;
	volatile uint64_t t70 = 60821419042LLU;

	t70 = (x361^((x362-x363)-x364));

	if (t70 != 9223372036854740536LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x370 = -18;
	uint32_t x371 = 59257U;
	volatile uint64_t x372 = 283404614LLU;
	volatile uint64_t t71 = 12509LLU;

	t71 = (x369^((x370-x371)-x372));

	if (t71 != 18446744069698049222LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x373 = 227393583;
	int8_t x374 = -1;
	int16_t x376 = INT16_MAX;
	static int32_t t72 = 0;

	t72 = (x373^((x374-x375)-x376));

	if (t72 != -227360814) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x377 = 132U;
	int16_t x378 = 10;
	int8_t x379 = INT8_MAX;
	static uint16_t x380 = 62U;
	static volatile int32_t t73 = 306926;

	t73 = (x377^((x378-x379)-x380));

	if (t73 != -55) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x381 = -5;
	int64_t x382 = -3153LL;
	static int8_t x384 = -1;

	t74 = (x381^((x382-x383)-x384));

	if (t74 != 3019LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x389 = -263;
	int64_t x390 = INT64_MAX;
	uint64_t x392 = 1266LLU;
	uint64_t t75 = 49784LLU;

	t75 = (x389^((x390-x391)-x392));

	if (t75 != 1527LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x393 = INT32_MAX;
	int16_t x394 = -162;
	int64_t x395 = -257042951477LL;
	uint64_t x396 = 9LLU;
	uint64_t t76 = 122957LLU;

	t76 = (x393^((x394-x395)-x396));

	if (t76 != 256205640565LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x401 = 1;
	static uint16_t x402 = 18U;
	int16_t x403 = 9483;
	static uint64_t x404 = 10794LLU;
	volatile uint64_t t77 = 486194LLU;

	t77 = (x401^((x402-x403)-x404));

	if (t77 != 18446744073709531356LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x405 = INT64_MIN;
	volatile uint8_t x406 = 11U;
	uint64_t x407 = 11743078LLU;
	uint32_t x408 = 51U;
	volatile uint64_t t78 = 491224LLU;

	t78 = (x405^((x406-x407)-x408));

	if (t78 != 9223372036843032690LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x409 = INT64_MAX;
	static uint64_t x410 = 210802426LLU;
	uint64_t x412 = 30987LLU;

	t79 = (x409^((x410-x411)-x412));

	if (t79 != 9223372040938971663LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x413 = 1;
	volatile uint8_t x414 = 0U;
	int32_t x416 = 10292;

	t80 = (x413^((x414-x415)-x416));

	if (t80 != -10292) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x417 = UINT64_MAX;
	int8_t x418 = -1;
	uint8_t x419 = 125U;
	int8_t x420 = INT8_MIN;
	volatile uint64_t t81 = 88986529LLU;

	t81 = (x417^((x418-x419)-x420));

	if (t81 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x421 = 1089U;
	static int16_t x423 = -1;
	static int8_t x424 = INT8_MAX;
	volatile uint32_t t82 = 1894432U;

	t82 = (x421^((x422-x423)-x424));

	if (t82 != 64448U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x425 = 65U;
	int8_t x426 = INT8_MIN;
	static int64_t x427 = INT64_MIN;
	int64_t x428 = -2LL;
	volatile int64_t t83 = 423516LL;

	t83 = (x425^((x426-x427)-x428));

	if (t83 != 9223372036854775747LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = 17;
	uint8_t x430 = 48U;
	int32_t x431 = 316;

	t84 = (x429^((x430-x431)-x432));

	if (t84 != -3461723047478022571LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x433 = -1;
	uint8_t x434 = 41U;
	static uint32_t x435 = 118824964U;
	uint32_t t85 = 1938U;

	t85 = (x433^((x434-x435)-x436));

	if (t85 != 118857689U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x438 = INT64_MIN;
	int32_t x439 = -377540600;
	uint64_t t86 = 3401479210LLU;

	t86 = (x437^((x438-x439)-x440));

	if (t86 != 18446744073253528273LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x441 = INT64_MIN;
	static int32_t x443 = INT32_MAX;
	int32_t x444 = 7014316;
	static int64_t t87 = -54610621993087616LL;

	t87 = (x441^((x442-x443)-x444));

	if (t87 != 9223372036847761492LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MAX;
	uint16_t x447 = 187U;
	int32_t x448 = INT32_MAX;
	int32_t t88 = 93121087;

	t88 = (x445^((x446-x447)-x448));

	if (t88 != 2147451077) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x449 = 12339314909LLU;
	int8_t x450 = -1;
	int32_t x451 = 361422523;
	volatile uint64_t t89 = 44LLU;

	t89 = (x449^((x450-x451)-x452));

	if (t89 != 18446744061714768280LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x453 = -1;
	int64_t x454 = 6LL;
	uint8_t x455 = 121U;
	uint64_t x456 = UINT64_MAX;
	volatile uint64_t t90 = 203393LLU;

	t90 = (x453^((x454-x455)-x456));

	if (t90 != 113LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x458 = UINT32_MAX;
	static uint64_t x459 = UINT64_MAX;
	int8_t x460 = INT8_MAX;
	volatile uint64_t t91 = 105362507871837LLU;

	t91 = (x457^((x458-x459)-x460));

	if (t91 != 18446744069414584446LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x462 = INT8_MIN;
	volatile int8_t x464 = INT8_MIN;
	int32_t t92 = -17536471;

	t92 = (x461^((x462-x463)-x464));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x469 = INT16_MIN;
	static int64_t x470 = -1LL;
	int16_t x471 = INT16_MIN;
	volatile uint64_t x472 = 0LLU;

	t93 = (x469^((x470-x471)-x472));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x477 = -1;
	uint16_t x478 = 1U;
	volatile int64_t x479 = -6957LL;
	volatile int16_t x480 = INT16_MAX;
	static int64_t t94 = -7LL;

	t94 = (x477^((x478-x479)-x480));

	if (t94 != 25808LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x482 = UINT8_MAX;
	static int8_t x483 = INT8_MIN;
	int32_t x484 = INT32_MAX;
	volatile int32_t t95 = 63753;

	t95 = (x481^((x482-x483)-x484));

	if (t95 != 2147483233) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x485 = -1;
	volatile uint32_t x486 = 28390659U;
	volatile int32_t x487 = INT32_MIN;
	int64_t x488 = 23474660911317LL;
	int64_t t96 = -10762LL;

	t96 = (x485^((x486-x487)-x488));

	if (t96 != 23472485037009LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x490 = INT64_MAX;
	int8_t x491 = 28;
	int32_t x492 = -1;
	int64_t t97 = 8453938671LL;

	t97 = (x489^((x490-x491)-x492));

	if (t97 != 27LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x496 = -1LL;

	t98 = (x493^((x494-x495)-x496));

	if (t98 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x499 = -1;
	static int8_t x500 = INT8_MIN;
	static volatile int32_t t99 = -500151;

	t99 = (x497^((x498-x499)-x500));

	if (t99 != 202) { NG(); } else { ; }
	
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

