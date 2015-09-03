#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x10 = -53;
volatile uint64_t t2 = 102LLU;
uint64_t x13 = 3195LLU;
volatile int32_t x14 = -1;
int64_t x18 = 1826525LL;
static int8_t x19 = INT8_MIN;
volatile int32_t t4 = 324;
volatile int16_t x21 = INT16_MAX;
volatile int32_t x28 = -1;
uint32_t t6 = 0U;
uint8_t x31 = 1U;
uint64_t t8 = 685589LLU;
volatile uint16_t x37 = 2U;
int8_t x45 = -1;
static volatile uint64_t x46 = 107793249959LLU;
int16_t x48 = INT16_MIN;
volatile int32_t x61 = INT32_MIN;
int16_t x66 = -10478;
volatile uint32_t x67 = 164836U;
int32_t t16 = -1;
int64_t x73 = -1LL;
static int64_t x76 = 647195295921395530LL;
uint8_t x78 = 1U;
int64_t t18 = 391504310489893916LL;
static volatile int32_t x81 = -1;
int16_t x83 = -1;
int8_t x84 = 35;
uint16_t x88 = 5U;
volatile int8_t x98 = INT8_MAX;
int16_t x105 = 449;
int16_t x106 = INT16_MAX;
uint64_t x107 = 2595423062LLU;
volatile int16_t x108 = 13895;
uint64_t x110 = 444543736494770LLU;
int16_t x114 = 6;
uint8_t x124 = UINT8_MAX;
uint64_t t30 = 748060973266LLU;
int32_t x136 = INT32_MAX;
volatile int16_t x137 = -118;
int64_t x140 = -1LL;
uint8_t x144 = 5U;
int32_t t34 = -74631;
static int32_t x151 = -928924098;
volatile int32_t x160 = -6679903;
static uint32_t x162 = 0U;
int16_t x176 = INT16_MIN;
volatile int64_t t42 = -4LL;
static int32_t x180 = INT32_MAX;
static int32_t x182 = -25;
uint8_t x186 = 8U;
int16_t x194 = INT16_MIN;
int64_t x196 = INT64_MIN;
static int8_t x197 = INT8_MIN;
int16_t x200 = -1;
volatile int32_t t49 = 6272;
int16_t x205 = INT16_MAX;
int64_t x207 = INT64_MIN;
int64_t x218 = -1LL;
uint8_t x220 = 22U;
uint16_t x223 = 9U;
int16_t x227 = INT16_MIN;
int32_t x236 = INT32_MAX;
volatile int32_t x242 = -1;
static int16_t x244 = 7088;
uint32_t x246 = 13418628U;
volatile int32_t t61 = 87392220;
static uint8_t x255 = 21U;
volatile int32_t t63 = 993089136;
uint64_t x263 = UINT64_MAX;
static volatile uint32_t x267 = UINT32_MAX;
volatile uint64_t t66 = 1127748430967484954LLU;
static volatile int32_t x275 = -1;
static int32_t t67 = -5509;
uint16_t x280 = 19U;
int32_t t68 = -115108946;
int64_t x281 = 1280491LL;
uint16_t x284 = 911U;
static int8_t x285 = -1;
uint16_t x287 = 26897U;
volatile int32_t t70 = 702203992;
int16_t x289 = INT16_MAX;
uint8_t x292 = 45U;
int32_t t71 = 33996;
uint8_t x293 = UINT8_MAX;
int8_t x301 = INT8_MIN;
uint32_t x302 = 128U;
int16_t x303 = 1;
uint32_t x304 = 1846120U;
static volatile uint32_t t74 = 448032863U;
int32_t x306 = -1;
uint16_t x311 = 27U;
static int32_t x314 = INT32_MIN;
volatile int16_t x315 = -1;
int32_t t77 = 1017876;
int64_t x318 = INT64_MIN;
int8_t x323 = -1;
uint32_t t79 = 1584U;
volatile int32_t x326 = -1;
int8_t x328 = 1;
static int64_t x348 = INT64_MIN;
static volatile int64_t t85 = -3061994148LL;
static uint64_t x352 = 843354242171LLU;
int32_t x353 = INT32_MAX;
volatile int16_t x354 = -696;
volatile uint64_t t87 = 11493852LLU;
volatile int64_t x357 = INT64_MIN;
int16_t x362 = -68;
static int16_t x363 = INT16_MIN;
int16_t x369 = INT16_MIN;
volatile int16_t x371 = INT16_MIN;
uint64_t x376 = 39757LLU;
uint64_t t91 = 8612743249403788472LLU;
int64_t x377 = -1LL;
int64_t x381 = INT64_MIN;
volatile uint8_t x384 = 10U;
static uint8_t x385 = 53U;
volatile int64_t x389 = INT64_MAX;
uint64_t x390 = UINT64_MAX;
volatile uint64_t x395 = 5663166611LLU;
int16_t x399 = -23;
int16_t x400 = 1511;
int16_t x401 = -1;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int64_t x2 = INT64_MAX;
	int32_t x3 = INT32_MAX;
	static int32_t x4 = -1;
	volatile int32_t t0 = 7;

	t0 = ((x1<x2)-(x3|x4));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int64_t x6 = INT64_MIN;
	volatile int64_t x7 = INT64_MIN;
	uint16_t x8 = 488U;
	volatile int64_t t1 = -1LL;

	t1 = ((x5<x6)-(x7|x8));

	if (t1 != 9223372036854775320LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = -1;
	uint64_t x11 = 692234370120606LLU;
	static int8_t x12 = -1;

	t2 = ((x9<x10)-(x11|x12));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x15 = UINT16_MAX;
	static volatile uint16_t x16 = UINT16_MAX;
	static int32_t t3 = 61;

	t3 = ((x13<x14)-(x15|x16));

	if (t3 != -65534) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	volatile int32_t x20 = -1;

	t4 = ((x17<x18)-(x19|x20));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -25673976256731409LL;
	int8_t x23 = -1;
	volatile int16_t x24 = -1;
	volatile int32_t t5 = -309384;

	t5 = ((x21<x22)-(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	volatile int32_t x26 = INT32_MIN;
	uint32_t x27 = 2U;

	t6 = ((x25<x26)-(x27|x28));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 13;
	int16_t x30 = INT16_MAX;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = 140;

	t7 = ((x29<x30)-(x31|x32));

	if (t7 != -65534) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 5U;
	uint16_t x34 = 0U;
	uint64_t x35 = 718556909050807690LLU;
	int8_t x36 = INT8_MIN;

	t8 = ((x33<x34)-(x35|x36));

	if (t8 != 118LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = -1;
	uint8_t x39 = 1U;
	volatile int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 57825747;

	t9 = ((x37<x38)-(x39|x40));

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -209739017993LL;
	int64_t x42 = 252476728693758904LL;
	int8_t x43 = INT8_MIN;
	static volatile uint32_t x44 = 15933U;
	uint32_t t10 = 1447254U;

	t10 = ((x41<x42)-(x43|x44));

	if (t10 != 68U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = INT8_MAX;
	int32_t t11 = 701067;

	t11 = ((x45<x46)-(x47|x48));

	if (t11 != 32641) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 13160U;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = -1;
	int32_t x52 = -1;
	int32_t t12 = -3538125;

	t12 = ((x49<x50)-(x51|x52));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MAX;
	static volatile uint8_t x58 = UINT8_MAX;
	int8_t x59 = INT8_MIN;
	static int8_t x60 = INT8_MIN;
	static volatile int32_t t13 = 9;

	t13 = ((x57<x58)-(x59|x60));

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x62 = 55U;
	int16_t x63 = INT16_MIN;
	static uint8_t x64 = 44U;
	int32_t t14 = -1281;

	t14 = ((x61<x62)-(x63|x64));

	if (t14 != 32724) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 8083603497902009676LLU;
	uint64_t x68 = UINT64_MAX;
	uint64_t t15 = 544603036024701269LLU;

	t15 = ((x65<x66)-(x67|x68));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = INT32_MIN;
	static int32_t x70 = -11615150;
	int32_t x71 = INT32_MIN;
	static uint16_t x72 = 1687U;

	t16 = ((x69<x70)-(x71|x72));

	if (t16 != 2147481962) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = -3;
	int32_t x75 = INT32_MIN;
	int64_t t17 = 474LL;

	t17 = ((x73<x74)-(x75|x76));

	if (t17 != 776808630LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 14U;
	uint8_t x79 = UINT8_MAX;
	int64_t x80 = INT64_MIN;

	t18 = ((x77<x78)-(x79|x80));

	if (t18 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x82 = INT64_MAX;
	int32_t t19 = 2561;

	t19 = ((x81<x82)-(x83|x84));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 14359770011902LLU;
	uint32_t x86 = UINT32_MAX;
	uint32_t x87 = 0U;
	uint32_t t20 = 1U;

	t20 = ((x85<x86)-(x87|x88));

	if (t20 != 4294967291U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x89 = -14192311;
	int8_t x90 = -1;
	volatile uint32_t x91 = UINT32_MAX;
	int8_t x92 = -2;
	uint32_t t21 = 6U;

	t21 = ((x89<x90)-(x91|x92));

	if (t21 != 2U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -1;
	uint32_t x94 = UINT32_MAX;
	uint16_t x95 = UINT16_MAX;
	uint64_t x96 = 622508900732987LLU;
	volatile uint64_t t22 = 31155176039566LLU;

	t22 = ((x93<x94)-(x95|x96));

	if (t22 != 18446121564808806401LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	int64_t x99 = -1LL;
	static int16_t x100 = INT16_MIN;
	volatile int64_t t23 = -4LL;

	t23 = ((x97<x98)-(x99|x100));

	if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	uint16_t x102 = 1U;
	volatile int32_t x103 = -1;
	uint8_t x104 = UINT8_MAX;
	static int32_t t24 = 39077;

	t24 = ((x101<x102)-(x103|x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t t25 = 28LLU;

	t25 = ((x105<x106)-(x107|x108));

	if (t25 != 18446744071114115242LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MAX;
	static volatile int16_t x111 = 0;
	volatile int64_t x112 = -161377486LL;
	static volatile int64_t t26 = 34LL;

	t26 = ((x109<x110)-(x111|x112));

	if (t26 != 161377487LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x115 = 12U;
	int16_t x116 = -1;
	volatile int32_t t27 = -774;

	t27 = ((x113<x114)-(x115|x116));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 35697U;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -1;
	int64_t x120 = 22LL;
	int64_t t28 = 33115363LL;

	t28 = ((x117<x118)-(x119|x120));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 9825008260864403LLU;
	uint16_t x122 = 89U;
	int64_t x123 = -1LL;
	static volatile int64_t t29 = 8777769684LL;

	t29 = ((x121<x122)-(x123|x124));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = INT16_MIN;
	int16_t x126 = 556;
	uint16_t x127 = 757U;
	static volatile uint64_t x128 = 3493415411LLU;

	t30 = ((x125<x126)-(x127|x128));

	if (t30 != 18446744070216135690LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 16U;
	int16_t x130 = INT16_MAX;
	int64_t x131 = -12732517709492936LL;
	uint8_t x132 = 111U;
	static volatile int64_t t31 = 103026311037304704LL;

	t31 = ((x129<x130)-(x131|x132));

	if (t31 != 12732517709492866LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MAX;
	volatile int64_t x134 = INT64_MIN;
	volatile int16_t x135 = -1;
	volatile int32_t t32 = 9535;

	t32 = ((x133<x134)-(x135|x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x138 = 3U;
	int16_t x139 = INT16_MAX;
	volatile int64_t t33 = -1660813827946LL;

	t33 = ((x137<x138)-(x139|x140));

	if (t33 != 2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MIN;
	volatile int32_t x143 = INT32_MAX;

	t34 = ((x141<x142)-(x143|x144));

	if (t34 != -2147483646) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 28U;
	int32_t x146 = 165;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t35 = 12894500;

	t35 = ((x145<x146)-(x147|x148));

	if (t35 != 129) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = INT32_MAX;
	uint32_t x150 = UINT32_MAX;
	uint16_t x152 = 1824U;
	int32_t t36 = 3512;

	t36 = ((x149<x150)-(x151|x152));

	if (t36 != 928923843) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 662U;
	int32_t x154 = -1;
	volatile uint32_t x155 = UINT32_MAX;
	uint16_t x156 = 6U;
	uint32_t t37 = 259671067U;

	t37 = ((x153<x154)-(x155|x156));

	if (t37 != 2U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 710929460LLU;
	volatile int64_t x158 = INT64_MIN;
	static int16_t x159 = INT16_MIN;
	int32_t t38 = 4519239;

	t38 = ((x157<x158)-(x159|x160));

	if (t38 != 28000) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 3U;
	static int64_t x163 = INT64_MIN;
	static uint16_t x164 = 119U;
	int64_t t39 = 419437882931190111LL;

	t39 = ((x161<x162)-(x163|x164));

	if (t39 != 9223372036854775689LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = INT64_MAX;
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = -1;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t40 = -10;

	t40 = ((x165<x166)-(x167|x168));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = INT64_MIN;
	int16_t x170 = 2027;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = 2;
	int32_t t41 = -24890724;

	t41 = ((x169<x170)-(x171|x172));

	if (t41 != -65534) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x174 = INT16_MIN;
	int64_t x175 = -5591620LL;

	t42 = ((x173<x174)-(x175|x176));

	if (t42 != 21060LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MAX;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = -1LL;
	static volatile int64_t t43 = 2634450439225878453LL;

	t43 = ((x177<x178)-(x179|x180));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -117190892540508LL;
	volatile uint16_t x183 = 1U;
	static uint32_t x184 = 979029U;
	volatile uint32_t t44 = 1959898U;

	t44 = ((x181<x182)-(x183|x184));

	if (t44 != 4293988268U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = -132815767;
	int64_t x187 = -1LL;
	static int16_t x188 = INT16_MIN;
	volatile int64_t t45 = -6LL;

	t45 = ((x185<x186)-(x187|x188));

	if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MAX;
	int64_t x190 = INT64_MAX;
	static int16_t x191 = 47;
	int32_t x192 = -1;
	int32_t t46 = 9;

	t46 = ((x189<x190)-(x191|x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x193 = 44189U;
	static uint8_t x195 = UINT8_MAX;
	int64_t t47 = -169376746915LL;

	t47 = ((x193<x194)-(x195|x196));

	if (t47 != 9223372036854775554LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x198 = -2462963LL;
	int64_t x199 = INT64_MAX;
	int64_t t48 = 50588351240118668LL;

	t48 = ((x197<x198)-(x199|x200));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = 15250;
	volatile int32_t x203 = -1;
	static int32_t x204 = -9;

	t49 = ((x201<x202)-(x203|x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = INT8_MIN;
	int64_t x208 = 9783LL;
	int64_t t50 = -3LL;

	t50 = ((x205<x206)-(x207|x208));

	if (t50 != 9223372036854766025LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x209 = INT16_MIN;
	int64_t x210 = -1LL;
	int64_t x211 = -1LL;
	uint16_t x212 = 23U;
	int64_t t51 = -832006249LL;

	t51 = ((x209<x210)-(x211|x212));

	if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = -1;
	uint8_t x214 = 24U;
	uint32_t x215 = UINT32_MAX;
	volatile int8_t x216 = INT8_MIN;
	uint32_t t52 = 865U;

	t52 = ((x213<x214)-(x215|x216));

	if (t52 != 2U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MAX;
	int16_t x219 = INT16_MAX;
	int32_t t53 = 0;

	t53 = ((x217<x218)-(x219|x220));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x221 = 6U;
	uint32_t x222 = 111476U;
	static volatile int8_t x224 = INT8_MAX;
	volatile int32_t t54 = 112267067;

	t54 = ((x221<x222)-(x223|x224));

	if (t54 != -126) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = UINT16_MAX;
	static volatile uint8_t x226 = 9U;
	static uint64_t x228 = UINT64_MAX;
	volatile uint64_t t55 = 11492147169112329LLU;

	t55 = ((x225<x226)-(x227|x228));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = 11;
	int16_t x230 = -1;
	int64_t x231 = 2344660058249977LL;
	static uint64_t x232 = 3943280430422671239LLU;
	volatile uint64_t t56 = 93224871445311529LLU;

	t56 = ((x229<x230)-(x231|x232));

	if (t56 != 14503458884381327361LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = -1;
	uint8_t x234 = 48U;
	static uint16_t x235 = 15761U;
	volatile int32_t t57 = 3;

	t57 = ((x233<x234)-(x235|x236));

	if (t57 != -2147483646) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = UINT64_MAX;
	volatile int8_t x238 = INT8_MIN;
	uint16_t x239 = 7U;
	int32_t x240 = INT32_MAX;
	volatile int32_t t58 = 126757;

	t58 = ((x237<x238)-(x239|x240));

	if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MAX;
	uint32_t x243 = UINT32_MAX;
	volatile uint32_t t59 = 222882U;

	t59 = ((x241<x242)-(x243|x244));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = UINT8_MAX;
	static int64_t x247 = INT64_MIN;
	uint32_t x248 = 98U;
	static volatile int64_t t60 = -11189LL;

	t60 = ((x245<x246)-(x247|x248));

	if (t60 != 9223372036854775711LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = 773548204LL;
	int16_t x250 = -263;
	static int32_t x251 = INT32_MIN;
	int8_t x252 = 47;

	t61 = ((x249<x250)-(x251|x252));

	if (t61 != 2147483601) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = INT8_MAX;
	uint8_t x254 = 4U;
	volatile uint16_t x256 = UINT16_MAX;
	static volatile int32_t t62 = 1;

	t62 = ((x253<x254)-(x255|x256));

	if (t62 != -65535) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x257 = UINT32_MAX;
	static int8_t x258 = INT8_MIN;
	uint16_t x259 = 1U;
	static int8_t x260 = INT8_MIN;

	t63 = ((x257<x258)-(x259|x260));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x261 = -1;
	volatile uint8_t x262 = 6U;
	volatile int64_t x264 = -1LL;
	static volatile uint64_t t64 = 22653536350LLU;

	t64 = ((x261<x262)-(x263|x264));

	if (t64 != 2LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1787125996775854435LL;
	static int64_t x266 = INT64_MIN;
	int64_t x268 = INT64_MAX;
	static volatile int64_t t65 = -30412896653736135LL;

	t65 = ((x265<x266)-(x267|x268));

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = 115993U;
	int32_t x270 = INT32_MAX;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 2216937394112LLU;

	t66 = ((x269<x270)-(x271|x272));

	if (t66 != 1413214273LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = UINT32_MAX;
	volatile int8_t x276 = INT8_MAX;

	t67 = ((x273<x274)-(x275|x276));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = UINT16_MAX;
	uint8_t x278 = 2U;
	uint8_t x279 = UINT8_MAX;

	t68 = ((x277<x278)-(x279|x280));

	if (t68 != -255) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MAX;
	int32_t t69 = -336376487;

	t69 = ((x281<x282)-(x283|x284));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x286 = 1783;
	volatile uint16_t x288 = 22U;

	t70 = ((x285<x286)-(x287|x288));

	if (t70 != -26902) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x290 = INT16_MIN;
	uint16_t x291 = 199U;

	t71 = ((x289<x290)-(x291|x292));

	if (t71 != -239) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x294 = 2534487U;
	static volatile int16_t x295 = -497;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t72 = 154173U;

	t72 = ((x293<x294)-(x295|x296));

	if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = 119U;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	int64_t x300 = INT64_MIN;
	volatile int64_t t73 = -249769572109152367LL;

	t73 = ((x297<x298)-(x299|x300));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {


	t74 = ((x301<x302)-(x303|x304));

	if (t74 != 4293121175U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = INT8_MIN;
	uint32_t x307 = 10245152U;
	int32_t x308 = -1;
	volatile uint32_t t75 = 340980U;

	t75 = ((x305<x306)-(x307|x308));

	if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	int16_t x312 = -1;
	volatile int32_t t76 = 2316;

	t76 = ((x309<x310)-(x311|x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = -1LL;
	int16_t x316 = 13252;

	t77 = ((x313<x314)-(x315|x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x317 = 167U;
	uint16_t x319 = 340U;
	int32_t x320 = INT32_MAX;
	volatile int32_t t78 = 644;

	t78 = ((x317<x318)-(x319|x320));

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = 1231;
	int8_t x322 = -1;
	uint32_t x324 = UINT32_MAX;

	t79 = ((x321<x322)-(x323|x324));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x325 = 47U;
	volatile int64_t x327 = 28971908505LL;
	int64_t t80 = -190855207LL;

	t80 = ((x325<x326)-(x327|x328));

	if (t80 != -28971908505LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = 7;
	int64_t x330 = -1LL;
	uint32_t x331 = 1484412173U;
	uint16_t x332 = 72U;
	uint32_t t81 = 53U;

	t81 = ((x329<x330)-(x331|x332));

	if (t81 != 2810555059U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x333 = -4;
	int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t82 = 3;

	t82 = ((x333<x334)-(x335|x336));

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x337 = -4641;
	static uint32_t x338 = 11U;
	int64_t x339 = -2016791829LL;
	static int8_t x340 = -1;
	int64_t t83 = -2394473LL;

	t83 = ((x337<x338)-(x339|x340));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x341 = -1;
	int8_t x342 = 34;
	static int64_t x343 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;
	uint64_t t84 = 10661005951LLU;

	t84 = ((x341<x342)-(x343|x344));

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = 15U;
	volatile int16_t x346 = -1215;
	int32_t x347 = -1;

	t85 = ((x345<x346)-(x347|x348));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x349 = 117U;
	uint64_t x350 = 44925LLU;
	int16_t x351 = INT16_MAX;
	uint64_t t86 = 90094610556646437LLU;

	t86 = ((x349<x350)-(x351|x352));

	if (t86 != 18446743230355308546LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x355 = INT32_MAX;
	uint64_t x356 = 3214LLU;

	t87 = ((x353<x354)-(x355|x356));

	if (t87 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x358 = -1;
	static volatile uint64_t x359 = 101828LLU;
	int32_t x360 = 3492;
	uint64_t t88 = 46732108837117LLU;

	t88 = ((x357<x358)-(x359|x360));

	if (t88 != 18446744073709449757LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = INT32_MIN;
	int64_t x364 = 6653338071029LL;
	static int64_t t89 = -2030454LL;

	t89 = ((x361<x362)-(x363|x364));

	if (t89 != 20492LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x370 = 56U;
	int64_t x372 = -209624LL;
	static int64_t t90 = -131697769676903963LL;

	t90 = ((x369<x370)-(x371|x372));

	if (t90 != 13017LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x373 = 2005U;
	volatile int32_t x374 = INT32_MAX;
	static uint8_t x375 = 1U;

	t91 = ((x373<x374)-(x375|x376));

	if (t91 != 18446744073709511860LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x378 = INT32_MIN;
	static uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MIN;
	int64_t t92 = -13484LL;

	t92 = ((x377<x378)-(x379|x380));

	if (t92 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = INT32_MIN;
	static uint8_t x383 = 3U;
	static volatile int32_t t93 = -1;

	t93 = ((x381<x382)-(x383|x384));

	if (t93 != -10) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x386 = UINT8_MAX;
	int32_t x387 = INT32_MIN;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t94 = 4973792;

	t94 = ((x385<x386)-(x387|x388));

	if (t94 != 129) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x391 = -2;
	uint16_t x392 = UINT16_MAX;
	int32_t t95 = -32853805;

	t95 = ((x389<x390)-(x391|x392));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x393 = INT8_MIN;
	uint8_t x394 = UINT8_MAX;
	volatile int32_t x396 = -1;
	static uint64_t t96 = 2319890232564067LLU;

	t96 = ((x393<x394)-(x395|x396));

	if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = 3U;
	static volatile int32_t x398 = 1229951;
	static volatile int32_t t97 = 26777077;

	t97 = ((x397<x398)-(x399|x400));

	if (t97 != 18) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MAX;
	uint16_t x404 = 81U;
	static volatile int32_t t98 = -2647;

	t98 = ((x401<x402)-(x403|x404));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x405 = 1;
	uint32_t x406 = 929507141U;
	volatile uint64_t x407 = 9890142LLU;
	static uint8_t x408 = 0U;
	volatile uint64_t t99 = 818LLU;

	t99 = ((x405<x406)-(x407|x408));

	if (t99 != 18446744073699661475LLU) { NG(); } else { ; }
	
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

