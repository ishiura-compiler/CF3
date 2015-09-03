#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = INT8_MIN;
uint32_t x4 = 37225U;
static volatile int32_t t1 = 3;
int16_t x17 = INT16_MIN;
int8_t x19 = INT8_MAX;
int32_t x21 = 1632;
int8_t x24 = -8;
static int64_t x25 = INT64_MIN;
static int32_t t9 = 35601;
int16_t x42 = -1;
int8_t x43 = INT8_MAX;
int64_t x44 = -1LL;
static int32_t t10 = 75;
uint16_t x47 = 2690U;
static int32_t x48 = -1;
int32_t x49 = INT32_MIN;
int8_t x50 = INT8_MAX;
volatile uint8_t x59 = UINT8_MAX;
volatile int8_t x62 = -1;
int32_t x69 = INT32_MAX;
static uint64_t x80 = 1973479722024064099LLU;
int32_t x81 = -1;
uint32_t x87 = 7110U;
int32_t t25 = 536;
int16_t x116 = 0;
uint8_t x118 = 0U;
static int32_t t30 = 18031911;
int16_t x127 = 103;
volatile uint16_t x128 = 1356U;
volatile int32_t t31 = -1936722;
uint32_t x130 = 3U;
int8_t x131 = INT8_MIN;
int16_t x146 = 106;
static int64_t x153 = -7LL;
static uint16_t x155 = 1546U;
int64_t x156 = -156685218874990351LL;
volatile int32_t x158 = -245486;
uint16_t x161 = 1160U;
int64_t x162 = -1LL;
uint16_t x168 = 23198U;
int8_t x171 = INT8_MAX;
uint8_t x173 = UINT8_MAX;
int8_t x175 = INT8_MIN;
static int64_t x187 = 204101LL;
uint8_t x200 = 6U;
volatile int64_t x203 = INT64_MIN;
int32_t x204 = -1;
int32_t x208 = -516195;
int32_t t51 = -969358354;
int32_t x218 = INT32_MIN;
int64_t x220 = -1599388LL;
int32_t x237 = INT32_MIN;
int64_t x246 = 54473218181LL;
int8_t x247 = -1;
static uint32_t x259 = 2008U;
uint64_t x262 = UINT64_MAX;
static int8_t x263 = -1;
uint16_t x270 = UINT16_MAX;
int8_t x273 = INT8_MIN;
int32_t x274 = -32556436;
volatile int32_t t68 = 292691;
int16_t x277 = INT16_MIN;
int16_t x281 = INT16_MAX;
int8_t x289 = INT8_MIN;
uint16_t x291 = UINT16_MAX;
volatile int8_t x292 = -42;
int8_t x297 = -1;
uint16_t x301 = 4166U;
int32_t x304 = -265880713;
int64_t x310 = INT64_MIN;
int32_t t77 = 217002;
int16_t x313 = -1;
static int64_t x317 = -19292848194056013LL;
int64_t x328 = INT64_MAX;
static int16_t x330 = INT16_MIN;
int16_t x336 = INT16_MIN;
volatile int32_t t83 = -3321;
volatile int32_t x338 = INT32_MIN;
int8_t x339 = -1;
volatile int32_t t84 = 53;
uint8_t x346 = UINT8_MAX;
volatile int16_t x348 = INT16_MAX;
int32_t t86 = -31;
uint8_t x351 = 34U;
int32_t x352 = 402600;
volatile int8_t x355 = -1;
int32_t x366 = INT32_MIN;
int16_t x371 = -1;
volatile int32_t t92 = -1040563;
int16_t x381 = 5;
static int16_t x382 = INT16_MIN;
int16_t x389 = INT16_MIN;
static uint8_t x392 = UINT8_MAX;
volatile int32_t t97 = 12;
static int8_t x396 = 33;
int16_t x398 = -1;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	static int16_t x2 = INT16_MIN;
	static volatile int32_t t0 = 1211;

	t0 = (x1==((x2==x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 41U;
	int32_t x6 = -287978187;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 8814981119513296868LLU;

	t1 = (x5==((x6==x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	uint8_t x10 = 21U;
	static int16_t x11 = INT16_MIN;
	uint16_t x12 = 27U;
	volatile int32_t t2 = -21886;

	t2 = (x9==((x10==x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static int16_t x14 = INT16_MAX;
	static uint8_t x15 = 5U;
	uint32_t x16 = 721693815U;
	static volatile int32_t t3 = -7556;

	t3 = (x13==((x14==x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = UINT16_MAX;
	static volatile int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -3823081;

	t4 = (x17==((x18==x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	int64_t x23 = 4127370481190541LL;
	volatile int32_t t5 = 2010;

	t5 = (x21==((x22==x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x26 = 17LLU;
	static uint8_t x27 = 0U;
	volatile int16_t x28 = INT16_MIN;
	int32_t t6 = 481;

	t6 = (x25==((x26==x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -493825723;
	int64_t x30 = 9881LL;
	int64_t x31 = -1LL;
	int32_t x32 = 12;
	volatile int32_t t7 = 36364116;

	t7 = (x29==((x30==x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	static int64_t x35 = INT64_MIN;
	int16_t x36 = 30;
	volatile int32_t t8 = 72;

	t8 = (x33==((x34==x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 952448846379301367LL;
	uint64_t x38 = 1LLU;
	uint32_t x39 = 0U;
	int64_t x40 = INT64_MIN;

	t9 = (x37==((x38==x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 548U;

	t10 = (x41==((x42==x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint8_t x46 = 2U;
	static volatile int32_t t11 = 229;

	t11 = (x45==((x46==x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = -9438135;

	t12 = (x49==((x50==x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 182U;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	uint32_t x56 = 8U;
	static int32_t t13 = 116025;

	t13 = (x53==((x54==x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 1477U;
	int32_t x58 = 80;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = 2;

	t14 = (x57==((x58==x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	int16_t x63 = -1;
	uint16_t x64 = 6317U;
	volatile int32_t t15 = 1530956;

	t15 = (x61==((x62==x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = INT32_MAX;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = 38;
	static int32_t t16 = -3;

	t16 = (x65==((x66==x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = UINT64_MAX;
	volatile int8_t x71 = INT8_MIN;
	int32_t x72 = 3;
	static int32_t t17 = -92040;

	t17 = (x69==((x70==x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x73 = UINT16_MAX;
	volatile int32_t x74 = INT32_MIN;
	int32_t x75 = -111;
	static uint8_t x76 = UINT8_MAX;
	int32_t t18 = -133045732;

	t18 = (x73==((x74==x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	int64_t x78 = INT64_MIN;
	int8_t x79 = 1;
	int32_t t19 = 133442180;

	t19 = (x77==((x78==x79)==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MAX;
	volatile int8_t x83 = INT8_MAX;
	volatile int64_t x84 = INT64_MIN;
	int32_t t20 = 4605;

	t20 = (x81==((x82==x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 10U;
	volatile int16_t x86 = -14962;
	int64_t x88 = -854947497LL;
	static volatile int32_t t21 = 271233669;

	t21 = (x85==((x86==x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 366U;
	static uint8_t x90 = UINT8_MAX;
	int64_t x91 = -1802629152190255LL;
	int32_t x92 = INT32_MIN;
	static volatile int32_t t22 = -82;

	t22 = (x89==((x90==x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MAX;
	volatile int8_t x95 = -1;
	static int32_t x96 = INT32_MIN;
	static int32_t t23 = -17;

	t23 = (x93==((x94==x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 3133U;
	int64_t x98 = INT64_MIN;
	static volatile uint16_t x99 = 6772U;
	uint32_t x100 = 1888U;
	int32_t t24 = 1;

	t24 = (x97==((x98==x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	volatile int32_t x102 = INT32_MAX;
	int16_t x103 = 52;
	int16_t x104 = INT16_MIN;

	t25 = (x101==((x102==x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MAX;
	uint16_t x106 = UINT16_MAX;
	static int16_t x107 = -1841;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = 21746;

	t26 = (x105==((x106==x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	uint8_t x110 = 17U;
	uint32_t x111 = 5753U;
	int16_t x112 = INT16_MIN;
	static int32_t t27 = -3036;

	t27 = (x109==((x110==x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 0;
	uint32_t x114 = 72615U;
	static uint64_t x115 = UINT64_MAX;
	int32_t t28 = -4001;

	t28 = (x113==((x114==x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	int64_t x119 = INT64_MAX;
	static int64_t x120 = INT64_MAX;
	int32_t t29 = 1;

	t29 = (x117==((x118==x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	int16_t x124 = -180;

	t30 = (x121==((x122==x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	int8_t x126 = INT8_MAX;

	t31 = (x125==((x126==x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	volatile int16_t x132 = -61;
	int32_t t32 = 10821201;

	t32 = (x129==((x130==x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 16;
	int8_t x134 = INT8_MIN;
	static int8_t x135 = -27;
	static int16_t x136 = INT16_MIN;
	static int32_t t33 = -12780226;

	t33 = (x133==((x134==x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	volatile int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MAX;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 268;

	t34 = (x137==((x138==x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	uint32_t x142 = UINT32_MAX;
	uint16_t x143 = UINT16_MAX;
	volatile int64_t x144 = -13590609842242346LL;
	int32_t t35 = -484;

	t35 = (x141==((x142==x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -96;
	static int32_t x147 = -17618;
	int32_t x148 = INT32_MAX;
	static int32_t t36 = -98718629;

	t36 = (x145==((x146==x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -15714;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = 1559U;
	volatile int32_t x152 = -1;
	volatile int32_t t37 = -1;

	t37 = (x149==((x150==x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x154 = 3982420U;
	volatile int32_t t38 = -305;

	t38 = (x153==((x154==x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = UINT32_MAX;
	int32_t x159 = -7474;
	static int16_t x160 = -716;
	static int32_t t39 = 43400662;

	t39 = (x157==((x158==x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x163 = -1;
	uint64_t x164 = UINT64_MAX;
	static volatile int32_t t40 = 9;

	t40 = (x161==((x162==x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -5LL;
	static int32_t x166 = -1;
	int64_t x167 = 0LL;
	static volatile int32_t t41 = -1;

	t41 = (x165==((x166==x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	static volatile int64_t x170 = INT64_MIN;
	uint16_t x172 = 0U;
	static int32_t t42 = -32669414;

	t42 = (x169==((x170==x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x174 = 24U;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 358570;

	t43 = (x173==((x174==x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 3U;
	uint8_t x178 = UINT8_MAX;
	static uint16_t x179 = 7U;
	int16_t x180 = -1;
	volatile int32_t t44 = -4913172;

	t44 = (x177==((x178==x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 14U;
	int64_t x182 = INT64_MIN;
	volatile int16_t x183 = -947;
	static volatile uint32_t x184 = UINT32_MAX;
	volatile int32_t t45 = -10400;

	t45 = (x181==((x182==x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -35565716LL;
	uint64_t x186 = 1612524112724041LLU;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = 64;

	t46 = (x185==((x186==x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 4056;
	static int64_t x190 = -281819364996210340LL;
	volatile int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = -4662095;

	t47 = (x189==((x190==x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MAX;
	volatile int32_t x195 = -1;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 67;

	t48 = (x193==((x194==x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = -59;
	int64_t x198 = -1LL;
	int32_t x199 = -1;
	volatile int32_t t49 = -1033;

	t49 = (x197==((x198==x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -1730534070021285LL;
	uint8_t x202 = UINT8_MAX;
	int32_t t50 = -6029039;

	t50 = (x201==((x202==x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -10;
	int32_t x206 = INT32_MIN;
	volatile uint16_t x207 = UINT16_MAX;

	t51 = (x205==((x206==x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = UINT32_MAX;
	int32_t x210 = -1;
	int16_t x211 = 23;
	uint64_t x212 = 4077LLU;
	static volatile int32_t t52 = 14;

	t52 = (x209==((x210==x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 254197263;
	static volatile int16_t x214 = INT16_MIN;
	static int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 5;

	t53 = (x213==((x214==x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = UINT16_MAX;
	int16_t x219 = INT16_MIN;
	static volatile int32_t t54 = 336;

	t54 = (x217==((x218==x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	static int16_t x222 = -1;
	int32_t x223 = INT32_MIN;
	int64_t x224 = 7LL;
	static int32_t t55 = -4725;

	t55 = (x221==((x222==x223)==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	uint64_t x226 = 2056358724442LLU;
	int32_t x227 = INT32_MIN;
	static uint16_t x228 = 13U;
	int32_t t56 = -7380;

	t56 = (x225==((x226==x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = 881723338304048LL;
	volatile uint16_t x231 = 27U;
	int64_t x232 = INT64_MIN;
	int32_t t57 = -6384;

	t57 = (x229==((x230==x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 1436308634U;
	int64_t x234 = -350685LL;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = INT64_MAX;
	int32_t t58 = 381763169;

	t58 = (x233==((x234==x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;
	volatile uint16_t x239 = 847U;
	static int16_t x240 = -321;
	static volatile int32_t t59 = -2472795;

	t59 = (x237==((x238==x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	int32_t x242 = INT32_MAX;
	int8_t x243 = -11;
	uint64_t x244 = 14990372LLU;
	volatile int32_t t60 = -1;

	t60 = (x241==((x242==x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 14;

	t61 = (x245==((x246==x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = 95293;
	int8_t x250 = 53;
	volatile uint32_t x251 = UINT32_MAX;
	uint16_t x252 = UINT16_MAX;
	static int32_t t62 = 181601;

	t62 = (x249==((x250==x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint64_t x254 = 13975338024953870LLU;
	static volatile uint16_t x255 = 50U;
	int8_t x256 = 0;
	int32_t t63 = -8462;

	t63 = (x253==((x254==x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int32_t x258 = 1956983;
	static uint32_t x260 = 51U;
	static volatile int32_t t64 = -4193664;

	t64 = (x257==((x258==x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -24128156129LL;
	int16_t x264 = INT16_MIN;
	int32_t t65 = -11;

	t65 = (x261==((x262==x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 521813529682LLU;
	int32_t x266 = INT32_MIN;
	uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MIN;
	static int32_t t66 = -1173;

	t66 = (x265==((x266==x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = 25;
	int8_t x271 = INT8_MAX;
	int64_t x272 = -1509LL;
	volatile int32_t t67 = -552380;

	t67 = (x269==((x270==x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x275 = -1;
	int32_t x276 = 1746;

	t68 = (x273==((x274==x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x278 = INT8_MIN;
	int32_t x279 = 39;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = 28;

	t69 = (x277==((x278==x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	static int64_t x283 = -291178950LL;
	int16_t x284 = INT16_MAX;
	int32_t t70 = -70;

	t70 = (x281==((x282==x283)==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile int8_t x286 = INT8_MAX;
	static int32_t x287 = INT32_MAX;
	int8_t x288 = INT8_MAX;
	volatile int32_t t71 = -118;

	t71 = (x285==((x286==x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = 3;
	int32_t t72 = -71906987;

	t72 = (x289==((x290==x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 1234572U;
	int16_t x294 = INT16_MIN;
	volatile int64_t x295 = INT64_MAX;
	uint64_t x296 = 35163803891243LLU;
	volatile int32_t t73 = 26445313;

	t73 = (x293==((x294==x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	static int32_t x300 = -1;
	volatile int32_t t74 = -200266;

	t74 = (x297==((x298==x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -1;
	uint16_t x303 = 24642U;
	static int32_t t75 = -12;

	t75 = (x301==((x302==x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 1U;
	uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MAX;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = 4113436;

	t76 = (x305==((x306==x307)==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int32_t x311 = -1;
	uint32_t x312 = 3U;

	t77 = (x309==((x310==x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x314 = INT8_MIN;
	int16_t x315 = -1;
	int64_t x316 = INT64_MAX;
	volatile int32_t t78 = 737856756;

	t78 = (x313==((x314==x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x318 = UINT64_MAX;
	int16_t x319 = 274;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t79 = -13249439;

	t79 = (x317==((x318==x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	static uint16_t x322 = UINT16_MAX;
	int64_t x323 = -1LL;
	uint64_t x324 = UINT64_MAX;
	static int32_t t80 = 2996045;

	t80 = (x321==((x322==x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = 12686;
	uint16_t x326 = UINT16_MAX;
	static int32_t x327 = 322687132;
	volatile int32_t t81 = 33;

	t81 = (x325==((x326==x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x331 = -1066497357081745323LL;
	uint8_t x332 = 27U;
	int32_t t82 = 24438645;

	t82 = (x329==((x330==x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 24LLU;
	int32_t x334 = INT32_MIN;
	int64_t x335 = -200275LL;

	t83 = (x333==((x334==x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -2;
	volatile int64_t x340 = -213LL;

	t84 = (x337==((x338==x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 66U;
	volatile int16_t x342 = 6;
	volatile int16_t x343 = INT16_MIN;
	static uint32_t x344 = UINT32_MAX;
	int32_t t85 = -247;

	t85 = (x341==((x342==x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -3;
	volatile int16_t x347 = INT16_MIN;

	t86 = (x345==((x346==x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = 3727766018721642LL;
	volatile int32_t t87 = -88435399;

	t87 = (x349==((x350==x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -1;
	int8_t x354 = 7;
	static int64_t x356 = INT64_MAX;
	static volatile int32_t t88 = -1;

	t88 = (x353==((x354==x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	static int32_t x358 = INT32_MIN;
	static uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = 61438118;

	t89 = (x357==((x358==x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -30;
	int16_t x362 = -1;
	int64_t x363 = -36LL;
	volatile int8_t x364 = 10;
	volatile int32_t t90 = 126688;

	t90 = (x361==((x362==x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = 13;
	volatile int64_t x367 = INT64_MAX;
	static uint64_t x368 = 9044LLU;
	int32_t t91 = 105;

	t91 = (x365==((x366==x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = -1LL;
	volatile uint16_t x370 = 11769U;
	int64_t x372 = INT64_MAX;

	t92 = (x369==((x370==x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	uint64_t x374 = 1774619059LLU;
	int32_t x375 = -1;
	int32_t x376 = -1;
	int32_t t93 = -1;

	t93 = (x373==((x374==x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = 3725;
	static int64_t x378 = INT64_MIN;
	uint8_t x379 = UINT8_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t94 = -1;

	t94 = (x377==((x378==x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x383 = INT8_MIN;
	uint32_t x384 = 2U;
	int32_t t95 = 234868;

	t95 = (x381==((x382==x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	volatile int8_t x386 = -14;
	static int32_t x387 = INT32_MAX;
	static volatile uint8_t x388 = 123U;
	int32_t t96 = 228478074;

	t96 = (x385==((x386==x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x390 = INT16_MIN;
	uint64_t x391 = 34163LLU;

	t97 = (x389==((x390==x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -39064205;
	uint8_t x394 = UINT8_MAX;
	uint8_t x395 = 4U;
	volatile int32_t t98 = -81;

	t98 = (x393==((x394==x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1104762352728203LL;
	uint64_t x399 = UINT64_MAX;
	static volatile int32_t x400 = INT32_MAX;
	volatile int32_t t99 = -142;

	t99 = (x397==((x398==x399)==x400));

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

