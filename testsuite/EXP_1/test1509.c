#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
volatile int32_t x7 = 6096571;
static uint32_t x8 = 62736433U;
uint32_t t1 = 1U;
static int16_t x17 = INT16_MAX;
int64_t x19 = INT64_MIN;
static uint16_t x20 = UINT16_MAX;
int64_t x21 = INT64_MIN;
int64_t x23 = 379779LL;
static volatile int64_t t4 = 12329LL;
static uint32_t x27 = 112167828U;
volatile uint32_t t5 = 12488303U;
static int16_t x30 = -1;
uint64_t t6 = 3675944586641LLU;
static int32_t x45 = INT32_MAX;
static int8_t x46 = -1;
int16_t x48 = 1437;
static int32_t t10 = -4485160;
static volatile int32_t t12 = 1466;
int32_t x61 = 10420425;
static int32_t x62 = INT32_MIN;
int32_t x73 = -88;
int16_t x78 = INT16_MIN;
volatile int64_t x80 = INT64_MIN;
int64_t t17 = 1733485357098594LL;
volatile int8_t x87 = INT8_MIN;
uint64_t t19 = 12528664672LLU;
volatile int8_t x96 = INT8_MAX;
int64_t x107 = INT64_MAX;
uint8_t x108 = 1U;
int16_t x110 = INT16_MIN;
uint64_t t24 = 353087474250045LLU;
static int32_t x117 = -1;
static volatile uint8_t x119 = 4U;
int8_t x121 = INT8_MIN;
static int32_t x126 = -1;
uint32_t x127 = 64069743U;
uint64_t t28 = 10671827896LLU;
volatile int8_t x135 = INT8_MIN;
volatile int32_t t29 = -27348891;
int16_t x137 = INT16_MAX;
int8_t x140 = INT8_MAX;
uint8_t x153 = UINT8_MAX;
int16_t x159 = INT16_MAX;
int32_t t33 = 60;
static int16_t x171 = -5519;
int8_t x174 = INT8_MIN;
uint8_t x175 = UINT8_MAX;
uint8_t x178 = 34U;
int8_t x194 = -1;
int8_t x197 = INT8_MAX;
volatile int8_t x200 = INT8_MAX;
uint32_t x206 = UINT32_MAX;
int8_t x210 = INT8_MIN;
static int16_t x215 = 74;
int8_t x219 = -23;
int64_t t47 = 5300005552960LL;
static volatile uint64_t x225 = 9906389608746454LLU;
uint8_t x227 = 1U;
volatile uint64_t x230 = 200522863LLU;
volatile uint64_t t50 = 889791255334212LLU;
uint8_t x234 = 6U;
int64_t x236 = 7LL;
int64_t x244 = INT64_MAX;
int16_t x249 = INT16_MIN;
static volatile int32_t x251 = -74007;
uint32_t t55 = 636135712U;
int64_t x254 = 0LL;
volatile int64_t t56 = -25070LL;
volatile uint64_t t57 = 7160328733688106LLU;
volatile uint16_t x263 = 52U;
int64_t t59 = 1495716460455470203LL;
int16_t x271 = INT16_MIN;
int8_t x277 = -1;
uint8_t x279 = UINT8_MAX;
int16_t x285 = 0;
int64_t x289 = INT64_MIN;
volatile uint32_t t65 = 121U;
volatile int16_t x305 = INT16_MAX;
uint32_t x307 = 19U;
uint32_t t66 = 12140U;
int32_t t67 = 175;
volatile int8_t x326 = INT8_MAX;
static int32_t x330 = INT32_MIN;
int32_t t71 = 518319331;
uint8_t x335 = 7U;
uint8_t x336 = 7U;
volatile uint32_t x343 = UINT32_MAX;
volatile int64_t t73 = -6259906401302873LL;
int64_t x345 = INT64_MAX;
static uint64_t t75 = 662903061LLU;
volatile int16_t x353 = -7;
int64_t x373 = INT64_MIN;
int64_t x374 = INT64_MIN;
static int16_t x376 = -11;
static int16_t x380 = -129;
int32_t t80 = 1826;
int64_t x382 = -2183830346868650LL;
int64_t x386 = 1LL;
int16_t x390 = INT16_MAX;
int64_t t86 = -191609LL;
volatile int8_t x409 = 48;
uint16_t x414 = 1U;
volatile int16_t x421 = -7665;
int8_t x422 = INT8_MAX;
int32_t x423 = -162670;
int8_t x425 = INT8_MIN;
uint16_t x432 = 14U;
static uint16_t x436 = UINT16_MAX;
int16_t x437 = INT16_MIN;
volatile uint64_t x444 = UINT64_MAX;
uint8_t x449 = 112U;
static int16_t x450 = INT16_MIN;
int64_t x451 = INT64_MIN;
int32_t x454 = INT32_MIN;
int64_t x460 = -15940570191497827LL;


void f0(void) {
	int64_t x1 = -1LL;
	volatile int32_t x2 = INT32_MIN;
	static int16_t x3 = -1;
	uint64_t t0 = 998485819281401992LLU;

	t0 = (((x1<x2)^x3)+x4);

	if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	volatile int16_t x6 = -1;

	t1 = (((x5<x6)^x7)+x8);

	if (t1 != 68833004U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 14;
	int8_t x14 = -1;
	volatile uint16_t x15 = 7U;
	uint8_t x16 = 2U;
	int32_t t2 = -238;

	t2 = (((x13<x14)^x15)+x16);

	if (t2 != 9) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x18 = UINT64_MAX;
	volatile int64_t t3 = -41925376255371496LL;

	t3 = (((x17<x18)^x19)+x20);

	if (t3 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = -1LL;
	int16_t x24 = -1;

	t4 = (((x21<x22)^x23)+x24);

	if (t4 != 379777LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = -1;
	int8_t x28 = 20;

	t5 = (((x25<x26)^x27)+x28);

	if (t5 != 112167849U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 1;
	static volatile int16_t x31 = INT16_MAX;
	uint64_t x32 = 175228293LLU;

	t6 = (((x29<x30)^x31)+x32);

	if (t6 != 175261060LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1LL;
	int32_t x38 = INT32_MAX;
	static volatile int64_t x39 = INT64_MIN;
	static int16_t x40 = -1;
	int64_t t7 = INT64_MIN;

	t7 = (((x37<x38)^x39)+x40);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x41 = 0U;
	int32_t x42 = 62;
	int32_t x43 = -1;
	int8_t x44 = INT8_MAX;
	int32_t t8 = -515264257;

	t8 = (((x41<x42)^x43)+x44);

	if (t8 != 125) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x47 = 0U;
	volatile int32_t t9 = -10;

	t9 = (((x45<x46)^x47)+x48);

	if (t9 != 1437) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = 1LL;
	uint8_t x50 = 7U;
	static volatile int16_t x51 = -1;
	int32_t x52 = INT32_MAX;

	t10 = (((x49<x50)^x51)+x52);

	if (t10 != 2147483645) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 502;
	static int64_t x54 = INT64_MIN;
	int16_t x55 = -1;
	static volatile uint16_t x56 = UINT16_MAX;
	int32_t t11 = -55;

	t11 = (((x53<x54)^x55)+x56);

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = -1;
	volatile uint32_t x58 = 20435458U;
	volatile int16_t x59 = -12;
	int8_t x60 = INT8_MIN;

	t12 = (((x57<x58)^x59)+x60);

	if (t12 != -140) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x63 = -1LL;
	int16_t x64 = INT16_MIN;
	volatile int64_t t13 = 1LL;

	t13 = (((x61<x62)^x63)+x64);

	if (t13 != -32769LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x65 = 1U;
	int8_t x66 = -1;
	static int64_t x67 = 5400478783388512LL;
	volatile int32_t x68 = -1;
	int64_t t14 = -3466901592021457620LL;

	t14 = (((x65<x66)^x67)+x68);

	if (t14 != 5400478783388511LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = -3;
	int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MAX;
	int8_t x72 = INT8_MAX;
	static volatile int32_t t15 = -6;

	t15 = (((x69<x70)^x71)+x72);

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MIN;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MIN;
	uint32_t t16 = 1469042U;

	t16 = (((x73<x74)^x75)+x76);

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x77 = 3U;
	int8_t x79 = 2;

	t17 = (((x77<x78)^x79)+x80);

	if (t17 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x85 = -1570577885LL;
	int16_t x86 = -1;
	volatile int64_t x88 = -1LL;
	volatile int64_t t18 = 28048812629344881LL;

	t18 = (((x85<x86)^x87)+x88);

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = 11LL;
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = UINT64_MAX;

	t19 = (((x89<x90)^x91)+x92);

	if (t19 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x93 = 6U;
	static uint8_t x94 = 63U;
	uint16_t x95 = UINT16_MAX;
	volatile int32_t t20 = -1;

	t20 = (((x93<x94)^x95)+x96);

	if (t20 != 65661) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	volatile int8_t x98 = -1;
	uint64_t x99 = 343LLU;
	uint32_t x100 = UINT32_MAX;
	uint64_t t21 = 240979LLU;

	t21 = (((x97<x98)^x99)+x100);

	if (t21 != 4294967637LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	volatile int16_t x102 = 4861;
	uint16_t x103 = 43U;
	int16_t x104 = -1;
	volatile int32_t t22 = -102896952;

	t22 = (((x101<x102)^x103)+x104);

	if (t22 != 41) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = INT8_MIN;
	uint8_t x106 = 3U;
	volatile int64_t t23 = INT64_MAX;

	t23 = (((x105<x106)^x107)+x108);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	uint64_t x111 = 86479LLU;
	int16_t x112 = -53;

	t24 = (((x109<x110)^x111)+x112);

	if (t24 != 86425LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x113 = -1465;
	int8_t x114 = 63;
	uint64_t x115 = 29723944328064535LLU;
	static int32_t x116 = INT32_MIN;
	volatile uint64_t t25 = 0LLU;

	t25 = (((x113<x114)^x115)+x116);

	if (t25 != 29723942180580886LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x118 = INT8_MAX;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t26 = 15251LL;

	t26 = (((x117<x118)^x119)+x120);

	if (t26 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x122 = 0U;
	int16_t x123 = 37;
	volatile int16_t x124 = INT16_MAX;
	volatile int32_t t27 = 87811;

	t27 = (((x121<x122)^x123)+x124);

	if (t27 != 32803) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = 16419U;
	volatile uint64_t x128 = UINT64_MAX;

	t28 = (((x125<x126)^x127)+x128);

	if (t28 != 64069742LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -1;
	uint64_t x134 = 2588LLU;
	int32_t x136 = 486;

	t29 = (((x133<x134)^x135)+x136);

	if (t29 != 358) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x138 = -1;
	int8_t x139 = INT8_MAX;
	static volatile int32_t t30 = 75463;

	t30 = (((x137<x138)^x139)+x140);

	if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = -1;
	int16_t x150 = INT16_MAX;
	volatile int16_t x151 = INT16_MAX;
	volatile int8_t x152 = -1;
	int32_t t31 = -2;

	t31 = (((x149<x150)^x151)+x152);

	if (t31 != 32765) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x154 = 817U;
	int16_t x155 = -1;
	int32_t x156 = -1;
	int32_t t32 = -2905539;

	t32 = (((x153<x154)^x155)+x156);

	if (t32 != -3) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x157 = 19855;
	int32_t x158 = -1;
	volatile uint16_t x160 = UINT16_MAX;

	t33 = (((x157<x158)^x159)+x160);

	if (t33 != 98302) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = -818001;
	static int16_t x162 = INT16_MAX;
	int32_t x163 = 19871;
	int8_t x164 = INT8_MIN;
	volatile int32_t t34 = -402;

	t34 = (((x161<x162)^x163)+x164);

	if (t34 != 19742) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x165 = 24U;
	volatile uint64_t x166 = 464053LLU;
	volatile int32_t x167 = -1;
	volatile int8_t x168 = -1;
	volatile int32_t t35 = -483257;

	t35 = (((x165<x166)^x167)+x168);

	if (t35 != -3) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x169 = 827U;
	int8_t x170 = 7;
	uint8_t x172 = 0U;
	static int32_t t36 = 49;

	t36 = (((x169<x170)^x171)+x172);

	if (t36 != -5519) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -12143765;
	volatile uint32_t x176 = UINT32_MAX;
	volatile uint32_t t37 = 61U;

	t37 = (((x173<x174)^x175)+x176);

	if (t37 != 253U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x177 = INT32_MAX;
	volatile uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MAX;
	volatile int32_t t38 = -94647;

	t38 = (((x177<x178)^x179)+x180);

	if (t38 != 33022) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MAX;
	static uint8_t x186 = UINT8_MAX;
	static int64_t x187 = -447060446433906LL;
	volatile uint16_t x188 = 840U;
	int64_t t39 = 1310585867LL;

	t39 = (((x185<x186)^x187)+x188);

	if (t39 != -447060446433066LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x189 = INT64_MIN;
	volatile int16_t x190 = 304;
	static volatile uint8_t x191 = UINT8_MAX;
	int32_t x192 = INT32_MIN;
	int32_t t40 = 3933;

	t40 = (((x189<x190)^x191)+x192);

	if (t40 != -2147483394) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x193 = 0;
	volatile uint64_t x195 = UINT64_MAX;
	static uint16_t x196 = UINT16_MAX;
	uint64_t t41 = 99090281601848LLU;

	t41 = (((x193<x194)^x195)+x196);

	if (t41 != 65534LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x198 = 11162611LL;
	volatile uint32_t x199 = UINT32_MAX;
	uint32_t t42 = 2251428U;

	t42 = (((x197<x198)^x199)+x200);

	if (t42 != 125U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = 188;
	uint32_t x202 = 0U;
	int32_t x203 = -415459065;
	volatile uint8_t x204 = 106U;
	volatile int32_t t43 = 7;

	t43 = (((x201<x202)^x203)+x204);

	if (t43 != -415458959) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = UINT8_MAX;
	int16_t x207 = INT16_MIN;
	volatile int8_t x208 = -1;
	volatile int32_t t44 = -3499995;

	t44 = (((x205<x206)^x207)+x208);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x209 = INT32_MIN;
	int16_t x211 = -3;
	int16_t x212 = -1198;
	volatile int32_t t45 = 175795132;

	t45 = (((x209<x210)^x211)+x212);

	if (t45 != -1202) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = -3;
	uint64_t x216 = UINT64_MAX;
	uint64_t t46 = 611330LLU;

	t46 = (((x213<x214)^x215)+x216);

	if (t46 != 73LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = UINT64_MAX;
	static int8_t x218 = -1;
	int64_t x220 = -1LL;

	t47 = (((x217<x218)^x219)+x220);

	if (t47 != -24LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x221 = -1;
	uint16_t x222 = 4354U;
	static int32_t x223 = INT32_MIN;
	uint32_t x224 = 195U;
	uint32_t t48 = 915157163U;

	t48 = (((x221<x222)^x223)+x224);

	if (t48 != 2147483844U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x226 = 2U;
	int8_t x228 = INT8_MAX;
	int32_t t49 = 858;

	t49 = (((x225<x226)^x227)+x228);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 76051917U;
	int16_t x231 = INT16_MIN;
	static uint64_t x232 = UINT64_MAX;

	t50 = (((x229<x230)^x231)+x232);

	if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = INT32_MAX;
	uint8_t x235 = 120U;
	volatile int64_t t51 = -444987623LL;

	t51 = (((x233<x234)^x235)+x236);

	if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x237 = 2287141U;
	static int8_t x238 = -1;
	int64_t x239 = INT64_MAX;
	static int16_t x240 = INT16_MIN;
	int64_t t52 = 103566485513140065LL;

	t52 = (((x237<x238)^x239)+x240);

	if (t52 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = INT16_MIN;
	volatile int8_t x242 = INT8_MIN;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t t53 = 0LLU;

	t53 = (((x241<x242)^x243)+x244);

	if (t53 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = INT8_MIN;
	static uint64_t x248 = 47056LLU;
	volatile uint64_t t54 = 12085441LLU;

	t54 = (((x245<x246)^x247)+x248);

	if (t54 != 46929LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x250 = 201U;
	uint32_t x252 = 110U;

	t55 = (((x249<x250)^x251)+x252);

	if (t55 != 4294893398U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = 1U;
	static int64_t x255 = -1LL;
	uint8_t x256 = 6U;

	t56 = (((x253<x254)^x255)+x256);

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	volatile int16_t x258 = INT16_MAX;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = 118253LLU;

	t57 = (((x257<x258)^x259)+x260);

	if (t57 != 118126LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x261 = INT16_MIN;
	static uint16_t x262 = 7U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t58 = 19079836279484LL;

	t58 = (((x261<x262)^x263)+x264);

	if (t58 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = -1LL;
	volatile int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MAX;

	t59 = (((x265<x266)^x267)+x268);

	if (t59 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MAX;
	int16_t x272 = INT16_MAX;
	volatile int32_t t60 = -86;

	t60 = (((x269<x270)^x271)+x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = 623;
	static uint32_t x280 = UINT32_MAX;
	uint32_t t61 = 4539420U;

	t61 = (((x277<x278)^x279)+x280);

	if (t61 != 253U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x286 = 29U;
	int16_t x287 = INT16_MIN;
	int8_t x288 = 10;
	int32_t t62 = -57;

	t62 = (((x285<x286)^x287)+x288);

	if (t62 != -32757) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x290 = -1;
	uint16_t x291 = 202U;
	volatile int16_t x292 = 1;
	volatile int32_t t63 = -931;

	t63 = (((x289<x290)^x291)+x292);

	if (t63 != 204) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x297 = INT64_MAX;
	static uint8_t x298 = 8U;
	uint32_t x299 = 133622U;
	static int16_t x300 = -17;
	uint32_t t64 = 3338U;

	t64 = (((x297<x298)^x299)+x300);

	if (t64 != 133605U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = -1;
	int16_t x302 = 3022;
	uint32_t x303 = 63666U;
	static int8_t x304 = INT8_MIN;

	t65 = (((x301<x302)^x303)+x304);

	if (t65 != 63539U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x306 = INT8_MIN;
	volatile int16_t x308 = 0;

	t66 = (((x305<x306)^x307)+x308);

	if (t66 != 19U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x309 = 68144448U;
	volatile int16_t x310 = -4;
	uint16_t x311 = 17U;
	volatile uint8_t x312 = 0U;

	t67 = (((x309<x310)^x311)+x312);

	if (t67 != 16) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x317 = 45U;
	uint32_t x318 = 465U;
	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 506519204U;
	volatile uint32_t t68 = 30089813U;

	t68 = (((x317<x318)^x319)+x320);

	if (t68 != 506519202U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x321 = UINT64_MAX;
	static uint16_t x322 = 68U;
	volatile int16_t x323 = INT16_MIN;
	volatile uint32_t x324 = 590719037U;
	volatile uint32_t t69 = 186U;

	t69 = (((x321<x322)^x323)+x324);

	if (t69 != 590686269U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = 3;
	uint16_t x327 = 25U;
	uint64_t x328 = 203855238207LLU;
	uint64_t t70 = 266004LLU;

	t70 = (((x325<x326)^x327)+x328);

	if (t70 != 203855238231LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = 0;
	volatile int8_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;

	t71 = (((x329<x330)^x331)+x332);

	if (t71 != -32769) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x333 = 3668506651318620665LL;
	int32_t x334 = -1;
	static int32_t t72 = -14;

	t72 = (((x333<x334)^x335)+x336);

	if (t72 != 14) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x341 = -1;
	uint64_t x342 = 29833891LLU;
	int64_t x344 = -1114121112711153LL;

	t73 = (((x341<x342)^x343)+x344);

	if (t73 != -1114116817743858LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x346 = INT8_MIN;
	int8_t x347 = 1;
	int16_t x348 = -1;
	int32_t t74 = 15;

	t74 = (((x345<x346)^x347)+x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = 0U;
	int16_t x350 = INT16_MIN;
	volatile int8_t x351 = INT8_MAX;
	uint64_t x352 = 60295404849LLU;

	t75 = (((x349<x350)^x351)+x352);

	if (t75 != 60295404976LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x354 = 3387722372338LL;
	uint8_t x355 = 3U;
	int32_t x356 = -1;
	static volatile int32_t t76 = -6;

	t76 = (((x353<x354)^x355)+x356);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x357 = 446;
	int64_t x358 = 18947547836LL;
	static int64_t x359 = -1LL;
	int8_t x360 = INT8_MIN;
	static volatile int64_t t77 = 289475517323367036LL;

	t77 = (((x357<x358)^x359)+x360);

	if (t77 != -130LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = 984LL;
	int32_t x362 = -239405;
	volatile int16_t x363 = -1;
	int16_t x364 = INT16_MAX;
	int32_t t78 = 28394;

	t78 = (((x361<x362)^x363)+x364);

	if (t78 != 32766) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x375 = INT8_MAX;
	volatile int32_t t79 = 9000;

	t79 = (((x373<x374)^x375)+x376);

	if (t79 != 116) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = 0;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MIN;

	t80 = (((x377<x378)^x379)+x380);

	if (t80 != -257) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x381 = 0U;
	uint8_t x383 = 63U;
	volatile int64_t x384 = 8375475LL;
	volatile int64_t t81 = 35650361284461LL;

	t81 = (((x381<x382)^x383)+x384);

	if (t81 != 8375538LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = INT32_MIN;
	static int8_t x387 = INT8_MIN;
	static volatile int8_t x388 = INT8_MAX;
	volatile int32_t t82 = 888701;

	t82 = (((x385<x386)^x387)+x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x389 = INT8_MAX;
	int32_t x391 = -1;
	int64_t x392 = -1LL;
	int64_t t83 = -3895109458514LL;

	t83 = (((x389<x390)^x391)+x392);

	if (t83 != -3LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = INT8_MIN;
	volatile int16_t x394 = 560;
	static int8_t x395 = 16;
	volatile uint16_t x396 = UINT16_MAX;
	int32_t t84 = -5187;

	t84 = (((x393<x394)^x395)+x396);

	if (t84 != 65552) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x397 = INT64_MIN;
	int32_t x398 = 5515;
	uint8_t x399 = 2U;
	uint16_t x400 = 7U;
	volatile int32_t t85 = 1826949;

	t85 = (((x397<x398)^x399)+x400);

	if (t85 != 10) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x401 = INT32_MIN;
	int64_t x402 = -1LL;
	static int64_t x403 = -536279038861LL;
	int32_t x404 = -10959060;

	t86 = (((x401<x402)^x403)+x404);

	if (t86 != -536289997922LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MAX;
	int64_t x407 = -1LL;
	static uint16_t x408 = UINT16_MAX;
	volatile int64_t t87 = 267161797993075LL;

	t87 = (((x405<x406)^x407)+x408);

	if (t87 != 65534LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x410 = -1;
	uint8_t x411 = 114U;
	int64_t x412 = -1LL;
	volatile int64_t t88 = -4106723LL;

	t88 = (((x409<x410)^x411)+x412);

	if (t88 != 113LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = INT64_MIN;
	uint16_t x415 = 47U;
	int8_t x416 = INT8_MAX;
	volatile int32_t t89 = 1;

	t89 = (((x413<x414)^x415)+x416);

	if (t89 != 173) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x424 = INT8_MIN;
	int32_t t90 = 313;

	t90 = (((x421<x422)^x423)+x424);

	if (t90 != -162797) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x426 = 30U;
	static uint16_t x427 = 6389U;
	volatile uint16_t x428 = 3502U;
	volatile int32_t t91 = 57615;

	t91 = (((x425<x426)^x427)+x428);

	if (t91 != 9890) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = UINT32_MAX;
	static int8_t x430 = INT8_MAX;
	uint32_t x431 = UINT32_MAX;
	uint32_t t92 = 73U;

	t92 = (((x429<x430)^x431)+x432);

	if (t92 != 13U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x433 = 149U;
	int8_t x434 = INT8_MIN;
	volatile int16_t x435 = -1;
	int32_t t93 = 261;

	t93 = (((x433<x434)^x435)+x436);

	if (t93 != 65533) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x438 = INT32_MAX;
	volatile int8_t x439 = INT8_MIN;
	static uint64_t x440 = 0LLU;
	volatile uint64_t t94 = 274LLU;

	t94 = (((x437<x438)^x439)+x440);

	if (t94 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x441 = UINT8_MAX;
	volatile uint8_t x442 = UINT8_MAX;
	int8_t x443 = -3;
	volatile uint64_t t95 = 58162LLU;

	t95 = (((x441<x442)^x443)+x444);

	if (t95 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x445 = -1;
	volatile int8_t x446 = INT8_MAX;
	int64_t x447 = INT64_MIN;
	int8_t x448 = 0;
	static int64_t t96 = -30391423560LL;

	t96 = (((x445<x446)^x447)+x448);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x452 = 319881955;
	volatile int64_t t97 = -2353684754LL;

	t97 = (((x449<x450)^x451)+x452);

	if (t97 != -9223372036534893853LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x453 = 1;
	static volatile uint16_t x455 = 18715U;
	int8_t x456 = INT8_MIN;
	int32_t t98 = -3;

	t98 = (((x453<x454)^x455)+x456);

	if (t98 != 18587) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x457 = -5LL;
	uint32_t x458 = UINT32_MAX;
	uint8_t x459 = 5U;
	int64_t t99 = 2LL;

	t99 = (((x457<x458)^x459)+x460);

	if (t99 != -15940570191497823LL) { NG(); } else { ; }
	
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

