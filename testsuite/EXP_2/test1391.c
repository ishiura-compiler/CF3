#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MAX;
static int16_t x2 = -1;
int8_t x3 = 33;
static volatile int64_t t0 = -1849380022861603LL;
int64_t t1 = -52119LL;
uint64_t t3 = 2129137605951LLU;
int64_t x20 = -5LL;
static uint16_t x24 = UINT16_MAX;
uint64_t x29 = UINT64_MAX;
int16_t x30 = INT16_MIN;
int16_t x57 = -1;
int32_t x59 = -1;
int32_t t16 = -7273;
uint16_t x75 = 409U;
int64_t t18 = -165085LL;
static uint32_t x79 = UINT32_MAX;
volatile uint32_t t19 = 1928375473U;
int64_t x87 = -1LL;
volatile uint16_t x92 = UINT16_MAX;
int64_t t23 = -81LL;
int32_t t28 = -16003;
int64_t x118 = -192870944453LL;
volatile uint16_t x119 = UINT16_MAX;
volatile int32_t t29 = -47418;
static int8_t x123 = INT8_MAX;
uint64_t x124 = 2169954515663374LLU;
int64_t x126 = INT64_MIN;
int64_t x127 = INT64_MIN;
int32_t x128 = 931690946;
int32_t t31 = 1422390;
volatile int32_t x129 = INT32_MAX;
int32_t x133 = INT32_MAX;
static int32_t x135 = 4;
static volatile uint8_t x136 = 2U;
uint64_t x140 = 1472LLU;
uint16_t x142 = UINT16_MAX;
int32_t x149 = -1;
static uint32_t x154 = 110931480U;
int32_t x159 = INT32_MIN;
static int8_t x170 = 1;
volatile uint32_t x172 = 397U;
uint32_t x175 = 12695U;
int64_t x179 = -1LL;
static volatile int16_t x185 = INT16_MIN;
int32_t t46 = 111;
uint8_t x191 = 1U;
int64_t x193 = 101318872LL;
uint16_t x196 = 10249U;
static int8_t x197 = -1;
volatile int32_t x202 = INT32_MIN;
int32_t x212 = -1;
volatile int64_t x214 = INT64_MIN;
int64_t x222 = INT64_MIN;
static int32_t t55 = 1510;
static uint8_t x228 = 1U;
volatile int32_t t56 = 10709978;
static int32_t x229 = -559;
uint8_t x230 = UINT8_MAX;
volatile uint64_t x231 = 2439341985072LLU;
int8_t x235 = 0;
int64_t t58 = -57726997671LL;
static uint16_t x239 = UINT16_MAX;
volatile uint32_t x247 = 2U;
int32_t t62 = -16381;
int32_t t64 = -310314;
uint16_t x261 = 2U;
int8_t x265 = -1;
static int64_t x268 = -1LL;
uint16_t x275 = UINT16_MAX;
volatile int32_t t68 = -133823;
volatile uint32_t x278 = 10679515U;
int32_t x281 = INT32_MAX;
static uint32_t x284 = 31U;
uint32_t t70 = 813U;
uint16_t x292 = UINT16_MAX;
int16_t x293 = INT16_MAX;
static uint64_t t75 = 1861279LLU;
volatile uint64_t x305 = 15759014349524040LLU;
uint32_t x311 = 1016U;
uint64_t t80 = 5862LLU;
int8_t x334 = INT8_MAX;
uint32_t x335 = 1606603U;
int32_t t83 = 1;
volatile int32_t x339 = INT32_MAX;
static uint64_t t85 = 31095513LLU;
static int64_t x348 = -12536356338LL;
int32_t x357 = INT32_MAX;
uint8_t x358 = 21U;
int8_t x362 = -2;
int32_t x368 = INT32_MIN;
uint64_t x370 = 0LLU;
uint64_t x372 = 448142703128LLU;
volatile uint64_t t92 = 18941411123712LLU;
static uint64_t x378 = 71198026310582601LLU;
volatile uint64_t t94 = 995688255LLU;
int32_t x388 = INT32_MIN;
uint8_t x391 = 70U;
int16_t x394 = INT16_MIN;
static volatile int8_t x395 = -3;
uint8_t x398 = 16U;
uint8_t x399 = UINT8_MAX;
volatile int64_t t99 = -1783LL;


void f0(void) {
	int64_t x4 = -1LL;

	t0 = ((x1*(x2<x3))^x4);

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 371277406899LL;
	static int32_t x6 = 1;
	int8_t x7 = INT8_MIN;
	int16_t x8 = -558;

	t1 = ((x5*(x6<x7))^x8);

	if (t1 != -558LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 26;

	t2 = ((x9*(x10<x11))^x12);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 120204LLU;
	uint8_t x14 = 14U;
	static uint64_t x15 = 7134175728064514LLU;
	int16_t x16 = 3900;

	t3 = ((x13*(x14<x15))^x16);

	if (t3 != 121520LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 13372339528878LL;
	static int64_t x18 = -1LL;
	volatile int16_t x19 = INT16_MIN;
	volatile int64_t t4 = 285123LL;

	t4 = ((x17*(x18<x19))^x20);

	if (t4 != -5LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 487U;
	int32_t x22 = 42603;
	static uint16_t x23 = 11574U;
	static volatile int32_t t5 = -2;

	t5 = ((x21*(x22<x23))^x24);

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 99793263;
	uint8_t x26 = 2U;
	static int32_t x27 = INT32_MIN;
	volatile uint64_t x28 = 3656108LLU;
	uint64_t t6 = 0LLU;

	t6 = ((x25*(x26<x27))^x28);

	if (t6 != 3656108LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x31 = 402;
	volatile int16_t x32 = -334;
	volatile uint64_t t7 = 1LLU;

	t7 = ((x29*(x30<x31))^x32);

	if (t7 != 333LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 135496998269548LLU;
	uint64_t x34 = 57961745275840LLU;
	int8_t x35 = 3;
	static int64_t x36 = INT64_MAX;
	uint64_t t8 = 409453734LLU;

	t8 = ((x33*(x34<x35))^x36);

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MAX;
	static volatile int8_t x38 = 7;
	volatile int32_t x39 = INT32_MIN;
	static int8_t x40 = -1;
	int32_t t9 = 44;

	t9 = ((x37*(x38<x39))^x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x41 = UINT64_MAX;
	static uint8_t x42 = 101U;
	int32_t x43 = INT32_MIN;
	int16_t x44 = -1;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41*(x42<x43))^x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 3U;
	int64_t x46 = INT64_MIN;
	int32_t x47 = 0;
	int16_t x48 = INT16_MIN;
	static int32_t t11 = 501502119;

	t11 = ((x45*(x46<x47))^x48);

	if (t11 != -32765) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = 0LLU;
	int64_t x51 = INT64_MIN;
	static volatile int32_t x52 = INT32_MIN;
	int32_t t12 = 2;

	t12 = ((x49*(x50<x51))^x52);

	if (t12 != 2147483520) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	static int32_t x54 = -4663;
	uint16_t x55 = 16U;
	static int16_t x56 = -1;
	int32_t t13 = 102;

	t13 = ((x53*(x54<x55))^x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 15;

	t14 = ((x57*(x58<x59))^x60);

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x62 = 7U;
	int32_t x63 = INT32_MAX;
	uint64_t x64 = UINT64_MAX;
	static uint64_t t15 = 1561860LLU;

	t15 = ((x61*(x62<x63))^x64);

	if (t15 != 127LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 7U;
	int32_t x66 = 1012579;
	int16_t x67 = 11435;
	static int32_t x68 = -1;

	t16 = ((x65*(x66<x67))^x68);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	uint64_t x70 = 28447LLU;
	volatile uint8_t x71 = UINT8_MAX;
	static int8_t x72 = -1;
	int64_t t17 = -976495LL;

	t17 = ((x69*(x70<x71))^x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int32_t x74 = -8365721;
	int64_t x76 = -99586036568991LL;

	t18 = ((x73*(x74<x75))^x76);

	if (t18 != -99586036558946LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	volatile uint32_t x80 = UINT32_MAX;

	t19 = ((x77*(x78<x79))^x80);

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	uint16_t x82 = 18347U;
	volatile int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MAX;
	uint64_t t20 = 597291LLU;

	t20 = ((x81*(x82<x83))^x84);

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MIN;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -3470;

	t21 = ((x85*(x86<x87))^x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -1LL;
	static int16_t x90 = 134;
	int64_t x91 = -1LL;
	int64_t t22 = 59LL;

	t22 = ((x89*(x90<x91))^x92);

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int32_t x94 = -1;
	static int32_t x95 = INT32_MIN;
	volatile int64_t x96 = 6LL;

	t23 = ((x93*(x94<x95))^x96);

	if (t23 != 6LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = 1666161U;
	uint32_t x100 = 24U;
	volatile uint32_t t24 = 221U;

	t24 = ((x97*(x98<x99))^x100);

	if (t24 != 2147483672U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MAX;
	volatile uint32_t x103 = UINT32_MAX;
	int64_t x104 = 1746929118068LL;
	volatile int64_t t25 = -41133496LL;

	t25 = ((x101*(x102<x103))^x104);

	if (t25 != 1746929118068LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static int32_t x106 = INT32_MIN;
	volatile int16_t x107 = -16;
	static int16_t x108 = -1;
	int32_t t26 = -51309148;

	t26 = ((x105*(x106<x107))^x108);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 3;
	int64_t x110 = INT64_MIN;
	uint8_t x111 = 7U;
	static volatile int8_t x112 = -1;
	volatile int32_t t27 = -2;

	t27 = ((x109*(x110<x111))^x112);

	if (t27 != -4) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	static uint8_t x114 = UINT8_MAX;
	uint8_t x115 = UINT8_MAX;
	volatile int8_t x116 = INT8_MIN;

	t28 = ((x113*(x114<x115))^x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 1U;
	static int8_t x120 = INT8_MAX;

	t29 = ((x117*(x118<x119))^x120);

	if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	volatile int8_t x122 = -1;
	volatile uint64_t t30 = 36023077LLU;

	t30 = ((x121*(x122<x123))^x124);

	if (t30 != 18444574119193888241LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;

	t31 = ((x125*(x126<x127))^x128);

	if (t31 != 931690946) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x130 = UINT8_MAX;
	volatile int16_t x131 = INT16_MAX;
	volatile uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -15330472;

	t32 = ((x129*(x130<x131))^x132);

	if (t32 != 2147418112) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x134 = -1;
	volatile int32_t t33 = 14654;

	t33 = ((x133*(x134<x135))^x136);

	if (t33 != 2147483645) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 1U;
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	volatile uint64_t t34 = 874253623LLU;

	t34 = ((x137*(x138<x139))^x140);

	if (t34 != 1473LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -1LL;
	uint16_t x143 = 1761U;
	uint8_t x144 = 1U;
	volatile int64_t t35 = -106317512LL;

	t35 = ((x141*(x142<x143))^x144);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static volatile uint32_t x146 = 0U;
	int64_t x147 = 27084940LL;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -2429692;

	t36 = ((x145*(x146<x147))^x148);

	if (t36 != -65536) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = 67255053241176LLU;
	int16_t x151 = INT16_MIN;
	static int64_t x152 = INT64_MIN;
	volatile int64_t t37 = INT64_MAX;

	t37 = ((x149*(x150<x151))^x152);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int64_t x155 = 1290986994047789LL;
	int16_t x156 = INT16_MAX;
	static int32_t t38 = -15283614;

	t38 = ((x153*(x154<x155))^x156);

	if (t38 != -32641) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static int32_t x158 = 6404958;
	uint32_t x160 = 3890U;
	volatile uint32_t t39 = 7U;

	t39 = ((x157*(x158<x159))^x160);

	if (t39 != 3890U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = 0;
	int64_t x162 = INT64_MAX;
	int16_t x163 = 41;
	static int16_t x164 = -31;
	static int32_t t40 = -85;

	t40 = ((x161*(x162<x163))^x164);

	if (t40 != -31) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 3613486812LLU;
	volatile int16_t x166 = INT16_MAX;
	uint16_t x167 = 419U;
	int32_t x168 = -1;
	static volatile uint64_t t41 = UINT64_MAX;

	t41 = ((x165*(x166<x167))^x168);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	uint16_t x171 = UINT16_MAX;
	static volatile uint32_t t42 = 11U;

	t42 = ((x169*(x170<x171))^x172);

	if (t42 != 4294966898U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int64_t x174 = 37629232803LL;
	int32_t x176 = INT32_MIN;
	static int32_t t43 = INT32_MIN;

	t43 = ((x173*(x174<x175))^x176);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = -1;
	int64_t x180 = -669284053417846477LL;
	static int64_t t44 = -28202LL;

	t44 = ((x177*(x178<x179))^x180);

	if (t44 != -669284053417846477LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = INT64_MIN;
	static uint32_t x182 = UINT32_MAX;
	int32_t x183 = 0;
	uint32_t x184 = 1576U;
	int64_t t45 = 354371LL;

	t45 = ((x181*(x182<x183))^x184);

	if (t45 != 1576LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -1LL;
	static uint8_t x187 = 35U;
	int16_t x188 = -7750;

	t46 = ((x185*(x186<x187))^x188);

	if (t46 != 25018) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 1075594748395LLU;
	volatile uint16_t x190 = 72U;
	uint8_t x192 = UINT8_MAX;
	uint64_t t47 = 647039LLU;

	t47 = ((x189*(x190<x191))^x192);

	if (t47 != 255LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = 0;
	int64_t x195 = 0LL;
	int64_t t48 = -6896147191910518LL;

	t48 = ((x193*(x194<x195))^x196);

	if (t48 != 10249LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = INT64_MAX;
	static int16_t x199 = INT16_MIN;
	int8_t x200 = 1;
	int32_t t49 = -1;

	t49 = ((x197*(x198<x199))^x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 160U;
	volatile uint32_t x203 = 288U;
	volatile int8_t x204 = INT8_MAX;
	static int32_t t50 = -15323377;

	t50 = ((x201*(x202<x203))^x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	uint16_t x206 = 1U;
	int64_t x207 = 4311152142121661LL;
	static volatile int8_t x208 = 54;
	volatile int32_t t51 = -1737;

	t51 = ((x205*(x206<x207))^x208);

	if (t51 != -32714) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = -57504;
	uint32_t x210 = 7U;
	uint32_t x211 = 1399760865U;
	int32_t t52 = -5945892;

	t52 = ((x209*(x210<x211))^x212);

	if (t52 != 57503) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 40;
	int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	int64_t t53 = 0LL;

	t53 = ((x213*(x214<x215))^x216);

	if (t53 != -9223372036854775768LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 262U;
	static uint16_t x218 = 23U;
	volatile uint16_t x219 = 1936U;
	static uint8_t x220 = 0U;
	volatile uint32_t t54 = 82U;

	t54 = ((x217*(x218<x219))^x220);

	if (t54 != 262U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 7;
	int64_t x223 = INT64_MAX;
	uint8_t x224 = 4U;

	t55 = ((x221*(x222<x223))^x224);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -1;
	int32_t x226 = -52716195;
	uint64_t x227 = UINT64_MAX;

	t56 = ((x225*(x226<x227))^x228);

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x232 = INT32_MIN;
	int32_t t57 = 394104070;

	t57 = ((x229*(x230<x231))^x232);

	if (t57 != 2147483089) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = -299538382LL;
	int64_t x234 = INT64_MIN;
	volatile uint16_t x236 = 1338U;

	t58 = ((x233*(x234<x235))^x236);

	if (t58 != -299537144LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	uint8_t x238 = 57U;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = -919;

	t59 = ((x237*(x238<x239))^x240);

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MAX;
	static volatile int16_t x242 = INT16_MIN;
	static int8_t x243 = 11;
	uint32_t x244 = 291U;
	volatile uint32_t t60 = 1720746U;

	t60 = ((x241*(x242<x243))^x244);

	if (t60 != 348U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	uint16_t x246 = 0U;
	volatile int8_t x248 = INT8_MIN;
	volatile uint64_t t61 = 28944958490LLU;

	t61 = ((x245*(x246<x247))^x248);

	if (t61 != 127LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	static uint16_t x250 = 0U;
	uint8_t x251 = 10U;
	uint8_t x252 = 7U;

	t62 = ((x249*(x250<x251))^x252);

	if (t62 != -8) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static int8_t x254 = -47;
	int16_t x255 = INT16_MAX;
	int8_t x256 = 6;
	static int32_t t63 = -2954;

	t63 = ((x253*(x254<x255))^x256);

	if (t63 != -2147483642) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	int16_t x258 = -7;
	int64_t x259 = INT64_MIN;
	int16_t x260 = -1;

	t64 = ((x257*(x258<x259))^x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 944145437LLU;
	static int64_t x264 = -1LL;
	int64_t t65 = -1LL;

	t65 = ((x261*(x262<x263))^x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MIN;
	int32_t x267 = 6791;
	int64_t t66 = 4776428064897296LL;

	t66 = ((x265*(x266<x267))^x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	uint16_t x271 = 167U;
	int16_t x272 = -7939;
	volatile int32_t t67 = 993489175;

	t67 = ((x269*(x270<x271))^x272);

	if (t67 != -7939) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MAX;
	static int32_t x274 = -1;
	volatile int8_t x276 = -1;

	t68 = ((x273*(x274<x275))^x276);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = INT8_MIN;
	uint64_t x279 = 46489176069312115LLU;
	uint32_t x280 = 499U;
	volatile uint32_t t69 = 5U;

	t69 = ((x277*(x278<x279))^x280);

	if (t69 != 4294966899U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x282 = -1;
	uint8_t x283 = UINT8_MAX;

	t70 = ((x281*(x282<x283))^x284);

	if (t70 != 2147483616U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint64_t x286 = 27035615LLU;
	int64_t x287 = 346LL;
	static int8_t x288 = INT8_MAX;
	int32_t t71 = 2963;

	t71 = ((x285*(x286<x287))^x288);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MAX;
	int32_t x290 = 0;
	int8_t x291 = INT8_MIN;
	int32_t t72 = 1875310;

	t72 = ((x289*(x290<x291))^x292);

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x294 = 372U;
	uint32_t x295 = 1U;
	int8_t x296 = -1;
	volatile int32_t t73 = 63434350;

	t73 = ((x293*(x294<x295))^x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 25179651U;
	int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	int32_t x300 = 63;
	uint32_t t74 = 8896102U;

	t74 = ((x297*(x298<x299))^x300);

	if (t74 != 25179708U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 15832364LLU;
	int64_t x302 = INT64_MIN;
	uint16_t x303 = 3412U;
	static int32_t x304 = 1457;

	t75 = ((x301*(x302<x303))^x304);

	if (t75 != 15831197LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x306 = -1LL;
	int8_t x307 = -1;
	int32_t x308 = INT32_MAX;
	static uint64_t t76 = 2989LLU;

	t76 = ((x305*(x306<x307))^x308);

	if (t76 != 2147483647LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	volatile int8_t x310 = 5;
	int32_t x312 = INT32_MIN;
	int32_t t77 = 36193;

	t77 = ((x309*(x310<x311))^x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	uint8_t x314 = 29U;
	int16_t x315 = -1;
	volatile int8_t x316 = INT8_MAX;
	int32_t t78 = -22566;

	t78 = ((x313*(x314<x315))^x316);

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MIN;
	volatile int16_t x319 = INT16_MIN;
	volatile int8_t x320 = INT8_MIN;
	static volatile int32_t t79 = -439863384;

	t79 = ((x317*(x318<x319))^x320);

	if (t79 != 32640) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 7757884838298183LLU;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -13405081182362606LL;

	t80 = ((x321*(x322<x323))^x324);

	if (t80 != 18432089675361314389LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	int32_t x326 = -1;
	volatile int8_t x327 = INT8_MAX;
	int8_t x328 = INT8_MIN;
	static volatile int64_t t81 = -159LL;

	t81 = ((x325*(x326<x327))^x328);

	if (t81 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -7883;
	static int8_t x330 = 5;
	int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 54278761;

	t82 = ((x329*(x330<x331))^x332);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = UINT16_MAX;
	static int32_t x336 = 1559;

	t83 = ((x333*(x334<x335))^x336);

	if (t83 != 63976) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 241U;
	uint32_t x338 = 687443806U;
	int8_t x340 = -1;
	int32_t t84 = -230573409;

	t84 = ((x337*(x338<x339))^x340);

	if (t84 != -242) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x341 = UINT64_MAX;
	int32_t x342 = -379;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;

	t85 = ((x341*(x342<x343))^x344);

	if (t85 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 1U;
	static uint32_t x346 = UINT32_MAX;
	int64_t x347 = INT64_MIN;
	int64_t t86 = -483629224348LL;

	t86 = ((x345*(x346<x347))^x348);

	if (t86 != -12536356338LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 24;
	int32_t x350 = 0;
	volatile uint64_t x351 = UINT64_MAX;
	static int64_t x352 = 5744LL;
	volatile int64_t t87 = 1653883LL;

	t87 = ((x349*(x350<x351))^x352);

	if (t87 != 5736LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -75769127LL;
	int8_t x354 = -60;
	volatile uint16_t x355 = 40U;
	int64_t x356 = -706LL;
	volatile int64_t t88 = -2409387940LL;

	t88 = ((x353*(x354<x355))^x356);

	if (t88 != 75769831LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x359 = 1569U;
	int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 392393326;

	t89 = ((x357*(x358<x359))^x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 0U;
	static uint16_t x363 = UINT16_MAX;
	int16_t x364 = INT16_MAX;
	int32_t t90 = 180215;

	t90 = ((x361*(x362<x363))^x364);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 249573U;
	int8_t x366 = -56;
	static volatile int64_t x367 = INT64_MIN;
	uint32_t t91 = 1U;

	t91 = ((x365*(x366<x367))^x368);

	if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MAX;

	t92 = ((x369*(x370<x371))^x372);

	if (t92 != 9223372484997478936LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = 6U;
	int16_t x374 = 503;
	uint16_t x375 = 32U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = INT32_MIN;

	t93 = ((x373*(x374<x375))^x376);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = 4566884940436LLU;
	static int8_t x379 = 6;
	int32_t x380 = INT32_MIN;

	t94 = ((x377*(x378<x379))^x380);

	if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	volatile uint32_t x382 = 485948U;
	int32_t x383 = 2733;
	volatile int8_t x384 = INT8_MAX;
	int32_t t95 = -91459;

	t95 = ((x381*(x382<x383))^x384);

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 183485811899LLU;
	int32_t x386 = INT32_MAX;
	uint8_t x387 = UINT8_MAX;
	volatile uint64_t t96 = 694931071023LLU;

	t96 = ((x385*(x386<x387))^x388);

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	volatile uint64_t x390 = 134956446570LLU;
	volatile int16_t x392 = -1;
	volatile int64_t t97 = -2536190LL;

	t97 = ((x389*(x390<x391))^x392);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 92U;
	uint32_t x396 = 1205U;
	volatile uint32_t t98 = 55297U;

	t98 = ((x393*(x394<x395))^x396);

	if (t98 != 1257U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = 131208098LL;
	volatile uint32_t x400 = 0U;

	t99 = ((x397*(x398<x399))^x400);

	if (t99 != 131208098LL) { NG(); } else { ; }
	
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

