#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MAX;
uint64_t x3 = 3212755779291040695LLU;
int32_t x4 = INT32_MIN;
static uint64_t x6 = UINT64_MAX;
static uint32_t x7 = 2176499U;
volatile int32_t t2 = -243722992;
int16_t x15 = INT16_MIN;
int64_t x24 = INT64_MAX;
int32_t x29 = -7643557;
int64_t x30 = INT64_MIN;
static int32_t x32 = INT32_MIN;
volatile int32_t t7 = -13149201;
uint8_t x35 = UINT8_MAX;
int32_t x39 = INT32_MAX;
volatile int8_t x40 = -4;
volatile int32_t t9 = 66;
static int8_t x43 = INT8_MIN;
volatile int32_t t10 = 32927938;
uint64_t x47 = UINT64_MAX;
static uint64_t x56 = 38422516LLU;
uint32_t x66 = 138991U;
uint64_t x68 = 935828841241LLU;
int64_t x73 = INT64_MAX;
volatile int32_t t20 = -90;
int64_t x87 = INT64_MIN;
static int16_t x88 = 1;
static int32_t t24 = 15501;
static int32_t x109 = 11;
int8_t x110 = -1;
volatile int32_t x115 = INT32_MAX;
int32_t x116 = -1;
int16_t x117 = INT16_MIN;
volatile int32_t t31 = 96997694;
int64_t x136 = -18704241896433635LL;
uint16_t x137 = 21402U;
volatile int32_t x138 = INT32_MIN;
int32_t x147 = -23033942;
volatile int32_t x154 = 269523;
static volatile int64_t x155 = INT64_MIN;
int32_t x158 = -1;
static int32_t x159 = -15195180;
int8_t x160 = INT8_MAX;
int32_t t38 = -9862668;
int32_t t40 = 515904056;
volatile int16_t x169 = INT16_MIN;
int32_t t42 = -3970;
int8_t x178 = 3;
int8_t x183 = INT8_MIN;
int64_t x184 = INT64_MAX;
volatile int32_t t45 = 142890;
volatile int8_t x189 = -1;
static int8_t x192 = INT8_MIN;
static uint16_t x195 = UINT16_MAX;
static int32_t t47 = -40;
int32_t x198 = 369026725;
int64_t x202 = -32730781315LL;
volatile uint32_t x207 = UINT32_MAX;
int16_t x208 = INT16_MAX;
int32_t x209 = -354083501;
int32_t t51 = -12267;
int32_t x223 = INT32_MIN;
volatile int8_t x224 = -12;
int64_t x236 = -22LL;
volatile int32_t t57 = 4242;
uint8_t x237 = 6U;
int32_t t58 = 104174791;
static int8_t x243 = INT8_MIN;
int64_t x244 = INT64_MIN;
uint8_t x249 = 41U;
int32_t t61 = -4610;
uint64_t x255 = 925388398LLU;
volatile int32_t t62 = 69440208;
int16_t x258 = -1374;
uint16_t x260 = UINT16_MAX;
int32_t t63 = 26831;
int32_t x261 = -1;
int32_t x264 = 34775;
uint16_t x291 = 8U;
int8_t x292 = INT8_MIN;
static int32_t t71 = 63373037;
static int16_t x297 = -28;
static int16_t x299 = -1;
int64_t x301 = INT64_MIN;
int16_t x304 = 3964;
int32_t t74 = 13241447;
int32_t x311 = -1;
uint16_t x315 = 1U;
int16_t x316 = INT16_MAX;
volatile int32_t t77 = 364016;
volatile int16_t x318 = INT16_MIN;
uint8_t x323 = 3U;
volatile uint32_t x331 = 22U;
uint32_t x336 = UINT32_MAX;
uint8_t x337 = 0U;
static int64_t x344 = -2140370LL;
int32_t x351 = 11;
volatile int32_t t86 = 216;
int8_t x361 = 6;
int8_t x362 = 0;
uint8_t x363 = UINT8_MAX;
volatile int32_t t89 = 6022;
int8_t x368 = 40;
int32_t x376 = INT32_MIN;
int8_t x380 = INT8_MIN;
static volatile int64_t x387 = INT64_MIN;
volatile int32_t t95 = 0;
uint32_t x391 = 753623032U;
uint16_t x394 = 1U;
int64_t x395 = -114738938493LL;
uint8_t x399 = 4U;
uint64_t x402 = UINT64_MAX;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int32_t t0 = -1555241;

	t0 = ((x1^x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 355006504236LLU;
	static uint64_t x8 = 338992052198141896LLU;
	int32_t t1 = -18630348;

	t1 = ((x5^x6)==(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -5964301;
	volatile int16_t x10 = 145;
	int8_t x11 = -38;
	uint64_t x12 = 46610745303529LLU;

	t2 = ((x9^x10)==(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	uint32_t x14 = 2904U;
	int64_t x16 = -1LL;
	static volatile int32_t t3 = 24091;

	t3 = ((x13^x14)==(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	volatile int64_t x18 = -29250LL;
	volatile int8_t x19 = INT8_MIN;
	static int64_t x20 = INT64_MAX;
	static int32_t t4 = -3162;

	t4 = ((x17^x18)==(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = 180695727889565LL;
	uint64_t x22 = 6665LLU;
	uint64_t x23 = 1461620250794LLU;
	volatile int32_t t5 = 59;

	t5 = ((x21^x22)==(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static uint32_t x26 = 32219U;
	int32_t x27 = INT32_MIN;
	static volatile uint16_t x28 = 108U;
	volatile int32_t t6 = 1;

	t6 = ((x25^x26)==(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = INT16_MIN;

	t7 = ((x29^x30)==(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	volatile uint32_t x34 = 7305U;
	uint16_t x36 = 247U;
	volatile int32_t t8 = -1661374;

	t8 = ((x33^x34)==(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	uint32_t x38 = 33U;

	t9 = ((x37^x38)==(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	volatile int8_t x42 = 2;
	static int64_t x44 = INT64_MIN;

	t10 = ((x41^x42)==(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -20;
	int16_t x46 = -4056;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = -3761;

	t11 = ((x45^x46)==(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 1U;
	volatile int32_t x50 = -474554;
	static uint64_t x51 = 78210853368497LLU;
	volatile uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = 1;

	t12 = ((x49^x50)==(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MAX;
	uint8_t x55 = 12U;
	static volatile int32_t t13 = 1;

	t13 = ((x53^x54)==(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	uint16_t x58 = 0U;
	int8_t x59 = 0;
	volatile int64_t x60 = -1LL;
	volatile int32_t t14 = 125282;

	t14 = ((x57^x58)==(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -949511LL;
	uint16_t x62 = 18136U;
	int64_t x63 = INT64_MAX;
	int8_t x64 = -1;
	int32_t t15 = -168458;

	t15 = ((x61^x62)==(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = UINT16_MAX;
	int16_t x67 = 6;
	volatile int32_t t16 = -1;

	t16 = ((x65^x66)==(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = INT64_MIN;
	static uint64_t x70 = UINT64_MAX;
	static int32_t x71 = INT32_MIN;
	static volatile int32_t x72 = INT32_MAX;
	int32_t t17 = -507;

	t17 = ((x69^x70)==(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -33638934511LL;
	uint8_t x75 = 4U;
	uint32_t x76 = UINT32_MAX;
	int32_t t18 = -385;

	t18 = ((x73^x74)==(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	static int64_t x78 = INT64_MIN;
	static int16_t x79 = -231;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 6494;

	t19 = ((x77^x78)==(x79/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	volatile uint16_t x82 = 90U;
	int32_t x83 = -1;
	uint64_t x84 = UINT64_MAX;

	t20 = ((x81^x82)==(x83/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 100U;
	static uint16_t x86 = 0U;
	volatile int32_t t21 = -19815;

	t21 = ((x85^x86)==(x87/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = 148;
	int64_t x90 = INT64_MIN;
	static uint16_t x91 = 5U;
	static int16_t x92 = INT16_MIN;
	int32_t t22 = 155523677;

	t22 = ((x89^x90)==(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	uint8_t x94 = UINT8_MAX;
	uint32_t x95 = 900743954U;
	int32_t x96 = INT32_MIN;
	int32_t t23 = 530;

	t23 = ((x93^x94)==(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	static int32_t x98 = INT32_MIN;
	int16_t x99 = 262;
	int64_t x100 = -262680LL;

	t24 = ((x97^x98)==(x99/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	int64_t x102 = -2109501516924407LL;
	uint8_t x103 = UINT8_MAX;
	int64_t x104 = -1LL;
	volatile int32_t t25 = -15243072;

	t25 = ((x101^x102)==(x103/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MAX;
	volatile int64_t x106 = INT64_MIN;
	static int16_t x107 = INT16_MAX;
	static int32_t x108 = -223380;
	int32_t t26 = 2;

	t26 = ((x105^x106)==(x107/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x111 = 8298U;
	int64_t x112 = -1LL;
	static volatile int32_t t27 = 3985;

	t27 = ((x109^x110)==(x111/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 23;
	int8_t x114 = INT8_MAX;
	static int32_t t28 = -13813;

	t28 = ((x113^x114)==(x115/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	uint16_t x119 = 14373U;
	int8_t x120 = -2;
	volatile int32_t t29 = -14345;

	t29 = ((x117^x118)==(x119/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = UINT64_MAX;
	volatile int64_t x122 = INT64_MIN;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 47326;

	t30 = ((x121^x122)==(x123/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	static uint16_t x126 = UINT16_MAX;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = 1696U;

	t31 = ((x125^x126)==(x127/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	volatile uint16_t x131 = UINT16_MAX;
	int64_t x132 = INT64_MIN;
	int32_t t32 = -1026323;

	t32 = ((x129^x130)==(x131/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint8_t x134 = UINT8_MAX;
	int8_t x135 = -1;
	int32_t t33 = 92;

	t33 = ((x133^x134)==(x135/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x139 = INT16_MIN;
	int32_t x140 = -15719237;
	volatile int32_t t34 = -1;

	t34 = ((x137^x138)==(x139/x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = UINT64_MAX;
	int64_t x146 = INT64_MIN;
	int8_t x148 = -5;
	static volatile int32_t t35 = 110;

	t35 = ((x145^x146)==(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 106U;
	uint64_t x152 = 600LLU;
	volatile int32_t t36 = -5251;

	t36 = ((x149^x150)==(x151/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x153 = -1LL;
	int8_t x156 = INT8_MAX;
	volatile int32_t t37 = 642309;

	t37 = ((x153^x154)==(x155/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = 1171090LL;

	t38 = ((x157^x158)==(x159/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = -1;
	int32_t x162 = 611;
	int32_t x163 = INT32_MIN;
	static int64_t x164 = INT64_MIN;
	volatile int32_t t39 = -1;

	t39 = ((x161^x162)==(x163/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 3U;
	uint32_t x166 = UINT32_MAX;
	static int32_t x167 = INT32_MIN;
	uint64_t x168 = 40861684LLU;

	t40 = ((x165^x166)==(x167/x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x170 = INT16_MIN;
	int64_t x171 = -852181LL;
	volatile int16_t x172 = -1;
	int32_t t41 = 53;

	t41 = ((x169^x170)==(x171/x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -1168;
	int16_t x174 = -116;
	int16_t x175 = 1;
	volatile int8_t x176 = -22;

	t42 = ((x173^x174)==(x175/x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = INT16_MIN;
	int8_t x179 = INT8_MAX;
	static uint8_t x180 = 11U;
	volatile int32_t t43 = -10644594;

	t43 = ((x177^x178)==(x179/x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x182 = INT32_MAX;
	volatile int32_t t44 = -15227;

	t44 = ((x181^x182)==(x183/x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x186 = 1U;
	int8_t x187 = 11;
	int8_t x188 = INT8_MIN;

	t45 = ((x185^x186)==(x187/x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x190 = 269U;
	int8_t x191 = -1;
	volatile int32_t t46 = -2;

	t46 = ((x189^x190)==(x191/x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 1416U;
	int16_t x194 = -1223;
	int8_t x196 = 56;

	t47 = ((x193^x194)==(x195/x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 104U;
	volatile uint8_t x199 = 125U;
	static int8_t x200 = 12;
	volatile int32_t t48 = -15764;

	t48 = ((x197^x198)==(x199/x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x201 = 9576U;
	volatile uint16_t x203 = UINT16_MAX;
	int8_t x204 = INT8_MAX;
	static int32_t t49 = 90741;

	t49 = ((x201^x202)==(x203/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = 150U;
	static int32_t x206 = INT32_MAX;
	int32_t t50 = 89;

	t50 = ((x205^x206)==(x207/x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x210 = INT8_MIN;
	int64_t x211 = 3LL;
	uint32_t x212 = 952U;

	t51 = ((x209^x210)==(x211/x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = -1;
	static volatile uint32_t x214 = 263635U;
	static uint64_t x215 = 45710221893LLU;
	int64_t x216 = -1LL;
	int32_t t52 = -881;

	t52 = ((x213^x214)==(x215/x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 1065675850763LLU;
	int64_t x218 = INT64_MAX;
	uint64_t x219 = 3LLU;
	volatile int8_t x220 = 23;
	volatile int32_t t53 = -54;

	t53 = ((x217^x218)==(x219/x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = 576LL;
	int16_t x222 = 483;
	int32_t t54 = 0;

	t54 = ((x221^x222)==(x223/x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = 58593;
	int8_t x226 = -1;
	int8_t x227 = INT8_MIN;
	volatile int16_t x228 = -1;
	volatile int32_t t55 = -30293;

	t55 = ((x225^x226)==(x227/x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = UINT32_MAX;
	uint32_t x230 = 24320U;
	int16_t x231 = -1427;
	uint8_t x232 = 1U;
	int32_t t56 = -883;

	t56 = ((x229^x230)==(x231/x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 6362651510LLU;
	volatile int8_t x234 = -34;
	int64_t x235 = -3292498LL;

	t57 = ((x233^x234)==(x235/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x238 = 181U;
	int64_t x239 = -20046224262266648LL;
	int16_t x240 = -1;

	t58 = ((x237^x238)==(x239/x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -1;
	uint32_t x242 = 19322U;
	volatile int32_t t59 = -743408507;

	t59 = ((x241^x242)==(x243/x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = 247U;
	uint64_t x246 = 1172473323LLU;
	int32_t x247 = INT32_MAX;
	volatile int64_t x248 = -1093737102703749083LL;
	static volatile int32_t t60 = 238476;

	t60 = ((x245^x246)==(x247/x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x250 = -9266555;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = 2U;

	t61 = ((x249^x250)==(x251/x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x253 = INT16_MIN;
	uint32_t x254 = 7066903U;
	uint8_t x256 = UINT8_MAX;

	t62 = ((x253^x254)==(x255/x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	int16_t x259 = -1;

	t63 = ((x257^x258)==(x259/x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x262 = INT8_MAX;
	int32_t x263 = 1117;
	volatile int32_t t64 = 18394063;

	t64 = ((x261^x262)==(x263/x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x265 = -1;
	static volatile uint16_t x266 = 69U;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t65 = -3;

	t65 = ((x265^x266)==(x267/x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = UINT32_MAX;
	uint16_t x270 = 138U;
	int32_t x271 = INT32_MAX;
	static uint16_t x272 = UINT16_MAX;
	int32_t t66 = -1797988;

	t66 = ((x269^x270)==(x271/x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MIN;
	static int16_t x274 = -2;
	volatile int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;
	int32_t t67 = -4104498;

	t67 = ((x273^x274)==(x275/x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x277 = INT32_MAX;
	volatile uint16_t x278 = 785U;
	static volatile int16_t x279 = INT16_MIN;
	int64_t x280 = -6544482384783LL;
	int32_t t68 = -328117;

	t68 = ((x277^x278)==(x279/x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MAX;
	int32_t x282 = 3156850;
	volatile int64_t x283 = -1LL;
	volatile int8_t x284 = INT8_MIN;
	volatile int32_t t69 = -107;

	t69 = ((x281^x282)==(x283/x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = 3U;
	volatile uint16_t x286 = 117U;
	static volatile uint64_t x287 = 138084121999334LLU;
	static int8_t x288 = 8;
	static int32_t t70 = -1034512;

	t70 = ((x285^x286)==(x287/x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 3U;
	static volatile uint8_t x290 = 4U;

	t71 = ((x289^x290)==(x291/x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x293 = -1;
	int16_t x294 = INT16_MIN;
	static uint32_t x295 = 1308955283U;
	static int16_t x296 = 66;
	int32_t t72 = -17508140;

	t72 = ((x293^x294)==(x295/x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x298 = 0;
	uint32_t x300 = 21U;
	volatile int32_t t73 = -7143;

	t73 = ((x297^x298)==(x299/x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x302 = INT8_MIN;
	volatile int8_t x303 = 8;

	t74 = ((x301^x302)==(x303/x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = INT64_MAX;
	static int32_t x306 = -17604;
	uint16_t x307 = UINT16_MAX;
	int64_t x308 = INT64_MIN;
	int32_t t75 = 2;

	t75 = ((x305^x306)==(x307/x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = -46;
	static int16_t x310 = INT16_MAX;
	int32_t x312 = -1;
	volatile int32_t t76 = -92;

	t76 = ((x309^x310)==(x311/x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = -1;
	volatile int64_t x314 = -1LL;

	t77 = ((x313^x314)==(x315/x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MIN;
	int64_t x319 = INT64_MIN;
	uint64_t x320 = 92251657222447826LLU;
	int32_t t78 = -42107;

	t78 = ((x317^x318)==(x319/x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = -1;
	int64_t x322 = -1LL;
	uint16_t x324 = 16333U;
	int32_t t79 = -38974245;

	t79 = ((x321^x322)==(x323/x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 2560367366117544LL;
	uint8_t x326 = 11U;
	int32_t x327 = 1;
	static volatile int16_t x328 = -34;
	int32_t t80 = 3;

	t80 = ((x325^x326)==(x327/x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = -4;
	static volatile int32_t x330 = INT32_MIN;
	int32_t x332 = -1;
	volatile int32_t t81 = 1309775;

	t81 = ((x329^x330)==(x331/x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x333 = 0U;
	int8_t x334 = INT8_MIN;
	volatile int16_t x335 = INT16_MIN;
	int32_t t82 = 1;

	t82 = ((x333^x334)==(x335/x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x338 = 8U;
	volatile int64_t x339 = INT64_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t83 = -35463;

	t83 = ((x337^x338)==(x339/x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x341 = 10;
	int64_t x342 = INT64_MAX;
	volatile int8_t x343 = INT8_MIN;
	volatile int32_t t84 = -27;

	t84 = ((x341^x342)==(x343/x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = -1LL;
	int64_t x347 = -1LL;
	volatile int16_t x348 = -1;
	volatile int32_t t85 = 27;

	t85 = ((x345^x346)==(x347/x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = -52;
	uint8_t x350 = 0U;
	uint32_t x352 = 435150U;

	t86 = ((x349^x350)==(x351/x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = 108;
	int8_t x354 = INT8_MAX;
	int32_t x355 = -1;
	int8_t x356 = INT8_MIN;
	volatile int32_t t87 = 643;

	t87 = ((x353^x354)==(x355/x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = 162LLU;
	int64_t x358 = -1LL;
	int8_t x359 = -61;
	static int16_t x360 = INT16_MIN;
	volatile int32_t t88 = 499912910;

	t88 = ((x357^x358)==(x359/x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x364 = -10;

	t89 = ((x361^x362)==(x363/x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	static int64_t x367 = INT64_MIN;
	int32_t t90 = -846;

	t90 = ((x365^x366)==(x367/x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MAX;
	volatile uint64_t x370 = 45801168214LLU;
	uint16_t x371 = 0U;
	uint8_t x372 = 1U;
	volatile int32_t t91 = 114660;

	t91 = ((x369^x370)==(x371/x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x373 = 0U;
	int64_t x374 = -4471764822123698LL;
	int32_t x375 = -1;
	volatile int32_t t92 = -2216;

	t92 = ((x373^x374)==(x375/x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = -1;
	volatile int64_t x378 = -1928172106LL;
	uint32_t x379 = 2718003U;
	volatile int32_t t93 = 73722;

	t93 = ((x377^x378)==(x379/x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = INT32_MAX;
	uint8_t x382 = 79U;
	static int64_t x383 = INT64_MAX;
	volatile int32_t x384 = INT32_MAX;
	volatile int32_t t94 = 426;

	t94 = ((x381^x382)==(x383/x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = -1;
	int16_t x386 = -1;
	int16_t x388 = 6128;

	t95 = ((x385^x386)==(x387/x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = UINT16_MAX;
	int64_t x390 = 1LL;
	volatile uint8_t x392 = 49U;
	static volatile int32_t t96 = 29401747;

	t96 = ((x389^x390)==(x391/x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = INT16_MIN;
	int8_t x396 = INT8_MAX;
	volatile int32_t t97 = -14;

	t97 = ((x393^x394)==(x395/x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x397 = 4991048U;
	static uint64_t x398 = UINT64_MAX;
	int16_t x400 = INT16_MAX;
	static int32_t t98 = -6312;

	t98 = ((x397^x398)==(x399/x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x401 = 32LL;
	int32_t x403 = INT32_MIN;
	int16_t x404 = -35;
	int32_t t99 = 4901;

	t99 = ((x401^x402)==(x403/x404));

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

