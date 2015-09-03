#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = INT16_MAX;
int16_t x6 = INT16_MIN;
int64_t x9 = INT64_MIN;
static volatile uint64_t x13 = 2596LLU;
int8_t x16 = -1;
uint32_t x17 = 415083662U;
volatile uint32_t t4 = 2080443892U;
uint8_t x23 = UINT8_MAX;
int64_t t5 = -183858LL;
int16_t x26 = -1;
static uint8_t x28 = 14U;
static uint64_t t7 = 3150179580539131LLU;
static volatile uint64_t t10 = 32LLU;
uint32_t x53 = 584960U;
uint32_t x55 = 1952369742U;
int16_t x58 = INT16_MIN;
volatile uint32_t x60 = UINT32_MAX;
uint64_t x69 = 5LLU;
int16_t x70 = INT16_MAX;
static int64_t x86 = 277938LL;
volatile uint32_t x100 = UINT32_MAX;
static uint64_t x102 = 1LLU;
volatile uint64_t t22 = 11LLU;
int64_t x106 = 140631375893994427LL;
uint8_t x112 = 1U;
uint8_t x119 = 1U;
static volatile uint32_t t30 = 610116355U;
static uint32_t x144 = 766U;
uint64_t t32 = 8700LLU;
uint16_t x151 = UINT16_MAX;
int16_t x152 = INT16_MAX;
uint16_t x155 = 1536U;
volatile int64_t t36 = 250LL;
static int16_t x161 = -7804;
uint32_t x163 = UINT32_MAX;
volatile int16_t x165 = 5;
uint16_t x170 = 402U;
static uint64_t x173 = 1275166681921422LLU;
uint8_t x182 = UINT8_MAX;
int8_t x183 = INT8_MIN;
int16_t x188 = INT16_MAX;
uint16_t x189 = 450U;
int8_t x190 = INT8_MAX;
static int8_t x195 = -1;
int32_t t47 = -11526764;
volatile int64_t x214 = 64937678280LL;
uint32_t x219 = UINT32_MAX;
static int32_t x226 = 949005854;
uint8_t x246 = 75U;
volatile int32_t t53 = -7427;
int64_t x249 = -1LL;
int16_t x251 = -1;
uint32_t x254 = 1767849515U;
volatile int64_t t55 = 11LL;
int16_t x257 = INT16_MIN;
volatile uint64_t t56 = 111838174539LLU;
int8_t x261 = INT8_MAX;
int8_t x264 = INT8_MAX;
static int16_t x270 = INT16_MIN;
int8_t x285 = INT8_MIN;
uint16_t x287 = 3U;
uint8_t x296 = 1U;
volatile uint32_t x299 = UINT32_MAX;
static int8_t x300 = INT8_MAX;
volatile int64_t t64 = -344248496LL;
int8_t x318 = -6;
static uint64_t x322 = UINT64_MAX;
uint32_t x324 = 14U;
uint64_t t70 = 59153372039275LLU;
int8_t x328 = -5;
static volatile uint64_t t71 = 25348122LLU;
static int64_t x335 = INT64_MAX;
int32_t x348 = 248;
static int16_t x352 = INT16_MAX;
uint16_t x367 = 5U;
volatile uint32_t x368 = UINT32_MAX;
uint32_t t80 = 1U;
int32_t x372 = INT32_MAX;
volatile uint64_t t81 = 2350240334LLU;
int64_t x380 = -1LL;
volatile uint64_t t84 = 1193707874676LLU;
int16_t x387 = INT16_MAX;
volatile int8_t x391 = -1;
volatile int8_t x396 = INT8_MAX;
static volatile uint8_t x398 = UINT8_MAX;
int8_t x402 = INT8_MIN;
static uint64_t t89 = 7700LLU;
volatile uint32_t x406 = 920U;
volatile int16_t x417 = 3;
static int64_t x425 = INT64_MIN;
static volatile int16_t x427 = INT16_MIN;
int64_t t94 = 1247LL;
static int16_t x433 = -1;
uint64_t x439 = UINT64_MAX;
static volatile uint64_t t97 = 130244730375416LLU;
volatile uint32_t t99 = 1U;


void f0(void) {
	int16_t x1 = -933;
	static int16_t x2 = INT16_MAX;
	uint8_t x3 = UINT8_MAX;
	volatile int32_t t0 = 2791;

	t0 = ((x1^(x2-x3))+x4);

	if (t0 != 858) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 80U;
	volatile uint64_t x7 = UINT64_MAX;
	int16_t x8 = INT16_MIN;
	static volatile uint64_t t1 = 452979055573874440LLU;

	t1 = ((x5^(x6-x7))+x8);

	if (t1 != 18446744073709486161LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x10 = -1;
	int32_t x11 = -1;
	uint16_t x12 = 3248U;
	volatile int64_t t2 = 1584481LL;

	t2 = ((x9^(x10-x11))+x12);

	if (t2 != -9223372036854772560LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = 7U;
	uint8_t x15 = UINT8_MAX;
	uint64_t t3 = 1525LLU;

	t3 = ((x13^(x14-x15))+x16);

	if (t3 != 18446744073709548843LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = -1;
	static int16_t x19 = INT16_MIN;
	uint16_t x20 = UINT16_MAX;

	t4 = ((x17^(x18-x19))+x20);

	if (t4 != 415159152U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -395LL;
	int16_t x22 = INT16_MAX;
	volatile int8_t x24 = INT8_MIN;

	t5 = ((x21^(x22-x23))+x24);

	if (t5 != -32523LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 39255666U;
	static uint64_t x27 = 2714152LLU;
	uint64_t t6 = 4246748827LLU;

	t6 = ((x25^(x26-x27))+x28);

	if (t6 != 18446744073667636147LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint32_t x30 = 43909U;
	uint64_t x31 = 467LLU;
	static int64_t x32 = 1038663165320LL;

	t7 = ((x29^(x30-x31))+x32);

	if (t7 != 1038663121877LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -69080628128LL;
	volatile int8_t x34 = INT8_MAX;
	uint8_t x35 = 1U;
	int8_t x36 = 0;
	static int64_t t8 = -328419905LL;

	t8 = ((x33^(x34-x35))+x36);

	if (t8 != -69080628194LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 4U;
	static int64_t x38 = INT64_MIN;
	int8_t x39 = 0;
	uint64_t x40 = 89305348752891LLU;
	uint64_t t9 = 9110LLU;

	t9 = ((x37^(x38-x39))+x40);

	if (t9 != 9223461342203528703LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -3;
	int64_t x42 = -1086LL;
	int8_t x43 = INT8_MIN;
	uint64_t x44 = 3LLU;

	t10 = ((x41^(x42-x43))+x44);

	if (t10 != 962LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = UINT8_MAX;
	static volatile int16_t x56 = 225;
	static volatile uint32_t t11 = 429U;

	t11 = ((x53^(x54-x55))+x56);

	if (t11 != 2343164562U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 80759;
	int64_t x59 = 1353655343772262356LL;
	int64_t t12 = 1617825738LL;

	t12 = ((x57^(x58-x59))+x60);

	if (t12 != -1353655339477263526LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	volatile uint32_t x63 = 3065621U;
	uint64_t x64 = 544597660994407LLU;
	static volatile uint64_t t13 = 155184336411368605LLU;

	t13 = ((x61^(x62-x63))+x64);

	if (t13 != 544599805379666LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -15422LL;
	uint16_t x66 = UINT16_MAX;
	int8_t x67 = -41;
	int8_t x68 = INT8_MIN;
	volatile int64_t t14 = -150661031500675LL;

	t14 = ((x65^(x66-x67))+x68);

	if (t14 != -81046LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x71 = 9;
	static uint32_t x72 = UINT32_MAX;
	uint64_t t15 = 475074LLU;

	t15 = ((x69^(x70-x71))+x72);

	if (t15 != 4295000050LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	static int64_t x76 = 165096LL;
	int64_t t16 = 8472626902LL;

	t16 = ((x73^(x74-x75))+x76);

	if (t16 != 230631LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x77 = INT8_MAX;
	int8_t x78 = INT8_MIN;
	static uint64_t x79 = 2953986825328112546LLU;
	static int8_t x80 = 5;
	volatile uint64_t t17 = 1619099LLU;

	t17 = ((x77^(x78-x79))+x80);

	if (t17 != 15492757248381438886LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = UINT16_MAX;
	uint64_t x82 = 18870LLU;
	int32_t x83 = INT32_MIN;
	static uint16_t x84 = 4234U;
	static volatile uint64_t t18 = 10386109609220LLU;

	t18 = ((x81^(x82-x83))+x84);

	if (t18 != 2147534547LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x85 = -1;
	uint16_t x87 = UINT16_MAX;
	volatile int16_t x88 = INT16_MIN;
	static int64_t t19 = 15083932LL;

	t19 = ((x85^(x86-x87))+x88);

	if (t19 != -245172LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MAX;
	volatile int32_t x90 = 3;
	int64_t x91 = -500769LL;
	static int64_t x92 = -1LL;
	volatile int64_t t20 = 1472LL;

	t20 = ((x89^(x90-x91))+x92);

	if (t20 != 500826LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 56U;
	int8_t x98 = INT8_MIN;
	int32_t x99 = 11;
	static uint32_t t21 = 881U;

	t21 = ((x97^(x98-x99))+x100);

	if (t21 != 4294967116U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x101 = 1594751172765737622LL;
	uint16_t x103 = 3U;
	static volatile int32_t x104 = INT32_MAX;

	t22 = ((x101^(x102-x103))+x104);

	if (t22 != 16851992903091297639LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -5;
	int16_t x107 = INT16_MAX;
	int8_t x108 = 0;
	int64_t t23 = 2752428651853098LL;

	t23 = ((x105^(x106-x107))+x108);

	if (t23 != -140631375893961657LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = UINT64_MAX;
	static int32_t x110 = INT32_MIN;
	int32_t x111 = -120677820;
	uint64_t t24 = 417570310547LLU;

	t24 = ((x109^(x110-x111))+x112);

	if (t24 != 2026805828LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = 1;
	int32_t x114 = 1;
	uint16_t x115 = 22U;
	int8_t x116 = INT8_MIN;
	int32_t t25 = 1;

	t25 = ((x113^(x114-x115))+x116);

	if (t25 != -150) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = -972489609LL;
	int32_t x120 = INT32_MIN;
	volatile int64_t t26 = 1821LL;

	t26 = ((x117^(x118-x119))+x120);

	if (t26 != -972489610LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	int8_t x122 = 0;
	static int8_t x123 = INT8_MAX;
	volatile int64_t x124 = -1LL;
	int64_t t27 = 3018140519513319LL;

	t27 = ((x121^(x122-x123))+x124);

	if (t27 != 125LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = INT16_MIN;
	int64_t x126 = 16918921002985LL;
	volatile uint16_t x127 = 6922U;
	int16_t x128 = INT16_MIN;
	volatile int64_t t28 = -2315272LL;

	t28 = ((x125^(x126-x127))+x128);

	if (t28 != -16918921042721LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = -1;
	int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	uint16_t x132 = 18U;
	static volatile int64_t t29 = 5249383394338LL;

	t29 = ((x129^(x130-x131))+x132);

	if (t29 != -9223372036854775663LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 4U;
	int8_t x134 = INT8_MIN;
	static int32_t x135 = -13582718;
	uint32_t x136 = 14353935U;

	t30 = ((x133^(x134-x135))+x136);

	if (t30 != 27936521U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = -1;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = UINT32_MAX;
	int32_t x140 = 299741;
	volatile uint32_t t31 = 212075767U;

	t31 = ((x137^(x138-x139))+x140);

	if (t31 != 2147783387U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -1;
	uint64_t x142 = 17030955LLU;
	uint64_t x143 = 11067574076827904LLU;

	t32 = ((x141^(x142-x143))+x144);

	if (t32 != 11067574059797714LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 2020U;
	volatile int32_t x146 = -1729799;
	static int32_t x147 = 1;
	uint8_t x148 = 4U;
	volatile int32_t t33 = 1313943;

	t33 = ((x145^(x146-x147))+x148);

	if (t33 != -1729248) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -135;
	int16_t x150 = 2333;
	volatile int32_t t34 = -228501;

	t34 = ((x149^(x150-x151))+x152);

	if (t34 != 95846) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 61U;
	int16_t x154 = -1;
	int32_t x156 = 163;
	static int32_t t35 = 52012590;

	t35 = ((x153^(x154-x155))+x156);

	if (t35 != -1435) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = INT8_MIN;
	int64_t x158 = -2053728823674403LL;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;

	t36 = ((x157^(x158-x159))+x160);

	if (t36 != 2053728823641565LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x162 = -1;
	int8_t x164 = -1;
	uint32_t t37 = 38U;

	t37 = ((x161^(x162-x163))+x164);

	if (t37 != 4294959491U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x166 = -1;
	static volatile int8_t x167 = INT8_MAX;
	int16_t x168 = -1;
	volatile int32_t t38 = -25;

	t38 = ((x165^(x166-x167))+x168);

	if (t38 != -124) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x169 = -1;
	int16_t x171 = 5054;
	static volatile int8_t x172 = 11;
	int32_t t39 = 416113;

	t39 = ((x169^(x170-x171))+x172);

	if (t39 != 4662) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = 1669765594LL;
	volatile uint8_t x175 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	static uint64_t t40 = 7240154778LLU;

	t40 = ((x173^(x174-x175))+x176);

	if (t40 != 1275165096537941LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 190577669U;
	static int16_t x184 = -3931;
	volatile uint32_t t41 = 138180507U;

	t41 = ((x181^(x182-x183))+x184);

	if (t41 != 190574111U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	static uint8_t x186 = 18U;
	volatile int32_t x187 = 74007749;
	volatile int32_t t42 = -59169;

	t42 = ((x185^(x186-x187))+x188);

	if (t42 != 74040524) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x191 = INT8_MIN;
	int64_t x192 = 457555647LL;
	volatile int64_t t43 = 214120325213LL;

	t43 = ((x189^(x190-x191))+x192);

	if (t43 != 457555964LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = -54486354526121041LL;
	int8_t x194 = INT8_MAX;
	static int8_t x196 = -1;
	int64_t t44 = -7535230994164950LL;

	t44 = ((x193^(x194-x195))+x196);

	if (t44 != -54486354526121170LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = 24LLU;
	int16_t x202 = INT16_MIN;
	volatile uint32_t x203 = 1175238U;
	int16_t x204 = INT16_MAX;
	static volatile uint64_t t45 = 3LLU;

	t45 = ((x201^(x202-x203))+x204);

	if (t45 != 4293792033LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x205 = -1;
	int32_t x206 = INT32_MIN;
	static volatile int32_t x207 = INT32_MIN;
	uint64_t x208 = 9985588391980109LLU;
	volatile uint64_t t46 = 22271189512507857LLU;

	t46 = ((x205^(x206-x207))+x208);

	if (t46 != 9985588391980108LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x209 = 81U;
	static volatile int32_t x210 = -1;
	static uint16_t x211 = UINT16_MAX;
	static uint16_t x212 = 1604U;

	t47 = ((x209^(x210-x211))+x212);

	if (t47 != -63851) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MIN;
	volatile int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MIN;
	volatile int64_t t48 = -3406476020LL;

	t48 = ((x213^(x214-x215))+x216);

	if (t48 != -64937700024LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x217 = 21785U;
	static volatile int16_t x218 = 2856;
	int32_t x220 = INT32_MIN;
	uint32_t t49 = 8900180U;

	t49 = ((x217^(x218-x219))+x220);

	if (t49 != 2147507760U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MIN;
	uint16_t x227 = 1284U;
	int16_t x228 = -337;
	int64_t t50 = -444400906490063319LL;

	t50 = ((x225^(x226-x227))+x228);

	if (t50 != -9223372035905771575LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = 5U;
	volatile int16_t x230 = INT16_MIN;
	uint32_t x231 = 0U;
	static volatile int8_t x232 = 7;
	volatile uint32_t t51 = 41279014U;

	t51 = ((x229^(x230-x231))+x232);

	if (t51 != 4294934540U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 3U;
	volatile int8_t x242 = -23;
	int16_t x243 = INT16_MIN;
	static int16_t x244 = INT16_MAX;
	volatile int32_t t52 = -281;

	t52 = ((x241^(x242-x243))+x244);

	if (t52 != 65513) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = INT8_MAX;
	static uint16_t x247 = 7U;
	int16_t x248 = INT16_MAX;

	t53 = ((x245^(x246-x247))+x248);

	if (t53 != 32826) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x250 = INT8_MIN;
	int64_t x252 = INT64_MIN;
	volatile int64_t t54 = 73LL;

	t54 = ((x249^(x250-x251))+x252);

	if (t54 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x253 = 136LL;
	static int64_t x255 = -5833481305LL;
	uint16_t x256 = 1418U;

	t55 = ((x253^(x254-x255))+x256);

	if (t55 != 7601332118LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x258 = UINT16_MAX;
	static volatile int64_t x259 = 243829764824678229LL;
	static uint64_t x260 = 420804258LLU;

	t56 = ((x257^(x258-x259))+x260);

	if (t56 != 243829765245417292LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x262 = INT32_MIN;
	static int32_t x263 = -1;
	int32_t t57 = 30324645;

	t57 = ((x261^(x262-x263))+x264);

	if (t57 != -2147483395) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x269 = INT32_MAX;
	volatile int64_t x271 = 8378819358920521LL;
	int16_t x272 = INT16_MAX;
	volatile int64_t t58 = -113LL;

	t58 = ((x269^(x270-x271))+x272);

	if (t58 != -8378818032595129LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MAX;
	int64_t x275 = 25049232915815LL;
	volatile int32_t x276 = INT32_MIN;
	volatile int64_t t59 = -904429213082774LL;

	t59 = ((x273^(x274-x275))+x276);

	if (t59 != 25045118141080LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x277 = 2;
	uint8_t x278 = UINT8_MAX;
	uint8_t x279 = 0U;
	int64_t x280 = -1LL;
	int64_t t60 = 12820476979LL;

	t60 = ((x277^(x278-x279))+x280);

	if (t60 != 252LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x281 = INT16_MIN;
	static int32_t x282 = INT32_MAX;
	uint16_t x283 = UINT16_MAX;
	volatile int8_t x284 = INT8_MAX;
	static int32_t t61 = -7901;

	t61 = ((x281^(x282-x283))+x284);

	if (t61 != -2147450753) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x286 = -1;
	volatile int16_t x288 = INT16_MIN;
	static int32_t t62 = -45;

	t62 = ((x285^(x286-x287))+x288);

	if (t62 != -32644) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = INT64_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	int32_t x295 = INT32_MAX;
	int64_t t63 = -966316554762954668LL;

	t63 = ((x293^(x294-x295))+x296);

	if (t63 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x297 = INT8_MAX;
	int64_t x298 = 108324609LL;

	t64 = ((x297^(x298-x299))+x300);

	if (t64 != -4186642436LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x301 = 17U;
	int64_t x302 = 1215670LL;
	uint16_t x303 = 1U;
	uint32_t x304 = UINT32_MAX;
	static int64_t t65 = -140LL;

	t65 = ((x301^(x302-x303))+x304);

	if (t65 != 4296182947LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 133374691LLU;
	int64_t x308 = -18840930033LL;
	volatile uint64_t t66 = 70007083LLU;

	t66 = ((x305^(x306-x307))+x308);

	if (t66 != 18446744050707029105LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = INT32_MIN;
	volatile int32_t x310 = INT32_MIN;
	static int64_t x311 = INT64_MIN;
	volatile int16_t x312 = INT16_MAX;
	volatile int64_t t67 = -13131145537876LL;

	t67 = ((x309^(x310-x311))+x312);

	if (t67 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MIN;
	static volatile uint32_t x314 = 1U;
	int64_t x315 = -1LL;
	int16_t x316 = -1922;
	static int64_t t68 = -32991317107LL;

	t68 = ((x313^(x314-x315))+x316);

	if (t68 != -34688LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = 9105278LLU;
	int64_t x319 = -1LL;
	int16_t x320 = 473;
	volatile uint64_t t69 = 320451354LLU;

	t69 = ((x317^(x318-x319))+x320);

	if (t69 != 18446744073700446814LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x321 = UINT64_MAX;
	static uint16_t x323 = 0U;

	t70 = ((x321^(x322-x323))+x324);

	if (t70 != 14LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = -81;
	static uint32_t x326 = 583640U;
	static uint64_t x327 = UINT64_MAX;

	t71 = ((x325^(x326-x327))+x328);

	if (t71 != 18446744073708968049LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x329 = INT8_MAX;
	int16_t x330 = INT16_MIN;
	int16_t x331 = -1;
	static uint32_t x332 = 29622U;
	uint32_t t72 = 12075240U;

	t72 = ((x329^(x330-x331))+x332);

	if (t72 != 4294964276U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x334 = 12LLU;
	uint16_t x336 = 325U;
	volatile uint64_t t73 = 7613LLU;

	t73 = ((x333^(x334-x335))+x336);

	if (t73 != 9223372036854776018LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x337 = 2430075208100LLU;
	int8_t x338 = INT8_MIN;
	int32_t x339 = -1;
	int16_t x340 = -3840;
	volatile uint64_t t74 = 2977LLU;

	t74 = ((x337^(x338-x339))+x340);

	if (t74 != 18446741643634339621LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x342 = UINT64_MAX;
	volatile uint32_t x343 = 39U;
	int32_t x344 = INT32_MIN;
	uint64_t t75 = 1694143382018LLU;

	t75 = ((x341^(x342-x343))+x344);

	if (t75 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = INT8_MAX;
	volatile int16_t x346 = INT16_MIN;
	int32_t x347 = -5454936;
	int32_t t76 = 56105404;

	t76 = ((x345^(x346-x347))+x348);

	if (t76 != 5422367) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = -1;
	uint64_t x350 = 46LLU;
	int64_t x351 = -33605523494LL;
	static uint64_t t77 = 2005281648945808LLU;

	t77 = ((x349^(x350-x351))+x352);

	if (t77 != 18446744040104060842LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	int8_t x360 = -4;
	volatile int32_t t78 = 5106879;

	t78 = ((x357^(x358-x359))+x360);

	if (t78 != -5) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = -1;
	int8_t x362 = INT8_MIN;
	int16_t x363 = -42;
	volatile int16_t x364 = -1591;
	volatile int32_t t79 = -231;

	t79 = ((x361^(x362-x363))+x364);

	if (t79 != -1506) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x365 = 567U;
	int16_t x366 = INT16_MAX;

	t80 = ((x365^(x366-x367))+x368);

	if (t80 != 32204U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = 21507970694491525LLU;
	volatile uint32_t x371 = 138U;

	t81 = ((x369^(x370-x371))+x372);

	if (t81 != 18425236104393633018LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = -553371;
	uint64_t x374 = 133LLU;
	volatile int32_t x375 = 125117;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t82 = 8493003LLU;

	t82 = ((x373^(x374-x375))+x376);

	if (t82 != 596397LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x377 = 18U;
	uint64_t x378 = 14188LLU;
	uint64_t x379 = UINT64_MAX;
	uint64_t t83 = 71971926480132LLU;

	t83 = ((x377^(x378-x379))+x380);

	if (t83 != 14206LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x381 = UINT16_MAX;
	uint16_t x382 = 11337U;
	uint16_t x383 = UINT16_MAX;
	static uint64_t x384 = 224LLU;

	t84 = ((x381^(x382-x383))+x384);

	if (t84 != 18446744073709540501LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x385 = 313;
	uint16_t x386 = 244U;
	uint32_t x388 = 1U;
	uint32_t t85 = 32889180U;

	t85 = ((x385^(x386-x387))+x388);

	if (t85 != 4294934989U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x389 = -1;
	uint8_t x390 = 7U;
	int16_t x392 = -1744;
	int32_t t86 = 129563656;

	t86 = ((x389^(x390-x391))+x392);

	if (t86 != -1753) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x393 = 3U;
	int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MIN;
	volatile int64_t t87 = 216327LL;

	t87 = ((x393^(x394-x395))+x396);

	if (t87 != 9223372034707292290LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x397 = UINT32_MAX;
	static int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	uint32_t t88 = 115U;

	t88 = ((x397^(x398-x399))+x400);

	if (t88 != 4294901504U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = INT64_MAX;
	uint64_t x403 = UINT64_MAX;
	static int16_t x404 = -1;

	t89 = ((x401^(x402-x403))+x404);

	if (t89 != 9223372036854775933LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = 19;
	volatile uint8_t x407 = UINT8_MAX;
	int16_t x408 = INT16_MIN;
	static volatile uint32_t t90 = 22908561U;

	t90 = ((x405^(x406-x407))+x408);

	if (t90 != 4294935178U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = INT16_MAX;
	uint64_t x411 = UINT64_MAX;
	uint64_t x412 = UINT64_MAX;
	uint64_t t91 = 15852LLU;

	t91 = ((x409^(x410-x411))+x412);

	if (t91 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x413 = INT32_MIN;
	static uint32_t x414 = UINT32_MAX;
	static int32_t x415 = INT32_MIN;
	uint64_t x416 = 5010451748LLU;
	uint64_t t92 = 1047491LLU;

	t92 = ((x413^(x414-x415))+x416);

	if (t92 != 9305419043LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x418 = INT8_MAX;
	static int8_t x419 = INT8_MIN;
	int32_t x420 = 22891516;
	static volatile int32_t t93 = 5052;

	t93 = ((x417^(x418-x419))+x420);

	if (t93 != 22891768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x426 = INT8_MAX;
	int32_t x428 = 0;

	t94 = ((x425^(x426-x427))+x428);

	if (t94 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x429 = INT16_MIN;
	uint16_t x430 = 231U;
	int8_t x431 = INT8_MIN;
	int8_t x432 = 27;
	volatile int32_t t95 = 121825995;

	t95 = ((x429^(x430-x431))+x432);

	if (t95 != -32382) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x434 = INT16_MIN;
	uint16_t x435 = 3U;
	int32_t x436 = -1;
	static int32_t t96 = 612;

	t96 = ((x433^(x434-x435))+x436);

	if (t96 != 32769) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x437 = INT8_MAX;
	uint64_t x438 = 117LLU;
	volatile int16_t x440 = 28;

	t97 = ((x437^(x438-x439))+x440);

	if (t97 != 37LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MAX;
	static int16_t x442 = INT16_MAX;
	volatile int8_t x443 = -9;
	int64_t x444 = -3651000568361647916LL;
	int64_t t98 = 16890204510813278LL;

	t98 = ((x441^(x442-x443))+x444);

	if (t98 != -3651000568361615029LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x449 = 3U;
	uint32_t x450 = 5468186U;
	int32_t x451 = INT32_MAX;
	volatile uint32_t x452 = 13U;

	t99 = ((x449^(x450-x451))+x452);

	if (t99 != 2152951845U) { NG(); } else { ; }
	
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

