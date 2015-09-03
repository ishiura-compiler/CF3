#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 5U;
int64_t x6 = INT64_MIN;
static uint8_t x11 = 1U;
volatile int32_t t2 = -2025;
int64_t t3 = -23494048LL;
static int16_t x19 = INT16_MIN;
int16_t x20 = INT16_MAX;
int8_t x25 = -1;
volatile int32_t t6 = 1;
static volatile int64_t x32 = -476636LL;
static int64_t x37 = -1LL;
int16_t x45 = INT16_MAX;
volatile uint8_t x48 = UINT8_MAX;
static volatile int32_t x49 = INT32_MIN;
static uint32_t x50 = 365070U;
static int32_t x52 = 24571674;
int32_t t12 = -193414;
static int64_t x56 = INT64_MIN;
int16_t x59 = -96;
int32_t t14 = 60;
uint16_t x61 = 5750U;
static uint64_t x64 = 14751262663869255LLU;
int32_t t15 = -2212229;
int32_t t16 = 1544695;
int8_t x73 = -23;
int64_t x74 = INT64_MIN;
volatile int32_t t18 = -697996861;
int64_t x78 = INT64_MIN;
static volatile uint16_t x82 = 4336U;
volatile int32_t t20 = 485421;
uint32_t x89 = UINT32_MAX;
uint8_t x100 = 27U;
static int64_t t24 = 24502546593265165LL;
uint8_t x107 = 15U;
uint8_t x113 = 0U;
int16_t x116 = INT16_MAX;
uint64_t x120 = 129099534LLU;
volatile int32_t t29 = -506000;
uint16_t x132 = UINT16_MAX;
static volatile int32_t t35 = 35;
static uint32_t x147 = 81U;
uint32_t t36 = 57139142U;
int64_t x155 = 691076608418051071LL;
static int32_t t38 = -25;
int8_t x159 = INT8_MIN;
volatile int16_t x162 = INT16_MAX;
static int8_t x173 = INT8_MAX;
static int8_t x181 = INT8_MIN;
int32_t t45 = 2589829;
volatile int16_t x186 = 0;
int16_t x192 = -1;
uint32_t x200 = 1524920U;
int32_t t49 = -28;
int8_t x204 = INT8_MIN;
int32_t t52 = -3722;
volatile uint16_t x214 = UINT16_MAX;
uint16_t x215 = 61U;
int32_t t54 = -51;
int32_t x226 = INT32_MIN;
static int16_t x227 = INT16_MIN;
int32_t x238 = INT32_MIN;
int64_t x240 = -502183187975307LL;
volatile uint64_t t59 = UINT64_MAX;
uint32_t x243 = 58U;
uint32_t x245 = 2027981U;
static uint8_t x246 = UINT8_MAX;
static int8_t x248 = INT8_MAX;
static volatile uint32_t t61 = 6U;
volatile uint64_t x249 = UINT64_MAX;
int32_t t67 = 27;
int16_t x276 = -1;
volatile int64_t x277 = -1LL;
volatile int64_t x279 = INT64_MIN;
int64_t x281 = INT64_MAX;
int32_t x301 = INT32_MIN;
static int8_t x304 = -1;
volatile int8_t x307 = -1;
int64_t x310 = INT64_MIN;
int64_t x311 = 27818934083431LL;
int8_t x320 = 0;
volatile int8_t x325 = INT8_MIN;
volatile int32_t t81 = 337771967;
volatile uint64_t x333 = 9321621707560LLU;
int16_t x334 = -1;
uint8_t x337 = UINT8_MAX;
volatile int32_t x338 = INT32_MIN;
int32_t t85 = 320;
int16_t x349 = -1;
int16_t x357 = INT16_MIN;
volatile uint32_t x360 = 23801U;
static int16_t x361 = INT16_MAX;
int32_t t90 = 480791708;
uint16_t x365 = 103U;
volatile int32_t t92 = -120231;
int32_t x389 = -2707;
volatile int16_t x391 = INT16_MIN;
int8_t x393 = -3;
int32_t t98 = 1;
static int8_t x399 = 1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int64_t x3 = INT64_MIN;
	int32_t x4 = 816;
	int32_t t0 = INT32_MAX;

	t0 = (x1|(x2<=(x3^x4)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 10U;
	int64_t x7 = 7399LL;
	volatile int32_t x8 = -97944;
	volatile int32_t t1 = -6;

	t1 = (x5|(x6<=(x7^x8)));

	if (t1 != 11) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -354336268;
	static int16_t x10 = INT16_MIN;
	volatile int16_t x12 = INT16_MAX;

	t2 = (x9|(x10<=(x11^x12)));

	if (t2 != -354336267) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static uint32_t x14 = 97594420U;
	int16_t x15 = -3629;
	int64_t x16 = INT64_MIN;

	t3 = (x13|(x14<=(x15^x16)));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MIN;
	int32_t t4 = -52;

	t4 = (x17|(x18<=(x19^x20)));

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	static uint32_t x23 = 910631U;
	volatile uint16_t x24 = 3901U;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x21|(x22<=(x23^x24)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = -1;
	int16_t x27 = -3;
	int64_t x28 = INT64_MAX;

	t6 = (x25|(x26<=(x27^x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 181;
	int32_t x30 = INT32_MIN;
	volatile uint64_t x31 = UINT64_MAX;
	volatile int32_t t7 = 0;

	t7 = (x29|(x30<=(x31^x32)));

	if (t7 != 181) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2U;
	static int16_t x34 = 3;
	int16_t x35 = INT16_MAX;
	int64_t x36 = INT64_MAX;
	volatile int32_t t8 = -220045573;

	t8 = (x33|(x34<=(x35^x36)));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = 1;
	int32_t x39 = INT32_MIN;
	uint8_t x40 = UINT8_MAX;
	static int64_t t9 = 5788601035860LL;

	t9 = (x37|(x38<=(x39^x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int32_t x42 = INT32_MIN;
	int16_t x43 = -1;
	int32_t x44 = 23801086;
	int64_t t10 = 7344282720LL;

	t10 = (x41|(x42<=(x43^x44)));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = 1;
	uint8_t x47 = 0U;
	volatile int32_t t11 = 298028;

	t11 = (x45|(x46<=(x47^x48)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = 0;

	t12 = (x49|(x50<=(x51^x52)));

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 3283LLU;
	int64_t x54 = -1LL;
	static int32_t x55 = INT32_MIN;
	uint64_t t13 = 1395353560178383LLU;

	t13 = (x53|(x54<=(x55^x56)));

	if (t13 != 3283LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	uint16_t x58 = UINT16_MAX;
	uint8_t x60 = 71U;

	t14 = (x57|(x58<=(x59^x60)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;

	t15 = (x61|(x62<=(x63^x64)));

	if (t15 != 5750) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 1U;
	volatile int16_t x66 = -1;
	uint32_t x67 = 343U;
	int64_t x68 = 1LL;

	t16 = (x65|(x66<=(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static uint64_t x70 = 305591909393905LLU;
	uint16_t x71 = 969U;
	volatile int64_t x72 = INT64_MIN;
	int32_t t17 = -124;

	t17 = (x69|(x70<=(x71^x72)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MAX;

	t18 = (x73|(x74<=(x75^x76)));

	if (t18 != -23) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	uint32_t x79 = 395504U;
	uint64_t x80 = 155634LLU;
	volatile int32_t t19 = -13276;

	t19 = (x77|(x78<=(x79^x80)));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	static int16_t x83 = -1;
	uint64_t x84 = 320291040968LLU;

	t20 = (x81|(x82<=(x83^x84)));

	if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -1;
	uint8_t x86 = UINT8_MAX;
	uint32_t x87 = 760U;
	int8_t x88 = -1;
	volatile int32_t t21 = 4;

	t21 = (x85|(x86<=(x87^x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = INT32_MIN;
	volatile int32_t x91 = INT32_MIN;
	int32_t x92 = 0;
	uint32_t t22 = UINT32_MAX;

	t22 = (x89|(x90<=(x91^x92)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MIN;
	int8_t x95 = 29;
	int64_t x96 = INT64_MAX;
	volatile int64_t t23 = 1007950508541778LL;

	t23 = (x93|(x94<=(x95^x96)));

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -113006230567LL;
	int32_t x98 = INT32_MAX;
	volatile int32_t x99 = 422379150;

	t24 = (x97|(x98<=(x99^x100)));

	if (t24 != -113006230567LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MIN;
	volatile uint16_t x103 = 41U;
	volatile int16_t x104 = INT16_MAX;
	volatile int64_t t25 = -9368910377LL;

	t25 = (x101|(x102<=(x103^x104)));

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int64_t x106 = INT64_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = 2913220;

	t26 = (x105|(x106<=(x107^x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 754955328U;
	static int64_t x110 = 1LL;
	static int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MAX;
	uint32_t t27 = 462972U;

	t27 = (x109|(x110<=(x111^x112)));

	if (t27 != 754955328U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	int16_t x115 = -810;
	int32_t t28 = -11741;

	t28 = (x113|(x114<=(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MAX;
	int16_t x119 = -83;

	t29 = (x117|(x118<=(x119^x120)));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 1960545544U;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	int8_t x124 = -1;
	volatile uint32_t t30 = 777935U;

	t30 = (x121|(x122<=(x123^x124)));

	if (t30 != 1960545545U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = INT8_MIN;
	static int32_t x126 = INT32_MIN;
	volatile uint32_t x127 = 2U;
	uint32_t x128 = 340U;
	static int32_t t31 = -18615;

	t31 = (x125|(x126<=(x127^x128)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	uint16_t x131 = 96U;
	int64_t t32 = -14169387466LL;

	t32 = (x129|(x130<=(x131^x132)));

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 5411699U;
	int32_t x134 = INT32_MIN;
	static uint32_t x135 = 419404U;
	static volatile int32_t x136 = INT32_MAX;
	volatile uint32_t t33 = 5002U;

	t33 = (x133|(x134<=(x135^x136)));

	if (t33 != 5411699U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 8155948LLU;
	static volatile int32_t x138 = -1;
	int16_t x139 = 1976;
	int8_t x140 = -1;
	volatile uint64_t t34 = 3492LLU;

	t34 = (x137|(x138<=(x139^x140)));

	if (t34 != 8155948LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	static uint64_t x144 = UINT64_MAX;

	t35 = (x141|(x142<=(x143^x144)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 4225596U;
	uint8_t x146 = UINT8_MAX;
	int64_t x148 = -1LL;

	t36 = (x145|(x146<=(x147^x148)));

	if (t36 != 4225596U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 58;
	int64_t x150 = INT64_MAX;
	int64_t x151 = 194095133705054576LL;
	int16_t x152 = 317;
	int32_t t37 = 0;

	t37 = (x149|(x150<=(x151^x152)));

	if (t37 != 58) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MAX;
	volatile uint16_t x154 = 2136U;
	int8_t x156 = -2;

	t38 = (x153|(x154<=(x155^x156)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	static uint16_t x158 = UINT16_MAX;
	volatile int8_t x160 = INT8_MIN;
	static int64_t t39 = 4472260201989104LL;

	t39 = (x157|(x158<=(x159^x160)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	volatile uint16_t x163 = 302U;
	int8_t x164 = INT8_MIN;
	uint32_t t40 = UINT32_MAX;

	t40 = (x161|(x162<=(x163^x164)));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = UINT32_MAX;
	int32_t x166 = 188967;
	uint64_t x167 = UINT64_MAX;
	uint32_t x168 = 6748U;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x165|(x166<=(x167^x168)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = -1;
	static int16_t x171 = INT16_MIN;
	volatile int64_t x172 = 5551919537LL;
	static int64_t t42 = INT64_MIN;

	t42 = (x169|(x170<=(x171^x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -12;
	volatile int16_t x175 = -1652;
	volatile int64_t x176 = INT64_MAX;
	volatile int32_t t43 = 11163;

	t43 = (x173|(x174<=(x175^x176)));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 1U;
	static uint16_t x178 = 13281U;
	int16_t x179 = 1;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = -258006;

	t44 = (x177|(x178<=(x179^x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 175U;
	static int16_t x183 = INT16_MIN;
	uint8_t x184 = UINT8_MAX;

	t45 = (x181|(x182<=(x183^x184)));

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	static volatile int64_t x187 = 77657LL;
	static volatile uint8_t x188 = UINT8_MAX;
	volatile int32_t t46 = -1400932;

	t46 = (x185|(x186<=(x187^x188)));

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 2U;
	int16_t x190 = INT16_MIN;
	static uint16_t x191 = 10U;
	static int32_t t47 = -6919;

	t47 = (x189|(x190<=(x191^x192)));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	static int16_t x194 = 825;
	int16_t x195 = INT16_MIN;
	volatile uint64_t x196 = 1042452270LLU;
	volatile int32_t t48 = -1118;

	t48 = (x193|(x194<=(x195^x196)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 0U;
	int64_t x198 = INT64_MAX;
	uint16_t x199 = UINT16_MAX;

	t49 = (x197|(x198<=(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 1U;
	static int32_t x202 = -33;
	uint16_t x203 = 3154U;
	volatile int32_t t50 = -81404693;

	t50 = (x201|(x202<=(x203^x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 225;
	int16_t x206 = 25;
	int32_t x207 = INT32_MAX;
	static int8_t x208 = -1;
	static int32_t t51 = 90510686;

	t51 = (x205|(x206<=(x207^x208)));

	if (t51 != 225) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	uint32_t x210 = 2377U;
	int64_t x211 = INT64_MIN;
	volatile int8_t x212 = INT8_MAX;

	t52 = (x209|(x210<=(x211^x212)));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t53 = 149574;

	t53 = (x213|(x214<=(x215^x216)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 58U;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = 232;
	volatile int32_t x220 = 1;

	t54 = (x217|(x218<=(x219^x220)));

	if (t54 != 58) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 136U;
	volatile int8_t x222 = INT8_MIN;
	volatile int64_t x223 = -499LL;
	static int32_t x224 = -1;
	int32_t t55 = -997;

	t55 = (x221|(x222<=(x223^x224)));

	if (t55 != 137) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x228 = UINT32_MAX;
	int64_t t56 = INT64_MIN;

	t56 = (x225|(x226<=(x227^x228)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	uint32_t x230 = 125U;
	int16_t x231 = -9239;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t57 = -501301;

	t57 = (x229|(x230<=(x231^x232)));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -10;
	volatile int32_t x234 = INT32_MIN;
	uint16_t x235 = 13029U;
	int8_t x236 = INT8_MAX;
	static int32_t t58 = 1596222;

	t58 = (x233|(x234<=(x235^x236)));

	if (t58 != -9) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x239 = 183;

	t59 = (x237|(x238<=(x239^x240)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = -1;
	static int32_t x244 = INT32_MAX;
	static int32_t t60 = -104588446;

	t60 = (x241|(x242<=(x243^x244)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x247 = INT64_MIN;

	t61 = (x245|(x246<=(x247^x248)));

	if (t61 != 2027981U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MAX;
	static int8_t x251 = -59;
	int32_t x252 = INT32_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x249|(x250<=(x251^x252)));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -1LL;
	static uint8_t x254 = UINT8_MAX;
	static int64_t x255 = INT64_MIN;
	volatile uint8_t x256 = 0U;
	int64_t t63 = -10682092440821964LL;

	t63 = (x253|(x254<=(x255^x256)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = -17;
	int8_t x258 = 1;
	int8_t x259 = -16;
	static int16_t x260 = -1;
	int32_t t64 = -11977;

	t64 = (x257|(x258<=(x259^x260)));

	if (t64 != -17) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = 0;
	int16_t x262 = -11648;
	static uint32_t x263 = 421U;
	int8_t x264 = -6;
	volatile int32_t t65 = 1895;

	t65 = (x261|(x262<=(x263^x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = -22;
	int16_t x267 = INT16_MIN;
	static volatile uint64_t x268 = 28173412042LLU;
	static volatile int32_t t66 = INT32_MIN;

	t66 = (x265|(x266<=(x267^x268)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = 32U;
	int64_t x270 = -1LL;
	uint8_t x271 = 46U;
	int32_t x272 = INT32_MAX;

	t67 = (x269|(x270<=(x271^x272)));

	if (t67 != 33) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = UINT16_MAX;
	volatile uint16_t x274 = 82U;
	volatile int32_t x275 = INT32_MIN;
	static int32_t t68 = -6972154;

	t68 = (x273|(x274<=(x275^x276)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -7750;
	volatile uint32_t x280 = 158921047U;
	volatile int64_t t69 = 19LL;

	t69 = (x277|(x278<=(x279^x280)));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MAX;
	volatile int64_t x283 = 6390401LL;
	static int8_t x284 = INT8_MAX;
	volatile int64_t t70 = INT64_MAX;

	t70 = (x281|(x282<=(x283^x284)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 998029004903652284LLU;
	int64_t x286 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	static int8_t x288 = INT8_MAX;
	uint64_t t71 = 24551LLU;

	t71 = (x285|(x286<=(x287^x288)));

	if (t71 != 998029004903652285LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int8_t x290 = 17;
	uint8_t x291 = 21U;
	int64_t x292 = INT64_MAX;
	volatile int64_t t72 = 151007953223569099LL;

	t72 = (x289|(x290<=(x291^x292)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 1U;
	int64_t x294 = -1LL;
	volatile int32_t x295 = 46826072;
	int32_t x296 = INT32_MIN;
	volatile uint32_t t73 = 219523614U;

	t73 = (x293|(x294<=(x295^x296)));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 8766683294028946LLU;
	static uint8_t x298 = 6U;
	static int16_t x299 = INT16_MIN;
	int16_t x300 = -7180;
	static volatile uint64_t t74 = 760597718121LLU;

	t74 = (x297|(x298<=(x299^x300)));

	if (t74 != 8766683294028947LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x302 = -34111;
	uint8_t x303 = 50U;
	int32_t t75 = -5874;

	t75 = (x301|(x302<=(x303^x304)));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint32_t x306 = 2U;
	volatile uint16_t x308 = UINT16_MAX;
	int32_t t76 = 1;

	t76 = (x305|(x306<=(x307^x308)));

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MAX;
	static volatile int8_t x312 = INT8_MIN;
	int64_t t77 = INT64_MAX;

	t77 = (x309|(x310<=(x311^x312)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	static int8_t x314 = INT8_MAX;
	static int32_t x315 = INT32_MAX;
	volatile uint8_t x316 = UINT8_MAX;
	int32_t t78 = -19;

	t78 = (x313|(x314<=(x315^x316)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MAX;
	volatile int16_t x318 = -5;
	static int8_t x319 = INT8_MIN;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x317|(x318<=(x319^x320)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 57U;
	volatile int16_t x322 = INT16_MIN;
	int16_t x323 = -5718;
	static uint16_t x324 = 17168U;
	int32_t t80 = 3986519;

	t80 = (x321|(x322<=(x323^x324)));

	if (t80 != 57) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = 3U;
	uint8_t x327 = 1U;
	uint32_t x328 = UINT32_MAX;

	t81 = (x325|(x326<=(x327^x328)));

	if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int64_t x330 = 615LL;
	int8_t x331 = 1;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -51108018;

	t82 = (x329|(x330<=(x331^x332)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = 0;
	volatile uint8_t x336 = 0U;
	volatile uint64_t t83 = 7LLU;

	t83 = (x333|(x334<=(x335^x336)));

	if (t83 != 9321621707561LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x339 = -1;
	volatile int16_t x340 = -28;
	int32_t t84 = -51019297;

	t84 = (x337|(x338<=(x339^x340)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 2U;
	uint8_t x342 = 99U;
	int8_t x343 = 1;
	int8_t x344 = INT8_MIN;

	t85 = (x341|(x342<=(x343^x344)));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MAX;
	volatile int32_t x346 = 256899321;
	uint8_t x347 = 12U;
	int64_t x348 = INT64_MIN;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x345|(x346<=(x347^x348)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -3;
	int64_t x351 = INT64_MIN;
	int64_t x352 = INT64_MIN;
	static volatile int32_t t87 = 210946978;

	t87 = (x349|(x350<=(x351^x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 116019085;
	int8_t x354 = -29;
	volatile uint8_t x355 = 5U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -74;

	t88 = (x353|(x354<=(x355^x356)));

	if (t88 != 116019085) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x358 = INT64_MAX;
	static uint16_t x359 = 7042U;
	static volatile int32_t t89 = -3632;

	t89 = (x357|(x358<=(x359^x360)));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = INT32_MIN;
	uint64_t x363 = 225LLU;
	static int16_t x364 = -288;

	t90 = (x361|(x362<=(x363^x364)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MAX;
	volatile int16_t x367 = INT16_MIN;
	volatile int64_t x368 = INT64_MIN;
	volatile int32_t t91 = -27591;

	t91 = (x365|(x366<=(x367^x368)));

	if (t91 != 103) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MIN;
	uint16_t x370 = UINT16_MAX;
	static uint8_t x371 = UINT8_MAX;
	int32_t x372 = 1;

	t92 = (x369|(x370<=(x371^x372)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = UINT64_MAX;
	uint16_t x374 = 6U;
	int32_t x375 = INT32_MIN;
	int8_t x376 = 3;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x373|(x374<=(x375^x376)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -15;
	uint16_t x378 = 1U;
	uint8_t x379 = 15U;
	volatile uint16_t x380 = 6868U;
	int32_t t94 = -7;

	t94 = (x377|(x378<=(x379^x380)));

	if (t94 != -15) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 76U;
	int32_t x382 = -875950395;
	static int16_t x383 = -1;
	int32_t x384 = -1;
	static volatile int32_t t95 = 23954;

	t95 = (x381|(x382<=(x383^x384)));

	if (t95 != 77) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	uint16_t x386 = UINT16_MAX;
	static int64_t x387 = INT64_MIN;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = -470231;

	t96 = (x385|(x386<=(x387^x388)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x390 = 462;
	int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -128;

	t97 = (x389|(x390<=(x391^x392)));

	if (t97 != -2707) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = UINT64_MAX;
	static int8_t x395 = -1;
	volatile int64_t x396 = 33000573791690LL;

	t98 = (x393|(x394<=(x395^x396)));

	if (t98 != -3) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 54U;
	static volatile int32_t x398 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;
	int32_t t99 = 41102;

	t99 = (x397|(x398<=(x399^x400)));

	if (t99 != 55) { NG(); } else { ; }
	
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

