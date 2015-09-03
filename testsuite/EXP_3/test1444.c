#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 21291645808776LLU;
static volatile int32_t t1 = -9659;
uint16_t x13 = 11055U;
static uint16_t x17 = 0U;
int64_t x18 = -1LL;
volatile int32_t t4 = -24942;
int8_t x25 = INT8_MIN;
int64_t x28 = -1LL;
int32_t x31 = 11691;
int16_t x43 = 12208;
volatile int32_t t10 = -268117973;
uint16_t x46 = 461U;
volatile uint32_t x47 = UINT32_MAX;
int32_t t11 = 25627;
int8_t x51 = INT8_MIN;
uint8_t x53 = UINT8_MAX;
int32_t x56 = INT32_MIN;
uint8_t x58 = 3U;
uint16_t x65 = UINT16_MAX;
int64_t x70 = INT64_MIN;
int8_t x74 = -12;
int32_t t20 = -263243;
volatile int16_t x91 = INT16_MIN;
int32_t t22 = 3;
int64_t x93 = -1LL;
volatile int32_t x94 = -1;
int64_t x97 = 645471935223782LL;
volatile int32_t t24 = -1;
int8_t x101 = 1;
static volatile int16_t x106 = INT16_MIN;
int8_t x109 = INT8_MAX;
static int32_t x129 = -1;
volatile int32_t t32 = -3753;
int8_t x133 = 0;
int16_t x134 = INT16_MIN;
int16_t x135 = INT16_MAX;
int8_t x138 = INT8_MIN;
volatile int32_t t35 = -9455;
uint8_t x145 = 5U;
int8_t x146 = INT8_MIN;
uint8_t x147 = 0U;
volatile int32_t t37 = 3465;
static int64_t x164 = -1LL;
volatile int32_t t41 = -6078752;
volatile int32_t t43 = -14428293;
int16_t x179 = -18;
uint8_t x181 = UINT8_MAX;
int32_t x190 = INT32_MIN;
static int64_t x191 = INT64_MAX;
int64_t x193 = INT64_MIN;
int32_t x197 = -1;
volatile uint16_t x198 = UINT16_MAX;
volatile int64_t x200 = INT64_MIN;
volatile int32_t t50 = -186;
volatile uint64_t x209 = 977629780920796LLU;
volatile int16_t x211 = 221;
uint8_t x212 = UINT8_MAX;
int64_t x218 = INT64_MIN;
int64_t x220 = INT64_MIN;
volatile int16_t x221 = INT16_MIN;
static int32_t x222 = INT32_MIN;
static volatile int32_t t57 = 1772857;
uint64_t x233 = UINT64_MAX;
volatile int8_t x234 = INT8_MIN;
int64_t x238 = INT64_MAX;
static uint32_t x241 = UINT32_MAX;
uint16_t x245 = 12U;
int32_t t61 = 161908;
int64_t x256 = INT64_MAX;
uint16_t x259 = 6U;
volatile int64_t x270 = -1LL;
static uint64_t x274 = UINT64_MAX;
static int32_t t68 = 195;
int16_t x284 = -1;
int16_t x286 = -12;
volatile uint16_t x288 = 4U;
int8_t x290 = -5;
volatile int8_t x291 = 11;
int16_t x293 = INT16_MIN;
static volatile uint16_t x294 = UINT16_MAX;
volatile int32_t t74 = -1;
int64_t x305 = INT64_MIN;
int64_t x307 = 483LL;
static uint64_t x311 = 3660LLU;
volatile int16_t x316 = -1;
uint8_t x321 = 1U;
uint8_t x322 = 101U;
uint32_t x323 = 25U;
int64_t x325 = INT64_MAX;
int32_t t81 = -196750569;
static uint32_t x332 = UINT32_MAX;
static int8_t x333 = INT8_MIN;
static volatile int64_t x335 = INT64_MIN;
static int32_t t83 = -2;
int32_t x346 = INT32_MIN;
static uint16_t x361 = 25U;
int8_t x366 = INT8_MIN;
int32_t t91 = 1;
volatile int32_t t93 = -41752870;
int64_t x382 = INT64_MIN;
int32_t t96 = -8119710;
int16_t x393 = INT16_MIN;
uint32_t x395 = 11977U;
int32_t t98 = -1888703;


void f0(void) {
	volatile uint64_t x1 = 1116994306LLU;
	int32_t x2 = -1;
	int16_t x3 = 0;
	volatile int16_t x4 = -1;
	int32_t t0 = -178387736;

	t0 = ((x1==x2)+(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x7 = -1;
	int64_t x8 = -1LL;

	t1 = ((x5==x6)+(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int64_t x10 = -4441754578LL;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 2509;

	t2 = ((x9==x10)+(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x14 = -1LL;
	uint32_t x15 = 34774U;
	int8_t x16 = 1;
	int32_t t3 = -29247428;

	t3 = ((x13==x14)+(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = INT64_MAX;
	int16_t x20 = INT16_MIN;

	t4 = ((x17==x18)+(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = -463177030LL;
	int8_t x23 = INT8_MIN;
	uint16_t x24 = 963U;
	int32_t t5 = 4290864;

	t5 = ((x21==x22)+(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x26 = 899020855811540LLU;
	uint16_t x27 = UINT16_MAX;
	int32_t t6 = 723189298;

	t6 = ((x25==x26)+(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -239;
	volatile uint32_t x30 = 501251356U;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -109;

	t7 = ((x29==x30)+(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	static int32_t x34 = INT32_MAX;
	static int8_t x35 = INT8_MIN;
	volatile int64_t x36 = -1LL;
	int32_t t8 = -13821;

	t8 = ((x33==x34)+(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1052319LL;
	uint8_t x38 = 3U;
	uint64_t x39 = 4605916023LLU;
	volatile int64_t x40 = 278750390702623826LL;
	volatile int32_t t9 = -533866;

	t9 = ((x37==x38)+(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 50U;
	int64_t x42 = -1LL;
	int32_t x44 = -1642;

	t10 = ((x41==x42)+(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static volatile int8_t x48 = INT8_MIN;

	t11 = ((x45==x46)+(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	int32_t x50 = 0;
	int64_t x52 = -1LL;
	static volatile int32_t t12 = -1;

	t12 = ((x49==x50)+(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MAX;
	int64_t x55 = INT64_MAX;
	static int32_t t13 = -11;

	t13 = ((x53==x54)+(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int64_t x59 = -794823LL;
	int32_t x60 = INT32_MIN;
	int32_t t14 = -9;

	t14 = ((x57==x58)+(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = UINT8_MAX;
	static int16_t x62 = INT16_MAX;
	volatile int16_t x63 = INT16_MIN;
	int8_t x64 = -1;
	int32_t t15 = 1298586;

	t15 = ((x61==x62)+(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -1;
	volatile int8_t x67 = INT8_MIN;
	uint32_t x68 = 5885824U;
	int32_t t16 = -90703;

	t16 = ((x65==x66)+(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int8_t x71 = 0;
	volatile int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 365609;

	t17 = ((x69==x70)+(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 5477937756992996615LLU;
	int32_t x75 = INT32_MIN;
	volatile int64_t x76 = -1LL;
	volatile int32_t t18 = -130087;

	t18 = ((x73==x74)+(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static volatile int8_t x78 = -1;
	volatile int16_t x79 = 1857;
	volatile int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 923;

	t19 = ((x77==x78)+(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -45614468;
	static int16_t x82 = INT16_MAX;
	static int16_t x83 = 15501;
	int16_t x84 = -16050;

	t20 = ((x81==x82)+(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	static uint8_t x86 = 106U;
	uint32_t x87 = 1875U;
	int8_t x88 = 1;
	static int32_t t21 = 100;

	t21 = ((x85==x86)+(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 4U;
	int8_t x90 = INT8_MIN;
	static int8_t x92 = 10;

	t22 = ((x89==x90)+(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x95 = -1;
	uint64_t x96 = UINT64_MAX;
	int32_t t23 = -20318293;

	t23 = ((x93==x94)+(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = INT64_MIN;
	volatile int64_t x99 = INT64_MIN;
	int64_t x100 = 7265367LL;

	t24 = ((x97==x98)+(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = 58493338;
	static int16_t x103 = -16;
	static int32_t x104 = INT32_MIN;
	int32_t t25 = 103;

	t25 = ((x101==x102)+(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = 5517329;

	t26 = ((x105==x106)+(x107<x108));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = -1;
	volatile uint32_t x111 = 151649677U;
	int8_t x112 = -1;
	volatile int32_t t27 = -1732;

	t27 = ((x109==x110)+(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 1001U;
	volatile uint8_t x114 = 14U;
	volatile int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MIN;
	static int32_t t28 = 6;

	t28 = ((x113==x114)+(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 3626U;
	uint8_t x118 = 4U;
	int8_t x119 = INT8_MAX;
	volatile int32_t x120 = -378;
	volatile int32_t t29 = -14618;

	t29 = ((x117==x118)+(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	int32_t x122 = -1;
	volatile int16_t x123 = -1622;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 163;

	t30 = ((x121==x122)+(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile int16_t x126 = -1;
	volatile uint32_t x127 = 7609726U;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -668262002;

	t31 = ((x125==x126)+(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -1;
	int32_t x131 = 25642;
	uint16_t x132 = 37U;

	t32 = ((x129==x130)+(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x136 = UINT32_MAX;
	int32_t t33 = -7;

	t33 = ((x133==x134)+(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	volatile int64_t x139 = INT64_MIN;
	volatile int16_t x140 = -244;
	volatile int32_t t34 = 16161;

	t34 = ((x137==x138)+(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = 14;
	int8_t x142 = INT8_MAX;
	uint8_t x143 = 0U;
	int32_t x144 = INT32_MIN;

	t35 = ((x141==x142)+(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x148 = INT64_MAX;
	volatile int32_t t36 = 34;

	t36 = ((x145==x146)+(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 31347790U;
	int8_t x150 = 1;
	uint64_t x151 = 709816578037381254LLU;
	uint16_t x152 = UINT16_MAX;

	t37 = ((x149==x150)+(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 111U;
	uint32_t x154 = UINT32_MAX;
	uint16_t x155 = 13U;
	volatile int64_t x156 = 27LL;
	volatile int32_t t38 = 3080;

	t38 = ((x153==x154)+(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = UINT32_MAX;
	uint16_t x160 = 105U;
	static int32_t t39 = -480;

	t39 = ((x157==x158)+(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	volatile uint8_t x162 = 9U;
	int16_t x163 = INT16_MAX;
	volatile int32_t t40 = -519298221;

	t40 = ((x161==x162)+(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 1U;
	int8_t x166 = 1;
	static int32_t x167 = -11004243;
	int64_t x168 = -18263LL;

	t41 = ((x165==x166)+(x167<x168));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 941U;
	static int64_t x170 = -1LL;
	static volatile int16_t x171 = -217;
	volatile int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = 3802;

	t42 = ((x169==x170)+(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	volatile uint8_t x174 = 1U;
	int32_t x175 = INT32_MAX;
	volatile uint16_t x176 = UINT16_MAX;

	t43 = ((x173==x174)+(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 96885817328260LLU;
	static int16_t x178 = -4;
	int64_t x180 = 350333024275637LL;
	static volatile int32_t t44 = 586;

	t44 = ((x177==x178)+(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MAX;
	static uint16_t x183 = 2U;
	uint32_t x184 = UINT32_MAX;
	int32_t t45 = 354295426;

	t45 = ((x181==x182)+(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	uint32_t x186 = 304045697U;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	static int32_t t46 = 7;

	t46 = ((x185==x186)+(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 13908U;
	static int32_t x192 = -116789;
	volatile int32_t t47 = -126911500;

	t47 = ((x189==x190)+(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = 8U;
	uint64_t x195 = 67099995LLU;
	volatile int16_t x196 = 2;
	int32_t t48 = -13;

	t48 = ((x193==x194)+(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x199 = INT16_MIN;
	volatile int32_t t49 = -14;

	t49 = ((x197==x198)+(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 14538630211LLU;
	static uint16_t x202 = UINT16_MAX;
	volatile int64_t x203 = INT64_MIN;
	int64_t x204 = 5076285923LL;

	t50 = ((x201==x202)+(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	int32_t x206 = -1;
	int64_t x207 = 11874LL;
	static uint16_t x208 = 1620U;
	volatile int32_t t51 = -2006303;

	t51 = ((x205==x206)+(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MIN;
	int32_t t52 = 9;

	t52 = ((x209==x210)+(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	volatile uint64_t x214 = 9859899663LLU;
	static uint8_t x215 = 120U;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -147823880;

	t53 = ((x213==x214)+(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int64_t x219 = -1LL;
	volatile int32_t t54 = -24113;

	t54 = ((x217==x218)+(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x223 = INT8_MIN;
	static volatile int16_t x224 = INT16_MIN;
	int32_t t55 = -18;

	t55 = ((x221==x222)+(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 6930U;
	int64_t x226 = 20LL;
	int16_t x227 = -1;
	static volatile uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = 101;

	t56 = ((x225==x226)+(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = 13470U;
	volatile int16_t x230 = -30;
	volatile uint8_t x231 = 59U;
	static int16_t x232 = -1;

	t57 = ((x229==x230)+(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x235 = 184U;
	int8_t x236 = -1;
	static int32_t t58 = 346676036;

	t58 = ((x233==x234)+(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x237 = -516785842;
	volatile uint32_t x239 = 3453857U;
	uint64_t x240 = 7057584202853263LLU;
	volatile int32_t t59 = 1;

	t59 = ((x237==x238)+(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = 0;
	int16_t x243 = INT16_MIN;
	int64_t x244 = -230324815215324787LL;
	int32_t t60 = 16307363;

	t60 = ((x241==x242)+(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x246 = INT64_MIN;
	volatile int64_t x247 = INT64_MIN;
	int8_t x248 = INT8_MAX;

	t61 = ((x245==x246)+(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	static int8_t x250 = -1;
	int8_t x251 = -13;
	int32_t x252 = -1;
	int32_t t62 = 49;

	t62 = ((x249==x250)+(x251<x252));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = 1U;
	int8_t x254 = -1;
	int8_t x255 = -1;
	int32_t t63 = -6959407;

	t63 = ((x253==x254)+(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -2;
	uint8_t x258 = 75U;
	int32_t x260 = 23804;
	volatile int32_t t64 = -4032015;

	t64 = ((x257==x258)+(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x261 = 70U;
	int16_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	int32_t x264 = 3016965;
	int32_t t65 = 5030314;

	t65 = ((x261==x262)+(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = UINT32_MAX;
	int8_t x266 = -1;
	int16_t x267 = -1;
	volatile int64_t x268 = -104639484402779LL;
	volatile int32_t t66 = -441770;

	t66 = ((x265==x266)+(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -1;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -1830623LL;
	int32_t t67 = -2;

	t67 = ((x269==x270)+(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = UINT8_MAX;
	uint16_t x275 = 6U;
	static volatile int64_t x276 = INT64_MIN;

	t68 = ((x273==x274)+(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 1494U;
	int32_t x278 = 1921;
	static int32_t x279 = 5;
	uint8_t x280 = UINT8_MAX;
	static volatile int32_t t69 = -6670549;

	t69 = ((x277==x278)+(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x282 = INT64_MIN;
	volatile int16_t x283 = INT16_MAX;
	static int32_t t70 = -27517;

	t70 = ((x281==x282)+(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 664974098U;
	static volatile uint16_t x287 = UINT16_MAX;
	volatile int32_t t71 = -107923;

	t71 = ((x285==x286)+(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = -1;
	uint16_t x292 = 1296U;
	volatile int32_t t72 = 24797;

	t72 = ((x289==x290)+(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -96536804;

	t73 = ((x293==x294)+(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 54;
	uint8_t x298 = 119U;
	static uint64_t x299 = 5LLU;
	uint64_t x300 = UINT64_MAX;

	t74 = ((x297==x298)+(x299<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 1465232U;
	int32_t x302 = -266818572;
	volatile int8_t x303 = INT8_MAX;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 15950;

	t75 = ((x301==x302)+(x303<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = INT32_MAX;
	static int32_t x308 = INT32_MAX;
	volatile int32_t t76 = 1;

	t76 = ((x305==x306)+(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = 1;
	int8_t x310 = -1;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -62448370;

	t77 = ((x309==x310)+(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = UINT64_MAX;
	uint64_t x314 = 1911736044734LLU;
	int8_t x315 = -1;
	static int32_t t78 = 8689;

	t78 = ((x313==x314)+(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 9U;
	volatile uint16_t x318 = UINT16_MAX;
	volatile int8_t x319 = 29;
	static int32_t x320 = INT32_MIN;
	static int32_t t79 = -500091;

	t79 = ((x317==x318)+(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x324 = -1;
	volatile int32_t t80 = -39327;

	t80 = ((x321==x322)+(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = UINT8_MAX;
	int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MAX;

	t81 = ((x325==x326)+(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	static uint8_t x330 = 30U;
	int32_t x331 = INT32_MIN;
	int32_t t82 = 1;

	t82 = ((x329==x330)+(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MIN;
	volatile int8_t x336 = INT8_MAX;

	t83 = ((x333==x334)+(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = -1;
	int64_t x338 = INT64_MAX;
	static int16_t x339 = INT16_MAX;
	uint16_t x340 = 834U;
	int32_t t84 = 245288343;

	t84 = ((x337==x338)+(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint8_t x342 = 83U;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MAX;
	int32_t t85 = 897;

	t85 = ((x341==x342)+(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = 1U;
	int64_t x347 = INT64_MAX;
	static int8_t x348 = -3;
	volatile int32_t t86 = -315;

	t86 = ((x345==x346)+(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 356505907088LLU;
	int32_t x350 = -49072;
	uint32_t x351 = UINT32_MAX;
	uint16_t x352 = UINT16_MAX;
	int32_t t87 = -8503599;

	t87 = ((x349==x350)+(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -1LL;
	volatile int32_t x354 = INT32_MAX;
	int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MAX;
	volatile int32_t t88 = -27037257;

	t88 = ((x353==x354)+(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 3;
	int32_t x358 = INT32_MIN;
	uint16_t x359 = UINT16_MAX;
	volatile uint16_t x360 = UINT16_MAX;
	int32_t t89 = -399;

	t89 = ((x357==x358)+(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = UINT32_MAX;
	uint64_t x363 = 3LLU;
	static int8_t x364 = -1;
	static int32_t t90 = 1;

	t90 = ((x361==x362)+(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -15;
	int8_t x367 = INT8_MIN;
	int8_t x368 = -1;

	t91 = ((x365==x366)+(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 0U;
	int8_t x370 = -1;
	volatile uint8_t x371 = 1U;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -1;

	t92 = ((x369==x370)+(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 115U;
	int64_t x374 = 3550LL;
	uint32_t x375 = 7740U;
	static volatile uint8_t x376 = 44U;

	t93 = ((x373==x374)+(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 12;
	int8_t x378 = -1;
	static volatile uint64_t x379 = 90972120512406LLU;
	int32_t x380 = INT32_MIN;
	int32_t t94 = -16922;

	t94 = ((x377==x378)+(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 51U;
	static int64_t x383 = 6366757846760LL;
	static volatile int32_t x384 = -60;
	int32_t t95 = -1555713;

	t95 = ((x381==x382)+(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = UINT8_MAX;
	uint16_t x386 = 13U;
	uint8_t x387 = UINT8_MAX;
	uint16_t x388 = 6575U;

	t96 = ((x385==x386)+(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -17;
	uint32_t x390 = 25666718U;
	int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MAX;
	static volatile int32_t t97 = -133959224;

	t97 = ((x389==x390)+(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	int64_t x396 = INT64_MIN;

	t98 = ((x393==x394)+(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x398 = 14919U;
	int32_t x399 = INT32_MAX;
	uint32_t x400 = 178541599U;
	static volatile int32_t t99 = 1;

	t99 = ((x397==x398)+(x399<x400));

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

