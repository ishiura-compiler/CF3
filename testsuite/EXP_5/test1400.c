#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
volatile int8_t x8 = INT8_MIN;
static int16_t x10 = INT16_MIN;
volatile uint64_t x12 = UINT64_MAX;
static int32_t t2 = 6904186;
int32_t x19 = -1;
int32_t x23 = -1;
volatile int32_t t5 = 12866;
static int64_t x31 = INT64_MIN;
uint64_t x34 = UINT64_MAX;
volatile uint64_t x43 = 3780786506459274445LLU;
int8_t x44 = INT8_MAX;
static int16_t x45 = -1;
int16_t x52 = -2;
int64_t x59 = -1LL;
int16_t x60 = -254;
static int64_t x63 = -53000525335728LL;
volatile uint8_t x74 = 17U;
int16_t x76 = INT16_MIN;
static int32_t t18 = -8321685;
int64_t x77 = INT64_MIN;
static volatile int32_t t20 = -691954;
int32_t t21 = 4753320;
int16_t x97 = INT16_MIN;
uint8_t x100 = 2U;
volatile uint64_t x102 = 549440897621LLU;
static int8_t x107 = -13;
uint16_t x111 = UINT16_MAX;
volatile int8_t x121 = INT8_MIN;
int64_t x122 = -1LL;
int32_t x127 = 51842;
static int64_t x133 = INT64_MAX;
volatile int64_t x134 = -1LL;
volatile int32_t t32 = 0;
int64_t x143 = INT64_MAX;
static uint64_t x149 = 1150777425944458454LLU;
volatile int64_t x152 = -1LL;
static uint32_t x159 = UINT32_MAX;
int32_t t37 = 74835849;
uint16_t x164 = 6909U;
int8_t x170 = INT8_MIN;
int16_t x172 = INT16_MAX;
int32_t t40 = 1;
static int16_t x173 = INT16_MAX;
uint8_t x176 = 59U;
int64_t x180 = INT64_MIN;
int64_t x191 = INT64_MIN;
volatile int32_t t50 = -884172;
volatile uint8_t x221 = UINT8_MAX;
int32_t x225 = 151561;
int64_t x233 = INT64_MIN;
volatile uint64_t x238 = 10LLU;
int32_t t56 = 509;
static int8_t x243 = INT8_MIN;
volatile int32_t t59 = -1;
int8_t x254 = INT8_MAX;
volatile int64_t x259 = 52LL;
int32_t x263 = INT32_MIN;
static volatile int32_t t62 = -629511;
static uint8_t x268 = UINT8_MAX;
volatile uint32_t x269 = UINT32_MAX;
static volatile int32_t x275 = 8629;
int8_t x279 = INT8_MIN;
volatile int32_t t66 = 1817;
int8_t x281 = -1;
uint16_t x282 = UINT16_MAX;
static volatile int32_t t67 = -36;
int16_t x285 = INT16_MIN;
static int16_t x286 = INT16_MIN;
int64_t x288 = 55LL;
static int8_t x290 = INT8_MAX;
int32_t t69 = 242980;
static volatile int64_t x300 = -1LL;
int64_t x304 = INT64_MAX;
int8_t x307 = INT8_MIN;
int8_t x309 = INT8_MIN;
int8_t x312 = -2;
static int32_t x313 = INT32_MIN;
volatile int32_t t76 = 107183;
uint64_t x323 = UINT64_MAX;
static uint32_t x325 = UINT32_MAX;
static int8_t x327 = INT8_MAX;
int16_t x337 = -1;
int16_t x340 = 245;
int64_t x343 = INT64_MIN;
static int32_t t82 = 26722085;
uint16_t x351 = 439U;
int32_t t84 = -36;
volatile uint32_t x353 = UINT32_MAX;
static int32_t t86 = 1077;
volatile int64_t x362 = -19865274LL;
volatile int16_t x385 = INT16_MIN;
static int32_t t90 = -1786016;
static uint8_t x389 = 52U;
volatile int32_t t91 = 447;
uint32_t x403 = 1U;
int16_t x407 = -1;
int8_t x408 = INT8_MIN;
volatile int32_t t94 = -1791276;
int16_t x416 = 4;
static int32_t t98 = 20;
uint16_t x426 = UINT16_MAX;
int64_t x428 = INT64_MAX;
volatile int32_t t99 = 324372;


void f0(void) {
	volatile int8_t x2 = INT8_MIN;
	int32_t x3 = 1;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -123056;

	t0 = (x1<((x2<x3)/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 28682236587LL;
	uint16_t x6 = 67U;
	int32_t x7 = -1;
	volatile int32_t t1 = -333077679;

	t1 = (x5<((x6<x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint64_t x11 = 55277LLU;

	t2 = (x9<((x10<x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 4789U;
	volatile uint64_t x14 = UINT64_MAX;
	int8_t x15 = -1;
	volatile int16_t x16 = 22;
	int32_t t3 = 1561;

	t3 = (x13<((x14<x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 36LL;
	uint32_t x18 = 1480790829U;
	int64_t x20 = -1LL;
	int32_t t4 = 8436;

	t4 = (x17<((x18<x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 0;
	int64_t x22 = 1923654LL;
	int16_t x24 = -1;

	t5 = (x21<((x22<x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	uint64_t x26 = UINT64_MAX;
	static volatile int8_t x27 = 0;
	volatile int32_t x28 = -1;
	volatile int32_t t6 = 0;

	t6 = (x25<((x26<x27)/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 12U;
	int16_t x30 = -10;
	int64_t x32 = -1LL;
	int32_t t7 = 59648184;

	t7 = (x29<((x30<x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 107U;
	uint32_t x35 = UINT32_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = -836;

	t8 = (x33<((x34<x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile uint16_t x38 = 31842U;
	volatile int32_t x39 = INT32_MIN;
	int16_t x40 = -3;
	volatile int32_t t9 = -2596546;

	t9 = (x37<((x38<x39)/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x42 = UINT64_MAX;
	volatile int32_t t10 = -16251;

	t10 = (x41<((x42<x43)/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -1LL;
	volatile int64_t x47 = 187806LL;
	static int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -3922295;

	t11 = (x45<((x46<x47)/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = -4;
	static int64_t x51 = INT64_MIN;
	volatile int32_t t12 = 140;

	t12 = (x49<((x50<x51)/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = 0;
	static int8_t x56 = INT8_MIN;
	int32_t t13 = 467702853;

	t13 = (x53<((x54<x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -47;
	int64_t x58 = INT64_MIN;
	volatile int32_t t14 = -1;

	t14 = (x57<((x58<x59)/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = UINT16_MAX;
	int8_t x62 = INT8_MIN;
	int32_t x64 = -1;
	static volatile int32_t t15 = 48;

	t15 = (x61<((x62<x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 2U;
	static int32_t x66 = -19728179;
	volatile int64_t x67 = 391435953654246623LL;
	int64_t x68 = -1LL;
	volatile int32_t t16 = -338298205;

	t16 = (x65<((x66<x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	int64_t x70 = -934402381056LL;
	int64_t x71 = INT64_MIN;
	static volatile int64_t x72 = -1LL;
	int32_t t17 = 1;

	t17 = (x69<((x70<x71)/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = UINT64_MAX;
	uint16_t x75 = 2U;

	t18 = (x73<((x74<x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x78 = 0U;
	int64_t x79 = INT64_MIN;
	static int64_t x80 = INT64_MAX;
	int32_t t19 = 532510;

	t19 = (x77<((x78<x79)/x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 73790U;
	uint8_t x90 = UINT8_MAX;
	static int8_t x91 = -1;
	static int64_t x92 = INT64_MIN;

	t20 = (x89<((x90<x91)/x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = 371465292LL;
	int32_t x95 = -3;
	int64_t x96 = 5125834LL;

	t21 = (x93<((x94<x95)/x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x98 = -1;
	int8_t x99 = INT8_MAX;
	volatile int32_t t22 = 5143423;

	t22 = (x97<((x98<x99)/x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	uint16_t x103 = 54U;
	int16_t x104 = -72;
	volatile int32_t t23 = -26480;

	t23 = (x101<((x102<x103)/x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = INT64_MIN;
	volatile int64_t x106 = -1LL;
	static volatile int8_t x108 = INT8_MAX;
	int32_t t24 = -26;

	t24 = (x105<((x106<x107)/x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = -1;
	uint32_t x112 = 55375360U;
	int32_t t25 = -80;

	t25 = (x109<((x110<x111)/x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 1U;
	uint8_t x114 = 23U;
	static int64_t x115 = -22742544206LL;
	int64_t x116 = 3991808193810LL;
	int32_t t26 = -354;

	t26 = (x113<((x114<x115)/x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int64_t x118 = INT64_MIN;
	int8_t x119 = 21;
	int32_t x120 = INT32_MIN;
	int32_t t27 = -4122;

	t27 = (x117<((x118<x119)/x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x123 = INT8_MIN;
	int32_t x124 = INT32_MAX;
	volatile int32_t t28 = -22;

	t28 = (x121<((x122<x123)/x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x125 = -2252417172545LL;
	static int32_t x126 = 11;
	volatile uint32_t x128 = UINT32_MAX;
	int32_t t29 = -1;

	t29 = (x125<((x126<x127)/x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 0U;
	int32_t x130 = -1;
	int64_t x131 = -1LL;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t30 = -17867;

	t30 = (x129<((x130<x131)/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x135 = INT64_MAX;
	int64_t x136 = INT64_MIN;
	int32_t t31 = 45;

	t31 = (x133<((x134<x135)/x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = 1967;
	int64_t x138 = 43340LL;
	uint8_t x139 = 10U;
	int64_t x140 = 1862LL;

	t32 = (x137<((x138<x139)/x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x141 = 36785658U;
	volatile uint64_t x142 = 57794480668328LLU;
	int8_t x144 = 19;
	static int32_t t33 = 1606;

	t33 = (x141<((x142<x143)/x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 1U;
	uint16_t x146 = 17452U;
	int16_t x147 = -2;
	int8_t x148 = INT8_MAX;
	volatile int32_t t34 = -40;

	t34 = (x145<((x146<x147)/x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x150 = UINT8_MAX;
	uint8_t x151 = 0U;
	volatile int32_t t35 = -2369953;

	t35 = (x149<((x150<x151)/x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -96531;
	uint16_t x154 = 2U;
	static int32_t x155 = -1;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t36 = -77959;

	t36 = (x153<((x154<x155)/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -35LL;
	int32_t x158 = INT32_MAX;
	int16_t x160 = -1;

	t37 = (x157<((x158<x159)/x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -4619;
	volatile uint32_t x162 = 221473161U;
	uint32_t x163 = 253737464U;
	volatile int32_t t38 = -604426970;

	t38 = (x161<((x162<x163)/x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = 2;
	static int16_t x167 = INT16_MAX;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t39 = -790389;

	t39 = (x165<((x166<x167)/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = -23;
	int16_t x171 = INT16_MAX;

	t40 = (x169<((x170<x171)/x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x174 = -1;
	int16_t x175 = -327;
	volatile int32_t t41 = -3709;

	t41 = (x173<((x174<x175)/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = 322462LL;
	int8_t x178 = -1;
	int64_t x179 = -1871337799695LL;
	volatile int32_t t42 = -9334350;

	t42 = (x177<((x178<x179)/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	static int16_t x182 = 32;
	int64_t x183 = INT64_MIN;
	static int8_t x184 = -1;
	int32_t t43 = -967196223;

	t43 = (x181<((x182<x183)/x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x185 = -1656LL;
	int8_t x186 = 5;
	uint8_t x187 = 0U;
	volatile uint32_t x188 = 118454U;
	int32_t t44 = -3;

	t44 = (x185<((x186<x187)/x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	static int64_t x190 = 1LL;
	static uint16_t x192 = 11U;
	static volatile int32_t t45 = 429247;

	t45 = (x189<((x190<x191)/x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x193 = 42U;
	uint8_t x194 = 33U;
	int32_t x195 = INT32_MAX;
	int32_t x196 = INT32_MAX;
	int32_t t46 = 98005140;

	t46 = (x193<((x194<x195)/x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 6U;
	int8_t x198 = INT8_MIN;
	int64_t x199 = -1897647640502776925LL;
	uint32_t x200 = 3120852U;
	static volatile int32_t t47 = 616125381;

	t47 = (x197<((x198<x199)/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = UINT16_MAX;
	uint8_t x202 = 36U;
	uint32_t x203 = 2U;
	int8_t x204 = INT8_MAX;
	int32_t t48 = -3775391;

	t48 = (x201<((x202<x203)/x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	volatile uint64_t x206 = UINT64_MAX;
	volatile int16_t x207 = INT16_MIN;
	static int32_t x208 = INT32_MIN;
	static volatile int32_t t49 = 1;

	t49 = (x205<((x206<x207)/x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = -1LL;
	int32_t x214 = 3;
	uint64_t x215 = UINT64_MAX;
	volatile int8_t x216 = INT8_MAX;

	t50 = (x213<((x214<x215)/x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = 18U;
	int8_t x218 = 1;
	int16_t x219 = INT16_MAX;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t51 = -93638;

	t51 = (x217<((x218<x219)/x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x222 = -1;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MAX;
	int32_t t52 = -348;

	t52 = (x221<((x222<x223)/x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MAX;
	static uint64_t x228 = 4074LLU;
	int32_t t53 = 15;

	t53 = (x225<((x226<x227)/x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x229 = UINT64_MAX;
	uint64_t x230 = 8610643384574LLU;
	static uint16_t x231 = 70U;
	volatile int16_t x232 = INT16_MIN;
	volatile int32_t t54 = 2095764;

	t54 = (x229<((x230<x231)/x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x234 = 38U;
	static int32_t x235 = 45536531;
	int32_t x236 = INT32_MIN;
	int32_t t55 = -6250;

	t55 = (x233<((x234<x235)/x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = -1LL;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = 513705;

	t56 = (x237<((x238<x239)/x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = UINT8_MAX;
	volatile int8_t x242 = INT8_MAX;
	uint16_t x244 = 71U;
	int32_t t57 = 238530023;

	t57 = (x241<((x242<x243)/x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x245 = UINT32_MAX;
	static volatile int32_t x246 = -1;
	volatile int8_t x247 = 3;
	static volatile uint32_t x248 = 638102671U;
	static int32_t t58 = -846;

	t58 = (x245<((x246<x247)/x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = -1;
	int64_t x251 = 623906461637LL;
	uint64_t x252 = 60873LLU;

	t59 = (x249<((x250<x251)/x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = UINT32_MAX;
	int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MAX;
	volatile int32_t t60 = -125;

	t60 = (x253<((x254<x255)/x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = INT16_MAX;
	int32_t x260 = -1;
	volatile int32_t t61 = -404838801;

	t61 = (x257<((x258<x259)/x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	volatile int16_t x262 = 12564;
	static uint64_t x264 = 9096LLU;

	t62 = (x261<((x262<x263)/x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x265 = -1;
	int16_t x266 = -566;
	int64_t x267 = -66666631753LL;
	volatile int32_t t63 = -3184756;

	t63 = (x265<((x266<x267)/x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int32_t x272 = -1;
	static int32_t t64 = -92847;

	t64 = (x269<((x270<x271)/x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 3U;
	int32_t x274 = INT32_MIN;
	static uint8_t x276 = 7U;
	volatile int32_t t65 = 11;

	t65 = (x273<((x274<x275)/x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = UINT8_MAX;
	int64_t x278 = INT64_MAX;
	int16_t x280 = -649;

	t66 = (x277<((x278<x279)/x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x283 = INT16_MAX;
	uint16_t x284 = 22741U;

	t67 = (x281<((x282<x283)/x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x287 = -134554530317LL;
	static volatile int32_t t68 = -32225476;

	t68 = (x285<((x286<x287)/x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = -1;
	static int8_t x291 = 0;
	static volatile int32_t x292 = -1;

	t69 = (x289<((x290<x291)/x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 50388LLU;
	int16_t x294 = -3;
	int8_t x295 = -4;
	volatile int64_t x296 = -1165788LL;
	volatile int32_t t70 = -6746280;

	t70 = (x293<((x294<x295)/x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -1;
	int8_t x298 = INT8_MAX;
	volatile uint16_t x299 = 371U;
	int32_t t71 = -295647;

	t71 = (x297<((x298<x299)/x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = INT8_MAX;
	uint64_t x302 = 66129649138078LLU;
	uint32_t x303 = UINT32_MAX;
	static volatile int32_t t72 = -47162248;

	t72 = (x301<((x302<x303)/x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	int8_t x308 = INT8_MAX;
	volatile int32_t t73 = 2;

	t73 = (x305<((x306<x307)/x308));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x310 = -1;
	int64_t x311 = -452LL;
	volatile int32_t t74 = 77;

	t74 = (x309<((x310<x311)/x312));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;
	volatile int32_t t75 = 29050924;

	t75 = (x313<((x314<x315)/x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x317 = -1LL;
	int16_t x318 = 3;
	uint16_t x319 = 194U;
	int32_t x320 = -18010;

	t76 = (x317<((x318<x319)/x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = 3408;
	uint32_t x322 = 7601992U;
	static int8_t x324 = -48;
	volatile int32_t t77 = 1;

	t77 = (x321<((x322<x323)/x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x326 = INT32_MIN;
	int8_t x328 = 1;
	volatile int32_t t78 = 6002;

	t78 = (x325<((x326<x327)/x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x329 = INT64_MAX;
	volatile int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	static volatile uint16_t x332 = 2265U;
	static volatile int32_t t79 = 68010115;

	t79 = (x329<((x330<x331)/x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	static uint64_t x334 = 162LLU;
	int64_t x335 = -1LL;
	int16_t x336 = INT16_MIN;
	int32_t t80 = 3560947;

	t80 = (x333<((x334<x335)/x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	int32_t t81 = 747;

	t81 = (x337<((x338<x339)/x340));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x341 = -54;
	uint8_t x342 = 6U;
	int32_t x344 = -1;

	t82 = (x341<((x342<x343)/x344));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = UINT8_MAX;
	uint8_t x346 = 1U;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 2U;
	int32_t t83 = 176514208;

	t83 = (x345<((x346<x347)/x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = 6991;
	int64_t x352 = -22589LL;

	t84 = (x349<((x350<x351)/x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x354 = 199U;
	int16_t x355 = INT16_MAX;
	uint32_t x356 = UINT32_MAX;
	static volatile int32_t t85 = 28;

	t85 = (x353<((x354<x355)/x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = INT8_MIN;
	static int16_t x358 = 25;
	static uint32_t x359 = 2131U;
	volatile int16_t x360 = INT16_MIN;

	t86 = (x357<((x358<x359)/x360));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x363 = INT8_MAX;
	static int64_t x364 = -30209625717674250LL;
	int32_t t87 = -31903678;

	t87 = (x361<((x362<x363)/x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x365 = 19U;
	static int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	volatile int32_t x368 = INT32_MAX;
	static int32_t t88 = 2113707;

	t88 = (x365<((x366<x367)/x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x377 = -415693;
	static uint8_t x378 = 1U;
	int8_t x379 = INT8_MIN;
	static int8_t x380 = INT8_MIN;
	volatile int32_t t89 = -574984;

	t89 = (x377<((x378<x379)/x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x386 = -1;
	int8_t x387 = -13;
	static uint16_t x388 = 3U;

	t90 = (x385<((x386<x387)/x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MAX;

	t91 = (x389<((x390<x391)/x392));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	volatile int16_t x399 = INT16_MAX;
	volatile uint32_t x400 = 20779478U;
	volatile int32_t t92 = -239646478;

	t92 = (x397<((x398<x399)/x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x401 = INT16_MIN;
	uint32_t x402 = 2240824U;
	int16_t x404 = -1580;
	volatile int32_t t93 = -23665094;

	t93 = (x401<((x402<x403)/x404));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x405 = -1;
	static int64_t x406 = 6219329964199LL;

	t94 = (x405<((x406<x407)/x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x409 = 69U;
	int64_t x410 = -278078LL;
	int8_t x411 = INT8_MIN;
	static uint16_t x412 = 26U;
	volatile int32_t t95 = -172967;

	t95 = (x409<((x410<x411)/x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x413 = INT8_MIN;
	static volatile int64_t x414 = -3391420646LL;
	int32_t x415 = INT32_MIN;
	volatile int32_t t96 = -4618;

	t96 = (x413<((x414<x415)/x416));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x417 = 4186U;
	static volatile int32_t x418 = -1;
	uint16_t x419 = 5U;
	int64_t x420 = -1LL;
	static volatile int32_t t97 = -433333;

	t97 = (x417<((x418<x419)/x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x421 = -1;
	int64_t x422 = -1LL;
	int8_t x423 = INT8_MIN;
	int32_t x424 = INT32_MIN;

	t98 = (x421<((x422<x423)/x424));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x425 = 23385U;
	int32_t x427 = INT32_MAX;

	t99 = (x425<((x426<x427)/x428));

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

