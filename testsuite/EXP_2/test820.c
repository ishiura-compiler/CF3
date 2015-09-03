#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MAX;
int8_t x15 = 34;
uint16_t x18 = 2057U;
int32_t x29 = -6773800;
int8_t x30 = -1;
static volatile uint32_t x44 = UINT32_MAX;
uint8_t x45 = UINT8_MAX;
int16_t x50 = -874;
int64_t x51 = INT64_MIN;
volatile int8_t x52 = INT8_MAX;
volatile int64_t x56 = INT64_MIN;
int64_t t13 = 24632435219919506LL;
uint32_t x69 = 18517158U;
int64_t x74 = INT64_MAX;
volatile int16_t x78 = 5;
int64_t t17 = 1142211LL;
volatile uint64_t t19 = 35515LLU;
int64_t x90 = -132924LL;
static uint64_t x107 = UINT64_MAX;
static uint64_t t24 = 2996568063LLU;
volatile int16_t x114 = INT16_MAX;
volatile int64_t x116 = INT64_MIN;
int64_t x122 = INT64_MAX;
uint16_t x129 = 3290U;
static int32_t x132 = -7045792;
int64_t t30 = 13LL;
volatile int16_t x133 = -1;
static uint32_t x139 = UINT32_MAX;
static volatile int16_t x141 = 1;
uint16_t x142 = 221U;
static volatile uint64_t x144 = UINT64_MAX;
uint8_t x147 = 3U;
uint64_t x148 = 454102302883LLU;
static int64_t x154 = 513841LL;
uint16_t x160 = UINT16_MAX;
int32_t x161 = INT32_MIN;
int64_t t38 = 298581363872934114LL;
int32_t x166 = INT32_MIN;
uint32_t x168 = 735045U;
volatile uint16_t x170 = 1U;
int8_t x171 = INT8_MIN;
uint64_t x180 = 31841LLU;
static volatile uint32_t t43 = 618124662U;
int32_t x185 = 0;
uint8_t x190 = UINT8_MAX;
uint64_t x191 = 15911LLU;
uint32_t t46 = 38401U;
int32_t x201 = -1;
volatile uint64_t x209 = 17LLU;
static int8_t x217 = -13;
int64_t x218 = INT64_MIN;
int64_t t52 = 196085208471685217LL;
int8_t x230 = INT8_MIN;
volatile int64_t t55 = 15855260692631LL;
static int32_t x242 = INT32_MIN;
int8_t x244 = 4;
int64_t t56 = 0LL;
int8_t x247 = -7;
volatile int8_t x250 = INT8_MIN;
volatile int64_t x251 = INT64_MIN;
uint64_t t59 = 8218995852407758953LLU;
int16_t x273 = -1389;
volatile uint64_t t62 = 25213615167824LLU;
static uint32_t x287 = UINT32_MAX;
uint16_t x289 = UINT16_MAX;
volatile uint16_t x292 = 10U;
volatile uint32_t x298 = UINT32_MAX;
int8_t x299 = INT8_MIN;
int16_t x306 = 0;
volatile uint64_t t70 = 469874LLU;
int8_t x311 = INT8_MIN;
int64_t x330 = 12250150374158LL;
int64_t x331 = INT64_MAX;
uint16_t x339 = 1397U;
int16_t x344 = INT16_MIN;
int64_t t78 = -1022LL;
int32_t x354 = -1;
uint16_t x359 = UINT16_MAX;
int64_t t81 = -299706LL;
uint16_t x362 = UINT16_MAX;
volatile int32_t t82 = -5;
uint8_t x369 = UINT8_MAX;
volatile int32_t x371 = -1;
volatile int8_t x372 = INT8_MIN;
static volatile int64_t x373 = INT64_MIN;
int32_t x375 = INT32_MAX;
volatile int16_t x380 = INT16_MIN;
static int16_t x391 = INT16_MAX;
uint32_t x395 = 198614332U;
uint8_t x397 = UINT8_MAX;
volatile int64_t x399 = -1LL;
static uint64_t x404 = 1672981615721LLU;
int16_t x413 = INT16_MIN;
uint64_t t93 = 4740373892322081756LLU;
int32_t x418 = INT32_MAX;
int8_t x425 = 2;
volatile int32_t t96 = 111;
uint32_t x434 = 8775025U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static volatile uint32_t x2 = UINT32_MAX;
	volatile int16_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 624U;

	t0 = ((x1|(x2%x3))+x4);

	if (t0 != 4294967167U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -5;
	int32_t x6 = INT32_MIN;
	volatile uint8_t x8 = 7U;
	static int32_t t1 = -1;

	t1 = ((x5|(x6%x7))+x8);

	if (t1 != 6) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MAX;
	volatile int32_t x11 = INT32_MAX;
	volatile int32_t x12 = INT32_MIN;
	static volatile int64_t t2 = 518398563889LL;

	t2 = ((x9|(x10%x11))+x12);

	if (t2 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MAX;
	uint8_t x14 = 15U;
	static volatile int64_t x16 = 679315379571236LL;
	int64_t t3 = 16660777431935085LL;

	t3 = ((x13|(x14%x15))+x16);

	if (t3 != 679315379604003LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 82U;
	int16_t x19 = INT16_MIN;
	static uint8_t x20 = 1U;
	static volatile int32_t t4 = -18298;

	t4 = ((x17|(x18%x19))+x20);

	if (t4 != 2140) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int32_t x26 = INT32_MAX;
	static volatile int64_t x27 = -848713LL;
	uint16_t x28 = 7703U;
	int64_t t5 = 4300472707190868LL;

	t5 = ((x25|(x26%x27))+x28);

	if (t5 != 7702LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x31 = -421;
	uint16_t x32 = 30579U;
	int32_t t6 = 164185;

	t6 = ((x29|(x30%x31))+x32);

	if (t6 != 30578) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 2273U;
	uint16_t x34 = 1475U;
	int32_t x35 = INT32_MAX;
	int8_t x36 = 50;
	int32_t t7 = -22101765;

	t7 = ((x33|(x34%x35))+x36);

	if (t7 != 3605) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -2004;
	static int8_t x38 = INT8_MAX;
	int8_t x39 = -1;
	uint8_t x40 = 0U;
	int32_t t8 = -16384;

	t8 = ((x37|(x38%x39))+x40);

	if (t8 != -2004) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 3236;
	static int32_t x42 = -1497;
	uint32_t x43 = 103917U;
	volatile uint32_t t9 = 33419420U;

	t9 = ((x41|(x42%x43))+x44);

	if (t9 != 77244U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = INT8_MIN;
	static int64_t x48 = INT64_MIN;
	int64_t t10 = 3652416LL;

	t10 = ((x45|(x46%x47))+x48);

	if (t10 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = INT16_MAX;
	volatile int64_t t11 = 3563977871994836LL;

	t11 = ((x49|(x50%x51))+x52);

	if (t11 != 126LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = 7435029186170LL;
	int32_t x54 = -9;
	int64_t x55 = -1LL;
	volatile int64_t t12 = -397451LL;

	t12 = ((x53|(x54%x55))+x56);

	if (t12 != -9223364601825589638LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	volatile int64_t x62 = -1LL;
	uint8_t x63 = UINT8_MAX;
	volatile int16_t x64 = INT16_MIN;

	t13 = ((x61|(x62%x63))+x64);

	if (t13 != -32769LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 25993U;
	uint16_t x66 = 2649U;
	uint32_t x67 = 1736841U;
	uint16_t x68 = UINT16_MAX;
	uint32_t t14 = 27U;

	t14 = ((x65|(x66%x67))+x68);

	if (t14 != 94168U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x70 = INT16_MIN;
	int32_t x71 = -4679;
	int64_t x72 = -1LL;
	volatile int64_t t15 = -17704819818336376LL;

	t15 = ((x69|(x70%x71))+x72);

	if (t15 != 4294967286LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = 790;
	int32_t x75 = -206986028;
	int16_t x76 = -1;
	int64_t t16 = 105LL;

	t16 = ((x73|(x74%x75))+x76);

	if (t16 != 155394910LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	static uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MAX;

	t17 = ((x77|(x78%x79))+x80);

	if (t17 != -9223372036854743036LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = 0;
	uint64_t x82 = 24231LLU;
	int64_t x83 = -4LL;
	uint32_t x84 = UINT32_MAX;
	uint64_t t18 = 94547LLU;

	t18 = ((x81|(x82%x83))+x84);

	if (t18 != 4294991526LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	uint64_t x86 = 823068932158049482LLU;
	static uint16_t x87 = 14396U;
	int16_t x88 = 506;

	t19 = ((x85|(x86%x87))+x88);

	if (t19 != 505LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -1LL;
	int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MAX;
	volatile int64_t t20 = -132087LL;

	t20 = ((x89|(x90%x91))+x92);

	if (t20 != 2147483646LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	static uint16_t x94 = 306U;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = UINT16_MAX;
	int64_t t21 = -1031220537032LL;

	t21 = ((x93|(x94%x95))+x96);

	if (t21 != -9223372036854709967LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MAX;
	volatile int16_t x98 = 1;
	int32_t x99 = -79235100;
	int32_t x100 = 78472;
	static int32_t t22 = -3938;

	t22 = ((x97|(x98%x99))+x100);

	if (t22 != 78599) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	static volatile int16_t x102 = 6;
	int64_t x103 = 2401893267844398LL;
	static volatile int32_t x104 = -1;
	static volatile int64_t t23 = -21013602401748409LL;

	t23 = ((x101|(x102%x103))+x104);

	if (t23 != -32763LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 52U;
	volatile int8_t x106 = -1;
	uint8_t x108 = 119U;

	t24 = ((x105|(x106%x107))+x108);

	if (t24 != 171LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -107631;
	int64_t x110 = INT64_MIN;
	int32_t x111 = 1658;
	volatile int8_t x112 = 62;
	static int64_t t25 = -1721LL;

	t25 = ((x109|(x110%x111))+x112);

	if (t25 != -35LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = UINT64_MAX;
	uint32_t x115 = 30073U;
	volatile uint64_t t26 = 1LLU;

	t26 = ((x113|(x114%x115))+x116);

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x117 = 12U;
	int64_t x118 = 2559128LL;
	static uint32_t x119 = 13490U;
	int16_t x120 = -1;
	int64_t t27 = -423555647LL;

	t27 = ((x117|(x118%x119))+x120);

	if (t27 != 9517LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x121 = -1LL;
	int16_t x123 = INT16_MIN;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t28 = 2320LL;

	t28 = ((x121|(x122%x123))+x124);

	if (t28 != 254LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = 1U;
	int8_t x127 = INT8_MIN;
	volatile int16_t x128 = -10;
	static volatile int32_t t29 = 1645;

	t29 = ((x125|(x126%x127))+x128);

	if (t29 != -32777) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;

	t30 = ((x129|(x130%x131))+x132);

	if (t30 != -7042502LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = -20;
	uint8_t x135 = 3U;
	int64_t x136 = -1750961394592745384LL;
	volatile int64_t t31 = 24321594159LL;

	t31 = ((x133|(x134%x135))+x136);

	if (t31 != -1750961394592745385LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = -1;
	int32_t x140 = -1284350;
	volatile uint32_t t32 = 771407340U;

	t32 = ((x137|(x138%x139))+x140);

	if (t32 != 4293650178U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x143 = INT32_MIN;
	volatile uint64_t t33 = 2009LLU;

	t33 = ((x141|(x142%x143))+x144);

	if (t33 != 220LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -1LL;
	int8_t x146 = INT8_MAX;
	uint64_t t34 = 15LLU;

	t34 = ((x145|(x146%x147))+x148);

	if (t34 != 454102302882LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	uint32_t x150 = 484664U;
	uint16_t x151 = UINT16_MAX;
	uint16_t x152 = 13U;
	uint32_t t35 = 172577106U;

	t35 = ((x149|(x150%x151))+x152);

	if (t35 != 2147509580U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x153 = 2294364851029647LLU;
	int8_t x155 = -1;
	static int16_t x156 = 10152;
	uint64_t t36 = 518742039190032LLU;

	t36 = ((x153|(x154%x155))+x156);

	if (t36 != 2294364851039799LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x157 = 0LLU;
	int16_t x158 = -4;
	int32_t x159 = INT32_MIN;
	uint64_t t37 = 674555LLU;

	t37 = ((x157|(x158%x159))+x160);

	if (t37 != 65531LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x162 = INT64_MAX;
	uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 6145U;

	t38 = ((x161|(x162%x163))+x164);

	if (t38 != -2147477376LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	uint32_t t39 = 277U;

	t39 = ((x165|(x166%x167))+x168);

	if (t39 != 735044U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 821U;
	volatile int8_t x172 = INT8_MIN;
	int32_t t40 = 55165;

	t40 = ((x169|(x170%x171))+x172);

	if (t40 != 693) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	static int16_t x174 = INT16_MIN;
	uint64_t x175 = 90683235308370937LLU;
	volatile int8_t x176 = INT8_MIN;
	uint64_t t41 = 4LLU;

	t41 = ((x173|(x174%x175))+x176);

	if (t41 != 18446744073709531405LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 21949U;
	static volatile int16_t x178 = -1;
	int8_t x179 = -1;
	uint64_t t42 = 454288637LLU;

	t42 = ((x177|(x178%x179))+x180);

	if (t42 != 53790LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	static uint32_t x182 = 22358097U;
	uint8_t x183 = UINT8_MAX;
	static uint8_t x184 = 14U;

	t43 = ((x181|(x182%x183))+x184);

	if (t43 != 4294934749U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x186 = INT16_MIN;
	int16_t x187 = -1;
	volatile int64_t x188 = -1LL;
	int64_t t44 = 2726770LL;

	t44 = ((x185|(x186%x187))+x188);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -563609777502LL;
	int32_t x192 = 45529;
	static volatile uint64_t t45 = 5781973145309LLU;

	t45 = ((x189|(x190%x191))+x192);

	if (t45 != 18446743510099819736LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = 35;
	int16_t x198 = INT16_MAX;
	uint32_t x199 = UINT32_MAX;
	static uint16_t x200 = 27453U;

	t46 = ((x197|(x198%x199))+x200);

	if (t46 != 60220U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x202 = INT16_MAX;
	volatile int64_t x203 = INT64_MIN;
	volatile uint16_t x204 = 83U;
	int64_t t47 = -3603LL;

	t47 = ((x201|(x202%x203))+x204);

	if (t47 != 82LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = INT64_MIN;
	uint32_t x206 = 69U;
	int32_t x207 = INT32_MIN;
	volatile int8_t x208 = -1;
	volatile int64_t t48 = -1041256955LL;

	t48 = ((x205|(x206%x207))+x208);

	if (t48 != -9223372036854775740LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x210 = -323285803;
	int16_t x211 = 5568;
	int8_t x212 = INT8_MAX;
	volatile uint64_t t49 = 3673108219219628LLU;

	t49 = ((x209|(x210%x211))+x212);

	if (t49 != 18446744073709549588LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = -677;
	int64_t x215 = -2201LL;
	uint64_t x216 = 2LLU;
	uint64_t t50 = 150LLU;

	t50 = ((x213|(x214%x215))+x216);

	if (t50 != 18446744073709550941LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x219 = 1U;
	int8_t x220 = INT8_MAX;
	volatile int64_t t51 = -2LL;

	t51 = ((x217|(x218%x219))+x220);

	if (t51 != 114LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	volatile int16_t x222 = 314;
	int64_t x223 = -166637030009888850LL;
	int8_t x224 = -9;

	t52 = ((x221|(x222%x223))+x224);

	if (t52 != -9223372036854775503LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 7196U;
	int64_t x231 = -1LL;
	int16_t x232 = INT16_MIN;
	volatile int64_t t53 = -1329LL;

	t53 = ((x229|(x230%x231))+x232);

	if (t53 != -25572LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 1965484014LLU;
	int64_t x234 = -203667400459412065LL;
	uint32_t x235 = UINT32_MAX;
	uint8_t x236 = UINT8_MAX;
	uint64_t t54 = 6429324691854586715LLU;

	t54 = ((x233|(x234%x235))+x236);

	if (t54 != 18446744071519531261LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = 69173577550084LL;
	volatile uint32_t x238 = 33482U;
	volatile int8_t x239 = INT8_MIN;
	volatile int32_t x240 = 605652;

	t55 = ((x237|(x238%x239))+x240);

	if (t55 != 69173578156450LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MAX;
	static int64_t x243 = 7077589360608LL;

	t56 = ((x241|(x242%x243))+x244);

	if (t56 != -2147450877LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = -3947LL;
	static int8_t x246 = -1;
	volatile uint16_t x248 = UINT16_MAX;
	int64_t t57 = -70014105LL;

	t57 = ((x245|(x246%x247))+x248);

	if (t57 != 65534LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x249 = INT8_MIN;
	static volatile int8_t x252 = INT8_MIN;
	int64_t t58 = 545464LL;

	t58 = ((x249|(x250%x251))+x252);

	if (t58 != -256LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = -7;
	uint64_t x258 = 204402253LLU;
	int64_t x259 = -1LL;
	int32_t x260 = INT32_MAX;

	t59 = ((x257|(x258%x259))+x260);

	if (t59 != 2147483644LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x261 = -24;
	int8_t x262 = INT8_MIN;
	int8_t x263 = 1;
	uint64_t x264 = 6LLU;
	uint64_t t60 = 42346598LLU;

	t60 = ((x261|(x262%x263))+x264);

	if (t60 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x269 = 1LL;
	int32_t x270 = INT32_MIN;
	static int32_t x271 = -1729437;
	int64_t x272 = 531339009068LL;
	volatile int64_t t61 = -1087188692978LL;

	t61 = ((x269|(x270%x271))+x272);

	if (t61 != 531337756737LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x274 = -508871;
	uint64_t x275 = 334531432270LLU;
	static volatile int32_t x276 = -1947;

	t62 = ((x273|(x274%x275))+x276);

	if (t62 != 18446744073709549412LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = INT64_MIN;
	static volatile int8_t x278 = INT8_MIN;
	uint32_t x279 = 52U;
	uint32_t x280 = UINT32_MAX;
	static int64_t t63 = 84LL;

	t63 = ((x277|(x278%x279))+x280);

	if (t63 != -9223372032559808489LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = 594120043U;
	uint64_t x282 = 15LLU;
	uint64_t x283 = 2725413312588894786LLU;
	uint8_t x284 = 14U;
	volatile uint64_t t64 = 16394095911081317LLU;

	t64 = ((x281|(x282%x283))+x284);

	if (t64 != 594120061LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MIN;
	uint32_t x286 = UINT32_MAX;
	volatile int32_t x288 = INT32_MIN;
	static uint32_t t65 = 60261691U;

	t65 = ((x285|(x286%x287))+x288);

	if (t65 != 2147450880U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x290 = -1;
	volatile uint8_t x291 = UINT8_MAX;
	int32_t t66 = 20295;

	t66 = ((x289|(x290%x291))+x292);

	if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x293 = -58;
	static int64_t x294 = 2177037413519LL;
	uint64_t x295 = UINT64_MAX;
	volatile int32_t x296 = INT32_MIN;
	volatile uint64_t t67 = 136479941548486779LLU;

	t67 = ((x293|(x294%x295))+x296);

	if (t67 != 18446744071562067919LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x297 = INT8_MIN;
	int8_t x300 = INT8_MAX;
	volatile uint32_t t68 = 64317U;

	t68 = ((x297|(x298%x299))+x300);

	if (t68 != 126U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -25402;
	static uint64_t x302 = 2683143392LLU;
	int8_t x303 = INT8_MIN;
	int8_t x304 = INT8_MAX;
	uint64_t t69 = 37153521061958LLU;

	t69 = ((x301|(x302%x303))+x304);

	if (t69 != 18446744073709526373LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x305 = 1U;
	int64_t x307 = INT64_MIN;
	uint64_t x308 = UINT64_MAX;

	t70 = ((x305|(x306%x307))+x308);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x309 = 7659U;
	int8_t x310 = INT8_MIN;
	volatile int8_t x312 = -1;
	uint32_t t71 = 191521U;

	t71 = ((x309|(x310%x311))+x312);

	if (t71 != 7658U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = -26LL;
	volatile uint8_t x314 = 7U;
	static uint8_t x315 = 3U;
	int32_t x316 = INT32_MIN;
	static volatile int64_t t72 = 47863832583426LL;

	t72 = ((x313|(x314%x315))+x316);

	if (t72 != -2147483673LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x317 = UINT16_MAX;
	int8_t x318 = 48;
	uint32_t x319 = 2928U;
	uint64_t x320 = 102433931885824LLU;
	static volatile uint64_t t73 = 899896LLU;

	t73 = ((x317|(x318%x319))+x320);

	if (t73 != 102433931951359LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = INT16_MAX;
	static uint16_t x322 = 7U;
	volatile int32_t x323 = INT32_MIN;
	uint8_t x324 = 60U;
	int32_t t74 = 32974;

	t74 = ((x321|(x322%x323))+x324);

	if (t74 != 32827) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t75 = 733748270651LLU;

	t75 = ((x329|(x330%x331))+x332);

	if (t75 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x333 = -1;
	int32_t x334 = -16096778;
	volatile int32_t x335 = -1;
	uint32_t x336 = UINT32_MAX;
	uint32_t t76 = 61U;

	t76 = ((x333|(x334%x335))+x336);

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = 16U;
	int64_t x338 = INT64_MIN;
	int32_t x340 = INT32_MIN;
	volatile int64_t t77 = 7473LL;

	t77 = ((x337|(x338%x339))+x340);

	if (t77 != -2147484014LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x341 = INT8_MAX;
	uint16_t x342 = UINT16_MAX;
	int64_t x343 = -1LL;

	t78 = ((x341|(x342%x343))+x344);

	if (t78 != -32641LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x345 = -1;
	uint64_t x346 = 2LLU;
	static volatile int16_t x347 = INT16_MIN;
	static int32_t x348 = -1;
	static volatile uint64_t t79 = 3LLU;

	t79 = ((x345|(x346%x347))+x348);

	if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = -126;
	int16_t x355 = -677;
	volatile int8_t x356 = -1;
	static int32_t t80 = 3069077;

	t80 = ((x353|(x354%x355))+x356);

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = 7;
	uint8_t x358 = 11U;
	int64_t x360 = -3761553056678LL;

	t81 = ((x357|(x358%x359))+x360);

	if (t81 != -3761553056663LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x361 = 74U;
	int16_t x363 = -90;
	int8_t x364 = 32;

	t82 = ((x361|(x362%x363))+x364);

	if (t82 != 111) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x370 = -1;
	int32_t t83 = -28586;

	t83 = ((x369|(x370%x371))+x372);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x374 = -345626152;
	volatile int16_t x376 = INT16_MAX;
	volatile int64_t t84 = 33634LL;

	t84 = ((x373|(x374%x375))+x376);

	if (t84 != -345593385LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x377 = 41242611U;
	int8_t x378 = -27;
	uint64_t x379 = UINT64_MAX;
	uint64_t t85 = 103209879994669096LLU;

	t85 = ((x377|(x378%x379))+x380);

	if (t85 != 18446744073709518839LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = INT32_MAX;
	int64_t x382 = INT64_MAX;
	int64_t x383 = -388756584801LL;
	int32_t x384 = 213;
	int64_t t86 = 5752274LL;

	t86 = ((x381|(x382%x383))+x384);

	if (t86 != 382252089556LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x389 = 21083U;
	int16_t x390 = INT16_MIN;
	static int64_t x392 = 1LL;
	static volatile int64_t t87 = -2LL;

	t87 = ((x389|(x390%x391))+x392);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = INT64_MIN;
	volatile int64_t x394 = 246LL;
	volatile int8_t x396 = -1;
	volatile int64_t t88 = -426303LL;

	t88 = ((x393|(x394%x395))+x396);

	if (t88 != -9223372036854775563LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x398 = 2;
	static volatile int16_t x400 = INT16_MIN;
	int64_t t89 = -1876226924799516LL;

	t89 = ((x397|(x398%x399))+x400);

	if (t89 != -32513LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = -80;
	static int16_t x402 = INT16_MAX;
	volatile int32_t x403 = 9456474;
	volatile uint64_t t90 = 35708694593LLU;

	t90 = ((x401|(x402%x403))+x404);

	if (t90 != 1672981615720LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	int32_t x407 = 20480;
	static volatile uint16_t x408 = UINT16_MAX;
	volatile int64_t t91 = -3481477247352LL;

	t91 = ((x405|(x406%x407))+x408);

	if (t91 != 53247LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x409 = -24728296935929LL;
	int32_t x410 = INT32_MIN;
	volatile int64_t x411 = -1LL;
	static int64_t x412 = INT64_MAX;
	volatile int64_t t92 = -113272600843LL;

	t92 = ((x409|(x410%x411))+x412);

	if (t92 != 9223347308557839878LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x414 = 187735203177785530LLU;
	int32_t x415 = INT32_MAX;
	static int16_t x416 = -29;

	t93 = ((x413|(x414%x415))+x416);

	if (t93 != 18446744073709541621LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x417 = 44043LLU;
	volatile int8_t x419 = INT8_MAX;
	uint16_t x420 = 14U;
	volatile uint64_t t94 = 673796792676LLU;

	t94 = ((x417|(x418%x419))+x420);

	if (t94 != 44061LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x421 = -1;
	static uint64_t x422 = 1832539571877LLU;
	static volatile uint64_t x423 = UINT64_MAX;
	uint32_t x424 = 29U;
	uint64_t t95 = 9LLU;

	t95 = ((x421|(x422%x423))+x424);

	if (t95 != 28LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x426 = 2935514;
	int32_t x427 = 56344187;
	int32_t x428 = INT32_MIN;

	t96 = ((x425|(x426%x427))+x428);

	if (t96 != -2144548134) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x433 = UINT64_MAX;
	volatile int64_t x435 = INT64_MAX;
	static uint64_t x436 = 37940163LLU;
	uint64_t t97 = 1010603643396LLU;

	t97 = ((x433|(x434%x435))+x436);

	if (t97 != 37940162LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x437 = 30U;
	uint8_t x438 = 0U;
	uint16_t x439 = 19202U;
	int16_t x440 = 5;
	int32_t t98 = 0;

	t98 = ((x437|(x438%x439))+x440);

	if (t98 != 35) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x441 = 56105417;
	int8_t x442 = INT8_MIN;
	static uint16_t x443 = 503U;
	int64_t x444 = 122105159129636961LL;
	int64_t t99 = 373271172886568LL;

	t99 = ((x441|(x442%x443))+x444);

	if (t99 != 122105159129636906LL) { NG(); } else { ; }
	
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

