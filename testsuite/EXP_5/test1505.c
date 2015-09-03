#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
uint32_t x8 = 2U;
static volatile int8_t x13 = -1;
static int64_t x14 = -1LL;
volatile int32_t t3 = -13;
int32_t x21 = INT32_MIN;
int16_t x23 = -1;
int32_t t5 = 1969418;
volatile uint64_t x25 = UINT64_MAX;
static volatile uint64_t x28 = UINT64_MAX;
static int32_t t8 = 20343198;
static int16_t x38 = -53;
uint16_t x41 = UINT16_MAX;
int8_t x48 = 8;
int64_t x50 = -3851666276702LL;
static int32_t x51 = INT32_MIN;
volatile int32_t t12 = 43672004;
int8_t x55 = INT8_MIN;
static int32_t x65 = INT32_MAX;
uint8_t x69 = 1U;
int32_t t17 = -10008133;
int16_t x84 = INT16_MIN;
int8_t x85 = INT8_MIN;
volatile int32_t x91 = INT32_MIN;
volatile int8_t x93 = 2;
int8_t x97 = INT8_MIN;
int16_t x104 = INT16_MIN;
uint16_t x107 = 17758U;
uint64_t x108 = 3701290108LLU;
int16_t x110 = INT16_MIN;
static int32_t x128 = INT32_MIN;
uint8_t x131 = 11U;
static int64_t x132 = INT64_MIN;
volatile int32_t t32 = 34;
uint64_t x136 = 1855303570LLU;
int32_t t35 = 1049542435;
int32_t t36 = 10897;
uint8_t x150 = 6U;
int8_t x152 = INT8_MIN;
volatile int64_t x166 = INT64_MIN;
static int8_t x167 = 0;
volatile uint32_t x171 = UINT32_MAX;
int8_t x179 = -5;
uint16_t x180 = 10U;
volatile int64_t x182 = 2249268951857231336LL;
int32_t x183 = INT32_MIN;
int32_t x184 = INT32_MIN;
static volatile int32_t t45 = 43;
int32_t x191 = -1;
static uint8_t x209 = UINT8_MAX;
static int32_t t52 = 27;
int16_t x219 = INT16_MIN;
static uint64_t x222 = 6405162386412779LLU;
volatile int16_t x225 = INT16_MAX;
static int8_t x231 = INT8_MIN;
int8_t x232 = INT8_MIN;
int32_t t57 = -4149;
volatile int32_t t58 = -27;
volatile int32_t t60 = -937319;
static uint16_t x254 = 7U;
int32_t x260 = INT32_MAX;
volatile int32_t t64 = 446158097;
uint8_t x265 = 0U;
static uint8_t x266 = 0U;
int8_t x269 = INT8_MIN;
uint32_t x272 = UINT32_MAX;
static uint64_t x279 = UINT64_MAX;
int16_t x280 = 15;
int8_t x286 = -1;
int8_t x295 = -1;
static int32_t x298 = INT32_MAX;
static int32_t x316 = INT32_MAX;
int32_t x318 = INT32_MAX;
volatile int8_t x321 = 4;
static int16_t x322 = -163;
uint16_t x325 = 2U;
int64_t x333 = INT64_MIN;
int32_t t83 = -1428;
int16_t x339 = -93;
static int8_t x340 = INT8_MAX;
static uint16_t x344 = 2933U;
int16_t x345 = INT16_MIN;
volatile int32_t t87 = 3;
uint8_t x354 = 3U;
static volatile int8_t x355 = -4;
volatile int32_t t88 = -28205;
static int32_t t89 = -4;
static volatile int8_t x369 = INT8_MIN;
uint64_t x370 = UINT64_MAX;
volatile uint32_t x372 = 2861631U;
static int32_t x375 = 3893202;
static int32_t t93 = -7313;
int16_t x379 = 5963;
int16_t x388 = -1;
static int32_t t96 = -164504;
int32_t x395 = INT32_MAX;
static volatile int32_t t98 = -3763;


void f0(void) {
	volatile int16_t x1 = -5;
	static volatile int8_t x3 = 25;
	int8_t x4 = -1;
	static int32_t t0 = 89490;

	t0 = (x1<=((x2<x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int8_t x6 = -1;
	int16_t x7 = INT16_MIN;
	volatile int32_t t1 = 39012255;

	t1 = (x5<=((x6<x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MIN;
	static int8_t x11 = INT8_MIN;
	uint32_t x12 = 123174301U;
	int32_t t2 = 8461;

	t2 = (x9<=((x10<x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x15 = UINT8_MAX;
	uint16_t x16 = 8137U;

	t3 = (x13<=((x14<x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MAX;
	uint8_t x20 = 1U;
	int32_t t4 = -455780325;

	t4 = (x17<=((x18<x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 120U;
	static int16_t x24 = INT16_MAX;

	t5 = (x21<=((x22<x23)|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	volatile int32_t t6 = -5;

	t6 = (x25<=((x26<x27)|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MAX;
	int32_t x32 = INT32_MAX;
	static int32_t t7 = -111299400;

	t7 = (x29<=((x30<x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -10876339753552LL;
	volatile int32_t x34 = INT32_MIN;
	uint64_t x35 = UINT64_MAX;
	int64_t x36 = -56LL;

	t8 = (x33<=((x34<x35)|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 6U;
	uint32_t x39 = UINT32_MAX;
	static uint64_t x40 = 18296497573886LLU;
	int32_t t9 = -7234;

	t9 = (x37<=((x38<x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -11755;
	volatile int64_t x43 = INT64_MAX;
	int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = 15;

	t10 = (x41<=((x42<x43)|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int64_t x46 = INT64_MAX;
	int64_t x47 = -3LL;
	volatile int32_t t11 = 1002;

	t11 = (x45<=((x46<x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 12U;
	int8_t x52 = INT8_MAX;

	t12 = (x49<=((x50<x51)|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 28U;
	volatile int32_t x54 = INT32_MIN;
	volatile int32_t x56 = -1;
	int32_t t13 = -3;

	t13 = (x53<=((x54<x55)|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 0;
	uint16_t x58 = 15186U;
	int8_t x59 = -8;
	uint64_t x60 = 38LLU;
	int32_t t14 = -437;

	t14 = (x57<=((x58<x59)|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x62 = -1;
	uint64_t x63 = 9552LLU;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 120410;

	t15 = (x61<=((x62<x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = -1;
	uint32_t x67 = UINT32_MAX;
	int8_t x68 = -1;
	volatile int32_t t16 = 4233361;

	t16 = (x65<=((x66<x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 1U;
	static uint16_t x71 = 5696U;
	volatile int64_t x72 = -1LL;

	t17 = (x69<=((x70<x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -1;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 33319;

	t18 = (x73<=((x74<x75)|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 104148825LLU;
	static volatile int8_t x78 = -1;
	volatile int16_t x79 = INT16_MAX;
	uint8_t x80 = 10U;
	int32_t t19 = 4;

	t19 = (x77<=((x78<x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 33;
	uint64_t x82 = 4481760755759233019LLU;
	int16_t x83 = INT16_MIN;
	static volatile int32_t t20 = -8369661;

	t20 = (x81<=((x82<x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = 2U;
	int64_t x87 = -1LL;
	int64_t x88 = 453064481779LL;
	static volatile int32_t t21 = 100287066;

	t21 = (x85<=((x86<x87)|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = 0;
	int16_t x92 = -1;
	volatile int32_t t22 = 2771;

	t22 = (x89<=((x90<x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x94 = 1;
	int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t23 = -662172;

	t23 = (x93<=((x94<x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = UINT64_MAX;
	volatile uint8_t x99 = 1U;
	int32_t x100 = -1;
	static int32_t t24 = -13;

	t24 = (x97<=((x98<x99)|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	static int32_t x102 = INT32_MIN;
	int16_t x103 = -1;
	int32_t t25 = -1;

	t25 = (x101<=((x102<x103)|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 15LLU;
	uint64_t x106 = 10889691669643772LLU;
	int32_t t26 = 2016059;

	t26 = (x105<=((x106<x107)|x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	volatile int16_t x111 = INT16_MIN;
	int8_t x112 = -1;
	int32_t t27 = 480006124;

	t27 = (x109<=((x110<x111)|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x113 = 21U;
	int8_t x114 = INT8_MIN;
	int64_t x115 = INT64_MIN;
	static uint16_t x116 = 101U;
	int32_t t28 = -1;

	t28 = (x113<=((x114<x115)|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -1;
	static int16_t x118 = INT16_MIN;
	volatile int64_t x119 = INT64_MIN;
	int32_t x120 = -75229;
	static volatile int32_t t29 = -982;

	t29 = (x117<=((x118<x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = 3559985LL;
	static uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 9U;
	static uint16_t x124 = 199U;
	static volatile int32_t t30 = 208094;

	t30 = (x121<=((x122<x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -7091497;
	volatile uint8_t x126 = UINT8_MAX;
	uint32_t x127 = UINT32_MAX;
	int32_t t31 = 6184850;

	t31 = (x125<=((x126<x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 2U;
	int8_t x130 = INT8_MIN;

	t32 = (x129<=((x130<x131)|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 26U;
	uint64_t x134 = 336396311668468687LLU;
	volatile int32_t x135 = INT32_MAX;
	static int32_t t33 = 62;

	t33 = (x133<=((x134<x135)|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	int32_t x138 = -288139594;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = 1;
	volatile int32_t t34 = -1;

	t34 = (x137<=((x138<x139)|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int64_t x142 = -1LL;
	uint32_t x143 = 996U;
	int32_t x144 = -1;

	t35 = (x141<=((x142<x143)|x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 1U;
	uint32_t x146 = 215427U;
	int8_t x147 = -1;
	static uint8_t x148 = 5U;

	t36 = (x145<=((x146<x147)|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	uint64_t x151 = UINT64_MAX;
	int32_t t37 = -566522;

	t37 = (x149<=((x150<x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x153 = 1U;
	int8_t x154 = 3;
	int16_t x155 = INT16_MIN;
	static int32_t x156 = 2258;
	int32_t t38 = -41773;

	t38 = (x153<=((x154<x155)|x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -2868;
	int32_t x158 = INT32_MIN;
	static int16_t x159 = INT16_MIN;
	static volatile uint16_t x160 = 5439U;
	volatile int32_t t39 = -70;

	t39 = (x157<=((x158<x159)|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 22U;
	int8_t x162 = 3;
	static int32_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 10068703;

	t40 = (x161<=((x162<x163)|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 102U;
	volatile uint32_t x168 = 358692U;
	static int32_t t41 = -113537455;

	t41 = (x165<=((x166<x167)|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile int64_t x170 = -1LL;
	volatile uint64_t x172 = UINT64_MAX;
	int32_t t42 = 5948143;

	t42 = (x169<=((x170<x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int32_t x174 = -1;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = -121204;

	t43 = (x173<=((x174<x175)|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 1265940526U;
	static int16_t x178 = INT16_MIN;
	volatile int32_t t44 = 521801608;

	t44 = (x177<=((x178<x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 227800640LL;

	t45 = (x181<=((x182<x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	volatile int8_t x186 = INT8_MIN;
	uint64_t x187 = 5192048LLU;
	volatile int16_t x188 = 309;
	volatile int32_t t46 = -8;

	t46 = (x185<=((x186<x187)|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = -1LL;
	volatile int32_t x190 = -1;
	uint64_t x192 = UINT64_MAX;
	int32_t t47 = -3550;

	t47 = (x189<=((x190<x191)|x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 0U;
	uint16_t x194 = 154U;
	volatile int64_t x195 = -1LL;
	uint16_t x196 = 190U;
	int32_t t48 = 657855;

	t48 = (x193<=((x194<x195)|x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static volatile uint8_t x198 = 0U;
	uint32_t x199 = UINT32_MAX;
	volatile uint32_t x200 = 55120U;
	volatile int32_t t49 = 0;

	t49 = (x197<=((x198<x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	uint16_t x202 = UINT16_MAX;
	uint16_t x203 = 18U;
	uint64_t x204 = 2473732725LLU;
	int32_t t50 = 1254;

	t50 = (x201<=((x202<x203)|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = 1382894555701LL;
	uint8_t x207 = 0U;
	volatile uint64_t x208 = UINT64_MAX;
	int32_t t51 = 1275;

	t51 = (x205<=((x206<x207)|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x210 = 388537720U;
	volatile int64_t x211 = INT64_MIN;
	uint64_t x212 = UINT64_MAX;

	t52 = (x209<=((x210<x211)|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int8_t x214 = -1;
	int64_t x215 = -29802704848261660LL;
	volatile uint8_t x216 = UINT8_MAX;
	static volatile int32_t t53 = -3216;

	t53 = (x213<=((x214<x215)|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t54 = -5102252;

	t54 = (x217<=((x218<x219)|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	int64_t x223 = INT64_MIN;
	uint8_t x224 = 1U;
	int32_t t55 = 210;

	t55 = (x221<=((x222<x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x226 = 1U;
	static int16_t x227 = INT16_MIN;
	volatile uint64_t x228 = 28570285387970804LLU;
	volatile int32_t t56 = 291478;

	t56 = (x225<=((x226<x227)|x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x229 = 12U;
	volatile int32_t x230 = -1;

	t57 = (x229<=((x230<x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = UINT16_MAX;
	int8_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	static uint8_t x236 = 25U;

	t58 = (x233<=((x234<x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MAX;
	uint64_t x240 = 1129LLU;
	volatile int32_t t59 = -28360;

	t59 = (x237<=((x238<x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile int64_t x242 = INT64_MIN;
	static int8_t x243 = INT8_MIN;
	int8_t x244 = INT8_MAX;

	t60 = (x241<=((x242<x243)|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	int8_t x246 = INT8_MIN;
	int32_t x247 = -1;
	static uint8_t x248 = 92U;
	volatile int32_t t61 = -18202688;

	t61 = (x245<=((x246<x247)|x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 373;
	int32_t x250 = -1;
	int64_t x251 = -247LL;
	volatile uint8_t x252 = 5U;
	static volatile int32_t t62 = 0;

	t62 = (x249<=((x250<x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	uint16_t x255 = 1U;
	volatile int8_t x256 = INT8_MAX;
	volatile int32_t t63 = 14736265;

	t63 = (x253<=((x254<x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	static volatile uint8_t x258 = 4U;
	int8_t x259 = -4;

	t64 = (x257<=((x258<x259)|x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	static uint32_t x262 = 20726U;
	int64_t x263 = INT64_MIN;
	uint16_t x264 = UINT16_MAX;
	int32_t t65 = 0;

	t65 = (x261<=((x262<x263)|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -115459937;

	t66 = (x265<=((x266<x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = 275188367279639203LL;
	int32_t x271 = -1;
	static int32_t t67 = -1;

	t67 = (x269<=((x270<x271)|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 220688806U;
	uint8_t x274 = UINT8_MAX;
	int8_t x275 = -1;
	static uint64_t x276 = 892909819LLU;
	volatile int32_t t68 = 383199;

	t68 = (x273<=((x274<x275)|x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	static int16_t x278 = INT16_MIN;
	int32_t t69 = -36;

	t69 = (x277<=((x278<x279)|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = INT8_MAX;
	uint8_t x282 = UINT8_MAX;
	int32_t x283 = INT32_MAX;
	volatile int8_t x284 = INT8_MAX;
	volatile int32_t t70 = 206711441;

	t70 = (x281<=((x282<x283)|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	uint32_t x287 = UINT32_MAX;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t71 = -94705;

	t71 = (x285<=((x286<x287)|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	static int8_t x290 = 2;
	static volatile uint32_t x291 = 25423828U;
	volatile int16_t x292 = INT16_MIN;
	int32_t t72 = 9;

	t72 = (x289<=((x290<x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	int8_t x296 = 14;
	volatile int32_t t73 = 9577;

	t73 = (x293<=((x294<x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x297 = 38293154235643799LL;
	volatile uint8_t x299 = UINT8_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 352475424;

	t74 = (x297<=((x298<x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MAX;
	int32_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	int64_t x304 = -1LL;
	volatile int32_t t75 = -459336;

	t75 = (x301<=((x302<x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = 164365991806325LLU;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -775;

	t76 = (x305<=((x306<x307)|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 992170948;
	uint8_t x310 = UINT8_MAX;
	static volatile int16_t x311 = INT16_MIN;
	uint32_t x312 = 4081094U;
	volatile int32_t t77 = -229151;

	t77 = (x309<=((x310<x311)|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	uint8_t x314 = 1U;
	static uint64_t x315 = 13749467215960LLU;
	volatile int32_t t78 = 136;

	t78 = (x313<=((x314<x315)|x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = INT32_MIN;
	static volatile int16_t x319 = INT16_MIN;
	uint32_t x320 = 23061U;
	static volatile int32_t t79 = 2;

	t79 = (x317<=((x318<x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x323 = -1463019049329001LL;
	volatile uint8_t x324 = 0U;
	int32_t t80 = -89;

	t80 = (x321<=((x322<x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MAX;
	uint64_t x327 = 483LLU;
	uint16_t x328 = 5U;
	volatile int32_t t81 = -37;

	t81 = (x325<=((x326<x327)|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MAX;
	static uint8_t x330 = UINT8_MAX;
	int64_t x331 = 12846181950LL;
	static volatile int64_t x332 = INT64_MAX;
	volatile int32_t t82 = -2480427;

	t82 = (x329<=((x330<x331)|x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x334 = 15U;
	uint32_t x335 = 138U;
	int16_t x336 = INT16_MIN;

	t83 = (x333<=((x334<x335)|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = 6;
	static volatile uint16_t x338 = UINT16_MAX;
	int32_t t84 = 59;

	t84 = (x337<=((x338<x339)|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x342 = -1;
	uint16_t x343 = 13U;
	volatile int32_t t85 = 48;

	t85 = (x341<=((x342<x343)|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = 6U;
	uint8_t x347 = UINT8_MAX;
	volatile int64_t x348 = 5LL;
	static volatile int32_t t86 = -13;

	t86 = (x345<=((x346<x347)|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MAX;
	uint8_t x350 = 4U;
	int16_t x351 = 2606;
	static uint32_t x352 = 147319697U;

	t87 = (x349<=((x350<x351)|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int32_t x356 = 121300362;

	t88 = (x353<=((x354<x355)|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	uint8_t x358 = 1U;
	int32_t x359 = INT32_MAX;
	uint32_t x360 = UINT32_MAX;

	t89 = (x357<=((x358<x359)|x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = -52;
	static int8_t x363 = INT8_MAX;
	int16_t x364 = -1;
	int32_t t90 = 3476439;

	t90 = (x361<=((x362<x363)|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -5LL;
	volatile uint16_t x366 = 96U;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = 0LL;
	static volatile int32_t t91 = 496;

	t91 = (x365<=((x366<x367)|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x371 = INT64_MIN;
	int32_t t92 = 87504491;

	t92 = (x369<=((x370<x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 103469U;
	int16_t x374 = INT16_MIN;
	uint16_t x376 = 7U;

	t93 = (x373<=((x374<x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 28U;
	volatile int8_t x378 = -1;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t94 = 1;

	t94 = (x377<=((x378<x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	volatile int64_t x382 = -1LL;
	volatile int64_t x383 = INT64_MIN;
	int8_t x384 = -1;
	volatile int32_t t95 = 1;

	t95 = (x381<=((x382<x383)|x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = UINT32_MAX;
	uint32_t x387 = UINT32_MAX;

	t96 = (x385<=((x386<x387)|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 1421U;
	int64_t x390 = 234125216131LL;
	volatile int32_t x391 = -7188479;
	volatile uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = 7;

	t97 = (x389<=((x390<x391)|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -14142291LL;
	int16_t x394 = INT16_MIN;
	volatile int32_t x396 = -2448969;

	t98 = (x393<=((x394<x395)|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	static int16_t x398 = -1;
	uint32_t x399 = UINT32_MAX;
	int16_t x400 = -1;
	static int32_t t99 = 2098;

	t99 = (x397<=((x398<x399)|x400));

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

