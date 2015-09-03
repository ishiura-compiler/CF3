#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t3 = -3836152;
static uint16_t x17 = 29552U;
static volatile int32_t t5 = -3984;
int32_t x25 = INT32_MIN;
int32_t t8 = 134;
volatile int32_t t9 = -1014;
volatile uint64_t x45 = UINT64_MAX;
int64_t x47 = -1LL;
volatile int32_t t11 = -29586;
int64_t x49 = -1LL;
volatile int32_t t12 = 0;
int32_t x57 = -1018;
uint32_t x59 = 82U;
int16_t x63 = -26;
int32_t t15 = -741549;
volatile uint32_t x66 = 29604U;
int32_t x75 = 86902;
volatile int8_t x77 = INT8_MIN;
volatile uint32_t x78 = 0U;
volatile uint16_t x83 = 1U;
volatile int64_t x84 = INT64_MIN;
uint16_t x91 = 23137U;
int32_t t22 = 62678;
int16_t x93 = -35;
uint64_t x94 = UINT64_MAX;
int16_t x95 = -1;
int64_t x104 = -100162870824993912LL;
int32_t t26 = 159;
volatile int8_t x110 = INT8_MIN;
volatile int32_t t28 = 117;
static int32_t x120 = INT32_MIN;
static int32_t t29 = -1;
int32_t x122 = -1;
int64_t x124 = 259888012697LL;
static int32_t x126 = 29831;
static int8_t x127 = INT8_MIN;
int16_t x143 = INT16_MIN;
int64_t x144 = INT64_MAX;
static int32_t t40 = 6;
int64_t x167 = -44LL;
int32_t t41 = -2;
volatile int32_t x171 = INT32_MIN;
volatile int32_t t43 = 144687749;
volatile uint8_t x179 = UINT8_MAX;
int8_t x182 = INT8_MIN;
static int64_t x186 = INT64_MAX;
int8_t x190 = -2;
int64_t x192 = 7814857606166315LL;
int64_t x199 = 475880460LL;
int32_t t49 = -239;
int8_t x205 = -1;
int64_t x206 = INT64_MIN;
static volatile uint16_t x207 = 25U;
static int32_t x209 = 0;
int32_t x218 = INT32_MAX;
volatile uint8_t x225 = UINT8_MAX;
static volatile int32_t t56 = 91;
static int8_t x229 = -1;
uint32_t x232 = 1344610647U;
int16_t x245 = 13;
int64_t x251 = -1LL;
int16_t x258 = INT16_MIN;
volatile int32_t t64 = 131424;
int64_t x273 = 5128066LL;
static int64_t x275 = INT64_MIN;
uint8_t x283 = 1U;
int8_t x284 = INT8_MIN;
uint32_t x287 = 400027212U;
static int8_t x292 = INT8_MIN;
volatile uint32_t x303 = 29U;
uint64_t x305 = UINT64_MAX;
volatile int32_t t76 = -58511;
int64_t x309 = -1LL;
int64_t x316 = INT64_MAX;
volatile int32_t t78 = -112027858;
volatile uint16_t x317 = 21505U;
volatile int32_t t80 = 52737;
static int8_t x327 = INT8_MAX;
int8_t x328 = -24;
static int32_t x331 = INT32_MAX;
volatile int32_t x332 = INT32_MAX;
int64_t x336 = INT64_MIN;
int32_t t84 = -5575781;
uint8_t x352 = UINT8_MAX;
volatile uint16_t x356 = 1501U;
uint64_t x361 = 20249LLU;
volatile int8_t x362 = INT8_MAX;
static uint16_t x363 = 2U;
volatile int32_t t90 = 51299;
int16_t x371 = -1;
int32_t t92 = -15254285;
volatile uint16_t x375 = UINT16_MAX;
int64_t x380 = 1LL;
int32_t x382 = -598159201;
volatile int32_t t97 = -56;
int32_t x396 = INT32_MAX;
int16_t x400 = -1;
volatile int32_t t99 = 419;


void f0(void) {
	int16_t x1 = -42;
	static volatile uint64_t x2 = 995554940908629LLU;
	uint8_t x3 = 1U;
	static int16_t x4 = 799;
	static int32_t t0 = -65;

	t0 = ((x1<x2)^(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int64_t x6 = -260524545625LL;
	int8_t x7 = -1;
	int64_t x8 = 550426383864684000LL;
	int32_t t1 = 416530;

	t1 = ((x5<x6)^(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 25U;
	int64_t x10 = INT64_MIN;
	static volatile int16_t x11 = -215;
	uint32_t x12 = 293647421U;
	static volatile int32_t t2 = -8;

	t2 = ((x9<x10)^(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 19309840U;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = UINT8_MAX;
	static volatile uint64_t x16 = 4608333391850352157LLU;

	t3 = ((x13<x14)^(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MAX;
	static uint32_t x20 = 14570U;
	volatile int32_t t4 = 38026;

	t4 = ((x17<x18)^(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 1508;
	int32_t x22 = INT32_MIN;
	uint64_t x23 = UINT64_MAX;
	volatile int64_t x24 = INT64_MIN;

	t5 = ((x21<x22)^(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 68010U;
	static int8_t x27 = 0;
	static int32_t x28 = 123;
	int32_t t6 = 1919;

	t6 = ((x25<x26)^(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 392885LL;
	uint64_t x30 = 122865928163LLU;
	volatile uint32_t x31 = UINT32_MAX;
	uint8_t x32 = 1U;
	volatile int32_t t7 = 273;

	t7 = ((x29<x30)^(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int8_t x34 = INT8_MIN;
	uint16_t x35 = UINT16_MAX;
	static int8_t x36 = INT8_MIN;

	t8 = ((x33<x34)^(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 1821825228654094LLU;
	static int16_t x38 = INT16_MAX;
	static int16_t x39 = -119;
	uint16_t x40 = UINT16_MAX;

	t9 = ((x37<x38)^(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	uint32_t x42 = UINT32_MAX;
	uint8_t x43 = 56U;
	int16_t x44 = -1;
	volatile int32_t t10 = 3;

	t10 = ((x41<x42)^(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = -13771606LL;
	volatile uint16_t x48 = 26U;

	t11 = ((x45<x46)^(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	volatile int32_t x51 = INT32_MAX;
	int64_t x52 = 195936798LL;

	t12 = ((x49<x50)^(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 11784;
	int8_t x54 = INT8_MIN;
	static uint16_t x55 = UINT16_MAX;
	int64_t x56 = INT64_MAX;
	int32_t t13 = 133;

	t13 = ((x53<x54)^(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 2074633252U;
	volatile int32_t x60 = -1;
	volatile int32_t t14 = 3650084;

	t14 = ((x57<x58)^(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = 1;
	volatile int32_t x64 = INT32_MIN;

	t15 = ((x61<x62)^(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -20;
	uint16_t x67 = 0U;
	uint64_t x68 = UINT64_MAX;
	int32_t t16 = -11398;

	t16 = ((x65<x66)^(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = -1;
	int16_t x70 = -1;
	int16_t x71 = -26;
	int64_t x72 = INT64_MAX;
	int32_t t17 = 225177;

	t17 = ((x69<x70)^(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint16_t x74 = 170U;
	static uint8_t x76 = UINT8_MAX;
	int32_t t18 = 4;

	t18 = ((x73<x74)^(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x79 = INT32_MAX;
	int32_t x80 = -5;
	int32_t t19 = -30;

	t19 = ((x77<x78)^(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int64_t x82 = 125LL;
	int32_t t20 = 37821;

	t20 = ((x81<x82)^(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int16_t x86 = 1;
	int16_t x87 = INT16_MIN;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = 272991583;

	t21 = ((x85<x86)^(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = 11224;
	int16_t x90 = INT16_MIN;
	volatile int64_t x92 = INT64_MIN;

	t22 = ((x89<x90)^(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x96 = UINT32_MAX;
	int32_t t23 = 6;

	t23 = ((x93<x94)^(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 2392070607LLU;
	uint64_t x99 = 19LLU;
	int16_t x100 = -1;
	int32_t t24 = -853;

	t24 = ((x97<x98)^(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int32_t x102 = -235385;
	int16_t x103 = -1;
	int32_t t25 = 21;

	t25 = ((x101<x102)^(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -524583LL;
	volatile uint32_t x106 = 1086549429U;
	uint64_t x107 = UINT64_MAX;
	int64_t x108 = INT64_MIN;

	t26 = ((x105<x106)^(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 4U;
	static uint16_t x111 = 3U;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = 8;

	t27 = ((x109<x110)^(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = -1;
	int16_t x114 = 956;
	int16_t x115 = 1;
	static uint8_t x116 = UINT8_MAX;

	t28 = ((x113<x114)^(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = UINT64_MAX;
	volatile int16_t x118 = 1;
	uint32_t x119 = 31090U;

	t29 = ((x117<x118)^(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	volatile uint32_t x123 = 88085U;
	int32_t t30 = -1;

	t30 = ((x121<x122)^(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -767259;
	int16_t x128 = -1;
	volatile int32_t t31 = -19172215;

	t31 = ((x125<x126)^(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int64_t x130 = INT64_MAX;
	static volatile int64_t x131 = INT64_MIN;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -1255;

	t32 = ((x129<x130)^(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 16006U;
	int16_t x134 = -49;
	int8_t x135 = INT8_MAX;
	uint32_t x136 = 4004U;
	volatile int32_t t33 = -20;

	t33 = ((x133<x134)^(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -26;
	volatile int8_t x138 = INT8_MIN;
	volatile uint16_t x139 = 1U;
	uint32_t x140 = 883152U;
	volatile int32_t t34 = -14;

	t34 = ((x137<x138)^(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 31U;
	int64_t x142 = INT64_MIN;
	volatile int32_t t35 = -38776828;

	t35 = ((x141<x142)^(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MAX;
	uint32_t x147 = 27041942U;
	volatile int8_t x148 = INT8_MIN;
	int32_t t36 = -1065301;

	t36 = ((x145<x146)^(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 33U;
	static int16_t x150 = INT16_MIN;
	int32_t x151 = -1;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -6273;

	t37 = ((x149<x150)^(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x153 = INT16_MIN;
	uint8_t x154 = 5U;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = 56646993LLU;
	static volatile int32_t t38 = 397223;

	t38 = ((x153<x154)^(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1;
	int16_t x158 = INT16_MAX;
	int16_t x159 = -3205;
	int64_t x160 = 4623152470017271LL;
	static int32_t t39 = -67;

	t39 = ((x157<x158)^(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 714;
	uint8_t x162 = 14U;
	uint64_t x163 = 10LLU;
	volatile int16_t x164 = -1;

	t40 = ((x161<x162)^(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 35;
	int8_t x166 = INT8_MAX;
	volatile int8_t x168 = -1;

	t41 = ((x165<x166)^(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MIN;
	int64_t x172 = -1LL;
	static volatile int32_t t42 = -14;

	t42 = ((x169<x170)^(x171<=x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 4481U;
	int8_t x174 = -1;
	int32_t x175 = -55;
	volatile int8_t x176 = -1;

	t43 = ((x173<x174)^(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	volatile int32_t x178 = 652930465;
	volatile int16_t x180 = -1;
	volatile int32_t t44 = -865384616;

	t44 = ((x177<x178)^(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int32_t x183 = INT32_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = -1031329;

	t45 = ((x181<x182)^(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	volatile int64_t x187 = -6LL;
	static int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 11850;

	t46 = ((x185<x186)^(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = INT32_MIN;
	int64_t x191 = -1LL;
	int32_t t47 = -95290481;

	t47 = ((x189<x190)^(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = -1LL;
	int8_t x195 = INT8_MAX;
	int32_t x196 = 220519;
	int32_t t48 = 2;

	t48 = ((x193<x194)^(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = -1;
	int16_t x198 = -1;
	int64_t x200 = INT64_MAX;

	t49 = ((x197<x198)^(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MAX;
	volatile int8_t x202 = INT8_MIN;
	uint8_t x203 = UINT8_MAX;
	static int64_t x204 = 14514920213413LL;
	static volatile int32_t t50 = -156435;

	t50 = ((x201<x202)^(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x208 = -6;
	static int32_t t51 = 6143;

	t51 = ((x205<x206)^(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x210 = -397426352545087990LL;
	int8_t x211 = -1;
	static uint64_t x212 = 151637630832LLU;
	int32_t t52 = 30704;

	t52 = ((x209<x210)^(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 0U;
	static volatile int16_t x215 = INT16_MAX;
	volatile uint16_t x216 = 1256U;
	volatile int32_t t53 = -994052077;

	t53 = ((x213<x214)^(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -189047714;
	int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MAX;
	static volatile int32_t t54 = 0;

	t54 = ((x217<x218)^(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	static int8_t x222 = INT8_MIN;
	uint32_t x223 = 6U;
	volatile uint16_t x224 = 28U;
	volatile int32_t t55 = -118;

	t55 = ((x221<x222)^(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MIN;
	int32_t x227 = -133885591;
	int16_t x228 = -1;

	t56 = ((x225<x226)^(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x230 = 7618190;
	int64_t x231 = INT64_MIN;
	volatile int32_t t57 = 168327570;

	t57 = ((x229<x230)^(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 16255U;
	uint8_t x234 = UINT8_MAX;
	int16_t x235 = 2;
	volatile uint8_t x236 = UINT8_MAX;
	int32_t t58 = 3133;

	t58 = ((x233<x234)^(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	uint32_t x238 = 673931U;
	int16_t x239 = -3;
	volatile uint16_t x240 = 210U;
	volatile int32_t t59 = -1586;

	t59 = ((x237<x238)^(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = -1;
	int64_t x243 = INT64_MIN;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -2;

	t60 = ((x241<x242)^(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x246 = INT32_MIN;
	uint64_t x247 = UINT64_MAX;
	int64_t x248 = -1LL;
	int32_t t61 = 3;

	t61 = ((x245<x246)^(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	uint8_t x250 = 58U;
	int32_t x252 = INT32_MAX;
	volatile int32_t t62 = -2;

	t62 = ((x249<x250)^(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	volatile int8_t x255 = INT8_MAX;
	volatile int16_t x256 = 469;
	int32_t t63 = -23801;

	t63 = ((x253<x254)^(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 6U;
	uint8_t x259 = UINT8_MAX;
	uint64_t x260 = 399742LLU;

	t64 = ((x257<x258)^(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x261 = 24LLU;
	int64_t x262 = INT64_MIN;
	volatile int32_t x263 = 661;
	volatile int32_t x264 = INT32_MAX;
	int32_t t65 = 3485;

	t65 = ((x261<x262)^(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 1U;
	static int32_t x266 = -352;
	uint16_t x267 = 2817U;
	int16_t x268 = INT16_MIN;
	static int32_t t66 = -8162334;

	t66 = ((x265<x266)^(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = 0;
	int32_t x270 = INT32_MIN;
	static uint32_t x271 = 6295U;
	int8_t x272 = INT8_MAX;
	int32_t t67 = -247;

	t67 = ((x269<x270)^(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x274 = 767087404;
	static uint16_t x276 = 7167U;
	int32_t t68 = -53;

	t68 = ((x273<x274)^(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x277 = UINT16_MAX;
	volatile int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 1406LLU;
	int32_t t69 = -221;

	t69 = ((x277<x278)^(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	int16_t x282 = INT16_MIN;
	int32_t t70 = 32;

	t70 = ((x281<x282)^(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	volatile int64_t x286 = 47142967974388140LL;
	int64_t x288 = -1LL;
	static int32_t t71 = 214309812;

	t71 = ((x285<x286)^(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MIN;
	static uint64_t x291 = UINT64_MAX;
	volatile int32_t t72 = 921;

	t72 = ((x289<x290)^(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	int16_t x294 = INT16_MIN;
	static int64_t x295 = 2238605137875723LL;
	uint64_t x296 = 445889580679857LLU;
	volatile int32_t t73 = 11750;

	t73 = ((x293<x294)^(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	uint8_t x298 = UINT8_MAX;
	static uint16_t x299 = 4989U;
	static uint16_t x300 = UINT16_MAX;
	static volatile int32_t t74 = -87855962;

	t74 = ((x297<x298)^(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	int8_t x302 = INT8_MIN;
	static volatile uint32_t x304 = UINT32_MAX;
	volatile int32_t t75 = 1387646;

	t75 = ((x301<x302)^(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -17;
	uint8_t x307 = 0U;
	uint16_t x308 = 2U;

	t76 = ((x305<x306)^(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x310 = 180U;
	uint16_t x311 = 3U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -27305758;

	t77 = ((x309<x310)^(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = 35;
	uint16_t x315 = UINT16_MAX;

	t78 = ((x313<x314)^(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = INT64_MIN;
	int64_t x319 = -2242416250LL;
	uint8_t x320 = 102U;
	int32_t t79 = 3;

	t79 = ((x317<x318)^(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = 51583;
	uint64_t x324 = UINT64_MAX;

	t80 = ((x321<x322)^(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 27;
	int16_t x326 = INT16_MIN;
	volatile int32_t t81 = 75635;

	t81 = ((x325<x326)^(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MAX;
	int16_t x330 = 7562;
	volatile int32_t t82 = -4855619;

	t82 = ((x329<x330)^(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MIN;
	static volatile int32_t x334 = INT32_MIN;
	int16_t x335 = 2;
	volatile int32_t t83 = 1;

	t83 = ((x333<x334)^(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static uint8_t x338 = 70U;
	int16_t x339 = -1;
	int64_t x340 = INT64_MAX;

	t84 = ((x337<x338)^(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 72U;
	uint16_t x342 = 904U;
	int64_t x343 = -3583LL;
	int16_t x344 = -1;
	static int32_t t85 = -13536989;

	t85 = ((x341<x342)^(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	static volatile int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MAX;
	int32_t t86 = 79515595;

	t86 = ((x345<x346)^(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = UINT32_MAX;
	static int32_t x350 = -1;
	volatile int32_t x351 = -1;
	static volatile int32_t t87 = -16491921;

	t87 = ((x349<x350)^(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 47U;
	static int32_t x354 = -1;
	static int16_t x355 = INT16_MAX;
	volatile int32_t t88 = -13020;

	t88 = ((x353<x354)^(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int64_t x358 = INT64_MAX;
	int32_t x359 = -21;
	int64_t x360 = 43392383193741939LL;
	volatile int32_t t89 = -150;

	t89 = ((x357<x358)^(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x364 = 1540564805542075LLU;

	t90 = ((x361<x362)^(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = UINT8_MAX;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t91 = 103779;

	t91 = ((x365<x366)^(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = 196U;
	static int32_t x370 = INT32_MAX;
	int32_t x372 = INT32_MAX;

	t92 = ((x369<x370)^(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x373 = UINT16_MAX;
	uint8_t x374 = UINT8_MAX;
	uint8_t x376 = 0U;
	int32_t t93 = -10596;

	t93 = ((x373<x374)^(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 0;
	int32_t x378 = INT32_MAX;
	int8_t x379 = INT8_MAX;
	static int32_t t94 = 13;

	t94 = ((x377<x378)^(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = -1LL;
	uint64_t x383 = 117LLU;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -1029;

	t95 = ((x381<x382)^(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MAX;
	int8_t x388 = -15;
	int32_t t96 = 3640847;

	t96 = ((x385<x386)^(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	volatile int64_t x390 = -548390300393400LL;
	int8_t x391 = INT8_MAX;
	static int64_t x392 = 329LL;

	t97 = ((x389<x390)^(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -2;
	volatile uint32_t x394 = 46274743U;
	static int32_t x395 = INT32_MIN;
	volatile int32_t t98 = 2;

	t98 = ((x393<x394)^(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 2258832090086740791LLU;
	volatile int64_t x398 = INT64_MIN;
	uint8_t x399 = 7U;

	t99 = ((x397<x398)^(x399<=x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

