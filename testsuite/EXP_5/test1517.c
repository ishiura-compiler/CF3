#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 3531825806747999LLU;
int32_t x8 = 93;
uint32_t x16 = 10728312U;
volatile int32_t t3 = 12;
volatile int32_t t6 = 6246288;
int32_t x33 = -1;
int32_t t8 = 71289;
int32_t x39 = -1;
int32_t t10 = 123942;
uint8_t x50 = 102U;
int16_t x59 = INT16_MIN;
static volatile uint32_t x62 = 62627U;
volatile int32_t t15 = 17;
static volatile uint8_t x65 = UINT8_MAX;
static volatile int16_t x69 = -1;
volatile int32_t t18 = -898756144;
volatile int32_t t19 = 103913450;
int32_t x95 = INT32_MIN;
static int32_t x101 = -1;
int8_t x102 = INT8_MIN;
uint16_t x104 = 19U;
static int16_t x105 = INT16_MIN;
int16_t x106 = INT16_MIN;
uint8_t x120 = 19U;
static uint32_t x121 = 4037U;
int32_t x127 = INT32_MIN;
int32_t x134 = -407;
int32_t t33 = -12;
volatile int16_t x137 = INT16_MIN;
static uint32_t x146 = 173083U;
int32_t x155 = INT32_MIN;
int8_t x156 = 2;
static int32_t t38 = -195;
volatile int32_t x158 = 51878;
volatile int16_t x172 = 0;
int8_t x179 = -43;
int32_t t44 = -533;
uint8_t x183 = UINT8_MAX;
int32_t x184 = INT32_MAX;
static int64_t x189 = INT64_MIN;
int64_t x204 = INT64_MIN;
static int16_t x209 = -1;
uint64_t x211 = 7955512085LLU;
int8_t x223 = -11;
int32_t t55 = -2619061;
int8_t x228 = -1;
volatile int32_t x231 = INT32_MAX;
int8_t x236 = INT8_MIN;
static uint64_t x239 = UINT64_MAX;
int32_t x241 = -49720;
volatile int32_t t60 = -981;
static uint64_t x245 = 12721LLU;
volatile uint64_t x247 = 1012LLU;
uint32_t x248 = 14U;
int64_t x252 = INT64_MIN;
int16_t x255 = -1;
volatile int32_t t63 = 69;
int16_t x258 = INT16_MIN;
int32_t t64 = 11;
int8_t x263 = INT8_MIN;
volatile int32_t x269 = INT32_MIN;
int32_t x282 = INT32_MIN;
static uint64_t x284 = 59476412177228LLU;
volatile int32_t t71 = -243869;
uint16_t x310 = 2U;
uint32_t x311 = 53U;
int32_t t77 = -1;
static uint8_t x314 = 19U;
static int64_t x315 = INT64_MAX;
static volatile int32_t t78 = -88;
int32_t t79 = -460744704;
int32_t t80 = -14217;
int8_t x325 = INT8_MIN;
int64_t x336 = 4010214LL;
static uint64_t x339 = 5391293059156523281LLU;
volatile int32_t t86 = 114;
static int8_t x355 = 0;
int64_t x358 = INT64_MIN;
static uint64_t x365 = 1047LLU;
int32_t t91 = -6674;
int16_t x371 = -4;
int32_t x372 = INT32_MAX;
uint64_t x377 = 16968441323362047LLU;
static int8_t x380 = INT8_MAX;
uint16_t x383 = 1117U;
int32_t t95 = 441951;
int64_t x392 = 623411862765982LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x2 = -4656LL;
	volatile uint32_t x3 = 3U;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 2090649;

	t0 = (x1<((x2<x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MIN;
	volatile int32_t t1 = 6;

	t1 = (x5<((x6<x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	int32_t x11 = 11635131;
	volatile int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -1;

	t2 = (x9<((x10<x11)^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 3;
	uint32_t x14 = 3844U;
	uint32_t x15 = 77U;

	t3 = (x13<((x14<x15)^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile int16_t x18 = INT16_MIN;
	int8_t x19 = -12;
	volatile int64_t x20 = INT64_MIN;
	int32_t t4 = -11232472;

	t4 = (x17<((x18<x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -22;
	int16_t x22 = INT16_MAX;
	int8_t x23 = -1;
	int16_t x24 = -1;
	int32_t t5 = -185506;

	t5 = (x21<((x22<x23)^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -252830;
	int8_t x26 = INT8_MAX;
	int32_t x27 = INT32_MIN;
	volatile int32_t x28 = INT32_MIN;

	t6 = (x25<((x26<x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -25;
	static int16_t x30 = INT16_MAX;
	int64_t x31 = -3LL;
	int16_t x32 = -1;
	int32_t t7 = -389828;

	t7 = (x29<((x30<x31)^x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 211;
	static int32_t x35 = INT32_MIN;
	uint8_t x36 = UINT8_MAX;

	t8 = (x33<((x34<x35)^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 13U;
	uint8_t x38 = 1U;
	int8_t x40 = 1;
	static int32_t t9 = 10296295;

	t9 = (x37<((x38<x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint64_t x42 = 88911311879676429LLU;
	int16_t x43 = INT16_MAX;
	static uint16_t x44 = 0U;

	t10 = (x41<((x42<x43)^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 1U;
	int64_t x46 = -11LL;
	volatile uint64_t x47 = 350458822381LLU;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 501837500;

	t11 = (x45<((x46<x47)^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -9760LL;
	volatile int64_t x51 = INT64_MIN;
	int8_t x52 = INT8_MAX;
	volatile int32_t t12 = 2;

	t12 = (x49<((x50<x51)^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 190U;
	volatile uint8_t x54 = 75U;
	volatile uint32_t x55 = UINT32_MAX;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -1;

	t13 = (x53<((x54<x55)^x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -176920;
	int16_t x58 = -1;
	uint32_t x60 = 427029U;
	int32_t t14 = -7024582;

	t14 = (x57<((x58<x59)^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	int32_t x63 = INT32_MAX;
	int64_t x64 = -19LL;

	t15 = (x61<((x62<x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MAX;
	static int64_t x67 = INT64_MIN;
	volatile int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 2798;

	t16 = (x65<((x66<x67)^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = 1U;
	int8_t x71 = INT8_MIN;
	static int32_t x72 = 1797;
	volatile int32_t t17 = 2002457;

	t17 = (x69<((x70<x71)^x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 6158591U;
	uint32_t x74 = 12623U;
	static int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MIN;

	t18 = (x73<((x74<x75)^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	volatile int64_t x78 = -1LL;
	uint32_t x79 = 4739U;
	int8_t x80 = -1;

	t19 = (x77<((x78<x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MAX;
	int8_t x83 = INT8_MIN;
	uint8_t x84 = 5U;
	static int32_t t20 = -32361;

	t20 = (x81<((x82<x83)^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = 0;
	int32_t x86 = -410357;
	int32_t x87 = INT32_MIN;
	static uint64_t x88 = 127863938113894118LLU;
	int32_t t21 = 369;

	t21 = (x85<((x86<x87)^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 13615;
	int16_t x90 = 7914;
	int32_t x91 = -53;
	int16_t x92 = INT16_MAX;
	int32_t t22 = -1836;

	t22 = (x89<((x90<x91)^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	volatile uint8_t x94 = 6U;
	static int16_t x96 = -1;
	volatile int32_t t23 = -14980;

	t23 = (x93<((x94<x95)^x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MIN;
	int8_t x100 = -1;
	volatile int32_t t24 = -6805;

	t24 = (x97<((x98<x99)^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x103 = -1;
	int32_t t25 = 46039;

	t25 = (x101<((x102<x103)^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x107 = 3U;
	uint64_t x108 = 118761458799640LLU;
	static volatile int32_t t26 = 683290;

	t26 = (x105<((x106<x107)^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = -85760368;
	uint64_t x110 = 326LLU;
	int8_t x111 = -1;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 1581;

	t27 = (x109<((x110<x111)^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	volatile int64_t x114 = 7283701880085LL;
	static volatile uint32_t x115 = 1481U;
	int16_t x116 = INT16_MIN;
	static int32_t t28 = -109;

	t28 = (x113<((x114<x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 54U;
	int16_t x118 = INT16_MAX;
	int64_t x119 = INT64_MAX;
	volatile int32_t t29 = -23147195;

	t29 = (x117<((x118<x119)^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x122 = 1911475LLU;
	int16_t x123 = INT16_MAX;
	int16_t x124 = INT16_MAX;
	static volatile int32_t t30 = 2;

	t30 = (x121<((x122<x123)^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int64_t x126 = 4122081791319076LL;
	static int32_t x128 = -1;
	volatile int32_t t31 = 232499472;

	t31 = (x125<((x126<x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = 1LLU;
	int16_t x131 = INT16_MIN;
	volatile uint16_t x132 = 0U;
	int32_t t32 = 56547014;

	t32 = (x129<((x130<x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	uint32_t x135 = UINT32_MAX;
	int64_t x136 = 1443133LL;

	t33 = (x133<((x134<x135)^x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x138 = 4;
	int32_t x139 = INT32_MIN;
	uint32_t x140 = 99865898U;
	static volatile int32_t t34 = -284908;

	t34 = (x137<((x138<x139)^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -447;
	uint8_t x142 = UINT8_MAX;
	int16_t x143 = -1;
	volatile int8_t x144 = INT8_MIN;
	int32_t t35 = 2108261;

	t35 = (x141<((x142<x143)^x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int8_t x147 = 2;
	int32_t x148 = -398407;
	volatile int32_t t36 = -1231153;

	t36 = (x145<((x146<x147)^x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	int8_t x150 = INT8_MAX;
	volatile uint8_t x151 = 1U;
	uint64_t x152 = 3231144185257358LLU;
	volatile int32_t t37 = 15850;

	t37 = (x149<((x150<x151)^x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x153 = 1U;
	int64_t x154 = -1LL;

	t38 = (x153<((x154<x155)^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 364U;
	int64_t x159 = 277096982879579LL;
	volatile int16_t x160 = INT16_MIN;
	static int32_t t39 = -255358;

	t39 = (x157<((x158<x159)^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	volatile uint64_t x162 = UINT64_MAX;
	int32_t x163 = INT32_MAX;
	int16_t x164 = 331;
	volatile int32_t t40 = 57;

	t40 = (x161<((x162<x163)^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	uint16_t x166 = 810U;
	int8_t x167 = -1;
	int64_t x168 = -89370721809LL;
	int32_t t41 = 3825;

	t41 = (x165<((x166<x167)^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = UINT64_MAX;
	int64_t x170 = 1856142184201LL;
	static uint16_t x171 = 280U;
	volatile int32_t t42 = 352;

	t42 = (x169<((x170<x171)^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MAX;
	static uint32_t x174 = UINT32_MAX;
	int32_t x175 = -1;
	uint8_t x176 = 10U;
	volatile int32_t t43 = 6042;

	t43 = (x173<((x174<x175)^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint16_t x178 = 0U;
	int8_t x180 = 13;

	t44 = (x177<((x178<x179)^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	volatile int16_t x182 = -14;
	int32_t t45 = -209007;

	t45 = (x181<((x182<x183)^x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -106LL;
	int8_t x186 = -1;
	int32_t x187 = -288554;
	int64_t x188 = INT64_MIN;
	int32_t t46 = 52;

	t46 = (x185<((x186<x187)^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x190 = UINT32_MAX;
	volatile int32_t x191 = INT32_MAX;
	static int64_t x192 = INT64_MAX;
	int32_t t47 = -126745;

	t47 = (x189<((x190<x191)^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	uint16_t x194 = 17318U;
	uint16_t x195 = UINT16_MAX;
	int16_t x196 = INT16_MAX;
	int32_t t48 = -115050302;

	t48 = (x193<((x194<x195)^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	int8_t x198 = -2;
	volatile int64_t x199 = INT64_MIN;
	static volatile int64_t x200 = INT64_MIN;
	int32_t t49 = -21827;

	t49 = (x197<((x198<x199)^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int32_t x202 = INT32_MAX;
	int16_t x203 = INT16_MIN;
	static int32_t t50 = 1057885;

	t50 = (x201<((x202<x203)^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	int8_t x206 = -1;
	int16_t x207 = 9961;
	static int8_t x208 = 1;
	static volatile int32_t t51 = 5009;

	t51 = (x205<((x206<x207)^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = INT64_MIN;
	static int8_t x212 = INT8_MIN;
	int32_t t52 = -4007;

	t52 = (x209<((x210<x211)^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	uint8_t x214 = 13U;
	int8_t x215 = 0;
	int16_t x216 = -1;
	int32_t t53 = -257814624;

	t53 = (x213<((x214<x215)^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	static uint32_t x219 = 1841964764U;
	int32_t x220 = INT32_MAX;
	volatile int32_t t54 = -15676339;

	t54 = (x217<((x218<x219)^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x222 = 1839268459U;
	int16_t x224 = 2228;

	t55 = (x221<((x222<x223)^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 20;
	static int64_t x226 = 37016748074737LL;
	uint8_t x227 = 38U;
	int32_t t56 = -5567302;

	t56 = (x225<((x226<x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x229 = -1LL;
	uint32_t x230 = 577U;
	static int32_t x232 = -1;
	int32_t t57 = 20;

	t57 = (x229<((x230<x231)^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	int16_t x234 = INT16_MAX;
	int32_t x235 = INT32_MAX;
	volatile int32_t t58 = 0;

	t58 = (x233<((x234<x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 3139224652821337311LLU;
	uint8_t x238 = 18U;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = 379295207;

	t59 = (x237<((x238<x239)^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MIN;
	int16_t x244 = INT16_MIN;

	t60 = (x241<((x242<x243)^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = INT16_MIN;
	volatile int32_t t61 = 330060431;

	t61 = (x245<((x246<x247)^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = -1;
	volatile int32_t t62 = 5921729;

	t62 = (x249<((x250<x251)^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 834591381564LLU;
	int32_t x254 = -1;
	int32_t x256 = 233796;

	t63 = (x253<((x254<x255)^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static int8_t x259 = 12;
	static int32_t x260 = INT32_MIN;

	t64 = (x257<((x258<x259)^x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int64_t x262 = -1LL;
	volatile int64_t x264 = INT64_MIN;
	int32_t t65 = 42722165;

	t65 = (x261<((x262<x263)^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 1787683U;
	int8_t x266 = INT8_MIN;
	volatile int64_t x267 = INT64_MIN;
	int16_t x268 = INT16_MAX;
	int32_t t66 = 143;

	t66 = (x265<((x266<x267)^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = -12;
	int32_t x271 = INT32_MIN;
	volatile uint8_t x272 = 17U;
	volatile int32_t t67 = 37;

	t67 = (x269<((x270<x271)^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 1U;
	uint64_t x274 = 509LLU;
	volatile int16_t x275 = 48;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -107171004;

	t68 = (x273<((x274<x275)^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	static int32_t x279 = INT32_MAX;
	uint64_t x280 = 63179359761306LLU;
	static int32_t t69 = 60;

	t69 = (x277<((x278<x279)^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 92U;
	int8_t x283 = 30;
	volatile int32_t t70 = 7;

	t70 = (x281<((x282<x283)^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = 1549;
	static int32_t x286 = INT32_MIN;
	uint64_t x287 = 1828725135899144417LLU;
	int32_t x288 = 27;

	t71 = (x285<((x286<x287)^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MAX;
	int16_t x291 = -1;
	static int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -1811;

	t72 = (x289<((x290<x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x293 = UINT32_MAX;
	int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MIN;
	static uint8_t x296 = UINT8_MAX;
	static int32_t t73 = 35589043;

	t73 = (x293<((x294<x295)^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	uint32_t x298 = 45U;
	uint8_t x299 = UINT8_MAX;
	uint16_t x300 = 469U;
	volatile int32_t t74 = -14419215;

	t74 = (x297<((x298<x299)^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 1051517100695123046LLU;
	volatile int16_t x302 = INT16_MAX;
	int16_t x303 = -466;
	volatile int16_t x304 = -1;
	volatile int32_t t75 = -30930512;

	t75 = (x301<((x302<x303)^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MAX;
	static uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 10334626;

	t76 = (x305<((x306<x307)^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	uint16_t x312 = 28U;

	t77 = (x309<((x310<x311)^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 5LL;
	volatile int16_t x316 = INT16_MAX;

	t78 = (x313<((x314<x315)^x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 9;
	int8_t x318 = INT8_MIN;
	volatile int16_t x319 = -5834;
	static int16_t x320 = INT16_MAX;

	t79 = (x317<((x318<x319)^x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = UINT8_MAX;
	uint64_t x322 = 247324994LLU;
	int64_t x323 = 25338LL;
	uint8_t x324 = 24U;

	t80 = (x321<((x322<x323)^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x326 = -9348;
	static int64_t x327 = -1LL;
	int16_t x328 = 158;
	volatile int32_t t81 = 369485676;

	t81 = (x325<((x326<x327)^x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	static int64_t x330 = INT64_MIN;
	uint64_t x331 = 105660954984459930LLU;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -1107645;

	t82 = (x329<((x330<x331)^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = 0;
	int8_t x335 = 2;
	volatile int32_t t83 = -40292;

	t83 = (x333<((x334<x335)^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 58359LL;
	int16_t x338 = INT16_MIN;
	uint32_t x340 = UINT32_MAX;
	int32_t t84 = 3;

	t84 = (x337<((x338<x339)^x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x341 = -1;
	static volatile uint8_t x342 = UINT8_MAX;
	uint64_t x343 = 6846371738034734096LLU;
	int32_t x344 = 1;
	static int32_t t85 = 68495402;

	t85 = (x341<((x342<x343)^x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 25U;
	int8_t x346 = INT8_MIN;
	static int64_t x347 = 711899753390855824LL;
	int16_t x348 = 1;

	t86 = (x345<((x346<x347)^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = UINT16_MAX;
	static uint32_t x350 = UINT32_MAX;
	int8_t x351 = 1;
	uint64_t x352 = 8244832633LLU;
	static int32_t t87 = -1534;

	t87 = (x349<((x350<x351)^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	static uint32_t x354 = 408U;
	volatile uint8_t x356 = 82U;
	int32_t t88 = -3;

	t88 = (x353<((x354<x355)^x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 1180575473LLU;
	volatile int16_t x359 = -1;
	static volatile int8_t x360 = 0;
	volatile int32_t t89 = -9510537;

	t89 = (x357<((x358<x359)^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MAX;
	volatile int8_t x362 = INT8_MIN;
	static volatile int8_t x363 = 2;
	static int16_t x364 = -58;
	volatile int32_t t90 = -13127766;

	t90 = (x361<((x362<x363)^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x366 = UINT32_MAX;
	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = INT8_MIN;

	t91 = (x365<((x366<x367)^x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = INT64_MAX;
	int32_t x370 = INT32_MIN;
	int32_t t92 = 486416;

	t92 = (x369<((x370<x371)^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = -10711;
	uint64_t x374 = 875451793LLU;
	int16_t x375 = INT16_MAX;
	static int64_t x376 = INT64_MIN;
	volatile int32_t t93 = 3;

	t93 = (x373<((x374<x375)^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x378 = 9U;
	volatile int32_t x379 = INT32_MIN;
	static int32_t t94 = 9;

	t94 = (x377<((x378<x379)^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int64_t x382 = -1598562295LL;
	static int16_t x384 = 1;

	t95 = (x381<((x382<x383)^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	uint32_t x386 = 324047119U;
	uint32_t x387 = 43665U;
	int16_t x388 = 0;
	static volatile int32_t t96 = 3010;

	t96 = (x385<((x386<x387)^x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 0U;
	uint8_t x390 = 3U;
	uint32_t x391 = 46267159U;
	volatile int32_t t97 = 1753592;

	t97 = (x389<((x390<x391)^x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 15U;
	static int64_t x394 = -1713220712981371232LL;
	int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MIN;
	int32_t t98 = -441246399;

	t98 = (x393<((x394<x395)^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int16_t x398 = INT16_MAX;
	uint64_t x399 = UINT64_MAX;
	uint64_t x400 = 58LLU;
	int32_t t99 = -14;

	t99 = (x397<((x398<x399)^x400));

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

