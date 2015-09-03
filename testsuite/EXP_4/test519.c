#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = INT64_MIN;
uint8_t x17 = UINT8_MAX;
uint64_t x18 = 455733691LLU;
int16_t x21 = INT16_MIN;
volatile uint32_t x24 = 299666U;
uint32_t t6 = UINT32_MAX;
int64_t x29 = -1LL;
static volatile uint32_t t9 = 5U;
int64_t x41 = INT64_MIN;
int16_t x43 = -1;
static uint16_t x48 = 55U;
uint16_t x60 = 26U;
int16_t x62 = -1;
int32_t x63 = 26;
uint8_t x65 = UINT8_MAX;
int16_t x66 = INT16_MAX;
static int16_t x72 = INT16_MIN;
uint64_t t16 = UINT64_MAX;
static int16_t x77 = INT16_MIN;
int32_t x82 = INT32_MIN;
volatile int32_t t19 = INT32_MIN;
int32_t x85 = INT32_MAX;
int64_t x87 = -3032LL;
uint64_t x95 = 706219714012838945LLU;
uint32_t x99 = 856468U;
int8_t x104 = INT8_MIN;
static uint64_t x112 = 187LLU;
uint64_t t26 = 9736934691LLU;
int16_t x114 = -1;
int32_t x115 = -238;
uint16_t x119 = UINT16_MAX;
volatile uint64_t x121 = UINT64_MAX;
static int8_t x131 = INT8_MIN;
int32_t x132 = INT32_MIN;
static volatile int32_t t31 = 3522;
int8_t x133 = INT8_MIN;
static int16_t x142 = INT16_MIN;
volatile int32_t x148 = -1;
static uint64_t t36 = UINT64_MAX;
uint32_t x170 = 339671894U;
int32_t x171 = -1;
int64_t t43 = 6788752543771784LL;
static int16_t x191 = -4140;
int32_t x201 = INT32_MIN;
uint64_t x209 = UINT64_MAX;
int32_t t50 = INT32_MAX;
uint8_t x234 = 28U;
int16_t x244 = -4;
volatile int32_t t54 = 91554;
static volatile int32_t t55 = 30786;
uint8_t x263 = UINT8_MAX;
uint64_t t58 = UINT64_MAX;
int32_t x272 = INT32_MAX;
uint32_t x277 = 59013U;
int32_t x285 = INT32_MIN;
int8_t x290 = INT8_MIN;
int32_t x295 = INT32_MIN;
volatile uint64_t t65 = 840574656LLU;
static uint64_t x306 = 14LLU;
static int32_t x314 = INT32_MIN;
int8_t x327 = INT8_MIN;
volatile int16_t x349 = INT16_MAX;
int8_t x355 = -6;
int16_t x359 = INT16_MIN;
volatile int64_t t79 = -1LL;
uint16_t x364 = 295U;
volatile int16_t x365 = -1;
int64_t t82 = 11498499402LL;
volatile uint16_t x375 = 3U;
uint64_t x384 = UINT64_MAX;
volatile uint32_t x385 = UINT32_MAX;
int32_t x387 = 26;
uint32_t x393 = 40728095U;
int8_t x394 = 1;
int16_t x395 = INT16_MIN;
static uint64_t x397 = 64150LLU;
volatile uint64_t x405 = UINT64_MAX;
uint64_t x416 = 15918872LLU;
uint64_t t91 = UINT64_MAX;
int16_t x419 = INT16_MIN;
int32_t x424 = 13;
volatile int32_t t93 = -1;
static volatile int8_t x427 = 9;
volatile int64_t t94 = -30709001911159LL;
int32_t x431 = INT32_MIN;
uint64_t x435 = 514270053LLU;
uint64_t x436 = 4490388326579253LLU;
uint32_t x438 = 1163U;
int32_t x441 = 190;
int32_t x452 = INT32_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = 3915;
	volatile int8_t x3 = -1;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 28871675;

	t0 = (x1|(x2+(x3/x4)));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	volatile int8_t x8 = INT8_MIN;
	int64_t t1 = 13185397LL;

	t1 = (x5|(x6+(x7/x8)));

	if (t1 != -2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = -2258;
	uint64_t x12 = 26565503955582LLU;
	volatile uint64_t t2 = 2746540750514829879LLU;

	t2 = (x9|(x10+(x11/x12)));

	if (t2 != 9223372036855120743LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int32_t x14 = INT32_MIN;
	static uint8_t x15 = 7U;
	int64_t x16 = INT64_MIN;
	static volatile int64_t t3 = -4157256166268352LL;

	t3 = (x13|(x14+(x15/x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = INT8_MAX;
	volatile int8_t x20 = INT8_MIN;
	uint64_t t4 = 53748783053LLU;

	t4 = (x17|(x18+(x19/x20)));

	if (t4 != 455733759LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -26383768;
	int16_t x23 = INT16_MIN;
	static uint32_t t5 = 445U;

	t5 = (x21|(x22+(x23/x24)));

	if (t5 != 4294943332U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint32_t x26 = 1U;
	volatile int32_t x27 = -5561957;
	uint8_t x28 = UINT8_MAX;

	t6 = (x25|(x26+(x27/x28)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	static int16_t x31 = 15372;
	static int16_t x32 = -427;
	int64_t t7 = 223644190LL;

	t7 = (x29|(x30+(x31/x32)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 2566U;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	static int16_t x36 = INT16_MAX;
	int32_t t8 = 223813318;

	t8 = (x33|(x34+(x35/x36)));

	if (t8 != -65666) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -25;
	volatile uint32_t x38 = 1U;
	uint16_t x39 = UINT16_MAX;
	static uint32_t x40 = 688U;

	t9 = (x37|(x38+(x39/x40)));

	if (t9 != 4294967271U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -15198;
	int32_t x44 = -1;
	volatile int64_t t10 = -1027380258443854976LL;

	t10 = (x41|(x42+(x43/x44)));

	if (t10 != -15197LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int32_t x46 = -398933756;
	int8_t x47 = 0;
	volatile int32_t t11 = 2519;

	t11 = (x45|(x46+(x47/x48)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 46776354751861257LLU;
	static volatile int16_t x54 = -1;
	int64_t x55 = 3946300065019099LL;
	volatile int32_t x56 = 27627;
	static volatile uint64_t t12 = 3494865782538432LLU;

	t12 = (x53|(x54+(x55/x56)));

	if (t12 != 46776496519346847LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MAX;
	uint16_t x59 = 1U;
	volatile int32_t t13 = 37;

	t13 = (x57|(x58+(x59/x60)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -3366981;
	int8_t x64 = -1;
	volatile int32_t t14 = -123118;

	t14 = (x61|(x62+(x63/x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x67 = INT32_MAX;
	int8_t x68 = -1;
	static volatile int32_t t15 = 1;

	t15 = (x65|(x66+(x67/x68)));

	if (t15 != -2147450625) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = -1;
	volatile uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MAX;

	t16 = (x69|(x70+(x71/x72)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = -98422756873LL;
	int32_t x74 = -1;
	uint64_t x75 = 1LLU;
	volatile uint8_t x76 = 5U;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x73|(x74+(x75/x76)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = 193800;
	uint8_t x79 = UINT8_MAX;
	volatile uint16_t x80 = UINT16_MAX;
	int32_t t18 = 702696;

	t18 = (x77|(x78+(x79/x80)));

	if (t18 != -2808) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x83 = 124U;
	static int8_t x84 = INT8_MIN;

	t19 = (x81|(x82+(x83/x84)));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = -1LL;
	int64_t x88 = INT64_MIN;
	static volatile int64_t t20 = 14795LL;

	t20 = (x85|(x86+(x87/x88)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -1;
	static volatile int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	volatile uint32_t x92 = 25965831U;
	volatile int64_t t21 = -29LL;

	t21 = (x89|(x90+(x91/x92)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 59LLU;
	uint16_t x94 = 10287U;
	int32_t x96 = -1;
	static uint64_t t22 = 634731LLU;

	t22 = (x93|(x94+(x95/x96)));

	if (t22 != 10303LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MIN;
	volatile int16_t x100 = -1;
	volatile int64_t t23 = INT64_MAX;

	t23 = (x97|(x98+(x99/x100)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = -1;
	static int64_t x103 = INT64_MIN;
	volatile int64_t t24 = 2077368403LL;

	t24 = (x101|(x102+(x103/x104)));

	if (t24 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int8_t x106 = -30;
	static int8_t x107 = 4;
	int64_t x108 = -1LL;
	volatile int64_t t25 = -332108223256960774LL;

	t25 = (x105|(x106+(x107/x108)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = 1840U;
	volatile uint8_t x110 = 23U;
	int64_t x111 = 30LL;

	t26 = (x109|(x110+(x111/x112)));

	if (t26 != 1847LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 4U;
	uint32_t x116 = 7223635U;
	static uint32_t t27 = 2089713651U;

	t27 = (x113|(x114+(x115/x116)));

	if (t27 != 597U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x117 = 99811LLU;
	volatile int32_t x118 = INT32_MIN;
	volatile int8_t x120 = INT8_MAX;
	volatile uint64_t t28 = 681924736568LLU;

	t28 = (x117|(x118+(x119/x120)));

	if (t28 != 18446744071562168295LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x122 = INT16_MAX;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = INT64_MIN;
	uint64_t t29 = UINT64_MAX;

	t29 = (x121|(x122+(x123/x124)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	static int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MAX;
	int64_t t30 = -46166737394LL;

	t30 = (x125|(x126+(x127/x128)));

	if (t30 != -281483566940168LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = -1;
	int16_t x130 = INT16_MIN;

	t31 = (x129|(x130+(x131/x132)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = INT32_MAX;
	uint8_t x135 = UINT8_MAX;
	int16_t x136 = -1;
	volatile int32_t t32 = -25;

	t32 = (x133|(x134+(x135/x136)));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = INT32_MIN;
	static volatile int64_t x138 = 307LL;
	int64_t x139 = INT64_MIN;
	static uint16_t x140 = 1032U;
	volatile int64_t t33 = -283882852821614851LL;

	t33 = (x137|(x138+(x139/x140)));

	if (t33 != -33294013LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = 1;
	int32_t x143 = INT32_MAX;
	int8_t x144 = INT8_MAX;
	volatile int32_t t34 = -122036;

	t34 = (x141|(x142+(x143/x144)));

	if (t34 != 16876553) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = INT32_MIN;
	volatile uint16_t x146 = UINT16_MAX;
	int16_t x147 = INT16_MAX;
	int32_t t35 = 38956;

	t35 = (x145|(x146+(x147/x148)));

	if (t35 != -2147450880) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MAX;
	uint64_t x156 = 270751332221016LLU;

	t36 = (x153|(x154+(x155/x156)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = -9;
	int32_t x158 = -51502160;
	uint64_t x159 = 85589233LLU;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t37 = 4958997089296561358LLU;

	t37 = (x157|(x158+(x159/x160)));

	if (t37 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	uint64_t x166 = UINT64_MAX;
	uint64_t x167 = 11910212LLU;
	int16_t x168 = INT16_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x165|(x166+(x167/x168)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = -305;
	int8_t x172 = INT8_MAX;
	static volatile uint32_t t39 = 469184U;

	t39 = (x169|(x170+(x171/x172)));

	if (t39 != 4294967263U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = INT32_MAX;
	int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = 259U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t40 = 199;

	t40 = (x173|(x174+(x175/x176)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = 16022;
	static volatile uint16_t x179 = 26758U;
	int8_t x180 = -1;
	int32_t t41 = 1;

	t41 = (x177|(x178+(x179/x180)));

	if (t41 != -112) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = -1;
	int64_t x182 = INT64_MIN;
	int64_t x183 = -37745LL;
	volatile uint32_t x184 = 13255717U;
	volatile int64_t t42 = -285436320896327787LL;

	t42 = (x181|(x182+(x183/x184)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -1;
	int32_t x186 = -1;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MAX;

	t43 = (x185|(x186+(x187/x188)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x189 = INT32_MAX;
	int64_t x190 = INT64_MIN;
	uint64_t x192 = 2191165403355776LLU;
	uint64_t t44 = 3767852403LLU;

	t44 = (x189|(x190+(x191/x192)));

	if (t44 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = -1;
	volatile uint32_t x199 = 170506360U;
	static int64_t x200 = INT64_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = (x197|(x198+(x199/x200)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x202 = -1;
	static int32_t x203 = -2;
	uint32_t x204 = 3923178U;
	uint32_t t46 = 0U;

	t46 = (x201|(x202+(x203/x204)));

	if (t46 != 2147484741U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x205 = -1LL;
	uint32_t x206 = UINT32_MAX;
	int32_t x207 = 193356;
	uint64_t x208 = UINT64_MAX;
	static uint64_t t47 = UINT64_MAX;

	t47 = (x205|(x206+(x207/x208)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x210 = 52U;
	int64_t x211 = INT64_MAX;
	int16_t x212 = INT16_MIN;
	uint64_t t48 = UINT64_MAX;

	t48 = (x209|(x210+(x211/x212)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x213 = 28U;
	volatile uint32_t x214 = 1966U;
	int64_t x215 = 992LL;
	volatile int8_t x216 = -16;
	int64_t t49 = 2166187032309418LL;

	t49 = (x213|(x214+(x215/x216)));

	if (t49 != 1916LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = 7720;
	uint8_t x219 = 8U;
	int8_t x220 = INT8_MIN;

	t50 = (x217|(x218+(x219/x220)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = 552;
	int8_t x222 = -1;
	volatile int32_t x223 = INT32_MAX;
	int64_t x224 = INT64_MAX;
	int64_t t51 = 6002687201LL;

	t51 = (x221|(x222+(x223/x224)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = 195;
	int32_t x230 = INT32_MIN;
	int32_t x231 = -9791584;
	int8_t x232 = INT8_MIN;
	int32_t t52 = 1261672;

	t52 = (x229|(x230+(x231/x232)));

	if (t52 != -2147407149) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = INT64_MIN;
	static uint64_t x235 = UINT64_MAX;
	int8_t x236 = INT8_MIN;
	uint64_t t53 = 1539LLU;

	t53 = (x233|(x234+(x235/x236)));

	if (t53 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MIN;
	static int16_t x242 = INT16_MAX;
	uint8_t x243 = 20U;

	t54 = (x241|(x242+(x243/x244)));

	if (t54 != -6) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x249 = 14U;
	volatile uint8_t x250 = 9U;
	volatile int32_t x251 = INT32_MIN;
	uint8_t x252 = 1U;

	t55 = (x249|(x250+(x251/x252)));

	if (t55 != -2147483633) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x253 = 0;
	static volatile uint64_t x254 = 135148986875835642LLU;
	int64_t x255 = INT64_MIN;
	static int8_t x256 = INT8_MIN;
	uint64_t t56 = 89LLU;

	t56 = (x253|(x254+(x255/x256)));

	if (t56 != 207206580913763578LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x261 = 26230308;
	int8_t x262 = 1;
	int64_t x264 = -1LL;
	volatile int64_t t57 = 602LL;

	t57 = (x261|(x262+(x263/x264)));

	if (t57 != -218LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x265 = INT64_MAX;
	int64_t x266 = INT64_MIN;
	uint64_t x267 = 252826545860446484LLU;
	int8_t x268 = 7;

	t58 = (x265|(x266+(x267/x268)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x269 = 20U;
	uint8_t x270 = 60U;
	volatile int64_t x271 = INT64_MAX;
	volatile int64_t t59 = -4LL;

	t59 = (x269|(x270+(x271/x272)));

	if (t59 != 4294967358LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x273 = UINT8_MAX;
	static uint16_t x274 = 24U;
	static uint64_t x275 = 83479718195LLU;
	int32_t x276 = INT32_MAX;
	uint64_t t60 = 511276765194514841LLU;

	t60 = (x273|(x274+(x275/x276)));

	if (t60 != 255LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x278 = INT16_MIN;
	int64_t x279 = 854676959LL;
	int32_t x280 = INT32_MIN;
	int64_t t61 = 675000153644617573LL;

	t61 = (x277|(x278+(x279/x280)));

	if (t61 != -6523LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	uint8_t x283 = 88U;
	volatile uint32_t x284 = UINT32_MAX;
	static volatile uint32_t t62 = 199U;

	t62 = (x281|(x282+(x283/x284)));

	if (t62 != 4294967168U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x286 = 0;
	int8_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	static int32_t t63 = INT32_MIN;

	t63 = (x285|(x286+(x287/x288)));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x291 = 8001U;
	uint32_t x292 = 235721025U;
	uint32_t t64 = 32U;

	t64 = (x289|(x290+(x291/x292)));

	if (t64 != 4294967168U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x293 = 255U;
	volatile int32_t x294 = -33800074;
	uint64_t x296 = UINT64_MAX;

	t65 = (x293|(x294+(x295/x296)));

	if (t65 != 18446744073675751679LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MIN;
	int32_t x302 = -1;
	int16_t x303 = 4593;
	uint16_t x304 = 6595U;
	static int32_t t66 = -338284097;

	t66 = (x301|(x302+(x303/x304)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x305 = INT64_MAX;
	int8_t x307 = -1;
	int64_t x308 = 1076940855067972046LL;
	static uint64_t t67 = 2075391326370074LLU;

	t67 = (x305|(x306+(x307/x308)));

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x309 = 478U;
	uint16_t x310 = 1126U;
	int32_t x311 = -72710207;
	int8_t x312 = INT8_MIN;
	volatile int32_t t68 = 72;

	t68 = (x309|(x310+(x311/x312)));

	if (t68 != 569310) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x313 = 113480;
	static volatile int32_t x315 = INT32_MIN;
	uint64_t x316 = UINT64_MAX;
	uint64_t t69 = 1LLU;

	t69 = (x313|(x314+(x315/x316)));

	if (t69 != 18446744071562181448LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = 246949799576LL;
	int64_t x322 = INT64_MAX;
	int64_t x323 = 960LL;
	int64_t x324 = -1LL;
	static int64_t t70 = -9987048LL;

	t70 = (x321|(x322+(x323/x324)));

	if (t70 != 9223372036854775487LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 195U;
	int32_t x326 = 5219252;
	int32_t x328 = -1022;
	volatile int32_t t71 = 14333;

	t71 = (x325|(x326+(x327/x328)));

	if (t71 != 5219319) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = INT16_MAX;
	static int8_t x330 = 4;
	int16_t x331 = INT16_MAX;
	int32_t x332 = -1;
	int32_t t72 = 3;

	t72 = (x329|(x330+(x331/x332)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x333 = UINT16_MAX;
	static int8_t x334 = INT8_MIN;
	static uint8_t x335 = UINT8_MAX;
	int32_t x336 = INT32_MAX;
	volatile int32_t t73 = -188362;

	t73 = (x333|(x334+(x335/x336)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x337 = 6505U;
	volatile int8_t x338 = INT8_MIN;
	static int16_t x339 = -3401;
	int32_t x340 = INT32_MIN;
	int32_t t74 = 436410;

	t74 = (x337|(x338+(x339/x340)));

	if (t74 != -23) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = -1;
	int64_t x342 = INT64_MAX;
	uint32_t x343 = 101U;
	int8_t x344 = -1;
	volatile int64_t t75 = 18384LL;

	t75 = (x341|(x342+(x343/x344)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x345 = INT8_MIN;
	int64_t x346 = -1861576847547554LL;
	uint32_t x347 = 1301176646U;
	static int16_t x348 = -123;
	int64_t t76 = -21859407LL;

	t76 = (x345|(x346+(x347/x348)));

	if (t76 != -34LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x350 = INT16_MIN;
	int64_t x351 = -1LL;
	int16_t x352 = INT16_MIN;
	int64_t t77 = -48753LL;

	t77 = (x349|(x350+(x351/x352)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = -1LL;
	uint64_t x354 = 0LLU;
	int8_t x356 = -30;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x353|(x354+(x355/x356)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x357 = 121305209539550288LL;
	int32_t x358 = -1;
	int8_t x360 = 2;

	t79 = (x357|(x358+(x359/x360)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = INT32_MAX;
	int16_t x362 = -6599;
	int32_t x363 = -1;
	int32_t t80 = 0;

	t80 = (x361|(x362+(x363/x364)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x366 = UINT32_MAX;
	static int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MAX;
	uint32_t t81 = UINT32_MAX;

	t81 = (x365|(x366+(x367/x368)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x369 = -2;
	int64_t x370 = 710165170LL;
	static uint8_t x371 = 1U;
	int8_t x372 = INT8_MAX;

	t82 = (x369|(x370+(x371/x372)));

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x373 = -230;
	uint16_t x374 = 0U;
	uint8_t x376 = 1U;
	volatile int32_t t83 = 27;

	t83 = (x373|(x374+(x375/x376)));

	if (t83 != -229) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x377 = UINT16_MAX;
	volatile uint8_t x378 = 12U;
	volatile uint64_t x379 = 56460717742262782LLU;
	volatile int64_t x380 = -689640163311LL;
	uint64_t t84 = 153915334213225609LLU;

	t84 = (x377|(x378+(x379/x380)));

	if (t84 != 65535LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	uint64_t t85 = UINT64_MAX;

	t85 = (x381|(x382+(x383/x384)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x386 = INT64_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t86 = -253875944450565158LL;

	t86 = (x385|(x386+(x387/x388)));

	if (t86 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x396 = 1U;
	uint32_t t87 = 4042U;

	t87 = (x393|(x394+(x395/x396)));

	if (t87 != 4294964767U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x398 = INT8_MIN;
	static int32_t x399 = -1;
	int32_t x400 = 3930;
	volatile uint64_t t88 = 129935304757834989LLU;

	t88 = (x397|(x398+(x399/x400)));

	if (t88 != 18446744073709551510LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x406 = 1U;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = INT16_MAX;
	static uint64_t t89 = UINT64_MAX;

	t89 = (x405|(x406+(x407/x408)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MAX;
	static uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MAX;
	int64_t t90 = -14195LL;

	t90 = (x409|(x410+(x411/x412)));

	if (t90 != -9223372036854775165LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x413 = -1;
	int8_t x414 = -13;
	volatile int64_t x415 = INT64_MAX;

	t91 = (x413|(x414+(x415/x416)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x417 = INT64_MIN;
	int8_t x418 = -1;
	int16_t x420 = 11;
	int64_t t92 = -1038665618543LL;

	t92 = (x417|(x418+(x419/x420)));

	if (t92 != -2979LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x421 = 31U;
	volatile int32_t x422 = -261;
	volatile uint16_t x423 = UINT16_MAX;

	t93 = (x421|(x422+(x423/x424)));

	if (t93 != 4799) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x425 = INT16_MIN;
	volatile int64_t x426 = INT64_MAX;
	static uint16_t x428 = UINT16_MAX;

	t94 = (x425|(x426+(x427/x428)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x429 = 41U;
	int8_t x430 = -1;
	static uint16_t x432 = 68U;
	volatile int32_t t95 = -4396844;

	t95 = (x429|(x430+(x431/x432)));

	if (t95 != -31580609) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = INT64_MIN;
	int16_t x434 = -334;
	static uint64_t t96 = 127496037LLU;

	t96 = (x433|(x434+(x435/x436)));

	if (t96 != 18446744073709551282LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x437 = -1;
	int32_t x439 = -6;
	int16_t x440 = INT16_MAX;
	volatile uint32_t t97 = UINT32_MAX;

	t97 = (x437|(x438+(x439/x440)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x442 = -1;
	static int8_t x443 = INT8_MAX;
	int8_t x444 = -1;
	volatile int32_t t98 = 1;

	t98 = (x441|(x442+(x443/x444)));

	if (t98 != -66) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x449 = UINT8_MAX;
	uint16_t x450 = UINT16_MAX;
	volatile int8_t x451 = INT8_MIN;
	volatile int32_t t99 = -5;

	t99 = (x449|(x450+(x451/x452)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

