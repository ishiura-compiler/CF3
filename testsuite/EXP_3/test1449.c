#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 2U;
int16_t x5 = INT16_MIN;
volatile int16_t x9 = -29;
volatile uint32_t x10 = UINT32_MAX;
uint64_t x14 = UINT64_MAX;
int16_t x16 = -193;
int8_t x26 = -1;
uint16_t x40 = 4U;
volatile int32_t t10 = -21;
int8_t x49 = -1;
volatile int8_t x58 = INT8_MIN;
static volatile int32_t x60 = INT32_MAX;
volatile int32_t x64 = INT32_MAX;
volatile uint16_t x65 = 5U;
int32_t t16 = 47653;
static int8_t x81 = INT8_MIN;
uint8_t x89 = 0U;
int64_t x93 = 1085291497003LL;
int64_t x98 = -447595068LL;
int64_t x103 = INT64_MIN;
volatile int32_t t25 = -59983;
static uint16_t x105 = UINT16_MAX;
static int16_t x117 = INT16_MAX;
volatile int32_t x118 = INT32_MIN;
uint32_t x119 = UINT32_MAX;
uint8_t x122 = 9U;
volatile int32_t t30 = 156;
static volatile uint64_t x133 = 16993179467933LLU;
int32_t x134 = INT32_MIN;
volatile int32_t t33 = -5623;
int8_t x142 = 59;
int16_t x144 = INT16_MIN;
int16_t x146 = -1;
int8_t x150 = -1;
volatile int32_t t37 = 1750;
volatile int16_t x156 = INT16_MIN;
int8_t x158 = INT8_MAX;
int8_t x161 = INT8_MIN;
static int32_t t40 = -3463;
static uint8_t x166 = 6U;
volatile int32_t x176 = -1;
static int32_t x178 = 6;
volatile int8_t x180 = INT8_MIN;
int64_t x187 = INT64_MAX;
static int64_t x192 = 15066005LL;
int16_t x194 = INT16_MIN;
volatile uint16_t x201 = 0U;
int16_t x208 = 25;
static int32_t t52 = -3;
int8_t x230 = -5;
int8_t x248 = 26;
int32_t t61 = 117027;
volatile uint8_t x252 = 2U;
static int16_t x254 = 23;
int32_t x255 = INT32_MAX;
volatile int8_t x259 = -1;
int32_t x261 = INT32_MIN;
static uint16_t x266 = UINT16_MAX;
volatile int32_t t66 = 641897291;
int32_t t67 = 182437617;
static int8_t x273 = -1;
volatile int32_t t68 = 42;
int32_t t69 = 3192949;
int64_t x282 = INT64_MAX;
int16_t x284 = INT16_MIN;
int32_t t70 = -46;
int32_t x285 = INT32_MIN;
volatile int32_t t73 = 29;
int16_t x298 = INT16_MIN;
uint64_t x299 = 125273438860LLU;
uint32_t x300 = 1218129595U;
uint8_t x303 = UINT8_MAX;
uint16_t x311 = 0U;
volatile int32_t x320 = INT32_MAX;
int16_t x325 = 1110;
uint64_t x334 = 10623517LLU;
volatile int32_t t85 = 24373779;
int16_t x350 = INT16_MIN;
static volatile int32_t t87 = -5959264;
int64_t x353 = 123464398LL;
int8_t x354 = INT8_MIN;
volatile int16_t x360 = INT16_MAX;
int8_t x363 = -53;
volatile int8_t x364 = INT8_MIN;
int16_t x373 = -1;
static int32_t x380 = 1;
static volatile int32_t x381 = -1;
int32_t t95 = 6859580;
int16_t x394 = INT16_MIN;
int16_t x396 = -118;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile uint64_t x2 = 980854LLU;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 32983222;

	t0 = ((x1==x2)<<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 44;
	int64_t x7 = INT64_MIN;
	int16_t x8 = -7;
	volatile int32_t t1 = 142420847;

	t1 = ((x5==x6)<<(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x11 = -54LL;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -1;

	t2 = ((x9==x10)<<(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -20005742730478235LL;
	static int8_t x15 = INT8_MAX;
	volatile int32_t t3 = -411809980;

	t3 = ((x13==x14)<<(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 2;
	uint64_t x18 = 63435LLU;
	int8_t x19 = INT8_MIN;
	static volatile int16_t x20 = -148;
	static volatile int32_t t4 = -642;

	t4 = ((x17==x18)<<(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 7LL;
	static volatile int32_t x22 = -5097489;
	uint64_t x23 = 247173558LLU;
	int64_t x24 = INT64_MAX;
	static volatile int32_t t5 = 893147;

	t5 = ((x21==x22)<<(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	uint64_t x27 = 33846227157LLU;
	int8_t x28 = -1;
	volatile int32_t t6 = 1025570681;

	t6 = ((x25==x26)<<(x27<x28));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	uint64_t x30 = UINT64_MAX;
	static int32_t x31 = INT32_MAX;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 35;

	t7 = ((x29==x30)<<(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 4U;
	int32_t x34 = INT32_MIN;
	int32_t x35 = 528811151;
	static int32_t x36 = 2362;
	volatile int32_t t8 = 1;

	t8 = ((x33==x34)<<(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -385;
	int8_t x38 = INT8_MIN;
	int8_t x39 = -1;
	int32_t t9 = 1;

	t9 = ((x37==x38)<<(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int16_t x42 = -289;
	volatile uint8_t x43 = UINT8_MAX;
	static int8_t x44 = -27;

	t10 = ((x41==x42)<<(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -2;
	int64_t x46 = 77309087548950LL;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = 236U;
	static volatile int32_t t11 = 10;

	t11 = ((x45==x46)<<(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 14837540LLU;
	int16_t x51 = -5;
	volatile int16_t x52 = INT16_MAX;
	int32_t t12 = -228099;

	t12 = ((x49==x50)<<(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = 837LL;
	uint64_t x54 = UINT64_MAX;
	int32_t x55 = INT32_MIN;
	uint32_t x56 = 300638476U;
	int32_t t13 = 36259;

	t13 = ((x53==x54)<<(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -1;
	uint8_t x59 = UINT8_MAX;
	int32_t t14 = 85;

	t14 = ((x57==x58)<<(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 6U;
	int32_t x62 = INT32_MIN;
	uint64_t x63 = UINT64_MAX;
	int32_t t15 = 14459;

	t15 = ((x61==x62)<<(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MAX;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = 0U;

	t16 = ((x65==x66)<<(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = UINT64_MAX;
	uint8_t x72 = 112U;
	int32_t t17 = 1;

	t17 = ((x69==x70)<<(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = 5;
	volatile uint64_t x74 = 30331980043LLU;
	int32_t x75 = INT32_MIN;
	uint16_t x76 = 211U;
	volatile int32_t t18 = -49;

	t18 = ((x73==x74)<<(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -2;
	static uint8_t x78 = 1U;
	int16_t x79 = INT16_MIN;
	int8_t x80 = 14;
	int32_t t19 = 21094;

	t19 = ((x77==x78)<<(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x82 = UINT32_MAX;
	static uint16_t x83 = 1U;
	uint32_t x84 = 61U;
	volatile int32_t t20 = -180;

	t20 = ((x81==x82)<<(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = 2302;

	t21 = ((x85==x86)<<(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x90 = UINT32_MAX;
	static int16_t x91 = INT16_MIN;
	int32_t x92 = 22;
	volatile int32_t t22 = 6118;

	t22 = ((x89==x90)<<(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = 2;
	uint32_t x95 = 7613612U;
	int16_t x96 = 0;
	volatile int32_t t23 = -747151;

	t23 = ((x93==x94)<<(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int16_t x99 = -102;
	static uint8_t x100 = UINT8_MAX;
	int32_t t24 = 0;

	t24 = ((x97==x98)<<(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	uint8_t x102 = 0U;
	static int16_t x104 = -1;

	t25 = ((x101==x102)<<(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x106 = INT64_MAX;
	static volatile int32_t x107 = INT32_MIN;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = 102211;

	t26 = ((x105==x106)<<(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MIN;
	int8_t x110 = -1;
	int64_t x111 = INT64_MAX;
	static volatile uint64_t x112 = UINT64_MAX;
	volatile int32_t t27 = 1743;

	t27 = ((x109==x110)<<(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 55U;
	static int64_t x114 = INT64_MAX;
	static uint64_t x115 = UINT64_MAX;
	uint8_t x116 = UINT8_MAX;
	static int32_t t28 = 0;

	t28 = ((x113==x114)<<(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x120 = 16;
	static int32_t t29 = 1569070;

	t29 = ((x117==x118)<<(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 51U;
	static int16_t x123 = 892;
	static volatile int16_t x124 = 45;

	t30 = ((x121==x122)<<(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static volatile int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	int16_t x128 = -1;
	volatile int32_t t31 = -7751055;

	t31 = ((x125==x126)<<(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	uint32_t x130 = UINT32_MAX;
	uint16_t x131 = 3828U;
	static uint64_t x132 = 6596958413981116835LLU;
	int32_t t32 = 46;

	t32 = ((x129==x130)<<(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x135 = INT32_MAX;
	int8_t x136 = -1;

	t33 = ((x133==x134)<<(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	volatile int64_t x138 = -1LL;
	uint16_t x139 = UINT16_MAX;
	int64_t x140 = INT64_MAX;
	volatile int32_t t34 = -1043031705;

	t34 = ((x137==x138)<<(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	volatile int32_t t35 = -1105;

	t35 = ((x141==x142)<<(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int64_t x147 = INT64_MAX;
	volatile int16_t x148 = 4242;
	static int32_t t36 = 59498;

	t36 = ((x145==x146)<<(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 603636;
	int32_t x151 = INT32_MAX;
	static uint64_t x152 = UINT64_MAX;

	t37 = ((x149==x150)<<(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	static int8_t x155 = 10;
	int32_t t38 = -1;

	t38 = ((x153==x154)<<(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int64_t x159 = -93203098LL;
	uint64_t x160 = 222198053465120726LLU;
	static volatile int32_t t39 = -345048;

	t39 = ((x157==x158)<<(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x162 = UINT8_MAX;
	static uint16_t x163 = 98U;
	static uint64_t x164 = 347LLU;

	t40 = ((x161==x162)<<(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 0;
	int32_t x167 = 7229;
	uint64_t x168 = UINT64_MAX;
	int32_t t41 = 118;

	t41 = ((x165==x166)<<(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 17U;
	uint8_t x170 = UINT8_MAX;
	volatile int64_t x171 = -1LL;
	int16_t x172 = -12962;
	volatile int32_t t42 = 22;

	t42 = ((x169==x170)<<(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = -1LL;
	static int32_t x174 = INT32_MAX;
	int64_t x175 = 414923LL;
	int32_t t43 = 32956024;

	t43 = ((x173==x174)<<(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 2341;
	int8_t x179 = INT8_MIN;
	static volatile int32_t t44 = -630283611;

	t44 = ((x177==x178)<<(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 987721606460667018LLU;
	int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MIN;
	volatile int64_t x184 = -1LL;
	volatile int32_t t45 = 3321;

	t45 = ((x181==x182)<<(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -2;
	static uint32_t x186 = UINT32_MAX;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t46 = 7682752;

	t46 = ((x185==x186)<<(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 1U;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MIN;
	static int32_t t47 = -237;

	t47 = ((x189==x190)<<(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = -2345LL;
	int16_t x195 = INT16_MIN;
	int64_t x196 = 217LL;
	int32_t t48 = 111616;

	t48 = ((x193==x194)<<(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	static int16_t x198 = -1;
	int8_t x199 = 1;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -750557496;

	t49 = ((x197==x198)<<(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x202 = UINT8_MAX;
	int16_t x203 = -1;
	static volatile uint32_t x204 = UINT32_MAX;
	volatile int32_t t50 = -226524198;

	t50 = ((x201==x202)<<(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 945387402LLU;
	int64_t x206 = INT64_MIN;
	int8_t x207 = -1;
	static int32_t t51 = 3995350;

	t51 = ((x205==x206)<<(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = 1220;
	static uint16_t x210 = 6938U;
	uint64_t x211 = 245315656979LLU;
	uint8_t x212 = 21U;

	t52 = ((x209==x210)<<(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MIN;
	volatile uint8_t x216 = UINT8_MAX;
	static int32_t t53 = -701838;

	t53 = ((x213==x214)<<(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 18261418U;
	volatile int16_t x218 = -42;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = INT8_MIN;
	static int32_t t54 = -38;

	t54 = ((x217==x218)<<(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 5606581445295187LLU;
	int64_t x222 = INT64_MIN;
	static uint64_t x223 = 371608336022176LLU;
	int8_t x224 = -1;
	volatile int32_t t55 = -15;

	t55 = ((x221==x222)<<(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x226 = 773LLU;
	int64_t x227 = -1LL;
	int32_t x228 = -1;
	volatile int32_t t56 = -2601;

	t56 = ((x225==x226)<<(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -289;
	int32_t x231 = -1;
	volatile uint16_t x232 = 139U;
	static int32_t t57 = 28;

	t57 = ((x229==x230)<<(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	int16_t x234 = INT16_MAX;
	static int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = -353;

	t58 = ((x233==x234)<<(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = 1917512U;
	int16_t x239 = INT16_MIN;
	uint32_t x240 = 21173U;
	static int32_t t59 = -1049;

	t59 = ((x237==x238)<<(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int64_t x242 = -1LL;
	int64_t x243 = INT64_MAX;
	int64_t x244 = INT64_MIN;
	static volatile int32_t t60 = -2;

	t60 = ((x241==x242)<<(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 7U;
	static int16_t x246 = INT16_MIN;
	int32_t x247 = -186;

	t61 = ((x245==x246)<<(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int32_t x250 = -1;
	uint16_t x251 = 7U;
	static int32_t t62 = 1880;

	t62 = ((x249==x250)<<(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	int64_t x256 = 104594052045976LL;
	volatile int32_t t63 = 7;

	t63 = ((x253==x254)<<(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = -1LL;
	static uint32_t x260 = 15U;
	int32_t t64 = -47497;

	t64 = ((x257==x258)<<(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t65 = -2490221;

	t65 = ((x261==x262)<<(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x267 = 1U;
	volatile int8_t x268 = INT8_MIN;

	t66 = ((x265==x266)<<(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 0U;
	int8_t x270 = -56;
	uint16_t x271 = 115U;
	uint64_t x272 = UINT64_MAX;

	t67 = ((x269==x270)<<(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x274 = 3U;
	static uint64_t x275 = UINT64_MAX;
	uint32_t x276 = 0U;

	t68 = ((x273==x274)<<(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	uint32_t x278 = 2183171U;
	static volatile int64_t x279 = 752797154LL;
	uint32_t x280 = 52740U;

	t69 = ((x277==x278)<<(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	int32_t x283 = -1;

	t70 = ((x281==x282)<<(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 10U;
	int32_t x287 = -1;
	static int32_t x288 = INT32_MAX;
	volatile int32_t t71 = -1020198;

	t71 = ((x285==x286)<<(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int8_t x290 = -1;
	uint16_t x291 = 27U;
	volatile int8_t x292 = 7;
	int32_t t72 = -89814;

	t72 = ((x289==x290)<<(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MIN;
	volatile int8_t x296 = INT8_MIN;

	t73 = ((x293==x294)<<(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	static int32_t t74 = 519;

	t74 = ((x297==x298)<<(x299<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -124151207;
	volatile int8_t x302 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t75 = 1057;

	t75 = ((x301==x302)<<(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static int64_t x306 = -133616085314560302LL;
	volatile uint32_t x307 = 176867911U;
	volatile int16_t x308 = -12799;
	int32_t t76 = 79;

	t76 = ((x305==x306)<<(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	static uint32_t x310 = 10099U;
	int64_t x312 = -1LL;
	static int32_t t77 = -45;

	t77 = ((x309==x310)<<(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = INT32_MIN;
	uint64_t x316 = 1667141551323775LLU;
	volatile int32_t t78 = 1;

	t78 = ((x313==x314)<<(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = UINT32_MAX;
	int32_t t79 = 331976401;

	t79 = ((x317==x318)<<(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	static int8_t x322 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	static volatile int16_t x324 = INT16_MIN;
	volatile int32_t t80 = -50;

	t80 = ((x321==x322)<<(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x326 = -1LL;
	static volatile int16_t x327 = -1;
	int32_t x328 = 6;
	int32_t t81 = -9;

	t81 = ((x325==x326)<<(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = -4533942;
	volatile int16_t x330 = 5843;
	uint8_t x331 = 3U;
	static int32_t x332 = 935969;
	volatile int32_t t82 = 15911041;

	t82 = ((x329==x330)<<(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	uint8_t x335 = UINT8_MAX;
	volatile uint16_t x336 = UINT16_MAX;
	int32_t t83 = 3810;

	t83 = ((x333==x334)<<(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	uint16_t x338 = 235U;
	static int16_t x339 = INT16_MIN;
	static volatile uint32_t x340 = 31713U;
	volatile int32_t t84 = -1;

	t84 = ((x337==x338)<<(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = 59;
	int8_t x342 = 1;
	uint16_t x343 = UINT16_MAX;
	uint8_t x344 = UINT8_MAX;

	t85 = ((x341==x342)<<(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int32_t x346 = INT32_MIN;
	int32_t x347 = -1;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -1;

	t86 = ((x345==x346)<<(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 3U;
	static int32_t x351 = -1;
	int64_t x352 = -181493661788848LL;

	t87 = ((x349==x350)<<(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x355 = INT8_MIN;
	static uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = -481202;

	t88 = ((x353==x354)<<(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 301U;
	volatile int64_t x358 = INT64_MIN;
	int32_t x359 = 6826155;
	int32_t t89 = 20602092;

	t89 = ((x357==x358)<<(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	volatile int32_t t90 = -624137328;

	t90 = ((x361==x362)<<(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	volatile uint64_t x366 = 33001232398753LLU;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MAX;
	int32_t t91 = -126465;

	t91 = ((x365==x366)<<(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MAX;
	uint64_t x371 = 620281013358LLU;
	int64_t x372 = INT64_MIN;
	static volatile int32_t t92 = -1;

	t92 = ((x369==x370)<<(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = -1LL;
	uint8_t x375 = 1U;
	int8_t x376 = 0;
	static volatile int32_t t93 = -8323;

	t93 = ((x373==x374)<<(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 27U;
	static volatile int8_t x378 = INT8_MAX;
	static uint32_t x379 = 49241027U;
	volatile int32_t t94 = 98994;

	t94 = ((x377==x378)<<(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x382 = -1;
	int32_t x383 = INT32_MIN;
	volatile int8_t x384 = -1;

	t95 = ((x381==x382)<<(x383<x384));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	static volatile int8_t x387 = -1;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 22194;

	t96 = ((x385==x386)<<(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int32_t x390 = INT32_MIN;
	volatile uint16_t x391 = UINT16_MAX;
	static uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = -8347;

	t97 = ((x389==x390)<<(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -333391;
	uint64_t x395 = 458916117LLU;
	volatile int32_t t98 = -48310;

	t98 = ((x393==x394)<<(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	int16_t x399 = -1;
	volatile int64_t x400 = -1LL;
	static volatile int32_t t99 = 605639266;

	t99 = ((x397==x398)<<(x399<x400));

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

