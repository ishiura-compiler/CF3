#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
volatile int32_t x18 = -1;
uint64_t x20 = 1LLU;
volatile uint64_t x28 = UINT64_MAX;
uint16_t x35 = UINT16_MAX;
uint16_t x36 = 3U;
uint16_t x39 = UINT16_MAX;
volatile int16_t x42 = 1410;
volatile uint8_t x47 = 0U;
uint64_t x51 = 10368039LLU;
volatile uint64_t t12 = 1101693070930636616LLU;
uint8_t x53 = 5U;
uint8_t x56 = UINT8_MAX;
uint32_t t14 = 864958744U;
volatile int16_t x63 = INT16_MAX;
volatile uint8_t x65 = 45U;
volatile int32_t x67 = -1;
int32_t x68 = 16;
int32_t x69 = INT32_MIN;
volatile int64_t x70 = -1LL;
int64_t x72 = INT64_MAX;
int64_t x74 = INT64_MIN;
volatile int64_t x78 = INT64_MIN;
int64_t x81 = INT64_MAX;
int64_t x83 = -1LL;
static uint32_t x85 = 2039510913U;
int64_t x93 = -86116549229LL;
int32_t t23 = -464736498;
static uint64_t x99 = UINT64_MAX;
volatile int64_t x100 = INT64_MIN;
volatile uint64_t t24 = 268678800258152LLU;
uint16_t x101 = 85U;
static int64_t x105 = -1LL;
volatile uint64_t x107 = 976767365585691201LLU;
volatile int64_t x110 = INT64_MIN;
static volatile int32_t x115 = INT32_MAX;
static volatile uint16_t x116 = 0U;
static int8_t x118 = -1;
static int8_t x121 = INT8_MIN;
volatile uint64_t t34 = 29LLU;
static int8_t x142 = INT8_MIN;
uint16_t x145 = 18U;
int64_t t37 = 1727434902295LL;
int16_t x153 = INT16_MIN;
int32_t x155 = -701532020;
volatile int32_t t38 = -308318;
int32_t x161 = INT32_MAX;
int16_t x162 = 1;
volatile uint16_t x164 = 13090U;
uint8_t x168 = 14U;
int64_t t41 = -21129290222345344LL;
int32_t t42 = -379;
volatile int8_t x182 = INT8_MIN;
volatile int64_t t45 = 30489645352596194LL;
static uint16_t x189 = 16882U;
static volatile int8_t x192 = INT8_MAX;
int16_t x196 = INT16_MIN;
int8_t x201 = INT8_MAX;
uint64_t x206 = UINT64_MAX;
uint32_t x209 = 907731131U;
volatile int64_t t52 = -6355LL;
int8_t x216 = -1;
int32_t t54 = 1050;
int8_t x223 = 9;
uint16_t x225 = 456U;
int16_t x232 = INT16_MIN;
volatile int32_t t57 = -10124;
static volatile int64_t t58 = -119894792008467LL;
uint8_t x239 = UINT8_MAX;
int32_t x240 = -1;
int32_t t59 = 14248413;
int8_t x252 = -1;
volatile uint32_t t61 = 416241U;
uint32_t x254 = UINT32_MAX;
volatile int64_t x256 = -15461586758907122LL;
volatile uint8_t x257 = UINT8_MAX;
uint8_t x258 = 1U;
int8_t x261 = -1;
int8_t x263 = -36;
int32_t t64 = -754494;
uint16_t x273 = 43U;
int64_t x276 = INT64_MIN;
int32_t t68 = -114295204;
int16_t x284 = -1;
int32_t x295 = INT32_MIN;
static int64_t x300 = INT64_MAX;
static int16_t x304 = -13;
uint32_t x307 = UINT32_MAX;
int32_t x310 = -401652896;
int64_t x316 = INT64_MAX;
int64_t x321 = -1LL;
int16_t x324 = INT16_MAX;
int32_t x329 = -30846405;
volatile uint16_t x334 = 12U;
static uint64_t x335 = 3LLU;
uint64_t t82 = 107649894082LLU;
int64_t x338 = INT64_MAX;
static volatile uint32_t x340 = UINT32_MAX;
int64_t t83 = -55859LL;
int16_t x341 = 848;
int32_t x345 = 2475414;
int32_t x350 = INT32_MAX;
static int64_t x351 = -1LL;
volatile int32_t t87 = 6056;
uint16_t x360 = 58U;
static uint64_t t89 = 14260LLU;
int8_t x370 = INT8_MAX;
volatile int32_t t94 = 651240;
uint16_t x385 = UINT16_MAX;
static int64_t x386 = INT64_MIN;
int8_t x389 = INT8_MAX;
static volatile uint32_t t98 = 4U;
int8_t x401 = INT8_MIN;


void f0(void) {
	volatile int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	volatile int16_t x4 = -1;
	int32_t t0 = 8999;

	t0 = ((x1<=x2)-(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = -1LL;
	uint64_t x7 = 669692498180627LLU;
	int32_t x8 = -1;
	uint64_t t1 = 3336904731147LLU;

	t1 = ((x5<=x6)-(x7|x8));

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MIN;
	static uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -1;

	t2 = ((x9<=x10)-(x11|x12));

	if (t2 != 2147483394) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 3169342469891877LLU;
	int64_t x14 = 12783242577914834LL;
	uint8_t x15 = 2U;
	volatile uint32_t x16 = 14837528U;
	uint32_t t3 = 1166434U;

	t3 = ((x13<=x14)-(x15|x16));

	if (t3 != 4280129767U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	int8_t x19 = 1;
	uint64_t t4 = UINT64_MAX;

	t4 = ((x17<=x18)-(x19|x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 365291645U;
	volatile int32_t x22 = -3;
	volatile uint64_t x23 = 61LLU;
	int8_t x24 = INT8_MIN;
	static uint64_t t5 = 20543753LLU;

	t5 = ((x21<=x22)-(x23|x24));

	if (t5 != 68LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1934926LL;
	int64_t x26 = INT64_MAX;
	int8_t x27 = INT8_MAX;
	volatile uint64_t t6 = 171358420134912635LLU;

	t6 = ((x25<=x26)-(x27|x28));

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MIN;
	uint8_t x32 = 7U;
	static int64_t t7 = -2215143489865632034LL;

	t7 = ((x29<=x30)-(x31|x32));

	if (t7 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 24U;
	int32_t x34 = INT32_MIN;
	int32_t t8 = 0;

	t8 = ((x33<=x34)-(x35|x36));

	if (t8 != -65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 22U;
	uint8_t x38 = 31U;
	uint64_t x40 = 0LLU;
	uint64_t t9 = 402748LLU;

	t9 = ((x37<=x38)-(x39|x40));

	if (t9 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 30433U;
	int8_t x43 = 0;
	static int32_t x44 = -1;
	volatile int32_t t10 = 237;

	t10 = ((x41<=x42)-(x43|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 2152U;
	static int8_t x46 = -1;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = -902572982;

	t11 = ((x45<=x46)-(x47|x48));

	if (t11 != -255) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x49 = UINT32_MAX;
	int8_t x50 = INT8_MIN;
	uint16_t x52 = UINT16_MAX;

	t12 = ((x49<=x50)-(x51|x52));

	if (t12 != 18446744073699131393LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = INT16_MIN;
	int64_t x55 = -198171760296596LL;
	static volatile int64_t t13 = -80724151179LL;

	t13 = ((x53<=x54)-(x55|x56));

	if (t13 != 198171760296449LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -28;
	uint16_t x58 = UINT16_MAX;
	uint32_t x59 = UINT32_MAX;
	static int16_t x60 = INT16_MIN;

	t14 = ((x57<=x58)-(x59|x60));

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = 1;
	static uint32_t x62 = 253U;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = 6647298;

	t15 = ((x61<=x62)-(x63|x64));

	if (t15 != -32766) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MAX;
	volatile int32_t t16 = -16272307;

	t16 = ((x65<=x66)-(x67|x68));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x71 = INT16_MIN;
	int64_t t17 = -9LL;

	t17 = ((x69<=x70)-(x71|x72));

	if (t17 != 2LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x75 = INT64_MAX;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 116166LLU;

	t18 = ((x73<=x74)-(x75|x76));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static int32_t x79 = -1;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 2662917;

	t19 = ((x77<=x78)-(x79|x80));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	uint64_t x84 = UINT64_MAX;
	uint64_t t20 = 254715289546LLU;

	t20 = ((x81<=x82)-(x83|x84));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = 12U;
	int64_t x87 = INT64_MAX;
	int32_t x88 = -1;
	static int64_t t21 = -45LL;

	t21 = ((x85<=x86)-(x87|x88));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = 0;
	uint64_t x91 = UINT64_MAX;
	int8_t x92 = -3;
	volatile uint64_t t22 = 39329728400LLU;

	t22 = ((x89<=x90)-(x91|x92));

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = INT32_MIN;
	volatile int16_t x95 = INT16_MAX;
	int8_t x96 = INT8_MIN;

	t23 = ((x93<=x94)-(x95|x96));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x98 = -1;

	t24 = ((x97<=x98)-(x99|x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = 6U;
	static int64_t x103 = INT64_MIN;
	volatile uint16_t x104 = 424U;
	static int64_t t25 = -66097883885664LL;

	t25 = ((x101<=x102)-(x103|x104));

	if (t25 != 9223372036854775384LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x106 = -61690612963963341LL;
	volatile int8_t x108 = -1;
	volatile uint64_t t26 = 5802232LLU;

	t26 = ((x105<=x106)-(x107|x108));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -6019040LL;
	int8_t x111 = 30;
	volatile int64_t x112 = INT64_MIN;
	volatile int64_t t27 = -14306412001443726LL;

	t27 = ((x109<=x110)-(x111|x112));

	if (t27 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 31294U;
	int8_t x114 = INT8_MIN;
	int32_t t28 = 4869222;

	t28 = ((x113<=x114)-(x115|x116));

	if (t28 != -2147483646) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -773;
	int16_t x119 = INT16_MAX;
	uint64_t x120 = UINT64_MAX;
	uint64_t t29 = 24379093424430LLU;

	t29 = ((x117<=x118)-(x119|x120));

	if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x122 = UINT32_MAX;
	static uint32_t x123 = 411920U;
	uint32_t x124 = 15840501U;
	static uint32_t t30 = 9U;

	t30 = ((x121<=x122)-(x123|x124));

	if (t30 != 4278714892U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	uint64_t x126 = 4010121LLU;
	static volatile int32_t x127 = -38274;
	volatile int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -1;

	t31 = ((x125<=x126)-(x127|x128));

	if (t31 != 38274) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = UINT16_MAX;
	uint32_t x130 = UINT32_MAX;
	volatile int64_t x131 = -1LL;
	static volatile uint32_t x132 = 333673U;
	int64_t t32 = -4LL;

	t32 = ((x129<=x130)-(x131|x132));

	if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = UINT64_MAX;
	static uint64_t x134 = UINT64_MAX;
	int8_t x135 = -3;
	int64_t x136 = INT64_MAX;
	static volatile int64_t t33 = 490598LL;

	t33 = ((x133<=x134)-(x135|x136));

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	volatile int8_t x138 = INT8_MIN;
	static uint64_t x139 = UINT64_MAX;
	uint16_t x140 = 5210U;

	t34 = ((x137<=x138)-(x139|x140));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -2;
	int8_t x143 = 0;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 525719634;

	t35 = ((x141<=x142)-(x143|x144));

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = -1;
	volatile int16_t x147 = 284;
	volatile uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = 352U;

	t36 = ((x145<=x146)-(x147|x148));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 21852915079755280LL;
	uint32_t x150 = 45888U;
	int16_t x151 = INT16_MIN;
	static int64_t x152 = INT64_MIN;

	t37 = ((x149<=x150)-(x151|x152));

	if (t37 != 32768LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 0U;
	volatile uint16_t x156 = 20188U;

	t38 = ((x153<=x154)-(x155|x156));

	if (t38 != 701530405) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = 1;
	static int64_t x158 = INT64_MAX;
	int64_t x159 = INT64_MIN;
	uint64_t x160 = 2194316LLU;
	volatile uint64_t t39 = 3LLU;

	t39 = ((x157<=x158)-(x159|x160));

	if (t39 != 9223372036852581493LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x163 = 38U;
	static volatile int32_t t40 = -1914;

	t40 = ((x161<=x162)-(x163|x164));

	if (t40 != -13094) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	static volatile int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MIN;

	t41 = ((x165<=x166)-(x167|x168));

	if (t41 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MAX;
	int8_t x170 = 1;
	int8_t x171 = -1;
	int8_t x172 = -1;

	t42 = ((x169<=x170)-(x171|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 48988587LL;
	int16_t x174 = -1;
	static int8_t x175 = INT8_MIN;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t43 = -499;

	t43 = ((x173<=x174)-(x175|x176));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	int32_t x178 = 0;
	int32_t x179 = 28318;
	uint32_t x180 = 1680864338U;
	volatile uint32_t t44 = 16482402U;

	t44 = ((x177<=x178)-(x179|x180));

	if (t44 != 2614100259U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	volatile int64_t x184 = -1LL;

	t45 = ((x181<=x182)-(x183|x184));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MAX;
	int32_t x187 = -58780756;
	uint16_t x188 = 220U;
	volatile int32_t t46 = -1243948;

	t46 = ((x185<=x186)-(x187|x188));

	if (t46 != 58780677) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x190 = UINT32_MAX;
	int32_t x191 = -1;
	volatile int32_t t47 = -488;

	t47 = ((x189<=x190)-(x191|x192));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	static int64_t x194 = 367440992LL;
	int32_t x195 = 453078;
	int32_t t48 = -822455745;

	t48 = ((x193<=x194)-(x195|x196));

	if (t48 != 5675) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 51;
	int16_t x198 = -1;
	int8_t x199 = INT8_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t49 = -1776955;

	t49 = ((x197<=x198)-(x199|x200));

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MIN;
	uint32_t x203 = 236330666U;
	int16_t x204 = -3382;
	static uint32_t t50 = 63011U;

	t50 = ((x201<=x202)-(x203|x204));

	if (t50 != 278U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	static int32_t x207 = -3;
	int16_t x208 = -476;
	volatile int32_t t51 = 1;

	t51 = ((x205<=x206)-(x207|x208));

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MAX;
	static int64_t x212 = -1LL;

	t52 = ((x209<=x210)-(x211|x212));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 15165344959LLU;
	uint32_t x214 = 39U;
	int32_t x215 = -1;
	volatile int32_t t53 = -430207223;

	t53 = ((x213<=x214)-(x215|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -2;
	int8_t x218 = -1;
	volatile int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MAX;

	t54 = ((x217<=x218)-(x219|x220));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	static volatile int32_t x222 = INT32_MAX;
	int64_t x224 = -1LL;
	volatile int64_t t55 = 83LL;

	t55 = ((x221<=x222)-(x223|x224));

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = INT16_MIN;
	static int64_t x227 = INT64_MAX;
	static volatile int64_t x228 = 10634181697236713LL;
	int64_t t56 = 107LL;

	t56 = ((x225<=x226)-(x227|x228));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	static volatile int32_t x230 = 95;
	int8_t x231 = INT8_MAX;

	t57 = ((x229<=x230)-(x231|x232));

	if (t57 != 32642) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MAX;
	static uint64_t x234 = 1456696LLU;
	int8_t x235 = INT8_MIN;
	volatile int64_t x236 = INT64_MIN;

	t58 = ((x233<=x234)-(x235|x236));

	if (t58 != 128LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	int8_t x238 = -1;

	t59 = ((x237<=x238)-(x239|x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = INT64_MIN;
	volatile int64_t x247 = 3279593LL;
	uint32_t x248 = 31376U;
	int64_t t60 = 8936LL;

	t60 = ((x245<=x246)-(x247|x248));

	if (t60 != -3308281LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x249 = UINT16_MAX;
	volatile uint32_t x250 = 28239U;
	uint32_t x251 = UINT32_MAX;

	t61 = ((x249<=x250)-(x251|x252));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x253 = 15U;
	int64_t x255 = INT64_MIN;
	volatile int64_t t62 = 0LL;

	t62 = ((x253<=x254)-(x255|x256));

	if (t62 != 15461586758907123LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x259 = -7659423LL;
	int16_t x260 = 3;
	int64_t t63 = -89LL;

	t63 = ((x257<=x258)-(x259|x260));

	if (t63 != 7659421LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x262 = INT16_MAX;
	int8_t x264 = INT8_MIN;

	t64 = ((x261<=x262)-(x263|x264));

	if (t64 != 37) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	int64_t x266 = -1LL;
	static int32_t x267 = INT32_MAX;
	volatile int32_t x268 = -1;
	int32_t t65 = 125;

	t65 = ((x265<=x266)-(x267|x268));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x269 = 104U;
	static uint16_t x270 = 0U;
	uint16_t x271 = 30047U;
	int8_t x272 = -1;
	int32_t t66 = 554;

	t66 = ((x269<=x270)-(x271|x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x274 = INT64_MIN;
	int64_t x275 = -1LL;
	static int64_t t67 = 198686418345513799LL;

	t67 = ((x273<=x274)-(x275|x276));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MAX;
	static int32_t x278 = -1;
	int16_t x279 = INT16_MIN;
	static volatile int16_t x280 = INT16_MIN;

	t68 = ((x277<=x278)-(x279|x280));

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = 612U;
	int16_t x282 = INT16_MIN;
	static int16_t x283 = 0;
	volatile int32_t t69 = -227806;

	t69 = ((x281<=x282)-(x283|x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	int64_t x288 = -1LL;
	static int64_t t70 = 25LL;

	t70 = ((x285<=x286)-(x287|x288));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = -2819;
	static int64_t x290 = 282596027LL;
	static int8_t x291 = INT8_MIN;
	uint16_t x292 = 14U;
	volatile int32_t t71 = 11794437;

	t71 = ((x289<=x290)-(x291|x292));

	if (t71 != 115) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MIN;
	static volatile int64_t x294 = INT64_MIN;
	int16_t x296 = -6;
	int32_t t72 = -898213077;

	t72 = ((x293<=x294)-(x295|x296));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	int64_t x298 = 234757502LL;
	uint16_t x299 = 375U;
	int64_t t73 = -7091418237LL;

	t73 = ((x297<=x298)-(x299|x300));

	if (t73 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = 277;
	volatile uint32_t x303 = 86U;
	uint32_t t74 = 6681U;

	t74 = ((x301<=x302)-(x303|x304));

	if (t74 != 10U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MAX;
	int8_t x308 = -1;
	uint32_t t75 = 4372697U;

	t75 = ((x305<=x306)-(x307|x308));

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x309 = 1;
	static int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	volatile int32_t t76 = 464334;

	t76 = ((x309<=x310)-(x311|x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = 1;
	static uint64_t x314 = 1094057910058965211LLU;
	int16_t x315 = -1;
	volatile int64_t t77 = 1LL;

	t77 = ((x313<=x314)-(x315|x316));

	if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x317 = INT8_MAX;
	static volatile uint32_t x318 = UINT32_MAX;
	int16_t x319 = -350;
	int64_t x320 = INT64_MAX;
	int64_t t78 = -267708290LL;

	t78 = ((x317<=x318)-(x319|x320));

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x322 = 198U;
	int8_t x323 = INT8_MIN;
	volatile int32_t t79 = 1;

	t79 = ((x321<=x322)-(x323|x324));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MAX;
	static volatile int8_t x326 = INT8_MIN;
	uint8_t x327 = 90U;
	int32_t x328 = INT32_MIN;
	volatile int32_t t80 = -502159964;

	t80 = ((x325<=x326)-(x327|x328));

	if (t80 != 2147483558) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	uint32_t x332 = 1U;
	volatile uint32_t t81 = 282U;

	t81 = ((x329<=x330)-(x331|x332));

	if (t81 != 32768U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x333 = INT16_MIN;
	static int8_t x336 = -1;

	t82 = ((x333<=x334)-(x335|x336));

	if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MIN;
	static int64_t x339 = INT64_MIN;

	t83 = ((x337<=x338)-(x339|x340));

	if (t83 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x342 = -1;
	volatile uint32_t x343 = 219803U;
	uint8_t x344 = 3U;
	uint32_t t84 = 399304348U;

	t84 = ((x341<=x342)-(x343|x344));

	if (t84 != 4294747493U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x346 = -3969;
	int8_t x347 = INT8_MAX;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t85 = 0;

	t85 = ((x345<=x346)-(x347|x348));

	if (t85 != 32641) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = 11U;
	static int8_t x352 = -7;
	volatile int64_t t86 = 129256269311LL;

	t86 = ((x349<=x350)-(x351|x352));

	if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = 38939LL;
	uint16_t x354 = UINT16_MAX;
	uint16_t x355 = 2U;
	uint16_t x356 = UINT16_MAX;

	t87 = ((x353<=x354)-(x355|x356));

	if (t87 != -65534) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x357 = INT64_MIN;
	static int32_t x358 = -1;
	int64_t x359 = 1307234843LL;
	int64_t t88 = 17777764LL;

	t88 = ((x357<=x358)-(x359|x360));

	if (t88 != -1307234874LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x361 = 51755U;
	int8_t x362 = 4;
	static uint16_t x363 = 162U;
	uint64_t x364 = 78840777414081LLU;

	t89 = ((x361<=x362)-(x363|x364));

	if (t89 != 18446665232932137501LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = 3U;
	int16_t x367 = -1;
	int32_t x368 = INT32_MAX;
	int32_t t90 = -978456167;

	t90 = ((x365<=x366)-(x367|x368));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x369 = 2741930323628192LLU;
	int64_t x371 = 60628417160LL;
	static volatile int8_t x372 = 1;
	volatile int64_t t91 = 403091431LL;

	t91 = ((x369<=x370)-(x371|x372));

	if (t91 != -60628417161LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = 1;
	int32_t x374 = -103;
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MAX;
	int32_t t92 = -37;

	t92 = ((x373<=x374)-(x375|x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = -10LL;
	static int16_t x378 = INT16_MAX;
	volatile uint32_t x379 = 228049233U;
	volatile int64_t x380 = INT64_MIN;
	static int64_t t93 = -5825230178614LL;

	t93 = ((x377<=x378)-(x379|x380));

	if (t93 != 9223372036626726576LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = 1333;
	uint8_t x382 = 3U;
	volatile int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;

	t94 = ((x381<=x382)-(x383|x384));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x387 = INT16_MAX;
	uint64_t x388 = 22414818556657LLU;
	volatile uint64_t t95 = 5288LLU;

	t95 = ((x385<=x386)-(x387|x388));

	if (t95 != 18446721658890977281LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x390 = 3;
	static uint32_t x391 = 5U;
	int16_t x392 = INT16_MAX;
	uint32_t t96 = 10983386U;

	t96 = ((x389<=x390)-(x391|x392));

	if (t96 != 4294934529U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = 22532147;
	int16_t x394 = 2;
	int8_t x395 = -1;
	static uint16_t x396 = 460U;
	int32_t t97 = 54;

	t97 = ((x393<=x394)-(x395|x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -1;
	static int16_t x398 = INT16_MAX;
	uint32_t x399 = 321U;
	uint8_t x400 = 11U;

	t98 = ((x397<=x398)-(x399|x400));

	if (t98 != 4294966966U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x402 = UINT8_MAX;
	volatile int16_t x403 = INT16_MIN;
	int16_t x404 = -1;
	volatile int32_t t99 = -4542;

	t99 = ((x401<=x402)-(x403|x404));

	if (t99 != 2) { NG(); } else { ; }
	
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

