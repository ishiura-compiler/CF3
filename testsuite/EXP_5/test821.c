#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t1 = 6U;
int16_t x10 = -5777;
int64_t x11 = -1LL;
int64_t t2 = -668857342511LL;
int8_t x23 = INT8_MIN;
int32_t x34 = -14;
uint32_t t9 = 35U;
int16_t x46 = -1;
static int64_t x49 = INT64_MIN;
int8_t x53 = 2;
int8_t x54 = 58;
uint8_t x60 = 19U;
int64_t x67 = INT64_MAX;
volatile int64_t t15 = 366926LL;
volatile int8_t x69 = INT8_MIN;
static volatile int16_t x70 = -1;
volatile int64_t t18 = 8173304661283LL;
volatile int32_t t19 = 90855725;
volatile uint8_t x91 = UINT8_MAX;
volatile int8_t x92 = -1;
volatile int8_t x95 = INT8_MAX;
uint16_t x96 = 1U;
int64_t x99 = -1390392638265LL;
volatile int64_t t22 = -6153001955272LL;
static uint16_t x101 = 15535U;
int32_t t23 = 18879;
static int32_t x108 = -1;
int8_t x109 = INT8_MIN;
volatile int32_t x120 = -966927128;
volatile int64_t t27 = 69821519027LL;
static uint16_t x121 = 11U;
uint8_t x129 = 1U;
static int16_t x137 = INT16_MIN;
static int64_t t31 = -2633902617LL;
uint16_t x145 = 508U;
volatile int8_t x148 = 59;
uint8_t x149 = UINT8_MAX;
int16_t x151 = INT16_MIN;
static uint64_t t34 = 62423LLU;
volatile uint8_t x156 = 7U;
volatile uint64_t t36 = 11LLU;
int32_t x163 = INT32_MIN;
volatile uint16_t x164 = 5540U;
int64_t t38 = -3LL;
volatile uint64_t x180 = UINT64_MAX;
volatile uint64_t t42 = 1462LLU;
int8_t x192 = 1;
volatile int32_t t44 = 7;
int32_t t45 = -718783954;
int64_t x200 = INT64_MAX;
int32_t x201 = -3569;
static int16_t x209 = 114;
int32_t x211 = INT32_MIN;
static volatile int32_t x212 = -12;
volatile int64_t t50 = -211331729LL;
int8_t x225 = INT8_MAX;
int32_t x226 = INT32_MIN;
static int64_t x228 = -1LL;
int64_t x234 = INT64_MAX;
int16_t x235 = 4;
int64_t t54 = -13316729145746497LL;
uint16_t x239 = UINT16_MAX;
uint16_t x240 = 1165U;
volatile int32_t t55 = 60072360;
static int8_t x241 = 2;
static int32_t x245 = -9202;
volatile int64_t t57 = 7LL;
int16_t x255 = INT16_MIN;
int32_t x263 = 20682;
volatile int16_t x274 = INT16_MAX;
uint64_t t63 = 186158679481LLU;
uint32_t x278 = 754324406U;
volatile int32_t x282 = 37;
int8_t x292 = 0;
int64_t x295 = INT64_MIN;
volatile uint16_t x298 = 3512U;
uint8_t x301 = UINT8_MAX;
static uint16_t x306 = 1922U;
volatile int8_t x314 = INT8_MIN;
volatile int8_t x315 = INT8_MIN;
int8_t x338 = -1;
int32_t x352 = INT32_MAX;
int64_t t80 = -980512305LL;
static volatile uint32_t t81 = 1U;
static int64_t x357 = -72138088380682080LL;
static uint8_t x359 = UINT8_MAX;
int32_t t83 = 47416180;
volatile uint64_t t84 = 2651686LLU;
static int32_t x369 = INT32_MIN;
uint8_t x380 = UINT8_MAX;
int32_t x382 = INT32_MAX;
int64_t x383 = INT64_MIN;
int64_t x388 = INT64_MAX;
static int64_t t89 = -235534980153220408LL;
uint64_t x389 = 30954922378627LLU;
int16_t x392 = -1;
volatile uint64_t t90 = 5LLU;
static int64_t x394 = -4591206LL;
static volatile int32_t x399 = 17;
volatile int32_t t92 = 10105624;
int16_t x410 = INT16_MAX;
int8_t x415 = -1;
static uint8_t x416 = UINT8_MAX;
int64_t t97 = -28101672LL;
int32_t x427 = 41909;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint64_t x2 = 0LLU;
	int32_t x3 = INT32_MAX;
	volatile int32_t x4 = INT32_MIN;
	uint64_t t0 = 34574954479818678LLU;

	t0 = (x1-((x2%x3)|x4));

	if (t0 != 2147483520LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x5 = 22911141U;
	uint16_t x6 = 7720U;
	volatile uint8_t x7 = 58U;
	int32_t x8 = -1;

	t1 = (x5-((x6%x7)|x8));

	if (t1 != 22911142U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile int32_t x12 = INT32_MIN;

	t2 = (x9-((x10%x11)|x12));

	if (t2 != 2147483775LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	static uint32_t x14 = 90U;
	static volatile int16_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	static uint64_t t3 = 3009316966411506LLU;

	t3 = (x13-((x14%x15)|x16));

	if (t3 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 2U;
	static volatile int64_t x22 = 4739234LL;
	volatile uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 368133234LLU;

	t4 = (x21-((x22%x23)|x24));

	if (t4 != 3LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = INT8_MIN;
	uint32_t x26 = 385875415U;
	int64_t x27 = -1LL;
	volatile uint32_t x28 = 410U;
	volatile int64_t t5 = 38814613010150503LL;

	t5 = (x25-((x26%x27)|x28));

	if (t5 != -538LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	volatile int64_t x30 = -1LL;
	volatile uint64_t x31 = 6LLU;
	int32_t x32 = INT32_MAX;
	volatile uint64_t t6 = 9592LLU;

	t6 = (x29-((x30%x31)|x32));

	if (t6 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 7U;
	volatile int8_t x35 = 18;
	uint16_t x36 = 7231U;
	static int32_t t7 = -429;

	t7 = (x33-((x34%x35)|x36));

	if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	uint64_t x38 = 6072230567LLU;
	int8_t x39 = 7;
	int32_t x40 = INT32_MIN;
	uint64_t t8 = 529678623227303446LLU;

	t8 = (x37-((x38%x39)|x40));

	if (t8 != 2147483643LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = 981;
	static uint32_t x42 = 522512524U;
	volatile uint16_t x43 = 99U;
	uint8_t x44 = 53U;

	t9 = (x41-((x42%x43)|x44));

	if (t9 != 920U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x45 = INT16_MAX;
	int8_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	int32_t t10 = -5;

	t10 = (x45-((x46%x47)|x48));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = 14;
	int32_t x51 = INT32_MIN;
	volatile int8_t x52 = INT8_MIN;
	static int64_t t11 = -3280336LL;

	t11 = (x49-((x50%x51)|x52));

	if (t11 != -9223372036854775694LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x55 = -759;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = 745066261;

	t12 = (x53-((x54%x55)|x56));

	if (t12 != 2147483592) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	volatile int32_t t13 = 487006;

	t13 = (x57-((x58%x59)|x60));

	if (t13 != 108) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = -9232553526147044LL;
	int8_t x62 = INT8_MIN;
	static uint64_t x63 = 1050290849LLU;
	uint64_t x64 = 386399055LLU;
	uint64_t t14 = 200651LLU;

	t14 = (x61-((x62%x63)|x64));

	if (t14 != 18437511519247551677LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	uint32_t x66 = UINT32_MAX;
	static int32_t x68 = INT32_MIN;

	t15 = (x65-((x66%x67)|x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x71 = INT64_MAX;
	static int8_t x72 = INT8_MIN;
	int64_t t16 = 825LL;

	t16 = (x69-((x70%x71)|x72));

	if (t16 != -127LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = -1;
	uint64_t x78 = 26721025120LLU;
	volatile int64_t x79 = INT64_MIN;
	int64_t x80 = -1LL;
	volatile uint64_t t17 = 1743LLU;

	t17 = (x77-((x78%x79)|x80));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x81 = -1683096039524220LL;
	int8_t x82 = -1;
	volatile int16_t x83 = INT16_MAX;
	int8_t x84 = -1;

	t18 = (x81-((x82%x83)|x84));

	if (t18 != -1683096039524219LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MIN;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 5U;

	t19 = (x85-((x86%x87)|x88));

	if (t19 != 122) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	static int64_t x90 = INT64_MIN;
	int64_t t20 = -4858LL;

	t20 = (x89-((x90%x91)|x92));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = -43099848934LL;
	int64_t x94 = 366548198LL;
	int64_t t21 = -206027LL;

	t21 = (x93-((x94%x95)|x96));

	if (t21 != -43099848971LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = 1;
	int8_t x98 = 1;
	volatile int8_t x100 = INT8_MIN;

	t22 = (x97-((x98%x99)|x100));

	if (t22 != 128LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x102 = INT32_MIN;
	int16_t x103 = -228;
	int16_t x104 = INT16_MAX;

	t23 = (x101-((x102%x103)|x104));

	if (t23 != 15536) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x106 = -5956599;
	uint16_t x107 = UINT16_MAX;
	uint32_t t24 = 8U;

	t24 = (x105-((x106%x107)|x108));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x110 = INT64_MAX;
	static volatile uint64_t x111 = 1478305077630237540LLU;
	int32_t x112 = 307;
	uint64_t t25 = 62918751033446LLU;

	t25 = (x109-((x110%x111)|x112));

	if (t25 != 18093202502636200905LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 83045018;
	volatile int64_t x114 = INT64_MIN;
	uint8_t x115 = UINT8_MAX;
	static int64_t x116 = INT64_MIN;
	int64_t t26 = 1286080549339498LL;

	t26 = (x113-((x114%x115)|x116));

	if (t26 != 83045146LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = -2;
	volatile int64_t x118 = -879469LL;
	uint16_t x119 = UINT16_MAX;

	t27 = (x117-((x118%x119)|x120));

	if (t27 != 8976LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x122 = 113U;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = INT64_MIN;
	int64_t t28 = -28023428418763348LL;

	t28 = (x121-((x122%x123)|x124));

	if (t28 != 9223372036854775706LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 27365423722LLU;
	volatile int32_t x132 = INT32_MAX;
	uint64_t t29 = 240341433845906046LLU;

	t29 = (x129-((x130%x131)|x132));

	if (t29 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 87U;
	uint32_t x134 = 1572546459U;
	int8_t x135 = -1;
	int16_t x136 = 720;
	uint32_t t30 = 999554U;

	t30 = (x133-((x134%x135)|x136));

	if (t30 != 2722420860U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = INT16_MIN;
	volatile int64_t x139 = -24988204305477LL;
	volatile int16_t x140 = -1;

	t31 = (x137-((x138%x139)|x140));

	if (t31 != -32767LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x141 = INT8_MIN;
	int8_t x142 = 39;
	static int16_t x143 = -1;
	int8_t x144 = INT8_MAX;
	int32_t t32 = 21708;

	t32 = (x141-((x142%x143)|x144));

	if (t32 != -255) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x146 = INT8_MIN;
	volatile int8_t x147 = -1;
	int32_t t33 = -11;

	t33 = (x145-((x146%x147)|x148));

	if (t33 != 449) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x150 = INT8_MIN;
	uint64_t x152 = UINT64_MAX;

	t34 = (x149-((x150%x151)|x152));

	if (t34 != 256LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = -1LL;
	volatile int8_t x155 = -2;
	static int64_t t35 = 433LL;

	t35 = (x153-((x154%x155)|x156));

	if (t35 != 4294967296LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 185U;
	uint8_t x158 = 7U;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = 22138916431124073LLU;

	t36 = (x157-((x158%x159)|x160));

	if (t36 != 18424605157278427722LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	uint64_t x162 = 5209143340146744226LLU;
	uint64_t t37 = 3960134607784LLU;

	t37 = (x161-((x162%x163)|x164));

	if (t37 != 13237600733562806489LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	int64_t x167 = 166LL;
	static int8_t x168 = -1;

	t38 = (x165-((x166%x167)|x168));

	if (t38 != -2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = 0;
	int32_t x171 = INT32_MAX;
	int8_t x172 = INT8_MIN;
	int32_t t39 = -15520;

	t39 = (x169-((x170%x171)|x172));

	if (t39 != -2147483520) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x173 = UINT32_MAX;
	int8_t x174 = INT8_MAX;
	volatile int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MAX;
	volatile int64_t t40 = 5416946815731LL;

	t40 = (x173-((x174%x175)|x176));

	if (t40 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = INT32_MIN;
	int32_t x178 = 116952521;
	int64_t x179 = -1LL;
	uint64_t t41 = 817390928970365LLU;

	t41 = (x177-((x178%x179)|x180));

	if (t41 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x181 = -1;
	volatile int64_t x182 = INT64_MIN;
	uint64_t x183 = UINT64_MAX;
	uint64_t x184 = 1101555144LLU;

	t42 = (x181-((x182%x183)|x184));

	if (t42 != 9223372035753220663LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	static volatile int64_t x188 = -1LL;
	volatile int64_t t43 = 284542690668759887LL;

	t43 = (x185-((x186%x187)|x188));

	if (t43 != -2147483647LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = 1;
	volatile int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;

	t44 = (x189-((x190%x191)|x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x193 = -3;
	int32_t x194 = 812;
	volatile int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MIN;

	t45 = (x193-((x194%x195)|x196));

	if (t45 != 75) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x197 = -1LL;
	int32_t x198 = INT32_MIN;
	volatile uint32_t x199 = 61605U;
	static volatile int64_t t46 = INT64_MIN;

	t46 = (x197-((x198%x199)|x200));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x202 = 24123U;
	static int8_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t47 = 1LLU;

	t47 = (x201-((x202%x203)|x204));

	if (t47 != 18446744073709548048LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = INT64_MAX;
	volatile uint8_t x206 = 78U;
	uint64_t x207 = 25553564625785LLU;
	static volatile uint32_t x208 = 5593140U;
	volatile uint64_t t48 = 876396107678392LLU;

	t48 = (x205-((x206%x207)|x208));

	if (t48 != 9223372036849182593LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x210 = INT32_MAX;
	volatile int32_t t49 = -69;

	t49 = (x209-((x210%x211)|x212));

	if (t49 != 115) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	int32_t x214 = INT32_MIN;
	volatile int32_t x215 = -1;
	int16_t x216 = -1;

	t50 = (x213-((x214%x215)|x216));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = 4519;
	int32_t x218 = 988067693;
	volatile uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 37885U;
	static volatile uint64_t t51 = 5248008LLU;

	t51 = (x217-((x218%x219)|x220));

	if (t51 != 18446744072721488298LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = -1;
	int32_t x222 = -193397;
	int64_t x223 = INT64_MIN;
	volatile uint8_t x224 = 2U;
	volatile int64_t t52 = -85620789087LL;

	t52 = (x221-((x222%x223)|x224));

	if (t52 != 193396LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x227 = 70U;
	static int64_t t53 = 1007709847561035296LL;

	t53 = (x225-((x226%x227)|x228));

	if (t53 != 128LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -673;
	int8_t x236 = INT8_MIN;

	t54 = (x233-((x234%x235)|x236));

	if (t54 != -548LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x237 = UINT16_MAX;
	int8_t x238 = 0;

	t55 = (x237-((x238%x239)|x240));

	if (t55 != 64370) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x242 = 18957805;
	static int16_t x243 = -1;
	uint64_t x244 = 302060237921LLU;
	uint64_t t56 = 57323730770699LLU;

	t56 = (x241-((x242%x243)|x244));

	if (t56 != 18446743771649313697LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x246 = -4091;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;

	t57 = (x245-((x246%x247)|x248));

	if (t57 != -5111LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x249 = UINT64_MAX;
	uint64_t x250 = 2935504LLU;
	int32_t x251 = INT32_MIN;
	volatile int8_t x252 = -1;
	volatile uint64_t t58 = 483733393060907LLU;

	t58 = (x249-((x250%x251)|x252));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x254 = 2;
	int32_t x256 = INT32_MAX;
	int32_t t59 = 4;

	t59 = (x253-((x254%x255)|x256));

	if (t59 != -2147483392) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x257 = UINT32_MAX;
	int64_t x258 = INT64_MAX;
	static uint64_t x259 = 31040LLU;
	uint16_t x260 = UINT16_MAX;
	uint64_t t60 = 4669468203309LLU;

	t60 = (x257-((x258%x259)|x260));

	if (t60 != 4294901760LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MIN;
	static int64_t x262 = INT64_MAX;
	volatile uint8_t x264 = UINT8_MAX;
	int64_t t61 = 38LL;

	t61 = (x261-((x262%x263)|x264));

	if (t61 != -15487LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x265 = 1;
	int8_t x266 = 12;
	int64_t x267 = INT64_MAX;
	uint8_t x268 = 48U;
	volatile int64_t t62 = 968075602999099LL;

	t62 = (x265-((x266%x267)|x268));

	if (t62 != -59LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 3U;
	uint64_t x275 = 3805433231580068LLU;
	int8_t x276 = INT8_MIN;

	t63 = (x273-((x274%x275)|x276));

	if (t63 != 4LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x277 = -1;
	uint32_t x279 = 4026424U;
	static volatile uint32_t x280 = 61098U;
	uint32_t t64 = 61U;

	t64 = (x277-((x278%x279)|x280));

	if (t64 != 4293525777U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x281 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = UINT8_MAX;
	uint32_t t65 = 3U;

	t65 = (x281-((x282%x283)|x284));

	if (t65 != 4294967040U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = -144LL;
	volatile uint16_t x290 = UINT16_MAX;
	volatile uint32_t x291 = UINT32_MAX;
	int64_t t66 = 11716479619491LL;

	t66 = (x289-((x290%x291)|x292));

	if (t66 != -65679LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = -41624590;
	volatile int8_t x294 = INT8_MAX;
	volatile uint64_t x296 = UINT64_MAX;
	static volatile uint64_t t67 = 4454040441340649LLU;

	t67 = (x293-((x294%x295)|x296));

	if (t67 != 18446744073667927027LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x297 = INT8_MAX;
	int64_t x299 = 1007684778750LL;
	int8_t x300 = -1;
	volatile int64_t t68 = 73472LL;

	t68 = (x297-((x298%x299)|x300));

	if (t68 != 128LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x302 = INT8_MAX;
	static uint64_t x303 = 67168277LLU;
	int64_t x304 = INT64_MIN;
	volatile uint64_t t69 = 2490235560318991623LLU;

	t69 = (x301-((x302%x303)|x304));

	if (t69 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x305 = 6U;
	uint16_t x307 = UINT16_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t70 = 51364815946488538LLU;

	t70 = (x305-((x306%x307)|x308));

	if (t70 != 7LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MIN;
	uint8_t x310 = 1U;
	volatile int16_t x311 = INT16_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t71 = 35148145;

	t71 = (x309-((x310%x311)|x312));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x313 = UINT8_MAX;
	int16_t x316 = -389;
	static int32_t t72 = 3416721;

	t72 = (x313-((x314%x315)|x316));

	if (t72 != 644) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x317 = 927154704U;
	int8_t x318 = -1;
	volatile int64_t x319 = INT64_MIN;
	int8_t x320 = -4;
	volatile int64_t t73 = -7LL;

	t73 = (x317-((x318%x319)|x320));

	if (t73 != 927154705LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x321 = -14961510;
	static int64_t x322 = -1LL;
	volatile uint16_t x323 = 220U;
	static int16_t x324 = -120;
	int64_t t74 = 104484LL;

	t74 = (x321-((x322%x323)|x324));

	if (t74 != -14961509LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = INT64_MAX;
	uint64_t x327 = 25524783567744LLU;
	int32_t x328 = -1;
	static volatile uint64_t t75 = 1060642612225465583LLU;

	t75 = (x325-((x326%x327)|x328));

	if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x329 = INT8_MIN;
	uint32_t x330 = UINT32_MAX;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = INT32_MIN;
	uint32_t t76 = 45791918U;

	t76 = (x329-((x330%x331)|x332));

	if (t76 != 2147483520U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x333 = 118U;
	volatile uint32_t x334 = 1369U;
	static int32_t x335 = INT32_MAX;
	uint8_t x336 = 1U;
	uint32_t t77 = 59U;

	t77 = (x333-((x334%x335)|x336));

	if (t77 != 4294966045U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x337 = 1;
	static volatile int64_t x339 = INT64_MIN;
	int16_t x340 = -1139;
	static int64_t t78 = 25LL;

	t78 = (x337-((x338%x339)|x340));

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = 12423684767LLU;
	uint16_t x346 = UINT16_MAX;
	uint32_t x347 = UINT32_MAX;
	int32_t x348 = 227;
	uint64_t t79 = 1261242833835270LLU;

	t79 = (x345-((x346%x347)|x348));

	if (t79 != 12423619232LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = 41;
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;

	t80 = (x349-((x350%x351)|x352));

	if (t80 != -2147483606LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x353 = 447U;
	int16_t x354 = -1;
	static int16_t x355 = 11;
	uint8_t x356 = 5U;

	t81 = (x353-((x354%x355)|x356));

	if (t81 != 448U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x358 = 1U;
	int64_t x360 = 14972155664LL;
	volatile int64_t t82 = -939561714981LL;

	t82 = (x357-((x358%x359)|x360));

	if (t82 != -72138103352837745LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MAX;
	volatile int16_t x362 = INT16_MIN;
	static volatile int32_t x363 = -3182762;
	uint16_t x364 = UINT16_MAX;

	t83 = (x361-((x362%x363)|x364));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x365 = UINT32_MAX;
	int32_t x366 = INT32_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile uint32_t x368 = UINT32_MAX;

	t84 = (x365-((x366%x367)|x368));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x370 = -1;
	static volatile int64_t x371 = INT64_MIN;
	volatile int16_t x372 = 0;
	static int64_t t85 = 77403700LL;

	t85 = (x369-((x370%x371)|x372));

	if (t85 != -2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MIN;
	static uint64_t x376 = 1163157385817135575LLU;
	uint64_t t86 = 68621258LLU;

	t86 = (x373-((x374%x375)|x376));

	if (t86 != 17283586685744932353LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x377 = 0;
	int8_t x378 = INT8_MIN;
	volatile int64_t x379 = INT64_MAX;
	int64_t t87 = -21834LL;

	t87 = (x377-((x378%x379)|x380));

	if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x381 = INT8_MIN;
	static volatile uint64_t x384 = 3051531048033148LLU;
	static volatile uint64_t t88 = 938392163069994LLU;

	t88 = (x381-((x382%x383)|x384));

	if (t88 != 18443692542395416449LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = -1;
	volatile int16_t x386 = INT16_MIN;
	uint16_t x387 = 211U;

	t89 = (x385-((x386%x387)|x388));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x390 = 30268948U;
	static volatile int16_t x391 = -1;

	t90 = (x389-((x390%x391)|x392));

	if (t90 != 30950627411332LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = -1LL;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;
	int64_t t91 = -3LL;

	t91 = (x393-((x394%x395)|x396));

	if (t91 != 3755LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x397 = 3U;
	int32_t x398 = -1;
	uint16_t x400 = 135U;

	t92 = (x397-((x398%x399)|x400));

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = 13787LLU;
	int32_t x402 = -1;
	static uint8_t x403 = 40U;
	uint8_t x404 = 1U;
	uint64_t t93 = 343290542549726313LLU;

	t93 = (x401-((x402%x403)|x404));

	if (t93 != 13788LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = 0LL;
	volatile int8_t x406 = INT8_MAX;
	int32_t x407 = -133652262;
	uint64_t x408 = 1228LLU;
	uint64_t t94 = 1332177639LLU;

	t94 = (x405-((x406%x407)|x408));

	if (t94 != 18446744073709550337LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x409 = 417868448U;
	int32_t x411 = INT32_MIN;
	uint16_t x412 = 0U;
	volatile uint32_t t95 = 333764259U;

	t95 = (x409-((x410%x411)|x412));

	if (t95 != 417835681U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x413 = INT32_MAX;
	int8_t x414 = INT8_MIN;
	volatile int32_t t96 = -1;

	t96 = (x413-((x414%x415)|x416));

	if (t96 != 2147483392) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MIN;
	uint8_t x419 = UINT8_MAX;
	uint32_t x420 = UINT32_MAX;

	t97 = (x417-((x418%x419)|x420));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = 6;
	static int8_t x422 = INT8_MIN;
	uint8_t x423 = 3U;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t98 = 394LLU;

	t98 = (x421-((x422%x423)|x424));

	if (t98 != 7LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x425 = INT32_MIN;
	int8_t x426 = -43;
	int32_t x428 = -75;
	int32_t t99 = 2905900;

	t99 = (x425-((x426%x427)|x428));

	if (t99 != -2147483637) { NG(); } else { ; }
	
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

