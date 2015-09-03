#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 2613U;
int8_t x5 = 0;
volatile uint16_t x8 = UINT16_MAX;
static int8_t x12 = INT8_MAX;
int64_t x19 = INT64_MIN;
volatile uint8_t x20 = 6U;
int16_t x22 = -1;
uint8_t x24 = 19U;
volatile uint16_t x29 = 98U;
uint64_t x32 = 42091381LLU;
uint32_t x38 = 4U;
uint8_t x40 = UINT8_MAX;
static uint8_t x41 = 3U;
uint8_t x42 = 0U;
volatile uint8_t x59 = 9U;
uint64_t x64 = 9533510190991273LLU;
int64_t x67 = 1LL;
uint8_t x80 = UINT8_MAX;
int8_t x81 = INT8_MIN;
static int16_t x87 = -2534;
int64_t x93 = -11678LL;
static int16_t x96 = INT16_MIN;
int16_t x99 = -53;
uint16_t x100 = 122U;
uint32_t x116 = 1556484604U;
volatile int32_t t27 = 184337476;
static int16_t x124 = INT16_MIN;
int64_t x125 = 14LL;
volatile int16_t x126 = -1;
uint16_t x130 = UINT16_MAX;
volatile int8_t x132 = INT8_MIN;
uint8_t x134 = 1U;
static uint8_t x136 = 3U;
uint32_t t31 = UINT32_MAX;
uint32_t x139 = 89U;
int64_t x141 = -1LL;
volatile int64_t x154 = INT64_MIN;
static volatile uint32_t x160 = UINT32_MAX;
int16_t x166 = INT16_MIN;
volatile int32_t x167 = INT32_MIN;
uint16_t x168 = UINT16_MAX;
volatile uint64_t t38 = 3041727497755017LLU;
int32_t x184 = 130639;
uint8_t x188 = 6U;
int32_t x190 = INT32_MAX;
volatile int32_t t44 = 522;
uint64_t x200 = UINT64_MAX;
int32_t x208 = 1068421736;
int32_t x210 = INT32_MIN;
int8_t x214 = INT8_MIN;
int32_t t50 = 633;
static int8_t x226 = INT8_MIN;
uint64_t x228 = UINT64_MAX;
uint64_t t51 = UINT64_MAX;
static int64_t x229 = INT64_MAX;
int64_t x230 = 3829442421177191LL;
static int64_t x231 = INT64_MIN;
uint32_t x238 = 7559U;
int8_t x243 = -1;
uint32_t x261 = 6U;
int16_t x267 = -57;
static volatile int64_t t60 = -1361036451LL;
volatile int64_t x271 = INT64_MIN;
int16_t x276 = INT16_MIN;
static volatile uint64_t x286 = 779456825320731LLU;
int64_t t65 = -165727671606448268LL;
int32_t x292 = -1;
int8_t x302 = -44;
volatile int8_t x306 = -7;
uint64_t t70 = UINT64_MAX;
volatile int32_t t71 = INT32_MAX;
static volatile uint64_t t73 = UINT64_MAX;
uint32_t x336 = 19U;
int32_t x339 = INT32_MIN;
static int16_t x346 = INT16_MIN;
int8_t x348 = -18;
uint16_t x352 = 200U;
int16_t x354 = -1;
volatile int8_t x358 = INT8_MIN;
uint32_t x359 = UINT32_MAX;
uint16_t x360 = UINT16_MAX;
int16_t x363 = 1;
static int64_t x371 = INT64_MIN;
static int16_t x375 = INT16_MIN;
volatile uint16_t x376 = 1U;
static uint16_t x377 = 3U;
uint64_t t87 = 439556877320180223LLU;
int16_t x393 = INT16_MIN;
int32_t x394 = -1;
int16_t x400 = INT16_MIN;
int32_t t90 = -141403563;
uint64_t x406 = 348487901LLU;
int8_t x412 = INT8_MIN;
int64_t x413 = -1111437545LL;
uint64_t x422 = 303007336210212LLU;
volatile uint32_t x427 = 117763U;
volatile int8_t x430 = INT8_MIN;
volatile int32_t x431 = INT32_MIN;
static uint64_t t98 = 14LLU;
static uint8_t x433 = 7U;


void f0(void) {
	static uint8_t x1 = 44U;
	volatile int16_t x3 = -1;
	uint64_t x4 = 52LLU;
	volatile uint64_t t0 = 3252LLU;

	t0 = (x1|((x2<x3)-x4));

	if (t0 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 1U;
	int8_t x7 = 25;
	static volatile int32_t t1 = -6947;

	t1 = (x5|((x6<x7)-x8));

	if (t1 != -65534) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MIN;
	uint16_t x11 = UINT16_MAX;
	static int64_t t2 = 178001727LL;

	t2 = (x9|((x10<x11)-x12));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 16074U;
	uint16_t x14 = 2U;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = -13531802LL;
	volatile int64_t t3 = 27410099LL;

	t3 = (x13|((x14<x15)-x16));

	if (t3 != 13532890LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int64_t x18 = INT64_MAX;
	volatile int32_t t4 = -25;

	t4 = (x17|((x18<x19)-x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 469;
	volatile int64_t x23 = INT64_MIN;
	int32_t t5 = 23108754;

	t5 = (x21|((x22<x23)-x24));

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 530453;
	int64_t x26 = 0LL;
	int16_t x27 = INT16_MIN;
	int32_t x28 = 725273;
	static volatile int32_t t6 = 3786682;

	t6 = (x25|((x26<x27)-x28));

	if (t6 != -196873) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 1171139U;
	int64_t x31 = INT64_MIN;
	volatile uint64_t t7 = 8964519946767107LLU;

	t7 = (x29|((x30<x31)-x32));

	if (t7 != 18446744073667460331LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MAX;
	uint16_t x39 = 2853U;
	int32_t t8 = 664225855;

	t8 = (x37|((x38<x39)-x40));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x43 = UINT64_MAX;
	uint32_t x44 = 1351427800U;
	static uint32_t t9 = 196U;

	t9 = (x41|((x42<x43)-x44));

	if (t9 != 2943539499U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = 231U;
	int8_t x48 = -2;
	int64_t t10 = INT64_MAX;

	t10 = (x45|((x46<x47)-x48));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = 3652U;
	uint16_t x50 = 7800U;
	uint64_t x51 = 3127681284699LLU;
	int32_t x52 = -1;
	volatile uint32_t t11 = 342U;

	t11 = (x49|((x50<x51)-x52));

	if (t11 != 3654U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -1;
	volatile int16_t x54 = INT16_MIN;
	uint16_t x55 = 0U;
	static volatile int64_t x56 = INT64_MAX;
	int64_t t12 = -973LL;

	t12 = (x53|((x54<x55)-x56));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x57 = 12864714580071065LLU;
	int64_t x58 = -865534348LL;
	int16_t x60 = INT16_MAX;
	volatile uint64_t t13 = 55LLU;

	t13 = (x57|((x58<x59)-x60));

	if (t13 != 18446744073709523611LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -7;
	volatile int32_t x62 = -1;
	static int16_t x63 = INT16_MIN;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x61|((x62<x63)-x64));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -1;
	uint16_t x66 = UINT16_MAX;
	static uint8_t x68 = 0U;
	volatile int32_t t15 = 2468112;

	t15 = (x65|((x66<x67)-x68));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	static int16_t x70 = -1;
	uint16_t x71 = 78U;
	int32_t x72 = 180069474;
	volatile int64_t t16 = -2194LL;

	t16 = (x69|((x70<x71)-x72));

	if (t16 != -180069473LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = UINT16_MAX;
	volatile uint16_t x74 = 22U;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t17 = -1245524;

	t17 = (x73|((x74<x75)-x76));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 234U;
	int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	static int32_t t18 = -6100;

	t18 = (x77|((x78<x79)-x80));

	if (t18 != -22) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = -1;
	uint8_t x83 = 40U;
	uint32_t x84 = 3575U;
	static uint32_t t19 = 96427U;

	t19 = (x81|((x82<x83)-x84));

	if (t19 != 4294967178U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -1LL;
	int8_t x86 = INT8_MIN;
	static int16_t x88 = INT16_MIN;
	int64_t t20 = 1289678959LL;

	t20 = (x85|((x86<x87)-x88));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 185;
	static volatile int64_t x90 = 12558413649226651LL;
	uint64_t x91 = UINT64_MAX;
	static uint16_t x92 = 396U;
	static int32_t t21 = -9;

	t21 = (x89|((x90<x91)-x92));

	if (t21 != -259) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x94 = 50679746LLU;
	int16_t x95 = -2900;
	int64_t t22 = -29186679351LL;

	t22 = (x93|((x94<x95)-x96));

	if (t22 != -11677LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	static int16_t x98 = INT16_MIN;
	uint32_t t23 = UINT32_MAX;

	t23 = (x97|((x98<x99)-x100));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 82033708382LLU;
	uint8_t x106 = 127U;
	uint16_t x107 = 13U;
	static uint64_t x108 = 1262818LLU;
	uint64_t t24 = 989673LLU;

	t24 = (x105|((x106<x107)-x108));

	if (t24 != 18446744073709535070LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	static int8_t x110 = -1;
	uint64_t x111 = 25175600956872938LLU;
	uint16_t x112 = 7674U;
	int32_t t25 = -864187;

	t25 = (x109|((x110<x111)-x112));

	if (t25 != -7674) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = 0;
	int64_t x114 = -1LL;
	int64_t x115 = INT64_MIN;
	uint32_t t26 = 157U;

	t26 = (x113|((x114<x115)-x116));

	if (t26 != 2738482692U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	int32_t x118 = INT32_MIN;
	static int32_t x119 = INT32_MIN;
	int8_t x120 = INT8_MIN;

	t27 = (x117|((x118<x119)-x120));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x121 = UINT32_MAX;
	uint32_t x122 = 57638115U;
	static uint16_t x123 = 74U;
	static uint32_t t28 = UINT32_MAX;

	t28 = (x121|((x122<x123)-x124));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x127 = 1;
	static int8_t x128 = INT8_MIN;
	int64_t t29 = 13352258LL;

	t29 = (x125|((x126<x127)-x128));

	if (t29 != 143LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = 516;
	uint32_t x131 = UINT32_MAX;
	volatile int32_t t30 = 25;

	t30 = (x129|((x130<x131)-x132));

	if (t30 != 645) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x133 = 18369U;
	volatile int8_t x135 = 31;

	t31 = (x133|((x134<x135)-x136));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -1;
	int32_t x138 = -249920;
	static volatile int32_t x140 = 42697;
	static int32_t t32 = 25238294;

	t32 = (x137|((x138<x139)-x140));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x142 = UINT64_MAX;
	static int32_t x143 = -1;
	uint32_t x144 = 19U;
	volatile int64_t t33 = -53LL;

	t33 = (x141|((x142<x143)-x144));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = UINT64_MAX;
	volatile uint32_t x150 = 1239U;
	volatile uint8_t x151 = 6U;
	int32_t x152 = -1;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x149|((x150<x151)-x152));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = INT8_MIN;
	int16_t x155 = INT16_MIN;
	int8_t x156 = -14;
	int32_t t35 = -87426;

	t35 = (x153|((x154<x155)-x156));

	if (t35 != -113) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x157 = 14677U;
	int8_t x158 = -1;
	static int16_t x159 = -1;
	uint32_t t36 = 86774167U;

	t36 = (x157|((x158<x159)-x160));

	if (t36 != 14677U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = 62U;
	static volatile int16_t x162 = 32;
	uint64_t x163 = 127322273517347LLU;
	volatile uint8_t x164 = 57U;
	static volatile int32_t t37 = 33221;

	t37 = (x161|((x162<x163)-x164));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x165 = 670LLU;

	t38 = (x165|((x166<x167)-x168));

	if (t38 != 18446744073709486751LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = 3632;
	volatile int32_t t39 = -175327;

	t39 = (x169|((x170<x171)-x172));

	if (t39 != -3632) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x173 = 4U;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MAX;
	uint32_t x176 = 147291250U;
	volatile uint32_t t40 = 31680U;

	t40 = (x173|((x174<x175)-x176));

	if (t40 != 4147676046U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = INT64_MIN;
	static uint32_t x182 = 39052U;
	volatile int32_t x183 = INT32_MIN;
	volatile int64_t t41 = 32507015LL;

	t41 = (x181|((x182<x183)-x184));

	if (t41 != -130638LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MIN;
	int16_t x186 = 15;
	int64_t x187 = INT64_MIN;
	static int32_t t42 = 15218;

	t42 = (x185|((x186<x187)-x188));

	if (t42 != -6) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = -1LL;
	volatile int8_t x191 = INT8_MIN;
	int32_t x192 = -1619;
	static volatile int64_t t43 = -4212554223509191079LL;

	t43 = (x189|((x190<x191)-x192));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 1U;
	volatile uint8_t x194 = UINT8_MAX;
	volatile int8_t x195 = INT8_MIN;
	uint16_t x196 = UINT16_MAX;

	t44 = (x193|((x194<x195)-x196));

	if (t44 != -65535) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x197 = INT64_MIN;
	uint8_t x198 = 16U;
	volatile int64_t x199 = INT64_MIN;
	volatile uint64_t t45 = 5898742281194106LLU;

	t45 = (x197|((x198<x199)-x200));

	if (t45 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x205 = INT64_MIN;
	static volatile int64_t x206 = INT64_MIN;
	static uint32_t x207 = 65260U;
	int64_t t46 = 1044414941270453LL;

	t46 = (x205|((x206<x207)-x208));

	if (t46 != -1068421735LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int16_t x212 = -6;
	static int32_t t47 = 2;

	t47 = (x209|((x210<x211)-x212));

	if (t47 != -122) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = -1;
	volatile int8_t x215 = -3;
	volatile int16_t x216 = -119;
	int32_t t48 = 22;

	t48 = (x213|((x214<x215)-x216));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = -1;
	volatile int8_t x218 = INT8_MIN;
	int16_t x219 = -1;
	static volatile int16_t x220 = INT16_MIN;
	static int32_t t49 = 3746205;

	t49 = (x217|((x218<x219)-x220));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MIN;
	uint16_t x222 = 191U;
	int64_t x223 = -61LL;
	uint8_t x224 = 30U;

	t50 = (x221|((x222<x223)-x224));

	if (t50 != -30) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = -1;
	uint8_t x227 = 27U;

	t51 = (x225|((x226<x227)-x228));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x232 = UINT64_MAX;
	uint64_t t52 = 225274069002711LLU;

	t52 = (x229|((x230<x231)-x232));

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = 119U;
	int16_t x235 = -1;
	volatile int8_t x236 = INT8_MIN;
	static volatile int64_t t53 = -42026317003955LL;

	t53 = (x233|((x234<x235)-x236));

	if (t53 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = -1;
	volatile uint32_t x239 = UINT32_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t54 = 46453271;

	t54 = (x237|((x238<x239)-x240));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = 0;
	uint16_t x242 = UINT16_MAX;
	int64_t x244 = -1LL;
	int64_t t55 = 120608674115569LL;

	t55 = (x241|((x242<x243)-x244));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = 416900201369LLU;
	uint64_t x246 = UINT64_MAX;
	static int64_t x247 = INT64_MIN;
	int64_t x248 = 6889499LL;
	uint64_t t56 = 27381705251604LLU;

	t56 = (x245|((x246<x247)-x248));

	if (t56 != 18446744073704767485LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = UINT64_MAX;
	int16_t x250 = -1;
	uint64_t x251 = 11LLU;
	int16_t x252 = -1;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x249|((x250<x251)-x252));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = UINT64_MAX;
	int64_t x258 = -1LL;
	volatile uint16_t x259 = UINT16_MAX;
	static uint16_t x260 = UINT16_MAX;
	static uint64_t t58 = UINT64_MAX;

	t58 = (x257|((x258<x259)-x260));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x262 = -2;
	static int8_t x263 = INT8_MAX;
	int64_t x264 = -578425LL;
	volatile int64_t t59 = -8094635392104747LL;

	t59 = (x261|((x262<x263)-x264));

	if (t59 != 578430LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = -1;
	int64_t x268 = -781565582861LL;

	t60 = (x265|((x266<x267)-x268));

	if (t60 != 781684047871LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x269 = INT16_MAX;
	volatile uint16_t x270 = 37U;
	uint64_t x272 = 16613773LLU;
	volatile uint64_t t61 = 72LLU;

	t61 = (x269|((x270<x271)-x272));

	if (t61 != 18446744073692938239LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = 1;
	int16_t x274 = INT16_MAX;
	int16_t x275 = -1;
	static int32_t t62 = -61;

	t62 = (x273|((x274<x275)-x276));

	if (t62 != 32769) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = -1LL;
	static volatile uint32_t x278 = 7U;
	volatile uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MAX;
	volatile int64_t t63 = 91745180450LL;

	t63 = (x277|((x278<x279)-x280));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x281 = -1;
	int8_t x282 = -1;
	int16_t x283 = INT16_MAX;
	int8_t x284 = INT8_MAX;
	int32_t t64 = -2664638;

	t64 = (x281|((x282<x283)-x284));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = -3097825756284789389LL;
	static volatile int64_t x287 = INT64_MIN;
	volatile uint8_t x288 = UINT8_MAX;

	t65 = (x285|((x286<x287)-x288));

	if (t65 != -141LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x289 = 1680LL;
	static int16_t x290 = 6134;
	int8_t x291 = -10;
	int64_t t66 = -229539746068LL;

	t66 = (x289|((x290<x291)-x292));

	if (t66 != 1681LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x297 = UINT8_MAX;
	int16_t x298 = INT16_MAX;
	int64_t x299 = INT64_MIN;
	uint16_t x300 = 0U;
	static volatile int32_t t67 = 3226678;

	t67 = (x297|((x298<x299)-x300));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x301 = INT8_MIN;
	static int8_t x303 = INT8_MIN;
	static int64_t x304 = -1LL;
	int64_t t68 = -386505578001LL;

	t68 = (x301|((x302<x303)-x304));

	if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x305 = 18351U;
	int16_t x307 = -17;
	int16_t x308 = -2094;
	volatile uint32_t t69 = 54662U;

	t69 = (x305|((x306<x307)-x308));

	if (t69 != 20399U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x310 = -1LL;
	int32_t x311 = -1;
	int16_t x312 = INT16_MAX;

	t70 = (x309|((x310<x311)-x312));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x313 = INT32_MAX;
	volatile uint64_t x314 = 8024271650197LLU;
	int32_t x315 = -1;
	int8_t x316 = INT8_MIN;

	t71 = (x313|((x314<x315)-x316));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = 88742U;
	int32_t x318 = -649700;
	uint8_t x319 = 7U;
	static int8_t x320 = -1;
	uint32_t t72 = 247187U;

	t72 = (x317|((x318<x319)-x320));

	if (t72 != 88742U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x325 = UINT64_MAX;
	int8_t x326 = 0;
	int32_t x327 = INT32_MIN;
	int8_t x328 = -1;

	t73 = (x325|((x326<x327)-x328));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x329 = INT64_MAX;
	uint32_t x330 = 115403459U;
	int16_t x331 = -1;
	static volatile uint16_t x332 = UINT16_MAX;
	volatile int64_t t74 = 2899LL;

	t74 = (x329|((x330<x331)-x332));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = -3;
	uint8_t x335 = 4U;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x333|((x334<x335)-x336));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = 30793U;
	uint64_t x338 = UINT64_MAX;
	volatile uint32_t x340 = 62U;
	volatile uint32_t t76 = 1472298U;

	t76 = (x337|((x338<x339)-x340));

	if (t76 != 4294967243U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x341 = UINT64_MAX;
	int16_t x342 = INT16_MAX;
	int8_t x343 = -20;
	int64_t x344 = -143157LL;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (x341|((x342<x343)-x344));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 7U;
	int64_t x347 = 4LL;
	volatile int32_t t78 = -3434807;

	t78 = (x345|((x346<x347)-x348));

	if (t78 != 23) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = -8;
	uint16_t x350 = 356U;
	int64_t x351 = INT64_MAX;
	volatile int32_t t79 = 11743;

	t79 = (x349|((x350<x351)-x352));

	if (t79 != -7) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x353 = -5654;
	static int8_t x355 = -2;
	uint32_t x356 = UINT32_MAX;
	uint32_t t80 = 208U;

	t80 = (x353|((x354<x355)-x356));

	if (t80 != 4294961643U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x357 = INT64_MIN;
	volatile int64_t t81 = 29797184692559723LL;

	t81 = (x357|((x358<x359)-x360));

	if (t81 != -65534LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MIN;
	volatile uint8_t x362 = UINT8_MAX;
	uint16_t x364 = 6U;
	int32_t t82 = 714455562;

	t82 = (x361|((x362<x363)-x364));

	if (t82 != -6) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x369 = UINT16_MAX;
	uint32_t x370 = UINT32_MAX;
	volatile uint8_t x372 = UINT8_MAX;
	static volatile int32_t t83 = -1210467;

	t83 = (x369|((x370<x371)-x372));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MIN;
	uint64_t x374 = 3200954506LLU;
	int32_t t84 = 0;

	t84 = (x373|((x374<x375)-x376));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x378 = UINT32_MAX;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MAX;
	static int32_t t85 = 2126130;

	t85 = (x377|((x378<x379)-x380));

	if (t85 != -2147483645) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -1;
	static int16_t x382 = 2163;
	int8_t x383 = 0;
	uint64_t x384 = 14785045LLU;
	static uint64_t t86 = UINT64_MAX;

	t86 = (x381|((x382<x383)-x384));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = INT8_MAX;
	static int64_t x386 = INT64_MIN;
	int64_t x387 = -3418534401920996LL;
	volatile uint64_t x388 = UINT64_MAX;

	t87 = (x385|((x386<x387)-x388));

	if (t87 != 127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x389 = INT32_MAX;
	int16_t x390 = -1;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = 3244823LLU;
	uint64_t t88 = UINT64_MAX;

	t88 = (x389|((x390<x391)-x392));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t89 = -1035363478;

	t89 = (x393|((x394<x395)-x396));

	if (t89 != -32639) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x397 = -3018;
	int8_t x398 = -1;
	int8_t x399 = INT8_MAX;

	t90 = (x397|((x398<x399)-x400));

	if (t90 != -3017) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	uint8_t x403 = 48U;
	volatile int8_t x404 = -10;
	volatile int32_t t91 = 25;

	t91 = (x401|((x402<x403)-x404));

	if (t91 != -117) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = 29;
	int8_t x407 = INT8_MAX;
	static uint32_t x408 = 356346040U;
	volatile uint32_t t92 = 6805516U;

	t92 = (x405|((x406<x407)-x408));

	if (t92 != 3938621277U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x409 = 15299937661953139LLU;
	volatile int16_t x410 = 6;
	volatile int16_t x411 = INT16_MIN;
	volatile uint64_t t93 = 18158LLU;

	t93 = (x409|((x410<x411)-x412));

	if (t93 != 15299937661953267LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x414 = INT64_MIN;
	uint16_t x415 = 14537U;
	static int64_t x416 = -13954LL;
	volatile int64_t t94 = 490366LL;

	t94 = (x413|((x414<x415)-x416));

	if (t94 != -1111425129LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x417 = 1;
	int16_t x418 = INT16_MIN;
	uint16_t x419 = UINT16_MAX;
	uint16_t x420 = 1U;
	static int32_t t95 = 5344585;

	t95 = (x417|((x418<x419)-x420));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = -13826;
	int64_t x423 = -202LL;
	uint64_t x424 = 584428320LLU;
	volatile uint64_t t96 = 4LLU;

	t96 = (x421|((x422<x423)-x424));

	if (t96 != 18446744073709542911LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x425 = UINT16_MAX;
	int8_t x426 = INT8_MIN;
	int64_t x428 = -2LL;
	static volatile int64_t t97 = 84837LL;

	t97 = (x425|((x426<x427)-x428));

	if (t97 != 65535LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x429 = 20U;
	static uint64_t x432 = 285124117229374881LLU;

	t98 = (x429|((x430<x431)-x432));

	if (t98 != 18161619956480176735LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x434 = INT32_MIN;
	int32_t x435 = -1;
	static uint64_t x436 = 310605186LLU;
	static uint64_t t99 = 14279867LLU;

	t99 = (x433|((x434<x435)-x436));

	if (t99 != 18446744073398946431LLU) { NG(); } else { ; }
	
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

