#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x11 = -256623293;
static uint16_t x16 = 0U;
volatile int64_t x21 = 10495501682889442LL;
volatile uint32_t t5 = 397455877U;
static uint64_t x25 = UINT64_MAX;
uint64_t t6 = 30708010890599LLU;
volatile int32_t t9 = 12816;
volatile int64_t t10 = 3LL;
uint64_t t14 = 479LLU;
uint64_t x63 = UINT64_MAX;
uint64_t t15 = 320806948531975LLU;
int16_t x65 = INT16_MIN;
int32_t x68 = INT32_MIN;
uint32_t t16 = 452123845U;
int64_t x69 = 8443716333157217LL;
uint8_t x70 = UINT8_MAX;
volatile int8_t x71 = -4;
uint16_t x76 = UINT16_MAX;
static uint32_t x102 = 107050U;
volatile int32_t x103 = -206320;
uint8_t x111 = 121U;
static uint32_t x112 = UINT32_MAX;
uint32_t t27 = 12U;
int64_t x121 = INT64_MIN;
static int32_t x122 = -1;
int16_t x128 = 356;
int64_t x129 = -30878643125444060LL;
int64_t x130 = -1LL;
volatile int16_t x131 = -11915;
uint32_t x136 = 9U;
uint32_t t33 = 5U;
int8_t x138 = INT8_MIN;
static uint16_t x140 = UINT16_MAX;
static uint64_t x141 = 1435536239LLU;
volatile int64_t x143 = INT64_MAX;
int16_t x146 = -1;
uint64_t t37 = 19313518LLU;
int64_t x157 = INT64_MIN;
volatile int32_t x158 = -1;
int64_t x159 = INT64_MIN;
int64_t x160 = 183LL;
int64_t t39 = -333293463594LL;
static int64_t x163 = INT64_MAX;
int64_t x164 = -1LL;
int64_t t40 = -13579516215304LL;
static int32_t x167 = 0;
int32_t x169 = INT32_MIN;
static int32_t x170 = -1;
int32_t x181 = INT32_MIN;
int8_t x183 = INT8_MIN;
int32_t t46 = 12726529;
static int16_t x194 = 3512;
int32_t x201 = INT32_MAX;
static volatile uint8_t x203 = 1U;
uint8_t x207 = UINT8_MAX;
uint32_t x214 = 9128340U;
int32_t x220 = -1;
static int64_t t54 = 11891135LL;
int64_t x234 = -1LL;
volatile int64_t x238 = INT64_MIN;
uint8_t x245 = UINT8_MAX;
static uint16_t x255 = 101U;
int16_t x258 = INT16_MIN;
static int16_t x260 = 99;
static int8_t x261 = INT8_MAX;
uint64_t x263 = UINT64_MAX;
static int8_t x265 = -1;
int8_t x267 = INT8_MIN;
int8_t x274 = 1;
uint32_t x278 = 14U;
uint32_t x280 = 23527734U;
static volatile int64_t t69 = 686632988LL;
uint64_t x284 = 3090988LLU;
uint8_t x288 = 84U;
volatile int64_t x294 = INT64_MAX;
int32_t t73 = -1623;
int32_t x307 = INT32_MIN;
int32_t t76 = -36;
int64_t x309 = INT64_MIN;
int64_t x313 = 10756458664394LL;
volatile int16_t x317 = INT16_MIN;
int16_t x320 = -1;
static int16_t x325 = -1;
int16_t x334 = INT16_MIN;
static volatile uint64_t x337 = 3039265150971401LLU;
int32_t x340 = INT32_MIN;
uint32_t x341 = UINT32_MAX;
int32_t x343 = INT32_MIN;
volatile uint64_t t87 = 3111839440253716735LLU;
volatile int64_t x357 = 430742LL;
volatile int64_t x364 = INT64_MIN;
static int32_t x374 = INT32_MIN;
volatile int8_t x382 = INT8_MIN;
volatile int64_t x385 = -164593285LL;
int16_t x386 = INT16_MIN;
int32_t x387 = INT32_MAX;
int8_t x389 = INT8_MAX;
volatile uint64_t x390 = 35158LLU;
uint64_t x394 = UINT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x2 = 344984;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = -1;
	uint64_t t0 = 1646394184LLU;

	t0 = ((x1<x2)&(x3|x4));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = 22U;
	volatile uint64_t x7 = 13226665481LLU;
	int8_t x8 = -1;
	volatile uint64_t t1 = 6746818419144662LLU;

	t1 = ((x5<x6)&(x7|x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 480190;
	uint64_t x10 = 10LLU;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 7696;

	t2 = ((x9<x10)&(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static int16_t x14 = INT16_MIN;
	uint16_t x15 = 4U;
	int32_t t3 = 120466;

	t3 = ((x13<x14)&(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 7U;
	static uint64_t x18 = 368195012LLU;
	int32_t x19 = -1;
	int8_t x20 = 8;
	static volatile int32_t t4 = -1;

	t4 = ((x17<x18)&(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 47U;
	volatile uint32_t x23 = 1083751U;
	int16_t x24 = -1;

	t5 = ((x21<x22)&(x23|x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = 586776891LL;
	static uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MAX;

	t6 = ((x25<x26)&(x27|x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -855503474;
	int8_t x30 = -9;
	static volatile int16_t x31 = INT16_MIN;
	uint64_t x32 = 493929LLU;
	static volatile uint64_t t7 = 126707113164746842LLU;

	t7 = ((x29<x30)&(x31|x32));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 38;
	int16_t x34 = INT16_MIN;
	int8_t x35 = 9;
	uint16_t x36 = 7108U;
	int32_t t8 = -16665151;

	t8 = ((x33<x34)&(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 1018680752727LLU;
	volatile int16_t x38 = -1;
	uint8_t x39 = 40U;
	int16_t x40 = 46;

	t9 = ((x37<x38)&(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 2LL;
	uint8_t x42 = UINT8_MAX;
	int64_t x43 = -4LL;
	static int64_t x44 = -58644614843LL;

	t10 = ((x41<x42)&(x43|x44));

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	static int32_t x46 = -1;
	static int16_t x47 = 0;
	static int32_t x48 = -580255;
	int32_t t11 = -2976111;

	t11 = ((x45<x46)&(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	int8_t x50 = INT8_MAX;
	volatile int8_t x51 = -1;
	uint32_t x52 = 62042820U;
	volatile uint32_t t12 = 128U;

	t12 = ((x49<x50)&(x51|x52));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 949;
	volatile uint32_t x54 = UINT32_MAX;
	static uint32_t x55 = 44722U;
	int8_t x56 = -1;
	uint32_t t13 = 578546U;

	t13 = ((x53<x54)&(x55|x56));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	uint32_t x58 = UINT32_MAX;
	uint8_t x59 = 1U;
	uint64_t x60 = UINT64_MAX;

	t14 = ((x57<x58)&(x59|x60));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 31U;
	int8_t x62 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;

	t15 = ((x61<x62)&(x63|x64));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	static uint32_t x67 = UINT32_MAX;

	t16 = ((x65<x66)&(x67|x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x72 = 42U;
	volatile int32_t t17 = -139;

	t17 = ((x69<x70)&(x71|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = UINT8_MAX;
	static int8_t x74 = -1;
	int64_t x75 = INT64_MIN;
	volatile int64_t t18 = -1939LL;

	t18 = ((x73<x74)&(x75|x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	uint8_t x78 = 13U;
	int16_t x79 = INT16_MIN;
	int32_t x80 = 23225;
	int32_t t19 = -11;

	t19 = ((x77<x78)&(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = -4;
	volatile uint32_t x84 = 2763U;
	static volatile uint32_t t20 = 16918056U;

	t20 = ((x81<x82)&(x83|x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -1;
	int32_t x86 = INT32_MIN;
	volatile uint32_t x87 = 486U;
	int32_t x88 = 2796199;
	static volatile uint32_t t21 = 1194366522U;

	t21 = ((x85<x86)&(x87|x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int64_t x90 = -1LL;
	uint8_t x91 = UINT8_MAX;
	volatile int16_t x92 = -5;
	volatile int32_t t22 = 339688331;

	t22 = ((x89<x90)&(x91|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = 1644682;
	static volatile uint16_t x95 = 3249U;
	int16_t x96 = 2;
	volatile int32_t t23 = 750306;

	t23 = ((x93<x94)&(x95|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = 16164473U;
	static int8_t x98 = 45;
	static volatile int64_t x99 = 809LL;
	static int16_t x100 = INT16_MIN;
	int64_t t24 = 232990LL;

	t24 = ((x97<x98)&(x99|x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MIN;
	int8_t x104 = -1;
	int32_t t25 = -421594655;

	t25 = ((x101<x102)&(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = 3;
	int16_t x106 = -1;
	uint8_t x107 = 13U;
	static uint8_t x108 = 0U;
	int32_t t26 = 160;

	t26 = ((x105<x106)&(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	int32_t x110 = 4;

	t27 = ((x109<x110)&(x111|x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 63U;
	int8_t x114 = -1;
	int8_t x115 = -10;
	volatile int16_t x116 = 0;
	int32_t t28 = 0;

	t28 = ((x113<x114)&(x115|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 8U;
	volatile uint8_t x118 = UINT8_MAX;
	static volatile uint8_t x119 = UINT8_MAX;
	int8_t x120 = -1;
	volatile int32_t t29 = -211632;

	t29 = ((x117<x118)&(x119|x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x123 = INT64_MIN;
	int16_t x124 = 0;
	volatile int64_t t30 = 51778LL;

	t30 = ((x121<x122)&(x123|x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	uint16_t x126 = UINT16_MAX;
	uint16_t x127 = 3063U;
	static volatile int32_t t31 = -64832;

	t31 = ((x125<x126)&(x127|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x132 = INT64_MAX;
	int64_t t32 = 134286402112LL;

	t32 = ((x129<x130)&(x131|x132));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 52429LLU;
	static volatile uint8_t x134 = 2U;
	uint16_t x135 = 0U;

	t33 = ((x133<x134)&(x135|x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -7;
	static int32_t x139 = INT32_MIN;
	int32_t t34 = -35474;

	t34 = ((x137<x138)&(x139|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = UINT32_MAX;
	uint64_t x144 = 13921738164LLU;
	uint64_t t35 = 13236295LLU;

	t35 = ((x141<x142)&(x143|x144));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static uint16_t x147 = 7U;
	uint16_t x148 = 109U;
	volatile int32_t t36 = 16911;

	t36 = ((x145<x146)&(x147|x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile uint64_t x150 = UINT64_MAX;
	int32_t x151 = -209898958;
	volatile uint64_t x152 = 14050362272LLU;

	t37 = ((x149<x150)&(x151|x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	volatile int64_t x154 = INT64_MIN;
	volatile int64_t x155 = INT64_MIN;
	volatile uint64_t x156 = 2229665LLU;
	uint64_t t38 = 0LLU;

	t38 = ((x153<x154)&(x155|x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {


	t39 = ((x157<x158)&(x159|x160));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -1;
	static int32_t x162 = 9582960;

	t40 = ((x161<x162)&(x163|x164));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = 57450;
	uint16_t x166 = 228U;
	uint8_t x168 = 86U;
	volatile int32_t t41 = -498;

	t41 = ((x165<x166)&(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x171 = 83U;
	int16_t x172 = INT16_MIN;
	int32_t t42 = 27;

	t42 = ((x169<x170)&(x171|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 10630216432092LLU;
	uint32_t x174 = 0U;
	volatile int32_t x175 = -246886;
	uint64_t x176 = 162629795207782032LLU;
	uint64_t t43 = 63LLU;

	t43 = ((x173<x174)&(x175|x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x177 = INT8_MIN;
	int16_t x178 = -1;
	static volatile int8_t x179 = INT8_MAX;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t44 = 1741;

	t44 = ((x177<x178)&(x179|x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x182 = INT64_MIN;
	static uint64_t x184 = UINT64_MAX;
	volatile uint64_t t45 = 10LLU;

	t45 = ((x181<x182)&(x183|x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	int8_t x186 = 7;
	int32_t x187 = INT32_MAX;
	static uint8_t x188 = 1U;

	t46 = ((x185<x186)&(x187|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	static uint16_t x190 = 2U;
	static int32_t x191 = 5031;
	static int64_t x192 = INT64_MAX;
	int64_t t47 = 63770269569LL;

	t47 = ((x189<x190)&(x191|x192));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = -1LL;
	volatile int64_t t48 = 858LL;

	t48 = ((x193<x194)&(x195|x196));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 1U;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = 2274U;
	int64_t x200 = INT64_MIN;
	volatile int64_t t49 = -25406472847677LL;

	t49 = ((x197<x198)&(x199|x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = -3;
	volatile uint8_t x204 = 86U;
	int32_t t50 = 208553;

	t50 = ((x201<x202)&(x203|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MAX;
	static int64_t x208 = 1091081180462LL;
	static volatile int64_t t51 = -15079LL;

	t51 = ((x205<x206)&(x207|x208));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MAX;
	uint64_t x210 = 3464LLU;
	uint32_t x211 = 2017U;
	uint64_t x212 = 29673950441371752LLU;
	static volatile uint64_t t52 = 1919553814LLU;

	t52 = ((x209<x210)&(x211|x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = -1;
	volatile uint8_t x215 = 24U;
	static uint8_t x216 = 6U;
	volatile int32_t t53 = 447894338;

	t53 = ((x213<x214)&(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	int16_t x218 = -1;
	static int64_t x219 = 74399756257565799LL;

	t54 = ((x217<x218)&(x219|x220));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 19934U;
	int64_t x222 = INT64_MAX;
	uint8_t x223 = UINT8_MAX;
	int32_t x224 = -2631;
	int32_t t55 = 58216642;

	t55 = ((x221<x222)&(x223|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	volatile int16_t x226 = 2;
	uint64_t x227 = UINT64_MAX;
	uint16_t x228 = 14U;
	uint64_t t56 = 3185LLU;

	t56 = ((x225<x226)&(x227|x228));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 0;
	volatile uint8_t x230 = UINT8_MAX;
	volatile int64_t x231 = 1LL;
	static uint16_t x232 = 18051U;
	int64_t t57 = -624894863519815LL;

	t57 = ((x229<x230)&(x231|x232));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 932LL;
	volatile int8_t x235 = 1;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t58 = 501510483467668883LLU;

	t58 = ((x233<x234)&(x235|x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -584678;
	volatile int8_t x239 = -2;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t59 = -1LL;

	t59 = ((x237<x238)&(x239|x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -1;
	int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MIN;
	uint32_t x244 = 32U;
	volatile int64_t t60 = 22419LL;

	t60 = ((x241<x242)&(x243|x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = 1U;
	volatile int32_t x247 = INT32_MIN;
	int16_t x248 = -1;
	static int32_t t61 = -1;

	t61 = ((x245<x246)&(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 2LLU;
	static uint8_t x250 = 1U;
	static uint64_t x251 = 1LLU;
	int16_t x252 = INT16_MIN;
	uint64_t t62 = 0LLU;

	t62 = ((x249<x250)&(x251|x252));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = 0;
	uint16_t x254 = UINT16_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -126987;

	t63 = ((x253<x254)&(x255|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1LL;
	int16_t x259 = INT16_MAX;
	volatile int32_t t64 = -4365;

	t64 = ((x257<x258)&(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x262 = 505U;
	int16_t x264 = INT16_MIN;
	volatile uint64_t t65 = 34056380746710440LLU;

	t65 = ((x261<x262)&(x263|x264));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x266 = 0U;
	static uint32_t x268 = 0U;
	uint32_t t66 = 69712U;

	t66 = ((x265<x266)&(x267|x268));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -2739LL;
	int8_t x270 = -35;
	volatile uint32_t x271 = UINT32_MAX;
	int8_t x272 = 20;
	volatile uint32_t t67 = 229553U;

	t67 = ((x269<x270)&(x271|x272));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = -23;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = -4032;
	uint32_t t68 = 41470U;

	t68 = ((x273<x274)&(x275|x276));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	int64_t x279 = INT64_MIN;

	t69 = ((x277<x278)&(x279|x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	uint64_t t70 = 6143204088770661LLU;

	t70 = ((x281<x282)&(x283|x284));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x285 = 196694030685267LLU;
	int32_t x286 = INT32_MIN;
	volatile uint8_t x287 = 9U;
	volatile int32_t t71 = -1855;

	t71 = ((x285<x286)&(x287|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 1;
	uint32_t x290 = 58U;
	int8_t x291 = -53;
	uint32_t x292 = 50U;
	uint32_t t72 = 1063067247U;

	t72 = ((x289<x290)&(x291|x292));

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -1;
	uint16_t x295 = 11U;
	int8_t x296 = 1;

	t73 = ((x293<x294)&(x295|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	static uint32_t x300 = 1642U;
	volatile uint64_t t74 = 422158679LLU;

	t74 = ((x297<x298)&(x299|x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 25U;
	int32_t x302 = -1;
	int32_t x303 = -1;
	uint16_t x304 = UINT16_MAX;
	static volatile int32_t t75 = 168;

	t75 = ((x301<x302)&(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int8_t x306 = 0;
	volatile int8_t x308 = INT8_MIN;

	t76 = ((x305<x306)&(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x310 = 591LL;
	int64_t x311 = 2781634871172755850LL;
	volatile uint8_t x312 = UINT8_MAX;
	static int64_t t77 = -638814LL;

	t77 = ((x309<x310)&(x311|x312));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	volatile uint16_t x315 = UINT16_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t78 = -677579;

	t78 = ((x313<x314)&(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MIN;
	int8_t x319 = -1;
	volatile int32_t t79 = -36;

	t79 = ((x317<x318)&(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = UINT16_MAX;
	uint32_t x322 = UINT32_MAX;
	int16_t x323 = INT16_MIN;
	int64_t x324 = -2027564LL;
	static volatile int64_t t80 = -8122010600LL;

	t80 = ((x321<x322)&(x323|x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = UINT16_MAX;
	int16_t x327 = INT16_MAX;
	static int8_t x328 = -1;
	static int32_t t81 = 19336980;

	t81 = ((x325<x326)&(x327|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 46426712LLU;
	static uint8_t x330 = 23U;
	static uint64_t x331 = 7411064160LLU;
	uint8_t x332 = 1U;
	static uint64_t t82 = 45371844098544279LLU;

	t82 = ((x329<x330)&(x331|x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -6;
	int16_t x335 = 6312;
	volatile uint64_t x336 = 2785697301599767019LLU;
	volatile uint64_t t83 = 8464147144319LLU;

	t83 = ((x333<x334)&(x335|x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = 694;
	static uint32_t x339 = 197818U;
	static volatile uint32_t t84 = 580777397U;

	t84 = ((x337<x338)&(x339|x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = -1;
	static uint8_t x344 = 5U;
	static volatile int32_t t85 = -111;

	t85 = ((x341<x342)&(x343|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -7923;
	volatile int64_t x346 = -1LL;
	int8_t x347 = INT8_MIN;
	static volatile uint8_t x348 = 1U;
	int32_t t86 = -88;

	t86 = ((x345<x346)&(x347|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	static int64_t x350 = -1LL;
	uint64_t x351 = UINT64_MAX;
	uint32_t x352 = 22U;

	t87 = ((x349<x350)&(x351|x352));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	uint8_t x354 = 2U;
	int16_t x355 = -1645;
	int8_t x356 = -43;
	int32_t t88 = 36152919;

	t88 = ((x353<x354)&(x355|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x358 = -33;
	uint16_t x359 = 0U;
	volatile uint32_t x360 = 168936U;
	volatile uint32_t t89 = 248023U;

	t89 = ((x357<x358)&(x359|x360));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int16_t x362 = -1;
	static volatile int64_t x363 = INT64_MIN;
	int64_t t90 = 364055384399804LL;

	t90 = ((x361<x362)&(x363|x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 1;
	int64_t x366 = 1936LL;
	int8_t x367 = -1;
	int16_t x368 = 6565;
	volatile int32_t t91 = 1;

	t91 = ((x365<x366)&(x367|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = UINT16_MAX;
	static uint8_t x370 = UINT8_MAX;
	int16_t x371 = 16033;
	int64_t x372 = INT64_MIN;
	static volatile int64_t t92 = -50773039849LL;

	t92 = ((x369<x370)&(x371|x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	int8_t x375 = -1;
	static int64_t x376 = INT64_MIN;
	int64_t t93 = 2210597263610602952LL;

	t93 = ((x373<x374)&(x375|x376));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x377 = 1LLU;
	uint8_t x378 = UINT8_MAX;
	int32_t x379 = -1;
	static int8_t x380 = INT8_MIN;
	int32_t t94 = 11737;

	t94 = ((x377<x378)&(x379|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 16U;
	static int64_t x383 = -1LL;
	int16_t x384 = -4114;
	volatile int64_t t95 = -135474161627LL;

	t95 = ((x381<x382)&(x383|x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x388 = -1;
	static int32_t t96 = 45;

	t96 = ((x385<x386)&(x387|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 21736U;
	static uint32_t t97 = 622U;

	t97 = ((x389<x390)&(x391|x392));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = INT32_MIN;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MAX;
	int32_t t98 = 2639;

	t98 = ((x393<x394)&(x395|x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 101U;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t99 = 1463146571U;

	t99 = ((x397<x398)&(x399|x400));

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

