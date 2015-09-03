#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -44840;
int64_t x13 = -1LL;
uint8_t x17 = 1U;
int64_t x18 = INT64_MAX;
volatile int32_t t4 = 61926;
static int64_t x36 = INT64_MIN;
uint64_t x37 = 1LLU;
int8_t x39 = INT8_MAX;
int32_t t9 = 480138015;
int16_t x42 = -449;
int64_t x46 = -29074779954LL;
static volatile int16_t x49 = -8;
int64_t x51 = 1580186616357106123LL;
int64_t x54 = -1LL;
static volatile uint8_t x55 = UINT8_MAX;
static int8_t x61 = INT8_MIN;
static int32_t t15 = -7;
volatile int64_t x67 = 234197781066369LL;
static int64_t x68 = INT64_MIN;
uint32_t x69 = 19475U;
volatile uint32_t x77 = 6530U;
static int16_t x79 = 37;
int16_t x82 = -7420;
volatile int32_t t20 = 202;
int8_t x86 = INT8_MIN;
int32_t t21 = 30;
volatile int16_t x89 = INT16_MIN;
int64_t x93 = -1LL;
volatile uint64_t x96 = 23LLU;
static volatile int32_t t27 = -679809498;
volatile int32_t t28 = 105;
int16_t x117 = 13;
int64_t x118 = -585163844962332LL;
static int16_t x131 = -1;
uint64_t x134 = UINT64_MAX;
uint8_t x135 = UINT8_MAX;
volatile int64_t x138 = -1089650746259708LL;
int32_t x141 = INT32_MIN;
volatile int32_t t35 = 1;
int16_t x146 = INT16_MIN;
static int64_t x152 = INT64_MIN;
uint32_t x156 = UINT32_MAX;
int32_t t39 = -9;
int32_t x166 = 1866;
int16_t x167 = INT16_MAX;
static uint32_t x168 = 2326796U;
int64_t x170 = INT64_MIN;
volatile uint16_t x179 = 27879U;
static uint64_t x181 = 46425448LLU;
volatile uint8_t x183 = 3U;
int32_t x189 = -392;
volatile int32_t t49 = 784;
int64_t x201 = 9808656523LL;
int64_t x208 = -2123032768964121773LL;
int32_t t51 = 773012415;
int8_t x213 = INT8_MIN;
int32_t x218 = 44;
volatile int32_t x219 = INT32_MAX;
volatile uint32_t x222 = 5265246U;
int16_t x229 = -1;
uint16_t x230 = UINT16_MAX;
int16_t x235 = INT16_MIN;
static int32_t t60 = -1587387;
int8_t x246 = INT8_MIN;
uint64_t x247 = 7728205366572LLU;
static uint16_t x253 = 486U;
volatile uint64_t x257 = UINT64_MAX;
static volatile int32_t t64 = 10;
int16_t x263 = -1;
int32_t x266 = 119255;
uint16_t x267 = 30U;
static int64_t x268 = 2LL;
volatile int32_t t66 = 47498;
static volatile uint16_t x279 = 5747U;
int32_t x281 = INT32_MAX;
int32_t x283 = -4014516;
volatile int32_t t70 = 109;
volatile uint32_t x285 = UINT32_MAX;
int16_t x288 = INT16_MAX;
int32_t x301 = -308543;
int32_t x307 = INT32_MIN;
static uint16_t x308 = UINT16_MAX;
volatile uint64_t x316 = 640LLU;
int32_t t79 = 0;
int32_t t82 = 2130;
static int8_t x348 = -3;
int64_t x349 = 3223063598LL;
int32_t t95 = 5271030;
uint32_t x387 = UINT32_MAX;
volatile uint64_t x390 = UINT64_MAX;
int8_t x391 = INT8_MIN;
volatile int32_t t97 = 0;
int64_t x395 = -3200262088060189835LL;
int32_t t98 = -3416;


void f0(void) {
	int16_t x1 = 290;
	volatile uint8_t x2 = UINT8_MAX;
	static int64_t x3 = INT64_MIN;
	static uint16_t x4 = 4058U;

	t0 = ((x1<x2)>>(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	int16_t x6 = -1;
	uint64_t x7 = 235803130206001374LLU;
	int32_t x8 = 0;
	int32_t t1 = -123338;

	t1 = ((x5<x6)>>(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	volatile int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = 2335U;
	volatile int32_t t2 = -1;

	t2 = ((x9<x10)>>(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 60U;
	volatile int32_t x15 = INT32_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 834284;

	t3 = ((x13<x14)>>(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MAX;
	volatile int8_t x20 = INT8_MIN;

	t4 = ((x17<x18)>>(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = 0;
	volatile int32_t x22 = INT32_MIN;
	volatile int64_t x23 = INT64_MIN;
	int16_t x24 = 2;
	static volatile int32_t t5 = -482;

	t5 = ((x21<x22)>>(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	static int32_t x27 = -1;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 211913;

	t6 = ((x25<x26)>>(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	int64_t x30 = -1LL;
	int32_t x31 = INT32_MIN;
	static int32_t x32 = -1;
	volatile int32_t t7 = 11;

	t7 = ((x29<x30)>>(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	uint16_t x34 = UINT16_MAX;
	volatile int16_t x35 = INT16_MIN;
	int32_t t8 = 44;

	t8 = ((x33<x34)>>(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x38 = 326U;
	int16_t x40 = INT16_MAX;

	t9 = ((x37<x38)>>(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 96604U;
	uint16_t x43 = 248U;
	int8_t x44 = -8;
	static volatile int32_t t10 = 805509255;

	t10 = ((x41<x42)>>(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	volatile int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = 30;

	t11 = ((x45<x46)>>(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int8_t x52 = 1;
	int32_t t12 = 452517517;

	t12 = ((x49<x50)>>(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -13975;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = 4668187;

	t13 = ((x53<x54)>>(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MAX;
	static int16_t x59 = INT16_MIN;
	int64_t x60 = 157342946569407726LL;
	int32_t t14 = -26637;

	t14 = ((x57<x58)>>(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x62 = UINT64_MAX;
	int8_t x63 = 20;
	int64_t x64 = INT64_MIN;

	t15 = ((x61<x62)>>(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 9U;
	int16_t x66 = INT16_MIN;
	volatile int32_t t16 = -2675845;

	t16 = ((x65<x66)>>(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 43U;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t17 = -24171596;

	t17 = ((x69<x70)>>(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 3U;
	static volatile int16_t x74 = INT16_MIN;
	int16_t x75 = 3;
	int8_t x76 = INT8_MIN;
	static int32_t t18 = 5657867;

	t18 = ((x73<x74)>>(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x78 = 458659LLU;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 4168668;

	t19 = ((x77<x78)>>(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int32_t x83 = -741161289;
	static int8_t x84 = 6;

	t20 = ((x81<x82)>>(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	volatile int16_t x87 = -1;
	int32_t x88 = INT32_MIN;

	t21 = ((x85<x86)>>(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x90 = INT8_MIN;
	uint32_t x91 = 14159U;
	static uint64_t x92 = 5593499LLU;
	int32_t t22 = -222163;

	t22 = ((x89<x90)>>(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -5;
	uint8_t x95 = UINT8_MAX;
	int32_t t23 = 36424;

	t23 = ((x93<x94)>>(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 10U;
	static volatile int32_t x98 = 0;
	volatile uint16_t x99 = 119U;
	volatile uint64_t x100 = 53349866802LLU;
	int32_t t24 = 3292269;

	t24 = ((x97<x98)>>(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 5U;
	volatile uint16_t x102 = 38U;
	static volatile int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MIN;
	static int32_t t25 = 3320113;

	t25 = ((x101<x102)>>(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -11;
	int32_t x106 = -15;
	int64_t x107 = 2033993453647402730LL;
	static uint16_t x108 = 142U;
	static int32_t t26 = -13632;

	t26 = ((x105<x106)>>(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = INT8_MIN;
	volatile int32_t x112 = INT32_MAX;

	t27 = ((x109<x110)>>(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -160;
	volatile int16_t x114 = INT16_MAX;
	static uint64_t x115 = 45572296LLU;
	volatile int8_t x116 = -1;

	t28 = ((x113<x114)>>(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x119 = -1;
	int64_t x120 = 1LL;
	volatile int32_t t29 = 3165065;

	t29 = ((x117<x118)>>(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	uint8_t x122 = 14U;
	int32_t x123 = 6895;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 19857;

	t30 = ((x121<x122)>>(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	int32_t x126 = INT32_MIN;
	volatile int8_t x127 = 1;
	uint8_t x128 = 51U;
	static volatile int32_t t31 = 7;

	t31 = ((x125<x126)>>(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int8_t x130 = -1;
	uint32_t x132 = 27U;
	int32_t t32 = 429;

	t32 = ((x129<x130)>>(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 0U;
	uint8_t x136 = 12U;
	volatile int32_t t33 = 72997;

	t33 = ((x133<x134)>>(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 1433U;
	int8_t x139 = INT8_MAX;
	uint16_t x140 = 61U;
	int32_t t34 = -7572;

	t34 = ((x137<x138)>>(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -223067234;
	static uint8_t x143 = UINT8_MAX;
	uint16_t x144 = UINT16_MAX;

	t35 = ((x141<x142)>>(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	int64_t x147 = -1LL;
	static int64_t x148 = INT64_MIN;
	volatile int32_t t36 = -20379;

	t36 = ((x145<x146)>>(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 0U;
	uint16_t x150 = 26U;
	static int32_t x151 = -1;
	static int32_t t37 = -15;

	t37 = ((x149<x150)>>(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = UINT16_MAX;
	int64_t x154 = 16992346244LL;
	int8_t x155 = INT8_MIN;
	volatile int32_t t38 = -4756;

	t38 = ((x153<x154)>>(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 3977355U;
	static volatile int64_t x158 = INT64_MIN;
	static int64_t x159 = 45529LL;
	uint16_t x160 = 4527U;

	t39 = ((x157<x158)>>(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = 0U;
	int64_t x162 = 17565841622LL;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = 2707;
	int32_t t40 = -59947186;

	t40 = ((x161<x162)>>(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 9143830LLU;
	static volatile int32_t t41 = 965;

	t41 = ((x165<x166)>>(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 2LL;
	volatile uint8_t x171 = 5U;
	int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 1;

	t42 = ((x169<x170)>>(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 4U;
	int32_t x174 = INT32_MIN;
	volatile int32_t x175 = INT32_MAX;
	static int8_t x176 = -1;
	volatile int32_t t43 = -19;

	t43 = ((x173<x174)>>(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	volatile int64_t x178 = INT64_MIN;
	volatile uint64_t x180 = 1957946128LLU;
	volatile int32_t t44 = 16954;

	t44 = ((x177<x178)>>(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x182 = 3U;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -19865;

	t45 = ((x181<x182)>>(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 2U;
	static uint64_t x186 = 3318LLU;
	uint64_t x187 = 15919849LLU;
	int8_t x188 = -1;
	volatile int32_t t46 = 21084;

	t46 = ((x185<x186)>>(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = 3U;
	uint8_t x191 = 1U;
	int64_t x192 = -68647850LL;
	volatile int32_t t47 = 1079;

	t47 = ((x189<x190)>>(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 523767LLU;
	int32_t x194 = INT32_MAX;
	int64_t x195 = 10391LL;
	volatile int64_t x196 = INT64_MAX;
	int32_t t48 = -5;

	t48 = ((x193<x194)>>(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MAX;
	static int32_t x198 = INT32_MIN;
	volatile int8_t x199 = -13;
	static int32_t x200 = -385;

	t49 = ((x197<x198)>>(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x202 = 10LL;
	volatile int8_t x203 = -1;
	volatile int64_t x204 = -1LL;
	volatile int32_t t50 = -2430883;

	t50 = ((x201<x202)>>(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = -1;

	t51 = ((x205<x206)>>(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MAX;
	volatile int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MAX;
	int32_t t52 = 375623;

	t52 = ((x209<x210)>>(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MIN;
	uint32_t x215 = 1909839953U;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -323133;

	t53 = ((x213<x214)>>(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	uint8_t x220 = 2U;
	int32_t t54 = -263365784;

	t54 = ((x217<x218)>>(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -115;
	static uint8_t x223 = 9U;
	int32_t x224 = 228914033;
	volatile int32_t t55 = 1575;

	t55 = ((x221<x222)>>(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 25U;
	uint32_t x226 = 14981U;
	static int16_t x227 = INT16_MAX;
	volatile uint64_t x228 = 2964033LLU;
	volatile int32_t t56 = 1;

	t56 = ((x225<x226)>>(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x231 = 3334235668LLU;
	volatile int32_t x232 = -1;
	static volatile int32_t t57 = 128246402;

	t57 = ((x229<x230)>>(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	static int32_t x236 = INT32_MIN;
	static int32_t t58 = -1;

	t58 = ((x233<x234)>>(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x237 = -1571576071996721LL;
	uint32_t x238 = 20038312U;
	uint16_t x239 = UINT16_MAX;
	int64_t x240 = INT64_MIN;
	volatile int32_t t59 = -5487;

	t59 = ((x237<x238)>>(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -3557;
	volatile int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	static volatile int8_t x244 = 0;

	t60 = ((x241<x242)>>(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 95LLU;
	int16_t x248 = -1;
	int32_t t61 = 17679;

	t61 = ((x245<x246)>>(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 92;
	volatile int64_t x250 = INT64_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile int64_t x252 = -1LL;
	int32_t t62 = 128004;

	t62 = ((x249<x250)>>(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = 3;
	static int32_t x255 = 2312973;
	int8_t x256 = -1;
	int32_t t63 = 15659736;

	t63 = ((x253<x254)>>(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = 79U;
	static int8_t x259 = INT8_MIN;
	uint32_t x260 = UINT32_MAX;

	t64 = ((x257<x258)>>(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -413LL;
	volatile int64_t x262 = INT64_MIN;
	int32_t x264 = -193814;
	int32_t t65 = 3031147;

	t65 = ((x261<x262)>>(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MIN;

	t66 = ((x265<x266)>>(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = -22;
	volatile uint16_t x270 = 31U;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = INT16_MIN;
	static int32_t t67 = -4742;

	t67 = ((x269<x270)>>(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 668LL;
	int32_t x274 = INT32_MAX;
	static uint8_t x275 = 10U;
	volatile uint32_t x276 = 940175489U;
	int32_t t68 = -705;

	t68 = ((x273<x274)>>(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 46;
	int32_t x278 = -2;
	int64_t x280 = INT64_MIN;
	static volatile int32_t t69 = 49;

	t69 = ((x277<x278)>>(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = UINT8_MAX;
	uint64_t x284 = UINT64_MAX;

	t70 = ((x281<x282)>>(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x286 = -1;
	int64_t x287 = INT64_MIN;
	volatile int32_t t71 = 3;

	t71 = ((x285<x286)>>(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 24U;
	volatile int16_t x290 = INT16_MIN;
	volatile uint16_t x291 = 9U;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = -649;

	t72 = ((x289<x290)>>(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 15LLU;
	uint16_t x294 = 2U;
	int32_t x295 = -1;
	static int32_t x296 = INT32_MIN;
	static int32_t t73 = -5;

	t73 = ((x293<x294)>>(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = 380925441987162LLU;
	static volatile uint64_t x298 = UINT64_MAX;
	int8_t x299 = -52;
	static int16_t x300 = -1;
	int32_t t74 = -18840337;

	t74 = ((x297<x298)>>(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x302 = UINT16_MAX;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = INT64_MAX;
	volatile int32_t t75 = 32159814;

	t75 = ((x301<x302)>>(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = UINT32_MAX;
	static int64_t x306 = 1LL;
	int32_t t76 = -248;

	t76 = ((x305<x306)>>(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x309 = INT64_MIN;
	volatile int32_t x310 = -48096;
	int64_t x311 = -1LL;
	uint8_t x312 = 95U;
	int32_t t77 = 671443323;

	t77 = ((x309<x310)>>(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x314 = 137921U;
	uint64_t x315 = 304550168689634LLU;
	volatile int32_t t78 = 27634617;

	t78 = ((x313<x314)>>(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MAX;
	volatile uint16_t x318 = UINT16_MAX;
	int32_t x319 = INT32_MAX;
	int8_t x320 = INT8_MIN;

	t79 = ((x317<x318)>>(x319<=x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	uint64_t x322 = 35LLU;
	int32_t x323 = -177;
	uint64_t x324 = 255723LLU;
	static int32_t t80 = 242;

	t80 = ((x321<x322)>>(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 8U;
	uint8_t x326 = 13U;
	static int64_t x327 = 330413217LL;
	static volatile int32_t x328 = 1442198;
	volatile int32_t t81 = -387357322;

	t81 = ((x325<x326)>>(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = 0U;
	int64_t x330 = INT64_MIN;
	volatile int8_t x331 = INT8_MAX;
	static int8_t x332 = INT8_MIN;

	t82 = ((x329<x330)>>(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	static int8_t x334 = INT8_MIN;
	uint8_t x335 = 84U;
	uint8_t x336 = UINT8_MAX;
	static int32_t t83 = -184000;

	t83 = ((x333<x334)>>(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = 2274313766059333492LL;
	uint32_t x339 = 473412U;
	int64_t x340 = 274342904LL;
	int32_t t84 = -181715;

	t84 = ((x337<x338)>>(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -1;
	static volatile uint64_t x342 = 57754103391827LLU;
	int8_t x343 = 3;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = 1569492;

	t85 = ((x341<x342)>>(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x345 = UINT32_MAX;
	int64_t x346 = 3854445236649LL;
	uint16_t x347 = 1U;
	volatile int32_t t86 = 104;

	t86 = ((x345<x346)>>(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x350 = 8058U;
	int64_t x351 = -116575145LL;
	static uint64_t x352 = 7409LLU;
	static int32_t t87 = 111652599;

	t87 = ((x349<x350)>>(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 109732LL;
	static int32_t x354 = INT32_MIN;
	volatile int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -3;

	t88 = ((x353<x354)>>(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 13LLU;
	static int8_t x358 = 61;
	volatile int32_t x359 = 867134112;
	static volatile int16_t x360 = 31;
	volatile int32_t t89 = -1;

	t89 = ((x357<x358)>>(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 543U;
	uint8_t x362 = UINT8_MAX;
	uint64_t x363 = 2024540845011LLU;
	int8_t x364 = INT8_MAX;
	volatile int32_t t90 = -862909368;

	t90 = ((x361<x362)>>(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -20;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = UINT8_MAX;
	volatile uint64_t x368 = UINT64_MAX;
	volatile int32_t t91 = 0;

	t91 = ((x365<x366)>>(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = 202;
	static int32_t x370 = -1;
	uint32_t x371 = 84058U;
	uint32_t x372 = 3542661U;
	int32_t t92 = 11013;

	t92 = ((x369<x370)>>(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	volatile uint64_t x374 = UINT64_MAX;
	int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;
	volatile int32_t t93 = -82;

	t93 = ((x373<x374)>>(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = 61LLU;
	int64_t x378 = INT64_MIN;
	int16_t x379 = 0;
	int8_t x380 = -1;
	int32_t t94 = -4994;

	t94 = ((x377<x378)>>(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1348004;
	int32_t x382 = -1;
	uint64_t x383 = 3LLU;
	static int32_t x384 = INT32_MIN;

	t95 = ((x381<x382)>>(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	int32_t x386 = INT32_MIN;
	volatile int16_t x388 = INT16_MIN;
	int32_t t96 = -73;

	t96 = ((x385<x386)>>(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = 15974551LL;
	volatile uint8_t x392 = 1U;

	t97 = ((x389<x390)>>(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -188098;
	volatile int16_t x394 = 0;
	volatile uint16_t x396 = UINT16_MAX;

	t98 = ((x393<x394)>>(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	static uint8_t x398 = 1U;
	uint32_t x399 = 116041592U;
	static int32_t x400 = -493392;
	static volatile int32_t t99 = -3;

	t99 = ((x397<x398)>>(x399<=x400));

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

