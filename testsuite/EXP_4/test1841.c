#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 29U;
volatile int16_t x7 = INT16_MIN;
uint8_t x12 = 2U;
volatile int16_t x18 = INT16_MIN;
volatile int32_t t4 = -381587;
int16_t x24 = INT16_MAX;
static volatile int32_t t5 = -787;
uint32_t x27 = UINT32_MAX;
static int64_t x28 = 466288856544663LL;
static int64_t x30 = INT64_MAX;
volatile int32_t x32 = INT32_MAX;
uint8_t x34 = 4U;
volatile int32_t t8 = 148268;
volatile int32_t t9 = 0;
int8_t x41 = -1;
volatile uint64_t x43 = 1197774604826906682LLU;
int32_t t12 = -535495021;
int64_t x56 = -1LL;
volatile int8_t x59 = INT8_MIN;
uint64_t x63 = 57362LLU;
volatile int16_t x64 = INT16_MIN;
volatile uint64_t x65 = UINT64_MAX;
volatile int64_t x72 = INT64_MIN;
static uint32_t x79 = UINT32_MAX;
int32_t x80 = 0;
uint64_t x89 = 6792305334LLU;
int64_t x90 = INT64_MAX;
int64_t x91 = INT64_MAX;
volatile int8_t x93 = 0;
uint64_t x100 = 2576232445744673627LLU;
static int16_t x103 = 1;
int64_t x107 = INT64_MAX;
volatile int32_t x110 = INT32_MIN;
uint32_t x111 = 9196137U;
volatile uint16_t x114 = 15382U;
int16_t x119 = INT16_MIN;
int32_t x131 = INT32_MIN;
static volatile uint8_t x132 = UINT8_MAX;
static uint8_t x135 = 13U;
int32_t x143 = INT32_MAX;
volatile int32_t t35 = 62;
int64_t x147 = -1LL;
int16_t x150 = -1;
static int32_t t37 = 4263587;
int64_t x159 = INT64_MIN;
volatile int16_t x160 = 1227;
int16_t x171 = -1;
int32_t t42 = -645143470;
volatile int64_t x175 = -1LL;
uint64_t x176 = 2027LLU;
int32_t x180 = 65606762;
uint64_t x183 = 210226275169799319LLU;
int32_t t45 = -17146;
volatile int32_t t48 = 1;
volatile uint64_t x200 = 117672810LLU;
int16_t x202 = -1;
static uint64_t x204 = 50259957459LLU;
uint16_t x207 = 14692U;
uint8_t x213 = UINT8_MAX;
static volatile uint64_t x214 = UINT64_MAX;
int32_t x223 = -702959;
static int16_t x224 = INT16_MIN;
static int32_t x225 = -58855815;
int8_t x226 = INT8_MAX;
static uint16_t x236 = 13567U;
volatile int16_t x243 = INT16_MIN;
int8_t x244 = -1;
int32_t x253 = -1;
int8_t x255 = -13;
int8_t x260 = -1;
int16_t x262 = INT16_MIN;
int16_t x271 = INT16_MIN;
volatile int8_t x274 = INT8_MIN;
static int8_t x275 = -1;
volatile int64_t x276 = INT64_MIN;
int32_t t69 = 1;
static uint8_t x281 = 34U;
int8_t x288 = -16;
int16_t x290 = -3767;
int16_t x292 = -9630;
int32_t t73 = 881011612;
volatile uint8_t x297 = 3U;
volatile uint64_t x304 = 76335082312200426LLU;
volatile int32_t t75 = -22780;
int8_t x307 = -1;
volatile int32_t t76 = -7;
int32_t x314 = 1885339;
uint32_t x326 = 2240U;
static volatile int16_t x330 = INT16_MIN;
volatile uint32_t x335 = 1382539944U;
int32_t t84 = -742157636;
volatile int64_t x354 = INT64_MAX;
static int32_t t89 = 372083;
int64_t x365 = 40LL;
uint64_t x376 = 200574406347LLU;
int8_t x377 = -34;
uint16_t x379 = 1U;
static int16_t x383 = 484;
static volatile int32_t t95 = -582;
static uint8_t x390 = 6U;
int32_t x391 = -382;
static volatile int32_t x393 = INT32_MIN;
volatile int64_t x400 = INT64_MAX;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	static int16_t x3 = INT16_MAX;
	int8_t x4 = -1;
	volatile int32_t t0 = -454;

	t0 = (x1==(x2|(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint64_t x6 = 19772630LLU;
	int64_t x8 = 117793LL;
	volatile int32_t t1 = -639728;

	t1 = (x5==(x6|(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int16_t x10 = -1;
	int64_t x11 = INT64_MAX;
	int32_t t2 = 6;

	t2 = (x9==(x10|(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint32_t x14 = 573652U;
	volatile int16_t x15 = INT16_MIN;
	volatile int64_t x16 = -121843LL;
	int32_t t3 = -2554;

	t3 = (x13==(x14|(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x19 = INT16_MIN;
	int16_t x20 = 5;

	t4 = (x17==(x18|(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MAX;
	static uint16_t x22 = 1U;
	uint32_t x23 = UINT32_MAX;

	t5 = (x21==(x22|(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 3269U;
	static int8_t x26 = INT8_MAX;
	volatile int32_t t6 = 3;

	t6 = (x25==(x26|(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 55;
	uint8_t x31 = 0U;
	int32_t t7 = 50;

	t7 = (x29==(x30|(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	int64_t x35 = -253073445573154065LL;
	int64_t x36 = -23LL;

	t8 = (x33==(x34|(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 14U;
	volatile int8_t x38 = INT8_MIN;
	volatile uint64_t x39 = 50912820069859LLU;
	int8_t x40 = 38;

	t9 = (x37==(x38|(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = INT16_MIN;
	static volatile int64_t x44 = 6028LL;
	volatile int32_t t10 = 64765961;

	t10 = (x41==(x42|(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 0U;
	uint32_t x46 = 4U;
	int8_t x47 = -1;
	static int64_t x48 = 413436501LL;
	static volatile int32_t t11 = 56;

	t11 = (x45==(x46|(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = -50;
	volatile int8_t x51 = INT8_MIN;
	int64_t x52 = -117774416528LL;

	t12 = (x49==(x50|(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1856LL;
	uint32_t x54 = UINT32_MAX;
	volatile int16_t x55 = INT16_MIN;
	volatile int32_t t13 = -54752424;

	t13 = (x53==(x54|(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -3235304LL;
	int8_t x58 = -1;
	int8_t x60 = 0;
	int32_t t14 = -7524500;

	t14 = (x57==(x58|(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 1435U;
	static int32_t x62 = INT32_MIN;
	int32_t t15 = -95541550;

	t15 = (x61==(x62|(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = INT32_MIN;
	uint64_t x67 = UINT64_MAX;
	static volatile int16_t x68 = INT16_MIN;
	static int32_t t16 = -1717540;

	t16 = (x65==(x66|(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MIN;
	int64_t x70 = 9LL;
	static int8_t x71 = -1;
	int32_t t17 = -53464;

	t17 = (x69==(x70|(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 948683LL;
	volatile int32_t x74 = INT32_MIN;
	uint32_t x75 = 1739604U;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 5;

	t18 = (x73==(x74|(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int64_t x78 = INT64_MAX;
	int32_t t19 = -269;

	t19 = (x77==(x78|(x79&x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	int32_t x82 = INT32_MAX;
	static uint8_t x83 = UINT8_MAX;
	volatile int32_t x84 = INT32_MIN;
	int32_t t20 = -1;

	t20 = (x81==(x82|(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = INT32_MIN;
	static int16_t x87 = -1;
	int16_t x88 = 16171;
	volatile int32_t t21 = -502;

	t21 = (x85==(x86|(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x92 = -1;
	static int32_t t22 = -41;

	t22 = (x89==(x90|(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 12103313;

	t23 = (x93==(x94|(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = INT16_MIN;
	uint32_t x98 = 240979613U;
	volatile int64_t x99 = INT64_MAX;
	volatile int32_t t24 = -1057094;

	t24 = (x97==(x98|(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = 125;
	int32_t x102 = INT32_MAX;
	int32_t x104 = INT32_MAX;
	static int32_t t25 = -3;

	t25 = (x101==(x102|(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int16_t x106 = 15;
	volatile uint8_t x108 = 3U;
	int32_t t26 = 7572737;

	t26 = (x105==(x106|(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 725899641188782809LLU;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 33;

	t27 = (x109==(x110|(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint32_t x115 = 28U;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 281739;

	t28 = (x113==(x114|(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = UINT16_MAX;
	int16_t x118 = INT16_MIN;
	int64_t x120 = -9838009615LL;
	static int32_t t29 = 43;

	t29 = (x117==(x118|(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x121 = -1;
	volatile int8_t x122 = -16;
	volatile uint64_t x123 = UINT64_MAX;
	int8_t x124 = -1;
	int32_t t30 = 43314;

	t30 = (x121==(x122|(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	uint16_t x126 = UINT16_MAX;
	int16_t x127 = 55;
	static volatile uint8_t x128 = UINT8_MAX;
	int32_t t31 = 118346;

	t31 = (x125==(x126|(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	static uint8_t x130 = 0U;
	static volatile int32_t t32 = -36;

	t32 = (x129==(x130|(x131&x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x134 = 1U;
	uint64_t x136 = UINT64_MAX;
	int32_t t33 = 141;

	t33 = (x133==(x134|(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 717LLU;
	uint16_t x138 = UINT16_MAX;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 3770;

	t34 = (x137==(x138|(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MIN;
	volatile int64_t x144 = INT64_MIN;

	t35 = (x141==(x142|(x143&x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -27995360038LL;
	static int16_t x146 = INT16_MIN;
	int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = -1;

	t36 = (x145==(x146|(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MAX;
	uint64_t x151 = 13608LLU;
	int8_t x152 = INT8_MIN;

	t37 = (x149==(x150|(x151&x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 16049668LLU;
	int64_t x154 = INT64_MAX;
	uint32_t x155 = 1835U;
	volatile int8_t x156 = -30;
	volatile int32_t t38 = -23252589;

	t38 = (x153==(x154|(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MIN;
	volatile int32_t t39 = 247834640;

	t39 = (x157==(x158|(x159&x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 802405;
	static int8_t x162 = INT8_MIN;
	static uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 48;

	t40 = (x161==(x162|(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 4116130779381256463LLU;
	int64_t x166 = -322424677LL;
	static uint16_t x167 = UINT16_MAX;
	int16_t x168 = -1;
	int32_t t41 = -50;

	t41 = (x165==(x166|(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 7U;
	int32_t x170 = -60591441;
	uint16_t x172 = 361U;

	t42 = (x169==(x170|(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 1;
	volatile int16_t x174 = -3910;
	volatile int32_t t43 = -101;

	t43 = (x173==(x174|(x175&x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 2088348;
	volatile uint16_t x178 = 11U;
	volatile int64_t x179 = -1LL;
	int32_t t44 = -1629249;

	t44 = (x177==(x178|(x179&x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 105U;
	int16_t x182 = 30;
	uint64_t x184 = 36118618579LLU;

	t45 = (x181==(x182|(x183&x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = 7606LLU;
	static int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = 1;

	t46 = (x185==(x186|(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	volatile uint16_t x190 = 13463U;
	int8_t x191 = 6;
	static volatile uint64_t x192 = UINT64_MAX;
	int32_t t47 = 1324;

	t47 = (x189==(x190|(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -14;
	int64_t x194 = 119944LL;
	int32_t x195 = -1;
	volatile int16_t x196 = -21;

	t48 = (x193==(x194|(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static int8_t x198 = INT8_MAX;
	volatile uint8_t x199 = UINT8_MAX;
	static volatile int32_t t49 = 3395057;

	t49 = (x197==(x198|(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 5U;
	static int16_t x203 = -1;
	volatile int32_t t50 = -164;

	t50 = (x201==(x202|(x203&x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 128447716;

	t51 = (x205==(x206|(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -1;
	int16_t x210 = -19;
	int8_t x211 = -1;
	int16_t x212 = 3;
	int32_t t52 = -52;

	t52 = (x209==(x210|(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x215 = INT64_MIN;
	int8_t x216 = -5;
	static int32_t t53 = 58;

	t53 = (x213==(x214|(x215&x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint32_t x218 = UINT32_MAX;
	volatile int32_t x219 = INT32_MIN;
	static volatile int64_t x220 = INT64_MAX;
	static volatile int32_t t54 = -32950337;

	t54 = (x217==(x218|(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	int32_t t55 = 31875;

	t55 = (x221==(x222|(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x227 = 4608478852918LLU;
	static uint64_t x228 = 49600383LLU;
	volatile int32_t t56 = -84900;

	t56 = (x225==(x226|(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x229 = UINT8_MAX;
	static volatile int8_t x230 = -3;
	uint16_t x231 = 4U;
	int16_t x232 = 3485;
	volatile int32_t t57 = -15;

	t57 = (x229==(x230|(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -646907240;
	volatile uint64_t x234 = 475830159789338850LLU;
	int64_t x235 = 291220856LL;
	volatile int32_t t58 = 0;

	t58 = (x233==(x234|(x235&x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 1U;
	int8_t x238 = INT8_MAX;
	volatile uint16_t x239 = UINT16_MAX;
	uint16_t x240 = 27U;
	int32_t t59 = 222513810;

	t59 = (x237==(x238|(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	static volatile int32_t t60 = 196291555;

	t60 = (x241==(x242|(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 3308857481305LLU;
	int8_t x246 = -1;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MIN;
	static volatile int32_t t61 = 1916869;

	t61 = (x245==(x246|(x247&x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	uint64_t x250 = 23182799997LLU;
	static volatile uint64_t x251 = 2249763365LLU;
	volatile int8_t x252 = 2;
	volatile int32_t t62 = 186123;

	t62 = (x249==(x250|(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MIN;
	volatile uint16_t x256 = 22U;
	static int32_t t63 = -165;

	t63 = (x253==(x254|(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	int16_t x258 = INT16_MAX;
	uint64_t x259 = 121LLU;
	static volatile int32_t t64 = 313;

	t64 = (x257==(x258|(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 2U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = -2085099796998LL;
	volatile int32_t t65 = -287;

	t65 = (x261==(x262|(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	int64_t x266 = -1433LL;
	int32_t x267 = 586791700;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 0;

	t66 = (x265==(x266|(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MAX;
	uint32_t x270 = 3U;
	int16_t x272 = -1;
	volatile int32_t t67 = -3;

	t67 = (x269==(x270|(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 736168564754378397LLU;
	volatile int32_t t68 = 15635955;

	t68 = (x273==(x274|(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1275383169398807LL;
	int64_t x278 = INT64_MAX;
	volatile int16_t x279 = 40;
	volatile uint64_t x280 = 1441208958283LLU;

	t69 = (x277==(x278|(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = UINT64_MAX;
	volatile uint16_t x283 = 21049U;
	int16_t x284 = INT16_MIN;
	static int32_t t70 = -273354;

	t70 = (x281==(x282|(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 1672228031921LLU;
	uint8_t x286 = 123U;
	int64_t x287 = INT64_MIN;
	int32_t t71 = 1065162761;

	t71 = (x285==(x286|(x287&x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = 2019;
	uint64_t x291 = 28346870LLU;
	int32_t t72 = -2314;

	t72 = (x289==(x290|(x291&x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -6;
	int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MAX;
	int8_t x296 = 12;

	t73 = (x293==(x294|(x295&x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = 48;
	static int32_t x299 = -29581574;
	static int64_t x300 = -1LL;
	volatile int32_t t74 = -256689834;

	t74 = (x297==(x298|(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 15U;
	uint8_t x302 = 53U;
	volatile uint32_t x303 = UINT32_MAX;

	t75 = (x301==(x302|(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = -10;
	uint8_t x308 = 12U;

	t76 = (x305==(x306|(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	int32_t x310 = 63;
	uint8_t x311 = 6U;
	static int8_t x312 = 14;
	static int32_t t77 = 1313448;

	t77 = (x309==(x310|(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -59217LL;
	int32_t x315 = INT32_MAX;
	volatile int64_t x316 = INT64_MIN;
	static int32_t t78 = -6864383;

	t78 = (x313==(x314|(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int8_t x318 = INT8_MIN;
	volatile uint32_t x319 = 242U;
	static int32_t x320 = -1;
	int32_t t79 = -4219720;

	t79 = (x317==(x318|(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	uint8_t x322 = 0U;
	static int16_t x323 = INT16_MAX;
	volatile uint32_t x324 = UINT32_MAX;
	int32_t t80 = 103522;

	t80 = (x321==(x322|(x323&x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -3;
	int32_t x327 = INT32_MAX;
	volatile int64_t x328 = INT64_MIN;
	int32_t t81 = -82370688;

	t81 = (x325==(x326|(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	volatile int16_t x331 = 1847;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = 422;

	t82 = (x329==(x330|(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 4U;
	int8_t x334 = INT8_MIN;
	int64_t x336 = 122799885959LL;
	int32_t t83 = -155173;

	t83 = (x333==(x334|(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	int32_t x338 = -8;
	uint16_t x339 = 138U;
	static volatile int16_t x340 = INT16_MAX;

	t84 = (x337==(x338|(x339&x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x341 = INT64_MIN;
	int64_t x342 = -1LL;
	uint16_t x343 = 7U;
	volatile uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = 371;

	t85 = (x341==(x342|(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	volatile uint32_t x346 = 1U;
	static int8_t x347 = INT8_MIN;
	uint64_t x348 = 1221178445170587454LLU;
	int32_t t86 = 17;

	t86 = (x345==(x346|(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 28U;
	volatile int8_t x350 = -1;
	uint32_t x351 = 50U;
	static int64_t x352 = INT64_MAX;
	volatile int32_t t87 = -52547;

	t87 = (x349==(x350|(x351&x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 2312708209LLU;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = -1;
	int32_t t88 = 8105416;

	t88 = (x353==(x354|(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	int8_t x358 = -1;
	int16_t x359 = 1;
	int8_t x360 = -4;

	t89 = (x357==(x358|(x359&x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 178154332U;
	static uint64_t x362 = UINT64_MAX;
	int32_t x363 = INT32_MIN;
	volatile uint64_t x364 = 88LLU;
	int32_t t90 = -566310;

	t90 = (x361==(x362|(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x366 = INT32_MIN;
	volatile int16_t x367 = 1658;
	static int16_t x368 = 7;
	volatile int32_t t91 = 199362709;

	t91 = (x365==(x366|(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -3;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = 0;
	static int32_t x372 = 253614921;
	static volatile int32_t t92 = 193;

	t92 = (x369==(x370|(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = INT32_MAX;
	uint16_t x374 = 1U;
	int16_t x375 = INT16_MAX;
	static volatile int32_t t93 = 1339;

	t93 = (x373==(x374|(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 1595379U;
	static int32_t x380 = -1;
	int32_t t94 = -12;

	t94 = (x377==(x378|(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x381 = 6U;
	uint16_t x382 = 1U;
	uint8_t x384 = 5U;

	t95 = (x381==(x382|(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 1;
	int64_t x386 = INT64_MIN;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 2;

	t96 = (x385==(x386|(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t97 = -31625;

	t97 = (x389==(x390|(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = -60;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t98 = 684538;

	t98 = (x393==(x394|(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	volatile int8_t x398 = INT8_MIN;
	volatile int16_t x399 = INT16_MAX;
	volatile int32_t t99 = 301370;

	t99 = (x397==(x398|(x399&x400)));

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

