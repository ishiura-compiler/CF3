#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
static uint64_t x7 = 6314517148366LLU;
volatile int32_t x12 = 625814105;
volatile int64_t x13 = -20470656563LL;
int64_t x15 = INT64_MIN;
static int8_t x16 = INT8_MAX;
int32_t x19 = INT32_MIN;
volatile uint64_t x23 = UINT64_MAX;
volatile int8_t x24 = INT8_MIN;
static volatile int32_t t7 = 185;
uint32_t x50 = 32791U;
static volatile int32_t x55 = INT32_MIN;
int32_t x58 = INT32_MIN;
int32_t x66 = INT32_MAX;
static int8_t x67 = -1;
volatile int8_t x68 = 48;
int8_t x72 = INT8_MIN;
volatile uint64_t t18 = 119569008LLU;
uint64_t x86 = 15LLU;
static volatile int64_t x90 = INT64_MIN;
volatile uint64_t t23 = 85025096296LLU;
int32_t x99 = INT32_MAX;
int16_t x102 = INT16_MAX;
volatile int32_t t25 = -1;
int8_t x107 = INT8_MAX;
static int32_t x110 = 12;
int8_t x111 = INT8_MIN;
uint64_t x115 = 1318LLU;
int64_t x116 = 5174518077702LL;
static uint8_t x120 = 4U;
static int8_t x123 = INT8_MIN;
volatile uint64_t t30 = 485916LLU;
int64_t x125 = INT64_MIN;
int8_t x126 = INT8_MIN;
static int16_t x127 = INT16_MIN;
static int32_t t31 = 0;
int64_t x130 = -1LL;
int16_t x132 = INT16_MAX;
int8_t x133 = INT8_MAX;
static uint8_t x135 = 91U;
int8_t x136 = -1;
uint32_t x139 = 2226U;
static int32_t x143 = -589336607;
int32_t x145 = 2903;
static uint8_t x146 = UINT8_MAX;
static int64_t x157 = -1LL;
int8_t x160 = 37;
volatile uint16_t x166 = 2259U;
int16_t x167 = INT16_MAX;
int32_t x189 = INT32_MIN;
int8_t x190 = 2;
uint8_t x196 = 2U;
uint16_t x205 = UINT16_MAX;
uint32_t x222 = 106U;
volatile int64_t t55 = -1522244239LL;
uint32_t x227 = 33620U;
int64_t x232 = INT64_MAX;
volatile uint64_t x235 = 840293803LLU;
int16_t x237 = 3436;
uint8_t x238 = 126U;
int64_t x244 = INT64_MAX;
static int32_t x248 = 82799;
volatile int64_t t64 = 502LL;
static int8_t x272 = -1;
int64_t x273 = INT64_MIN;
volatile uint64_t t68 = 30884768078LLU;
static volatile uint32_t x281 = UINT32_MAX;
volatile int32_t t70 = 5;
int32_t x286 = INT32_MIN;
int8_t x289 = INT8_MIN;
int64_t x290 = -162224543LL;
int64_t x297 = -1LL;
uint16_t x298 = 2U;
static int64_t t75 = 31542998238318LL;
int64_t x308 = INT64_MAX;
int64_t x313 = INT64_MAX;
uint64_t x315 = 5954822164781071717LLU;
static int64_t t80 = -135400108449817LL;
static int64_t x325 = INT64_MAX;
volatile int32_t x326 = INT32_MAX;
int32_t x329 = -1;
int8_t x334 = -1;
uint16_t x336 = UINT16_MAX;
int16_t x338 = INT16_MAX;
static volatile int16_t x344 = INT16_MIN;
int8_t x359 = INT8_MAX;
int8_t x360 = INT8_MIN;
int32_t x362 = 215;
volatile uint64_t t90 = 94731970451286LLU;
int64_t x366 = INT64_MAX;
volatile int64_t t91 = 82121220862935LL;
volatile uint64_t x376 = 8887LLU;
uint32_t x384 = UINT32_MAX;
int16_t x386 = INT16_MIN;
int32_t x390 = INT32_MIN;
int16_t x391 = -1;
volatile int64_t t97 = 88192441LL;
volatile uint32_t x393 = 4115U;
int16_t x395 = INT16_MAX;
int64_t x396 = INT64_MAX;
static int64_t t98 = -64332011171069312LL;
static uint8_t x398 = UINT8_MAX;
volatile int32_t t99 = -1;


void f0(void) {
	volatile uint8_t x2 = 84U;
	uint16_t x3 = 2U;
	static volatile uint32_t x4 = 601683U;
	uint32_t t0 = 1164775U;

	t0 = ((x1<x2)*(x3^x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x6 = INT16_MAX;
	int16_t x8 = -1;
	volatile uint64_t t1 = 14LLU;

	t1 = ((x5<x6)*(x7^x8));

	if (t1 != 18446737759192403249LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint32_t x10 = UINT32_MAX;
	static int8_t x11 = 0;
	int32_t t2 = -990789768;

	t2 = ((x9<x10)*(x11^x12));

	if (t2 != 625814105) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = 1;
	int64_t t3 = -16185223272580LL;

	t3 = ((x13<x14)*(x15^x16));

	if (t3 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 3404U;
	uint32_t x18 = 221683191U;
	volatile int8_t x20 = 1;
	int32_t t4 = 1457400;

	t4 = ((x17<x18)*(x19^x20));

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int8_t x22 = INT8_MAX;
	volatile uint64_t t5 = 100762981591163LLU;

	t5 = ((x21<x22)*(x23^x24));

	if (t5 != 127LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = 2U;
	volatile uint8_t x26 = 93U;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = INT16_MIN;
	uint64_t t6 = 77517360530571668LLU;

	t6 = ((x25<x26)*(x27^x28));

	if (t6 != 32767LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 1;
	int32_t x30 = INT32_MIN;
	int16_t x31 = -1;
	int32_t x32 = INT32_MIN;

	t7 = ((x29<x30)*(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	volatile int8_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 36LLU;
	static volatile uint64_t t8 = 3739LLU;

	t8 = ((x33<x34)*(x35^x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 15;
	uint64_t x38 = UINT64_MAX;
	uint64_t x39 = 6850LLU;
	volatile int32_t x40 = -11040;
	uint64_t t9 = 5279564276557LLU;

	t9 = ((x37<x38)*(x39^x40));

	if (t9 != 18446744073709538850LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = -5999730972LL;
	int16_t x43 = INT16_MAX;
	static uint16_t x44 = 0U;
	volatile int32_t t10 = 1;

	t10 = ((x41<x42)*(x43^x44));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x45 = UINT32_MAX;
	volatile uint8_t x46 = 6U;
	volatile int8_t x47 = INT8_MAX;
	int16_t x48 = -443;
	volatile int32_t t11 = 2293;

	t11 = ((x45<x46)*(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	int64_t x51 = -1LL;
	int8_t x52 = -1;
	int64_t t12 = -212508LL;

	t12 = ((x49<x50)*(x51^x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MAX;
	int8_t x54 = -16;
	uint8_t x56 = 1U;
	static int32_t t13 = 1;

	t13 = ((x53<x54)*(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 1;
	uint8_t x59 = 2U;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 3075;

	t14 = ((x57<x58)*(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	static int64_t x62 = 396699915123LL;
	int16_t x63 = INT16_MIN;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = 263;

	t15 = ((x61<x62)*(x63^x64));

	if (t15 != -32769) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x65 = INT64_MIN;
	static int32_t t16 = 863;

	t16 = ((x65<x66)*(x67^x68));

	if (t16 != -49) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static uint32_t x70 = 660U;
	uint64_t x71 = UINT64_MAX;
	static volatile uint64_t t17 = 5073083270188LLU;

	t17 = ((x69<x70)*(x71^x72));

	if (t17 != 127LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = 64238;
	static int64_t x74 = 56143LL;
	volatile uint64_t x75 = 677518346863LLU;
	uint8_t x76 = 4U;

	t18 = ((x73<x74)*(x75^x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int64_t x78 = -21LL;
	int16_t x79 = -1;
	volatile int16_t x80 = -1;
	int32_t t19 = -332921856;

	t19 = ((x77<x78)*(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = -1;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = UINT16_MAX;
	int32_t x84 = INT32_MAX;
	volatile int32_t t20 = 1;

	t20 = ((x81<x82)*(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 20U;
	int64_t x87 = INT64_MAX;
	uint64_t x88 = 192401431943274LLU;
	volatile uint64_t t21 = 229629736668LLU;

	t21 = ((x85<x86)*(x87^x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 0U;
	static int8_t x91 = INT8_MAX;
	static int64_t x92 = 68146161846272478LL;
	volatile int64_t t22 = -4293832400761LL;

	t22 = ((x89<x90)*(x91^x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	static int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = 255486679448763LLU;

	t23 = ((x93<x94)*(x95^x96));

	if (t23 != 18446488587030133947LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 259U;
	static int64_t x98 = INT64_MAX;
	int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 59506LL;

	t24 = ((x97<x98)*(x99^x100));

	if (t24 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	uint8_t x103 = 14U;
	int8_t x104 = -1;

	t25 = ((x101<x102)*(x103^x104));

	if (t25 != -15) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MAX;
	static int64_t x106 = -1LL;
	uint8_t x108 = 0U;
	static volatile int32_t t26 = -26531395;

	t26 = ((x105<x106)*(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = 742111411;
	uint16_t x112 = 9841U;
	volatile int32_t t27 = -282351;

	t27 = ((x109<x110)*(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	static int32_t x114 = INT32_MIN;
	static uint64_t t28 = 3691LLU;

	t28 = ((x113<x114)*(x115^x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 38526276U;
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = INT16_MIN;
	int32_t t29 = -31;

	t29 = ((x117<x118)*(x119^x120));

	if (t29 != -32764) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x121 = 12707U;
	uint32_t x122 = 141U;
	volatile uint64_t x124 = 6910LLU;

	t30 = ((x121<x122)*(x123^x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x128 = 1;

	t31 = ((x125<x126)*(x127^x128));

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 1126U;
	volatile int8_t x131 = -1;
	volatile int32_t t32 = 19246516;

	t32 = ((x129<x130)*(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x134 = 4U;
	volatile int32_t t33 = 20197;

	t33 = ((x133<x134)*(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 2743U;
	int32_t x138 = -1;
	int8_t x140 = INT8_MIN;
	volatile uint32_t t34 = 1788556U;

	t34 = ((x137<x138)*(x139^x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x142 = UINT64_MAX;
	static int16_t x144 = -1;
	int32_t t35 = -126985570;

	t35 = ((x141<x142)*(x143^x144));

	if (t35 != 589336606) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x147 = 12;
	int16_t x148 = 1;
	static int32_t t36 = 13;

	t36 = ((x145<x146)*(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MAX;
	uint8_t x150 = UINT8_MAX;
	static uint16_t x151 = UINT16_MAX;
	static uint16_t x152 = UINT16_MAX;
	static int32_t t37 = 10450;

	t37 = ((x149<x150)*(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 2412U;
	static uint8_t x154 = 0U;
	int32_t x155 = -1;
	uint32_t x156 = 4U;
	uint32_t t38 = 24U;

	t38 = ((x153<x154)*(x155^x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = 31335;
	volatile int64_t x159 = -27502778956144LL;
	int64_t t39 = 191991166701LL;

	t39 = ((x157<x158)*(x159^x160));

	if (t39 != -27502778956107LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int32_t x162 = INT32_MAX;
	uint32_t x163 = 38539U;
	int16_t x164 = INT16_MIN;
	uint32_t t40 = 1159U;

	t40 = ((x161<x162)*(x163^x164));

	if (t40 != 4294907531U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x168 = 53U;
	volatile int32_t t41 = -186623;

	t41 = ((x165<x166)*(x167^x168));

	if (t41 != 32714) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	static uint8_t x170 = 32U;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MIN;
	static volatile uint64_t t42 = 11302866318371LLU;

	t42 = ((x169<x170)*(x171^x172));

	if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 41U;
	static uint16_t x174 = 1395U;
	static int64_t x175 = 1046114418847LL;
	int8_t x176 = -6;
	int64_t t43 = -3592895321915LL;

	t43 = ((x173<x174)*(x175^x176));

	if (t43 != -1046114418843LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MIN;
	static int16_t x178 = INT16_MAX;
	uint32_t x179 = 407U;
	volatile int8_t x180 = -1;
	volatile uint32_t t44 = 27443905U;

	t44 = ((x177<x178)*(x179^x180));

	if (t44 != 4294966888U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	volatile int8_t x182 = INT8_MIN;
	uint64_t x183 = 244674LLU;
	volatile int8_t x184 = 1;
	uint64_t t45 = 8307358LLU;

	t45 = ((x181<x182)*(x183^x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	static volatile int16_t x186 = -1;
	uint8_t x187 = 4U;
	int64_t x188 = INT64_MAX;
	volatile int64_t t46 = -1820230969210LL;

	t46 = ((x185<x186)*(x187^x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x191 = 5LLU;
	uint8_t x192 = UINT8_MAX;
	static volatile uint64_t t47 = 3032967272093940LLU;

	t47 = ((x189<x190)*(x191^x192));

	if (t47 != 250LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = 388;
	int32_t x194 = 863959;
	uint32_t x195 = 30366714U;
	static uint32_t t48 = 1192389351U;

	t48 = ((x193<x194)*(x195^x196));

	if (t48 != 30366712U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = 5853;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = -1;
	int64_t x200 = -7257LL;
	volatile int64_t t49 = -1306806LL;

	t49 = ((x197<x198)*(x199^x200));

	if (t49 != 7256LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 13;
	int8_t x202 = -1;
	int32_t x203 = -421851;
	uint64_t x204 = UINT64_MAX;
	static uint64_t t50 = 16LLU;

	t50 = ((x201<x202)*(x203^x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x206 = -1;
	int32_t x207 = INT32_MAX;
	int16_t x208 = -1;
	static volatile int32_t t51 = 35669;

	t51 = ((x205<x206)*(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	volatile int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MAX;
	static volatile int64_t x212 = INT64_MIN;
	int64_t t52 = -4192972LL;

	t52 = ((x209<x210)*(x211^x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	volatile int32_t x214 = -1;
	static int32_t x215 = INT32_MIN;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t53 = 3U;

	t53 = ((x213<x214)*(x215^x216));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int16_t x218 = -13;
	int32_t x219 = 1;
	int16_t x220 = INT16_MAX;
	static int32_t t54 = 14;

	t54 = ((x217<x218)*(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 2U;
	int64_t x223 = 6611715881LL;
	volatile int32_t x224 = INT32_MAX;

	t55 = ((x221<x222)*(x223^x224));

	if (t55 != 8420669654LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 226030556LLU;
	uint32_t x226 = 2068U;
	volatile uint32_t x228 = 476071U;
	volatile uint32_t t56 = 1008658760U;

	t56 = ((x225<x226)*(x227^x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 15U;
	static int16_t x230 = INT16_MAX;
	volatile int64_t x231 = 824922061855LL;
	volatile int64_t t57 = -246LL;

	t57 = ((x229<x230)*(x231^x232));

	if (t57 != 9223371211932713952LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 10U;
	static uint32_t x234 = 2624379U;
	volatile int16_t x236 = -1;
	volatile uint64_t t58 = 85383LLU;

	t58 = ((x233<x234)*(x235^x236));

	if (t58 != 18446744072869257812LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x239 = 766826U;
	static uint32_t x240 = UINT32_MAX;
	volatile uint32_t t59 = 10U;

	t59 = ((x237<x238)*(x239^x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	uint16_t x242 = UINT16_MAX;
	volatile int16_t x243 = INT16_MAX;
	int64_t t60 = 8068936366816535LL;

	t60 = ((x241<x242)*(x243^x244));

	if (t60 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 5;
	static int32_t x246 = INT32_MIN;
	uint8_t x247 = 6U;
	int32_t t61 = 6;

	t61 = ((x245<x246)*(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = UINT64_MAX;
	static uint16_t x250 = 0U;
	int8_t x251 = -1;
	uint64_t x252 = 3977228177LLU;
	static volatile uint64_t t62 = 31161240708756278LLU;

	t62 = ((x249<x250)*(x251^x252));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	volatile int16_t x254 = 62;
	uint64_t x255 = 227802037LLU;
	int64_t x256 = -398402214573LL;
	uint64_t t63 = 2688761631861728LLU;

	t63 = ((x253<x254)*(x255^x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -7290856186LL;
	volatile int16_t x258 = -7;
	int16_t x259 = -2920;
	int64_t x260 = INT64_MAX;

	t64 = ((x257<x258)*(x259^x260));

	if (t64 != -9223372036854772889LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 3U;
	static int64_t x262 = -66198280LL;
	static volatile int64_t x263 = -5818446088LL;
	int8_t x264 = INT8_MIN;
	int64_t t65 = -2868524452403LL;

	t65 = ((x261<x262)*(x263^x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 1016LLU;
	volatile int32_t x266 = INT32_MIN;
	uint32_t x267 = 0U;
	int8_t x268 = INT8_MAX;
	uint32_t t66 = 1609U;

	t66 = ((x265<x266)*(x267^x268));

	if (t66 != 127U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static uint16_t x270 = UINT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	int32_t t67 = 0;

	t67 = ((x269<x270)*(x271^x272));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MAX;
	uint64_t x275 = 4713LLU;
	int8_t x276 = -1;

	t68 = ((x273<x274)*(x275^x276));

	if (t68 != 18446744073709546902LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MIN;
	volatile int16_t x279 = 122;
	static uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = 1;

	t69 = ((x277<x278)*(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = 8;
	int8_t x283 = 31;
	volatile int8_t x284 = -1;

	t70 = ((x281<x282)*(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -1;
	static uint32_t x287 = 1U;
	int64_t x288 = -1LL;
	volatile int64_t t71 = 3160944299855LL;

	t71 = ((x285<x286)*(x287^x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x291 = 15633U;
	uint64_t x292 = UINT64_MAX;
	uint64_t t72 = 254390578057195920LLU;

	t72 = ((x289<x290)*(x291^x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 1036U;
	static volatile int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	uint16_t x296 = 16U;
	static int32_t t73 = 14;

	t73 = ((x293<x294)*(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = INT16_MIN;
	uint32_t x300 = 458U;
	static volatile uint32_t t74 = 19628U;

	t74 = ((x297<x298)*(x299^x300));

	if (t74 != 4294934986U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x301 = UINT8_MAX;
	int16_t x302 = -9753;
	int32_t x303 = INT32_MIN;
	volatile int64_t x304 = INT64_MIN;

	t75 = ((x301<x302)*(x303^x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 35LL;
	int32_t x306 = INT32_MIN;
	static int8_t x307 = -1;
	volatile int64_t t76 = -3411523LL;

	t76 = ((x305<x306)*(x307^x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 131902LL;
	int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MAX;
	static uint32_t x312 = 1138U;
	uint32_t t77 = 349252U;

	t77 = ((x309<x310)*(x311^x312));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x314 = 229818U;
	uint8_t x316 = 0U;
	static uint64_t t78 = 3557211669863LLU;

	t78 = ((x313<x314)*(x315^x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 0;
	int8_t x318 = -13;
	volatile int16_t x319 = INT16_MAX;
	volatile int8_t x320 = -1;
	volatile int32_t t79 = -4162;

	t79 = ((x317<x318)*(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 179U;
	int32_t x322 = INT32_MAX;
	volatile int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MAX;

	t80 = ((x321<x322)*(x323^x324));

	if (t80 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x327 = 86453587U;
	volatile int64_t x328 = INT64_MIN;
	volatile int64_t t81 = -4610210541910489125LL;

	t81 = ((x325<x326)*(x327^x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x330 = UINT8_MAX;
	static volatile int8_t x331 = -11;
	volatile int32_t x332 = INT32_MIN;
	static volatile int32_t t82 = 1577;

	t82 = ((x329<x330)*(x331^x332));

	if (t82 != 2147483637) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 110627U;
	static volatile int32_t x335 = 21342639;
	static int32_t t83 = 2;

	t83 = ((x333<x334)*(x335^x336));

	if (t83 != 21321296) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 52;

	t84 = ((x337<x338)*(x339^x340));

	if (t84 != 2147450880) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = 7U;
	int32_t t85 = -187986;

	t85 = ((x341<x342)*(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x345 = 15;
	uint64_t x346 = 170LLU;
	volatile uint16_t x347 = 847U;
	volatile uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = -107;

	t86 = ((x345<x346)*(x347^x348));

	if (t86 != 64688) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 4132253;
	int8_t x350 = -63;
	static int64_t x351 = INT64_MIN;
	int16_t x352 = -1;
	int64_t t87 = 259234132132LL;

	t87 = ((x349<x350)*(x351^x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	static int16_t x355 = 1;
	int8_t x356 = 0;
	int32_t t88 = 74;

	t88 = ((x353<x354)*(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = 663;
	int64_t x358 = -264006LL;
	volatile int32_t t89 = -940325929;

	t89 = ((x357<x358)*(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 35U;
	static uint64_t x363 = UINT64_MAX;
	static int64_t x364 = 498610382756LL;

	t90 = ((x361<x362)*(x363^x364));

	if (t90 != 18446743575099168859LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 1;
	uint32_t x367 = UINT32_MAX;
	int64_t x368 = 14429136203553LL;

	t91 = ((x365<x366)*(x367^x368));

	if (t91 != 14428749058270LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = 74;
	int64_t x370 = 31361926684LL;
	int64_t x371 = INT64_MIN;
	uint8_t x372 = 16U;
	static volatile int64_t t92 = -5556LL;

	t92 = ((x369<x370)*(x371^x372));

	if (t92 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	int8_t x374 = 4;
	int8_t x375 = -1;
	uint64_t t93 = 28621178366466LLU;

	t93 = ((x373<x374)*(x375^x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -7;
	int16_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	static uint16_t x380 = 4U;
	volatile int32_t t94 = 1;

	t94 = ((x377<x378)*(x379^x380));

	if (t94 != 65531) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -2728850LL;
	int32_t x382 = INT32_MIN;
	int64_t x383 = 126330LL;
	static int64_t t95 = -50852635LL;

	t95 = ((x381<x382)*(x383^x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = 47U;
	volatile uint32_t x387 = 147616558U;
	uint32_t x388 = 677189423U;
	uint32_t t96 = 11127225U;

	t96 = ((x385<x386)*(x387^x388));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int64_t x392 = INT64_MIN;

	t97 = ((x389<x390)*(x391^x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x394 = 4430703288869915179LLU;

	t98 = ((x393<x394)*(x395^x396));

	if (t98 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = 1;
	static uint16_t x399 = 4U;
	int8_t x400 = INT8_MAX;

	t99 = ((x397<x398)*(x399^x400));

	if (t99 != 123) { NG(); } else { ; }
	
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
