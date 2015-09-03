#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x5 = UINT32_MAX;
uint16_t x14 = 61U;
volatile uint32_t x17 = 47U;
int32_t t4 = 10;
int32_t t6 = 198;
int64_t x34 = -119226LL;
volatile int32_t x38 = INT32_MAX;
volatile uint16_t x43 = 1101U;
volatile int32_t t10 = 167090;
int32_t x45 = 5824;
volatile int8_t x48 = -1;
int16_t x49 = 88;
static uint8_t x50 = 1U;
int32_t x57 = -1;
int16_t x61 = INT16_MIN;
uint8_t x72 = 55U;
static volatile int8_t x79 = INT8_MAX;
int64_t x84 = INT64_MAX;
static volatile int16_t x90 = INT16_MIN;
int64_t x99 = INT64_MAX;
volatile int32_t t24 = 4100;
volatile uint16_t x102 = 281U;
int32_t x104 = INT32_MAX;
int32_t x109 = INT32_MIN;
int8_t x115 = INT8_MAX;
int64_t x116 = INT64_MAX;
int8_t x118 = -2;
static uint64_t x121 = 7856182383714571809LLU;
int16_t x123 = INT16_MIN;
static volatile int32_t x125 = INT32_MAX;
int32_t t31 = -31240;
int32_t x130 = INT32_MIN;
int64_t x132 = 12287339LL;
volatile uint64_t x136 = 82LLU;
int32_t t33 = 503239;
volatile int32_t t34 = 1;
int32_t t35 = 5;
int32_t x146 = -1;
static int32_t x147 = INT32_MAX;
int16_t x148 = INT16_MAX;
int32_t t36 = -862153;
int64_t x150 = -13458LL;
static uint32_t x152 = UINT32_MAX;
uint8_t x156 = UINT8_MAX;
static int32_t t39 = 202;
int8_t x163 = -1;
int8_t x173 = INT8_MIN;
uint16_t x178 = 6U;
uint8_t x181 = 90U;
volatile int32_t x188 = INT32_MAX;
volatile int32_t t46 = 2298;
static volatile int64_t x196 = -1LL;
int16_t x197 = 82;
volatile int32_t t50 = 60557;
int8_t x213 = -1;
static uint8_t x224 = 57U;
int64_t x227 = -2087739927LL;
volatile int32_t t56 = -1;
volatile int32_t t57 = -19861;
int32_t x233 = INT32_MIN;
uint8_t x235 = 1U;
static volatile int32_t t58 = 2256;
uint64_t x244 = UINT64_MAX;
volatile int32_t t60 = 48336575;
uint16_t x245 = 1384U;
int8_t x249 = 1;
int64_t x250 = INT64_MIN;
static uint8_t x256 = 33U;
volatile int32_t t66 = 4213347;
int64_t x270 = -1LL;
static int32_t t67 = 21104384;
int16_t x278 = INT16_MIN;
int16_t x288 = -20;
volatile uint64_t x289 = 1947158447140441598LLU;
volatile int32_t t72 = 1022124128;
static volatile int32_t t78 = 103336441;
int8_t x319 = INT8_MIN;
int32_t x325 = INT32_MIN;
int64_t x326 = 14991050997LL;
int64_t x330 = INT64_MIN;
int8_t x331 = -3;
uint32_t x334 = UINT32_MAX;
uint16_t x335 = 2609U;
int16_t x338 = -1;
int32_t t85 = 73;
volatile int32_t t86 = 103558;
int16_t x353 = INT16_MIN;
int16_t x361 = 15;
uint8_t x363 = 0U;
int64_t x371 = INT64_MIN;
static int64_t x373 = -1LL;
static int16_t x375 = 0;
uint8_t x379 = 5U;
int8_t x384 = -1;
volatile int32_t t95 = 6683636;
int8_t x388 = -1;
int32_t x391 = -310805;
static volatile int32_t t97 = -113825;
volatile int32_t t99 = -31375;


void f0(void) {
	int8_t x1 = 0;
	volatile uint16_t x2 = UINT16_MAX;
	int32_t x3 = -1;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -684363;

	t0 = (x1<=(x2%(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	uint64_t x8 = 1668566812575644LLU;
	volatile int32_t t1 = 1;

	t1 = (x5<=(x6%(x7|x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 1LL;
	volatile int8_t x10 = -31;
	static uint32_t x11 = 6664U;
	uint8_t x12 = 0U;
	static volatile int32_t t2 = -517885;

	t2 = (x9<=(x10%(x11|x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -11LL;
	volatile uint8_t x15 = 3U;
	uint16_t x16 = UINT16_MAX;
	static volatile int32_t t3 = 8169431;

	t3 = (x13<=(x14%(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	uint32_t x19 = 49607U;
	int16_t x20 = -1;

	t4 = (x17<=(x18%(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile uint8_t x22 = UINT8_MAX;
	uint32_t x23 = UINT32_MAX;
	static uint64_t x24 = 106132872210785849LLU;
	static volatile int32_t t5 = -779273;

	t5 = (x21<=(x22%(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 3;
	static volatile int64_t x26 = 261282642447552LL;
	uint16_t x27 = UINT16_MAX;
	static uint8_t x28 = UINT8_MAX;

	t6 = (x25<=(x26%(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint16_t x30 = 14991U;
	static volatile uint32_t x31 = 0U;
	uint16_t x32 = 61U;
	static volatile int32_t t7 = 209;

	t7 = (x29<=(x30%(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 15283864609LLU;
	int8_t x35 = -1;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 204695558;

	t8 = (x33<=(x34%(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -35;
	uint32_t x39 = 4043U;
	int16_t x40 = 0;
	int32_t t9 = -28;

	t9 = (x37<=(x38%(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = -1;
	uint16_t x44 = 6698U;

	t10 = (x41<=(x42%(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	static int16_t x47 = 2;
	static volatile int32_t t11 = -13;

	t11 = (x45<=(x46%(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x51 = UINT64_MAX;
	volatile int64_t x52 = 4780LL;
	volatile int32_t t12 = 0;

	t12 = (x49<=(x50%(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int64_t x54 = INT64_MAX;
	int32_t x55 = INT32_MIN;
	int64_t x56 = 3628152LL;
	volatile int32_t t13 = 2529447;

	t13 = (x53<=(x54%(x55|x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 0U;
	int32_t x59 = -2200;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 141375027;

	t14 = (x57<=(x58%(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -1LL;
	static uint8_t x63 = UINT8_MAX;
	static int8_t x64 = -1;
	volatile int32_t t15 = -606;

	t15 = (x61<=(x62%(x63|x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	int64_t x66 = -916829LL;
	volatile uint64_t x67 = 152147559402732LLU;
	volatile int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = -15364;

	t16 = (x65<=(x66%(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	static int8_t x70 = INT8_MIN;
	uint64_t x71 = 375548600381782LLU;
	int32_t t17 = -438489;

	t17 = (x69<=(x70%(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	uint8_t x74 = 1U;
	int32_t x75 = -3606104;
	volatile int32_t x76 = -1;
	volatile int32_t t18 = -51;

	t18 = (x73<=(x74%(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	int32_t x80 = -1;
	volatile int32_t t19 = 231099472;

	t19 = (x77<=(x78%(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = UINT16_MAX;
	uint16_t x83 = 24271U;
	int32_t t20 = -19246140;

	t20 = (x81<=(x82%(x83|x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = 12587161U;
	uint8_t x86 = UINT8_MAX;
	uint64_t x87 = 2LLU;
	volatile uint32_t x88 = 151705426U;
	static volatile int32_t t21 = 96;

	t21 = (x85<=(x86%(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static int32_t x91 = INT32_MAX;
	volatile int64_t x92 = INT64_MAX;
	int32_t t22 = -49;

	t22 = (x89<=(x90%(x91|x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x94 = 399577977697581144LLU;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 96U;
	volatile int32_t t23 = 6603963;

	t23 = (x93<=(x94%(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	volatile uint32_t x98 = 3900U;
	uint16_t x100 = 0U;

	t24 = (x97<=(x98%(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	static int8_t x103 = 1;
	volatile int32_t t25 = 1469;

	t25 = (x101<=(x102%(x103|x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 32U;
	int16_t x106 = INT16_MAX;
	int32_t x107 = INT32_MIN;
	int64_t x108 = INT64_MAX;
	static volatile int32_t t26 = -11484378;

	t26 = (x105<=(x106%(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x110 = 14765177815LLU;
	int64_t x111 = -455229253264812LL;
	static uint64_t x112 = UINT64_MAX;
	int32_t t27 = -2409465;

	t27 = (x109<=(x110%(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	uint16_t x114 = UINT16_MAX;
	volatile int32_t t28 = -16;

	t28 = (x113<=(x114%(x115|x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint16_t x119 = UINT16_MAX;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -12;

	t29 = (x117<=(x118%(x119|x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x122 = INT64_MIN;
	static uint64_t x124 = 222021258258263LLU;
	volatile int32_t t30 = 37162658;

	t30 = (x121<=(x122%(x123|x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = INT16_MAX;
	uint64_t x127 = 200602LLU;
	int64_t x128 = INT64_MAX;

	t31 = (x125<=(x126%(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -4026LL;
	uint8_t x131 = 24U;
	volatile int32_t t32 = -11979348;

	t32 = (x129<=(x130%(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 96679749506105LL;
	static int8_t x134 = -1;
	int64_t x135 = 30845031LL;

	t33 = (x133<=(x134%(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int16_t x138 = -1;
	int64_t x139 = 4667936734513303LL;
	int8_t x140 = INT8_MIN;

	t34 = (x137<=(x138%(x139|x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 498U;
	volatile int16_t x142 = INT16_MAX;
	uint64_t x143 = 212876448LLU;
	int32_t x144 = INT32_MIN;

	t35 = (x141<=(x142%(x143|x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;

	t36 = (x145<=(x146%(x147|x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int8_t x151 = INT8_MIN;
	volatile int32_t t37 = -4;

	t37 = (x149<=(x150%(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int64_t x154 = -1LL;
	static int8_t x155 = -1;
	int32_t t38 = 5;

	t38 = (x153<=(x154%(x155|x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 41U;
	int16_t x158 = INT16_MIN;
	int16_t x159 = -1;
	uint64_t x160 = 126892694745307980LLU;

	t39 = (x157<=(x158%(x159|x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 1U;
	volatile uint16_t x162 = UINT16_MAX;
	int16_t x164 = INT16_MIN;
	static int32_t t40 = 31341371;

	t40 = (x161<=(x162%(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 43;
	static int64_t x166 = INT64_MAX;
	int64_t x167 = 1LL;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = 1296;

	t41 = (x165<=(x166%(x167|x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = 62;
	static int16_t x170 = -3;
	static int16_t x171 = INT16_MAX;
	static volatile uint8_t x172 = UINT8_MAX;
	static volatile int32_t t42 = -1350754;

	t42 = (x169<=(x170%(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MIN;
	volatile uint64_t x175 = UINT64_MAX;
	volatile int8_t x176 = 15;
	static int32_t t43 = -15337748;

	t43 = (x173<=(x174%(x175|x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -1;
	int32_t x179 = -1;
	uint32_t x180 = 129056U;
	static int32_t t44 = 6;

	t44 = (x177<=(x178%(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MAX;
	volatile int8_t x183 = -1;
	int32_t x184 = -1;
	volatile int32_t t45 = -276;

	t45 = (x181<=(x182%(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = 3U;
	int16_t x186 = 23;
	volatile uint8_t x187 = 15U;

	t46 = (x185<=(x186%(x187|x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint16_t x190 = 7103U;
	int32_t x191 = 113;
	int64_t x192 = INT64_MIN;
	int32_t t47 = 2610;

	t47 = (x189<=(x190%(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = -2LL;
	int16_t x195 = INT16_MAX;
	int32_t t48 = 890071;

	t48 = (x193<=(x194%(x195|x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = 4U;
	static int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t49 = -16216;

	t49 = (x197<=(x198%(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MAX;
	uint8_t x204 = UINT8_MAX;

	t50 = (x201<=(x202%(x203|x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	uint8_t x206 = 1U;
	int8_t x207 = INT8_MAX;
	int16_t x208 = -1;
	int32_t t51 = 23255281;

	t51 = (x205<=(x206%(x207|x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	int64_t x210 = -1LL;
	uint8_t x211 = 18U;
	int16_t x212 = 454;
	int32_t t52 = 8;

	t52 = (x209<=(x210%(x211|x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = 312;
	static int32_t x215 = INT32_MIN;
	static int32_t x216 = -1;
	volatile int32_t t53 = -93340480;

	t53 = (x213<=(x214%(x215|x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 3697779U;
	volatile int8_t x218 = 5;
	uint8_t x219 = 36U;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -759513;

	t54 = (x217<=(x218%(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 3U;
	int8_t x222 = INT8_MIN;
	static int8_t x223 = 2;
	volatile int32_t t55 = 474;

	t55 = (x221<=(x222%(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 12U;
	volatile int32_t x226 = INT32_MAX;
	int32_t x228 = INT32_MIN;

	t56 = (x225<=(x226%(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x229 = 1U;
	int8_t x230 = INT8_MAX;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = 1U;

	t57 = (x229<=(x230%(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	int32_t x236 = -1;

	t58 = (x233<=(x234%(x235|x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = UINT8_MAX;
	uint64_t x238 = 354737068973LLU;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = -1;
	volatile int32_t t59 = -5494;

	t59 = (x237<=(x238%(x239|x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = -1;
	static int16_t x243 = -1;

	t60 = (x241<=(x242%(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MAX;
	int64_t x248 = 123313719823LL;
	volatile int32_t t61 = 2;

	t61 = (x245<=(x246%(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x251 = -1;
	int64_t x252 = INT64_MAX;
	static int32_t t62 = 270361;

	t62 = (x249<=(x250%(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	static int16_t x254 = 14563;
	uint64_t x255 = 79LLU;
	volatile int32_t t63 = -3;

	t63 = (x253<=(x254%(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MAX;
	int8_t x259 = -1;
	static int32_t x260 = INT32_MAX;
	int32_t t64 = -1;

	t64 = (x257<=(x258%(x259|x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	static int8_t x262 = INT8_MIN;
	int64_t x263 = -561766879519LL;
	uint32_t x264 = 858164U;
	static volatile int32_t t65 = 12;

	t65 = (x261<=(x262%(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	uint16_t x266 = 232U;
	uint64_t x267 = 8690372294406LLU;
	volatile uint16_t x268 = UINT16_MAX;

	t66 = (x265<=(x266%(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MAX;
	static int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MIN;

	t67 = (x269<=(x270%(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = 39757714849827LLU;
	static volatile uint64_t x275 = 342LLU;
	int32_t x276 = -1;
	int32_t t68 = 6892;

	t68 = (x273<=(x274%(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = -898563514553497471LL;
	int32_t x279 = -31356;
	volatile uint32_t x280 = 3118U;
	int32_t t69 = 242323197;

	t69 = (x277<=(x278%(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	static int64_t x282 = 408270LL;
	uint16_t x283 = 1459U;
	volatile uint64_t x284 = 26235217LLU;
	int32_t t70 = -963;

	t70 = (x281<=(x282%(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = -1;
	volatile int8_t x287 = 1;
	static int32_t t71 = 160;

	t71 = (x285<=(x286%(x287|x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x290 = INT8_MIN;
	int16_t x291 = -1;
	int8_t x292 = 51;

	t72 = (x289<=(x290%(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 3187970292804305257LLU;
	static uint16_t x294 = 383U;
	static int8_t x295 = INT8_MAX;
	int8_t x296 = 1;
	int32_t t73 = -18;

	t73 = (x293<=(x294%(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MAX;
	int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MAX;
	int32_t t74 = 666081096;

	t74 = (x297<=(x298%(x299|x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -1LL;
	int64_t x302 = INT64_MAX;
	uint16_t x303 = 435U;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 999;

	t75 = (x301<=(x302%(x303|x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MIN;
	volatile uint64_t x307 = 3545965730LLU;
	int16_t x308 = 1182;
	int32_t t76 = -408581614;

	t76 = (x305<=(x306%(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MIN;
	int64_t x310 = -4566698LL;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	static int32_t t77 = 3;

	t77 = (x309<=(x310%(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 37U;
	int8_t x314 = -2;
	volatile int8_t x315 = -56;
	static int16_t x316 = INT16_MIN;

	t78 = (x313<=(x314%(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MAX;
	int8_t x318 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	int32_t t79 = 1948;

	t79 = (x317<=(x318%(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = 51;
	uint8_t x322 = UINT8_MAX;
	int64_t x323 = 42032343447491LL;
	volatile int16_t x324 = INT16_MIN;
	int32_t t80 = -56600026;

	t80 = (x321<=(x322%(x323|x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 1035;

	t81 = (x325<=(x326%(x327|x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = 4U;
	int16_t x332 = -1;
	int32_t t82 = 0;

	t82 = (x329<=(x330%(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 280U;
	int16_t x336 = 2824;
	int32_t t83 = 8;

	t83 = (x333<=(x334%(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 110U;
	static uint8_t x339 = 61U;
	uint16_t x340 = 2078U;
	int32_t t84 = -306727;

	t84 = (x337<=(x338%(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	uint16_t x342 = UINT16_MAX;
	volatile int16_t x343 = 5;
	volatile int32_t x344 = INT32_MIN;

	t85 = (x341<=(x342%(x343|x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = UINT32_MAX;
	uint32_t x346 = UINT32_MAX;
	int64_t x347 = -1LL;
	static volatile int16_t x348 = 7638;

	t86 = (x345<=(x346%(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 2581867LLU;
	volatile uint32_t x350 = 6215547U;
	static volatile int32_t x351 = INT32_MIN;
	uint64_t x352 = UINT64_MAX;
	static volatile int32_t t87 = -19018;

	t87 = (x349<=(x350%(x351|x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	int64_t x355 = -39LL;
	static uint64_t x356 = 732859462982LLU;
	volatile int32_t t88 = 4041619;

	t88 = (x353<=(x354%(x355|x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 2126486U;
	int16_t x358 = 4;
	uint64_t x359 = UINT64_MAX;
	static uint8_t x360 = UINT8_MAX;
	volatile int32_t t89 = 433;

	t89 = (x357<=(x358%(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x362 = INT64_MIN;
	static int16_t x364 = INT16_MIN;
	int32_t t90 = 1042039179;

	t90 = (x361<=(x362%(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	int16_t x366 = INT16_MIN;
	volatile int64_t x367 = 12LL;
	int16_t x368 = INT16_MAX;
	int32_t t91 = -222756;

	t91 = (x365<=(x366%(x367|x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = 2U;
	static uint8_t x372 = 0U;
	int32_t t92 = -993612304;

	t92 = (x369<=(x370%(x371|x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = 1;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t93 = 17826;

	t93 = (x373<=(x374%(x375|x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = -1;
	volatile int32_t x380 = -153944795;
	volatile int32_t t94 = 105647;

	t94 = (x377<=(x378%(x379|x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MIN;
	volatile uint32_t x383 = 24563592U;

	t95 = (x381<=(x382%(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = 0LL;
	int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	volatile int32_t t96 = 2596171;

	t96 = (x385<=(x386%(x387|x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = 3;
	int16_t x390 = 16249;
	static int64_t x392 = INT64_MIN;

	t97 = (x389<=(x390%(x391|x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	volatile int16_t x394 = -27;
	int32_t x395 = INT32_MAX;
	volatile int8_t x396 = -1;
	volatile int32_t t98 = 871761;

	t98 = (x393<=(x394%(x395|x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 28U;
	int8_t x398 = INT8_MAX;
	uint32_t x399 = UINT32_MAX;
	static int32_t x400 = INT32_MAX;

	t99 = (x397<=(x398%(x399|x400)));

	if (t99 != 1) { NG(); } else { ; }
	
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

