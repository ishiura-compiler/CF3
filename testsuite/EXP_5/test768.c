#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
volatile int8_t x5 = INT8_MIN;
static uint16_t x11 = UINT16_MAX;
int32_t t3 = -421;
int64_t x17 = -1LL;
static volatile uint64_t x21 = 107996473726042LLU;
uint64_t t5 = 296878171095023745LLU;
int8_t x27 = -1;
int16_t x36 = INT16_MIN;
int16_t x39 = INT16_MIN;
int16_t x44 = INT16_MIN;
static uint64_t x48 = UINT64_MAX;
int32_t t11 = -79;
int16_t x53 = INT16_MAX;
int64_t x56 = -1LL;
uint32_t x59 = 1837U;
int16_t x62 = -1;
uint64_t t15 = 5934094505559970LLU;
int8_t x65 = INT8_MAX;
static int8_t x69 = INT8_MAX;
int8_t x75 = INT8_MIN;
static int64_t x77 = -1LL;
volatile int32_t x81 = -1961;
static uint8_t x83 = UINT8_MAX;
int8_t x88 = 0;
int32_t x91 = -1;
static volatile uint64_t t23 = 2LLU;
static int64_t x103 = -1LL;
int64_t x104 = INT64_MIN;
int32_t t25 = -29;
uint8_t x116 = 31U;
uint8_t x118 = 1U;
int32_t t29 = INT32_MIN;
static volatile uint64_t x126 = 1112892960600875970LLU;
volatile int32_t t32 = 68775;
uint64_t x135 = UINT64_MAX;
int8_t x141 = 0;
static int64_t x146 = INT64_MIN;
static int32_t x152 = -1;
int32_t t37 = -18;
volatile uint64_t x161 = 231LLU;
static uint16_t x162 = 122U;
volatile uint64_t t40 = 12812116LLU;
int8_t x180 = INT8_MIN;
volatile int32_t x184 = INT32_MAX;
volatile int32_t t47 = 56606544;
uint8_t x193 = 3U;
int32_t x195 = -1;
int8_t x198 = -1;
int32_t t49 = 16616076;
int16_t x205 = INT16_MIN;
int8_t x217 = -1;
static int64_t x219 = INT64_MAX;
int32_t x221 = 3;
volatile uint8_t x226 = 9U;
static int32_t t56 = -142293;
int8_t x232 = INT8_MAX;
static int64_t x233 = -906405891963949839LL;
static volatile int16_t x236 = INT16_MAX;
int16_t x237 = -1;
int16_t x241 = INT16_MIN;
int16_t x242 = INT16_MIN;
static int8_t x246 = INT8_MAX;
uint32_t x253 = 7U;
int32_t x254 = -361632990;
int32_t x256 = -1;
static uint32_t t63 = 75129587U;
int64_t x257 = -1LL;
volatile uint64_t x260 = UINT64_MAX;
uint32_t x263 = UINT32_MAX;
int16_t x277 = INT16_MIN;
uint8_t x281 = UINT8_MAX;
int8_t x283 = -12;
int16_t x287 = INT16_MIN;
int8_t x296 = -1;
int32_t t73 = INT32_MAX;
int8_t x297 = INT8_MIN;
volatile int32_t t74 = -1786;
static volatile int8_t x308 = -3;
volatile int32_t t76 = 293;
uint8_t x312 = 34U;
int16_t x315 = INT16_MAX;
uint8_t x320 = 0U;
int64_t x322 = INT64_MIN;
static uint8_t x325 = 0U;
volatile uint32_t x328 = UINT32_MAX;
uint32_t x332 = 450U;
uint16_t x340 = 0U;
uint16_t x341 = 0U;
uint32_t x345 = 57U;
int32_t t87 = 506;
int64_t x357 = INT64_MAX;
static int16_t x362 = -1;
int16_t x366 = INT16_MAX;
uint32_t x377 = 321567U;
int8_t x387 = -1;
uint8_t x391 = 1U;
int32_t x395 = -1;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = 3U;
	uint16_t x4 = 21U;
	volatile int32_t t0 = -97;

	t0 = (x1+((x2%x3)==x4));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = 13;
	uint8_t x7 = UINT8_MAX;
	int64_t x8 = -25477504725834LL;
	int32_t t1 = -253124;

	t1 = (x5+((x6%x7)==x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	int16_t x10 = INT16_MAX;
	uint16_t x12 = 134U;
	static volatile int32_t t2 = -50559;

	t2 = (x9+((x10%x11)==x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 2;
	static uint8_t x14 = 55U;
	uint8_t x15 = UINT8_MAX;
	uint64_t x16 = 12659379399LLU;

	t3 = (x13+((x14%x15)==x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = UINT32_MAX;
	static int16_t x19 = INT16_MIN;
	volatile uint16_t x20 = 299U;
	volatile int64_t t4 = -115797900798892LL;

	t4 = (x17+((x18%x19)==x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	volatile int32_t x24 = INT32_MIN;

	t5 = (x21+((x22%x23)==x24));

	if (t5 != 107996473726042LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 1175U;
	static int32_t x26 = -1;
	static int32_t x28 = INT32_MAX;
	volatile int32_t t6 = 64;

	t6 = (x25+((x26%x27)==x28));

	if (t6 != 1175) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = 1U;
	volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = INT32_MIN;

	t7 = (x29+((x30%x31)==x32));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 1U;
	volatile uint64_t x34 = 1049791178692586LLU;
	int64_t x35 = INT64_MIN;
	static int32_t t8 = -8440;

	t8 = (x33+((x34%x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int32_t x38 = INT32_MAX;
	volatile int16_t x40 = -17;
	int32_t t9 = 0;

	t9 = (x37+((x38%x39)==x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint8_t x42 = 6U;
	int32_t x43 = -1;
	volatile int32_t t10 = -123088434;

	t10 = (x41+((x42%x43)==x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MIN;

	t11 = (x45+((x46%x47)==x48));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile uint64_t x50 = 115648522356LLU;
	int32_t x51 = -18801;
	uint64_t x52 = UINT64_MAX;
	int32_t t12 = INT32_MIN;

	t12 = (x49+((x50%x51)==x52));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	volatile int32_t x55 = -19441;
	volatile int32_t t13 = -5268;

	t13 = (x53+((x54%x55)==x56));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -836641118756LL;
	int64_t x58 = -1LL;
	int64_t x60 = -1797954082432LL;
	int64_t t14 = -6158719394059LL;

	t14 = (x57+((x58%x59)==x60));

	if (t14 != -836641118756LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 683782300LLU;
	int32_t x63 = INT32_MIN;
	int8_t x64 = -1;

	t15 = (x61+((x62%x63)==x64));

	if (t15 != 683782301LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x66 = INT16_MAX;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = -1;
	volatile int32_t t16 = 1839812;

	t16 = (x65+((x66%x67)==x68));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 219259262LL;
	static volatile int32_t x71 = INT32_MAX;
	volatile int16_t x72 = -1;
	int32_t t17 = -421915358;

	t17 = (x69+((x70%x71)==x72));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	uint32_t x74 = 44836U;
	uint16_t x76 = 1U;
	volatile int64_t t18 = 564820618411592LL;

	t18 = (x73+((x74%x75)==x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x78 = 2U;
	uint16_t x79 = UINT16_MAX;
	uint64_t x80 = 245621151342LLU;
	int64_t t19 = -169682LL;

	t19 = (x77+((x78%x79)==x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x82 = INT16_MIN;
	uint32_t x84 = 1283U;
	volatile int32_t t20 = -80298;

	t20 = (x81+((x82%x83)==x84));

	if (t20 != -1961) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	static uint32_t x86 = UINT32_MAX;
	int32_t x87 = -1;
	volatile int32_t t21 = 10580;

	t21 = (x85+((x86%x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 1;
	volatile int8_t x90 = INT8_MIN;
	static int16_t x92 = -1;
	static volatile int32_t t22 = 4450;

	t22 = (x89+((x90%x91)==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 102201648LLU;
	static volatile int32_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	static volatile int64_t x96 = -1LL;

	t23 = (x93+((x94%x95)==x96));

	if (t23 != 102201648LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	uint16_t x98 = 1U;
	static uint8_t x99 = 23U;
	int64_t x100 = INT64_MIN;
	static uint32_t t24 = UINT32_MAX;

	t24 = (x97+((x98%x99)==x100));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	static volatile uint64_t x102 = UINT64_MAX;

	t25 = (x101+((x102%x103)==x104));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 146U;
	int16_t x106 = -6107;
	int16_t x107 = INT16_MIN;
	int16_t x108 = -1;
	volatile int32_t t26 = -429;

	t26 = (x105+((x106%x107)==x108));

	if (t26 != 146) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	volatile int16_t x110 = 7984;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = -85879;

	t27 = (x109+((x110%x111)==x112));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	uint16_t x114 = 2521U;
	uint32_t x115 = 30938U;
	int64_t t28 = INT64_MAX;

	t28 = (x113+((x114%x115)==x116));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int32_t x119 = -1;
	int16_t x120 = INT16_MIN;

	t29 = (x117+((x118%x119)==x120));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile int8_t x122 = -1;
	static int64_t x123 = INT64_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t30 = INT32_MIN;

	t30 = (x121+((x122%x123)==x124));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 12LL;
	volatile uint64_t x127 = UINT64_MAX;
	volatile int8_t x128 = -1;
	int64_t t31 = -1LL;

	t31 = (x125+((x126%x127)==x128));

	if (t31 != 12LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 1;
	int64_t x130 = 63310796452102LL;
	uint64_t x131 = 1517199755952LLU;
	int8_t x132 = INT8_MIN;

	t32 = (x129+((x130%x131)==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	static uint8_t x134 = UINT8_MAX;
	uint16_t x136 = 5U;
	static int64_t t33 = INT64_MAX;

	t33 = (x133+((x134%x135)==x136));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	int32_t x138 = -27927553;
	static int32_t x139 = INT32_MIN;
	volatile int64_t x140 = INT64_MAX;
	int32_t t34 = 600;

	t34 = (x137+((x138%x139)==x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x142 = -1LL;
	static volatile uint32_t x143 = 51459U;
	int32_t x144 = INT32_MAX;
	volatile int32_t t35 = 0;

	t35 = (x141+((x142%x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = 1963;
	int32_t x147 = INT32_MIN;
	int16_t x148 = -2;
	volatile int32_t t36 = -130800;

	t36 = (x145+((x146%x147)==x148));

	if (t36 != 1963) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -1;
	int16_t x150 = -978;
	int16_t x151 = 2;

	t37 = (x149+((x150%x151)==x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint16_t x154 = 1U;
	uint16_t x155 = 42U;
	int32_t x156 = INT32_MIN;
	int32_t t38 = INT32_MIN;

	t38 = (x153+((x154%x155)==x156));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	volatile int64_t x158 = INT64_MAX;
	uint8_t x159 = 3U;
	volatile int8_t x160 = -1;
	volatile int32_t t39 = -65;

	t39 = (x157+((x158%x159)==x160));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x163 = 512U;
	int32_t x164 = INT32_MAX;

	t40 = (x161+((x162%x163)==x164));

	if (t40 != 231LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -3964;
	int32_t x166 = -1;
	int16_t x167 = -1;
	int8_t x168 = 33;
	volatile int32_t t41 = -246245;

	t41 = (x165+((x166%x167)==x168));

	if (t41 != -3964) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = 325019U;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x169+((x170%x171)==x172));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 3154783U;
	uint32_t x174 = UINT32_MAX;
	volatile int64_t x175 = INT64_MIN;
	uint8_t x176 = 1U;
	volatile uint32_t t43 = 128282656U;

	t43 = (x173+((x174%x175)==x176));

	if (t43 != 3154783U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = -14;
	int8_t x178 = -29;
	static volatile int16_t x179 = -1;
	static volatile int32_t t44 = -1648918;

	t44 = (x177+((x178%x179)==x180));

	if (t44 != -14) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = -43;
	int64_t x183 = INT64_MIN;
	static int32_t t45 = 99276304;

	t45 = (x181+((x182%x183)==x184));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	volatile int8_t x186 = INT8_MIN;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MAX;
	volatile int32_t t46 = INT32_MAX;

	t46 = (x185+((x186%x187)==x188));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -1;
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = 429U;
	static uint64_t x192 = UINT64_MAX;

	t47 = (x189+((x190%x191)==x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -1;
	int16_t x196 = INT16_MAX;
	int32_t t48 = -5836991;

	t48 = (x193+((x194%x195)==x196));

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -6;
	int8_t x199 = INT8_MIN;
	static uint64_t x200 = 261954736531LLU;

	t49 = (x197+((x198%x199)==x200));

	if (t49 != -6) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	uint8_t x202 = 6U;
	static uint8_t x203 = 15U;
	volatile uint8_t x204 = 0U;
	int32_t t50 = -909154;

	t50 = (x201+((x202%x203)==x204));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -10624;
	static uint32_t x207 = 412362U;
	uint64_t x208 = 1753595LLU;
	static volatile int32_t t51 = -946685;

	t51 = (x205+((x206%x207)==x208));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 0;
	static uint16_t x210 = 18949U;
	int64_t x211 = INT64_MIN;
	uint16_t x212 = 1U;
	volatile int32_t t52 = -823650802;

	t52 = (x209+((x210%x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -925555LL;
	uint16_t x214 = 0U;
	int64_t x215 = INT64_MIN;
	int32_t x216 = -1;
	volatile int64_t t53 = -15146126290LL;

	t53 = (x213+((x214%x215)==x216));

	if (t53 != -925555LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x218 = UINT16_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t54 = 3;

	t54 = (x217+((x218%x219)==x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = 0;
	volatile uint64_t x223 = 31LLU;
	volatile int16_t x224 = -1;
	int32_t t55 = -500;

	t55 = (x221+((x222%x223)==x224));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x225 = 1982U;
	uint16_t x227 = 55U;
	static int16_t x228 = INT16_MAX;

	t56 = (x225+((x226%x227)==x228));

	if (t56 != 1982) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 0LLU;
	uint16_t x230 = 60U;
	uint16_t x231 = 82U;
	uint64_t t57 = 46882652788LLU;

	t57 = (x229+((x230%x231)==x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x234 = 10U;
	uint8_t x235 = 6U;
	static int64_t t58 = -396492767338LL;

	t58 = (x233+((x234%x235)==x236));

	if (t58 != -906405891963949839LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x238 = 1;
	int64_t x239 = INT64_MAX;
	volatile int32_t x240 = -35799645;
	volatile int32_t t59 = 639;

	t59 = (x237+((x238%x239)==x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 248366826;

	t60 = (x241+((x242%x243)==x244));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MIN;
	static volatile int8_t x247 = -1;
	static int64_t x248 = INT64_MAX;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x245+((x246%x247)==x248));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	volatile uint8_t x250 = 3U;
	int64_t x251 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	volatile int64_t t62 = INT64_MIN;

	t62 = (x249+((x250%x251)==x252));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x255 = -73668960209643304LL;

	t63 = (x253+((x254%x255)==x256));

	if (t63 != 7U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 360LLU;
	int8_t x259 = INT8_MAX;
	int64_t t64 = 2354329325309LL;

	t64 = (x257+((x258%x259)==x260));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = -21;
	volatile int8_t x262 = -1;
	volatile int16_t x264 = INT16_MAX;
	int32_t t65 = -327195259;

	t65 = (x261+((x262%x263)==x264));

	if (t65 != -21) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 268U;
	int16_t x266 = 19;
	static uint32_t x267 = UINT32_MAX;
	int32_t x268 = INT32_MIN;
	uint32_t t66 = 25U;

	t66 = (x265+((x266%x267)==x268));

	if (t66 != 268U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	volatile int16_t x270 = INT16_MIN;
	static int16_t x271 = -1;
	static int16_t x272 = INT16_MAX;
	static int32_t t67 = 184216;

	t67 = (x269+((x270%x271)==x272));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -4336028430795880LL;
	int16_t x274 = INT16_MAX;
	uint64_t x275 = UINT64_MAX;
	volatile int16_t x276 = INT16_MIN;
	volatile int64_t t68 = 52531237462131LL;

	t68 = (x273+((x274%x275)==x276));

	if (t68 != -4336028430795880LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x278 = INT32_MIN;
	volatile int64_t x279 = -1LL;
	int32_t x280 = 125833;
	volatile int32_t t69 = 28;

	t69 = (x277+((x278%x279)==x280));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = INT64_MIN;
	int16_t x284 = 10;
	int32_t t70 = 5672831;

	t70 = (x281+((x282%x283)==x284));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 1;
	volatile int32_t x286 = -64894;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t71 = 731714680;

	t71 = (x285+((x286%x287)==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	static int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	uint8_t x292 = 2U;
	volatile int32_t t72 = 2;

	t72 = (x289+((x290%x291)==x292));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MAX;
	static volatile int16_t x294 = -6718;
	volatile int16_t x295 = 1;

	t73 = (x293+((x294%x295)==x296));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = INT16_MIN;
	volatile uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MIN;

	t74 = (x297+((x298%x299)==x300));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	int64_t x304 = INT64_MIN;
	static volatile int64_t t75 = INT64_MIN;

	t75 = (x301+((x302%x303)==x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x306 = -2444767490LL;
	int32_t x307 = -1;

	t76 = (x305+((x306%x307)==x308));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int32_t x310 = 97508;
	static uint64_t x311 = UINT64_MAX;
	int32_t t77 = -359;

	t77 = (x309+((x310%x311)==x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = -44262;
	volatile uint8_t x316 = UINT8_MAX;
	int32_t t78 = 4070;

	t78 = (x313+((x314%x315)==x316));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 872841622051602LL;
	int32_t x318 = INT32_MIN;
	volatile int64_t x319 = -1LL;
	volatile int64_t t79 = -4325271960465LL;

	t79 = (x317+((x318%x319)==x320));

	if (t79 != 872841622051603LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	volatile int16_t x323 = INT16_MIN;
	volatile int16_t x324 = -1;
	volatile int32_t t80 = INT32_MIN;

	t80 = (x321+((x322%x323)==x324));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x326 = INT16_MIN;
	int64_t x327 = 15LL;
	static volatile int32_t t81 = -829434185;

	t81 = (x325+((x326%x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	volatile uint16_t x330 = 7977U;
	int32_t x331 = -66;
	int32_t t82 = 4082679;

	t82 = (x329+((x330%x331)==x332));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	static int32_t x334 = 35940854;
	int64_t x335 = -1LL;
	int8_t x336 = INT8_MIN;
	int64_t t83 = INT64_MIN;

	t83 = (x333+((x334%x335)==x336));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MIN;
	volatile int16_t x338 = -1;
	uint32_t x339 = 1053260040U;
	volatile int32_t t84 = 249508;

	t84 = (x337+((x338%x339)==x340));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	int64_t x344 = -15618LL;
	volatile int32_t t85 = -2677;

	t85 = (x341+((x342%x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x346 = INT8_MIN;
	static int64_t x347 = -71598915080302808LL;
	int16_t x348 = -10204;
	static uint32_t t86 = 3U;

	t86 = (x345+((x346%x347)==x348));

	if (t86 != 57U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 4;
	int32_t x350 = INT32_MIN;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = 5U;

	t87 = (x349+((x350%x351)==x352));

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	volatile int32_t x354 = INT32_MAX;
	uint8_t x355 = 17U;
	int64_t x356 = -1LL;
	volatile int32_t t88 = 0;

	t88 = (x353+((x354%x355)==x356));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x358 = -1LL;
	uint8_t x359 = UINT8_MAX;
	uint16_t x360 = 0U;
	int64_t t89 = INT64_MAX;

	t89 = (x357+((x358%x359)==x360));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = UINT64_MAX;
	volatile int32_t x363 = INT32_MAX;
	uint32_t x364 = UINT32_MAX;
	uint64_t t90 = 0LLU;

	t90 = (x361+((x362%x363)==x364));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = -1;
	int64_t x367 = INT64_MIN;
	static uint8_t x368 = 0U;
	volatile int32_t t91 = 2725;

	t91 = (x365+((x366%x367)==x368));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static uint8_t x370 = 1U;
	int32_t x371 = 255894;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t92 = -497198866;

	t92 = (x369+((x370%x371)==x372));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static volatile int64_t x374 = INT64_MAX;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -2311579362940587496LL;
	static int32_t t93 = 63;

	t93 = (x373+((x374%x375)==x376));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x378 = 0;
	static volatile int8_t x379 = INT8_MIN;
	static uint64_t x380 = 191LLU;
	volatile uint32_t t94 = 3648U;

	t94 = (x377+((x378%x379)==x380));

	if (t94 != 321567U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MIN;
	int64_t x383 = -6870LL;
	int32_t x384 = INT32_MAX;
	volatile int32_t t95 = 4;

	t95 = (x381+((x382%x383)==x384));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = INT64_MAX;
	uint64_t x386 = UINT64_MAX;
	volatile int32_t x388 = INT32_MAX;
	static int64_t t96 = INT64_MAX;

	t96 = (x385+((x386%x387)==x388));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 3012LLU;
	static volatile uint64_t x390 = 277571150280454LLU;
	uint8_t x392 = UINT8_MAX;
	uint64_t t97 = 3LLU;

	t97 = (x389+((x390%x391)==x392));

	if (t97 != 3012LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	volatile int32_t x394 = -418791;
	uint16_t x396 = UINT16_MAX;
	static int64_t t98 = -1105740929491464LL;

	t98 = (x393+((x394%x395)==x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	int64_t x398 = 61472635839387LL;
	uint32_t x399 = 354129U;
	int64_t x400 = -1LL;
	static int32_t t99 = -29;

	t99 = (x397+((x398%x399)==x400));

	if (t99 != -32768) { NG(); } else { ; }
	
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

