#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -1LL;
int64_t x4 = -1LL;
volatile int64_t x18 = INT64_MAX;
static int16_t x19 = -1;
volatile int16_t x20 = -1;
volatile uint32_t x21 = 11516U;
int16_t x22 = INT16_MAX;
static uint32_t t5 = 135912022U;
int32_t x28 = 232974340;
int64_t x32 = 523291535406277LL;
int64_t t7 = -14831843201730246LL;
int16_t x37 = INT16_MIN;
uint64_t x40 = UINT64_MAX;
volatile uint64_t t8 = 25651461LLU;
volatile uint32_t x45 = 254U;
volatile int8_t x58 = -1;
static int64_t x63 = INT64_MIN;
int64_t t14 = 34958185770902LL;
volatile uint32_t x70 = 1767533982U;
static int32_t t18 = -14555;
static int8_t x84 = -19;
int32_t x86 = INT32_MIN;
static int32_t x90 = -1;
uint64_t x91 = UINT64_MAX;
uint32_t x95 = 4266U;
volatile uint64_t t23 = 18182337795555771LLU;
volatile int8_t x106 = -11;
static int64_t x107 = INT64_MIN;
int32_t x109 = -1;
volatile int16_t x112 = 7815;
int32_t x115 = INT32_MIN;
volatile uint64_t t26 = 7886761LLU;
uint16_t x118 = 38U;
uint16_t x133 = 62U;
int16_t x135 = INT16_MIN;
static int8_t x136 = 0;
int8_t x137 = INT8_MIN;
static uint32_t t32 = 1816564U;
static int32_t x142 = -12;
uint32_t x146 = 1249820121U;
volatile int16_t x149 = -1;
volatile int16_t x156 = INT16_MAX;
int8_t x160 = -7;
volatile uint64_t x162 = UINT64_MAX;
uint64_t x163 = UINT64_MAX;
static uint8_t x164 = 0U;
uint16_t x188 = 12U;
volatile int32_t t43 = -85255721;
int32_t x203 = 263934;
volatile uint8_t x213 = UINT8_MAX;
static int16_t x219 = INT16_MIN;
int64_t x232 = -3518LL;
static uint8_t x240 = UINT8_MAX;
uint32_t x244 = 380637U;
static int32_t x251 = 30;
volatile int64_t x258 = -1LL;
int8_t x260 = 51;
uint64_t x265 = 166LLU;
int8_t x271 = INT8_MIN;
int16_t x273 = -1;
volatile uint8_t x275 = UINT8_MAX;
int32_t t61 = 725982;
uint16_t x292 = 8453U;
uint64_t t67 = 31188334011LLU;
volatile int64_t x306 = INT64_MIN;
static volatile int64_t t69 = -1317LL;
volatile uint32_t x320 = UINT32_MAX;
int16_t x323 = INT16_MAX;
volatile uint32_t t73 = 1342852U;
volatile uint16_t x326 = 8098U;
static uint8_t x327 = 19U;
int16_t x333 = INT16_MAX;
volatile uint32_t t76 = 25871279U;
volatile int64_t x342 = INT64_MIN;
uint32_t x346 = UINT32_MAX;
static int32_t x347 = INT32_MIN;
int64_t x357 = INT64_MIN;
int8_t x360 = -22;
volatile int64_t t81 = 3525018877LL;
int32_t x366 = INT32_MAX;
volatile int64_t t82 = 379LL;
uint16_t x374 = 3U;
static int32_t x378 = 111329;
uint64_t x379 = UINT64_MAX;
uint32_t t85 = 29828255U;
int32_t x386 = INT32_MIN;
volatile int64_t t87 = 131245611148134LL;
int16_t x395 = INT16_MIN;
int64_t x406 = 19160769271LL;
volatile int64_t t91 = INT64_MIN;
volatile uint8_t x416 = 24U;
int32_t x418 = INT32_MIN;
volatile uint64_t x419 = UINT64_MAX;
int64_t x421 = -2LL;
static int8_t x425 = INT8_MAX;
uint8_t x429 = 2U;
int64_t x430 = -64302984128765723LL;
uint16_t x432 = 110U;
volatile uint64_t x433 = 817568078837643LLU;
uint32_t x436 = 63382U;
static int16_t x437 = 0;
volatile int64_t t98 = 312LL;


void f0(void) {
	int16_t x2 = 14;
	int32_t x3 = INT32_MIN;
	static volatile int64_t t0 = 30723050792351545LL;

	t0 = (x1&(x2%(x3+x4)));

	if (t0 != 14LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x6 = 97122637U;
	uint32_t x7 = 3U;
	static int32_t x8 = 1;
	static uint32_t t1 = 32588514U;

	t1 = (x5&(x6%(x7+x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1U;
	int16_t x10 = 31;
	int32_t x11 = -1;
	int8_t x12 = -29;
	static int32_t t2 = -249688715;

	t2 = (x9&(x10%(x11+x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = 473;
	int16_t x15 = 7;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 30887046;

	t3 = (x13&(x14%(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int64_t t4 = -96859537129892LL;

	t4 = (x17&(x18%(x19+x20)));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = -49;
	uint16_t x24 = UINT16_MAX;

	t5 = (x21&(x22%(x23+x24)));

	if (t5 != 11516U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 835U;
	static uint16_t x26 = 1461U;
	uint8_t x27 = 5U;
	int32_t t6 = 10233;

	t6 = (x25&(x26%(x27+x28)));

	if (t6 != 257) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	volatile int16_t x30 = INT16_MAX;
	int16_t x31 = INT16_MAX;

	t7 = (x29&(x30%(x31+x32)));

	if (t7 != 32640LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x38 = -1;
	volatile int16_t x39 = INT16_MAX;

	t8 = (x37&(x38%(x39+x40)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 0U;
	static int64_t x42 = -6479LL;
	int8_t x43 = -1;
	static int8_t x44 = 3;
	volatile int64_t t9 = 2409837157354567056LL;

	t9 = (x41&(x42%(x43+x44)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = -39784529318978997LL;
	uint8_t x47 = 33U;
	volatile int32_t x48 = INT32_MIN;
	volatile int64_t t10 = -2058665LL;

	t10 = (x45&(x46%(x47+x48)));

	if (t10 != 72LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	static int8_t x50 = INT8_MIN;
	int8_t x51 = 0;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t11 = 183291315U;

	t11 = (x49&(x50%(x51+x52)));

	if (t11 != 4294967168U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MAX;
	static uint32_t x54 = 48U;
	static int32_t x55 = -1;
	int8_t x56 = INT8_MAX;
	static uint32_t t12 = 88648178U;

	t12 = (x53&(x54%(x55+x56)));

	if (t12 != 48U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = -1;
	int16_t x59 = INT16_MAX;
	int16_t x60 = -1;
	volatile int32_t t13 = -217647;

	t13 = (x57&(x58%(x59+x60)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MIN;
	int8_t x64 = INT8_MAX;

	t14 = (x61&(x62%(x63+x64)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = 1U;
	static uint16_t x66 = UINT16_MAX;
	uint8_t x67 = 20U;
	int64_t x68 = 12773044190170155LL;
	static int64_t t15 = 2LL;

	t15 = (x65&(x66%(x67+x68)));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x71 = 19202U;
	int64_t x72 = INT64_MIN;
	volatile int64_t t16 = -21LL;

	t16 = (x69&(x70%(x71+x72)));

	if (t16 != 1767505920LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -26567;
	uint8_t x74 = UINT8_MAX;
	volatile uint32_t x75 = UINT32_MAX;
	int16_t x76 = -1;
	uint32_t t17 = 43584U;

	t17 = (x73&(x74%(x75+x76)));

	if (t17 != 57U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	volatile uint8_t x79 = 2U;
	int16_t x80 = -16;

	t18 = (x77&(x78%(x79+x80)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	volatile int8_t x82 = 0;
	static int8_t x83 = 0;
	volatile int32_t t19 = -29348330;

	t19 = (x81&(x82%(x83+x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -51;
	uint16_t x87 = UINT16_MAX;
	int16_t x88 = INT16_MIN;
	static int32_t t20 = 24589872;

	t20 = (x85&(x86%(x87+x88)));

	if (t20 != -52) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	int32_t x92 = INT32_MIN;
	volatile uint64_t t21 = 138LLU;

	t21 = (x89&(x90%(x91+x92)));

	if (t21 != 2147483648LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = 3507779;
	uint64_t x94 = UINT64_MAX;
	int64_t x96 = -1LL;
	volatile uint64_t t22 = 39405577LLU;

	t22 = (x93&(x94%(x95+x96)));

	if (t22 != 64LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	int64_t x98 = INT64_MAX;
	int32_t x99 = -1;
	uint64_t x100 = 15176610856197LLU;

	t23 = (x97&(x98%(x99+x100)));

	if (t23 != 631934243LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int32_t x108 = 0;
	int64_t t24 = INT64_MIN;

	t24 = (x105&(x106%(x107+x108)));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x110 = INT8_MIN;
	uint64_t x111 = 1943804LLU;
	uint64_t t25 = 1945LLU;

	t25 = (x109&(x110%(x111+x112)));

	if (t25 != 12183LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 8;
	static int16_t x114 = -1;
	volatile uint64_t x116 = 1099516980323727LLU;

	t26 = (x113&(x114%(x115+x116)));

	if (t26 != 8LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = INT16_MAX;
	int32_t x119 = -41721477;
	int8_t x120 = 2;
	volatile int32_t t27 = 42812;

	t27 = (x117&(x118%(x119+x120)));

	if (t27 != 38) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -1;
	int16_t x122 = -1;
	int16_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t28 = 2449;

	t28 = (x121&(x122%(x123+x124)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x125 = 521037U;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	volatile int16_t x128 = INT16_MIN;
	static int64_t t29 = 3LL;

	t29 = (x125&(x126%(x127+x128)));

	if (t29 != 521032LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	volatile uint16_t x130 = 7970U;
	int64_t x131 = -1LL;
	uint8_t x132 = UINT8_MAX;
	volatile int64_t t30 = 105LL;

	t30 = (x129&(x130%(x131+x132)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x134 = 1633596U;
	volatile uint32_t t31 = 392870061U;

	t31 = (x133&(x134%(x135+x136)));

	if (t31 != 60U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = INT8_MAX;
	volatile int32_t x139 = -288214;
	uint32_t x140 = 994524567U;

	t32 = (x137&(x138%(x139+x140)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -385663025;
	static int16_t x143 = -1;
	uint8_t x144 = 0U;
	int32_t t33 = -15534;

	t33 = (x141&(x142%(x143+x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 0U;
	int8_t x147 = 1;
	volatile int8_t x148 = INT8_MIN;
	uint32_t t34 = 3U;

	t34 = (x145&(x146%(x147+x148)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x150 = 12413U;
	int8_t x151 = -1;
	int32_t x152 = 839677;
	volatile uint32_t t35 = 806257038U;

	t35 = (x149&(x150%(x151+x152)));

	if (t35 != 12413U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x153 = 6;
	uint16_t x154 = 6379U;
	int16_t x155 = INT16_MAX;
	volatile int32_t t36 = 431;

	t36 = (x153&(x154%(x155+x156)));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	uint16_t x158 = 144U;
	volatile int16_t x159 = INT16_MIN;
	static int32_t t37 = -24669;

	t37 = (x157&(x158%(x159+x160)));

	if (t37 != 144) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = -3533560LL;
	uint64_t t38 = 1030540155884LLU;

	t38 = (x161&(x162%(x163+x164)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = 61LLU;
	uint64_t t39 = 375LLU;

	t39 = (x169&(x170%(x171+x172)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	uint16_t x174 = UINT16_MAX;
	static int8_t x175 = 3;
	static uint32_t x176 = UINT32_MAX;
	static uint32_t t40 = 6037U;

	t40 = (x173&(x174%(x175+x176)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	volatile uint64_t x178 = 648543771483140331LLU;
	volatile int32_t x179 = INT32_MIN;
	static int64_t x180 = -61LL;
	volatile uint64_t t41 = 98097LLU;

	t41 = (x177&(x178%(x179+x180)));

	if (t41 != 648543771483140224LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x185 = INT8_MIN;
	volatile uint8_t x186 = 0U;
	uint64_t x187 = 98867LLU;
	uint64_t t42 = 218125900772LLU;

	t42 = (x185&(x186%(x187+x188)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x189 = -1433;
	static int8_t x190 = 0;
	volatile uint8_t x191 = 56U;
	int16_t x192 = 3;

	t43 = (x189&(x190%(x191+x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = 6;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = 95LL;
	uint32_t x196 = UINT32_MAX;
	volatile int64_t t44 = 642LL;

	t44 = (x193&(x194%(x195+x196)));

	if (t44 != 6LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 11851356U;
	static uint32_t x198 = UINT32_MAX;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 64U;
	volatile uint64_t t45 = 158909324641669LLU;

	t45 = (x197&(x198%(x199+x200)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MIN;
	static int8_t x202 = INT8_MIN;
	int8_t x204 = 49;
	static volatile int32_t t46 = INT32_MIN;

	t46 = (x201&(x202%(x203+x204)));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MAX;
	int64_t x210 = INT64_MIN;
	volatile uint16_t x211 = UINT16_MAX;
	int32_t x212 = -119;
	volatile int64_t t47 = 1LL;

	t47 = (x209&(x210%(x211+x212)));

	if (t47 != 9223372036854714752LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x214 = INT8_MIN;
	static uint8_t x215 = 2U;
	int16_t x216 = 0;
	int32_t t48 = -1;

	t48 = (x213&(x214%(x215+x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x217 = 12057U;
	int16_t x218 = -5343;
	static int16_t x220 = 3;
	int32_t t49 = 230;

	t49 = (x217&(x218%(x219+x220)));

	if (t49 != 11009) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x221 = 11U;
	volatile uint32_t x222 = 11562U;
	uint16_t x223 = 664U;
	static uint64_t x224 = 14566LLU;
	volatile uint64_t t50 = 8340930305511LLU;

	t50 = (x221&(x222%(x223+x224)));

	if (t50 != 10LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x225 = UINT16_MAX;
	uint32_t x226 = 1484749182U;
	static volatile uint32_t x227 = UINT32_MAX;
	int64_t x228 = -204721LL;
	volatile int64_t t51 = 47815737427263688LL;

	t51 = (x225&(x226%(x227+x228)));

	if (t51 != 31102LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = 0U;
	int8_t x230 = INT8_MAX;
	static volatile int8_t x231 = -1;
	static int64_t t52 = -7519588289323192LL;

	t52 = (x229&(x230%(x231+x232)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 35;
	uint64_t x238 = 1267731690574021649LLU;
	static uint32_t x239 = 48U;
	volatile uint64_t t53 = 698657LLU;

	t53 = (x237&(x238%(x239+x240)));

	if (t53 != 35LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = -16851LL;
	int16_t x242 = -1;
	int32_t x243 = INT32_MIN;
	int64_t t54 = -386997LL;

	t54 = (x241&(x242%(x243+x244)));

	if (t54 != 2147102752LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x245 = INT16_MIN;
	int8_t x246 = -1;
	static int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MAX;
	volatile int64_t t55 = -2588203LL;

	t55 = (x245&(x246%(x247+x248)));

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x249 = INT32_MIN;
	volatile int8_t x250 = INT8_MAX;
	volatile int8_t x252 = INT8_MAX;
	volatile int32_t t56 = -31;

	t56 = (x249&(x250%(x251+x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x253 = 2U;
	volatile int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MAX;
	int16_t x256 = INT16_MIN;
	static int32_t t57 = -12;

	t57 = (x253&(x254%(x255+x256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x257 = 2U;
	uint16_t x259 = 218U;
	int64_t t58 = -2LL;

	t58 = (x257&(x258%(x259+x260)));

	if (t58 != 2LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x266 = INT64_MAX;
	int32_t x267 = INT32_MAX;
	int8_t x268 = INT8_MIN;
	uint64_t t59 = 25141780371LLU;

	t59 = (x265&(x266%(x267+x268)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x270 = INT64_MIN;
	int8_t x272 = INT8_MIN;
	int64_t t60 = 0LL;

	t60 = (x269&(x270%(x271+x272)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x274 = 59U;
	static volatile int32_t x276 = INT32_MIN;

	t61 = (x273&(x274%(x275+x276)));

	if (t61 != 59) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x277 = 14U;
	int8_t x278 = -1;
	int16_t x279 = INT16_MIN;
	uint32_t x280 = 463U;
	volatile uint32_t t62 = 1102533961U;

	t62 = (x277&(x278%(x279+x280)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MIN;
	static int32_t x282 = -79200;
	int32_t x283 = -221434568;
	static uint32_t x284 = 25329175U;
	volatile int64_t t63 = 1859024145061LL;

	t63 = (x281&(x282%(x283+x284)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = -8;
	int8_t x286 = -5;
	int16_t x287 = 13;
	int16_t x288 = INT16_MAX;
	volatile int32_t t64 = -272209695;

	t64 = (x285&(x286%(x287+x288)));

	if (t64 != -8) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x289 = INT8_MIN;
	uint64_t x290 = 27785253LLU;
	uint64_t x291 = 103175946531297603LLU;
	static volatile uint64_t t65 = 6038260857126LLU;

	t65 = (x289&(x290%(x291+x292)));

	if (t65 != 27785216LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x293 = -1;
	uint32_t x294 = 18U;
	uint8_t x295 = 3U;
	uint64_t x296 = 3174936103LLU;
	volatile uint64_t t66 = 4280146294945121LLU;

	t66 = (x293&(x294%(x295+x296)));

	if (t66 != 18LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = 246U;
	uint32_t x298 = 37U;
	static volatile uint64_t x299 = 10017849075LLU;
	volatile int16_t x300 = INT16_MIN;

	t67 = (x297&(x298%(x299+x300)));

	if (t67 != 36LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = UINT16_MAX;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = -9680;
	volatile int32_t t68 = -34;

	t68 = (x301&(x302%(x303+x304)));

	if (t68 != 58713) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x305 = -216140957;
	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MAX;

	t69 = (x305&(x306%(x307+x308)));

	if (t69 != -216169982LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x309 = INT8_MAX;
	static int32_t x310 = INT32_MIN;
	static int64_t x311 = -6611931448898160LL;
	int8_t x312 = -1;
	int64_t t70 = -426141204440311608LL;

	t70 = (x309&(x310%(x311+x312)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x313 = INT8_MIN;
	static int32_t x314 = 11;
	uint64_t x315 = 668LLU;
	uint32_t x316 = UINT32_MAX;
	volatile uint64_t t71 = 2807783527390517815LLU;

	t71 = (x313&(x314%(x315+x316)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MAX;
	volatile uint64_t x318 = 2365458645133LLU;
	static volatile int32_t x319 = -1;
	volatile uint64_t t72 = 4149657776LLU;

	t72 = (x317&(x318%(x319+x320)));

	if (t72 != 1241LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x321 = UINT16_MAX;
	static int32_t x322 = INT32_MAX;
	uint32_t x324 = UINT32_MAX;

	t73 = (x321&(x322%(x323+x324)));

	if (t73 != 7U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x325 = INT8_MAX;
	int32_t x328 = -1;
	static volatile int32_t t74 = -53167;

	t74 = (x325&(x326%(x327+x328)));

	if (t74 != 16) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x329 = 530545740509LLU;
	static int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	uint16_t x332 = 8065U;
	volatile uint64_t t75 = 1329140962783921LLU;

	t75 = (x329&(x330%(x331+x332)));

	if (t75 != 530545740484LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = -15216;
	static int16_t x336 = INT16_MIN;

	t76 = (x333&(x334%(x335+x336)));

	if (t76 != 15215U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x337 = -1;
	volatile uint8_t x338 = UINT8_MAX;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = -1;
	int32_t t77 = 827;

	t77 = (x337&(x338%(x339+x340)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x341 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = -72;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x341&(x342%(x343+x344)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x345 = INT32_MIN;
	int16_t x348 = 122;
	volatile uint32_t t79 = 3757U;

	t79 = (x345&(x346%(x347+x348)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x353 = 64U;
	int64_t x354 = -1LL;
	volatile int64_t x355 = -1LL;
	int16_t x356 = 21;
	int64_t t80 = 2883LL;

	t80 = (x353&(x354%(x355+x356)));

	if (t80 != 64LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x358 = INT8_MIN;
	int16_t x359 = 26;

	t81 = (x357&(x358%(x359+x360)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = 1146544232508157716LL;
	static int8_t x367 = 1;
	int64_t x368 = INT64_MIN;

	t82 = (x365&(x366%(x367+x368)));

	if (t82 != 569110292LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x375 = 12U;
	volatile int32_t x376 = INT32_MIN;
	static volatile int32_t t83 = -7599;

	t83 = (x373&(x374%(x375+x376)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = INT64_MAX;
	uint32_t x380 = 0U;
	uint64_t t84 = 2638474499526452271LLU;

	t84 = (x377&(x378%(x379+x380)));

	if (t84 != 111329LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MAX;
	static volatile int32_t x383 = INT32_MIN;
	volatile uint32_t x384 = UINT32_MAX;

	t85 = (x381&(x382%(x383+x384)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x385 = 589;
	uint64_t x387 = 22LLU;
	uint32_t x388 = UINT32_MAX;
	volatile uint64_t t86 = 570947562LLU;

	t86 = (x385&(x386%(x387+x388)));

	if (t86 != 76LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = INT32_MAX;
	volatile uint8_t x390 = 1U;
	static int8_t x391 = -14;
	volatile int64_t x392 = 1023699131LL;

	t87 = (x389&(x390%(x391+x392)));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x393 = UINT16_MAX;
	static volatile int8_t x394 = 1;
	int8_t x396 = INT8_MIN;
	volatile int32_t t88 = -683747300;

	t88 = (x393&(x394%(x395+x396)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x397 = UINT8_MAX;
	static volatile int32_t x398 = 12;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	volatile int64_t t89 = 89661132570572LL;

	t89 = (x397&(x398%(x399+x400)));

	if (t89 != 12LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = -170;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	static int64_t t90 = -481184493170201127LL;

	t90 = (x405&(x406%(x407+x408)));

	if (t90 != 8790LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = -1;
	int8_t x411 = INT8_MAX;
	volatile int16_t x412 = INT16_MIN;

	t91 = (x409&(x410%(x411+x412)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = UINT8_MAX;
	uint64_t x414 = UINT64_MAX;
	volatile int8_t x415 = INT8_MAX;
	static uint64_t t92 = 335993824331374LLU;

	t92 = (x413&(x414%(x415+x416)));

	if (t92 != 15LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = 10;
	int64_t x420 = INT64_MIN;
	static volatile uint64_t t93 = 143166017903128803LLU;

	t93 = (x417&(x418%(x419+x420)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x422 = INT64_MIN;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = INT32_MIN;
	volatile int64_t t94 = 68882713448773LL;

	t94 = (x421&(x422%(x423+x424)));

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x426 = -18042993;
	uint32_t x427 = UINT32_MAX;
	int64_t x428 = -1LL;
	int64_t t95 = -617966584LL;

	t95 = (x425&(x426%(x427+x428)));

	if (t95 != 15LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x431 = -9842933LL;
	volatile int64_t t96 = -11604224310453LL;

	t96 = (x429&(x430%(x431+x432)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x434 = UINT8_MAX;
	static uint64_t x435 = 45106LLU;
	volatile uint64_t t97 = 1185356LLU;

	t97 = (x433&(x434%(x435+x436)));

	if (t97 != 139LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x438 = 0LL;
	uint32_t x439 = 55417U;
	uint16_t x440 = UINT16_MAX;

	t98 = (x437&(x438%(x439+x440)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = 6U;
	int16_t x442 = -2;
	int8_t x443 = INT8_MIN;
	volatile int64_t x444 = -1LL;
	volatile int64_t t99 = -52373LL;

	t99 = (x441&(x442%(x443+x444)));

	if (t99 != 6LL) { NG(); } else { ; }
	
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

