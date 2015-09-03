#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = UINT32_MAX;
uint32_t x25 = 950737U;
uint64_t x29 = 69LLU;
int32_t x30 = INT32_MIN;
int64_t x34 = 1LL;
static int8_t x37 = INT8_MAX;
static volatile int32_t t9 = -991188707;
volatile int8_t x42 = 1;
static volatile int32_t t10 = -2295;
int64_t x54 = INT64_MIN;
int8_t x62 = -1;
uint8_t x63 = 0U;
int64_t t16 = 12731972720681933LL;
int16_t x72 = -1;
int8_t x73 = 1;
uint64_t x82 = 2185451317016571258LLU;
static int16_t x83 = -60;
volatile uint64_t t21 = 5583001251LLU;
volatile int16_t x92 = 1206;
volatile int16_t x95 = -1;
uint64_t x100 = 28361849738110LLU;
uint32_t x102 = UINT32_MAX;
uint16_t x106 = 53U;
int32_t t26 = -327948;
volatile uint64_t t28 = UINT64_MAX;
uint32_t x117 = 98848U;
volatile uint32_t t29 = 1U;
static int8_t x121 = INT8_MAX;
int32_t x128 = -45251;
volatile int32_t t31 = -7432334;
int16_t x132 = -4921;
uint64_t t33 = UINT64_MAX;
volatile int8_t x137 = -4;
uint64_t x140 = UINT64_MAX;
volatile uint64_t t34 = UINT64_MAX;
uint16_t x142 = 1U;
int16_t x143 = INT16_MIN;
uint32_t x153 = UINT32_MAX;
int32_t x165 = INT32_MAX;
int64_t x166 = 540084624978LL;
volatile uint16_t x168 = UINT16_MAX;
volatile int64_t t41 = -32622808071362LL;
static int16_t x169 = INT16_MIN;
int64_t x172 = INT64_MAX;
uint32_t x173 = 61188394U;
static uint32_t t43 = UINT32_MAX;
int16_t x177 = 3593;
int64_t t44 = 2080551LL;
int32_t x183 = -1;
uint32_t x187 = 776915U;
int32_t x192 = -1;
uint64_t x195 = 2LLU;
uint8_t x198 = 2U;
int8_t x202 = INT8_MIN;
int32_t x207 = -3;
int64_t x208 = -114734292LL;
int32_t x209 = -51737;
int16_t x211 = -1;
static uint64_t x212 = UINT64_MAX;
static int64_t x215 = -1LL;
int64_t x216 = 250960436LL;
volatile int32_t x230 = -1;
volatile int64_t t59 = -1LL;
volatile int64_t x248 = INT64_MIN;
int32_t x249 = INT32_MAX;
static uint8_t x252 = UINT8_MAX;
int64_t t62 = 12663754222LL;
int64_t x255 = INT64_MIN;
int64_t x257 = 8980512618732871LL;
static int8_t x258 = 3;
static volatile int8_t x260 = INT8_MIN;
volatile int64_t t64 = 16LL;
int8_t x268 = -1;
volatile int64_t x271 = INT64_MIN;
int8_t x272 = -2;
volatile int64_t t67 = 49189451313467842LL;
int64_t t68 = -127LL;
int8_t x280 = INT8_MIN;
int64_t t69 = -12956967297LL;
static uint8_t x281 = 114U;
int32_t x282 = INT32_MIN;
uint8_t x284 = UINT8_MAX;
volatile int32_t t71 = -888;
volatile uint64_t t72 = UINT64_MAX;
int16_t x298 = 405;
volatile int16_t x299 = -1;
int32_t x300 = INT32_MAX;
static uint64_t x306 = UINT64_MAX;
uint64_t t78 = UINT64_MAX;
int8_t x318 = 6;
static volatile uint64_t t81 = 271652973LLU;
int16_t x331 = INT16_MIN;
volatile int32_t x332 = INT32_MAX;
int16_t x333 = 2;
static volatile int8_t x336 = INT8_MIN;
int32_t x346 = INT32_MIN;
int8_t x350 = -1;
static int8_t x356 = -1;
volatile int64_t t88 = 11LL;
volatile uint32_t t89 = UINT32_MAX;
static uint64_t t90 = 2515LLU;
int16_t x365 = INT16_MAX;
int16_t x368 = INT16_MIN;
int16_t x374 = INT16_MIN;
static uint8_t x375 = 3U;
volatile int64_t t94 = 1924450705773104322LL;
int8_t x385 = INT8_MIN;
int16_t x388 = -1;
uint64_t t97 = UINT64_MAX;
static volatile int8_t x396 = 31;


void f0(void) {
	volatile int8_t x1 = -1;
	uint16_t x2 = 2274U;
	static int8_t x3 = INT8_MIN;
	volatile int32_t x4 = -5;
	volatile int32_t t0 = -520;

	t0 = (x1|(x2|(x3|x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 0U;
	int64_t x6 = -1LL;
	static int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 1121136856706330LL;

	t1 = (x5|(x6|(x7|x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = -1;
	int64_t x10 = INT64_MIN;
	uint64_t x11 = 2356LLU;
	static volatile uint64_t t2 = UINT64_MAX;

	t2 = (x9|(x10|(x11|x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	int16_t x14 = 1;
	static int16_t x15 = 3052;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -1183;

	t3 = (x13|(x14|(x15|x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = 53538192U;
	int16_t x19 = INT16_MIN;
	int8_t x20 = -1;
	uint32_t t4 = UINT32_MAX;

	t4 = (x17|(x18|(x19|x20)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile int16_t x22 = 6;
	int32_t x23 = INT32_MIN;
	uint64_t x24 = 55510082LLU;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x21|(x22|(x23|x24)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = UINT64_MAX;
	int16_t x27 = -1;
	static int32_t x28 = INT32_MIN;
	uint64_t t6 = UINT64_MAX;

	t6 = (x25|(x26|(x27|x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x31 = 6U;
	uint16_t x32 = UINT16_MAX;
	volatile uint64_t t7 = 206547681309030LLU;

	t7 = (x29|(x30|(x31|x32)));

	if (t7 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static int8_t x35 = INT8_MAX;
	int16_t x36 = -1;
	int64_t t8 = -1184130706778118LL;

	t8 = (x33|(x34|(x35|x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 2436U;
	int16_t x39 = INT16_MIN;
	int16_t x40 = -1;

	t9 = (x37|(x38|(x39|x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 1U;
	uint8_t x43 = 5U;
	int32_t x44 = INT32_MIN;

	t10 = (x41|(x42|(x43|x44)));

	if (t10 != -2147483643) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	volatile uint8_t x46 = 12U;
	static uint32_t x47 = 60362901U;
	uint32_t x48 = 244974U;
	static uint32_t t11 = 6616585U;

	t11 = (x45|(x46|(x47|x48)));

	if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MIN;
	static int32_t x52 = INT32_MIN;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x49|(x50|(x51|x52)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -2951182;
	volatile uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = (x53|(x54|(x55|x56)));

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -48;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = 702U;
	static int8_t x60 = -1;
	volatile int32_t t14 = 74118;

	t14 = (x57|(x58|(x59|x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int32_t x64 = -105;
	volatile int32_t t15 = 12586;

	t15 = (x61|(x62|(x63|x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -804;
	uint16_t x66 = 1U;
	int64_t x67 = INT64_MAX;
	volatile int16_t x68 = -9989;

	t16 = (x65|(x66|(x67|x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = -1LL;
	int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	volatile int64_t t17 = 12496223488LL;

	t17 = (x69|(x70|(x71|x72)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x74 = UINT32_MAX;
	int64_t x75 = -1LL;
	int64_t x76 = -206681993853599989LL;
	int64_t t18 = 420508360LL;

	t18 = (x73|(x74|(x75|x76)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x77 = 4111308LL;
	uint8_t x78 = 56U;
	volatile int8_t x79 = INT8_MIN;
	uint64_t x80 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = (x77|(x78|(x79|x80)));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 112U;
	int8_t x84 = INT8_MIN;
	uint64_t t20 = 401321296897LLU;

	t20 = (x81|(x82|(x83|x84)));

	if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 5707614544221536636LLU;
	int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MAX;
	uint32_t x88 = 2U;

	t21 = (x85|(x86|(x87|x88)));

	if (t21 != 5707614548261863423LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 0;
	int8_t x90 = 7;
	static volatile int8_t x91 = -8;
	volatile int32_t t22 = 1689470;

	t22 = (x89|(x90|(x91|x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MAX;
	int8_t x96 = INT8_MIN;
	int64_t t23 = 988LL;

	t23 = (x93|(x94|(x95|x96)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 158185293;
	int16_t x98 = INT16_MAX;
	int32_t x99 = -13559;
	uint64_t t24 = UINT64_MAX;

	t24 = (x97|(x98|(x99|x100)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	uint8_t x103 = 61U;
	static int32_t x104 = -142275;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x101|(x102|(x103|x104)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 4U;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = -48;

	t26 = (x105|(x106|(x107|x108)));

	if (t26 != -11) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	static uint32_t x110 = 4U;
	int64_t x111 = INT64_MIN;
	int32_t x112 = -1;
	volatile int64_t t27 = -967LL;

	t27 = (x109|(x110|(x111|x112)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int8_t x114 = 3;
	uint64_t x115 = UINT64_MAX;
	static volatile int8_t x116 = -1;

	t28 = (x113|(x114|(x115|x116)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	int16_t x119 = 114;
	int8_t x120 = INT8_MAX;

	t29 = (x117|(x118|(x119|x120)));

	if (t29 != 98943U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -1;
	int16_t x123 = 1;
	uint64_t x124 = 172281172LLU;
	uint64_t t30 = UINT64_MAX;

	t30 = (x121|(x122|(x123|x124)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	int16_t x126 = -1;
	static int8_t x127 = -1;

	t31 = (x125|(x126|(x127|x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 16021375;
	uint64_t x130 = 6142447495306896059LLU;
	static int8_t x131 = -1;
	static volatile uint64_t t32 = UINT64_MAX;

	t32 = (x129|(x130|(x131|x132)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -696;
	int8_t x134 = -1;
	static volatile int32_t x135 = INT32_MIN;
	uint64_t x136 = 18547LLU;

	t33 = (x133|(x134|(x135|x136)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = INT8_MIN;
	static int64_t x139 = INT64_MIN;

	t34 = (x137|(x138|(x139|x140)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	static uint32_t x144 = 2841U;
	uint32_t t35 = 673025U;

	t35 = (x141|(x142|(x143|x144)));

	if (t35 != 4294937471U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	static int64_t x146 = INT64_MAX;
	int8_t x147 = -1;
	int32_t x148 = INT32_MIN;
	static volatile int64_t t36 = 3905559987269912430LL;

	t36 = (x145|(x146|(x147|x148)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MAX;
	volatile int64_t x151 = INT64_MIN;
	int16_t x152 = 0;
	volatile int64_t t37 = 110083LL;

	t37 = (x149|(x150|(x151|x152)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x154 = 181U;
	static int32_t x155 = -6477;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = (x153|(x154|(x155|x156)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 101U;
	int64_t x158 = INT64_MIN;
	int32_t x159 = -299058577;
	uint16_t x160 = UINT16_MAX;
	volatile int64_t t39 = -98979299805917893LL;

	t39 = (x157|(x158|(x159|x160)));

	if (t39 != -299040769LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = -4424;
	int32_t x164 = 5;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = (x161|(x162|(x163|x164)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x167 = 2U;

	t41 = (x165|(x166|(x167|x168)));

	if (t41 != 541165879295LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x170 = -1LL;
	volatile int32_t x171 = INT32_MAX;
	int64_t t42 = -478921821162LL;

	t42 = (x169|(x170|(x171|x172)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MAX;
	static volatile int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;

	t43 = (x173|(x174|(x175|x176)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 0U;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = 115U;

	t44 = (x177|(x178|(x179|x180)));

	if (t44 != -9223372036854772101LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 25U;
	static uint64_t x182 = UINT64_MAX;
	static volatile uint64_t x184 = 406577698083LLU;
	uint64_t t45 = UINT64_MAX;

	t45 = (x181|(x182|(x183|x184)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	volatile int64_t x186 = 101968LL;
	volatile int64_t x188 = 52899LL;
	int64_t t46 = -269LL;

	t46 = (x185|(x186|(x187|x188)));

	if (t46 != -9223372036853997837LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 84LLU;
	uint32_t x190 = 1800360U;
	int16_t x191 = INT16_MIN;
	static uint64_t t47 = 235794677LLU;

	t47 = (x189|(x190|(x191|x192)));

	if (t47 != 4294967295LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -220991515171453316LL;
	int64_t x194 = -1LL;
	uint8_t x196 = 1U;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x193|(x194|(x195|x196)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 2770503336582301561LL;
	static uint64_t x199 = UINT64_MAX;
	volatile uint64_t x200 = UINT64_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x197|(x198|(x199|x200)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -1;
	int16_t x203 = -1;
	int64_t x204 = INT64_MIN;
	volatile int64_t t50 = -3368LL;

	t50 = (x201|(x202|(x203|x204)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 1;
	volatile int16_t x206 = INT16_MIN;
	static volatile int64_t t51 = -1489891883756585LL;

	t51 = (x205|(x206|(x207|x208)));

	if (t51 != -3LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MIN;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (x209|(x210|(x211|x212)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -7305;
	int8_t x214 = INT8_MAX;
	int64_t t53 = 212178584231LL;

	t53 = (x213|(x214|(x215|x216)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	static volatile int64_t x218 = 4183970696388683933LL;
	uint32_t x219 = 1682644U;
	int8_t x220 = 20;
	int64_t t54 = -10234994313LL;

	t54 = (x217|(x218|(x219|x220)));

	if (t54 != -35LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	static int16_t x222 = -24;
	uint16_t x223 = UINT16_MAX;
	uint64_t x224 = 12546575662950LLU;
	uint64_t t55 = UINT64_MAX;

	t55 = (x221|(x222|(x223|x224)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 118989882429LLU;
	static volatile int8_t x226 = INT8_MIN;
	int64_t x227 = INT64_MAX;
	uint32_t x228 = 10U;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (x225|(x226|(x227|x228)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = UINT16_MAX;
	volatile int64_t x231 = -1LL;
	static uint64_t x232 = 445669277569990LLU;
	uint64_t t57 = UINT64_MAX;

	t57 = (x229|(x230|(x231|x232)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static int32_t x234 = INT32_MIN;
	static int32_t x235 = INT32_MAX;
	uint64_t x236 = 319478861807899LLU;
	uint64_t t58 = UINT64_MAX;

	t58 = (x233|(x234|(x235|x236)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MIN;
	uint32_t x239 = 359320740U;
	int64_t x240 = INT64_MIN;

	t59 = (x237|(x238|(x239|x240)));

	if (t59 != -1788162908LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile int16_t x242 = 3746;
	static int32_t x243 = INT32_MIN;
	uint64_t x244 = 10577174LLU;
	static uint64_t t60 = 1LLU;

	t60 = (x241|(x242|(x243|x244)));

	if (t60 != 18446744073709547446LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	volatile int16_t x246 = -4;
	int8_t x247 = INT8_MAX;
	int64_t t61 = -128538022429501203LL;

	t61 = (x245|(x246|(x247|x248)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x250 = 1;
	volatile int64_t x251 = INT64_MIN;

	t62 = (x249|(x250|(x251|x252)));

	if (t62 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 2U;
	int8_t x254 = INT8_MIN;
	static int16_t x256 = 1;
	volatile int64_t t63 = 948420LL;

	t63 = (x253|(x254|(x255|x256)));

	if (t63 != -125LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x259 = 1U;

	t64 = (x257|(x258|(x259|x260)));

	if (t64 != -57LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -404;
	int16_t x262 = INT16_MIN;
	int64_t x263 = -6628LL;
	uint16_t x264 = UINT16_MAX;
	volatile int64_t t65 = -119505892824874568LL;

	t65 = (x261|(x262|(x263|x264)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	volatile uint16_t x266 = 5176U;
	int32_t x267 = INT32_MIN;
	static int32_t t66 = 1;

	t66 = (x265|(x266|(x267|x268)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	volatile int16_t x270 = INT16_MIN;

	t67 = (x269|(x270|(x271|x272)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -8;
	int64_t x274 = -1LL;
	volatile uint16_t x275 = 3024U;
	uint8_t x276 = UINT8_MAX;

	t68 = (x273|(x274|(x275|x276)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -7;
	int64_t x278 = -148066035930665988LL;
	static int16_t x279 = -1;

	t69 = (x277|(x278|(x279|x280)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x283 = UINT16_MAX;
	volatile int32_t t70 = -20560996;

	t70 = (x281|(x282|(x283|x284)));

	if (t70 != -2147418113) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	static int16_t x286 = -1;
	volatile int16_t x287 = INT16_MAX;
	static int8_t x288 = 1;

	t71 = (x285|(x286|(x287|x288)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -56397276752208LL;
	uint64_t x290 = UINT64_MAX;
	static int64_t x291 = INT64_MIN;
	volatile uint8_t x292 = UINT8_MAX;

	t72 = (x289|(x290|(x291|x292)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static int32_t x294 = -1;
	volatile int32_t x295 = INT32_MIN;
	static uint32_t x296 = UINT32_MAX;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = (x293|(x294|(x295|x296)));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	static int32_t t74 = -440;

	t74 = (x297|(x298|(x299|x300)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = 10727;
	static uint8_t x302 = 7U;
	uint16_t x303 = 7U;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -9;

	t75 = (x301|(x302|(x303|x304)));

	if (t75 != -2147472921) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int64_t x307 = -19679423LL;
	int8_t x308 = 1;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x305|(x306|(x307|x308)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 0;
	static uint8_t x310 = 23U;
	volatile int8_t x311 = INT8_MAX;
	int16_t x312 = 8786;
	static volatile int32_t t77 = 1425634;

	t77 = (x309|(x310|(x311|x312)));

	if (t77 != 8831) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	uint64_t x314 = UINT64_MAX;
	int32_t x315 = -1746548;
	int64_t x316 = INT64_MIN;

	t78 = (x313|(x314|(x315|x316)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 15U;
	int32_t x319 = 82;
	volatile int64_t x320 = -1LL;
	int64_t t79 = 1083273825001LL;

	t79 = (x317|(x318|(x319|x320)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 1658U;
	static volatile uint32_t x322 = 4180500U;
	static int32_t x323 = -4493079;
	uint8_t x324 = 14U;
	uint32_t t80 = 83U;

	t80 = (x321|(x322|(x323|x324)));

	if (t80 != 4290772735U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 1892U;
	volatile uint16_t x326 = UINT16_MAX;
	uint16_t x327 = 11866U;
	volatile uint64_t x328 = 31LLU;

	t81 = (x325|(x326|(x327|x328)));

	if (t81 != 65535LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MIN;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (x329|(x330|(x331|x332)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = 429389199488910LLU;
	int32_t x335 = INT32_MIN;
	static uint64_t t83 = 77931353213524LLU;

	t83 = (x333|(x334|(x335|x336)));

	if (t83 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 7;
	int8_t x338 = -16;
	uint32_t x339 = 3877021U;
	uint8_t x340 = 0U;
	uint32_t t84 = UINT32_MAX;

	t84 = (x337|(x338|(x339|x340)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MAX;
	volatile int16_t x343 = 177;
	volatile int16_t x344 = -1;
	int32_t t85 = 28344;

	t85 = (x341|(x342|(x343|x344)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	static uint32_t x347 = 112476225U;
	uint64_t x348 = UINT64_MAX;
	uint64_t t86 = UINT64_MAX;

	t86 = (x345|(x346|(x347|x348)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 14761;

	t87 = (x349|(x350|(x351|x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	static int64_t x354 = 318019571552656320LL;
	int32_t x355 = -1;

	t88 = (x353|(x354|(x355|x356)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -4;
	volatile uint32_t x358 = UINT32_MAX;
	int32_t x359 = -1;
	uint8_t x360 = UINT8_MAX;

	t89 = (x357|(x358|(x359|x360)));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	uint64_t x362 = 28LLU;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MIN;

	t90 = (x361|(x362|(x363|x364)));

	if (t90 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MIN;
	static int32_t t91 = -229587;

	t91 = (x365|(x366|(x367|x368)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -17905008353807690LL;
	volatile int16_t x370 = INT16_MAX;
	int8_t x371 = INT8_MAX;
	uint32_t x372 = 67744023U;
	static int64_t t92 = -28669441312483LL;

	t92 = (x369|(x370|(x371|x372)));

	if (t92 != -17905008286629889LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int8_t x376 = -1;
	int32_t t93 = -1;

	t93 = (x373|(x374|(x375|x376)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	volatile int8_t x378 = INT8_MIN;
	uint16_t x379 = 13981U;
	static int32_t x380 = INT32_MAX;

	t94 = (x377|(x378|(x379|x380)));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 1;
	uint8_t x382 = 6U;
	volatile int32_t x383 = -1;
	int64_t x384 = 9250467754901778LL;
	static int64_t t95 = -2528266LL;

	t95 = (x381|(x382|(x383|x384)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = -1LL;
	static int64_t x387 = INT64_MIN;
	int64_t t96 = -1151918841698546939LL;

	t96 = (x385|(x386|(x387|x388)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = -1;
	int32_t x392 = 16505;

	t97 = (x389|(x390|(x391|x392)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	uint64_t x394 = UINT64_MAX;
	static uint32_t x395 = UINT32_MAX;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x393|(x394|(x395|x396)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x397 = UINT16_MAX;
	uint32_t x398 = 313863484U;
	uint8_t x399 = 110U;
	static int16_t x400 = 4610;
	volatile uint32_t t99 = 0U;

	t99 = (x397|(x398|(x399|x400)));

	if (t99 != 313917439U) { NG(); } else { ; }
	
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

