#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 29914U;
volatile int32_t t0 = -914688118;
int64_t x6 = INT64_MIN;
int16_t x7 = 0;
volatile int32_t x8 = INT32_MIN;
uint16_t x13 = 60U;
uint32_t x16 = UINT32_MAX;
static volatile uint32_t t4 = 1617827937U;
volatile int16_t x22 = -1;
static volatile int64_t t5 = -1LL;
uint16_t x26 = 9U;
volatile int64_t x27 = 3894LL;
static volatile int64_t t6 = -32232758933915373LL;
int16_t x29 = 2219;
int16_t x31 = -1;
uint8_t x33 = 0U;
int32_t t8 = 453492667;
int32_t t9 = 454464;
static int16_t x41 = INT16_MIN;
int32_t x45 = INT32_MIN;
int32_t x50 = INT32_MIN;
volatile int16_t x58 = INT16_MIN;
volatile int64_t t17 = -412104482241LL;
uint64_t x75 = 29223469321451036LLU;
int16_t x78 = -1;
volatile uint64_t t19 = 322542628886477LLU;
uint32_t t20 = 60719031U;
uint32_t x90 = UINT32_MAX;
int8_t x95 = 1;
static uint32_t t23 = 774U;
int16_t x102 = 901;
int32_t x107 = -1;
static volatile int32_t t26 = -54889;
int8_t x112 = -1;
volatile int64_t t27 = -7555186LL;
int64_t x128 = -1LL;
int64_t t31 = 723409518LL;
int32_t x129 = -25;
uint32_t x131 = 3U;
static int32_t x146 = -658252;
uint64_t x150 = 157856816LLU;
volatile int16_t x161 = -7018;
int64_t x162 = INT64_MAX;
int64_t x163 = -1LL;
volatile int64_t x164 = INT64_MAX;
int64_t t40 = -5595LL;
static int32_t t41 = 467002;
int16_t x174 = INT16_MIN;
int8_t x186 = INT8_MIN;
uint16_t x188 = 0U;
static volatile int16_t x192 = INT16_MIN;
volatile uint32_t x193 = 68308806U;
uint64_t x196 = UINT64_MAX;
uint64_t t46 = 12589455LLU;
int64_t x202 = INT64_MIN;
static int32_t t48 = 13;
int16_t x211 = INT16_MIN;
static uint32_t x212 = 1219731667U;
int32_t x214 = -11;
uint64_t x216 = 1884879636LLU;
static int32_t x220 = INT32_MIN;
int8_t x227 = INT8_MAX;
static int8_t x230 = INT8_MAX;
int16_t x235 = 1831;
uint16_t x238 = UINT16_MAX;
volatile int64_t t58 = -90251945216871LL;
int64_t x248 = INT64_MAX;
uint64_t t60 = 78575LLU;
static int64_t x261 = 477LL;
uint32_t x268 = UINT32_MAX;
uint64_t t65 = UINT64_MAX;
uint16_t x277 = 0U;
int64_t x279 = 24059065LL;
static volatile int64_t x281 = 26933779302LL;
static volatile int64_t x283 = 130697LL;
uint32_t x300 = 6942968U;
volatile int32_t x303 = INT32_MAX;
volatile uint32_t t75 = 115216718U;
int64_t t76 = 97794606222090320LL;
int16_t x324 = INT16_MIN;
static int8_t x326 = -1;
volatile int16_t x340 = -1;
uint16_t x346 = 7U;
int8_t x354 = INT8_MIN;
volatile int16_t x358 = -1;
int8_t x359 = 1;
int32_t t87 = -729746;
int64_t x367 = -1LL;
volatile int64_t t88 = 354091503252537LL;
int8_t x369 = INT8_MIN;
int8_t x370 = -1;
int16_t x385 = INT16_MIN;
static int64_t x386 = INT64_MIN;
static int32_t x390 = INT32_MIN;
static int32_t t94 = 17501219;
int32_t x398 = INT32_MAX;
uint16_t x399 = UINT16_MAX;
static int8_t x400 = INT8_MIN;
volatile uint8_t x402 = 18U;
static int64_t x403 = 4415067081018LL;
int32_t x405 = 1224820;
uint32_t t99 = 1056001037U;


void f0(void) {
	static uint64_t x1 = 19695785315464LLU;
	int16_t x2 = -1;
	uint16_t x3 = UINT16_MAX;

	t0 = ((x1<x2)+(x3|x4));

	if (t0 != 65536) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 25U;
	static volatile int32_t t1 = INT32_MIN;

	t1 = ((x5<x6)+(x7|x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = 0;
	int8_t x11 = -1;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 36755;

	t2 = ((x9<x10)+(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	uint64_t x15 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = ((x13<x14)+(x15|x16));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	static uint32_t x18 = UINT32_MAX;
	volatile uint16_t x19 = 73U;
	uint32_t x20 = UINT32_MAX;

	t4 = ((x17<x18)+(x19|x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 33U;
	volatile int64_t x23 = -3312696639564582774LL;
	uint16_t x24 = 1342U;

	t5 = ((x21<x22)+(x23|x24));

	if (t5 != -3312696639564581442LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	uint32_t x28 = UINT32_MAX;

	t6 = ((x25<x26)+(x27|x28));

	if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = UINT64_MAX;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 1;

	t7 = ((x29<x30)+(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x34 = -1;
	int8_t x35 = INT8_MIN;
	static uint8_t x36 = 0U;

	t8 = ((x33<x34)+(x35|x36));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int8_t x38 = -1;
	uint16_t x39 = UINT16_MAX;
	uint16_t x40 = 9755U;

	t9 = ((x37<x38)+(x39|x40));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x42 = 49U;
	static int8_t x43 = -34;
	uint16_t x44 = 8543U;
	static int32_t t10 = 93149645;

	t10 = ((x41<x42)+(x43|x44));

	if (t10 != -33) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = INT32_MIN;
	static int16_t x47 = INT16_MIN;
	int32_t x48 = -6;
	int32_t t11 = 1;

	t11 = ((x45<x46)+(x47|x48));

	if (t11 != -6) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x51 = -6;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -1228;

	t12 = ((x49<x50)+(x51|x52));

	if (t12 != -6) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile int8_t x54 = INT8_MIN;
	static volatile int64_t x55 = INT64_MAX;
	static volatile int64_t x56 = 15685637089769081LL;
	volatile int64_t t13 = INT64_MAX;

	t13 = ((x53<x54)+(x55|x56));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	volatile uint32_t x59 = 1771U;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 31503908787151LL;

	t14 = ((x57<x58)+(x59|x60));

	if (t14 != -9223372036854774037LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	uint16_t x62 = 64U;
	int32_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	static int32_t t15 = -744895459;

	t15 = ((x61<x62)+(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x66 = -1;
	int8_t x67 = -1;
	int8_t x68 = 43;
	volatile int32_t t16 = -23472;

	t16 = ((x65<x66)+(x67|x68));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MIN;
	static volatile int64_t x71 = INT64_MAX;
	static int64_t x72 = -31038795313LL;

	t17 = ((x69<x70)+(x71|x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	uint32_t x74 = 33426644U;
	volatile uint8_t x76 = 55U;
	volatile uint64_t t18 = 4434061LLU;

	t18 = ((x73<x74)+(x75|x76));

	if (t18 != 29223469321451071LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 10U;
	uint64_t x79 = 5LLU;
	int16_t x80 = -1222;

	t19 = ((x77<x78)+(x79|x80));

	if (t19 != 18446744073709550399LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = -1;
	uint32_t x83 = 21314202U;
	int32_t x84 = 29;

	t20 = ((x81<x82)+(x83|x84));

	if (t20 != 21314208U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MIN;
	int8_t x87 = 1;
	static uint16_t x88 = 32219U;
	volatile int32_t t21 = -14509;

	t21 = ((x85<x86)+(x87|x88));

	if (t21 != 32219) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	volatile uint64_t x91 = 44418213620157LLU;
	int16_t x92 = -3;
	uint64_t t22 = 3888LLU;

	t22 = ((x89<x90)+(x91|x92));

	if (t22 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int16_t x94 = -54;
	volatile uint32_t x96 = UINT32_MAX;

	t23 = ((x93<x94)+(x95|x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	uint16_t x98 = 119U;
	static volatile int32_t x99 = 5;
	int16_t x100 = -1;
	int32_t t24 = -219626145;

	t24 = ((x97<x98)+(x99|x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 4119007542326LL;
	volatile int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 27;

	t25 = ((x101<x102)+(x103|x104));

	if (t25 != -2147450881) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -8;
	volatile int16_t x106 = INT16_MIN;
	int32_t x108 = INT32_MIN;

	t26 = ((x105<x106)+(x107|x108));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -23496882138LL;
	uint32_t x110 = 6U;
	volatile int64_t x111 = INT64_MIN;

	t27 = ((x109<x110)+(x111|x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	int8_t x114 = -1;
	int64_t x115 = -54347906LL;
	static int16_t x116 = 44;
	int64_t t28 = 45045050LL;

	t28 = ((x113<x114)+(x115|x116));

	if (t28 != -54347905LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 390U;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	volatile uint16_t x120 = 3797U;
	int32_t t29 = -50274501;

	t29 = ((x117<x118)+(x119|x120));

	if (t29 != -42) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	volatile int16_t x122 = INT16_MIN;
	static volatile int64_t x123 = -1LL;
	uint16_t x124 = 3110U;
	int64_t t30 = -164558799191117086LL;

	t30 = ((x121<x122)+(x123|x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int16_t x126 = 0;
	volatile int8_t x127 = 0;

	t31 = ((x125<x126)+(x127|x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MAX;
	int8_t x132 = -16;
	uint32_t t32 = 7U;

	t32 = ((x129<x130)+(x131|x132));

	if (t32 != 4294967284U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = 148U;
	volatile uint32_t x138 = 391U;
	int32_t x139 = INT32_MIN;
	uint32_t x140 = 231605U;
	volatile uint32_t t33 = 5676914U;

	t33 = ((x137<x138)+(x139|x140));

	if (t33 != 2147715254U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = UINT16_MAX;
	int16_t x142 = 0;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = -4783;
	int32_t t34 = 640750;

	t34 = ((x141<x142)+(x143|x144));

	if (t34 != -47) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 3947562U;
	int8_t x147 = INT8_MIN;
	int64_t x148 = -1LL;
	volatile int64_t t35 = -8483397489302LL;

	t35 = ((x145<x146)+(x147|x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 9516232346LL;
	uint64_t x151 = UINT64_MAX;
	int16_t x152 = INT16_MIN;
	static volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x149<x150)+(x151|x152));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 126726LLU;
	int16_t x154 = INT16_MIN;
	volatile int64_t x155 = -1LL;
	int8_t x156 = 1;
	volatile int64_t t37 = 3417804273273LL;

	t37 = ((x153<x154)+(x155|x156));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 13967374U;
	static int8_t x158 = 0;
	volatile int32_t x159 = 1;
	static int32_t x160 = INT32_MIN;
	int32_t t38 = 3608;

	t38 = ((x157<x158)+(x159|x160));

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t t39 = 444638739060924193LL;

	t39 = ((x161<x162)+(x163|x164));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = INT32_MIN;
	static volatile int16_t x166 = -1;
	static volatile uint32_t x167 = UINT32_MAX;
	volatile int64_t x168 = -1LL;

	t40 = ((x165<x166)+(x167|x168));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	static int16_t x171 = INT16_MAX;
	static volatile int8_t x172 = INT8_MIN;

	t41 = ((x169<x170)+(x171|x172));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	volatile uint8_t x175 = 3U;
	static int8_t x176 = 1;
	volatile int32_t t42 = 75;

	t42 = ((x173<x174)+(x175|x176));

	if (t42 != 4) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	volatile int32_t x183 = 1;
	volatile int64_t x184 = INT64_MIN;
	volatile int64_t t43 = -131323795317802186LL;

	t43 = ((x181<x182)+(x183|x184));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -730;
	int16_t x187 = INT16_MAX;
	int32_t t44 = -3375;

	t44 = ((x185<x186)+(x187|x188));

	if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x189 = 1U;
	volatile int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MAX;
	int32_t t45 = 1;

	t45 = ((x189<x190)+(x191|x192));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x194 = INT64_MAX;
	uint32_t x195 = 6U;

	t46 = ((x193<x194)+(x195|x196));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = INT8_MAX;
	uint16_t x199 = 2U;
	static int32_t x200 = INT32_MAX;
	static volatile int32_t t47 = INT32_MAX;

	t47 = ((x197<x198)+(x199|x200));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = -4389065275682962392LL;
	int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MIN;

	t48 = ((x201<x202)+(x203|x204));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1106;
	uint32_t x206 = 62987014U;
	int64_t x207 = INT64_MIN;
	uint16_t x208 = 13U;
	int64_t t49 = -374088612LL;

	t49 = ((x205<x206)+(x207|x208));

	if (t49 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x209 = UINT16_MAX;
	static int32_t x210 = -1;
	volatile uint32_t t50 = 74651272U;

	t50 = ((x209<x210)+(x211|x212));

	if (t50 != 4294942931U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = -112373;
	int16_t x215 = INT16_MIN;
	uint64_t t51 = 77233437859754LLU;

	t51 = ((x213<x214)+(x215|x216));

	if (t51 != 18446744073709550357LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	int8_t x218 = INT8_MIN;
	static int32_t x219 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

	t52 = ((x217<x218)+(x219|x220));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x221 = INT16_MIN;
	volatile int16_t x222 = -7;
	static int16_t x223 = 1;
	uint16_t x224 = UINT16_MAX;
	static volatile int32_t t53 = -4;

	t53 = ((x221<x222)+(x223|x224));

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x225 = 0;
	int32_t x226 = INT32_MIN;
	uint8_t x228 = 36U;
	static volatile int32_t t54 = 4;

	t54 = ((x225<x226)+(x227|x228));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = -1LL;
	uint32_t x231 = 23743278U;
	uint16_t x232 = UINT16_MAX;
	uint32_t t55 = 32U;

	t55 = ((x229<x230)+(x231|x232));

	if (t55 != 23789568U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 24923U;
	uint32_t x234 = 937U;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t56 = -97102440;

	t56 = ((x233<x234)+(x235|x236));

	if (t56 != -89) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = -1;
	int64_t x239 = 880839LL;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t57 = 5716158LL;

	t57 = ((x237<x238)+(x239|x240));

	if (t57 != 917504LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x241 = 3635U;
	volatile int32_t x242 = INT32_MAX;
	static int16_t x243 = 1;
	int64_t x244 = 611034821709095269LL;

	t58 = ((x241<x242)+(x243|x244));

	if (t58 != 611034821709095270LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x245 = -1;
	uint32_t x246 = 2763029U;
	int8_t x247 = -1;
	int64_t t59 = 2611415281348LL;

	t59 = ((x245<x246)+(x247|x248));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MAX;
	volatile uint32_t x250 = 28678U;
	static volatile uint64_t x251 = 961762451230771LLU;
	uint8_t x252 = 120U;

	t60 = ((x249<x250)+(x251|x252));

	if (t60 != 961762451230843LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -500094;
	int64_t x254 = -9446551565448305LL;
	static uint64_t x255 = 23871007247445LLU;
	int16_t x256 = -1;
	uint64_t t61 = UINT64_MAX;

	t61 = ((x253<x254)+(x255|x256));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x257 = 542009U;
	uint32_t x258 = UINT32_MAX;
	static volatile int64_t x259 = 4096553792245274248LL;
	int16_t x260 = INT16_MAX;
	int64_t t62 = -70LL;

	t62 = ((x257<x258)+(x259|x260));

	if (t62 != 4096553792245301248LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x262 = INT64_MIN;
	uint32_t x263 = UINT32_MAX;
	uint32_t x264 = 2U;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x261<x262)+(x263|x264));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = UINT64_MAX;
	volatile int64_t x266 = INT64_MIN;
	int32_t x267 = -39074611;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = ((x265<x266)+(x267|x268));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x273 = UINT32_MAX;
	int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	uint64_t x276 = UINT64_MAX;

	t65 = ((x273<x274)+(x275|x276));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x278 = INT16_MAX;
	uint16_t x280 = UINT16_MAX;
	int64_t t66 = 4568076606787097601LL;

	t66 = ((x277<x278)+(x279|x280));

	if (t66 != 24117248LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x282 = INT8_MIN;
	int8_t x284 = INT8_MIN;
	volatile int64_t t67 = -232LL;

	t67 = ((x281<x282)+(x283|x284));

	if (t67 != -119LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MAX;
	volatile int8_t x286 = -35;
	int8_t x287 = INT8_MAX;
	volatile int64_t x288 = -58579505237374LL;
	static int64_t t68 = 480397895383LL;

	t68 = ((x285<x286)+(x287|x288));

	if (t68 != -58579505237249LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	static uint64_t x291 = 804824013LLU;
	static uint8_t x292 = 10U;
	volatile uint64_t t69 = 1338LLU;

	t69 = ((x289<x290)+(x291|x292));

	if (t69 != 804824015LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x293 = 1;
	int16_t x294 = INT16_MIN;
	int16_t x295 = -522;
	uint32_t x296 = UINT32_MAX;
	uint32_t t70 = UINT32_MAX;

	t70 = ((x293<x294)+(x295|x296));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = -1;
	uint16_t x298 = 0U;
	int8_t x299 = -1;
	static uint32_t t71 = 208257U;

	t71 = ((x297<x298)+(x299|x300));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x301 = INT8_MIN;
	static int16_t x302 = INT16_MIN;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = ((x301<x302)+(x303|x304));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 2732LLU;
	int16_t x308 = 187;
	volatile uint64_t t73 = 8814422194504806857LLU;

	t73 = ((x305<x306)+(x307|x308));

	if (t73 != 2752LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x309 = 102048409091545LLU;
	int8_t x310 = INT8_MIN;
	int8_t x311 = -22;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t74 = 76967722U;

	t74 = ((x309<x310)+(x311|x312));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = INT32_MIN;
	static uint32_t x314 = UINT32_MAX;
	uint32_t x315 = 1U;
	int32_t x316 = INT32_MIN;

	t75 = ((x313<x314)+(x315|x316));

	if (t75 != 2147483650U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MAX;
	int32_t x318 = INT32_MAX;
	int64_t x319 = -1LL;
	static int8_t x320 = -1;

	t76 = ((x317<x318)+(x319|x320));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 1593U;
	int8_t x322 = INT8_MAX;
	uint32_t x323 = UINT32_MAX;
	static volatile uint32_t t77 = UINT32_MAX;

	t77 = ((x321<x322)+(x323|x324));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x325 = 4558U;
	uint8_t x327 = 100U;
	volatile int32_t x328 = 89221640;
	int32_t t78 = 6658137;

	t78 = ((x325<x326)+(x327|x328));

	if (t78 != 89221740) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = INT64_MAX;
	volatile int32_t x331 = -4077373;
	int32_t x332 = INT32_MIN;
	int32_t t79 = -3581245;

	t79 = ((x329<x330)+(x331|x332));

	if (t79 != -4077372) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x333 = -1;
	int16_t x334 = INT16_MIN;
	static uint32_t x335 = 474U;
	static uint8_t x336 = 5U;
	volatile uint32_t t80 = 21153U;

	t80 = ((x333<x334)+(x335|x336));

	if (t80 != 479U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = -1;
	int32_t x338 = INT32_MAX;
	uint32_t x339 = 1367U;
	static uint32_t t81 = 66U;

	t81 = ((x337<x338)+(x339|x340));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x341 = INT8_MIN;
	int32_t x342 = INT32_MIN;
	uint16_t x343 = 17U;
	volatile int64_t x344 = INT64_MIN;
	int64_t t82 = 26LL;

	t82 = ((x341<x342)+(x343|x344));

	if (t82 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x345 = UINT32_MAX;
	uint64_t x347 = 71487702LLU;
	static int32_t x348 = 34;
	volatile uint64_t t83 = 5LLU;

	t83 = ((x345<x346)+(x347|x348));

	if (t83 != 71487734LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = 25171746LL;
	uint16_t x350 = 45U;
	int16_t x351 = INT16_MAX;
	volatile int16_t x352 = 770;
	int32_t t84 = 258;

	t84 = ((x349<x350)+(x351|x352));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	int32_t x355 = -1;
	int32_t x356 = INT32_MIN;
	volatile int32_t t85 = -6334857;

	t85 = ((x353<x354)+(x355|x356));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x357 = 1U;
	int8_t x360 = INT8_MAX;
	static volatile int32_t t86 = 110897;

	t86 = ((x357<x358)+(x359|x360));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x361 = 0;
	int8_t x362 = 13;
	int8_t x363 = 5;
	int16_t x364 = 4476;

	t87 = ((x361<x362)+(x363|x364));

	if (t87 != 4478) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MIN;
	uint8_t x368 = 84U;

	t88 = ((x365<x366)+(x367|x368));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x371 = 76U;
	static uint32_t x372 = UINT32_MAX;
	volatile uint32_t t89 = 511U;

	t89 = ((x369<x370)+(x371|x372));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x373 = -1;
	static int64_t x374 = -165311513180LL;
	volatile int64_t x375 = INT64_MAX;
	volatile int8_t x376 = -35;
	int64_t t90 = 3294495LL;

	t90 = ((x373<x374)+(x375|x376));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x378 = 101LLU;
	uint16_t x379 = 871U;
	int8_t x380 = -2;
	volatile int32_t t91 = 29247776;

	t91 = ((x377<x378)+(x379|x380));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = 7320889;
	int8_t x382 = -6;
	int32_t x383 = -1;
	volatile int8_t x384 = INT8_MIN;
	int32_t t92 = -2;

	t92 = ((x381<x382)+(x383|x384));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x387 = 19U;
	static volatile int8_t x388 = INT8_MAX;
	volatile int32_t t93 = -1;

	t93 = ((x385<x386)+(x387|x388));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x389 = UINT64_MAX;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = -1678408;

	t94 = ((x389<x390)+(x391|x392));

	if (t94 != -1678337) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 3925962693423LLU;
	int32_t x396 = -1;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x393<x394)+(x395|x396));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x397 = INT64_MIN;
	int32_t t96 = 1;

	t96 = ((x397<x398)+(x399|x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 101LLU;
	volatile uint32_t x404 = 141899U;
	volatile int64_t t97 = 1029278565414LL;

	t97 = ((x401<x402)+(x403|x404));

	if (t97 != 4415067220859LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x406 = INT16_MIN;
	int64_t x407 = INT64_MAX;
	int64_t x408 = 711789989434927182LL;
	volatile int64_t t98 = INT64_MAX;

	t98 = ((x405<x406)+(x407|x408));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x409 = INT32_MIN;
	int16_t x410 = -1;
	static int16_t x411 = -1;
	uint32_t x412 = UINT32_MAX;

	t99 = ((x409<x410)+(x411|x412));

	if (t99 != 0U) { NG(); } else { ; }
	
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

