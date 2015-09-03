#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -16172642657LL;
int8_t x7 = INT8_MIN;
static int16_t x12 = INT16_MIN;
static uint32_t x15 = 15787U;
int16_t x17 = 0;
uint64_t x22 = 481LLU;
int32_t x24 = -1;
int8_t x26 = 1;
static volatile int16_t x27 = INT16_MIN;
int64_t x39 = INT64_MIN;
int16_t x44 = INT16_MIN;
volatile uint8_t x47 = 24U;
uint64_t x50 = UINT64_MAX;
uint8_t x55 = 12U;
int16_t x56 = -1;
volatile int64_t x59 = 8064445468LL;
volatile int16_t x60 = 3513;
uint8_t x63 = 32U;
volatile int16_t x65 = INT16_MAX;
int32_t x67 = -10960;
int16_t x70 = INT16_MIN;
int32_t t17 = 733014;
int8_t x75 = -3;
static int32_t x76 = -500727246;
int64_t x77 = INT64_MAX;
static volatile int32_t x79 = INT32_MAX;
volatile int32_t x80 = INT32_MAX;
static volatile int64_t t20 = INT64_MAX;
int64_t x93 = INT64_MAX;
int16_t x95 = INT16_MAX;
uint32_t x99 = 115U;
int64_t x101 = INT64_MIN;
volatile uint64_t t26 = 330765937LLU;
int64_t x113 = INT64_MIN;
uint8_t x115 = UINT8_MAX;
static volatile int16_t x119 = 1071;
uint16_t x121 = UINT16_MAX;
int64_t x123 = 182196131840LL;
volatile uint32_t x127 = 64125U;
uint32_t x132 = 0U;
volatile uint32_t t32 = UINT32_MAX;
int8_t x134 = -1;
uint8_t x135 = 0U;
int32_t x136 = -1;
int32_t x141 = INT32_MAX;
uint8_t x146 = 14U;
int32_t t38 = -11837415;
static int64_t x163 = INT64_MAX;
static uint32_t x164 = UINT32_MAX;
int64_t x167 = -1LL;
volatile int32_t t41 = 56;
int8_t x170 = INT8_MIN;
static int8_t x171 = INT8_MIN;
static volatile int32_t x174 = -350;
uint16_t x176 = 7559U;
uint64_t x180 = 13LLU;
int64_t x183 = INT64_MIN;
int64_t x189 = INT64_MIN;
int16_t x192 = -1;
int32_t x193 = INT32_MIN;
static volatile uint8_t x196 = UINT8_MAX;
int8_t x204 = INT8_MAX;
uint64_t x207 = UINT64_MAX;
uint64_t x210 = 3LLU;
int8_t x217 = -14;
int32_t t55 = 0;
static uint8_t x227 = UINT8_MAX;
volatile int8_t x229 = -7;
int64_t x234 = INT64_MAX;
int16_t x245 = INT16_MAX;
uint32_t x248 = 33956756U;
volatile int64_t x249 = INT64_MIN;
uint16_t x252 = 1570U;
int32_t x256 = INT32_MIN;
int32_t t63 = 15696;
int16_t x258 = -1;
int16_t x259 = 2484;
int32_t x264 = INT32_MAX;
static int64_t x266 = INT64_MIN;
int16_t x270 = INT16_MIN;
uint64_t x272 = 61980427430101LLU;
volatile uint64_t t69 = UINT64_MAX;
static volatile int64_t x282 = -1LL;
uint8_t x283 = 16U;
int8_t x287 = -16;
int32_t t71 = 114349941;
int64_t x291 = 3LL;
uint16_t x295 = UINT16_MAX;
volatile int64_t x296 = -1LL;
volatile uint8_t x299 = 10U;
int32_t t76 = -156064607;
int32_t x311 = INT32_MAX;
volatile int32_t t77 = -371516;
int32_t x318 = -1792846;
static volatile int32_t x319 = -1;
volatile uint32_t x323 = UINT32_MAX;
static volatile int32_t t80 = 26;
uint32_t x325 = UINT32_MAX;
uint32_t t81 = UINT32_MAX;
uint32_t x331 = 176274805U;
int16_t x332 = INT16_MIN;
int32_t x337 = -8768;
uint64_t x338 = 476089894899221LLU;
volatile uint64_t t87 = 113168478LLU;
volatile int32_t t89 = 49985;
volatile int32_t x362 = INT32_MIN;
int32_t x364 = INT32_MIN;
volatile uint64_t t90 = 1LLU;
static uint8_t x372 = 0U;
int64_t t92 = INT64_MIN;
int8_t x374 = 5;
int32_t x375 = 9610656;
volatile uint8_t x377 = 1U;
uint8_t x382 = 0U;
int64_t x383 = -272712548758266LL;
int32_t x384 = INT32_MIN;
volatile int32_t t95 = 166267942;
uint8_t x394 = 21U;


void f0(void) {
	int8_t x1 = -1;
	uint64_t x2 = 1424044LLU;
	int64_t x3 = INT64_MIN;
	volatile int32_t x4 = 313542027;
	int32_t t0 = 14;

	t0 = (x1|((x2<x3)==x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -2;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -9238575;

	t1 = (x5|((x6<x7)==x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int64_t x10 = -1LL;
	static uint64_t x11 = 5344307239388436LLU;
	static volatile int32_t t2 = -204;

	t2 = (x9|((x10<x11)==x12));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = 5447833;
	static int16_t x14 = INT16_MAX;
	static uint64_t x16 = 67475900736LLU;
	int32_t t3 = -209021160;

	t3 = (x13|((x14<x15)==x16));

	if (t3 != 5447833) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	volatile int16_t x19 = INT16_MIN;
	int16_t x20 = -740;
	int32_t t4 = -53;

	t4 = (x17|((x18<x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int64_t x23 = 97407530946LL;
	volatile int32_t t5 = -217205054;

	t5 = (x21|((x22<x23)==x24));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 47214;

	t6 = (x25|((x26<x27)==x28));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -66007731786021LL;
	int32_t x30 = INT32_MIN;
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = INT64_MAX;
	volatile int64_t t7 = -97155245LL;

	t7 = (x29|((x30<x31)==x32));

	if (t7 != -66007731786021LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int8_t x34 = 1;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = UINT32_MAX;
	static volatile int32_t t8 = -15767;

	t8 = (x33|((x34<x35)==x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 53;
	static uint16_t x38 = 62U;
	uint8_t x40 = 25U;
	int32_t t9 = -128616;

	t9 = (x37|((x38<x39)==x40));

	if (t9 != 53) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 87U;
	int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	static int32_t t10 = 6;

	t10 = (x41|((x42<x43)==x44));

	if (t10 != 87) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	static uint32_t x46 = 404U;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 9562435;

	t11 = (x45|((x46<x47)==x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -322;
	int64_t x51 = INT64_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -578543;

	t12 = (x49|((x50<x51)==x52));

	if (t12 != -322) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 10752;
	static volatile int32_t x54 = INT32_MIN;
	volatile int32_t t13 = 190120;

	t13 = (x53|((x54<x55)==x56));

	if (t13 != 10752) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 3U;
	volatile int32_t x58 = -1;
	int32_t t14 = -10095;

	t14 = (x57|((x58<x59)==x60));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	int16_t x62 = INT16_MAX;
	volatile int16_t x64 = INT16_MIN;
	static volatile int32_t t15 = INT32_MAX;

	t15 = (x61|((x62<x63)==x64));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x66 = UINT32_MAX;
	uint16_t x68 = 4340U;
	static volatile int32_t t16 = 5334508;

	t16 = (x65|((x66<x67)==x68));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 1;
	int32_t x71 = 61287537;
	volatile int32_t x72 = -7359377;

	t17 = (x69|((x70<x71)==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = 1;
	volatile int64_t t18 = INT64_MIN;

	t18 = (x73|((x74<x75)==x76));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x77|((x78<x79)==x80));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	static int32_t x82 = INT32_MAX;
	static uint16_t x83 = 30U;
	volatile uint8_t x84 = UINT8_MAX;

	t20 = (x81|((x82<x83)==x84));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	uint16_t x86 = 970U;
	volatile uint64_t x87 = 26LLU;
	uint32_t x88 = 111053358U;
	int64_t t21 = INT64_MAX;

	t21 = (x85|((x86<x87)==x88));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 0U;
	uint32_t x90 = 268U;
	int8_t x91 = -1;
	int64_t x92 = INT64_MIN;
	int32_t t22 = 31037145;

	t22 = (x89|((x90<x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	int64_t x96 = -3313LL;
	int64_t t23 = INT64_MAX;

	t23 = (x93|((x94<x95)==x96));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -118352LL;
	int32_t x98 = INT32_MIN;
	int8_t x100 = INT8_MAX;
	static volatile int64_t t24 = -14LL;

	t24 = (x97|((x98<x99)==x100));

	if (t24 != -118352LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x102 = 7501;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = UINT8_MAX;
	int64_t t25 = INT64_MIN;

	t25 = (x101|((x102<x103)==x104));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 551692157583373581LLU;
	int8_t x106 = INT8_MAX;
	int8_t x107 = -8;
	volatile int64_t x108 = 37564860LL;

	t26 = (x105|((x106<x107)==x108));

	if (t26 != 551692157583373581LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int8_t x110 = INT8_MIN;
	static int16_t x111 = INT16_MIN;
	static int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 885503264;

	t27 = (x109|((x110<x111)==x112));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	int16_t x116 = -1;
	static volatile int64_t t28 = INT64_MIN;

	t28 = (x113|((x114<x115)==x116));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = 223477;
	uint16_t x118 = UINT16_MAX;
	static int64_t x120 = -1LL;
	int32_t t29 = 0;

	t29 = (x117|((x118<x119)==x120));

	if (t29 != 223477) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	int64_t x124 = -59558LL;
	int32_t t30 = 372517;

	t30 = (x121|((x122<x123)==x124));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	static volatile int32_t x126 = INT32_MIN;
	volatile uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = -86808801;

	t31 = (x125|((x126<x127)==x128));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = 0U;
	static int16_t x131 = -2621;

	t32 = (x129|((x130<x131)==x132));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 2U;
	volatile int32_t t33 = -82;

	t33 = (x133|((x134<x135)==x136));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 1030912339288LLU;
	int32_t x138 = 776517754;
	uint16_t x139 = 432U;
	int32_t x140 = INT32_MAX;
	static uint64_t t34 = 281055228733LLU;

	t34 = (x137|((x138<x139)==x140));

	if (t34 != 1030912339288LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	volatile uint8_t x144 = 3U;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x141|((x142<x143)==x144));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int16_t x147 = INT16_MIN;
	volatile uint32_t x148 = UINT32_MAX;
	volatile int64_t t36 = -27932LL;

	t36 = (x145|((x146<x147)==x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MIN;
	static volatile int64_t x152 = -1LL;
	static volatile int32_t t37 = -43703252;

	t37 = (x149|((x150<x151)==x152));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -1;
	static uint32_t x154 = UINT32_MAX;
	volatile uint32_t x155 = 50225U;
	static uint16_t x156 = 0U;

	t38 = (x153|((x154<x155)==x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int32_t x158 = -913896;
	int16_t x159 = INT16_MIN;
	volatile int32_t x160 = -1;
	uint32_t t39 = UINT32_MAX;

	t39 = (x157|((x158<x159)==x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	static uint16_t x162 = 964U;
	int64_t t40 = INT64_MIN;

	t40 = (x161|((x162<x163)==x164));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 9U;
	static uint32_t x166 = 4U;
	uint64_t x168 = 3LLU;

	t41 = (x165|((x166<x167)==x168));

	if (t41 != 9) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	static int64_t x172 = INT64_MIN;
	static int32_t t42 = 10332374;

	t42 = (x169|((x170<x171)==x172));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 51888372735664479LLU;
	volatile int32_t x175 = INT32_MIN;
	uint64_t t43 = 90396562013945577LLU;

	t43 = (x173|((x174<x175)==x176));

	if (t43 != 51888372735664479LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	volatile int64_t x178 = INT64_MAX;
	int8_t x179 = INT8_MIN;
	int32_t t44 = 106368;

	t44 = (x177|((x178<x179)==x180));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	int8_t x184 = -11;
	volatile int32_t t45 = 63056764;

	t45 = (x181|((x182<x183)==x184));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -5;
	static uint16_t x186 = UINT16_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile int8_t x188 = -1;
	static int32_t t46 = 75253;

	t46 = (x185|((x186<x187)==x188));

	if (t46 != -5) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x190 = -85047863001LL;
	int32_t x191 = INT32_MIN;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x189|((x190<x191)==x192));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x194 = 875U;
	static volatile int16_t x195 = 0;
	volatile int32_t t48 = INT32_MIN;

	t48 = (x193|((x194<x195)==x196));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 1U;
	uint16_t x198 = 7403U;
	int16_t x199 = INT16_MIN;
	volatile int8_t x200 = 5;
	uint32_t t49 = 237564U;

	t49 = (x197|((x198<x199)==x200));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	uint32_t x202 = 68202117U;
	uint8_t x203 = 54U;
	uint64_t t50 = UINT64_MAX;

	t50 = (x201|((x202<x203)==x204));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = -1;
	int8_t x206 = INT8_MAX;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 653838;

	t51 = (x205|((x206<x207)==x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = -106392670;

	t52 = (x209|((x210<x211)==x212));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 4136914916LLU;
	uint16_t x214 = 29U;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 0U;
	volatile uint64_t t53 = 2109485786LLU;

	t53 = (x213|((x214<x215)==x216));

	if (t53 != 4136914917LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x218 = INT32_MIN;
	int64_t x219 = 27539593LL;
	volatile int32_t x220 = INT32_MAX;
	static volatile int32_t t54 = 103;

	t54 = (x217|((x218<x219)==x220));

	if (t54 != -14) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 13;
	int16_t x222 = 42;
	static uint64_t x223 = UINT64_MAX;
	int32_t x224 = 23756104;

	t55 = (x221|((x222<x223)==x224));

	if (t55 != 13) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -43140915;
	int8_t x226 = 7;
	int16_t x228 = -1;
	static volatile int32_t t56 = -956251583;

	t56 = (x225|((x226<x227)==x228));

	if (t56 != -43140915) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 721801295693759264LLU;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = 1U;
	volatile int32_t t57 = 7;

	t57 = (x229|((x230<x231)==x232));

	if (t57 != -7) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 5U;
	int64_t x235 = INT64_MAX;
	uint8_t x236 = 28U;
	volatile int32_t t58 = -7658;

	t58 = (x233|((x234<x235)==x236));

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x237 = 1U;
	volatile int64_t x238 = -23936567LL;
	volatile int64_t x239 = -417569316LL;
	int8_t x240 = 0;
	static int32_t t59 = 1;

	t59 = (x237|((x238<x239)==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -2826;
	int16_t x242 = 439;
	uint16_t x243 = 7060U;
	int64_t x244 = -1LL;
	int32_t t60 = 1820;

	t60 = (x241|((x242<x243)==x244));

	if (t60 != -2826) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -1;
	uint16_t x247 = 1956U;
	int32_t t61 = 7;

	t61 = (x245|((x246<x247)==x248));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = INT8_MIN;
	uint32_t x251 = UINT32_MAX;
	static volatile int64_t t62 = INT64_MIN;

	t62 = (x249|((x250<x251)==x252));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 22507U;
	uint32_t x254 = 0U;
	int16_t x255 = 6081;

	t63 = (x253|((x254<x255)==x256));

	if (t63 != 22507) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = 3;
	int32_t x260 = 3437;
	volatile int32_t t64 = -7162;

	t64 = (x257|((x258<x259)==x260));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 0;
	static int8_t x262 = INT8_MIN;
	static volatile uint32_t x263 = 269U;
	volatile int32_t t65 = 1;

	t65 = (x261|((x262<x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	static int32_t x267 = 62444;
	static volatile int64_t x268 = INT64_MIN;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x265|((x266<x267)==x268));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 110U;
	int8_t x271 = INT8_MAX;
	static volatile int32_t t67 = -338;

	t67 = (x269|((x270<x271)==x272));

	if (t67 != 110) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	static uint16_t x274 = UINT16_MAX;
	int64_t x275 = -11LL;
	int16_t x276 = INT16_MAX;
	int32_t t68 = -1;

	t68 = (x273|((x274<x275)==x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x277 = UINT64_MAX;
	int32_t x278 = -1;
	volatile int16_t x279 = INT16_MIN;
	uint32_t x280 = 3689U;

	t69 = (x277|((x278<x279)==x280));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -1;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = 63480162;

	t70 = (x281|((x282<x283)==x284));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 923U;
	static int8_t x286 = -6;
	int8_t x288 = INT8_MIN;

	t71 = (x285|((x286<x287)==x288));

	if (t71 != 923) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	uint64_t x290 = 48580275LLU;
	static volatile int32_t x292 = -844779;
	volatile int32_t t72 = 497;

	t72 = (x289|((x290<x291)==x292));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int8_t x294 = -7;
	int32_t t73 = -12;

	t73 = (x293|((x294<x295)==x296));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int32_t x298 = INT32_MIN;
	int64_t x300 = -499625770275845LL;
	volatile int32_t t74 = -62142172;

	t74 = (x297|((x298<x299)==x300));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 924132928U;
	static volatile int32_t x302 = -9;
	int64_t x303 = INT64_MAX;
	static volatile int16_t x304 = INT16_MAX;
	uint32_t t75 = 10U;

	t75 = (x301|((x302<x303)==x304));

	if (t75 != 924132928U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -3;
	volatile int8_t x306 = INT8_MAX;
	int8_t x307 = INT8_MIN;
	static uint8_t x308 = 64U;

	t76 = (x305|((x306<x307)==x308));

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 768U;
	int32_t x310 = -1;
	int16_t x312 = INT16_MIN;

	t77 = (x309|((x310<x311)==x312));

	if (t77 != 768) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	static int64_t x314 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	static int8_t x316 = -3;
	uint32_t t78 = UINT32_MAX;

	t78 = (x313|((x314<x315)==x316));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x317 = UINT16_MAX;
	int8_t x320 = -1;
	volatile int32_t t79 = -99708602;

	t79 = (x317|((x318<x319)==x320));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	static int8_t x322 = -1;
	static int32_t x324 = -1;

	t80 = (x321|((x322<x323)==x324));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MAX;
	uint8_t x327 = 2U;
	uint64_t x328 = 15557188LLU;

	t81 = (x325|((x326<x327)==x328));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -12358364;
	uint64_t x330 = 75283944909LLU;
	int32_t t82 = -3759420;

	t82 = (x329|((x330<x331)==x332));

	if (t82 != -12358364) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = -92766923LL;
	int32_t x335 = INT32_MIN;
	int8_t x336 = -2;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x333|((x334<x335)==x336));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	int32_t t84 = -159513;

	t84 = (x337|((x338<x339)==x340));

	if (t84 != -8768) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -17;
	int16_t x342 = INT16_MAX;
	uint8_t x343 = UINT8_MAX;
	static int8_t x344 = -1;
	int32_t t85 = -1711015;

	t85 = (x341|((x342<x343)==x344));

	if (t85 != -17) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int64_t x346 = INT64_MIN;
	int64_t x347 = INT64_MIN;
	int16_t x348 = 0;
	int32_t t86 = INT32_MAX;

	t86 = (x345|((x346<x347)==x348));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 9794720LLU;
	uint32_t x350 = 112600835U;
	static int8_t x351 = INT8_MIN;
	int32_t x352 = 964;

	t87 = (x349|((x350<x351)==x352));

	if (t87 != 9794720LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = 14;
	uint32_t x354 = 1015960U;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MAX;
	int32_t t88 = -48452415;

	t88 = (x353|((x354<x355)==x356));

	if (t88 != 14) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 124;
	uint64_t x358 = 1789839771LLU;
	int8_t x359 = 46;
	static uint32_t x360 = UINT32_MAX;

	t89 = (x357|((x358<x359)==x360));

	if (t89 != 124) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x361 = 174656271095LLU;
	volatile int64_t x363 = INT64_MAX;

	t90 = (x361|((x362<x363)==x364));

	if (t90 != 174656271095LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = 14U;
	static uint32_t x368 = UINT32_MAX;
	int64_t t91 = INT64_MIN;

	t91 = (x365|((x366<x367)==x368));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint8_t x370 = 11U;
	static uint16_t x371 = UINT16_MAX;

	t92 = (x369|((x370<x371)==x372));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	uint32_t x376 = 255161085U;
	static int32_t t93 = -11086714;

	t93 = (x373|((x374<x375)==x376));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x378 = 436498U;
	uint64_t x379 = 2060213LLU;
	int64_t x380 = INT64_MAX;
	static volatile int32_t t94 = -1886;

	t94 = (x377|((x378<x379)==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;

	t95 = (x381|((x382<x383)==x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MAX;
	int32_t x387 = INT32_MIN;
	uint8_t x388 = 19U;
	static int64_t t96 = INT64_MIN;

	t96 = (x385|((x386<x387)==x388));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	int16_t x390 = INT16_MIN;
	uint64_t x391 = 58225LLU;
	static int32_t x392 = INT32_MAX;
	int32_t t97 = 23877158;

	t97 = (x389|((x390<x391)==x392));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 58U;
	uint64_t x395 = 76766727165098LLU;
	int64_t x396 = INT64_MIN;
	int32_t t98 = -30624;

	t98 = (x393|((x394<x395)==x396));

	if (t98 != 58) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 857147LLU;
	int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MIN;
	uint64_t t99 = 5898LLU;

	t99 = (x397|((x398<x399)==x400));

	if (t99 != 857147LLU) { NG(); } else { ; }
	
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

