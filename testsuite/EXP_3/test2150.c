#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
volatile int32_t t0 = -1;
static uint16_t x5 = 21U;
volatile int16_t x9 = INT16_MIN;
static volatile int64_t t3 = -175990494655544LL;
int32_t x24 = INT32_MAX;
volatile int32_t t5 = 168748758;
uint8_t x25 = 7U;
volatile int64_t x30 = INT64_MIN;
int64_t x38 = INT64_MIN;
uint64_t x40 = 2145659448588LLU;
uint16_t x45 = 11U;
volatile uint32_t t11 = 69701805U;
static int16_t x51 = INT16_MIN;
uint8_t x53 = UINT8_MAX;
int8_t x54 = INT8_MAX;
int64_t t13 = 119523250LL;
int64_t t14 = 862893462753657189LL;
static uint16_t x66 = 8U;
int16_t x68 = INT16_MIN;
uint16_t x72 = 0U;
int8_t x77 = 0;
int64_t x78 = -1859415502LL;
uint64_t x80 = 106393666692912LLU;
uint32_t x86 = 1074274U;
int32_t x87 = INT32_MAX;
int32_t x89 = -1;
int8_t x92 = INT8_MAX;
uint8_t x93 = UINT8_MAX;
uint64_t t23 = 45044444438930403LLU;
static uint16_t x97 = UINT16_MAX;
int64_t x98 = INT64_MAX;
int64_t x99 = -759LL;
static volatile int64_t t24 = 13899133952918LL;
int16_t x102 = -1;
int32_t x105 = INT32_MIN;
volatile int64_t t26 = -10850831080296LL;
int8_t x110 = INT8_MIN;
volatile int32_t x112 = INT32_MIN;
volatile int64_t t27 = -22059477105634081LL;
int64_t x115 = -51385194178468548LL;
static int16_t x118 = INT16_MIN;
int64_t x119 = INT64_MAX;
int64_t x122 = -1080572374156LL;
volatile uint8_t x127 = UINT8_MAX;
volatile uint32_t t34 = 185964227U;
int16_t x144 = INT16_MAX;
uint64_t x147 = 629063237232LLU;
int32_t x152 = -125942;
static volatile uint64_t x153 = 841814181564LLU;
int32_t x161 = INT32_MAX;
volatile int16_t x162 = INT16_MAX;
static int8_t x184 = -1;
uint64_t x185 = UINT64_MAX;
int8_t x190 = INT8_MAX;
volatile uint8_t x191 = 61U;
volatile int32_t t47 = -128925;
int64_t x193 = -481939156LL;
int8_t x195 = 11;
volatile int8_t x200 = INT8_MIN;
int32_t t49 = -62;
int16_t x202 = -1790;
static int32_t t50 = -803;
volatile uint16_t x206 = 11U;
static int64_t x210 = INT64_MAX;
int64_t x221 = 0LL;
int16_t x227 = INT16_MAX;
volatile int32_t x229 = INT32_MIN;
volatile int16_t x232 = INT16_MIN;
uint16_t x234 = 7223U;
uint8_t x235 = UINT8_MAX;
uint16_t x240 = 3059U;
int32_t x242 = 9538074;
static int32_t t60 = 55;
uint32_t x246 = 932U;
uint16_t x255 = 5983U;
uint32_t x256 = UINT32_MAX;
int8_t x261 = INT8_MAX;
uint32_t x262 = UINT32_MAX;
int64_t x265 = 300163712473228LL;
volatile int8_t x266 = -1;
int32_t t65 = 776;
static volatile int64_t t68 = -6835073157803LL;
static volatile int64_t t72 = 124807LL;
static volatile int16_t x304 = -1598;
static uint64_t x309 = 169437LLU;
static int16_t x310 = INT16_MIN;
static uint64_t x311 = 5670124403LLU;
static volatile int64_t x312 = -1LL;
uint32_t x314 = UINT32_MAX;
volatile int64_t x323 = INT64_MIN;
int16_t x329 = -1;
volatile uint8_t x332 = 5U;
uint64_t x336 = UINT64_MAX;
int64_t x338 = INT64_MAX;
uint64_t x339 = 166118719325848LLU;
uint64_t x342 = 1LLU;
int16_t x347 = INT16_MIN;
int8_t x352 = -1;
static int16_t x355 = INT16_MAX;
uint32_t x362 = 302609U;
int32_t x364 = INT32_MAX;
int64_t x370 = -304249834910LL;
uint8_t x375 = 0U;
int32_t t90 = -5;
uint16_t x382 = 600U;
int8_t x383 = -14;
int16_t x384 = 223;
int32_t x392 = INT32_MIN;
uint64_t t95 = 458LLU;
uint16_t x411 = 3891U;
int16_t x412 = INT16_MIN;
static volatile int32_t t97 = -195704;
uint16_t x414 = 83U;
int8_t x417 = 12;
uint16_t x419 = UINT16_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int16_t x3 = -1;
	volatile int32_t x4 = INT32_MIN;

	t0 = ((x1<=x2)%(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -1LL;
	static int64_t x7 = -1916LL;
	int8_t x8 = INT8_MIN;
	int64_t t1 = 410LL;

	t1 = ((x5<=x6)%(x7^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 106;
	uint16_t x11 = 1546U;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 23097033;

	t2 = ((x9<=x10)%(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint16_t x14 = UINT16_MAX;
	int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;

	t3 = ((x13<=x14)%(x15^x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = -1;
	uint8_t x19 = 11U;
	volatile uint16_t x20 = 238U;
	volatile int32_t t4 = -160;

	t4 = ((x17<=x18)%(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 6047;
	int8_t x22 = INT8_MIN;
	static int16_t x23 = -47;

	t5 = ((x21<=x22)%(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MAX;
	int32_t x28 = INT32_MAX;
	volatile int64_t t6 = 3824800298743LL;

	t6 = ((x25<=x26)%(x27^x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x29 = -43;
	int32_t x31 = INT32_MAX;
	volatile int64_t x32 = INT64_MIN;
	int64_t t7 = 32520LL;

	t7 = ((x29<=x30)%(x31^x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 14937280205863LLU;
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	int8_t x36 = -1;
	int32_t t8 = 219403127;

	t8 = ((x33<=x34)%(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = UINT64_MAX;
	static int32_t x39 = INT32_MAX;
	static volatile uint64_t t9 = 1335LLU;

	t9 = ((x37<=x38)%(x39^x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = 0;
	uint64_t x42 = 224104LLU;
	uint8_t x43 = 81U;
	static int32_t x44 = -1;
	static volatile int32_t t10 = 13621;

	t10 = ((x41<=x42)%(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x46 = 1U;
	uint32_t x47 = 34642636U;
	int32_t x48 = INT32_MAX;

	t11 = ((x45<=x46)%(x47^x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 1199U;
	static int8_t x50 = INT8_MIN;
	uint64_t x52 = 148906987287138LLU;
	volatile uint64_t t12 = 1929901400LLU;

	t12 = ((x49<=x50)%(x51^x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x55 = INT8_MAX;
	int64_t x56 = 5080LL;

	t13 = ((x53<=x54)%(x55^x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 11;
	int32_t x58 = -1;
	static volatile int64_t x59 = -60325713952730869LL;
	uint32_t x60 = 18197U;

	t14 = ((x57<=x58)%(x59^x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 0U;
	volatile int16_t x62 = -8;
	volatile int32_t x63 = INT32_MIN;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = 6079308;

	t15 = ((x61<=x62)%(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x67 = 51084853429LLU;
	uint64_t t16 = 2176641LLU;

	t16 = ((x65<=x66)%(x67^x68));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -1LL;
	int64_t x70 = INT64_MIN;
	int8_t x71 = -63;
	volatile int32_t t17 = 29140196;

	t17 = ((x69<=x70)%(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 1;
	int64_t x74 = 491616LL;
	volatile int16_t x75 = 53;
	volatile int64_t x76 = -5LL;
	int64_t t18 = -213849973926866LL;

	t18 = ((x73<=x74)%(x75^x76));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x79 = 38U;
	volatile uint64_t t19 = 98690005LLU;

	t19 = ((x77<=x78)%(x79^x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 40216;
	static int64_t x82 = 6483158476LL;
	int16_t x83 = -52;
	static int16_t x84 = 141;
	volatile int32_t t20 = 786;

	t20 = ((x81<=x82)%(x83^x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 4856719405LLU;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = -18113494;

	t21 = ((x85<=x86)%(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 14120363212LLU;
	volatile int32_t x91 = INT32_MIN;
	volatile int32_t t22 = -28987;

	t22 = ((x89<=x90)%(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = 22;
	uint64_t x95 = UINT64_MAX;
	volatile int32_t x96 = INT32_MIN;

	t23 = ((x93<=x94)%(x95^x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x100 = INT8_MIN;

	t24 = ((x97<=x98)%(x99^x100));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x103 = INT8_MAX;
	int64_t x104 = INT64_MIN;
	volatile int64_t t25 = 6749753LL;

	t25 = ((x101<=x102)%(x103^x104));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MIN;
	static int64_t x107 = INT64_MAX;
	int64_t x108 = 977629696741LL;

	t26 = ((x105<=x106)%(x107^x108));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int64_t x111 = -1LL;

	t27 = ((x109<=x110)%(x111^x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -48105439LL;
	static int64_t x114 = -76360912395319LL;
	int32_t x116 = INT32_MIN;
	static int64_t t28 = -4724865531536852LL;

	t28 = ((x113<=x114)%(x115^x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 0U;
	int64_t x120 = INT64_MIN;
	static int64_t t29 = -4072887327805LL;

	t29 = ((x117<=x118)%(x119^x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = UINT8_MAX;
	uint16_t x123 = UINT16_MAX;
	int32_t x124 = -438007;
	int32_t t30 = 108358190;

	t30 = ((x121<=x122)%(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 579;
	volatile uint8_t x126 = 0U;
	uint64_t x128 = 1769705178674425974LLU;
	volatile uint64_t t31 = 86522865255124256LLU;

	t31 = ((x125<=x126)%(x127^x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	static int8_t x130 = INT8_MAX;
	volatile int8_t x131 = INT8_MAX;
	uint32_t x132 = 3U;
	uint32_t t32 = 5946229U;

	t32 = ((x129<=x130)%(x131^x132));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MIN;
	static int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MAX;
	int64_t t33 = 886348333LL;

	t33 = ((x133<=x134)%(x135^x136));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	uint64_t x138 = 7353430151282527994LLU;
	uint32_t x139 = 3325102U;
	uint8_t x140 = 21U;

	t34 = ((x137<=x138)%(x139^x140));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 8844;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = -1LL;
	volatile int64_t t35 = 2927861444762551LL;

	t35 = ((x141<=x142)%(x143^x144));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 6U;
	uint64_t x146 = UINT64_MAX;
	int8_t x148 = 1;
	volatile uint64_t t36 = 2049883LLU;

	t36 = ((x145<=x146)%(x147^x148));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	static uint16_t x150 = 1862U;
	int64_t x151 = -1LL;
	int64_t t37 = 506LL;

	t37 = ((x149<=x150)%(x151^x152));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	volatile int8_t x155 = INT8_MIN;
	static volatile int64_t x156 = 89763LL;
	int64_t t38 = 30877458325627LL;

	t38 = ((x153<=x154)%(x155^x156));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MAX;
	static int8_t x158 = -1;
	int16_t x159 = -3906;
	static int32_t x160 = -1;
	volatile int32_t t39 = 5191627;

	t39 = ((x157<=x158)%(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x163 = INT32_MIN;
	static volatile uint32_t x164 = 12389895U;
	static uint32_t t40 = 10U;

	t40 = ((x161<=x162)%(x163^x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 7050;
	static volatile int8_t x166 = INT8_MAX;
	int16_t x167 = -1;
	volatile int16_t x168 = INT16_MIN;
	static volatile int32_t t41 = -16;

	t41 = ((x165<=x166)%(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int32_t x170 = -53;
	static int64_t x171 = INT64_MIN;
	static int8_t x172 = INT8_MAX;
	int64_t t42 = 27203017593268471LL;

	t42 = ((x169<=x170)%(x171^x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile int32_t x174 = 153;
	int8_t x175 = -1;
	uint8_t x176 = 53U;
	static int32_t t43 = 1250;

	t43 = ((x173<=x174)%(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int64_t x178 = -3136217501LL;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MIN;
	static int32_t t44 = 857164;

	t44 = ((x177<=x178)%(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MAX;
	static volatile int16_t x182 = 48;
	int8_t x183 = 0;
	volatile int32_t t45 = 209;

	t45 = ((x181<=x182)%(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x186 = 7;
	static uint64_t x187 = 1LLU;
	static uint16_t x188 = 213U;
	uint64_t t46 = 22148LLU;

	t46 = ((x185<=x186)%(x187^x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int32_t x192 = INT32_MIN;

	t47 = ((x189<=x190)%(x191^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t48 = -20740398565LL;

	t48 = ((x193<=x194)%(x195^x196));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 1119626016U;
	int32_t x198 = INT32_MAX;
	uint16_t x199 = UINT16_MAX;

	t49 = ((x197<=x198)%(x199^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 27004U;
	int32_t x203 = -1243;
	static int8_t x204 = 4;

	t50 = ((x201<=x202)%(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 1U;
	uint32_t x207 = UINT32_MAX;
	static volatile uint8_t x208 = UINT8_MAX;
	volatile uint32_t t51 = 28U;

	t51 = ((x205<=x206)%(x207^x208));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	uint16_t x211 = 6731U;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = -808505614LL;

	t52 = ((x209<=x210)%(x211^x212));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 0U;
	uint64_t x214 = 952LLU;
	volatile int64_t x215 = 0LL;
	uint64_t x216 = 3938869333102915918LLU;
	uint64_t t53 = 109100515577LLU;

	t53 = ((x213<=x214)%(x215^x216));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	static int64_t x218 = INT64_MIN;
	int16_t x219 = 1;
	static int16_t x220 = 13461;
	int32_t t54 = 4638;

	t54 = ((x217<=x218)%(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = INT8_MIN;
	static volatile int8_t x223 = -1;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = 8;

	t55 = ((x221<=x222)%(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 7U;
	uint32_t x226 = UINT32_MAX;
	int64_t x228 = 948954594843LL;
	volatile int64_t t56 = -1431485LL;

	t56 = ((x225<=x226)%(x227^x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;
	static int16_t x231 = INT16_MAX;
	volatile int32_t t57 = -55;

	t57 = ((x229<=x230)%(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 6424803177452186LLU;
	int64_t x236 = -1442396LL;
	static volatile int64_t t58 = 224367471LL;

	t58 = ((x233<=x234)%(x235^x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MIN;
	static volatile int32_t x239 = 16;
	int32_t t59 = 466313118;

	t59 = ((x237<=x238)%(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 281LLU;
	int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MAX;

	t60 = ((x241<=x242)%(x243^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int32_t x247 = -1;
	int32_t x248 = INT32_MIN;
	int32_t t61 = -57091;

	t61 = ((x245<=x246)%(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 15U;
	static uint16_t x254 = 4187U;
	uint32_t t62 = 8U;

	t62 = ((x253<=x254)%(x255^x256));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MAX;
	int8_t x259 = -1;
	volatile int8_t x260 = -37;
	int32_t t63 = -6327;

	t63 = ((x257<=x258)%(x259^x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x263 = 56315003771LLU;
	volatile int8_t x264 = INT8_MAX;
	static volatile uint64_t t64 = 551789384104324LLU;

	t64 = ((x261<=x262)%(x263^x264));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x267 = -11891;
	volatile int16_t x268 = INT16_MAX;

	t65 = ((x265<=x266)%(x267^x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int32_t x270 = 2981747;
	int64_t x271 = INT64_MIN;
	volatile uint8_t x272 = 38U;
	int64_t t66 = 49LL;

	t66 = ((x269<=x270)%(x271^x272));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x277 = 11230U;
	int8_t x278 = INT8_MAX;
	uint32_t x279 = 36026U;
	volatile int8_t x280 = INT8_MAX;
	uint32_t t67 = 0U;

	t67 = ((x277<=x278)%(x279^x280));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = INT64_MIN;
	uint8_t x282 = UINT8_MAX;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MAX;

	t68 = ((x281<=x282)%(x283^x284));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x285 = 888U;
	volatile int16_t x286 = INT16_MAX;
	static int16_t x287 = INT16_MAX;
	uint64_t x288 = 28733LLU;
	volatile uint64_t t69 = 18196268090LLU;

	t69 = ((x285<=x286)%(x287^x288));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x290 = 4U;
	int16_t x291 = 9;
	int64_t x292 = INT64_MAX;
	volatile int64_t t70 = -4146823897129733LL;

	t70 = ((x289<=x290)%(x291^x292));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x293 = UINT8_MAX;
	int16_t x294 = INT16_MIN;
	volatile uint8_t x295 = UINT8_MAX;
	static uint8_t x296 = 7U;
	int32_t t71 = -1;

	t71 = ((x293<=x294)%(x295^x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = INT32_MIN;
	int16_t x298 = -1;
	volatile int64_t x299 = INT64_MAX;
	int16_t x300 = -1;

	t72 = ((x297<=x298)%(x299^x300));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x301 = INT8_MIN;
	uint64_t x302 = 518318054375LLU;
	int8_t x303 = 4;
	volatile int32_t t73 = -1;

	t73 = ((x301<=x302)%(x303^x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t t74 = 351067010LLU;

	t74 = ((x309<=x310)%(x311^x312));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MAX;
	volatile uint64_t t75 = 722986817230420470LLU;

	t75 = ((x313<=x314)%(x315^x316));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 28LLU;
	static int8_t x322 = -1;
	int64_t x324 = -48655862753104LL;
	volatile int64_t t76 = -17LL;

	t76 = ((x321<=x322)%(x323^x324));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	int64_t x327 = -1LL;
	int8_t x328 = 20;
	int64_t t77 = 66433028659909915LL;

	t77 = ((x325<=x326)%(x327^x328));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x330 = INT8_MIN;
	volatile uint16_t x331 = UINT16_MAX;
	volatile int32_t t78 = 1489;

	t78 = ((x329<=x330)%(x331^x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = 1;
	int8_t x334 = INT8_MIN;
	static uint64_t x335 = 2287463995LLU;
	uint64_t t79 = 43LLU;

	t79 = ((x333<=x334)%(x335^x336));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x337 = -2686;
	volatile uint64_t x340 = 37LLU;
	volatile uint64_t t80 = 1944974621051LLU;

	t80 = ((x337<=x338)%(x339^x340));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int32_t x343 = 215182;
	int32_t x344 = INT32_MIN;
	int32_t t81 = 810341;

	t81 = ((x341<=x342)%(x343^x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = 51966276690613LLU;
	static uint8_t x346 = 25U;
	static int8_t x348 = INT8_MIN;
	int32_t t82 = -663405021;

	t82 = ((x345<=x346)%(x347^x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 5U;
	volatile uint16_t x350 = 15U;
	int8_t x351 = 0;
	volatile int32_t t83 = 168608468;

	t83 = ((x349<=x350)%(x351^x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -1;
	uint32_t x354 = 968774672U;
	int32_t x356 = 21333;
	volatile int32_t t84 = 1897;

	t84 = ((x353<=x354)%(x355^x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MAX;
	int16_t x358 = 27;
	static uint16_t x359 = 21U;
	volatile int32_t x360 = INT32_MAX;
	volatile int32_t t85 = -12333;

	t85 = ((x357<=x358)%(x359^x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = -1;
	uint32_t x363 = UINT32_MAX;
	volatile uint32_t t86 = 11173713U;

	t86 = ((x361<=x362)%(x363^x364));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x365 = INT32_MAX;
	volatile int32_t x366 = INT32_MIN;
	int16_t x367 = 0;
	static int64_t x368 = INT64_MIN;
	volatile int64_t t87 = 25554527126993163LL;

	t87 = ((x365<=x366)%(x367^x368));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = 0;
	uint64_t x371 = 11307034836LLU;
	static int32_t x372 = INT32_MAX;
	volatile uint64_t t88 = 8642160117916211550LLU;

	t88 = ((x369<=x370)%(x371^x372));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MAX;
	int64_t x376 = -192680725523697LL;
	static volatile int64_t t89 = 14402622704362LL;

	t89 = ((x373<=x374)%(x375^x376));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MIN;
	uint64_t x378 = 8858827179976591LLU;
	volatile int16_t x379 = INT16_MIN;
	uint8_t x380 = 107U;

	t90 = ((x377<=x378)%(x379^x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x381 = 63U;
	volatile int32_t t91 = 15032;

	t91 = ((x381<=x382)%(x383^x384));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = INT8_MIN;
	static uint32_t x386 = 455U;
	uint8_t x387 = 3U;
	volatile int8_t x388 = -3;
	int32_t t92 = -18395;

	t92 = ((x385<=x386)%(x387^x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x389 = 1042636853294LL;
	static uint16_t x390 = 1402U;
	volatile int8_t x391 = 49;
	int32_t t93 = -16;

	t93 = ((x389<=x390)%(x391^x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x393 = 17U;
	static int32_t x394 = INT32_MIN;
	volatile int32_t x395 = -1;
	int8_t x396 = INT8_MIN;
	int32_t t94 = -43884109;

	t94 = ((x393<=x394)%(x395^x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x397 = -1;
	int32_t x398 = 250515458;
	static int16_t x399 = -1;
	uint64_t x400 = 1LLU;

	t95 = ((x397<=x398)%(x399^x400));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x405 = 445U;
	static int16_t x406 = -1;
	uint32_t x407 = 21713531U;
	volatile uint16_t x408 = 2U;
	volatile uint32_t t96 = 1532U;

	t96 = ((x405<=x406)%(x407^x408));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = 3;
	static int64_t x410 = INT64_MIN;

	t97 = ((x409<=x410)%(x411^x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = INT64_MIN;
	int64_t x415 = -54182267LL;
	static uint16_t x416 = 23964U;
	int64_t t98 = -1657880995LL;

	t98 = ((x413<=x414)%(x415^x416));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x418 = 2;
	static uint16_t x420 = 436U;
	int32_t t99 = -9079983;

	t99 = ((x417<=x418)%(x419^x420));

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

