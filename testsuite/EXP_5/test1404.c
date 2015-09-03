#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = -31580797823LL;
int8_t x8 = INT8_MIN;
int16_t x9 = -1;
uint64_t x14 = UINT64_MAX;
int64_t x20 = -1LL;
uint16_t x21 = UINT16_MAX;
int16_t x24 = -1702;
static int64_t x26 = -1LL;
static int64_t x32 = 112405LL;
uint32_t x33 = 13569U;
volatile uint32_t x52 = 113U;
int16_t x63 = -12320;
uint32_t x64 = UINT32_MAX;
int16_t x67 = INT16_MIN;
int64_t x68 = INT64_MIN;
int16_t x76 = 86;
volatile int32_t t19 = -7593;
int8_t x88 = -5;
static int16_t x96 = INT16_MAX;
static volatile int64_t t24 = 1665150423556754LL;
volatile int8_t x108 = INT8_MAX;
int64_t x110 = 4508LL;
static volatile int64_t t28 = INT64_MIN;
static uint8_t x117 = UINT8_MAX;
static int16_t x118 = -1;
static int32_t x122 = INT32_MAX;
int64_t x123 = 18994LL;
uint16_t x124 = 1U;
uint32_t x127 = 1586429U;
int32_t x128 = 6956;
volatile uint16_t x140 = 11U;
volatile int32_t x142 = INT32_MIN;
static volatile int8_t x143 = -1;
uint64_t x152 = 31LLU;
static uint16_t x153 = UINT16_MAX;
uint64_t x159 = UINT64_MAX;
static uint16_t x165 = 2U;
int8_t x168 = INT8_MAX;
int32_t x170 = -48;
int64_t x171 = 18060632940064571LL;
int32_t x174 = INT32_MIN;
int32_t x176 = 2;
int32_t x181 = 126112420;
int16_t x190 = -1;
uint64_t x192 = 4440LLU;
volatile uint64_t t46 = UINT64_MAX;
volatile uint32_t x195 = UINT32_MAX;
int32_t x201 = 0;
static int16_t x206 = 13;
int64_t x209 = 28428LL;
int32_t x213 = 141;
int8_t x215 = INT8_MAX;
uint8_t x247 = UINT8_MAX;
volatile int64_t t60 = 79993720374LL;
uint32_t x254 = 0U;
int64_t x255 = INT64_MAX;
int32_t t61 = 1;
int8_t x258 = -1;
int64_t t63 = 1384553LL;
int64_t x265 = 9106LL;
int64_t x267 = INT64_MIN;
uint16_t x272 = 5U;
static volatile int8_t x279 = INT8_MIN;
volatile uint64_t x284 = 5647LLU;
int16_t x287 = 1;
int8_t x294 = INT8_MAX;
uint32_t x300 = UINT32_MAX;
int8_t x305 = INT8_MIN;
uint8_t x310 = 23U;
volatile int64_t x311 = 2LL;
uint64_t x320 = UINT64_MAX;
volatile uint64_t t77 = 131319976LLU;
int32_t x333 = INT32_MIN;
static int64_t x336 = -1LL;
volatile int32_t t85 = 29200;
static volatile int32_t x353 = INT32_MAX;
volatile int32_t x354 = -88;
int16_t x359 = -1;
volatile uint64_t t87 = 12525046LLU;
volatile int32_t t88 = -183853904;
int8_t x369 = INT8_MIN;
uint64_t x370 = UINT64_MAX;
volatile int64_t t90 = -24998268301699864LL;
volatile int32_t t91 = 1005850277;
int8_t x382 = INT8_MIN;
uint64_t x387 = 5422968452LLU;
int64_t x388 = -1LL;
int32_t t95 = -60723;
int32_t t96 = INT32_MIN;
int8_t x399 = INT8_MIN;
uint8_t x400 = 106U;
int32_t x403 = -1849;
static volatile uint64_t t98 = 7519920LLU;
uint16_t x406 = 30518U;
int32_t x407 = INT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MIN;
	volatile int8_t x3 = INT8_MIN;
	int64_t x4 = -668188463585LL;
	volatile int64_t t0 = 362800431943639218LL;

	t0 = (x1^((x2<x3)/x4));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	static uint32_t x6 = UINT32_MAX;
	volatile int32_t t1 = 192628171;

	t1 = (x5^((x6<x7)/x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x10 = 7;
	uint16_t x11 = 3012U;
	volatile int8_t x12 = INT8_MIN;
	static int32_t t2 = -95095;

	t2 = (x9^((x10<x11)/x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 535U;
	volatile uint16_t x15 = UINT16_MAX;
	int16_t x16 = -1;
	uint32_t t3 = 41U;

	t3 = (x13^((x14<x15)/x16));

	if (t3 != 535U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 507;
	int8_t x18 = 1;
	volatile int16_t x19 = INT16_MIN;
	volatile int64_t t4 = -2214897270546620961LL;

	t4 = (x17^((x18<x19)/x20));

	if (t4 != 507LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = UINT16_MAX;
	int64_t x23 = -1LL;
	int32_t t5 = -190980;

	t5 = (x21^((x22<x23)/x24));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int8_t x27 = 5;
	int16_t x28 = -136;
	int64_t t6 = INT64_MAX;

	t6 = (x25^((x26<x27)/x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 23790486U;
	static uint16_t x30 = 217U;
	int32_t x31 = -1;
	int64_t t7 = -2LL;

	t7 = (x29^((x30<x31)/x32));

	if (t7 != 23790486LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 481;
	static int32_t x35 = -124871;
	int32_t x36 = -53564082;
	uint32_t t8 = 993076816U;

	t8 = (x33^((x34<x35)/x36));

	if (t8 != 13569U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	int16_t x40 = -1;
	volatile int64_t t9 = 172296LL;

	t9 = (x37^((x38<x39)/x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1665U;
	int32_t x42 = -2;
	static int32_t x43 = INT32_MAX;
	static volatile int32_t x44 = 116661;
	uint32_t t10 = 44024U;

	t10 = (x41^((x42<x43)/x44));

	if (t10 != 1665U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -58;
	static uint16_t x46 = 618U;
	static uint8_t x47 = 31U;
	int8_t x48 = -36;
	int32_t t11 = -8460;

	t11 = (x45^((x46<x47)/x48));

	if (t11 != -58) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int64_t x50 = INT64_MIN;
	int64_t x51 = INT64_MIN;
	static uint32_t t12 = 342612U;

	t12 = (x49^((x50<x51)/x52));

	if (t12 != 127U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 2U;
	int8_t x54 = INT8_MAX;
	int16_t x55 = INT16_MAX;
	int32_t x56 = INT32_MIN;
	int32_t t13 = -9241100;

	t13 = (x53^((x54<x55)/x56));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	static int16_t x58 = -63;
	static uint16_t x59 = UINT16_MAX;
	volatile int32_t x60 = -1;
	int32_t t14 = -6;

	t14 = (x57^((x58<x59)/x60));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = -76573250;
	int64_t t15 = INT64_MIN;

	t15 = (x61^((x62<x63)/x64));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 905U;
	static int32_t x66 = INT32_MIN;
	static int64_t t16 = -1768LL;

	t16 = (x65^((x66<x67)/x68));

	if (t16 != 905LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint8_t x70 = 9U;
	int8_t x71 = INT8_MIN;
	int8_t x72 = -50;
	static int32_t t17 = 309957348;

	t17 = (x69^((x70<x71)/x72));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint32_t x74 = UINT32_MAX;
	uint16_t x75 = UINT16_MAX;
	volatile int64_t t18 = 1029277651657LL;

	t18 = (x73^((x74<x75)/x76));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 30;
	int64_t x78 = INT64_MIN;
	int16_t x79 = -31;
	int32_t x80 = -1;

	t19 = (x77^((x78<x79)/x80));

	if (t19 != -31) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 4;
	int64_t x82 = -1LL;
	volatile int32_t x83 = INT32_MIN;
	volatile int8_t x84 = 35;
	volatile int32_t t20 = -1067202070;

	t20 = (x81^((x82<x83)/x84));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x85 = -1;
	int16_t x86 = -1;
	int64_t x87 = INT64_MIN;
	volatile int32_t t21 = 0;

	t21 = (x85^((x86<x87)/x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = -1;
	int16_t x90 = INT16_MIN;
	static int64_t x91 = INT64_MIN;
	static uint64_t x92 = UINT64_MAX;
	volatile uint64_t t22 = UINT64_MAX;

	t22 = (x89^((x90<x91)/x92));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = -1907526025LL;
	uint8_t x95 = UINT8_MAX;
	int32_t t23 = -26480203;

	t23 = (x93^((x94<x95)/x96));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	volatile uint16_t x98 = UINT16_MAX;
	int16_t x99 = -1;
	int16_t x100 = -247;

	t24 = (x97^((x98<x99)/x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 2LLU;
	int16_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	int16_t x104 = 1;
	uint64_t t25 = 148LLU;

	t25 = (x101^((x102<x103)/x104));

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1U;
	int16_t x106 = INT16_MIN;
	int16_t x107 = 2;
	uint32_t t26 = 316U;

	t26 = (x105^((x106<x107)/x108));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 2443U;
	uint32_t x111 = 14029U;
	uint64_t x112 = 367395779LLU;
	volatile uint64_t t27 = 80482937520LLU;

	t27 = (x109^((x110<x111)/x112));

	if (t27 != 2443LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = INT64_MIN;
	int8_t x114 = 52;
	static uint64_t x115 = 11548LLU;
	int16_t x116 = -14;

	t28 = (x113^((x114<x115)/x116));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x119 = INT8_MIN;
	static volatile uint8_t x120 = UINT8_MAX;
	int32_t t29 = -808;

	t29 = (x117^((x118<x119)/x120));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	volatile int32_t t30 = -3427;

	t30 = (x121^((x122<x123)/x124));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -52097;
	uint64_t x126 = UINT64_MAX;
	int32_t t31 = -472;

	t31 = (x125^((x126<x127)/x128));

	if (t31 != -52097) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int8_t x130 = -28;
	static volatile int8_t x131 = INT8_MAX;
	static int16_t x132 = INT16_MIN;
	int64_t t32 = INT64_MIN;

	t32 = (x129^((x130<x131)/x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -237564;
	uint64_t x134 = UINT64_MAX;
	volatile int16_t x135 = -1;
	int8_t x136 = -2;
	static volatile int32_t t33 = -914;

	t33 = (x133^((x134<x135)/x136));

	if (t33 != -237564) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	static int64_t x138 = INT64_MAX;
	int8_t x139 = INT8_MAX;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x137^((x138<x139)/x140));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 3939571;

	t35 = (x141^((x142<x143)/x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 2157U;
	int32_t x146 = INT32_MIN;
	static uint8_t x147 = UINT8_MAX;
	int32_t x148 = -7;
	static uint32_t t36 = 93305088U;

	t36 = (x145^((x146<x147)/x148));

	if (t36 != 2157U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	static volatile int16_t x150 = INT16_MIN;
	static uint32_t x151 = 6199U;
	volatile uint64_t t37 = 104125487201424954LLU;

	t37 = (x149^((x150<x151)/x152));

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x154 = -1;
	uint16_t x155 = 1171U;
	volatile int8_t x156 = -1;
	volatile int32_t t38 = -125712;

	t38 = (x153^((x154<x155)/x156));

	if (t38 != -65536) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int64_t x158 = 16278174286886LL;
	volatile uint32_t x160 = 41U;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x157^((x158<x159)/x160));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	static int16_t x162 = INT16_MIN;
	static volatile int16_t x163 = INT16_MIN;
	int8_t x164 = 3;
	volatile int64_t t40 = INT64_MIN;

	t40 = (x161^((x162<x163)/x164));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 78U;
	int64_t x167 = -1LL;
	static int32_t t41 = -90459;

	t41 = (x165^((x166<x167)/x168));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	uint16_t x172 = UINT16_MAX;
	int64_t t42 = INT64_MIN;

	t42 = (x169^((x170<x171)/x172));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x173 = -9648LL;
	volatile uint64_t x175 = 12058172742039LLU;
	volatile int64_t t43 = 65LL;

	t43 = (x173^((x174<x175)/x176));

	if (t43 != -9648LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	volatile uint32_t x184 = 1710U;
	uint32_t t44 = 263254U;

	t44 = (x181^((x182<x183)/x184));

	if (t44 != 126112420U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = UINT8_MAX;
	int64_t x186 = INT64_MIN;
	int64_t x187 = -1LL;
	static int8_t x188 = 11;
	volatile int32_t t45 = 18178;

	t45 = (x185^((x186<x187)/x188));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -1;
	volatile int64_t x191 = INT64_MAX;

	t46 = (x189^((x190<x191)/x192));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x193 = 506U;
	int16_t x194 = -7695;
	static volatile uint8_t x196 = 66U;
	volatile int32_t t47 = 775984029;

	t47 = (x193^((x194<x195)/x196));

	if (t47 != 506) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MAX;
	static uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MIN;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t48 = 383;

	t48 = (x197^((x198<x199)/x200));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x202 = INT16_MAX;
	volatile uint64_t x203 = 34808LLU;
	int16_t x204 = INT16_MIN;
	volatile int32_t t49 = 415456;

	t49 = (x201^((x202<x203)/x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MIN;
	int8_t x207 = INT8_MAX;
	static uint16_t x208 = UINT16_MAX;
	static int64_t t50 = INT64_MIN;

	t50 = (x205^((x206<x207)/x208));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x210 = 4532887094258160LLU;
	int32_t x211 = -1;
	uint8_t x212 = 8U;
	volatile int64_t t51 = -11291307LL;

	t51 = (x209^((x210<x211)/x212));

	if (t51 != 28428LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x214 = INT16_MIN;
	static volatile int64_t x216 = INT64_MIN;
	int64_t t52 = -3441405578LL;

	t52 = (x213^((x214<x215)/x216));

	if (t52 != 141LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 17U;
	static volatile uint64_t x218 = UINT64_MAX;
	int64_t x219 = -1LL;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t53 = -471;

	t53 = (x217^((x218<x219)/x220));

	if (t53 != 17) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x221 = 84895720148LLU;
	static int64_t x222 = 602358745901125LL;
	static uint32_t x223 = 115U;
	uint32_t x224 = 1U;
	uint64_t t54 = 2092855827LLU;

	t54 = (x221^((x222<x223)/x224));

	if (t54 != 84895720148LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MAX;
	int64_t x226 = 64789856846150683LL;
	static volatile int32_t x227 = INT32_MIN;
	static int16_t x228 = 48;
	static volatile int32_t t55 = -52857;

	t55 = (x225^((x226<x227)/x228));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = 727341159105196LLU;
	int32_t x230 = -1;
	static volatile int8_t x231 = INT8_MIN;
	int32_t x232 = 14;
	volatile uint64_t t56 = 393317088669LLU;

	t56 = (x229^((x230<x231)/x232));

	if (t56 != 727341159105196LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -1;
	volatile int64_t x234 = INT64_MIN;
	volatile uint64_t x235 = UINT64_MAX;
	static volatile uint64_t x236 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = (x233^((x234<x235)/x236));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = -81682091;
	static uint32_t x242 = 12U;
	uint64_t x243 = UINT64_MAX;
	volatile int32_t x244 = -1;
	volatile int32_t t58 = 1623599;

	t58 = (x241^((x242<x243)/x244));

	if (t58 != 81682090) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x245 = UINT32_MAX;
	int8_t x246 = -1;
	static uint8_t x248 = UINT8_MAX;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (x245^((x246<x247)/x248));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -1LL;
	int16_t x250 = 46;
	uint16_t x251 = 201U;
	static int64_t x252 = -11781189545314686LL;

	t60 = (x249^((x250<x251)/x252));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -1;
	int32_t x256 = -15974;

	t61 = (x253^((x254<x255)/x256));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = UINT32_MAX;
	uint8_t x259 = 44U;
	volatile int64_t x260 = INT64_MIN;
	volatile int64_t t62 = -636411LL;

	t62 = (x257^((x258<x259)/x260));

	if (t62 != 4294967295LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = 13753511179LL;
	int16_t x262 = INT16_MAX;
	volatile int64_t x263 = INT64_MIN;
	int64_t x264 = -1LL;

	t63 = (x261^((x262<x263)/x264));

	if (t63 != 13753511179LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x266 = INT16_MIN;
	uint32_t x268 = 1306960U;
	volatile int64_t t64 = 32010869857LL;

	t64 = (x265^((x266<x267)/x268));

	if (t64 != 9106LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = -1;
	static volatile int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	int32_t t65 = -20508;

	t65 = (x269^((x270<x271)/x272));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	static uint32_t x276 = 13675785U;
	volatile uint32_t t66 = 1598374U;

	t66 = (x273^((x274<x275)/x276));

	if (t66 != 255U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 430849U;
	int32_t x278 = -105276;
	int8_t x280 = INT8_MAX;
	static volatile uint32_t t67 = 1973642U;

	t67 = (x277^((x278<x279)/x280));

	if (t67 != 430849U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x281 = 7U;
	int64_t x282 = 0LL;
	static int8_t x283 = -1;
	volatile uint64_t t68 = 38639978288263LLU;

	t68 = (x281^((x282<x283)/x284));

	if (t68 != 7LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x285 = 15U;
	uint64_t x286 = 6907LLU;
	uint8_t x288 = 2U;
	volatile int32_t t69 = -34;

	t69 = (x285^((x286<x287)/x288));

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x289 = INT32_MAX;
	static uint16_t x290 = 30727U;
	int16_t x291 = INT16_MAX;
	volatile int16_t x292 = -805;
	int32_t t70 = INT32_MAX;

	t70 = (x289^((x290<x291)/x292));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x293 = -5;
	uint32_t x295 = 3U;
	volatile int32_t x296 = -390909;
	volatile int32_t t71 = 15;

	t71 = (x293^((x294<x295)/x296));

	if (t71 != -5) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x297 = 0U;
	uint64_t x298 = 2641755291865151149LLU;
	static uint8_t x299 = 1U;
	uint32_t t72 = 53111064U;

	t72 = (x297^((x298<x299)/x300));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x302 = 1LLU;
	volatile int64_t x303 = 4342792709218557LL;
	int64_t x304 = INT64_MIN;
	int64_t t73 = -217101887513LL;

	t73 = (x301^((x302<x303)/x304));

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x306 = -1;
	static uint32_t x307 = UINT32_MAX;
	volatile int8_t x308 = INT8_MAX;
	static int32_t t74 = -1;

	t74 = (x305^((x306<x307)/x308));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x309 = -39275;
	uint32_t x312 = 15853U;
	static volatile uint32_t t75 = 1074449597U;

	t75 = (x309^((x310<x311)/x312));

	if (t75 != 4294928021U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x313 = 2823;
	int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MIN;
	int8_t x316 = -17;
	volatile int32_t t76 = 13533998;

	t76 = (x313^((x314<x315)/x316));

	if (t76 != 2823) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x317 = 1;
	int8_t x318 = INT8_MIN;
	volatile int32_t x319 = INT32_MIN;

	t77 = (x317^((x318<x319)/x320));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = -1;
	volatile uint64_t x322 = 541282113116793822LLU;
	uint64_t x323 = 3387067280107LLU;
	uint16_t x324 = 6U;
	volatile int32_t t78 = 118634;

	t78 = (x321^((x322<x323)/x324));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = 983;
	static int8_t x326 = -1;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = INT8_MAX;
	int32_t t79 = -3070832;

	t79 = (x325^((x326<x327)/x328));

	if (t79 != 983) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x329 = 39433534941865655LLU;
	uint32_t x330 = 1U;
	volatile uint64_t x331 = 63197374058579302LLU;
	uint8_t x332 = 5U;
	volatile uint64_t t80 = 10254LLU;

	t80 = (x329^((x330<x331)/x332));

	if (t80 != 39433534941865655LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x334 = INT64_MIN;
	int16_t x335 = -1;
	int64_t t81 = 976212979179263LL;

	t81 = (x333^((x334<x335)/x336));

	if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x337 = INT16_MIN;
	volatile int32_t x338 = INT32_MIN;
	uint16_t x339 = 6614U;
	static int32_t x340 = INT32_MIN;
	volatile int32_t t82 = 69896;

	t82 = (x337^((x338<x339)/x340));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = -1068;
	uint16_t x342 = 45U;
	uint32_t x343 = 169921U;
	int16_t x344 = -1;
	int32_t t83 = -1;

	t83 = (x341^((x342<x343)/x344));

	if (t83 != 1067) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x345 = 3638034781LL;
	uint32_t x346 = 7473U;
	volatile int32_t x347 = -935437792;
	static int8_t x348 = 5;
	static volatile int64_t t84 = -27LL;

	t84 = (x345^((x346<x347)/x348));

	if (t84 != 3638034781LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = 1;
	uint16_t x350 = UINT16_MAX;
	volatile uint32_t x351 = 57635706U;
	volatile int16_t x352 = INT16_MIN;

	t85 = (x349^((x350<x351)/x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x355 = -1;
	int64_t x356 = -21071LL;
	int64_t t86 = 230415692802489LL;

	t86 = (x353^((x354<x355)/x356));

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = -7301399;
	volatile uint64_t x360 = 11322417LLU;

	t87 = (x357^((x358<x359)/x360));

	if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = 94;
	static uint64_t x362 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	static uint8_t x364 = 85U;

	t88 = (x361^((x362<x363)/x364));

	if (t88 != 94) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MAX;
	int64_t x366 = -60181911850LL;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = UINT8_MAX;
	int64_t t89 = INT64_MAX;

	t89 = (x365^((x366<x367)/x368));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MIN;

	t90 = (x369^((x370<x371)/x372));

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x373 = 13U;
	volatile int64_t x374 = 16194988346054LL;
	static int64_t x375 = INT64_MIN;
	uint8_t x376 = 1U;

	t91 = (x373^((x374<x375)/x376));

	if (t91 != 13) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x377 = INT32_MIN;
	volatile int16_t x378 = -3351;
	int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t92 = INT32_MIN;

	t92 = (x377^((x378<x379)/x380));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = 491581613;
	int16_t x383 = -1;
	int8_t x384 = 48;
	volatile int32_t t93 = 1;

	t93 = (x381^((x382<x383)/x384));

	if (t93 != 491581613) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = -1;
	uint16_t x386 = 4588U;
	static int64_t t94 = -24513005023105275LL;

	t94 = (x385^((x386<x387)/x388));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = -1;
	int64_t x390 = -69LL;
	int32_t x391 = -8;
	volatile uint8_t x392 = 22U;

	t95 = (x389^((x390<x391)/x392));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MIN;
	volatile uint32_t x394 = UINT32_MAX;
	uint64_t x395 = UINT64_MAX;
	int32_t x396 = 311;

	t96 = (x393^((x394<x395)/x396));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x397 = INT8_MIN;
	static int8_t x398 = INT8_MAX;
	int32_t t97 = -429397;

	t97 = (x397^((x398<x399)/x400));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = INT32_MIN;
	int8_t x402 = INT8_MIN;
	volatile uint64_t x404 = 442298950383083586LLU;

	t98 = (x401^((x402<x403)/x404));

	if (t98 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x405 = INT32_MIN;
	int16_t x408 = -3;
	static volatile int32_t t99 = INT32_MIN;

	t99 = (x405^((x406<x407)/x408));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

