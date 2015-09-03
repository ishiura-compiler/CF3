#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
volatile int8_t x7 = -2;
int32_t x8 = INT32_MAX;
volatile uint64_t t1 = 201024LLU;
int64_t t3 = 86447LL;
int8_t x30 = -38;
int64_t x39 = 442578LL;
int32_t t6 = -32;
static int32_t x45 = -16226668;
uint32_t x46 = 1253U;
static int32_t x48 = -1;
static uint8_t x57 = 9U;
int64_t x59 = INT64_MIN;
volatile int8_t x70 = -1;
static int64_t x72 = INT64_MIN;
uint32_t x78 = UINT32_MAX;
uint32_t x80 = UINT32_MAX;
volatile int16_t x82 = INT16_MAX;
int64_t x83 = 791024712LL;
static int16_t x98 = INT16_MIN;
volatile int64_t x102 = 1968811LL;
int8_t x103 = INT8_MIN;
int32_t x105 = 62;
int32_t x121 = 73592;
static int64_t x123 = INT64_MAX;
int64_t x124 = INT64_MAX;
static volatile int32_t x135 = INT32_MIN;
int32_t x139 = 1553;
int64_t x146 = -1LL;
volatile int64_t x148 = INT64_MIN;
static uint32_t x151 = 1776862U;
volatile int8_t x154 = 3;
volatile int64_t x155 = INT64_MAX;
int8_t x158 = INT8_MIN;
static int32_t x162 = INT32_MIN;
uint8_t x164 = 124U;
int64_t x165 = INT64_MIN;
int16_t x170 = INT16_MIN;
int32_t t33 = -2446964;
int16_t x174 = -6;
static volatile uint16_t x175 = UINT16_MAX;
uint64_t x182 = UINT64_MAX;
uint64_t t36 = 149996686LLU;
int64_t t37 = -55444LL;
volatile uint8_t x190 = 96U;
volatile int64_t x193 = 219942667164560929LL;
static uint8_t x200 = 123U;
volatile int64_t t40 = -104062354693LL;
int8_t x211 = -56;
int64_t x216 = -1LL;
volatile uint64_t t44 = 55LLU;
int8_t x223 = -4;
volatile int32_t x229 = 1;
static int16_t x230 = INT16_MIN;
uint64_t x232 = UINT64_MAX;
volatile int32_t t46 = -1;
volatile uint64_t t48 = 3323990443LLU;
volatile int64_t x241 = -1LL;
static volatile int32_t x242 = 371972146;
static volatile int32_t x243 = 11;
static volatile int64_t t50 = 2257917645346202357LL;
uint8_t x260 = 1U;
uint64_t x264 = UINT64_MAX;
int8_t x268 = -1;
volatile int16_t x272 = 0;
static uint64_t x278 = 14LLU;
int32_t x283 = -14927910;
int8_t x288 = INT8_MAX;
uint8_t x289 = UINT8_MAX;
uint32_t x292 = 85U;
int64_t x304 = INT64_MAX;
uint32_t x309 = UINT32_MAX;
uint16_t x310 = 0U;
volatile uint32_t t63 = UINT32_MAX;
uint64_t x321 = 150457468070LLU;
uint8_t x322 = 1U;
uint16_t x324 = UINT16_MAX;
int8_t x334 = -9;
uint32_t x339 = 351582407U;
uint64_t x343 = UINT64_MAX;
static int64_t x345 = INT64_MIN;
int32_t x351 = INT32_MIN;
int32_t x353 = -1;
static volatile int8_t x354 = -2;
volatile int32_t x355 = 72;
volatile int32_t t72 = -79351;
uint32_t x361 = UINT32_MAX;
int8_t x364 = -9;
int8_t x376 = INT8_MAX;
int64_t x386 = -1LL;
static volatile uint64_t x387 = 1514LLU;
volatile int16_t x392 = INT16_MIN;
uint16_t x395 = 12292U;
int64_t x403 = 6LL;
static int64_t t81 = 127734202LL;
int32_t t84 = -35228;
static volatile int8_t x423 = INT8_MAX;
static volatile uint64_t x432 = 115330225LLU;
int32_t x433 = INT32_MIN;
static uint64_t x436 = 2042690688191019770LLU;
static int64_t x437 = -1LL;
int8_t x446 = INT8_MIN;
static int32_t t90 = 236776;
int16_t x450 = INT16_MAX;
volatile int32_t t91 = 27;
uint64_t x457 = UINT64_MAX;
uint8_t x461 = 15U;
int32_t x462 = INT32_MAX;
static volatile int64_t x464 = INT64_MIN;
static int64_t x470 = -1LL;
int32_t x472 = INT32_MIN;
static int64_t t96 = -38767LL;


void f0(void) {
	int8_t x1 = -31;
	int8_t x2 = -29;
	static uint8_t x3 = 33U;
	static int16_t x4 = -1;
	volatile int32_t t0 = 38543;

	t0 = ((x1-x2)+(x3<=x4));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 123732438264075713LLU;

	t1 = ((x5-x6)+(x7<=x8));

	if (t1 != 18323011635445476031LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	static int32_t x10 = INT32_MAX;
	int16_t x11 = 5702;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -31598394;

	t2 = ((x9-x10)+(x11<=x12));

	if (t2 != -2147450880) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x25 = INT8_MIN;
	volatile int64_t x26 = INT64_MIN;
	int64_t x27 = -1LL;
	volatile int64_t x28 = -15LL;

	t3 = ((x25-x26)+(x27<=x28));

	if (t3 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = 26;
	int16_t x31 = 1911;
	uint16_t x32 = 720U;
	volatile int32_t t4 = -43;

	t4 = ((x29-x30)+(x31<=x32));

	if (t4 != 64) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 16217LLU;
	static int32_t x38 = INT32_MIN;
	volatile int16_t x40 = INT16_MIN;
	volatile uint64_t t5 = 3197033LLU;

	t5 = ((x37-x38)+(x39<=x40));

	if (t5 != 2147499865LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x41 = 31122U;
	static int8_t x42 = -22;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = UINT16_MAX;

	t6 = ((x41-x42)+(x43<=x44));

	if (t6 != 31145) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x47 = 5U;
	volatile uint32_t t7 = 230U;

	t7 = ((x45-x46)+(x47<=x48));

	if (t7 != 4278739375U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x58 = 15;
	int32_t x60 = -1;
	int32_t t8 = -1309;

	t8 = ((x57-x58)+(x59<=x60));

	if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x61 = UINT8_MAX;
	volatile uint16_t x62 = UINT16_MAX;
	static volatile uint8_t x63 = UINT8_MAX;
	static uint8_t x64 = UINT8_MAX;
	int32_t t9 = -1;

	t9 = ((x61-x62)+(x63<=x64));

	if (t9 != -65279) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x65 = INT64_MAX;
	uint32_t x66 = 506U;
	static int32_t x67 = INT32_MIN;
	static volatile int64_t x68 = INT64_MIN;
	static volatile int64_t t10 = 24095708671890LL;

	t10 = ((x65-x66)+(x67<=x68));

	if (t10 != 9223372036854775301LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MIN;
	int64_t x71 = INT64_MIN;
	int32_t t11 = 1;

	t11 = ((x69-x70)+(x71<=x72));

	if (t11 != -32766) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x73 = INT8_MIN;
	static int64_t x74 = INT64_MIN;
	volatile int64_t x75 = -1LL;
	int16_t x76 = INT16_MAX;
	volatile int64_t t12 = 942058548972007449LL;

	t12 = ((x73-x74)+(x75<=x76));

	if (t12 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = 96523890LLU;
	int16_t x79 = 996;
	uint64_t t13 = 98518363LLU;

	t13 = ((x77-x78)+(x79<=x80));

	if (t13 != 18446744069511108212LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x81 = -4163;
	volatile int64_t x84 = INT64_MIN;
	int32_t t14 = 114;

	t14 = ((x81-x82)+(x83<=x84));

	if (t14 != -36930) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x89 = 13061U;
	static volatile int16_t x90 = 26;
	volatile int16_t x91 = INT16_MAX;
	static volatile int8_t x92 = -32;
	uint32_t t15 = 1U;

	t15 = ((x89-x90)+(x91<=x92));

	if (t15 != 13035U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = -1;
	int8_t x94 = 25;
	volatile int16_t x95 = INT16_MIN;
	static volatile int64_t x96 = INT64_MIN;
	int32_t t16 = 62154;

	t16 = ((x93-x94)+(x95<=x96));

	if (t16 != -26) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = 228009895339224689LL;
	int8_t x99 = 0;
	int16_t x100 = -1;
	int64_t t17 = 4940503104249464LL;

	t17 = ((x97-x98)+(x99<=x100));

	if (t17 != 228009895339257457LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = 81;
	volatile int16_t x104 = INT16_MIN;
	static int64_t t18 = 390LL;

	t18 = ((x101-x102)+(x103<=x104));

	if (t18 != -1968730LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x106 = 8U;
	int8_t x107 = -1;
	uint16_t x108 = 26081U;
	int32_t t19 = 17;

	t19 = ((x105-x106)+(x107<=x108));

	if (t19 != 55) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = INT32_MIN;
	int32_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	int32_t t20 = -26289983;

	t20 = ((x109-x110)+(x111<=x112));

	if (t20 != 2147483521) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x113 = 3613U;
	uint16_t x114 = UINT16_MAX;
	uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t21 = -2;

	t21 = ((x113-x114)+(x115<=x116));

	if (t21 != -61922) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x117 = UINT8_MAX;
	int8_t x118 = 38;
	volatile int32_t x119 = INT32_MIN;
	int32_t x120 = -1;
	volatile int32_t t22 = -656775;

	t22 = ((x117-x118)+(x119<=x120));

	if (t22 != 218) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x122 = 6;
	volatile int32_t t23 = 54056;

	t23 = ((x121-x122)+(x123<=x124));

	if (t23 != 73587) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x133 = 3U;
	static uint64_t x134 = UINT64_MAX;
	int16_t x136 = INT16_MAX;
	uint64_t t24 = 178467308057802LLU;

	t24 = ((x133-x134)+(x135<=x136));

	if (t24 != 5LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x137 = INT8_MAX;
	volatile int16_t x138 = -1;
	volatile int16_t x140 = INT16_MAX;
	int32_t t25 = 7;

	t25 = ((x137-x138)+(x139<=x140));

	if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x141 = INT16_MIN;
	int16_t x142 = -1;
	uint16_t x143 = 3338U;
	int32_t x144 = -1;
	volatile int32_t t26 = -16288;

	t26 = ((x141-x142)+(x143<=x144));

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = INT64_MIN;
	uint32_t x147 = 105996U;
	volatile int64_t t27 = -273LL;

	t27 = ((x145-x146)+(x147<=x148));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x149 = INT16_MIN;
	uint64_t x150 = 82LLU;
	uint64_t x152 = 19388901767061LLU;
	volatile uint64_t t28 = 2096216683LLU;

	t28 = ((x149-x150)+(x151<=x152));

	if (t28 != 18446744073709518767LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x153 = -1;
	int16_t x156 = INT16_MIN;
	int32_t t29 = -37448;

	t29 = ((x153-x154)+(x155<=x156));

	if (t29 != -4) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x157 = INT16_MIN;
	volatile int16_t x159 = -1;
	static int8_t x160 = INT8_MIN;
	int32_t t30 = -201;

	t30 = ((x157-x158)+(x159<=x160));

	if (t30 != -32640) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = 3691664LL;
	static int8_t x163 = INT8_MIN;
	volatile int64_t t31 = -32118857038232594LL;

	t31 = ((x161-x162)+(x163<=x164));

	if (t31 != 2151175313LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x166 = UINT64_MAX;
	int32_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t32 = 82379554541660043LLU;

	t32 = ((x165-x166)+(x167<=x168));

	if (t32 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x169 = INT8_MIN;
	static int32_t x171 = 3;
	int8_t x172 = INT8_MAX;

	t33 = ((x169-x170)+(x171<=x172));

	if (t33 != 32641) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = -1LL;
	int64_t x176 = INT64_MIN;
	volatile int64_t t34 = 129LL;

	t34 = ((x173-x174)+(x175<=x176));

	if (t34 != 5LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x177 = 9924241;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MAX;
	int64_t x180 = INT64_MIN;
	volatile int32_t t35 = 3529;

	t35 = ((x177-x178)+(x179<=x180));

	if (t35 != 9957009) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = -1LL;
	uint32_t x183 = UINT32_MAX;
	static int32_t x184 = -1;

	t36 = ((x181-x182)+(x183<=x184));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = -673990157491LL;
	int32_t x186 = INT32_MAX;
	volatile uint16_t x187 = 37U;
	int16_t x188 = INT16_MAX;

	t37 = ((x185-x186)+(x187<=x188));

	if (t37 != -676137641137LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x189 = -1130;
	uint16_t x191 = 0U;
	static uint8_t x192 = UINT8_MAX;
	volatile int32_t t38 = 12;

	t38 = ((x189-x190)+(x191<=x192));

	if (t38 != -1225) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x194 = INT8_MIN;
	uint64_t x195 = UINT64_MAX;
	volatile uint64_t x196 = 1LLU;
	int64_t t39 = 1644774259595668LL;

	t39 = ((x193-x194)+(x195<=x196));

	if (t39 != 219942667164561057LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x197 = INT64_MIN;
	volatile int8_t x198 = -1;
	static volatile int64_t x199 = INT64_MAX;

	t40 = ((x197-x198)+(x199<=x200));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x201 = 5382642LLU;
	int64_t x202 = INT64_MAX;
	int8_t x203 = 1;
	int64_t x204 = -5460962556LL;
	static uint64_t t41 = 45843923263LLU;

	t41 = ((x201-x202)+(x203<=x204));

	if (t41 != 9223372036860158451LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = -1;
	int16_t x210 = -1688;
	uint16_t x212 = 945U;
	int32_t t42 = 17;

	t42 = ((x209-x210)+(x211<=x212));

	if (t42 != 1688) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x213 = INT64_MAX;
	int16_t x214 = 1626;
	uint64_t x215 = UINT64_MAX;
	static int64_t t43 = -13LL;

	t43 = ((x213-x214)+(x215<=x216));

	if (t43 != 9223372036854774182LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x217 = 8U;
	static volatile uint64_t x218 = UINT64_MAX;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = UINT64_MAX;

	t44 = ((x217-x218)+(x219<=x220));

	if (t44 != 10LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x221 = 477608541917618LL;
	static int64_t x222 = 73812118313666LL;
	volatile int64_t x224 = -19230282241744579LL;
	int64_t t45 = -88832276287110LL;

	t45 = ((x221-x222)+(x223<=x224));

	if (t45 != 403796423603952LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x231 = 9U;

	t46 = ((x229-x230)+(x231<=x232));

	if (t46 != 32770) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x233 = UINT32_MAX;
	static int8_t x234 = 1;
	uint8_t x235 = 0U;
	int8_t x236 = 59;
	static uint32_t t47 = UINT32_MAX;

	t47 = ((x233-x234)+(x235<=x236));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x237 = -7;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = -1;
	volatile int8_t x240 = INT8_MAX;

	t48 = ((x237-x238)+(x239<=x240));

	if (t48 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x244 = INT16_MIN;
	volatile int64_t t49 = -124738LL;

	t49 = ((x241-x242)+(x243<=x244));

	if (t49 != -371972147LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x253 = -4186;
	volatile int64_t x254 = 506711646521LL;
	static uint32_t x255 = 64123446U;
	volatile int16_t x256 = 447;

	t50 = ((x253-x254)+(x255<=x256));

	if (t50 != -506711650707LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x257 = -1;
	static uint32_t x258 = UINT32_MAX;
	uint32_t x259 = 11844782U;
	volatile uint32_t t51 = 1404606878U;

	t51 = ((x257-x258)+(x259<=x260));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x261 = -1;
	static uint64_t x262 = UINT64_MAX;
	uint8_t x263 = 0U;
	static volatile uint64_t t52 = 107707113248076LLU;

	t52 = ((x261-x262)+(x263<=x264));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x265 = 405U;
	int8_t x266 = -1;
	volatile int64_t x267 = 5552LL;
	uint32_t t53 = 203916U;

	t53 = ((x265-x266)+(x267<=x268));

	if (t53 != 406U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x269 = 2031047067663LLU;
	uint8_t x270 = 0U;
	int64_t x271 = -736062LL;
	volatile uint64_t t54 = 17440750LLU;

	t54 = ((x269-x270)+(x271<=x272));

	if (t54 != 2031047067664LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x273 = 48U;
	int16_t x274 = INT16_MIN;
	volatile int32_t x275 = -1;
	volatile int8_t x276 = 0;
	volatile int32_t t55 = 2322;

	t55 = ((x273-x274)+(x275<=x276));

	if (t55 != 32817) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x277 = INT8_MIN;
	int8_t x279 = INT8_MAX;
	volatile int8_t x280 = 0;
	uint64_t t56 = 222131325LLU;

	t56 = ((x277-x278)+(x279<=x280));

	if (t56 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x281 = 2U;
	static uint8_t x282 = 13U;
	volatile int16_t x284 = 1;
	static int32_t t57 = 981;

	t57 = ((x281-x282)+(x283<=x284));

	if (t57 != -10) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x285 = INT16_MIN;
	static uint8_t x286 = UINT8_MAX;
	uint16_t x287 = UINT16_MAX;
	int32_t t58 = -5512974;

	t58 = ((x285-x286)+(x287<=x288));

	if (t58 != -33023) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x290 = 52U;
	int64_t x291 = 30295881298798447LL;
	volatile int32_t t59 = 0;

	t59 = ((x289-x290)+(x291<=x292));

	if (t59 != 203) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = -5058;
	volatile int64_t x298 = -149775835311290843LL;
	int64_t x299 = 37796070702LL;
	volatile int8_t x300 = 29;
	int64_t t60 = 1629529976038677004LL;

	t60 = ((x297-x298)+(x299<=x300));

	if (t60 != 149775835311285785LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x301 = -105;
	uint32_t x302 = UINT32_MAX;
	uint16_t x303 = 1U;
	uint32_t t61 = 0U;

	t61 = ((x301-x302)+(x303<=x304));

	if (t61 != 4294967193U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x305 = INT16_MIN;
	volatile uint8_t x306 = 10U;
	static volatile uint16_t x307 = UINT16_MAX;
	int16_t x308 = -14;
	volatile int32_t t62 = 3365;

	t62 = ((x305-x306)+(x307<=x308));

	if (t62 != -32778) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = 1LL;

	t63 = ((x309-x310)+(x311<=x312));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x323 = 3342100002711LL;
	volatile uint64_t t64 = 1202460253715LLU;

	t64 = ((x321-x322)+(x323<=x324));

	if (t64 != 150457468069LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 2952225U;
	int64_t x328 = INT64_MAX;
	volatile uint32_t t65 = 2U;

	t65 = ((x325-x326)+(x327<=x328));

	if (t65 != 4294967170U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x333 = 14706;
	int32_t x335 = -156511;
	uint8_t x336 = UINT8_MAX;
	int32_t t66 = 10;

	t66 = ((x333-x334)+(x335<=x336));

	if (t66 != 14716) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x337 = UINT32_MAX;
	volatile uint32_t x338 = 9599098U;
	int8_t x340 = INT8_MIN;
	uint32_t t67 = 658398877U;

	t67 = ((x337-x338)+(x339<=x340));

	if (t67 != 4285368198U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x341 = -1264;
	static uint64_t x342 = 1975670LLU;
	static int64_t x344 = -443020LL;
	uint64_t t68 = 7141LLU;

	t68 = ((x341-x342)+(x343<=x344));

	if (t68 != 18446744073707574682LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x346 = -1LL;
	int32_t x347 = -1;
	volatile int16_t x348 = 46;
	volatile int64_t t69 = -1302761803190570565LL;

	t69 = ((x345-x346)+(x347<=x348));

	if (t69 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x349 = 22228402262LLU;
	int32_t x350 = -1;
	int8_t x352 = -1;
	uint64_t t70 = 24614114299LLU;

	t70 = ((x349-x350)+(x351<=x352));

	if (t70 != 22228402264LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x356 = 530562LL;
	int32_t t71 = 3573980;

	t71 = ((x353-x354)+(x355<=x356));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x357 = 1;
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = 117;

	t72 = ((x357-x358)+(x359<=x360));

	if (t72 != 32770) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x362 = -29;
	volatile int64_t x363 = INT64_MIN;
	uint32_t t73 = 95U;

	t73 = ((x361-x362)+(x363<=x364));

	if (t73 != 29U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = -1;
	static uint16_t x367 = 7U;
	uint8_t x368 = 10U;
	int32_t t74 = -5369;

	t74 = ((x365-x366)+(x367<=x368));

	if (t74 != -126) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x369 = INT16_MIN;
	int8_t x370 = 23;
	int8_t x371 = INT8_MIN;
	volatile int8_t x372 = 17;
	volatile int32_t t75 = 1;

	t75 = ((x369-x370)+(x371<=x372));

	if (t75 != -32790) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x373 = INT32_MIN;
	static volatile int16_t x374 = 0;
	int8_t x375 = INT8_MIN;
	int32_t t76 = -4;

	t76 = ((x373-x374)+(x375<=x376));

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x381 = INT64_MIN;
	int32_t x382 = -1;
	uint32_t x383 = 1921988819U;
	static int32_t x384 = -162895540;
	volatile int64_t t77 = -3471865896607LL;

	t77 = ((x381-x382)+(x383<=x384));

	if (t77 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x385 = 250069354U;
	int32_t x388 = -62;
	int64_t t78 = 27808319414LL;

	t78 = ((x385-x386)+(x387<=x388));

	if (t78 != 250069356LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x389 = INT16_MAX;
	int8_t x390 = -3;
	volatile int32_t x391 = -1;
	volatile int32_t t79 = -1;

	t79 = ((x389-x390)+(x391<=x392));

	if (t79 != 32770) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x393 = 27U;
	int64_t x394 = -1LL;
	int16_t x396 = 0;
	int64_t t80 = 5430519776216317LL;

	t80 = ((x393-x394)+(x395<=x396));

	if (t80 != 28LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MIN;
	int64_t x404 = -1LL;

	t81 = ((x401-x402)+(x403<=x404));

	if (t81 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x405 = INT64_MIN;
	static int8_t x406 = INT8_MIN;
	static volatile uint32_t x407 = 3U;
	volatile int16_t x408 = INT16_MIN;
	volatile int64_t t82 = -1440587LL;

	t82 = ((x405-x406)+(x407<=x408));

	if (t82 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x409 = INT16_MAX;
	static int8_t x410 = 2;
	uint8_t x411 = UINT8_MAX;
	uint8_t x412 = 119U;
	int32_t t83 = 459;

	t83 = ((x409-x410)+(x411<=x412));

	if (t83 != 32765) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MIN;
	int64_t x419 = -1LL;
	uint16_t x420 = UINT16_MAX;

	t84 = ((x417-x418)+(x419<=x420));

	if (t84 != 2147450881) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x421 = 0U;
	volatile int8_t x422 = INT8_MAX;
	static int32_t x424 = 477214761;
	int32_t t85 = -11931;

	t85 = ((x421-x422)+(x423<=x424));

	if (t85 != -126) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x429 = INT32_MIN;
	static uint64_t x430 = 7LLU;
	int64_t x431 = -1LL;
	uint64_t t86 = 1005327609151LLU;

	t86 = ((x429-x430)+(x431<=x432));

	if (t86 != 18446744071562067961LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x434 = -1LL;
	volatile uint32_t x435 = 1348316102U;
	int64_t t87 = -1626944153008LL;

	t87 = ((x433-x434)+(x435<=x436));

	if (t87 != -2147483646LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x438 = UINT64_MAX;
	static int8_t x439 = INT8_MIN;
	int32_t x440 = 19;
	uint64_t t88 = 59357834024773LLU;

	t88 = ((x437-x438)+(x439<=x440));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x441 = INT32_MIN;
	uint64_t x442 = 428LLU;
	uint16_t x443 = 17025U;
	int64_t x444 = 40402605LL;
	volatile uint64_t t89 = 3366638201222LLU;

	t89 = ((x441-x442)+(x443<=x444));

	if (t89 != 18446744071562067541LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x445 = UINT16_MAX;
	uint64_t x447 = UINT64_MAX;
	volatile int32_t x448 = -367226155;

	t90 = ((x445-x446)+(x447<=x448));

	if (t90 != 65663) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x449 = INT32_MAX;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = -1;

	t91 = ((x449-x450)+(x451<=x452));

	if (t91 != 2147450881) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x453 = 99514LL;
	int8_t x454 = 3;
	static int32_t x455 = -1;
	static int64_t x456 = -5614289756LL;
	static int64_t t92 = -14655961754627149LL;

	t92 = ((x453-x454)+(x455<=x456));

	if (t92 != 99511LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x458 = INT32_MAX;
	int32_t x459 = INT32_MAX;
	uint16_t x460 = UINT16_MAX;
	static uint64_t t93 = 46LLU;

	t93 = ((x457-x458)+(x459<=x460));

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x463 = 3526263U;
	volatile int32_t t94 = 1861;

	t94 = ((x461-x462)+(x463<=x464));

	if (t94 != -2147483632) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x465 = INT16_MAX;
	uint8_t x466 = 55U;
	static int16_t x467 = 1662;
	uint8_t x468 = 1U;
	volatile int32_t t95 = 38325;

	t95 = ((x465-x466)+(x467<=x468));

	if (t95 != 32712) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x469 = -1;
	uint8_t x471 = 1U;

	t96 = ((x469-x470)+(x471<=x472));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x473 = 37;
	uint64_t x474 = UINT64_MAX;
	volatile int16_t x475 = -1;
	int8_t x476 = -1;
	volatile uint64_t t97 = 194088571651188731LLU;

	t97 = ((x473-x474)+(x475<=x476));

	if (t97 != 39LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x477 = UINT32_MAX;
	volatile uint64_t x478 = UINT64_MAX;
	int64_t x479 = INT64_MIN;
	uint32_t x480 = UINT32_MAX;
	volatile uint64_t t98 = 2LLU;

	t98 = ((x477-x478)+(x479<=x480));

	if (t98 != 4294967297LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x481 = INT64_MAX;
	int16_t x482 = INT16_MAX;
	int64_t x483 = INT64_MIN;
	uint16_t x484 = 66U;
	static volatile int64_t t99 = -8130848135908514LL;

	t99 = ((x481-x482)+(x483<=x484));

	if (t99 != 9223372036854743041LL) { NG(); } else { ; }
	
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

