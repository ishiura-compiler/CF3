#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
uint64_t t0 = 177661486LLU;
volatile int64_t x8 = INT64_MAX;
volatile int64_t t1 = 856082755LL;
int64_t x11 = -1LL;
volatile int64_t t2 = 663400739740LL;
uint32_t x13 = UINT32_MAX;
int32_t t5 = -8250829;
static int16_t x28 = INT16_MAX;
static uint8_t x35 = 1U;
volatile uint64_t t8 = 14219384LLU;
volatile uint16_t x38 = 1U;
uint8_t x39 = 0U;
volatile int32_t t9 = -14163;
static int32_t t10 = 3856;
uint32_t x46 = 211298U;
uint64_t x47 = 670LLU;
uint16_t x49 = 149U;
static volatile int32_t t12 = 223352;
int16_t x57 = INT16_MAX;
static int64_t x60 = -7300584110226LL;
int32_t x64 = -1;
int8_t x73 = -4;
volatile int32_t t18 = -405;
uint8_t x79 = 0U;
int64_t t20 = 6185055097547990LL;
int8_t x85 = 1;
int32_t x86 = 533544;
uint16_t x96 = UINT16_MAX;
volatile int8_t x115 = -31;
static volatile int8_t x117 = INT8_MIN;
int8_t x120 = INT8_MIN;
static uint16_t x126 = UINT16_MAX;
int8_t x130 = INT8_MIN;
uint64_t t32 = 47630534704805061LLU;
static uint16_t x135 = UINT16_MAX;
static int8_t x140 = 0;
volatile uint32_t x143 = UINT32_MAX;
static uint16_t x144 = UINT16_MAX;
static int32_t x145 = INT32_MIN;
int32_t x151 = INT32_MIN;
int32_t t37 = -159384;
uint16_t x154 = UINT16_MAX;
int64_t x155 = INT64_MAX;
static int8_t x160 = INT8_MAX;
int8_t x164 = 2;
int32_t t40 = 29475;
volatile uint64_t t41 = 50LLU;
int16_t x170 = INT16_MIN;
int32_t t44 = -1119594;
volatile uint64_t x181 = 2LLU;
int8_t x182 = INT8_MIN;
int64_t x184 = 119LL;
volatile uint32_t x185 = 58174249U;
uint32_t x192 = 500U;
volatile int32_t x195 = -1;
volatile int32_t t48 = 460;
static int8_t x201 = INT8_MIN;
int8_t x202 = -20;
static int8_t x208 = -1;
int64_t t51 = -152674642319LL;
volatile int16_t x215 = -526;
int8_t x219 = 27;
int16_t x223 = 1;
uint64_t t57 = 7311456539027938LLU;
int32_t x233 = INT32_MIN;
int32_t x234 = -1;
int32_t x237 = INT32_MIN;
static uint64_t x238 = 13LLU;
int8_t x242 = INT8_MIN;
int32_t x243 = 8611281;
int32_t x253 = INT32_MAX;
int16_t x255 = INT16_MIN;
int64_t x256 = 2155288703572679888LL;
int16_t x259 = -217;
volatile uint16_t x265 = UINT16_MAX;
int8_t x267 = -1;
static int32_t x269 = INT32_MIN;
uint64_t t69 = 7667585074319110136LLU;
static volatile int64_t x284 = -146901659LL;
volatile int64_t t70 = -1659592143507296281LL;
volatile uint8_t x285 = 27U;
volatile int64_t x291 = 752690LL;
uint16_t x299 = 2U;
static int16_t x302 = -1;
int32_t t75 = -13;
int64_t x306 = INT64_MAX;
volatile uint64_t t76 = 1405560LLU;
static int64_t x309 = -407916525332794650LL;
uint64_t x313 = 5209144425303639454LLU;
static volatile uint8_t x321 = 0U;
uint32_t x324 = 55231393U;
int64_t x329 = 35347091329720867LL;
int8_t x332 = -1;
int64_t t85 = INT64_MIN;
static int8_t x352 = -18;
uint8_t x355 = 5U;
int64_t x357 = INT64_MIN;
static volatile uint32_t t91 = 517106131U;
int16_t x369 = -2;
int32_t x370 = INT32_MIN;
volatile int32_t t92 = -130969;
int64_t x374 = INT64_MIN;
volatile int32_t x375 = INT32_MIN;
volatile int64_t t96 = -577103020629070LL;
volatile int32_t t97 = 0;
uint64_t x394 = UINT64_MAX;
int64_t x396 = 30LL;


void f0(void) {
	volatile uint8_t x2 = UINT8_MAX;
	int16_t x3 = -97;
	volatile uint64_t x4 = 38LLU;

	t0 = ((x1|(x2<x3))&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int32_t x6 = INT32_MIN;
	static uint16_t x7 = 92U;

	t1 = ((x5|(x6<x7))&x8);

	if (t1 != 4294967295LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	int8_t x12 = INT8_MAX;

	t2 = ((x9|(x10<x11))&x12);

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = 1;
	static int8_t x15 = -1;
	static uint32_t x16 = 67142548U;
	volatile uint32_t t3 = 1334602042U;

	t3 = ((x13|(x14<x15))&x16);

	if (t3 != 67142548U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint32_t x18 = 0U;
	int8_t x19 = INT8_MIN;
	static volatile uint16_t x20 = 10381U;
	volatile int32_t t4 = -197;

	t4 = ((x17|(x18<x19))&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile int32_t x22 = INT32_MIN;
	uint8_t x23 = 2U;
	uint8_t x24 = 0U;

	t5 = ((x21|(x22<x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	static int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	static volatile int64_t t6 = -1537359816411407LL;

	t6 = ((x25|(x26<x27))&x28);

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -6844216514LL;
	uint8_t x30 = 0U;
	int32_t x31 = INT32_MAX;
	int16_t x32 = INT16_MIN;
	int64_t t7 = 42825901769688LL;

	t7 = ((x29|(x30<x31))&x32);

	if (t7 != -6844219392LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	uint64_t x34 = 108648456296997LLU;
	uint16_t x36 = 25U;

	t8 = ((x33|(x34<x35))&x36);

	if (t8 != 25LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	uint16_t x40 = UINT16_MAX;

	t9 = ((x37|(x38<x39))&x40);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = 518;
	int8_t x43 = 1;
	volatile int16_t x44 = INT16_MIN;

	t10 = ((x41|(x42<x43))&x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	static int64_t x48 = -1LL;
	int64_t t11 = 15730LL;

	t11 = ((x45|(x46<x47))&x48);

	if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MAX;
	int64_t x51 = INT64_MIN;
	static uint8_t x52 = 0U;

	t12 = ((x49|(x50<x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x53 = 5559496545378431910LLU;
	int16_t x54 = 24;
	volatile int8_t x55 = -1;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t13 = 2986LLU;

	t13 = ((x53|(x54<x55))&x56);

	if (t13 != 5559496545155416064LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	int64_t x59 = 1414756621997564080LL;
	int64_t t14 = 160275700LL;

	t14 = ((x57|(x58<x59))&x60);

	if (t14 != 1902LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	int32_t t15 = -3676522;

	t15 = ((x61|(x62<x63))&x64);

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	uint8_t x66 = 15U;
	int32_t x67 = -1;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 239;

	t16 = ((x65|(x66<x67))&x68);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	volatile uint64_t x70 = UINT64_MAX;
	uint8_t x71 = UINT8_MAX;
	volatile int64_t x72 = -1LL;
	static volatile int64_t t17 = 69992354343430770LL;

	t17 = ((x69|(x70<x71))&x72);

	if (t17 != 255LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = UINT8_MAX;
	int32_t x75 = INT32_MAX;
	static int16_t x76 = INT16_MAX;

	t18 = ((x73|(x74<x75))&x76);

	if (t18 != 32765) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MAX;
	int8_t x78 = INT8_MIN;
	static int64_t x80 = INT64_MIN;
	int64_t t19 = 123289163LL;

	t19 = ((x77|(x78<x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 29363U;
	uint16_t x82 = 8519U;
	static int8_t x83 = INT8_MAX;
	volatile int64_t x84 = -1LL;

	t20 = ((x81|(x82<x83))&x84);

	if (t20 != 29363LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x87 = 26633135LLU;
	volatile uint8_t x88 = 61U;
	int32_t t21 = 803;

	t21 = ((x85|(x86<x87))&x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = -1;
	volatile int16_t x91 = 4576;
	uint16_t x92 = 629U;
	int32_t t22 = 5729;

	t22 = ((x89|(x90<x91))&x92);

	if (t22 != 117) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	static volatile uint16_t x94 = 0U;
	volatile uint16_t x95 = UINT16_MAX;
	int32_t t23 = -132357;

	t23 = ((x93|(x94<x95))&x96);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = 1;
	static int16_t x98 = -1;
	int32_t x99 = 270696;
	int32_t x100 = -421349;
	volatile int32_t t24 = 4019;

	t24 = ((x97|(x98<x99))&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 66531143882186615LLU;
	static int64_t x102 = INT64_MIN;
	int32_t x103 = -1;
	int16_t x104 = -1;
	volatile uint64_t t25 = 2520218747386542LLU;

	t25 = ((x101|(x102<x103))&x104);

	if (t25 != 66531143882186615LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 1U;
	int8_t x106 = -1;
	static int32_t x107 = INT32_MIN;
	static uint8_t x108 = 38U;
	int32_t t26 = 2652470;

	t26 = ((x105|(x106<x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -285588301629001LL;
	int16_t x110 = 178;
	volatile int64_t x111 = INT64_MIN;
	int16_t x112 = -1;
	volatile int64_t t27 = 2951120695LL;

	t27 = ((x109|(x110<x111))&x112);

	if (t27 != -285588301629001LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	int8_t x114 = INT8_MIN;
	uint64_t x116 = 309952943667089LLU;
	uint64_t t28 = 1980481LLU;

	t28 = ((x113|(x114<x115))&x116);

	if (t28 != 309952943667089LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = 230U;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t t29 = 2441;

	t29 = ((x117|(x118<x119))&x120);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 0U;
	static int16_t x122 = INT16_MAX;
	uint32_t x123 = 3885175U;
	volatile int16_t x124 = 79;
	volatile uint32_t t30 = 1U;

	t30 = ((x121|(x122<x123))&x124);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	uint16_t x127 = 41U;
	int16_t x128 = -1;
	static volatile int32_t t31 = -40;

	t31 = ((x125|(x126<x127))&x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 3U;
	static int16_t x131 = INT16_MAX;
	static uint64_t x132 = 5192960240376089LLU;

	t32 = ((x129|(x130<x131))&x132);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 11;
	int8_t x134 = 36;
	volatile int64_t x136 = INT64_MIN;
	volatile int64_t t33 = 710107LL;

	t33 = ((x133|(x134<x135))&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -3553750798892717LL;
	static volatile int64_t x138 = INT64_MIN;
	uint32_t x139 = 345799U;
	int64_t t34 = -151455838951LL;

	t34 = ((x137|(x138<x139))&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	volatile int32_t x142 = INT32_MIN;
	int32_t t35 = 1;

	t35 = ((x141|(x142<x143))&x144);

	if (t35 != 32769) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x146 = UINT16_MAX;
	static volatile int8_t x147 = INT8_MIN;
	volatile int64_t x148 = -225893478LL;
	int64_t t36 = 2845696769824LL;

	t36 = ((x145|(x146<x147))&x148);

	if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint16_t x150 = UINT16_MAX;
	uint8_t x152 = 25U;

	t37 = ((x149|(x150<x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MAX;
	volatile uint16_t x156 = 0U;
	volatile int32_t t38 = 16523754;

	t38 = ((x153|(x154<x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MAX;
	volatile int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MAX;
	static int32_t t39 = 5;

	t39 = ((x157|(x158<x159))&x160);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MAX;
	int16_t x163 = INT16_MAX;

	t40 = ((x161|(x162<x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x165 = 4165151042206696322LLU;
	int64_t x166 = INT64_MAX;
	volatile uint16_t x167 = 450U;
	int32_t x168 = INT32_MIN;

	t41 = ((x165|(x166<x167))&x168);

	if (t41 != 4165151041895006208LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x169 = INT8_MIN;
	uint64_t x171 = 21780LLU;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 6;

	t42 = ((x169|(x170<x171))&x172);

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 1U;
	static uint16_t x174 = 7U;
	int64_t x175 = INT64_MIN;
	static uint8_t x176 = 0U;
	int32_t t43 = -605965;

	t43 = ((x173|(x174<x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = UINT64_MAX;
	uint16_t x179 = UINT16_MAX;
	static volatile int32_t x180 = INT32_MAX;

	t44 = ((x177|(x178<x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x183 = -741;
	volatile uint64_t t45 = 26520707775817794LLU;

	t45 = ((x181|(x182<x183))&x184);

	if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x186 = 7U;
	volatile int16_t x187 = INT16_MAX;
	uint8_t x188 = UINT8_MAX;
	uint32_t t46 = 0U;

	t46 = ((x185|(x186<x187))&x188);

	if (t46 != 41U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = -79;
	volatile int16_t x191 = INT16_MIN;
	int64_t t47 = 696632LL;

	t47 = ((x189|(x190<x191))&x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MAX;
	volatile int16_t x194 = INT16_MIN;
	uint16_t x196 = UINT16_MAX;

	t48 = ((x193|(x194<x195))&x196);

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile int8_t x198 = INT8_MAX;
	int32_t x199 = INT32_MIN;
	int64_t x200 = INT64_MAX;
	volatile int64_t t49 = -5764528698535LL;

	t49 = ((x197|(x198<x199))&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 31168;

	t50 = ((x201|(x202<x203))&x204);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	uint32_t x206 = 3462U;
	static int8_t x207 = -20;

	t51 = ((x205|(x206<x207))&x208);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = 3LLU;
	uint16_t x210 = 1U;
	int8_t x211 = INT8_MAX;
	uint32_t x212 = 37U;
	static volatile uint64_t t52 = 1457181LLU;

	t52 = ((x209|(x210<x211))&x212);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint16_t x214 = 10640U;
	uint64_t x216 = UINT64_MAX;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x213|(x214<x215))&x216);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = 0;
	uint32_t x218 = 147U;
	static int16_t x220 = -25;
	int32_t t54 = 139130650;

	t54 = ((x217|(x218<x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 1;
	static int16_t x222 = INT16_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t55 = 17U;

	t55 = ((x221|(x222<x223))&x224);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	int32_t x226 = INT32_MAX;
	int16_t x227 = 293;
	int8_t x228 = 0;
	int32_t t56 = 16657670;

	t56 = ((x225|(x226<x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 3567741896287LLU;
	static int64_t x230 = INT64_MAX;
	int16_t x231 = -1;
	volatile int64_t x232 = -1LL;

	t57 = ((x229|(x230<x231))&x232);

	if (t57 != 3567741896287LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x235 = 74U;
	static int16_t x236 = INT16_MIN;
	static volatile int32_t t58 = INT32_MIN;

	t58 = ((x233|(x234<x235))&x236);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x239 = INT8_MAX;
	volatile uint16_t x240 = 196U;
	int32_t t59 = -144486;

	t59 = ((x237|(x238<x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 1U;
	volatile int8_t x244 = 45;
	int32_t t60 = 2;

	t60 = ((x241|(x242<x243))&x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x245 = 10072U;
	int8_t x246 = INT8_MIN;
	int32_t x247 = -1;
	int32_t x248 = 0;
	int32_t t61 = 2842197;

	t61 = ((x245|(x246<x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 494;
	static int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	volatile int64_t x252 = 897892LL;
	volatile int64_t t62 = -1LL;

	t62 = ((x249|(x250<x251))&x252);

	if (t62 != 356LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	int64_t t63 = 25751098438182LL;

	t63 = ((x253|(x254<x255))&x256);

	if (t63 != 484220112LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 6U;
	int8_t x258 = INT8_MIN;
	int32_t x260 = INT32_MIN;
	static int32_t t64 = 2275147;

	t64 = ((x257|(x258<x259))&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 44U;
	uint8_t x262 = 2U;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MAX;
	int32_t t65 = -792;

	t65 = ((x261|(x262<x263))&x264);

	if (t65 != 45) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = 3U;
	uint8_t x268 = 15U;
	static volatile int32_t t66 = -13;

	t66 = ((x265|(x266<x267))&x268);

	if (t66 != 15) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x270 = -145;
	static int64_t x271 = -1LL;
	uint16_t x272 = 31U;
	volatile int32_t t67 = 1373;

	t67 = ((x269|(x270<x271))&x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = UINT64_MAX;
	static volatile int32_t x274 = -1;
	uint64_t x275 = 26462466853LLU;
	static int8_t x276 = 3;
	static volatile uint64_t t68 = 222262433537LLU;

	t68 = ((x273|(x274<x275))&x276);

	if (t68 != 3LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MAX;
	static volatile int64_t x279 = INT64_MIN;
	static uint64_t x280 = 126828608349LLU;

	t69 = ((x277|(x278<x279))&x280);

	if (t69 != 126701535232LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = -1;
	static uint64_t x283 = UINT64_MAX;

	t70 = ((x281|(x282<x283))&x284);

	if (t70 != 30053LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x286 = UINT32_MAX;
	static int8_t x287 = 2;
	int32_t x288 = INT32_MIN;
	static int32_t t71 = -728575;

	t71 = ((x285|(x286<x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile int8_t x290 = INT8_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 0;

	t72 = ((x289|(x290<x291))&x292);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MIN;
	uint16_t x294 = 0U;
	volatile int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -353332;

	t73 = ((x293|(x294<x295))&x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 74U;
	static int64_t x298 = INT64_MAX;
	uint8_t x300 = 76U;
	volatile int32_t t74 = 168846;

	t74 = ((x297|(x298<x299))&x300);

	if (t74 != 72) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 6937714;
	int64_t x303 = INT64_MAX;
	int16_t x304 = 21;

	t75 = ((x301|(x302<x303))&x304);

	if (t75 != 17) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 51830570806478280LLU;
	int64_t x307 = INT64_MIN;
	int32_t x308 = 512;

	t76 = ((x305|(x306<x307))&x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MIN;
	uint32_t x312 = 173309U;
	int64_t t77 = 1353660827688992LL;

	t77 = ((x309|(x310<x311))&x312);

	if (t77 != 172261LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x314 = 2416276U;
	uint16_t x315 = 11U;
	int64_t x316 = INT64_MIN;
	volatile uint64_t t78 = 3102804634169178LLU;

	t78 = ((x313|(x314<x315))&x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -520187815;
	static int32_t x318 = 848;
	int32_t x319 = 8318329;
	int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -7;

	t79 = ((x317|(x318<x319))&x320);

	if (t79 != 4185) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -9;
	volatile int64_t x323 = 1256939905LL;
	uint32_t t80 = 194365540U;

	t80 = ((x321|(x322<x323))&x324);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 60;
	volatile int16_t x326 = INT16_MIN;
	uint8_t x327 = 1U;
	int64_t x328 = 838514891408LL;
	volatile int64_t t81 = 12108416LL;

	t81 = ((x325|(x326<x327))&x328);

	if (t81 != 16LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x330 = INT64_MIN;
	uint64_t x331 = 16633469372202LLU;
	int64_t t82 = -1288409923415609LL;

	t82 = ((x329|(x330<x331))&x332);

	if (t82 != 35347091329720867LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = 618503985731LL;
	volatile int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MIN;
	int32_t x336 = 6725932;
	volatile int64_t t83 = -3672LL;

	t83 = ((x333|(x334<x335))&x336);

	if (t83 != 2392064LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -4;
	int8_t x338 = INT8_MAX;
	uint8_t x339 = 88U;
	int64_t x340 = -113858449328914LL;
	volatile int64_t t84 = -598160437918215LL;

	t84 = ((x337|(x338<x339))&x340);

	if (t84 != -113858449328916LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -128352436059404LL;
	int64_t x342 = 627803415393LL;
	int8_t x343 = INT8_MAX;
	volatile int64_t x344 = INT64_MIN;

	t85 = ((x341|(x342<x343))&x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -4981;
	static uint64_t x346 = 4168300014275LLU;
	int32_t x347 = 68486222;
	static int8_t x348 = -1;
	int32_t t86 = 29958208;

	t86 = ((x345|(x346<x347))&x348);

	if (t86 != -4981) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	volatile int8_t x350 = -1;
	volatile int8_t x351 = -1;
	static volatile int64_t t87 = 19LL;

	t87 = ((x349|(x350<x351))&x352);

	if (t87 != -18LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = -1;
	static uint32_t x354 = 49634U;
	int8_t x356 = 46;
	volatile int32_t t88 = 13980;

	t88 = ((x353|(x354<x355))&x356);

	if (t88 != 46) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -1;
	volatile int64_t x359 = INT64_MAX;
	uint16_t x360 = 14870U;
	volatile int64_t t89 = -543677572LL;

	t89 = ((x357|(x358<x359))&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -228950413538LL;
	uint8_t x362 = 123U;
	uint64_t x363 = UINT64_MAX;
	static uint16_t x364 = UINT16_MAX;
	volatile int64_t t90 = 16979267926LL;

	t90 = ((x361|(x362<x363))&x364);

	if (t90 != 61215LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 373960785U;
	static int32_t x366 = -53;
	int16_t x367 = INT16_MIN;
	static uint8_t x368 = 15U;

	t91 = ((x365|(x366<x367))&x368);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x371 = -1LL;
	volatile int16_t x372 = -1;

	t92 = ((x369|(x370<x371))&x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	uint64_t x376 = 1977922776LLU;
	volatile uint64_t t93 = 223016244LLU;

	t93 = ((x373|(x374<x375))&x376);

	if (t93 != 1977909248LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MIN;
	volatile uint32_t x378 = 487060U;
	static int16_t x379 = INT16_MAX;
	volatile int16_t x380 = INT16_MIN;
	static int32_t t94 = 20;

	t94 = ((x377|(x378<x379))&x380);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MIN;
	int32_t x383 = -3;
	uint32_t x384 = 226609U;
	volatile uint32_t t95 = 559U;

	t95 = ((x381|(x382<x383))&x384);

	if (t95 != 196609U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -2;
	static int16_t x386 = -1;
	volatile int8_t x387 = INT8_MAX;
	int64_t x388 = -767927874LL;

	t96 = ((x385|(x386<x387))&x388);

	if (t96 != -767927874LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 13;
	int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	int8_t x392 = INT8_MIN;

	t97 = ((x389|(x390<x391))&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MAX;
	int32_t x395 = INT32_MIN;
	int64_t t98 = -401LL;

	t98 = ((x393|(x394<x395))&x396);

	if (t98 != 30LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	static uint32_t x398 = UINT32_MAX;
	volatile int16_t x399 = -20;
	uint8_t x400 = 50U;
	volatile int32_t t99 = 23290622;

	t99 = ((x397|(x398<x399))&x400);

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

