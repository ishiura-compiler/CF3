#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x5 = INT32_MIN;
volatile int16_t x6 = INT16_MIN;
volatile uint8_t x13 = UINT8_MAX;
volatile uint8_t x14 = 31U;
static uint64_t t2 = 256401803303LLU;
int64_t x19 = -86966094768164241LL;
uint32_t x27 = 1414637084U;
int64_t x28 = -785542179LL;
volatile int32_t t6 = -111396373;
int16_t x37 = INT16_MIN;
uint64_t t8 = 17796LLU;
uint16_t x42 = 686U;
volatile int32_t t9 = -354305144;
int16_t x48 = -2362;
static int16_t x52 = -25;
volatile int64_t x53 = INT64_MIN;
int64_t t12 = 205683203764451178LL;
volatile uint64_t x59 = 13721968441377732LLU;
int16_t x64 = INT16_MIN;
static volatile int32_t x72 = -1;
volatile uint16_t x78 = 5922U;
uint32_t x79 = 11U;
volatile uint32_t x83 = 125U;
int64_t x86 = -431353187LL;
volatile int64_t t20 = -1018828000240156762LL;
int32_t x93 = -1;
volatile int32_t x96 = -1393;
volatile uint32_t x104 = 55U;
uint32_t t23 = 809985080U;
int64_t x105 = INT64_MAX;
static int32_t x110 = -1;
int64_t x118 = -1LL;
volatile uint8_t x124 = 3U;
int8_t x132 = INT8_MAX;
static int64_t t30 = -84LL;
static uint64_t x139 = UINT64_MAX;
uint64_t t31 = 9LLU;
int64_t x144 = 1618005LL;
volatile int64_t x145 = INT64_MIN;
int8_t x147 = -1;
int16_t x148 = 17;
uint32_t x149 = 16524171U;
static int64_t x154 = 17172914555400LL;
volatile uint32_t x155 = 6319595U;
uint64_t t36 = 2383573616LLU;
int32_t x161 = -123;
uint16_t x162 = 257U;
volatile int32_t x164 = 37645935;
int32_t x167 = -1;
volatile uint8_t x169 = 67U;
static int32_t x170 = -5592674;
uint64_t x175 = UINT64_MAX;
static uint8_t x178 = UINT8_MAX;
int8_t x179 = 30;
uint16_t x187 = 780U;
int64_t t44 = 26385355092LL;
uint32_t x199 = 14116U;
uint64_t x200 = UINT64_MAX;
volatile int64_t x203 = -1LL;
uint8_t x205 = 3U;
int8_t x211 = INT8_MAX;
static uint16_t x216 = UINT16_MAX;
int16_t x219 = -119;
int16_t x221 = -1;
uint8_t x222 = 0U;
int32_t x226 = INT32_MIN;
int8_t x234 = INT8_MAX;
int16_t x237 = 535;
int32_t x247 = INT32_MAX;
uint64_t x254 = 1LLU;
uint32_t x256 = UINT32_MAX;
int8_t x262 = 4;
volatile int64_t t62 = 2904418108664842217LL;
int32_t x273 = INT32_MAX;
int32_t x277 = -150880;
int8_t x282 = 0;
int64_t x285 = INT64_MIN;
uint64_t x305 = 7952201422LLU;
volatile uint64_t x307 = UINT64_MAX;
static int64_t x308 = -1LL;
volatile int64_t x310 = INT64_MIN;
volatile uint16_t x311 = UINT16_MAX;
int16_t x340 = INT16_MIN;
int32_t x341 = 519424828;
int64_t x345 = INT64_MIN;
int64_t x352 = -1LL;
static volatile int64_t t78 = 883714LL;
int32_t x360 = -236931;
uint64_t t80 = 166922047116LLU;
uint8_t x368 = UINT8_MAX;
volatile uint64_t t82 = 2282517207611LLU;
int32_t x372 = -4;
uint16_t x373 = UINT16_MAX;
volatile uint8_t x378 = 25U;
int8_t x382 = INT8_MAX;
int64_t x396 = 264LL;
volatile uint64_t t91 = 35863627274LLU;
uint32_t x415 = 26U;
static int32_t x417 = INT32_MIN;
volatile int64_t t95 = 770464958351088017LL;
int16_t x427 = INT16_MAX;
static volatile uint64_t x431 = UINT64_MAX;
int8_t x432 = INT8_MAX;
static int64_t x436 = INT64_MAX;


void f0(void) {
	int32_t x7 = INT32_MIN;
	int32_t x8 = -6694416;
	volatile int32_t t0 = 39226107;

	t0 = (x5/((x6/x7)+x8));

	if (t0 != 320) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 188703U;
	int64_t x10 = -1549LL;
	volatile uint64_t x11 = 6061LLU;
	int8_t x12 = 12;
	volatile uint64_t t1 = 63310LLU;

	t1 = (x9/((x10/x11)+x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x15 = -7;
	uint64_t x16 = 619288113072050LLU;

	t2 = (x13/((x14/x15)+x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = 132LL;
	volatile int16_t x18 = -7;
	int8_t x20 = INT8_MIN;
	volatile int64_t t3 = 781243588192829LL;

	t3 = (x17/((x18/x19)+x20));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 0;
	uint32_t x22 = 230U;
	volatile uint8_t x23 = UINT8_MAX;
	int32_t x24 = INT32_MAX;
	volatile uint32_t t4 = 464U;

	t4 = (x21/((x22/x23)+x24));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 104U;
	volatile int16_t x26 = -55;
	static volatile int64_t t5 = -67515519569LL;

	t5 = (x25/((x26/x27)+x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = UINT16_MAX;
	int32_t x30 = INT32_MAX;
	static uint8_t x31 = UINT8_MAX;
	int16_t x32 = INT16_MAX;

	t6 = (x29/((x30/x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 15181U;
	uint32_t x34 = 1765246427U;
	int64_t x35 = -30827991484712LL;
	uint64_t x36 = 87413089LLU;
	uint64_t t7 = 143978065LLU;

	t7 = (x33/((x34/x35)+x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = 895;
	int16_t x39 = -56;
	uint64_t x40 = UINT64_MAX;

	t8 = (x37/((x38/x39)+x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 440;
	int8_t x43 = -1;
	int8_t x44 = INT8_MAX;

	t9 = (x41/((x42/x43)+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 1;
	volatile uint8_t x46 = UINT8_MAX;
	static int64_t x47 = 377361900093709981LL;
	static int64_t t10 = 8718539445060424LL;

	t10 = (x45/((x46/x47)+x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 56U;
	int32_t x50 = -614251;
	uint32_t x51 = UINT32_MAX;
	volatile uint32_t t11 = 3U;

	t11 = (x49/((x50/x51)+x52));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x54 = -1;
	int64_t x55 = INT64_MIN;
	uint16_t x56 = 15449U;

	t12 = (x53/((x54/x55)+x56));

	if (t12 != -597020650971245LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x57 = 76;
	int32_t x58 = -1;
	static int16_t x60 = INT16_MAX;
	volatile uint64_t t13 = 28LLU;

	t13 = (x57/((x58/x59)+x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = INT8_MIN;
	volatile int16_t x62 = -1;
	int32_t x63 = -18953250;
	static volatile int32_t t14 = 7075;

	t14 = (x61/((x62/x63)+x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 21U;
	static int8_t x66 = INT8_MIN;
	int32_t x67 = -1;
	uint16_t x68 = 17U;
	int32_t t15 = 219387949;

	t15 = (x65/((x66/x67)+x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 2069U;
	int32_t x70 = -1;
	volatile int32_t x71 = INT32_MIN;
	int32_t t16 = 10458;

	t16 = (x69/((x70/x71)+x72));

	if (t16 != -2069) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	int64_t x74 = -180081347659LL;
	int32_t x75 = -261695191;
	volatile uint8_t x76 = 4U;
	int64_t t17 = 12514816088970036LL;

	t17 = (x73/((x74/x75)+x76));

	if (t17 != 3103300LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x77 = 136U;
	static int16_t x80 = -959;
	volatile uint32_t t18 = 4074U;

	t18 = (x77/((x78/x79)+x80));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = 0U;
	uint8_t x82 = 3U;
	volatile int64_t x84 = -1LL;
	int64_t t19 = 8661495630LL;

	t19 = (x81/((x82/x83)+x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = -1;
	volatile int8_t x87 = INT8_MIN;
	uint32_t x88 = UINT32_MAX;

	t20 = (x85/((x86/x87)+x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	int32_t t21 = -600206;

	t21 = (x93/((x94/x95)+x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -1LL;
	volatile uint8_t x98 = 6U;
	int32_t x99 = INT32_MIN;
	uint16_t x100 = 3U;
	volatile int64_t t22 = -3830587273983117324LL;

	t22 = (x97/((x98/x99)+x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	volatile int8_t x102 = -5;
	int8_t x103 = INT8_MIN;

	t23 = (x101/((x102/x103)+x104));

	if (t23 != 78089718U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x106 = 330432492800202363LLU;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = 86399661764LL;
	uint64_t t24 = 441993814LLU;

	t24 = (x105/((x106/x107)+x108));

	if (t24 != 106657435LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MAX;
	volatile int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	volatile int64_t t25 = -2824LL;

	t25 = (x109/((x110/x111)+x112));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x114 = -1;
	static uint8_t x115 = UINT8_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t26 = -25959077;

	t26 = (x113/((x114/x115)+x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int8_t x119 = INT8_MAX;
	int16_t x120 = 304;
	volatile int64_t t27 = -80351503447035677LL;

	t27 = (x117/((x118/x119)+x120));

	if (t27 != -7064090LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = 0;
	uint64_t x122 = 804761358407059LLU;
	int16_t x123 = -1;
	uint64_t t28 = 836872067853837LLU;

	t28 = (x121/((x122/x123)+x124));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x129 = INT64_MIN;
	volatile int32_t x130 = INT32_MIN;
	volatile int8_t x131 = INT8_MIN;
	int64_t t29 = -50272533262386875LL;

	t29 = (x129/((x130/x131)+x132));

	if (t29 != -549751652383LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MIN;
	volatile int8_t x134 = -1;
	int32_t x135 = -54031;
	static int64_t x136 = -1LL;

	t30 = (x133/((x134/x135)+x136));

	if (t30 != 32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = INT16_MIN;
	static volatile int32_t x138 = -6602731;
	int32_t x140 = INT32_MAX;

	t31 = (x137/((x138/x139)+x140));

	if (t31 != 8589934595LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = -1;
	int64_t x142 = INT64_MAX;
	static uint8_t x143 = 56U;
	volatile int64_t t32 = 1000994630LL;

	t32 = (x141/((x142/x143)+x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x146 = UINT16_MAX;
	static volatile int64_t t33 = -151004469329LL;

	t33 = (x145/((x146/x147)+x148));

	if (t33 != 140776153680740LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x150 = UINT64_MAX;
	int64_t x151 = -544848LL;
	int16_t x152 = INT16_MIN;
	uint64_t t34 = 6790159142975350LLU;

	t34 = (x149/((x150/x151)+x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x153 = 3080858875LL;
	uint32_t x156 = UINT32_MAX;
	volatile int64_t t35 = 20854981LL;

	t35 = (x153/((x154/x155)+x156));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x157 = -12793;
	volatile int16_t x158 = 2;
	uint64_t x159 = 52932818LLU;
	uint64_t x160 = 3288LLU;

	t36 = (x157/((x158/x159)+x160));

	if (t36 != 5610323623390978LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x163 = UINT32_MAX;
	volatile uint32_t t37 = 61298U;

	t37 = (x161/((x162/x163)+x164));

	if (t37 != 114U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x165 = INT64_MAX;
	int32_t x166 = -188064514;
	int8_t x168 = INT8_MAX;
	int64_t t38 = 12LL;

	t38 = (x165/((x166/x167)+x168));

	if (t38 != 49043626637LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x171 = INT64_MIN;
	volatile int32_t x172 = INT32_MIN;
	int64_t t39 = 24007894LL;

	t39 = (x169/((x170/x171)+x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = -36;
	volatile uint16_t x174 = 952U;
	volatile uint64_t x176 = 466039931LLU;
	uint64_t t40 = 41161LLU;

	t40 = (x173/((x174/x175)+x176));

	if (t40 != 39581895985LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x177 = -1;
	volatile int16_t x180 = -1;
	volatile int32_t t41 = -2;

	t41 = (x177/((x178/x179)+x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MIN;
	int32_t x186 = 1724;
	uint8_t x188 = UINT8_MAX;
	static volatile int32_t t42 = 64792;

	t42 = (x185/((x186/x187)+x188));

	if (t42 != -8355967) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = -554;
	int16_t x191 = -15;
	int16_t x192 = -1;
	volatile int32_t t43 = 69675871;

	t43 = (x189/((x190/x191)+x192));

	if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = INT32_MIN;
	static int8_t x194 = INT8_MIN;
	int64_t x195 = 1229LL;
	static int32_t x196 = INT32_MIN;

	t44 = (x193/((x194/x195)+x196));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x197 = -1;
	int8_t x198 = 3;
	volatile uint64_t t45 = 3199780681648LLU;

	t45 = (x197/((x198/x199)+x200));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = INT64_MAX;
	int64_t x202 = -1LL;
	uint32_t x204 = 7443569U;
	int64_t t46 = 363242346015089422LL;

	t46 = (x201/((x202/x203)+x204));

	if (t46 != 1239105971577LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x206 = -1;
	uint8_t x207 = UINT8_MAX;
	volatile uint8_t x208 = 25U;
	static volatile int32_t t47 = -1;

	t47 = (x205/((x206/x207)+x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	volatile uint32_t x210 = UINT32_MAX;
	volatile int32_t x212 = INT32_MIN;
	uint32_t t48 = 261942U;

	t48 = (x209/((x210/x211)+x212));

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x213 = INT64_MAX;
	volatile uint16_t x214 = 2U;
	int8_t x215 = INT8_MIN;
	volatile int64_t t49 = -3LL;

	t49 = (x213/((x214/x215)+x216));

	if (t49 != 140739635871744LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = -1;
	int32_t x220 = INT32_MIN;
	static volatile int32_t t50 = 250035851;

	t50 = (x217/((x218/x219)+x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x223 = 7172;
	uint32_t x224 = 690U;
	volatile uint32_t t51 = 424986846U;

	t51 = (x221/((x222/x223)+x224));

	if (t51 != 6224590U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MAX;
	uint32_t x227 = UINT32_MAX;
	volatile int8_t x228 = -1;
	volatile uint32_t t52 = 38200809U;

	t52 = (x225/((x226/x227)+x228));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = 592434774LLU;
	int64_t x231 = -3LL;
	static uint64_t x232 = UINT64_MAX;
	volatile uint64_t t53 = 2780087LLU;

	t53 = (x229/((x230/x231)+x232));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -1;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = INT64_MIN;
	static int64_t t54 = -3256729868170LL;

	t54 = (x233/((x234/x235)+x236));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x238 = 1U;
	int32_t x239 = INT32_MAX;
	volatile uint64_t x240 = 265LLU;
	uint64_t t55 = 747039136558171583LLU;

	t55 = (x237/((x238/x239)+x240));

	if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MAX;
	volatile uint64_t x246 = 101LLU;
	uint64_t x248 = 40LLU;
	volatile uint64_t t56 = 54148267025LLU;

	t56 = (x245/((x246/x247)+x248));

	if (t56 != 53687091LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = -1;
	volatile uint32_t x250 = UINT32_MAX;
	int16_t x251 = INT16_MIN;
	int16_t x252 = -3763;
	uint32_t t57 = 0U;

	t57 = (x249/((x250/x251)+x252));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MIN;
	uint16_t x255 = 318U;
	static uint64_t t58 = 21041894LLU;

	t58 = (x253/((x254/x255)+x256));

	if (t58 != 4294967296LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x257 = UINT16_MAX;
	uint64_t x258 = UINT64_MAX;
	volatile int32_t x259 = INT32_MIN;
	uint64_t x260 = 21854025500895779LLU;
	volatile uint64_t t59 = 7043114457LLU;

	t59 = (x257/((x258/x259)+x260));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x261 = INT16_MAX;
	volatile int8_t x263 = -1;
	uint64_t x264 = 16163888465709259LLU;
	uint64_t t60 = 278934515538LLU;

	t60 = (x261/((x262/x263)+x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x265 = -1;
	uint16_t x266 = UINT16_MAX;
	static int16_t x267 = -1;
	int64_t x268 = 18737320826664788LL;
	static volatile int64_t t61 = 781LL;

	t61 = (x265/((x266/x267)+x268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x269 = 216870062696LL;
	static volatile uint32_t x270 = 282967604U;
	static volatile int8_t x271 = 2;
	volatile int8_t x272 = INT8_MAX;

	t62 = (x269/((x270/x271)+x272));

	if (t62 != 1532LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x274 = UINT32_MAX;
	volatile uint32_t x275 = UINT32_MAX;
	uint16_t x276 = UINT16_MAX;
	volatile uint32_t t63 = 507366U;

	t63 = (x273/((x274/x275)+x276));

	if (t63 != 32767U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x278 = -13171;
	int16_t x279 = 1831;
	uint32_t x280 = 5U;
	volatile uint32_t t64 = 0U;

	t64 = (x277/((x278/x279)+x280));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = -1;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = 11;
	uint32_t t65 = 261476U;

	t65 = (x281/((x282/x283)+x284));

	if (t65 != 390451572U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x286 = 925U;
	uint32_t x287 = UINT32_MAX;
	volatile int64_t x288 = INT64_MAX;
	int64_t t66 = 0LL;

	t66 = (x285/((x286/x287)+x288));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x297 = UINT8_MAX;
	volatile int16_t x298 = -6;
	static int32_t x299 = -1;
	volatile int64_t x300 = 3808299278LL;
	volatile int64_t t67 = -1LL;

	t67 = (x297/((x298/x299)+x300));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = -1;
	int64_t x302 = -1LL;
	uint8_t x303 = 9U;
	uint8_t x304 = 20U;
	int64_t t68 = 16628907379908LL;

	t68 = (x301/((x302/x303)+x304));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x306 = INT32_MIN;
	uint64_t t69 = 2141199923789594770LLU;

	t69 = (x305/((x306/x307)+x308));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = 2U;
	uint32_t x312 = 533U;
	int64_t t70 = 58LL;

	t70 = (x309/((x310/x311)+x312));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x317 = INT32_MAX;
	uint8_t x318 = 15U;
	int32_t x319 = INT32_MIN;
	volatile int64_t x320 = INT64_MIN;
	volatile int64_t t71 = 176824181LL;

	t71 = (x317/((x318/x319)+x320));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x321 = INT32_MAX;
	static volatile uint32_t x322 = 993U;
	volatile int64_t x323 = 7LL;
	static int64_t x324 = -1LL;
	volatile int64_t t72 = 18144148LL;

	t72 = (x321/((x322/x323)+x324));

	if (t72 != 15339168LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MAX;
	static volatile int8_t x330 = INT8_MIN;
	int64_t x331 = -1LL;
	uint8_t x332 = UINT8_MAX;
	volatile int64_t t73 = 28391004427534LL;

	t73 = (x329/((x330/x331)+x332));

	if (t73 != 24081911323380615LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x333 = -12;
	uint8_t x334 = 1U;
	uint32_t x335 = 6339991U;
	static int16_t x336 = INT16_MAX;
	volatile uint32_t t74 = 480497436U;

	t74 = (x333/((x334/x335)+x336));

	if (t74 != 131075U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x337 = INT8_MAX;
	uint16_t x338 = 0U;
	int16_t x339 = INT16_MAX;
	volatile int32_t t75 = 36761933;

	t75 = (x337/((x338/x339)+x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x342 = INT16_MIN;
	static int8_t x343 = -57;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t76 = 33;

	t76 = (x341/((x342/x343)+x344));

	if (t76 != 1164629) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x346 = INT64_MIN;
	uint64_t x347 = UINT64_MAX;
	static volatile int8_t x348 = -1;
	uint64_t t77 = 68LLU;

	t77 = (x345/((x346/x347)+x348));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x349 = 11;
	uint32_t x350 = 48642011U;
	int32_t x351 = INT32_MIN;

	t78 = (x349/((x350/x351)+x352));

	if (t78 != -11LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x353 = UINT16_MAX;
	int64_t x354 = INT64_MAX;
	int64_t x355 = INT64_MIN;
	int8_t x356 = -1;
	int64_t t79 = 137700578LL;

	t79 = (x353/((x354/x355)+x356));

	if (t79 != -65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = 1;
	static volatile uint64_t x358 = 176206588LLU;
	int16_t x359 = -3;

	t80 = (x357/((x358/x359)+x360));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x361 = INT32_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	static uint64_t x363 = UINT64_MAX;
	uint64_t x364 = 13LLU;
	volatile uint64_t t81 = 12995414LLU;

	t81 = (x361/((x362/x363)+x364));

	if (t81 != 153391689LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x365 = INT64_MIN;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = -23;

	t82 = (x365/((x366/x367)+x368));

	if (t82 != 36028797018963968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	volatile int16_t x371 = INT16_MIN;
	int64_t t83 = -119619093370LL;

	t83 = (x369/((x370/x371)+x372));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x374 = UINT32_MAX;
	static uint8_t x375 = 3U;
	int64_t x376 = INT64_MIN;
	volatile int64_t t84 = 58647485986420639LL;

	t84 = (x373/((x374/x375)+x376));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x377 = -1;
	int8_t x379 = -1;
	static uint16_t x380 = 372U;
	static volatile int32_t t85 = 8229;

	t85 = (x377/((x378/x379)+x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = INT16_MIN;
	int16_t x383 = INT16_MAX;
	static int8_t x384 = -1;
	int32_t t86 = 74242;

	t86 = (x381/((x382/x383)+x384));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MIN;
	int16_t x387 = -556;
	int64_t x388 = INT64_MIN;
	volatile int64_t t87 = -4LL;

	t87 = (x385/((x386/x387)+x388));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x389 = 10933730820530LLU;
	int64_t x390 = INT64_MIN;
	static int32_t x391 = INT32_MIN;
	static uint16_t x392 = 21660U;
	volatile uint64_t t88 = 66302418LLU;

	t88 = (x389/((x390/x391)+x392));

	if (t88 != 2545LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x393 = -1;
	uint32_t x394 = 0U;
	int16_t x395 = INT16_MIN;
	volatile int64_t t89 = 3LL;

	t89 = (x393/((x394/x395)+x396));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x397 = 814998U;
	uint8_t x398 = 1U;
	int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MAX;
	static volatile int64_t t90 = 2503661804685270681LL;

	t90 = (x397/((x398/x399)+x400));

	if (t90 != 24LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x405 = 3U;
	int32_t x406 = INT32_MAX;
	uint64_t x407 = 105191726374398LLU;
	volatile int32_t x408 = INT32_MIN;

	t91 = (x405/((x406/x407)+x408));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x409 = INT16_MIN;
	static int32_t x410 = INT32_MAX;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MAX;
	int32_t t92 = -2146314;

	t92 = (x409/((x410/x411)+x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = INT32_MIN;
	uint16_t x414 = 15158U;
	int32_t x416 = INT32_MAX;
	volatile uint32_t t93 = 353331812U;

	t93 = (x413/((x414/x415)+x416));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x418 = INT32_MIN;
	volatile uint64_t x419 = 2178639008482046992LLU;
	static int64_t x420 = -5LL;
	uint64_t t94 = 3154540337LLU;

	t94 = (x417/((x418/x419)+x420));

	if (t94 != 6148914690520689322LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x421 = UINT16_MAX;
	uint32_t x422 = 4164U;
	uint16_t x423 = 33U;
	int64_t x424 = INT64_MIN;

	t95 = (x421/((x422/x423)+x424));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x425 = UINT64_MAX;
	static int32_t x426 = -1;
	int16_t x428 = 17;
	volatile uint64_t t96 = 275944231609548LLU;

	t96 = (x425/((x426/x427)+x428));

	if (t96 != 1085102592571150095LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x429 = INT32_MIN;
	int8_t x430 = -1;
	uint64_t t97 = 3898649889LLU;

	t97 = (x429/((x430/x431)+x432));

	if (t97 != 144115188059078656LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = 675;
	uint64_t x434 = 12657561LLU;
	static int16_t x435 = INT16_MIN;
	uint64_t t98 = 16724164366069LLU;

	t98 = (x433/((x434/x435)+x436));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = INT8_MIN;
	volatile int8_t x438 = -1;
	volatile uint16_t x439 = 24763U;
	int64_t x440 = 2556LL;
	static int64_t t99 = 17301074LL;

	t99 = (x437/((x438/x439)+x440));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

