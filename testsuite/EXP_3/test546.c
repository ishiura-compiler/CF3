#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 228532;
int32_t t0 = -1;
static uint32_t x17 = UINT32_MAX;
uint64_t x18 = 22657949300796LLU;
static int8_t x19 = INT8_MAX;
int16_t x28 = -1;
int64_t x34 = 3376922652LL;
uint64_t x37 = UINT64_MAX;
volatile uint64_t t6 = 27523515837700776LLU;
int16_t x46 = INT16_MIN;
uint64_t x47 = 11153LLU;
uint64_t t7 = 287889983LLU;
uint32_t x49 = UINT32_MAX;
int16_t x51 = 608;
int64_t x60 = INT64_MIN;
volatile int64_t x63 = INT64_MIN;
volatile int64_t t10 = 151694838442LL;
int32_t x66 = -1;
uint32_t x67 = 1480114U;
volatile uint64_t t12 = 12156412721LLU;
uint64_t x73 = 15LLU;
volatile uint64_t t13 = 45454017199231LLU;
int32_t x77 = INT32_MIN;
volatile uint32_t x89 = UINT32_MAX;
uint16_t x101 = 1109U;
int16_t x103 = -1;
uint32_t x106 = 33878964U;
int64_t x112 = -1LL;
int64_t t20 = 368037522LL;
uint16_t x133 = 1U;
volatile int64_t t24 = 711567060762903384LL;
int16_t x140 = INT16_MIN;
int32_t x145 = INT32_MAX;
int32_t x148 = INT32_MIN;
int32_t t27 = INT32_MIN;
static int32_t x153 = -1;
volatile uint8_t x158 = 6U;
static int32_t x159 = 666685220;
uint16_t x165 = 30U;
static int8_t x177 = INT8_MAX;
static int8_t x189 = 1;
volatile uint8_t x190 = 47U;
uint8_t x194 = UINT8_MAX;
int64_t t37 = 92903845LL;
uint64_t x202 = 8461920805LLU;
uint64_t t38 = 892837578647946LLU;
int8_t x205 = 1;
int32_t x208 = -1;
uint32_t x217 = UINT32_MAX;
uint32_t t40 = 893908U;
uint8_t x228 = 6U;
static volatile int32_t t41 = 14210;
static int16_t x229 = INT16_MIN;
int64_t x231 = 596061LL;
static uint64_t x233 = UINT64_MAX;
uint64_t t43 = 644706642LLU;
int8_t x240 = INT8_MAX;
volatile int8_t x247 = INT8_MIN;
int16_t x253 = INT16_MIN;
int8_t x268 = -1;
volatile int32_t t49 = 1340;
uint16_t x275 = UINT16_MAX;
uint32_t x286 = 129573U;
uint64_t x288 = 1616743LLU;
int32_t x290 = -1;
uint16_t x322 = UINT16_MAX;
static int64_t t56 = -154953456762LL;
int64_t t57 = 4010685658039LL;
static int64_t x338 = 1561839LL;
uint32_t x343 = 49U;
uint64_t x346 = 279LLU;
static int64_t t61 = 92818717750647LL;
static int16_t x364 = -605;
volatile int64_t t63 = -8905268631LL;
volatile uint32_t x371 = UINT32_MAX;
volatile int16_t x372 = INT16_MIN;
int32_t x404 = INT32_MIN;
static volatile int64_t t69 = 729187LL;
int16_t x410 = INT16_MIN;
volatile uint32_t x412 = 401046885U;
uint8_t x421 = 50U;
int32_t x432 = -1;
static int8_t x444 = INT8_MIN;
volatile uint32_t x454 = UINT32_MAX;
uint32_t t78 = 26727U;
volatile uint16_t x463 = 13U;
int8_t x464 = -1;
uint8_t x466 = UINT8_MAX;
int8_t x467 = -1;
int16_t x475 = 0;
uint16_t x477 = 3267U;
volatile int64_t t85 = 87LL;
uint32_t t87 = 341684212U;
volatile int8_t x518 = -2;
int64_t x527 = 15LL;
int8_t x535 = 2;
uint32_t x544 = 11U;
static volatile int8_t x546 = 0;
int16_t x564 = -1;


void f0(void) {
	volatile int32_t x6 = -1;
	int16_t x7 = -1;
	int8_t x8 = -6;

	t0 = ((x5*x6)^(x7/x8));

	if (t0 != -228532) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x20 = 12971;
	volatile uint64_t t1 = 5112LLU;

	t1 = ((x17*x18)^(x19/x20));

	if (t1 != 8576229869052692420LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x21 = 113U;
	uint8_t x22 = 0U;
	int64_t x23 = INT64_MIN;
	int64_t x24 = -30837809711LL;
	int64_t t2 = -415291456964LL;

	t2 = ((x21*x22)^(x23/x24));

	if (t2 != 299092968LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x25 = -1;
	int64_t x26 = -37362917751165LL;
	static uint8_t x27 = 75U;
	volatile int64_t t3 = -32350034399LL;

	t3 = ((x25*x26)^(x27/x28));

	if (t3 != -37362917751096LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x29 = -1;
	static int16_t x30 = 14;
	volatile int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;
	static int64_t t4 = -1710150663761LL;

	t4 = ((x29*x30)^(x31/x32));

	if (t4 != -72057594037927950LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 20U;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MAX;
	int64_t t5 = 1296004329858LL;

	t5 = ((x33*x34)^(x35/x36));

	if (t5 != -67538453041LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x38 = 2046558957U;
	int16_t x39 = 18;
	int64_t x40 = 1541021653451LL;

	t6 = ((x37*x38)^(x39/x40));

	if (t6 != 18446744071662992659LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x45 = -1;
	uint64_t x48 = 58305LLU;

	t7 = ((x45*x46)^(x47/x48));

	if (t7 != 32768LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x50 = -70553187;
	int32_t x52 = INT32_MIN;
	volatile uint32_t t8 = 1U;

	t8 = ((x49*x50)^(x51/x52));

	if (t8 != 70553187U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x57 = INT8_MIN;
	static volatile int32_t x58 = 348;
	int32_t x59 = INT32_MIN;
	volatile int64_t t9 = 62559372737LL;

	t9 = ((x57*x58)^(x59/x60));

	if (t9 != -44544LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = -20LL;
	uint16_t x64 = 9621U;

	t10 = ((x61*x62)^(x63/x64));

	if (t10 != 958670828073564LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x65 = 351764780482028LL;
	volatile uint32_t x68 = UINT32_MAX;
	int64_t t11 = -43433877598LL;

	t11 = ((x65*x66)^(x67/x68));

	if (t11 != -351764780482028LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = -1309226207LL;
	uint64_t x70 = 61789123LLU;
	static volatile uint16_t x71 = 606U;
	uint32_t x72 = 27011366U;

	t12 = ((x69*x70)^(x71/x72));

	if (t12 != 18365848134570405155LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x74 = -11345605;
	int32_t x75 = -1;
	int64_t x76 = INT64_MIN;

	t13 = ((x73*x74)^(x75/x76));

	if (t13 != 18446744073539367541LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x78 = 1075U;
	uint16_t x79 = UINT16_MAX;
	int8_t x80 = INT8_MIN;
	uint32_t t14 = 698U;

	t14 = ((x77*x78)^(x79/x80));

	if (t14 != 2147483137U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = -3LL;
	volatile int64_t x86 = -826935194472433311LL;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	volatile int64_t t15 = -32540979323LL;

	t15 = ((x85*x86)^(x87/x88));

	if (t15 != -2480805583417299492LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x90 = 56;
	int8_t x91 = INT8_MIN;
	volatile uint16_t x92 = 1863U;
	volatile uint32_t t16 = 18330U;

	t16 = ((x89*x90)^(x91/x92));

	if (t16 != 4294967240U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = INT32_MAX;
	volatile uint32_t x94 = UINT32_MAX;
	uint32_t x95 = 34711847U;
	int64_t x96 = INT64_MIN;
	static volatile int64_t t17 = -9420LL;

	t17 = ((x93*x94)^(x95/x96));

	if (t17 != 2147483649LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x102 = INT16_MAX;
	uint8_t x104 = 71U;
	volatile int32_t t18 = 1416894;

	t18 = ((x101*x102)^(x103/x104));

	if (t18 != 36338603) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x105 = 15760846U;
	static int32_t x107 = INT32_MIN;
	uint64_t x108 = 1231660053929436LLU;
	volatile uint64_t t19 = 83067229000LLU;

	t19 = ((x105*x106)^(x107/x108));

	if (t19 != 2210055257LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x110 = UINT32_MAX;
	volatile uint16_t x111 = 27U;

	t20 = ((x109*x110)^(x111/x112));

	if (t20 != -155LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = 14368;
	int16_t x114 = INT16_MAX;
	static int8_t x115 = -1;
	int32_t x116 = 1291197;
	static int32_t t21 = -779747536;

	t21 = ((x113*x114)^(x115/x116));

	if (t21 != 470796256) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	volatile int64_t x124 = INT64_MIN;
	volatile int64_t t22 = -12731LL;

	t22 = ((x121*x122)^(x123/x124));

	if (t22 != -2147450880LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x125 = 434988796922LL;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = 64948833586LLU;
	volatile uint64_t t23 = 67460216165171LLU;

	t23 = ((x125*x126)^(x127/x128));

	if (t23 != 18446688395143545600LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x134 = INT32_MAX;
	int64_t x135 = INT64_MIN;
	int64_t x136 = -128853897409167LL;

	t24 = ((x133*x134)^(x135/x136));

	if (t24 != 2147412067LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x137 = 2644U;
	static int16_t x138 = INT16_MIN;
	int16_t x139 = 23;
	volatile uint32_t t25 = 5811U;

	t25 = ((x137*x138)^(x139/x140));

	if (t25 != 4208328704U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x141 = INT16_MIN;
	static volatile uint32_t x142 = UINT32_MAX;
	volatile int64_t x143 = -3732300296175387LL;
	static volatile uint32_t x144 = 843U;
	int64_t t26 = 4599944840022256261LL;

	t26 = ((x141*x142)^(x143/x144));

	if (t26 != -4427402453798LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x146 = -1;
	static int32_t x147 = INT32_MIN;

	t27 = ((x145*x146)^(x147/x148));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x149 = UINT32_MAX;
	volatile uint8_t x150 = 89U;
	volatile uint16_t x151 = 3U;
	uint64_t x152 = 701663841LLU;
	volatile uint64_t t28 = 54LLU;

	t28 = ((x149*x150)^(x151/x152));

	if (t28 != 4294967207LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x154 = -31;
	static uint32_t x155 = UINT32_MAX;
	volatile int64_t x156 = INT64_MAX;
	int64_t t29 = 2LL;

	t29 = ((x153*x154)^(x155/x156));

	if (t29 != 31LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t30 = -560939;

	t30 = ((x157*x158)^(x159/x160));

	if (t30 != 5080674) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x166 = 32U;
	int32_t x167 = INT32_MIN;
	int16_t x168 = 357;
	int32_t t31 = -43432295;

	t31 = ((x165*x166)^(x167/x168));

	if (t31 != -6015680) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x169 = 1;
	int8_t x170 = -50;
	uint32_t x171 = 39U;
	int64_t x172 = 21006LL;
	volatile int64_t t32 = 55516234397LL;

	t32 = ((x169*x170)^(x171/x172));

	if (t32 != -50LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x173 = 34835U;
	int64_t x174 = -33538171LL;
	int8_t x175 = -1;
	static uint16_t x176 = UINT16_MAX;
	static volatile int64_t t33 = -674095272LL;

	t33 = ((x173*x174)^(x175/x176));

	if (t33 != -1168302186785LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x178 = -92532712080483LL;
	int64_t x179 = INT64_MIN;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t34 = 7503718100806198LLU;

	t34 = ((x177*x178)^(x179/x180));

	if (t34 != 18434992419275330275LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x191 = 1;
	int32_t x192 = INT32_MIN;
	volatile int32_t t35 = 44;

	t35 = ((x189*x190)^(x191/x192));

	if (t35 != 47) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = -1;
	static int8_t x195 = INT8_MIN;
	volatile int64_t x196 = 3901904442496255LL;
	static volatile int64_t t36 = -4364566467452503367LL;

	t36 = ((x193*x194)^(x195/x196));

	if (t36 != -255LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x197 = INT64_MAX;
	static int32_t x198 = -1;
	volatile uint32_t x199 = 6U;
	int64_t x200 = -1LL;

	t37 = ((x197*x198)^(x199/x200));

	if (t37 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x201 = 1U;
	uint64_t x203 = 1392463213884566632LLU;
	int32_t x204 = -1;

	t38 = ((x201*x202)^(x203/x204));

	if (t38 != 8461920805LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x206 = 775451943109541LL;
	volatile uint8_t x207 = 117U;
	int64_t t39 = -32549119724787LL;

	t39 = ((x205*x206)^(x207/x208));

	if (t39 != -775451943109586LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x218 = INT16_MAX;
	int16_t x219 = INT16_MIN;
	static uint16_t x220 = UINT16_MAX;

	t40 = ((x217*x218)^(x219/x220));

	if (t40 != 4294934529U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x225 = -1;
	static int8_t x226 = INT8_MAX;
	int8_t x227 = INT8_MAX;

	t41 = ((x225*x226)^(x227/x228));

	if (t41 != -108) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x230 = UINT16_MAX;
	uint64_t x232 = 30286360272547238LLU;
	uint64_t t42 = 1521908174433945894LLU;

	t42 = ((x229*x230)^(x231/x232));

	if (t42 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x234 = INT16_MIN;
	uint16_t x235 = 10907U;
	static uint64_t x236 = 3481313730480LLU;

	t43 = ((x233*x234)^(x235/x236));

	if (t43 != 32768LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x237 = INT8_MIN;
	static volatile int32_t x238 = -1;
	static int32_t x239 = INT32_MIN;
	volatile int32_t t44 = 3;

	t44 = ((x237*x238)^(x239/x240));

	if (t44 != -16909448) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x245 = 148U;
	uint32_t x246 = 2U;
	uint32_t x248 = 63U;
	volatile uint32_t t45 = 15326520U;

	t45 = ((x245*x246)^(x247/x248));

	if (t45 != 68173866U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x249 = 66661U;
	volatile int8_t x250 = INT8_MAX;
	uint16_t x251 = 31U;
	uint16_t x252 = UINT16_MAX;
	volatile uint32_t t46 = 75311030U;

	t46 = ((x249*x250)^(x251/x252));

	if (t46 != 8465947U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x254 = -1LL;
	volatile int16_t x255 = 9688;
	static int64_t x256 = -4380136859391153296LL;
	static int64_t t47 = 847968LL;

	t47 = ((x253*x254)^(x255/x256));

	if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x257 = -12;
	int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	volatile int64_t t48 = -20067LL;

	t48 = ((x257*x258)^(x259/x260));

	if (t48 != 12LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x265 = 7U;
	static int32_t x266 = 87934;
	int32_t x267 = 23180411;

	t49 = ((x265*x266)^(x267/x268));

	if (t49 != -23646217) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	static uint32_t x276 = 6U;
	uint32_t t50 = 29513U;

	t50 = ((x273*x274)^(x275/x276));

	if (t50 != 2147527338U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x285 = INT8_MIN;
	int16_t x287 = 16;
	volatile uint64_t t51 = 3436591723LLU;

	t51 = ((x285*x286)^(x287/x288));

	if (t51 != 4278381952LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x289 = 0U;
	uint8_t x291 = 4U;
	int8_t x292 = 3;
	volatile int32_t t52 = -218910;

	t52 = ((x289*x290)^(x291/x292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int8_t x296 = -1;
	volatile uint32_t t53 = 201U;

	t53 = ((x293*x294)^(x295/x296));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x309 = 3450;
	int8_t x310 = INT8_MIN;
	static volatile uint8_t x311 = UINT8_MAX;
	volatile int32_t x312 = INT32_MAX;
	int32_t t54 = -222;

	t54 = ((x309*x310)^(x311/x312));

	if (t54 != -441600) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MAX;
	int32_t x319 = 34230826;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t55 = 270084163;

	t55 = ((x317*x318)^(x319/x320));

	if (t55 != -273315) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x321 = 22U;
	int8_t x323 = INT8_MAX;
	int64_t x324 = -14799LL;

	t56 = ((x321*x322)^(x323/x324));

	if (t56 != 1441770LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x333 = 307530132427LL;
	int16_t x334 = -275;
	int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MIN;

	t57 = ((x333*x334)^(x335/x336));

	if (t57 != -84570786482961LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x337 = -23;
	static uint8_t x339 = 7U;
	static int16_t x340 = -1;
	static int64_t t58 = 623967LL;

	t58 = ((x337*x338)^(x339/x340));

	if (t58 != 35922302LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x341 = 189884752U;
	volatile uint8_t x342 = 13U;
	int32_t x344 = 11540618;
	uint32_t t59 = 61809428U;

	t59 = ((x341*x342)^(x343/x344));

	if (t59 != 2468501776U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x345 = INT32_MIN;
	int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MIN;
	volatile uint64_t t60 = 273641238029311416LLU;

	t60 = ((x345*x346)^(x347/x348));

	if (t60 != 18446743474561613824LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x349 = 61695053U;
	volatile uint8_t x350 = 92U;
	int64_t x351 = INT64_MIN;
	volatile int64_t x352 = INT64_MIN;

	t61 = ((x349*x350)^(x351/x352));

	if (t61 != 1380977581LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x357 = 1LL;
	volatile int8_t x358 = -2;
	int8_t x359 = -10;
	int64_t x360 = -1LL;
	volatile int64_t t62 = 84215106989905699LL;

	t62 = ((x357*x358)^(x359/x360));

	if (t62 != -12LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x361 = -1;
	int32_t x362 = -1;
	volatile int64_t x363 = INT64_MAX;

	t63 = ((x361*x362)^(x363/x364));

	if (t63 != -15245243036123595LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x365 = 0U;
	uint8_t x366 = 6U;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 356U;
	volatile int32_t t64 = -211025;

	t64 = ((x365*x366)^(x367/x368));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x369 = 317U;
	static int16_t x370 = INT16_MIN;
	uint32_t t65 = 1520191U;

	t65 = ((x369*x370)^(x371/x372));

	if (t65 != 4284579841U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x373 = 0U;
	int64_t x374 = -1LL;
	uint64_t x375 = 245478087185588023LLU;
	int32_t x376 = INT32_MIN;
	volatile uint64_t t66 = 708714690LLU;

	t66 = ((x373*x374)^(x375/x376));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x393 = 2528796LLU;
	uint32_t x394 = 2133420613U;
	static uint32_t x395 = 3314U;
	int8_t x396 = INT8_MIN;
	volatile uint64_t t67 = 12151082LLU;

	t67 = ((x393*x394)^(x395/x396));

	if (t67 != 5394985512471948LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x397 = 30U;
	int64_t x398 = -6895075090911LL;
	int32_t x399 = -104;
	volatile int64_t x400 = 1LL;
	static volatile int64_t t68 = 121528732660LL;

	t68 = ((x397*x398)^(x399/x400));

	if (t68 != 206852252727366LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x401 = INT16_MIN;
	uint32_t x402 = UINT32_MAX;
	static int64_t x403 = 415LL;

	t69 = ((x401*x402)^(x403/x404));

	if (t69 != 32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x405 = -3;
	int32_t x406 = -867;
	volatile uint16_t x407 = UINT16_MAX;
	int8_t x408 = -1;
	int32_t t70 = -1;

	t70 = ((x405*x406)^(x407/x408));

	if (t70 != -62936) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x409 = INT8_MIN;
	static uint32_t x411 = UINT32_MAX;
	uint32_t t71 = 1U;

	t71 = ((x409*x410)^(x411/x412));

	if (t71 != 4194314U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x413 = 61U;
	uint64_t x414 = 19892LLU;
	static int8_t x415 = -1;
	uint32_t x416 = 292U;
	static volatile uint64_t t72 = 6055226LLU;

	t72 = ((x413*x414)^(x415/x416));

	if (t72 != 15922140LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x422 = -1;
	static volatile uint8_t x423 = UINT8_MAX;
	uint8_t x424 = 64U;
	static volatile int32_t t73 = 63556;

	t73 = ((x421*x422)^(x423/x424));

	if (t73 != -51) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x429 = 0U;
	volatile int8_t x430 = INT8_MIN;
	int8_t x431 = -1;
	volatile int32_t t74 = 1900720;

	t74 = ((x429*x430)^(x431/x432));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x433 = 196U;
	static int16_t x434 = 12675;
	static int16_t x435 = INT16_MIN;
	static int16_t x436 = -1;
	volatile uint32_t t75 = 5604U;

	t75 = ((x433*x434)^(x435/x436));

	if (t75 != 2451532U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x441 = 496U;
	volatile int16_t x442 = 1;
	static uint8_t x443 = 13U;
	volatile int32_t t76 = 644;

	t76 = ((x441*x442)^(x443/x444));

	if (t76 != 496) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x445 = 0;
	int32_t x446 = INT32_MIN;
	int32_t x447 = 0;
	int16_t x448 = INT16_MAX;
	static volatile int32_t t77 = 920;

	t77 = ((x445*x446)^(x447/x448));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x453 = UINT32_MAX;
	volatile uint32_t x455 = 4U;
	static uint8_t x456 = 63U;

	t78 = ((x453*x454)^(x455/x456));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x457 = UINT8_MAX;
	static uint32_t x458 = 2U;
	int64_t x459 = -9543737486894LL;
	static int16_t x460 = -42;
	int64_t t79 = 1684534413630LL;

	t79 = ((x457*x458)^(x459/x460));

	if (t79 != 227231845312LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x461 = 5952531798LLU;
	static uint64_t x462 = 63035155LLU;
	uint64_t t80 = 1300539639LLU;

	t80 = ((x461*x462)^(x463/x464));

	if (t80 != 18071525309180192913LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x465 = 1642110146U;
	int8_t x468 = -3;
	volatile uint32_t t81 = 257249722U;

	t81 = ((x465*x466)^(x467/x468));

	if (t81 != 2126259518U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x469 = INT16_MIN;
	static int32_t x470 = -1;
	int8_t x471 = 4;
	int16_t x472 = INT16_MAX;
	volatile int32_t t82 = -5398970;

	t82 = ((x469*x470)^(x471/x472));

	if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x473 = UINT64_MAX;
	static int32_t x474 = -150456213;
	static uint16_t x476 = UINT16_MAX;
	volatile uint64_t t83 = 26410972LLU;

	t83 = ((x473*x474)^(x475/x476));

	if (t83 != 150456213LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x478 = INT8_MIN;
	int32_t x479 = INT32_MIN;
	uint16_t x480 = 215U;
	volatile int32_t t84 = -3;

	t84 = ((x477*x478)^(x479/x480));

	if (t84 != 10357176) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x497 = 1U;
	int64_t x498 = -359380229LL;
	static uint32_t x499 = UINT32_MAX;
	uint32_t x500 = 878733U;

	t85 = ((x497*x498)^(x499/x500));

	if (t85 != -359376404LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x505 = UINT8_MAX;
	int16_t x506 = -1;
	int64_t x507 = INT64_MAX;
	static volatile int32_t x508 = -1;
	int64_t t86 = 658254152LL;

	t86 = ((x505*x506)^(x507/x508));

	if (t86 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x509 = 7U;
	int16_t x510 = -60;
	static uint32_t x511 = UINT32_MAX;
	int16_t x512 = -1;

	t87 = ((x509*x510)^(x511/x512));

	if (t87 != 4294966877U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x517 = -1;
	volatile uint32_t x519 = UINT32_MAX;
	uint64_t x520 = UINT64_MAX;
	volatile uint64_t t88 = 16889229LLU;

	t88 = ((x517*x518)^(x519/x520));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x525 = INT8_MIN;
	int16_t x526 = INT16_MIN;
	int32_t x528 = INT32_MAX;
	int64_t t89 = -24808004867034LL;

	t89 = ((x525*x526)^(x527/x528));

	if (t89 != 4194304LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x529 = 1U;
	int32_t x530 = INT32_MIN;
	int32_t x531 = -1;
	static int32_t x532 = 41;
	static int32_t t90 = INT32_MIN;

	t90 = ((x529*x530)^(x531/x532));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x533 = UINT8_MAX;
	static uint32_t x534 = 51505914U;
	int8_t x536 = -3;
	uint32_t t91 = 2U;

	t91 = ((x533*x534)^(x535/x536));

	if (t91 != 249106182U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x541 = -1;
	int8_t x542 = INT8_MAX;
	uint64_t x543 = UINT64_MAX;
	uint64_t t92 = 22666104LLU;

	t92 = ((x541*x542)^(x543/x544));

	if (t92 != 16769767339735956048LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x545 = -1;
	int8_t x547 = -1;
	int16_t x548 = INT16_MIN;
	static volatile int32_t t93 = 0;

	t93 = ((x545*x546)^(x547/x548));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x549 = 652U;
	volatile int16_t x550 = INT16_MIN;
	int64_t x551 = INT64_MAX;
	int32_t x552 = -426164660;
	static int64_t t94 = 2731743604796LL;

	t94 = ((x549*x550)^(x551/x552));

	if (t94 != -25580538684LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x553 = UINT8_MAX;
	int32_t x554 = -1;
	volatile int16_t x555 = INT16_MIN;
	volatile int16_t x556 = 1;
	volatile int32_t t95 = -427868;

	t95 = ((x553*x554)^(x555/x556));

	if (t95 != 32513) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x557 = 1U;
	static volatile uint64_t x558 = 2827473449687261LLU;
	int8_t x559 = INT8_MIN;
	int32_t x560 = INT32_MAX;
	volatile uint64_t t96 = 318281883222420LLU;

	t96 = ((x557*x558)^(x559/x560));

	if (t96 != 2827473449687261LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x561 = UINT32_MAX;
	int32_t x562 = 254585;
	uint8_t x563 = 3U;
	volatile uint32_t t97 = 4U;

	t97 = ((x561*x562)^(x563/x564));

	if (t97 != 254586U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x565 = 3412207212012LLU;
	uint32_t x566 = 60990518U;
	int64_t x567 = -63773959209083979LL;
	static int8_t x568 = 11;
	uint64_t t98 = 2970854886052568LLU;

	t98 = ((x565*x566)^(x567/x568));

	if (t98 != 13242900654812437554LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x573 = 7U;
	static volatile int16_t x574 = -1;
	uint32_t x575 = UINT32_MAX;
	volatile uint8_t x576 = 7U;
	uint32_t t99 = 3U;

	t99 = ((x573*x574)^(x575/x576));

	if (t99 != 3681400541U) { NG(); } else { ; }
	
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

