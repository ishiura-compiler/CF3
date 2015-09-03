#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x5 = INT16_MIN;
uint16_t x9 = 27575U;
int16_t x13 = INT16_MAX;
int32_t t3 = 22805;
int64_t x24 = INT64_MIN;
static int8_t x27 = INT8_MAX;
int32_t x32 = INT32_MAX;
volatile int32_t t8 = -304587;
volatile int32_t t9 = -4;
int32_t t11 = 3525;
int32_t x49 = -12;
static int32_t x56 = 174196862;
int32_t t13 = 478;
volatile int32_t t14 = 1017463;
uint16_t x62 = 4U;
uint8_t x71 = 9U;
int64_t x74 = 101248167379595904LL;
volatile int32_t t18 = 5209591;
static volatile uint64_t x82 = 5970544877197LLU;
int16_t x85 = 15162;
uint8_t x87 = 30U;
int8_t x89 = INT8_MIN;
int32_t t22 = 45455292;
int32_t x95 = -1;
int64_t x104 = 34512413691LL;
volatile int32_t x108 = -1;
uint16_t x110 = UINT16_MAX;
int16_t x112 = 234;
int8_t x114 = INT8_MAX;
uint64_t x116 = UINT64_MAX;
int32_t t28 = -3608;
static volatile int32_t x118 = 201238;
static uint64_t x119 = UINT64_MAX;
volatile int16_t x120 = -1;
int32_t x123 = -228442448;
static volatile int32_t t30 = -276341636;
volatile int8_t x125 = INT8_MAX;
int16_t x131 = -1;
int32_t x136 = INT32_MIN;
int32_t t33 = 1767;
volatile int8_t x137 = INT8_MIN;
int8_t x139 = -36;
int16_t x151 = INT16_MAX;
int16_t x152 = -3242;
int32_t t37 = 3;
int8_t x155 = INT8_MIN;
int32_t x156 = 103;
int16_t x171 = INT16_MIN;
int8_t x179 = INT8_MAX;
static volatile int32_t t44 = -32142268;
static volatile int32_t x181 = INT32_MIN;
volatile int64_t x186 = 3383838963LL;
volatile uint64_t x187 = UINT64_MAX;
volatile int8_t x195 = -1;
int8_t x197 = INT8_MIN;
static int16_t x205 = 103;
int64_t x209 = 2LL;
int8_t x211 = -10;
int64_t x214 = 4656150575LL;
uint64_t x218 = UINT64_MAX;
int16_t x224 = INT16_MIN;
int32_t x231 = INT32_MAX;
static int32_t t57 = 12;
int16_t x234 = INT16_MIN;
int8_t x235 = INT8_MIN;
static volatile int32_t t60 = 2;
static int64_t x248 = -1LL;
volatile int8_t x250 = -2;
uint16_t x254 = 30644U;
static int64_t x255 = -1752107LL;
int32_t t63 = 145;
int64_t x257 = INT64_MAX;
int16_t x260 = INT16_MIN;
int32_t x262 = INT32_MIN;
int16_t x263 = -692;
int8_t x271 = 12;
volatile int32_t t67 = 246;
int32_t t68 = 358259;
volatile int16_t x284 = INT16_MIN;
uint8_t x287 = 3U;
uint32_t x292 = UINT32_MAX;
static int64_t x294 = INT64_MIN;
int8_t x300 = 4;
volatile int64_t x304 = INT64_MIN;
volatile int64_t x308 = -1LL;
static int16_t x309 = INT16_MAX;
volatile uint16_t x316 = 23647U;
uint16_t x319 = 49U;
int32_t t79 = -639041;
int32_t x326 = 17339536;
volatile int16_t x328 = INT16_MAX;
static uint8_t x330 = 0U;
int32_t t82 = -108;
static uint16_t x345 = UINT16_MAX;
int16_t x362 = 22;
int32_t x366 = INT32_MIN;
int64_t x373 = -553260690543321078LL;
uint16_t x375 = 1U;
static int64_t x379 = -1670563629LL;
int32_t x380 = INT32_MAX;
volatile int32_t t94 = 50;
int64_t x384 = INT64_MAX;
int64_t x391 = INT64_MAX;
static int32_t t97 = -694273008;
uint64_t x400 = 940261281LLU;
int32_t t99 = -3732;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	static uint64_t x3 = UINT64_MAX;
	int16_t x4 = -1;
	int32_t t0 = 861264;

	t0 = ((x1<=x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MIN;
	volatile int8_t x7 = -1;
	uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = -2638155;

	t1 = ((x5<=x6)==(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 1U;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = 271;
	int32_t t2 = 6;

	t2 = ((x9<=x10)==(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = 42079LL;
	int8_t x15 = INT8_MIN;
	static int64_t x16 = -6795443133574LL;

	t3 = ((x13<=x14)==(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -85544;
	int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	static int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -22;

	t4 = ((x17<=x18)==(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	volatile int64_t x22 = -1244442079LL;
	int16_t x23 = INT16_MIN;
	int32_t t5 = -36;

	t5 = ((x21<=x22)==(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 329U;
	int8_t x26 = INT8_MIN;
	volatile int32_t x28 = INT32_MAX;
	static volatile int32_t t6 = -7845;

	t6 = ((x25<=x26)==(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int8_t x30 = -1;
	uint8_t x31 = 91U;
	volatile int32_t t7 = 46383;

	t7 = ((x29<=x30)==(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 12;
	uint64_t x34 = 72346947375886563LLU;
	uint8_t x35 = 16U;
	int8_t x36 = INT8_MIN;

	t8 = ((x33<=x34)==(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MIN;
	int64_t x39 = -244839LL;
	uint32_t x40 = 2197762U;

	t9 = ((x37<=x38)==(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -31;
	static int64_t x42 = -1LL;
	int32_t x43 = INT32_MIN;
	int16_t x44 = 3;
	int32_t t10 = 95;

	t10 = ((x41<=x42)==(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 1503447U;
	volatile int16_t x46 = -2317;
	int64_t x47 = -1LL;
	uint64_t x48 = UINT64_MAX;

	t11 = ((x45<=x46)==(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = -19383242050LL;
	uint32_t x51 = 901156U;
	uint8_t x52 = 53U;
	volatile int32_t t12 = 138289556;

	t12 = ((x49<=x50)==(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 14U;
	volatile int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MAX;

	t13 = ((x53<=x54)==(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static volatile uint64_t x58 = 72807LLU;
	uint8_t x59 = 1U;
	static uint8_t x60 = 97U;

	t14 = ((x57<=x58)==(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 3695;
	uint64_t x63 = 24717301453320LLU;
	volatile uint8_t x64 = 48U;
	volatile int32_t t15 = -15852;

	t15 = ((x61<=x62)==(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -580;
	volatile uint8_t x66 = 5U;
	int64_t x67 = INT64_MAX;
	static int64_t x68 = 68252307439LL;
	volatile int32_t t16 = -413;

	t16 = ((x65<=x66)==(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 1U;
	int8_t x70 = INT8_MAX;
	volatile int64_t x72 = -1LL;
	volatile int32_t t17 = -56329;

	t17 = ((x69<=x70)==(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	int8_t x75 = INT8_MAX;
	int64_t x76 = 656009693170201LL;

	t18 = ((x73<=x74)==(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -8;
	volatile int8_t x78 = -1;
	int64_t x79 = INT64_MAX;
	volatile uint64_t x80 = 154115432182LLU;
	static int32_t t19 = 39104733;

	t19 = ((x77<=x78)==(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int8_t x83 = -2;
	int16_t x84 = -6271;
	int32_t t20 = 166;

	t20 = ((x81<=x82)==(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	static int8_t x88 = -1;
	volatile int32_t t21 = 32019;

	t21 = ((x85<=x86)==(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x90 = INT64_MAX;
	uint32_t x91 = 32728U;
	int16_t x92 = INT16_MIN;

	t22 = ((x89<=x90)==(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 62U;
	int64_t x94 = INT64_MAX;
	static int32_t x96 = -1;
	volatile int32_t t23 = 0;

	t23 = ((x93<=x94)==(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MAX;
	uint8_t x98 = 2U;
	int16_t x99 = INT16_MAX;
	uint64_t x100 = 198777660LLU;
	volatile int32_t t24 = 20865;

	t24 = ((x97<=x98)==(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint8_t x102 = UINT8_MAX;
	static int32_t x103 = 2113237;
	int32_t t25 = 148813;

	t25 = ((x101<=x102)==(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	uint8_t x106 = UINT8_MAX;
	uint64_t x107 = UINT64_MAX;
	volatile int32_t t26 = 9;

	t26 = ((x105<=x106)==(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = UINT64_MAX;
	uint64_t x111 = 2213660649102145LLU;
	volatile int32_t t27 = 235;

	t27 = ((x109<=x110)==(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	int8_t x115 = INT8_MAX;

	t28 = ((x113<=x114)==(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 9;
	int32_t t29 = -3187;

	t29 = ((x117<=x118)==(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -44;
	static int32_t x122 = 121688;
	int16_t x124 = INT16_MIN;

	t30 = ((x121<=x122)==(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x126 = 0;
	int8_t x127 = INT8_MIN;
	static volatile uint32_t x128 = 727929310U;
	int32_t t31 = 931088188;

	t31 = ((x125<=x126)==(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -2;
	int8_t x130 = INT8_MIN;
	int16_t x132 = -11;
	int32_t t32 = 714113652;

	t32 = ((x129<=x130)==(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	volatile uint8_t x135 = 98U;

	t33 = ((x133<=x134)==(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x138 = UINT16_MAX;
	uint8_t x140 = 11U;
	static volatile int32_t t34 = 26418;

	t34 = ((x137<=x138)==(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 14417390868710LLU;
	uint8_t x142 = 1U;
	volatile uint16_t x143 = 4882U;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t35 = 3041;

	t35 = ((x141<=x142)==(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static int32_t x146 = -3850;
	uint64_t x147 = UINT64_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = 19;

	t36 = ((x145<=x146)==(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x149 = 87U;
	static int32_t x150 = INT32_MIN;

	t37 = ((x149<=x150)==(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 59937486226461LL;
	static int64_t x154 = -19088642945LL;
	volatile int32_t t38 = -15;

	t38 = ((x153<=x154)==(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 1995U;
	int32_t x158 = 207;
	static volatile int32_t x159 = INT32_MIN;
	static volatile int32_t x160 = 379156;
	int32_t t39 = 60781310;

	t39 = ((x157<=x158)==(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	static uint16_t x162 = UINT16_MAX;
	volatile uint64_t x163 = 249995LLU;
	volatile int8_t x164 = 1;
	volatile int32_t t40 = -6730085;

	t40 = ((x161<=x162)==(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x165 = UINT8_MAX;
	static uint32_t x166 = UINT32_MAX;
	int32_t x167 = -194275;
	int32_t x168 = 344730624;
	int32_t t41 = -385;

	t41 = ((x165<=x166)==(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t42 = 0;

	t42 = ((x169<=x170)==(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	int32_t x174 = 35046;
	int32_t x175 = INT32_MIN;
	static uint32_t x176 = 1312984203U;
	int32_t t43 = 1;

	t43 = ((x173<=x174)==(x175^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	uint16_t x180 = 0U;

	t44 = ((x177<=x178)==(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x182 = INT32_MIN;
	int32_t x183 = -1;
	uint64_t x184 = UINT64_MAX;
	static int32_t t45 = -11;

	t45 = ((x181<=x182)==(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = 191054518463LL;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = -799620;

	t46 = ((x185<=x186)==(x187^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 10;
	int64_t x190 = INT64_MAX;
	int16_t x191 = INT16_MAX;
	volatile int32_t x192 = 6396509;
	int32_t t47 = 22457;

	t47 = ((x189<=x190)==(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int8_t x194 = 1;
	int8_t x196 = INT8_MAX;
	int32_t t48 = 1386;

	t48 = ((x193<=x194)==(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x198 = 18U;
	volatile int8_t x199 = INT8_MAX;
	int16_t x200 = -5175;
	volatile int32_t t49 = 2685993;

	t49 = ((x197<=x198)==(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	uint32_t x202 = 112U;
	int64_t x203 = INT64_MIN;
	uint64_t x204 = 450174997713LLU;
	int32_t t50 = 152467;

	t50 = ((x201<=x202)==(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x206 = 2U;
	int8_t x207 = INT8_MIN;
	int64_t x208 = -368LL;
	volatile int32_t t51 = 424506570;

	t51 = ((x205<=x206)==(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x210 = UINT32_MAX;
	int8_t x212 = 0;
	volatile int32_t t52 = -55796;

	t52 = ((x209<=x210)==(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x215 = UINT32_MAX;
	int16_t x216 = 37;
	int32_t t53 = 26874;

	t53 = ((x213<=x214)==(x215^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int8_t x219 = -1;
	int64_t x220 = INT64_MIN;
	int32_t t54 = 10245;

	t54 = ((x217<=x218)==(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 2838068U;
	uint8_t x222 = 7U;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t t55 = 1829;

	t55 = ((x221<=x222)==(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	static volatile uint8_t x226 = 127U;
	int32_t x227 = 1;
	int64_t x228 = INT64_MIN;
	int32_t t56 = 4093;

	t56 = ((x225<=x226)==(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	int64_t x232 = INT64_MAX;

	t57 = ((x229<=x230)==(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 0;
	int32_t x236 = -17351815;
	volatile int32_t t58 = -11777;

	t58 = ((x233<=x234)==(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	static uint32_t x238 = UINT32_MAX;
	volatile uint64_t x239 = UINT64_MAX;
	int8_t x240 = 9;
	int32_t t59 = 2;

	t59 = ((x237<=x238)==(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MIN;
	int8_t x242 = -30;
	int16_t x243 = -519;
	int8_t x244 = -7;

	t60 = ((x241<=x242)==(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	uint16_t x246 = 11850U;
	uint64_t x247 = 1776629LLU;
	static int32_t t61 = 106;

	t61 = ((x245<=x246)==(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x251 = -10635;
	static int32_t x252 = INT32_MAX;
	volatile int32_t t62 = -224123077;

	t62 = ((x249<=x250)==(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x253 = 26007458LLU;
	int16_t x256 = -1689;

	t63 = ((x253<=x254)==(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MIN;
	static int16_t x259 = INT16_MAX;
	int32_t t64 = -680;

	t64 = ((x257<=x258)==(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int64_t x264 = INT64_MIN;
	static volatile int32_t t65 = -31;

	t65 = ((x261<=x262)==(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int8_t x266 = INT8_MIN;
	int64_t x267 = 3830892963LL;
	static int16_t x268 = INT16_MAX;
	int32_t t66 = -33065;

	t66 = ((x265<=x266)==(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	int8_t x270 = -1;
	int16_t x272 = -1;

	t67 = ((x269<=x270)==(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	volatile int16_t x274 = -1;
	int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MAX;

	t68 = ((x273<=x274)==(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -8;
	int32_t x278 = INT32_MIN;
	int32_t x279 = INT32_MAX;
	static volatile uint64_t x280 = UINT64_MAX;
	int32_t t69 = 6125440;

	t69 = ((x277<=x278)==(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -69;
	uint16_t x282 = 7936U;
	int32_t x283 = 449932;
	static volatile int32_t t70 = 63;

	t70 = ((x281<=x282)==(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 6U;
	int8_t x286 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -17089;

	t71 = ((x285<=x286)==(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MIN;
	volatile uint32_t x291 = 13U;
	volatile int32_t t72 = -953847073;

	t72 = ((x289<=x290)==(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MIN;
	volatile int32_t x295 = INT32_MIN;
	volatile int32_t x296 = 4348;
	int32_t t73 = 7002;

	t73 = ((x293<=x294)==(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int64_t x298 = INT64_MIN;
	uint64_t x299 = 13LLU;
	volatile int32_t t74 = -5655719;

	t74 = ((x297<=x298)==(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	static uint32_t x302 = 296099U;
	int64_t x303 = INT64_MIN;
	static volatile int32_t t75 = 15391278;

	t75 = ((x301<=x302)==(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	int64_t x306 = -1LL;
	volatile int32_t x307 = INT32_MIN;
	volatile int32_t t76 = 393;

	t76 = ((x305<=x306)==(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MIN;
	volatile int8_t x311 = INT8_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t77 = -148716;

	t77 = ((x309<=x310)==(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	static volatile int8_t x314 = INT8_MAX;
	uint8_t x315 = 0U;
	int32_t t78 = 131702;

	t78 = ((x313<=x314)==(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	volatile int16_t x318 = INT16_MIN;
	int16_t x320 = INT16_MIN;

	t79 = ((x317<=x318)==(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -181;
	int8_t x322 = 43;
	int64_t x323 = -1002LL;
	volatile int32_t x324 = -435322;
	volatile int32_t t80 = -43078;

	t80 = ((x321<=x322)==(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	int16_t x327 = INT16_MIN;
	volatile int32_t t81 = -4;

	t81 = ((x325<=x326)==(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	volatile int64_t x331 = INT64_MIN;
	volatile uint64_t x332 = UINT64_MAX;

	t82 = ((x329<=x330)==(x331^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MAX;
	int8_t x334 = -1;
	static uint16_t x335 = UINT16_MAX;
	int8_t x336 = -3;
	static volatile int32_t t83 = -25;

	t83 = ((x333<=x334)==(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = 0;
	int64_t x338 = -708121709683651857LL;
	volatile uint64_t x339 = 4193080038207LLU;
	uint32_t x340 = 29491590U;
	int32_t t84 = 755363151;

	t84 = ((x337<=x338)==(x339^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = -1;
	volatile int64_t x343 = INT64_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = -127;

	t85 = ((x341<=x342)==(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x346 = 133138LL;
	volatile int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MAX;
	int32_t t86 = 0;

	t86 = ((x345<=x346)==(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x349 = UINT64_MAX;
	volatile int32_t x350 = 162538;
	uint64_t x351 = 577334541010LLU;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = -3919;

	t87 = ((x349<=x350)==(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	static volatile int64_t x354 = INT64_MIN;
	volatile int16_t x355 = -3;
	volatile int8_t x356 = -1;
	volatile int32_t t88 = 844572704;

	t88 = ((x353<=x354)==(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -4720;
	int16_t x358 = -3;
	int64_t x359 = INT64_MIN;
	volatile uint16_t x360 = 2U;
	int32_t t89 = -402953;

	t89 = ((x357<=x358)==(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	volatile int64_t x363 = INT64_MIN;
	int32_t x364 = 25;
	volatile int32_t t90 = 2233;

	t90 = ((x361<=x362)==(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = UINT16_MAX;
	int8_t x367 = -1;
	static uint8_t x368 = 3U;
	volatile int32_t t91 = -252882434;

	t91 = ((x365<=x366)==(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 939U;
	int32_t x370 = -1;
	int32_t x371 = INT32_MIN;
	static int32_t x372 = -1;
	static volatile int32_t t92 = 15;

	t92 = ((x369<=x370)==(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = 7058LL;
	uint64_t x376 = 119711119225853LLU;
	int32_t t93 = -484;

	t93 = ((x373<=x374)==(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 1;
	volatile int8_t x378 = -1;

	t94 = ((x377<=x378)==(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	uint64_t x382 = 22274036335254969LLU;
	int32_t x383 = INT32_MIN;
	static int32_t t95 = 25493;

	t95 = ((x381<=x382)==(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -1;
	volatile int8_t x386 = 14;
	int64_t x387 = INT64_MIN;
	static int64_t x388 = -1LL;
	int32_t t96 = 22082;

	t96 = ((x385<=x386)==(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x389 = INT64_MIN;
	int32_t x390 = INT32_MIN;
	int8_t x392 = INT8_MIN;

	t97 = ((x389<=x390)==(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MAX;
	volatile int16_t x396 = INT16_MAX;
	volatile int32_t t98 = 473195;

	t98 = ((x393<=x394)==(x395^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MAX;
	volatile int64_t x398 = INT64_MAX;
	int8_t x399 = 2;

	t99 = ((x397<=x398)==(x399^x400));

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

