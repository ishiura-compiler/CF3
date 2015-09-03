#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
static int8_t x7 = INT8_MIN;
static int32_t t1 = -134;
int16_t x16 = -2731;
int32_t t3 = -63404;
int16_t x20 = -1;
int32_t t6 = 6924507;
int32_t x29 = INT32_MAX;
volatile int8_t x36 = INT8_MIN;
volatile uint32_t x39 = 1771813U;
static uint16_t x41 = 16U;
static int64_t x47 = INT64_MIN;
uint32_t x52 = 2300U;
volatile uint64_t x56 = UINT64_MAX;
static volatile int32_t t14 = 1;
static int8_t x62 = -11;
volatile uint32_t x64 = 1911U;
uint32_t x65 = 209475856U;
int32_t x68 = INT32_MAX;
int64_t x73 = -25091264LL;
uint16_t x93 = 129U;
volatile int64_t x94 = INT64_MIN;
int32_t x95 = INT32_MIN;
volatile int16_t x107 = 138;
volatile int32_t t28 = -254433;
int16_t x117 = 631;
static volatile int32_t t29 = -1;
volatile uint32_t t30 = 266368380U;
int32_t t31 = 415;
int16_t x131 = INT16_MAX;
int16_t x133 = -483;
int64_t x138 = INT64_MAX;
int32_t t34 = -22;
int32_t x142 = INT32_MIN;
int32_t x143 = -1;
static uint32_t x149 = 1651U;
uint64_t x152 = UINT64_MAX;
uint64_t x153 = 57LLU;
volatile uint64_t t38 = 5865494880771453LLU;
int64_t x168 = -32755916LL;
uint32_t x169 = 401963888U;
static volatile int64_t x176 = INT64_MAX;
volatile int32_t t43 = -29;
int64_t x179 = INT64_MIN;
int64_t x181 = 250736127LL;
static uint32_t x184 = 412U;
static int8_t x192 = 12;
uint32_t x199 = 71150556U;
volatile int32_t t49 = 1;
volatile int32_t t50 = -44;
static int8_t x208 = INT8_MAX;
uint32_t x213 = UINT32_MAX;
volatile int32_t x216 = INT32_MIN;
int32_t t54 = 1241;
volatile int32_t t55 = -6657254;
static uint16_t x231 = 12429U;
int64_t t57 = 35LL;
int64_t x234 = -99964081979996LL;
uint32_t x237 = 1942371614U;
volatile int16_t x238 = -130;
static uint8_t x240 = 1U;
static uint32_t x242 = UINT32_MAX;
int16_t x252 = -1;
uint16_t x254 = 0U;
int32_t x261 = 2416433;
uint8_t x263 = 0U;
uint8_t x265 = UINT8_MAX;
uint32_t x266 = UINT32_MAX;
int64_t x267 = -782752LL;
int32_t t66 = 128;
uint64_t t67 = 6587008185LLU;
uint16_t x282 = 1860U;
int32_t x283 = -1;
static uint64_t t72 = 5563LLU;
volatile uint64_t t73 = 2186459854LLU;
uint64_t x299 = 471329203157LLU;
volatile int8_t x301 = INT8_MAX;
int16_t x302 = INT16_MIN;
volatile int32_t t76 = -1;
static int64_t x311 = INT64_MIN;
int64_t x315 = 100LL;
static volatile uint16_t x317 = 17961U;
static uint32_t x321 = 26315991U;
volatile uint8_t x323 = 15U;
volatile int8_t x325 = INT8_MIN;
static int16_t x336 = -1;
int64_t t83 = 676831457211150LL;
int8_t x337 = 6;
int32_t x342 = 39159411;
uint64_t x348 = 1284903LLU;
volatile int32_t t86 = -391;
uint16_t x351 = 296U;
static int32_t x356 = -1;
static int64_t t88 = 46LL;
volatile int16_t x361 = -1299;
uint32_t x365 = 90U;
int8_t x366 = -1;
int32_t x370 = 228174;
uint32_t x372 = UINT32_MAX;
int16_t x376 = -28;
int8_t x384 = -1;
int16_t x386 = INT16_MIN;
int8_t x389 = INT8_MIN;
uint64_t x397 = 2683LLU;


void f0(void) {
	int64_t x1 = -584902627367LL;
	int32_t x3 = -45444;
	uint64_t x4 = UINT64_MAX;
	volatile int64_t t0 = -58361196008147983LL;

	t0 = (x1&(x2<(x3|x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint16_t x6 = UINT16_MAX;
	int32_t x8 = -1;

	t1 = (x5&(x6<(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -14;
	int64_t x10 = -38393176246101675LL;
	int8_t x11 = INT8_MIN;
	static int16_t x12 = 18;
	volatile int32_t t2 = 7083;

	t2 = (x9&(x10<(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -60912284;
	int16_t x14 = -1;
	volatile int32_t x15 = INT32_MAX;

	t3 = (x13&(x14<(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -2;
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = 1041972540;
	int32_t t4 = -616;

	t4 = (x17&(x18<(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 175;
	int16_t x22 = INT16_MAX;
	int32_t x23 = -519044898;
	uint64_t x24 = 3890903468065367LLU;
	volatile int32_t t5 = -21659659;

	t5 = (x21&(x22<(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -8627189;
	int16_t x26 = INT16_MIN;
	int64_t x27 = 253LL;
	uint64_t x28 = 7151897765895LLU;

	t6 = (x25&(x26<(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = UINT8_MAX;
	int16_t x31 = INT16_MIN;
	static uint32_t x32 = UINT32_MAX;
	static volatile int32_t t7 = -1;

	t7 = (x29&(x30<(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int64_t x34 = -153022930LL;
	int16_t x35 = -1;
	volatile int64_t t8 = -86966877093LL;

	t8 = (x33&(x34<(x35|x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 557LLU;
	int64_t x38 = -1LL;
	int16_t x40 = -1;
	static volatile uint64_t t9 = 223771238892LLU;

	t9 = (x37&(x38<(x39|x40)));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MAX;
	volatile int16_t x43 = -1;
	int16_t x44 = -212;
	static volatile int32_t t10 = -85193937;

	t10 = (x41&(x42<(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	static int16_t x46 = -1;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -4;

	t11 = (x45&(x46<(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 11U;
	int16_t x50 = 294;
	int8_t x51 = INT8_MIN;
	volatile int32_t t12 = -8939340;

	t12 = (x49&(x50<(x51|x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = INT8_MIN;
	static volatile uint16_t x54 = UINT16_MAX;
	volatile uint64_t x55 = 428933066439LLU;
	volatile int32_t t13 = 4;

	t13 = (x53&(x54<(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = -7;
	int16_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = INT64_MIN;

	t14 = (x57&(x58<(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	int8_t x63 = INT8_MIN;
	static volatile int32_t t15 = -8075055;

	t15 = (x61&(x62<(x63|x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -16771373155769945LL;
	volatile uint16_t x67 = 3401U;
	uint32_t t16 = 6213U;

	t16 = (x65&(x66<(x67|x68)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	static int8_t x70 = -7;
	uint16_t x71 = 5210U;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -8;

	t17 = (x69&(x70<(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	uint16_t x75 = UINT16_MAX;
	int16_t x76 = INT16_MIN;
	int64_t t18 = -54LL;

	t18 = (x73&(x74<(x75|x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = -1LL;
	int8_t x79 = INT8_MAX;
	uint32_t x80 = 128015720U;
	static volatile int64_t t19 = -286LL;

	t19 = (x77&(x78<(x79|x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 35123147U;
	int16_t x82 = -1;
	static int16_t x83 = -31;
	static uint16_t x84 = UINT16_MAX;
	volatile uint32_t t20 = 1360U;

	t20 = (x81&(x82<(x83|x84)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 14U;
	uint64_t x86 = UINT64_MAX;
	static int16_t x87 = INT16_MAX;
	volatile uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -2;

	t21 = (x85&(x86<(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = 2U;
	volatile int16_t x91 = -7;
	int16_t x92 = -396;
	static volatile int32_t t22 = 108935709;

	t22 = (x89&(x90<(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x96 = INT16_MIN;
	static int32_t t23 = 36;

	t23 = (x93&(x94<(x95|x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 81287500431LL;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 23955U;
	int64_t x100 = 3650720729LL;
	volatile int64_t t24 = -4LL;

	t24 = (x97&(x98<(x99|x100)));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x102 = INT32_MIN;
	volatile uint64_t x103 = 24945514993882910LLU;
	volatile int32_t x104 = -3743;
	static uint64_t t25 = 8329945782LLU;

	t25 = (x101&(x102<(x103|x104)));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	static uint32_t x106 = UINT32_MAX;
	volatile uint64_t x108 = UINT64_MAX;
	int32_t t26 = 14781;

	t26 = (x105&(x106<(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 143698967164LL;
	static int8_t x110 = INT8_MAX;
	int16_t x111 = 3;
	static int64_t x112 = INT64_MIN;
	volatile int64_t t27 = -357984721736LL;

	t27 = (x109&(x110<(x111|x112)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 0U;
	int8_t x115 = INT8_MAX;
	int64_t x116 = INT64_MIN;

	t28 = (x113&(x114<(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MIN;
	static int32_t x119 = INT32_MIN;
	volatile int16_t x120 = -1;

	t29 = (x117&(x118<(x119|x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	int32_t x122 = -634;
	uint16_t x123 = UINT16_MAX;
	int16_t x124 = INT16_MAX;

	t30 = (x121&(x122<(x123|x124)));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	volatile int16_t x126 = -16;
	uint32_t x127 = UINT32_MAX;
	volatile uint16_t x128 = UINT16_MAX;

	t31 = (x125&(x126<(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 3;
	static int16_t x130 = -1;
	static int8_t x132 = -10;
	volatile int32_t t32 = -7;

	t32 = (x129&(x130<(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = -1;
	static int64_t x135 = INT64_MIN;
	static int32_t x136 = -1;
	static int32_t t33 = -41128;

	t33 = (x133&(x134<(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	volatile uint8_t x140 = 0U;

	t34 = (x137&(x138<(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 1544;
	int64_t x144 = 0LL;
	static volatile int32_t t35 = 11876269;

	t35 = (x141&(x142<(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 13018948866830589LLU;
	int64_t x146 = -1LL;
	volatile int32_t x147 = -7922;
	uint16_t x148 = 1U;
	volatile uint64_t t36 = 712LLU;

	t36 = (x145&(x146<(x147|x148)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	static volatile uint16_t x151 = 2U;
	uint32_t t37 = 35009259U;

	t37 = (x149&(x150<(x151|x152)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 1028U;
	int32_t x155 = INT32_MIN;
	int32_t x156 = -1;

	t38 = (x153&(x154<(x155|x156)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	volatile int32_t x158 = 0;
	int16_t x159 = INT16_MIN;
	int64_t x160 = -1520679847080971789LL;
	volatile int32_t t39 = -89035;

	t39 = (x157&(x158<(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -132;
	int16_t x162 = 678;
	uint16_t x163 = 31U;
	volatile uint64_t x164 = 49920961177464662LLU;
	volatile int32_t t40 = 1844;

	t40 = (x161&(x162<(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = 127;
	static int32_t x166 = INT32_MIN;
	volatile uint8_t x167 = 4U;
	static int32_t t41 = -1;

	t41 = (x165&(x166<(x167|x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -3;
	uint64_t x171 = 202388027645206291LLU;
	static int32_t x172 = 7;
	uint32_t t42 = 505U;

	t42 = (x169&(x170<(x171|x172)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int32_t x174 = -1;
	static int8_t x175 = INT8_MAX;

	t43 = (x173&(x174<(x175|x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	uint8_t x178 = UINT8_MAX;
	volatile uint32_t x180 = 574U;
	uint64_t t44 = 405431929592399LLU;

	t44 = (x177&(x178<(x179|x180)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x182 = UINT8_MAX;
	uint8_t x183 = UINT8_MAX;
	int64_t t45 = -13859086089LL;

	t45 = (x181&(x182<(x183|x184)));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 584LLU;
	static int64_t x186 = -1LL;
	int16_t x187 = 0;
	int32_t x188 = INT32_MIN;
	uint64_t t46 = 236107LLU;

	t46 = (x185&(x186<(x187|x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	uint64_t x190 = 243492769501LLU;
	volatile uint16_t x191 = 2485U;
	int32_t t47 = -65647657;

	t47 = (x189&(x190<(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 9982;
	static int64_t x194 = -1LL;
	int8_t x195 = -1;
	static int64_t x196 = INT64_MAX;
	volatile int32_t t48 = 86061246;

	t48 = (x193&(x194<(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	volatile int16_t x198 = 5;
	static int32_t x200 = 1937;

	t49 = (x197&(x198<(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	uint32_t x202 = UINT32_MAX;
	volatile uint32_t x203 = 1288U;
	uint16_t x204 = 10467U;

	t50 = (x201&(x202<(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 1;
	static int64_t x206 = -1LL;
	int16_t x207 = -257;
	static int32_t t51 = 1001424;

	t51 = (x205&(x206<(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x209 = UINT16_MAX;
	int64_t x210 = 601880266382241396LL;
	volatile uint8_t x211 = 31U;
	static int32_t x212 = -1;
	int32_t t52 = 4216;

	t52 = (x209&(x210<(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = 2U;
	int64_t x215 = 695888270301256108LL;
	volatile uint32_t t53 = 1U;

	t53 = (x213&(x214<(x215|x216)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 62U;
	uint8_t x218 = UINT8_MAX;
	uint64_t x219 = 7500175419440177LLU;
	volatile int64_t x220 = -154245292585662LL;

	t54 = (x217&(x218<(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 78U;
	uint16_t x222 = 877U;
	uint32_t x223 = UINT32_MAX;
	volatile uint8_t x224 = UINT8_MAX;

	t55 = (x221&(x222<(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	static volatile int16_t x226 = 1;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MAX;
	int32_t t56 = -15;

	t56 = (x225&(x226<(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int8_t x230 = 8;
	uint64_t x232 = 107941799171189LLU;

	t57 = (x229&(x230<(x231|x232)));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 321U;
	volatile int64_t x235 = -1LL;
	int32_t x236 = -818721;
	int32_t t58 = -3;

	t58 = (x233&(x234<(x235|x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x239 = -1;
	volatile uint32_t t59 = 843980247U;

	t59 = (x237&(x238<(x239|x240)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int32_t x243 = -1;
	static volatile int64_t x244 = INT64_MIN;
	int32_t t60 = 2474;

	t60 = (x241&(x242<(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	volatile int64_t x246 = -1012441030039038LL;
	volatile int16_t x247 = INT16_MIN;
	static volatile int32_t x248 = INT32_MAX;
	int32_t t61 = -5408671;

	t61 = (x245&(x246<(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile int16_t x250 = 0;
	static uint64_t x251 = UINT64_MAX;
	int32_t t62 = 21;

	t62 = (x249&(x250<(x251|x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = 0;
	static volatile int32_t x255 = -26780468;
	volatile uint32_t x256 = 250747U;
	int32_t t63 = 0;

	t63 = (x253&(x254<(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -400410892;
	uint16_t x258 = 101U;
	static uint8_t x259 = 35U;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 243728193;

	t64 = (x257&(x258<(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	int64_t x264 = INT64_MAX;
	int32_t t65 = 1;

	t65 = (x261&(x262<(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x268 = INT8_MIN;

	t66 = (x265&(x266<(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 3473684634886180752LLU;
	int8_t x270 = -5;
	int32_t x271 = INT32_MAX;
	static uint16_t x272 = 14U;

	t67 = (x269&(x270<(x271|x272)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x273 = UINT8_MAX;
	int16_t x274 = INT16_MAX;
	static volatile int16_t x275 = -1591;
	uint64_t x276 = 12LLU;
	volatile int32_t t68 = -74;

	t68 = (x273&(x274<(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 246U;
	int64_t x278 = -1LL;
	int16_t x279 = -5205;
	volatile int8_t x280 = -1;
	volatile int32_t t69 = -83;

	t69 = (x277&(x278<(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	static uint8_t x284 = 2U;
	volatile int32_t t70 = 0;

	t70 = (x281&(x282<(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 412U;
	static int8_t x286 = -1;
	static int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	uint32_t t71 = 1170U;

	t71 = (x285&(x286<(x287|x288)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x290 = INT32_MAX;
	volatile uint64_t x291 = 49902838315298LLU;
	uint16_t x292 = 1978U;

	t72 = (x289&(x290<(x291|x292)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 1019739714306411LLU;
	int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = UINT16_MAX;

	t73 = (x293&(x294<(x295|x296)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 19U;
	uint32_t x298 = 300U;
	int64_t x300 = INT64_MIN;
	int32_t t74 = -109208;

	t74 = (x297&(x298<(x299|x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x303 = 5410U;
	int32_t x304 = INT32_MAX;
	int32_t t75 = -16091150;

	t75 = (x301&(x302<(x303|x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x306 = 668356274147LL;
	int8_t x307 = INT8_MIN;
	uint32_t x308 = UINT32_MAX;

	t76 = (x305&(x306<(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1649901;
	volatile int32_t x310 = 14665802;
	static uint16_t x312 = UINT16_MAX;
	int32_t t77 = 48684;

	t77 = (x309&(x310<(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 3202603197LL;
	int32_t x314 = INT32_MIN;
	int64_t x316 = INT64_MAX;
	volatile int64_t t78 = -1547898LL;

	t78 = (x313&(x314<(x315|x316)));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MAX;
	int8_t x319 = -1;
	static uint64_t x320 = 93840100066354LLU;
	volatile int32_t t79 = 3;

	t79 = (x317&(x318<(x319|x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x322 = -474648593LL;
	uint32_t x324 = 172U;
	static uint32_t t80 = 46824377U;

	t80 = (x321&(x322<(x323|x324)));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 35230U;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 1087207;

	t81 = (x325&(x326<(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	static uint64_t x330 = UINT64_MAX;
	int8_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	int32_t t82 = -279;

	t82 = (x329&(x330<(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int64_t x334 = -1LL;
	uint32_t x335 = 159459953U;

	t83 = (x333&(x334<(x335|x336)));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = -3709LL;
	int16_t x339 = 1;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = -4015433;

	t84 = (x337&(x338<(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	uint8_t x343 = 17U;
	int8_t x344 = INT8_MIN;
	int64_t t85 = -60499395668831LL;

	t85 = (x341&(x342<(x343|x344)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = UINT16_MAX;
	int64_t x346 = -1LL;
	int64_t x347 = 54973760965LL;

	t86 = (x345&(x346<(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 77U;
	static volatile int16_t x350 = 5;
	static int64_t x352 = INT64_MIN;
	int32_t t87 = -13977;

	t87 = (x349&(x350<(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 17286700349479973LL;
	uint16_t x354 = UINT16_MAX;
	static int8_t x355 = INT8_MIN;

	t88 = (x353&(x354<(x355|x356)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	int16_t x358 = 563;
	int64_t x359 = INT64_MIN;
	int32_t x360 = 13376;
	int32_t t89 = -462821793;

	t89 = (x357&(x358<(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x362 = 6;
	uint64_t x363 = 63737702LLU;
	static uint32_t x364 = 86U;
	volatile int32_t t90 = 984;

	t90 = (x361&(x362<(x363|x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x367 = 249255111U;
	int64_t x368 = INT64_MAX;
	uint32_t t91 = 216491646U;

	t91 = (x365&(x366<(x367|x368)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MAX;
	int64_t x371 = INT64_MIN;
	volatile int32_t t92 = 16775210;

	t92 = (x369&(x370<(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MAX;
	static int32_t x374 = 807528;
	int16_t x375 = INT16_MIN;
	static volatile int64_t t93 = -48473014340513LL;

	t93 = (x373&(x374<(x375|x376)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -20;
	uint16_t x378 = UINT16_MAX;
	int64_t x379 = 895336464697132LL;
	volatile int16_t x380 = -12239;
	volatile int32_t t94 = -13;

	t94 = (x377&(x378<(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	volatile uint64_t x382 = 236067319499LLU;
	int16_t x383 = INT16_MIN;
	volatile int32_t t95 = 0;

	t95 = (x381&(x382<(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MIN;
	int32_t x387 = 162605585;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t96 = -830;

	t96 = (x385&(x386<(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	uint8_t x392 = 1U;
	volatile int32_t t97 = -276279617;

	t97 = (x389&(x390<(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 2005U;
	int32_t x394 = 10;
	int64_t x395 = INT64_MIN;
	int16_t x396 = 0;
	volatile uint32_t t98 = 340124U;

	t98 = (x393&(x394<(x395|x396)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x398 = -1LL;
	uint16_t x399 = 1810U;
	volatile int8_t x400 = INT8_MIN;
	volatile uint64_t t99 = 52385532161253LLU;

	t99 = (x397&(x398<(x399|x400)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

