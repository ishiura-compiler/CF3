#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -32;
volatile int32_t t4 = 88610017;
static uint32_t x24 = 12U;
int64_t x26 = INT64_MAX;
int32_t x28 = INT32_MIN;
int64_t x31 = INT64_MAX;
int64_t x37 = -1LL;
volatile int16_t x40 = -1;
int16_t x42 = 0;
int16_t x45 = -12037;
volatile int32_t t12 = -106517753;
int32_t x63 = INT32_MAX;
int32_t x65 = INT32_MIN;
volatile int64_t x72 = INT64_MAX;
static uint64_t x76 = UINT64_MAX;
int16_t x78 = 207;
volatile uint8_t x83 = UINT8_MAX;
uint16_t x85 = 10U;
int64_t x86 = -1LL;
uint64_t x90 = UINT64_MAX;
volatile int32_t t22 = 21252;
uint32_t x96 = 17666125U;
int8_t x110 = INT8_MIN;
volatile uint64_t x127 = UINT64_MAX;
static int8_t x128 = -1;
int32_t t31 = -10634;
uint32_t x133 = 33U;
int16_t x136 = -1;
int16_t x138 = INT16_MIN;
int16_t x140 = 273;
static int32_t t35 = -2;
int64_t x148 = INT64_MAX;
int16_t x154 = INT16_MAX;
int32_t x157 = INT32_MIN;
static int8_t x160 = 1;
static int64_t x163 = 128601853332527699LL;
static volatile int32_t t40 = 56;
int8_t x166 = 1;
static uint64_t x172 = 46264229413618151LLU;
volatile int32_t x179 = -7102;
int32_t t45 = 200579112;
volatile uint32_t x186 = UINT32_MAX;
int8_t x188 = -7;
int32_t x189 = -1;
int16_t x190 = INT16_MIN;
int32_t x191 = 89;
int64_t x198 = 196336922401LL;
int8_t x199 = -6;
volatile uint32_t x211 = 153U;
int32_t x219 = INT32_MIN;
int8_t x226 = INT8_MIN;
static int8_t x258 = 20;
volatile int8_t x260 = INT8_MIN;
uint64_t x267 = 58462133037LLU;
static int32_t x270 = INT32_MIN;
int16_t x275 = INT16_MAX;
volatile uint8_t x278 = 9U;
int32_t t69 = -22787593;
static int32_t x281 = -39092959;
static int32_t x287 = INT32_MIN;
static int32_t t72 = 3;
volatile int8_t x294 = INT8_MAX;
int32_t t74 = 210;
uint8_t x304 = 2U;
volatile int32_t t75 = -15468344;
uint8_t x310 = UINT8_MAX;
static int64_t x317 = -5840691990133785LL;
uint64_t x320 = 5LLU;
int16_t x321 = INT16_MAX;
static uint64_t x326 = UINT64_MAX;
static uint8_t x329 = UINT8_MAX;
int16_t x338 = INT16_MIN;
int64_t x340 = 5775LL;
int32_t x343 = -3;
int16_t x347 = -1;
int8_t x352 = -1;
int32_t x355 = INT32_MIN;
uint64_t x359 = 7099283783198073402LLU;
int64_t x360 = INT64_MIN;
static uint64_t x362 = UINT64_MAX;
int16_t x367 = INT16_MAX;
int32_t x368 = INT32_MIN;
int8_t x374 = 3;
int8_t x377 = INT8_MAX;
volatile int32_t x380 = INT32_MIN;
static uint16_t x387 = 202U;
volatile uint32_t x390 = 8U;
uint32_t x392 = UINT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile int8_t x2 = INT8_MAX;
	uint32_t x3 = UINT32_MAX;
	int8_t x4 = INT8_MAX;

	t0 = (x1==((x2<x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = 141898138759LLU;
	int64_t x8 = -4020712441227067LL;
	volatile int32_t t1 = -169336574;

	t1 = (x5==((x6<x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 19101U;
	volatile int16_t x10 = INT16_MAX;
	volatile int32_t x11 = INT32_MIN;
	int16_t x12 = -1;
	volatile int32_t t2 = 6417453;

	t2 = (x9==((x10<x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile uint16_t x14 = UINT16_MAX;
	static int64_t x15 = -1LL;
	int32_t x16 = 15153;
	volatile int32_t t3 = -10;

	t3 = (x13==((x14<x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int8_t x18 = INT8_MIN;
	int64_t x19 = -1LL;
	uint16_t x20 = 200U;

	t4 = (x17==((x18<x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -24;
	static int64_t x22 = INT64_MAX;
	int64_t x23 = INT64_MIN;
	volatile int32_t t5 = 655261461;

	t5 = (x21==((x22<x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile uint16_t x27 = 115U;
	int32_t t6 = -829;

	t6 = (x25==((x26<x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	int64_t x30 = -3251941485228LL;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 1;

	t7 = (x29==((x30<x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int32_t x34 = 116745;
	int16_t x35 = -1;
	int32_t x36 = -1453;
	volatile int32_t t8 = -14365668;

	t8 = (x33==((x34<x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = -1;
	static uint16_t x39 = 414U;
	int32_t t9 = -15846573;

	t9 = (x37==((x38<x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	static int64_t x43 = -1LL;
	int64_t x44 = INT64_MIN;
	static volatile int32_t t10 = 1;

	t10 = (x41==((x42<x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MAX;
	volatile int8_t x47 = -1;
	uint32_t x48 = 6446U;
	int32_t t11 = 2734;

	t11 = (x45==((x46<x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x50 = 22U;
	volatile int16_t x51 = 0;
	static uint32_t x52 = 124790U;

	t12 = (x49==((x50<x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -3918926194LL;
	static int64_t x54 = INT64_MIN;
	volatile uint16_t x55 = 0U;
	static int16_t x56 = INT16_MIN;
	static int32_t t13 = 653709588;

	t13 = (x53==((x54<x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = -8660;
	int8_t x58 = INT8_MIN;
	volatile uint64_t x59 = 3532120LLU;
	int32_t x60 = -1;
	int32_t t14 = 1;

	t14 = (x57==((x58<x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = UINT16_MAX;
	volatile int64_t x62 = -1LL;
	volatile uint8_t x64 = 1U;
	int32_t t15 = -7;

	t15 = (x61==((x62<x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	static int32_t x67 = -54;
	static uint8_t x68 = 13U;
	int32_t t16 = -30795825;

	t16 = (x65==((x66<x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int32_t x70 = INT32_MIN;
	int16_t x71 = 1;
	volatile int32_t t17 = -2721;

	t17 = (x69==((x70<x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	static int64_t x74 = -1LL;
	volatile int16_t x75 = -8;
	volatile int32_t t18 = 3436141;

	t18 = (x73==((x74<x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MIN;
	volatile int8_t x79 = -28;
	volatile int32_t x80 = -1;
	volatile int32_t t19 = -4;

	t19 = (x77==((x78<x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 4U;
	int32_t x82 = INT32_MAX;
	int32_t x84 = -1;
	static int32_t t20 = 65204;

	t20 = (x81==((x82<x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x87 = -1;
	uint16_t x88 = 4439U;
	int32_t t21 = -37;

	t21 = (x85==((x86<x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 37059361LLU;
	volatile uint64_t x91 = 3LLU;
	int8_t x92 = -1;

	t22 = (x89==((x90<x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -14946225606LL;
	int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MIN;
	static volatile int32_t t23 = -1262678;

	t23 = (x93==((x94<x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MAX;
	int16_t x100 = INT16_MIN;
	static volatile int32_t t24 = 9215659;

	t24 = (x97==((x98<x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 147025U;
	int16_t x102 = -1;
	int16_t x103 = -165;
	uint16_t x104 = 64U;
	volatile int32_t t25 = -740419;

	t25 = (x101==((x102<x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	uint16_t x107 = 15U;
	volatile uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = -201352;

	t26 = (x105==((x106<x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	volatile int64_t x111 = -1LL;
	int64_t x112 = -759LL;
	volatile int32_t t27 = -629;

	t27 = (x109==((x110<x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int16_t x114 = -645;
	int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -168255804;

	t28 = (x113==((x114<x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 12890U;
	static uint8_t x118 = 1U;
	int8_t x119 = INT8_MIN;
	int64_t x120 = -68103124129LL;
	static volatile int32_t t29 = -399;

	t29 = (x117==((x118<x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = 46;
	int8_t x122 = INT8_MAX;
	static int64_t x123 = 4LL;
	uint16_t x124 = 31650U;
	static volatile int32_t t30 = 4167605;

	t30 = (x121==((x122<x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -1;
	volatile int16_t x126 = 1;

	t31 = (x125==((x126<x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1313801085LL;
	static uint8_t x130 = UINT8_MAX;
	static uint64_t x131 = UINT64_MAX;
	int32_t x132 = INT32_MIN;
	static int32_t t32 = 336;

	t32 = (x129==((x130<x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 62U;
	uint32_t x135 = 1070U;
	volatile int32_t t33 = -12866;

	t33 = (x133==((x134<x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	static int32_t x139 = -1;
	static volatile int32_t t34 = -38;

	t34 = (x137==((x138<x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x141 = 328239U;
	static uint32_t x142 = 474U;
	uint32_t x143 = 650351968U;
	uint32_t x144 = 1U;

	t35 = (x141==((x142<x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	volatile uint16_t x146 = UINT16_MAX;
	static int64_t x147 = INT64_MAX;
	volatile int32_t t36 = 3493302;

	t36 = (x145==((x146<x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static volatile int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -130375378;

	t37 = (x149==((x150<x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 804969905U;
	static uint16_t x155 = 955U;
	int16_t x156 = INT16_MIN;
	int32_t t38 = 710;

	t38 = (x153==((x154<x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MAX;
	static int64_t x159 = -285000388LL;
	static int32_t t39 = -9646787;

	t39 = (x157==((x158<x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	uint32_t x162 = 54056U;
	static volatile uint8_t x164 = 1U;

	t40 = (x161==((x162<x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x167 = 40U;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 404;

	t41 = (x165==((x166<x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 776849778028427388LLU;
	static volatile int32_t t42 = 2489;

	t42 = (x169==((x170<x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 338557278992LLU;
	uint8_t x174 = 11U;
	volatile uint8_t x175 = 15U;
	int8_t x176 = -1;
	volatile int32_t t43 = -490;

	t43 = (x173==((x174<x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	int64_t x178 = 668635888800938884LL;
	int64_t x180 = INT64_MIN;
	int32_t t44 = 231048122;

	t44 = (x177==((x178<x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int8_t x182 = INT8_MIN;
	uint64_t x183 = 397LLU;
	volatile int8_t x184 = -1;

	t45 = (x181==((x182<x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static int8_t x187 = INT8_MIN;
	volatile int32_t t46 = 7;

	t46 = (x185==((x186<x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x192 = -6791468LL;
	volatile int32_t t47 = -7505;

	t47 = (x189==((x190<x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int16_t x194 = -7491;
	static int8_t x195 = INT8_MAX;
	int16_t x196 = INT16_MIN;
	volatile int32_t t48 = 2170;

	t48 = (x193==((x194<x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 3;
	int64_t x200 = -1LL;
	volatile int32_t t49 = 45;

	t49 = (x197==((x198<x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	uint64_t x202 = 10972LLU;
	int8_t x203 = -2;
	uint32_t x204 = 3826U;
	int32_t t50 = 3;

	t50 = (x201==((x202<x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -18LL;
	static int8_t x206 = -1;
	volatile int64_t x207 = 48199403179544LL;
	int64_t x208 = INT64_MIN;
	int32_t t51 = -11;

	t51 = (x205==((x206<x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = INT16_MIN;
	uint8_t x212 = 4U;
	volatile int32_t t52 = -109;

	t52 = (x209==((x210<x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 25800439932LL;
	static int32_t x214 = -1;
	volatile int8_t x215 = 13;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -88;

	t53 = (x213==((x214<x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 0U;
	static int16_t x220 = -7;
	static volatile int32_t t54 = -4;

	t54 = (x217==((x218<x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 6U;
	int64_t x222 = -1LL;
	int64_t x223 = -1LL;
	uint8_t x224 = 6U;
	volatile int32_t t55 = 2;

	t55 = (x221==((x222<x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 48U;
	uint64_t x227 = 50735360008934LLU;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t56 = -1;

	t56 = (x225==((x226<x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = -2853242;
	int32_t x231 = INT32_MIN;
	static int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -1037438686;

	t57 = (x229==((x230<x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = 15120;
	int16_t x234 = 430;
	volatile int64_t x235 = -1LL;
	volatile uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = 76;

	t58 = (x233==((x234<x235)<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MAX;
	volatile int32_t x238 = -58;
	int8_t x239 = INT8_MAX;
	uint16_t x240 = 10042U;
	volatile int32_t t59 = 24597;

	t59 = (x237==((x238<x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = 6;
	int32_t x244 = INT32_MIN;
	int32_t t60 = -503619;

	t60 = (x241==((x242<x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int8_t x246 = -1;
	int32_t x247 = INT32_MAX;
	int8_t x248 = 3;
	static volatile int32_t t61 = 2;

	t61 = (x245==((x246<x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 4U;
	int8_t x250 = -45;
	uint32_t x251 = 789U;
	uint8_t x252 = 17U;
	volatile int32_t t62 = -55;

	t62 = (x249==((x250<x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MAX;
	int64_t x255 = INT64_MIN;
	int64_t x256 = 71241309163LL;
	volatile int32_t t63 = 11156;

	t63 = (x253==((x254<x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -177LL;
	static uint64_t x259 = UINT64_MAX;
	int32_t t64 = 148;

	t64 = (x257==((x258<x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -159LL;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	int8_t x264 = 0;
	static int32_t t65 = 6993712;

	t65 = (x261==((x262<x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MAX;
	int32_t x266 = INT32_MIN;
	int64_t x268 = -1LL;
	volatile int32_t t66 = 1;

	t66 = (x265==((x266<x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 52U;
	uint64_t x271 = UINT64_MAX;
	static uint64_t x272 = UINT64_MAX;
	static int32_t t67 = 24;

	t67 = (x269==((x270<x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 359962184LLU;
	volatile int32_t x274 = INT32_MIN;
	int64_t x276 = 1LL;
	volatile int32_t t68 = -22;

	t68 = (x273==((x274<x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -7;
	int64_t x279 = INT64_MAX;
	uint8_t x280 = 86U;

	t69 = (x277==((x278<x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = 62U;
	uint8_t x283 = 72U;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t70 = 42590446;

	t70 = (x281==((x282<x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -3;
	int8_t x286 = -36;
	int64_t x288 = INT64_MIN;
	int32_t t71 = 3;

	t71 = (x285==((x286<x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MIN;
	static volatile uint8_t x290 = 0U;
	uint8_t x291 = 11U;
	int32_t x292 = INT32_MAX;

	t72 = (x289==((x290<x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = 14;

	t73 = (x293==((x294<x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	int16_t x298 = -58;
	int32_t x299 = 3;
	int16_t x300 = INT16_MAX;

	t74 = (x297==((x298<x299)<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 3210U;
	int8_t x302 = INT8_MIN;
	int16_t x303 = 0;

	t75 = (x301==((x302<x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	volatile int8_t x306 = 1;
	int32_t x307 = INT32_MIN;
	static int64_t x308 = 17031666549855LL;
	int32_t t76 = -6;

	t76 = (x305==((x306<x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 7354351610LL;
	int32_t x311 = INT32_MIN;
	static volatile uint8_t x312 = 1U;
	int32_t t77 = -1670924;

	t77 = (x309==((x310<x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MAX;
	volatile int32_t t78 = -128008;

	t78 = (x313==((x314<x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x318 = 0U;
	uint8_t x319 = UINT8_MAX;
	volatile int32_t t79 = 69;

	t79 = (x317==((x318<x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x322 = INT32_MIN;
	int64_t x323 = -2999699374133004LL;
	int16_t x324 = -1;
	static volatile int32_t t80 = 6433631;

	t80 = (x321==((x322<x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	static volatile int8_t x327 = -1;
	int16_t x328 = 1;
	int32_t t81 = 0;

	t81 = (x325==((x326<x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = -10788857713377388LL;
	uint8_t x331 = 0U;
	int16_t x332 = 1;
	int32_t t82 = 36924;

	t82 = (x329==((x330<x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int16_t x334 = 2423;
	uint64_t x335 = UINT64_MAX;
	static int16_t x336 = INT16_MIN;
	static int32_t t83 = 4528691;

	t83 = (x333==((x334<x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	int32_t t84 = 46383;

	t84 = (x337==((x338<x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	uint16_t x342 = 99U;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = 9339;

	t85 = (x341==((x342<x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;
	static uint64_t x346 = 52LLU;
	uint16_t x348 = 4U;
	volatile int32_t t86 = 7499603;

	t86 = (x345==((x346<x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 1864LLU;
	int64_t x350 = INT64_MIN;
	static int8_t x351 = INT8_MIN;
	volatile int32_t t87 = -383;

	t87 = (x349==((x350<x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	static volatile int64_t x354 = -1LL;
	int32_t x356 = -486980666;
	volatile int32_t t88 = -31418857;

	t88 = (x353==((x354<x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 25339LLU;
	static int8_t x358 = -21;
	static int32_t t89 = 227;

	t89 = (x357==((x358<x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint32_t x363 = UINT32_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t90 = 2626306;

	t90 = (x361==((x362<x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	static int8_t x366 = 4;
	int32_t t91 = 5;

	t91 = (x365==((x366<x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = 13231U;
	volatile int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t92 = 0;

	t92 = (x369==((x370<x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 17LLU;
	volatile int64_t x375 = INT64_MIN;
	int16_t x376 = 16;
	int32_t t93 = 207768;

	t93 = (x373==((x374<x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x378 = 16051U;
	static uint64_t x379 = UINT64_MAX;
	int32_t t94 = -1;

	t94 = (x377==((x378<x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	int16_t x382 = -27;
	uint64_t x383 = 1408800200549871335LLU;
	uint16_t x384 = 0U;
	static int32_t t95 = -3042;

	t95 = (x381==((x382<x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 152;
	uint64_t x386 = 221422552LLU;
	uint8_t x388 = 38U;
	volatile int32_t t96 = 17;

	t96 = (x385==((x386<x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	uint8_t x391 = 111U;
	static int32_t t97 = 451812271;

	t97 = (x389==((x390<x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MAX;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = -4521725LL;
	volatile int32_t t98 = 182873921;

	t98 = (x393==((x394<x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x397 = 253LLU;
	int32_t x398 = -1;
	volatile int32_t x399 = INT32_MIN;
	uint32_t x400 = 15273U;
	volatile int32_t t99 = 2162;

	t99 = (x397==((x398<x399)<x400));

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

