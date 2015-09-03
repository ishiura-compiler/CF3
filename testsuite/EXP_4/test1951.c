#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 2466976U;
static volatile int64_t t2 = -17700LL;
int64_t x25 = -1LL;
uint64_t x37 = 7918488613964012LLU;
static volatile int8_t x38 = INT8_MAX;
static int8_t x39 = INT8_MAX;
uint16_t x43 = 35U;
uint8_t x44 = UINT8_MAX;
uint32_t x45 = 19U;
volatile int64_t x48 = -13LL;
static int32_t x50 = INT32_MIN;
int8_t x61 = INT8_MIN;
static uint8_t x63 = 3U;
int32_t x65 = -13263846;
int32_t x68 = INT32_MIN;
static int16_t x72 = 17;
int32_t x78 = 3998383;
uint32_t x79 = UINT32_MAX;
uint8_t x82 = 1U;
int32_t t21 = INT32_MAX;
int8_t x94 = INT8_MAX;
static int64_t x96 = INT64_MIN;
static volatile int32_t t23 = -29526;
volatile uint16_t x99 = 3262U;
uint8_t x103 = UINT8_MAX;
int8_t x108 = -1;
int8_t x117 = INT8_MIN;
volatile int64_t x119 = -4113649843LL;
int16_t x126 = 25;
volatile int64_t x127 = -212230LL;
int32_t x135 = INT32_MAX;
uint16_t x144 = 971U;
int32_t x145 = 210;
int32_t x147 = 3235077;
uint16_t x152 = UINT16_MAX;
int8_t x155 = -1;
static int32_t t38 = 10;
static int16_t x160 = -1;
volatile uint8_t x171 = 74U;
static int8_t x173 = INT8_MAX;
volatile uint64_t x174 = UINT64_MAX;
int32_t x187 = INT32_MIN;
int64_t t46 = INT64_MAX;
static uint16_t x189 = 22617U;
static uint32_t x195 = UINT32_MAX;
volatile int8_t x197 = INT8_MIN;
int8_t x199 = INT8_MIN;
int64_t x200 = INT64_MIN;
volatile int8_t x204 = INT8_MIN;
static volatile int32_t x207 = -1;
int8_t x208 = -20;
uint32_t t53 = 164974012U;
uint32_t x218 = 103U;
volatile int64_t t54 = 108389055429242034LL;
volatile int32_t t56 = 1;
static int16_t x240 = -241;
int64_t x245 = INT64_MIN;
volatile int8_t x248 = INT8_MIN;
int64_t t61 = INT64_MIN;
uint8_t x249 = UINT8_MAX;
uint64_t x252 = 1LLU;
int16_t x254 = INT16_MIN;
static volatile int8_t x258 = INT8_MIN;
int32_t x262 = INT32_MAX;
uint32_t x264 = UINT32_MAX;
static uint32_t x276 = UINT32_MAX;
static volatile int32_t t70 = 3;
uint64_t x285 = 67279091228509720LLU;
int32_t x286 = 1;
static volatile int32_t t72 = -9647395;
int32_t x297 = -83672;
int32_t x299 = INT32_MIN;
int16_t x300 = INT16_MAX;
int32_t t74 = -56558850;
static volatile int32_t x301 = INT32_MAX;
static uint64_t x308 = UINT64_MAX;
static uint64_t x313 = UINT64_MAX;
static int8_t x314 = -1;
int16_t x316 = INT16_MAX;
volatile int8_t x322 = -19;
static volatile int64_t t80 = INT64_MAX;
int32_t t81 = 21;
int16_t x339 = 463;
static int8_t x340 = INT8_MIN;
int32_t x342 = INT32_MAX;
static int32_t t87 = 245091;
int8_t x354 = -12;
uint32_t x360 = 83U;
int8_t x362 = INT8_MIN;
int32_t x374 = -795940;
uint32_t t93 = 180187528U;
int64_t x381 = INT64_MIN;
uint64_t x384 = 3564136360696564LLU;
uint64_t x399 = 0LLU;
uint64_t t98 = 2360484761785LLU;
static int64_t x402 = INT64_MIN;
static int32_t t99 = 495256143;


void f0(void) {
	uint8_t x1 = 49U;
	volatile uint8_t x2 = 117U;
	int8_t x4 = -1;
	int32_t t0 = 744463;

	t0 = (x1+(x2==(x3|x4)));

	if (t0 != 49) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -2;
	volatile int64_t x7 = -1LL;
	static int16_t x8 = -3189;
	volatile int32_t t1 = INT32_MIN;

	t1 = (x5+(x6==(x7|x8)));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -496943LL;
	int8_t x10 = INT8_MIN;
	static int16_t x11 = -11478;
	static uint16_t x12 = 0U;

	t2 = (x9+(x10==(x11|x12)));

	if (t2 != -496943LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -10;
	volatile uint64_t x14 = UINT64_MAX;
	uint8_t x15 = 5U;
	static int64_t x16 = -120468364421LL;
	static int32_t t3 = 6282;

	t3 = (x13+(x14==(x15|x16)));

	if (t3 != -10) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static int16_t x18 = -14;
	static uint8_t x19 = 67U;
	static uint8_t x20 = UINT8_MAX;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17+(x18==(x19|x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static uint8_t x22 = UINT8_MAX;
	int32_t x23 = INT32_MIN;
	static uint32_t x24 = 27773U;
	int32_t t5 = 13465135;

	t5 = (x21+(x22==(x23|x24)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 8196LLU;
	uint16_t x27 = 843U;
	volatile int64_t x28 = INT64_MAX;
	volatile int64_t t6 = 9LL;

	t6 = (x25+(x26==(x27|x28)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -155273293;
	volatile int8_t x30 = INT8_MAX;
	volatile int8_t x31 = 2;
	volatile int16_t x32 = INT16_MIN;
	int32_t t7 = 6;

	t7 = (x29+(x30==(x31|x32)));

	if (t7 != -155273293) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -323452;
	int16_t x34 = -1;
	int16_t x35 = -1;
	static uint16_t x36 = 19U;
	static int32_t t8 = -692021;

	t8 = (x33+(x34==(x35|x36)));

	if (t8 != -323451) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x40 = 0U;
	uint64_t t9 = 383LLU;

	t9 = (x37+(x38==(x39|x40)));

	if (t9 != 7918488613964013LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int32_t x42 = -18884594;
	int32_t t10 = 305803568;

	t10 = (x41+(x42==(x43|x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = -1LL;
	static uint64_t x47 = 10800850426302LLU;
	volatile uint32_t t11 = 4420241U;

	t11 = (x45+(x46==(x47|x48)));

	if (t11 != 20U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static uint64_t x51 = 25978476LLU;
	uint64_t x52 = 163481924810LLU;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x49+(x50==(x51|x52)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	int32_t x54 = -1;
	static volatile int64_t x55 = INT64_MIN;
	int32_t x56 = -1;
	int32_t t13 = -571667;

	t13 = (x53+(x54==(x55|x56)));

	if (t13 != 65536) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -39;
	volatile int64_t x58 = 1596LL;
	int32_t x59 = -16135;
	static int32_t x60 = INT32_MIN;
	int32_t t14 = -2009427;

	t14 = (x57+(x58==(x59|x60)));

	if (t14 != -39) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x62 = 6;
	static int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = 89696885;

	t15 = (x61+(x62==(x63|x64)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x66 = UINT8_MAX;
	int64_t x67 = INT64_MIN;
	static int32_t t16 = -25;

	t16 = (x65+(x66==(x67|x68)));

	if (t16 != -13263846) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = UINT32_MAX;
	volatile int32_t t17 = -67;

	t17 = (x69+(x70==(x71|x72)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 31712U;
	static int8_t x74 = 1;
	uint16_t x75 = 798U;
	static volatile int64_t x76 = -88740LL;
	static volatile int32_t t18 = 4139357;

	t18 = (x73+(x74==(x75|x76)));

	if (t18 != 31712) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	int8_t x80 = INT8_MIN;
	static int32_t t19 = -1722;

	t19 = (x77+(x78==(x79|x80)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x83 = 2935766U;
	int32_t x84 = 124169;
	uint64_t t20 = UINT64_MAX;

	t20 = (x81+(x82==(x83|x84)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MAX;
	int64_t x86 = INT64_MIN;
	volatile int8_t x87 = INT8_MIN;
	volatile int16_t x88 = INT16_MIN;

	t21 = (x85+(x86==(x87|x88)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 29;
	int16_t x90 = -826;
	volatile int64_t x91 = INT64_MAX;
	int64_t x92 = -1LL;
	static int32_t t22 = -7929806;

	t22 = (x89+(x90==(x91|x92)));

	if (t22 != 29) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 3U;
	volatile uint16_t x95 = 5U;

	t23 = (x93+(x94==(x95|x96)));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -6;
	volatile int16_t x98 = INT16_MIN;
	volatile int32_t x100 = -1;
	volatile int32_t t24 = -6;

	t24 = (x97+(x98==(x99|x100)));

	if (t24 != -6) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 2;
	int64_t x102 = -1LL;
	volatile int8_t x104 = 33;
	int32_t t25 = -41;

	t25 = (x101+(x102==(x103|x104)));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 86U;
	int8_t x106 = 1;
	int16_t x107 = 1;
	static int32_t t26 = 69005;

	t26 = (x105+(x106==(x107|x108)));

	if (t26 != 86) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int32_t x110 = 0;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = 3U;
	static int32_t t27 = 1;

	t27 = (x109+(x110==(x111|x112)));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 16U;
	int16_t x114 = -1;
	uint16_t x115 = 203U;
	int32_t x116 = 108305704;
	static volatile int32_t t28 = 114;

	t28 = (x113+(x114==(x115|x116)));

	if (t28 != 16) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 0U;
	uint32_t x120 = 130891088U;
	volatile int32_t t29 = 20030644;

	t29 = (x117+(x118==(x119|x120)));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = 1267477LL;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;
	volatile int64_t t30 = 3906482LL;

	t30 = (x121+(x122==(x123|x124)));

	if (t30 != 1267477LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -1;
	uint32_t x128 = 987308934U;
	int32_t t31 = 93;

	t31 = (x125+(x126==(x127|x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	uint16_t x130 = UINT16_MAX;
	static volatile int64_t x131 = INT64_MAX;
	volatile uint8_t x132 = 10U;
	volatile int32_t t32 = -1707176;

	t32 = (x129+(x130==(x131|x132)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MIN;
	uint32_t x134 = 72445U;
	int16_t x136 = -1;
	volatile int32_t t33 = INT32_MIN;

	t33 = (x133+(x134==(x135|x136)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	int16_t x138 = 4710;
	volatile int32_t x139 = INT32_MIN;
	static int16_t x140 = -1;
	int32_t t34 = -97402;

	t34 = (x137+(x138==(x139|x140)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int16_t x142 = -1;
	int32_t x143 = INT32_MIN;
	int32_t t35 = 27118;

	t35 = (x141+(x142==(x143|x144)));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x146 = INT32_MAX;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -3;

	t36 = (x145+(x146==(x147|x148)));

	if (t36 != 210) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	static uint8_t x150 = 1U;
	int16_t x151 = -8418;
	volatile int32_t t37 = 324753;

	t37 = (x149+(x150==(x151|x152)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -1;
	static uint64_t x154 = 26011603001981LLU;
	int64_t x156 = INT64_MAX;

	t38 = (x153+(x154==(x155|x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 3698U;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	volatile uint32_t t39 = 4731518U;

	t39 = (x157+(x158==(x159|x160)));

	if (t39 != 3698U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = -1LL;
	int64_t x163 = INT64_MAX;
	int32_t x164 = INT32_MAX;
	int64_t t40 = INT64_MIN;

	t40 = (x161+(x162==(x163|x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	uint64_t x166 = 865625420614243LLU;
	volatile int32_t x167 = -34060;
	static uint64_t x168 = 271824695334LLU;
	int64_t t41 = INT64_MIN;

	t41 = (x165+(x166==(x167|x168)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 62;
	static int32_t x170 = -3175912;
	int8_t x172 = -24;
	volatile int32_t t42 = -14146;

	t42 = (x169+(x170==(x171|x172)));

	if (t42 != 62) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x175 = -1;
	volatile int32_t x176 = 2122;
	static int32_t t43 = -953493201;

	t43 = (x173+(x174==(x175|x176)));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = INT64_MIN;
	int32_t x178 = -1;
	uint16_t x179 = 1U;
	volatile int64_t x180 = INT64_MIN;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x177+(x178==(x179|x180)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -9LL;
	uint32_t x182 = UINT32_MAX;
	int16_t x183 = -1;
	uint8_t x184 = 1U;
	int64_t t45 = -2469357LL;

	t45 = (x181+(x182==(x183|x184)));

	if (t45 != -8LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int16_t x186 = -1;
	uint16_t x188 = 28U;

	t46 = (x185+(x186==(x187|x188)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	int8_t x191 = INT8_MIN;
	int16_t x192 = -3;
	static volatile int32_t t47 = 46618489;

	t47 = (x189+(x190==(x191|x192)));

	if (t47 != 22617) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	volatile int32_t x194 = -1;
	uint32_t x196 = 14U;
	int32_t t48 = 155037;

	t48 = (x193+(x194==(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = -1;
	static volatile int32_t t49 = -1522297;

	t49 = (x197+(x198==(x199|x200)));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = -1LL;
	uint32_t x203 = 40891536U;
	int32_t t50 = -5480101;

	t50 = (x201+(x202==(x203|x204)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1;
	static int8_t x206 = INT8_MIN;
	int32_t t51 = 208;

	t51 = (x205+(x206==(x207|x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	uint64_t x210 = 0LLU;
	int16_t x211 = INT16_MAX;
	static volatile uint64_t x212 = 5340LLU;
	volatile int32_t t52 = -2;

	t52 = (x209+(x210==(x211|x212)));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 714U;
	int32_t x214 = -1;
	static int8_t x215 = INT8_MIN;
	uint16_t x216 = 1U;

	t53 = (x213+(x214==(x215|x216)));

	if (t53 != 714U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -2350LL;
	static int8_t x219 = -1;
	int32_t x220 = -2549;

	t54 = (x217+(x218==(x219|x220)));

	if (t54 != -2350LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	static int32_t x222 = -1;
	volatile uint8_t x223 = 5U;
	uint64_t x224 = 5LLU;
	static int64_t t55 = INT64_MIN;

	t55 = (x221+(x222==(x223|x224)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	uint32_t x226 = 3037U;
	int32_t x227 = 445262;
	static volatile int64_t x228 = INT64_MAX;

	t56 = (x225+(x226==(x227|x228)));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x230 = INT16_MAX;
	static int8_t x231 = 0;
	static int16_t x232 = INT16_MAX;
	volatile int32_t t57 = 3832127;

	t57 = (x229+(x230==(x231|x232)));

	if (t57 != 65536) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 1834902128U;
	uint64_t x234 = 759917540130736042LLU;
	int32_t x235 = -1;
	int32_t x236 = -1983;
	static uint32_t t58 = 267180U;

	t58 = (x233+(x234==(x235|x236)));

	if (t58 != 1834902128U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 60;
	int16_t x238 = -1;
	static int8_t x239 = -1;
	int32_t t59 = 0;

	t59 = (x237+(x238==(x239|x240)));

	if (t59 != 61) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	static uint16_t x242 = 4U;
	static int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t60 = -20;

	t60 = (x241+(x242==(x243|x244)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x246 = 0LL;
	int16_t x247 = INT16_MAX;

	t61 = (x245+(x246==(x247|x248)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 0U;
	static uint64_t x251 = UINT64_MAX;
	volatile int32_t t62 = 62918;

	t62 = (x249+(x250==(x251|x252)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -77919432740815750LL;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 141U;
	volatile int64_t t63 = -905LL;

	t63 = (x253+(x254==(x255|x256)));

	if (t63 != -77919432740815750LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x259 = -1;
	static int64_t x260 = INT64_MIN;
	static uint32_t t64 = UINT32_MAX;

	t64 = (x257+(x258==(x259|x260)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -28;
	static int8_t x263 = 1;
	volatile int32_t t65 = -103;

	t65 = (x261+(x262==(x263|x264)));

	if (t65 != -28) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static int16_t x266 = -5172;
	static uint8_t x267 = 0U;
	uint32_t x268 = UINT32_MAX;
	int32_t t66 = INT32_MIN;

	t66 = (x265+(x266==(x267|x268)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x270 = INT32_MIN;
	int8_t x271 = 2;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 24519157;

	t67 = (x269+(x270==(x271|x272)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MAX;
	volatile int32_t x275 = INT32_MAX;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x273+(x274==(x275|x276)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	int64_t x278 = INT64_MIN;
	static volatile int32_t x279 = INT32_MIN;
	volatile uint32_t x280 = UINT32_MAX;
	static int64_t t69 = INT64_MAX;

	t69 = (x277+(x278==(x279|x280)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 15644U;
	int8_t x282 = INT8_MIN;
	static volatile int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MAX;

	t70 = (x281+(x282==(x283|x284)));

	if (t70 != 15644) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x287 = 1LL;
	int8_t x288 = -1;
	uint64_t t71 = 48331909076867LLU;

	t71 = (x285+(x286==(x287|x288)));

	if (t71 != 67279091228509720LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static uint64_t x290 = 3378LLU;
	int8_t x291 = INT8_MIN;
	volatile uint64_t x292 = 53LLU;

	t72 = (x289+(x290==(x291|x292)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int16_t x294 = -1;
	volatile int16_t x295 = -1;
	int16_t x296 = -1;
	volatile int32_t t73 = -4004556;

	t73 = (x293+(x294==(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = 21849480U;

	t74 = (x297+(x298==(x299|x300)));

	if (t74 != -83672) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = 7U;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MIN;
	static int32_t t75 = INT32_MAX;

	t75 = (x301+(x302==(x303|x304)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	uint64_t x306 = 2595619174670695LLU;
	uint8_t x307 = 15U;
	int32_t t76 = -2;

	t76 = (x305+(x306==(x307|x308)));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 1LL;
	static uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	static int8_t x312 = -1;
	int64_t t77 = 6972446647225875LL;

	t77 = (x309+(x310==(x311|x312)));

	if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x315 = UINT64_MAX;
	static volatile uint64_t t78 = 725873932655629376LLU;

	t78 = (x313+(x314==(x315|x316)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -100;
	static volatile int64_t x318 = -1LL;
	uint64_t x319 = UINT64_MAX;
	volatile int8_t x320 = 0;
	int32_t t79 = 1;

	t79 = (x317+(x318==(x319|x320)));

	if (t79 != -99) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	static int16_t x323 = INT16_MIN;
	static volatile uint8_t x324 = UINT8_MAX;

	t80 = (x321+(x322==(x323|x324)));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 105U;
	static int64_t x326 = INT64_MAX;
	int16_t x327 = 5;
	int16_t x328 = INT16_MAX;

	t81 = (x325+(x326==(x327|x328)));

	if (t81 != 105) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 860LLU;
	uint16_t x330 = 940U;
	uint32_t x331 = 121610U;
	int64_t x332 = INT64_MAX;
	volatile uint64_t t82 = 92452493519680LLU;

	t82 = (x329+(x330==(x331|x332)));

	if (t82 != 860LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = 119U;
	static int16_t x334 = -667;
	int32_t x335 = 43;
	static int32_t x336 = INT32_MAX;
	volatile int32_t t83 = -88406;

	t83 = (x333+(x334==(x335|x336)));

	if (t83 != 119) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 157422875;
	static int32_t x338 = INT32_MIN;
	volatile int32_t t84 = -19;

	t84 = (x337+(x338==(x339|x340)));

	if (t84 != 157422875) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int16_t x343 = -1;
	int16_t x344 = 601;
	static int32_t t85 = 402;

	t85 = (x341+(x342==(x343|x344)));

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 240744422653199LLU;
	volatile int64_t x346 = 1179678565LL;
	volatile int16_t x347 = -57;
	uint32_t x348 = UINT32_MAX;
	volatile uint64_t t86 = 73397631LLU;

	t86 = (x345+(x346==(x347|x348)));

	if (t86 != 240744422653199LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = 7700871;
	volatile uint16_t x350 = 28841U;
	int32_t x351 = INT32_MIN;
	static int32_t x352 = INT32_MIN;

	t87 = (x349+(x350==(x351|x352)));

	if (t87 != 7700871) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int32_t x355 = INT32_MAX;
	uint32_t x356 = 0U;
	volatile int64_t t88 = INT64_MAX;

	t88 = (x353+(x354==(x355|x356)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -65341;
	volatile uint64_t x358 = UINT64_MAX;
	static uint64_t x359 = UINT64_MAX;
	int32_t t89 = -6243;

	t89 = (x357+(x358==(x359|x360)));

	if (t89 != -65340) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x361 = 14U;
	uint8_t x363 = 7U;
	uint8_t x364 = 20U;
	int32_t t90 = 2;

	t90 = (x361+(x362==(x363|x364)));

	if (t90 != 14) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -1LL;
	int32_t x366 = 0;
	static int32_t x367 = INT32_MAX;
	uint64_t x368 = 82221493315172585LLU;
	volatile int64_t t91 = 250154253981589002LL;

	t91 = (x365+(x366==(x367|x368)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x373 = INT16_MIN;
	volatile int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	volatile int32_t t92 = -263750915;

	t92 = (x373+(x374==(x375|x376)));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = 3296638U;
	uint8_t x378 = 47U;
	int32_t x379 = 8;
	static int64_t x380 = INT64_MAX;

	t93 = (x377+(x378==(x379|x380)));

	if (t93 != 3296638U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x382 = INT64_MAX;
	int16_t x383 = -1;
	volatile int64_t t94 = INT64_MIN;

	t94 = (x381+(x382==(x383|x384)));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile int8_t x388 = 24;
	int32_t t95 = 2144;

	t95 = (x385+(x386==(x387|x388)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = -1;
	int64_t x390 = INT64_MIN;
	volatile int16_t x391 = -1;
	int8_t x392 = -27;
	volatile int32_t t96 = 341698;

	t96 = (x389+(x390==(x391|x392)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x393 = 48U;
	uint32_t x394 = 511U;
	static uint16_t x395 = 2578U;
	int64_t x396 = 2398696LL;
	static uint32_t t97 = 0U;

	t97 = (x393+(x394==(x395|x396)));

	if (t97 != 48U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x397 = 7824959840923LLU;
	uint32_t x398 = 1797U;
	int32_t x400 = 181769903;

	t98 = (x397+(x398==(x399|x400)));

	if (t98 != 7824959840923LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = -41;
	volatile uint32_t x403 = UINT32_MAX;
	int16_t x404 = -1;

	t99 = (x401+(x402==(x403|x404)));

	if (t99 != -41) { NG(); } else { ; }
	
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

