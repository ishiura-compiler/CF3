#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
volatile int8_t x8 = -1;
volatile int16_t x17 = INT16_MAX;
int64_t t2 = 1751515LL;
int16_t x30 = INT16_MIN;
uint16_t x36 = 25U;
volatile int8_t x52 = 1;
static int64_t x58 = -1LL;
static uint8_t x68 = 18U;
int8_t x79 = 5;
static int32_t x80 = -1;
int32_t x82 = INT32_MIN;
volatile int64_t t17 = 240309854381137LL;
static volatile uint64_t t18 = 529868100742246LLU;
uint8_t x93 = 7U;
int16_t x98 = INT16_MIN;
uint16_t x101 = UINT16_MAX;
volatile uint16_t x102 = 14319U;
volatile int32_t x105 = -1;
volatile int32_t x115 = INT32_MIN;
int64_t t23 = -492LL;
int32_t t24 = -12758601;
uint64_t x122 = 59431463178651658LLU;
uint8_t x124 = 3U;
volatile uint64_t t25 = 27LLU;
int16_t x130 = -1;
static int16_t x134 = -1;
int32_t x139 = INT32_MIN;
uint8_t x144 = 29U;
volatile uint8_t x148 = UINT8_MAX;
int16_t x150 = INT16_MIN;
int8_t x155 = INT8_MAX;
volatile int16_t x163 = INT16_MIN;
int64_t x164 = INT64_MIN;
uint32_t x165 = 12899U;
static int32_t x167 = 592952;
int64_t x173 = INT64_MAX;
uint64_t x175 = UINT64_MAX;
static volatile int64_t t41 = 150642940371LL;
static uint16_t x205 = UINT16_MAX;
uint64_t t43 = 5LLU;
static int64_t x218 = INT64_MIN;
volatile int8_t x225 = INT8_MIN;
uint32_t x228 = 467U;
static int32_t x229 = 31398554;
uint32_t x238 = 253U;
static uint64_t t52 = 874998426585LLU;
int16_t x266 = INT16_MIN;
static int64_t x267 = -7749509LL;
volatile uint32_t x275 = 2039139920U;
uint64_t x277 = UINT64_MAX;
int64_t t58 = -3070268331702LL;
int8_t x288 = -1;
uint16_t x291 = UINT16_MAX;
uint16_t x312 = 3U;
volatile int64_t x313 = INT64_MIN;
static volatile int32_t x320 = -4708040;
volatile int8_t x321 = 1;
uint16_t x322 = UINT16_MAX;
int64_t x330 = INT64_MIN;
uint32_t x331 = 34U;
int32_t x342 = -612267087;
int32_t x346 = INT32_MIN;
static int32_t x348 = -91841853;
volatile int32_t t72 = -85297393;
int8_t x351 = INT8_MIN;
static int64_t x363 = INT64_MAX;
int32_t x364 = INT32_MIN;
int64_t t75 = -451182183511287LL;
static int16_t x373 = INT16_MIN;
volatile uint64_t t78 = 164LLU;
uint32_t x378 = 244716622U;
int32_t x381 = INT32_MIN;
uint16_t x384 = 3U;
volatile uint16_t x397 = 2721U;
volatile uint32_t x399 = 28522U;
volatile uint64_t x400 = 1LLU;
int32_t x401 = INT32_MIN;
static uint64_t t84 = 75962399340LLU;
int8_t x405 = INT8_MIN;
int64_t x406 = -1LL;
int64_t t85 = 2561731178460659906LL;
static volatile uint64_t t86 = 37185153163LLU;
volatile uint64_t t87 = 440006LLU;
volatile int8_t x425 = INT8_MAX;
uint64_t x426 = 11512376631LLU;
volatile uint64_t t89 = 5606LLU;
volatile uint8_t x436 = 1U;
static int16_t x437 = INT16_MIN;
uint32_t t92 = 2022U;
int64_t x450 = -4412044LL;
volatile int32_t x456 = INT32_MIN;
static int32_t x469 = -1;
uint64_t t98 = 6069LLU;
volatile int8_t x479 = -28;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	volatile int64_t x2 = -1934132262956LL;
	static volatile int8_t x3 = INT8_MIN;
	volatile int64_t t0 = 1011351337070LL;

	t0 = (x1-((x2&x3)-x4));

	if (t0 != 1934132295806LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 0U;
	static int64_t x6 = 21313821822091317LL;
	int8_t x7 = INT8_MIN;
	volatile int64_t t1 = 776925812LL;

	t1 = (x5-((x6&x7)-x8));

	if (t1 != -21313821822091265LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x18 = INT64_MIN;
	uint8_t x19 = 4U;
	static int16_t x20 = -3437;

	t2 = (x17-((x18&x19)-x20));

	if (t2 != 29330LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x21 = 28U;
	uint64_t x22 = UINT64_MAX;
	uint8_t x23 = 3U;
	int16_t x24 = -12053;
	uint64_t t3 = 43939113LLU;

	t3 = (x21-((x22&x23)-x24));

	if (t3 != 18446744073709539588LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	int64_t x26 = INT64_MIN;
	uint32_t x27 = 1109541U;
	volatile uint8_t x28 = 97U;
	volatile int64_t t4 = 18851891898LL;

	t4 = (x25-((x26&x27)-x28));

	if (t4 != -9223372036854775711LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int8_t x31 = 29;
	int32_t x32 = -6521;
	volatile int32_t t5 = 38;

	t5 = (x29-((x30&x31)-x32));

	if (t5 != 59014) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 1;
	volatile int8_t x34 = -1;
	volatile uint8_t x35 = UINT8_MAX;
	volatile int32_t t6 = -53413430;

	t6 = (x33-((x34&x35)-x36));

	if (t6 != -229) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 1;
	int64_t x38 = 416557476460LL;
	int64_t x39 = 10100253835904LL;
	int8_t x40 = INT8_MIN;
	volatile int64_t t7 = -122336LL;

	t7 = (x37-((x38&x39)-x40));

	if (t7 != -140190581375LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x45 = 26929U;
	int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MIN;
	int8_t x48 = -56;
	int32_t t8 = -782962;

	t8 = (x45-((x46&x47)-x48));

	if (t8 != 59641) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -750;
	int64_t x50 = INT64_MIN;
	int8_t x51 = 13;
	int64_t t9 = -1LL;

	t9 = (x49-((x50&x51)-x52));

	if (t9 != -749LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = INT16_MAX;
	uint8_t x54 = UINT8_MAX;
	volatile uint64_t x55 = 1360532319171LLU;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t10 = 634803183LLU;

	t10 = (x53-((x54&x55)-x56));

	if (t10 != 32571LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = -1;
	int8_t x59 = -1;
	int32_t x60 = -1;
	static volatile int64_t t11 = -3380689071598122LL;

	t11 = (x57-((x58&x59)-x60));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x61 = 4U;
	int32_t x62 = 170329384;
	volatile int64_t x63 = 207983LL;
	int32_t x64 = -2961674;
	volatile int64_t t12 = -102779001LL;

	t12 = (x61-((x62&x63)-x64));

	if (t12 != -3159342LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	uint16_t x66 = 6094U;
	static int16_t x67 = -1;
	int32_t t13 = -581;

	t13 = (x65-((x66&x67)-x68));

	if (t13 != -6204) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = 10;
	int32_t x70 = INT32_MIN;
	int8_t x71 = 1;
	int8_t x72 = INT8_MAX;
	static int32_t t14 = 6483463;

	t14 = (x69-((x70&x71)-x72));

	if (t14 != 137) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 5381695LLU;
	volatile int16_t x78 = INT16_MIN;
	volatile uint64_t t15 = 28361LLU;

	t15 = (x77-((x78&x79)-x80));

	if (t15 != 5381694LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = -5;
	volatile int32_t x83 = INT32_MIN;
	int8_t x84 = -1;
	int32_t t16 = -74938147;

	t16 = (x81-((x82&x83)-x84));

	if (t16 != 2147483642) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = INT8_MIN;
	int16_t x86 = 9492;
	int64_t x87 = -1LL;
	static int16_t x88 = -5320;

	t17 = (x85-((x86&x87)-x88));

	if (t17 != -14940LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = UINT64_MAX;
	static uint16_t x90 = UINT16_MAX;
	int16_t x91 = -6;
	volatile int16_t x92 = INT16_MAX;

	t18 = (x89-((x90&x91)-x92));

	if (t18 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = -1;
	int8_t x96 = INT8_MIN;
	volatile uint64_t t19 = 455370LLU;

	t19 = (x93-((x94&x95)-x96));

	if (t19 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x97 = 151194U;
	uint8_t x99 = 13U;
	uint64_t x100 = 823840866LLU;
	static volatile uint64_t t20 = 2652659732310LLU;

	t20 = (x97-((x98&x99)-x100));

	if (t20 != 823992060LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x103 = INT8_MIN;
	static int16_t x104 = INT16_MIN;
	int32_t t21 = -117;

	t21 = (x101-((x102&x103)-x104));

	if (t21 != 18559) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x106 = 37215U;
	volatile int8_t x107 = INT8_MAX;
	int64_t x108 = 3LL;
	static volatile int64_t t22 = 1744675156LL;

	t22 = (x105-((x106&x107)-x108));

	if (t22 != -93LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = 50711513538LL;
	int8_t x114 = -1;
	volatile int64_t x116 = -908970LL;

	t23 = (x113-((x114&x115)-x116));

	if (t23 != 52858088216LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -1;
	int8_t x118 = INT8_MAX;
	int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MIN;

	t24 = (x117-((x118&x119)-x120));

	if (t24 != -129) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x121 = 0U;
	uint8_t x123 = 6U;

	t25 = (x121-((x122&x123)-x124));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x129 = 19805035136796577LL;
	int32_t x131 = INT32_MIN;
	int16_t x132 = -12;
	volatile int64_t t26 = 46003936633078042LL;

	t26 = (x129-((x130&x131)-x132));

	if (t26 != 19805037284280213LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = 8661923151LLU;
	volatile int16_t x135 = INT16_MIN;
	int16_t x136 = -1;
	uint64_t t27 = 629719302354443683LLU;

	t27 = (x133-((x134&x135)-x136));

	if (t27 != 8661955918LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = 4U;
	int64_t x138 = 22398177179434265LL;
	uint64_t x140 = 42557387852557LLU;
	volatile uint64_t t28 = 16088LLU;

	t28 = (x137-((x138&x139)-x140));

	if (t28 != 18424388453958175505LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = UINT16_MAX;
	uint64_t x142 = 14503646LLU;
	volatile int16_t x143 = INT16_MAX;
	uint64_t t29 = 778998427457LLU;

	t29 = (x141-((x142&x143)-x144));

	if (t29 != 45374LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MIN;
	volatile uint64_t x147 = 4958041651340152LLU;
	static uint64_t t30 = 37241274648485LLU;

	t30 = (x145-((x146&x147)-x148));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x149 = 26104U;
	volatile int16_t x151 = INT16_MAX;
	int16_t x152 = -3363;
	static volatile int32_t t31 = -1108;

	t31 = (x149-((x150&x151)-x152));

	if (t31 != 22741) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x153 = -3691;
	int16_t x154 = INT16_MAX;
	static int64_t x156 = -16056713LL;
	volatile int64_t t32 = 2903696LL;

	t32 = (x153-((x154&x155)-x156));

	if (t32 != -16060531LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x161 = INT8_MAX;
	uint64_t x162 = UINT64_MAX;
	volatile uint64_t t33 = 72102LLU;

	t33 = (x161-((x162&x163)-x164));

	if (t33 != 9223372036854808703LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x166 = -877LL;
	int16_t x168 = 21;
	volatile int64_t t34 = 23947LL;

	t34 = (x165-((x166&x167)-x168));

	if (t34 != -579992LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 63U;
	volatile int8_t x170 = INT8_MIN;
	volatile uint16_t x171 = 0U;
	volatile int8_t x172 = 1;
	volatile int32_t t35 = -1;

	t35 = (x169-((x170&x171)-x172));

	if (t35 != 64) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x174 = INT64_MIN;
	int64_t x176 = INT64_MIN;
	volatile uint64_t t36 = 2072256LLU;

	t36 = (x173-((x174&x175)-x176));

	if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x181 = INT8_MIN;
	static uint16_t x182 = UINT16_MAX;
	int16_t x183 = -27;
	volatile uint64_t x184 = 5772590132LLU;
	uint64_t t37 = 975546526915LLU;

	t37 = (x181-((x182&x183)-x184));

	if (t37 != 5772524495LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x185 = UINT64_MAX;
	static int64_t x186 = -1LL;
	static uint32_t x187 = 2874206U;
	static uint8_t x188 = 55U;
	volatile uint64_t t38 = 326LLU;

	t38 = (x185-((x186&x187)-x188));

	if (t38 != 18446744073706677464LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x189 = INT16_MAX;
	volatile int64_t x190 = -1LL;
	int16_t x191 = INT16_MAX;
	int32_t x192 = -6870528;
	volatile int64_t t39 = -4083484612LL;

	t39 = (x189-((x190&x191)-x192));

	if (t39 != -6870528LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x193 = INT16_MIN;
	int64_t x194 = 29560168LL;
	int32_t x195 = INT32_MAX;
	volatile int16_t x196 = -27;
	int64_t t40 = -63869094572LL;

	t40 = (x193-((x194&x195)-x196));

	if (t40 != -29592963LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = 1;
	static uint8_t x202 = UINT8_MAX;
	int64_t x203 = INT64_MIN;
	static uint8_t x204 = 62U;

	t41 = (x201-((x202&x203)-x204));

	if (t41 != 63LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = 24U;
	static volatile int32_t t42 = 108;

	t42 = (x205-((x206&x207)-x208));

	if (t42 != 32791) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x209 = 95U;
	uint64_t x210 = 3146LLU;
	uint8_t x211 = UINT8_MAX;
	static int32_t x212 = 451955047;

	t43 = (x209-((x210&x211)-x212));

	if (t43 != 451955068LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x213 = INT64_MAX;
	static int16_t x214 = -13715;
	uint32_t x215 = 692624752U;
	int32_t x216 = INT32_MIN;
	int64_t t44 = -3632185268887674LL;

	t44 = (x213-((x214&x215)-x216));

	if (t44 != 9223372034014672799LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MAX;
	int64_t x219 = INT64_MAX;
	uint32_t x220 = UINT32_MAX;
	int64_t t45 = -3836784387114445LL;

	t45 = (x217-((x218&x219)-x220));

	if (t45 != 4294967422LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = INT8_MIN;
	volatile int64_t x222 = INT64_MAX;
	static volatile int64_t x223 = INT64_MIN;
	static volatile uint16_t x224 = UINT16_MAX;
	volatile int64_t t46 = 4LL;

	t46 = (x221-((x222&x223)-x224));

	if (t46 != 65407LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x226 = INT16_MIN;
	int32_t x227 = 18232;
	volatile uint32_t t47 = 7208274U;

	t47 = (x225-((x226&x227)-x228));

	if (t47 != 339U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x230 = INT64_MIN;
	uint32_t x231 = 2106U;
	int32_t x232 = INT32_MAX;
	volatile int64_t t48 = 640495508190394LL;

	t48 = (x229-((x230&x231)-x232));

	if (t48 != 2178882201LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x234 = 30U;
	uint64_t x235 = 10449867096456262LLU;
	static int32_t x236 = 51508162;
	static volatile uint64_t t49 = 910LLU;

	t49 = (x233-((x234&x235)-x236));

	if (t49 != 51475388LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = INT64_MIN;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = INT16_MAX;
	uint64_t t50 = 753613LLU;

	t50 = (x237-((x238&x239)-x240));

	if (t50 != 9223372036854808322LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x242 = 12U;
	static volatile int8_t x243 = -1;
	static int8_t x244 = 1;
	int32_t t51 = -4211194;

	t51 = (x241-((x242&x243)-x244));

	if (t51 != -32779) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x249 = 24U;
	int64_t x250 = -1609828990682693LL;
	int16_t x251 = -473;
	uint64_t x252 = UINT64_MAX;

	t52 = (x249-((x250&x251)-x252));

	if (t52 != 1609828990683124LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x253 = 1363553503U;
	int16_t x254 = INT16_MAX;
	int32_t x255 = -1;
	static int64_t x256 = -1222998LL;
	int64_t t53 = 1LL;

	t53 = (x253-((x254&x255)-x256));

	if (t53 != 1362297738LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = INT64_MAX;
	volatile uint32_t x262 = 39U;
	int16_t x263 = INT16_MIN;
	uint16_t x264 = UINT16_MAX;
	int64_t t54 = 1764603302233079101LL;

	t54 = (x261-((x262&x263)-x264));

	if (t54 != 9223372032559874046LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x265 = INT16_MIN;
	static int8_t x268 = 6;
	int64_t t55 = -509348LL;

	t55 = (x265-((x266&x267)-x268));

	if (t55 != 7733254LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = INT64_MAX;
	static uint8_t x274 = 0U;
	int8_t x276 = -1;
	volatile int64_t t56 = 55473599LL;

	t56 = (x273-((x274&x275)-x276));

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x278 = -4;
	volatile uint8_t x279 = 0U;
	volatile int32_t x280 = 3;
	uint64_t t57 = 10256LLU;

	t57 = (x277-((x278&x279)-x280));

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x281 = 4101521U;
	int64_t x282 = -1864845291075421794LL;
	volatile uint8_t x283 = UINT8_MAX;
	uint8_t x284 = 32U;

	t58 = (x281-((x282&x283)-x284));

	if (t58 != 4101395LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = 3;
	uint8_t x286 = 1U;
	uint16_t x287 = 18273U;
	volatile int32_t t59 = 1763918;

	t59 = (x285-((x286&x287)-x288));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x289 = -1;
	static int32_t x290 = INT32_MIN;
	int32_t x292 = 4110544;
	volatile int32_t t60 = -202463;

	t60 = (x289-((x290&x291)-x292));

	if (t60 != 4110543) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	uint32_t x295 = 9340U;
	volatile uint32_t x296 = UINT32_MAX;
	uint32_t t61 = 301185U;

	t61 = (x293-((x294&x295)-x296));

	if (t61 != 4294934527U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x297 = 1;
	int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MIN;
	volatile int64_t t62 = -28LL;

	t62 = (x297-((x298&x299)-x300));

	if (t62 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 12U;
	static int8_t x307 = -1;
	uint64_t x308 = 12379924480LLU;
	uint64_t t63 = 20LLU;

	t63 = (x305-((x306&x307)-x308));

	if (t63 != 12379990003LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x309 = UINT8_MAX;
	static int32_t x310 = 336;
	volatile int16_t x311 = INT16_MIN;
	volatile int32_t t64 = 253010740;

	t64 = (x309-((x310&x311)-x312));

	if (t64 != 258) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x314 = 56723LLU;
	int64_t x315 = INT64_MIN;
	static int8_t x316 = INT8_MAX;
	volatile uint64_t t65 = 3123726068200503182LLU;

	t65 = (x313-((x314&x315)-x316));

	if (t65 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x317 = INT16_MIN;
	int64_t x318 = INT64_MAX;
	static uint16_t x319 = UINT16_MAX;
	volatile int64_t t66 = 3299033808543LL;

	t66 = (x317-((x318&x319)-x320));

	if (t66 != -4806343LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x323 = INT16_MIN;
	uint64_t x324 = 1545LLU;
	static uint64_t t67 = 19987665109LLU;

	t67 = (x321-((x322&x323)-x324));

	if (t67 != 18446744073709520394LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x325 = UINT64_MAX;
	int32_t x326 = 26;
	int64_t x327 = INT64_MAX;
	static int32_t x328 = INT32_MIN;
	static volatile uint64_t t68 = 3489891395745720026LLU;

	t68 = (x325-((x326&x327)-x328));

	if (t68 != 18446744071562067941LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x329 = -45;
	uint16_t x332 = 240U;
	volatile int64_t t69 = 16495344489LL;

	t69 = (x329-((x330&x331)-x332));

	if (t69 != 195LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x333 = UINT64_MAX;
	uint32_t x334 = UINT32_MAX;
	volatile int8_t x335 = 1;
	int64_t x336 = -1LL;
	volatile uint64_t t70 = 46875LLU;

	t70 = (x333-((x334&x335)-x336));

	if (t70 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x341 = INT8_MIN;
	volatile int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t71 = -13;

	t71 = (x341-((x342&x343)-x344));

	if (t71 != 2147450752) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x345 = 11U;
	uint16_t x347 = 99U;

	t72 = (x345-((x346&x347)-x348));

	if (t72 != -91841842) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MIN;
	static int32_t x352 = INT32_MIN;
	uint64_t t73 = 33383420337LLU;

	t73 = (x349-((x350&x351)-x352));

	if (t73 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x353 = INT32_MAX;
	static int64_t x354 = 39336841603467LL;
	volatile int8_t x355 = -11;
	int32_t x356 = 23411;
	int64_t t74 = -364624260004608525LL;

	t74 = (x353-((x354&x355)-x356));

	if (t74 != -39334694096399LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x361 = INT32_MIN;
	uint8_t x362 = 2U;

	t75 = (x361-((x362&x363)-x364));

	if (t75 != -4294967298LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x365 = INT32_MIN;
	uint32_t x366 = 57U;
	int16_t x367 = -1664;
	int32_t x368 = -682216;
	uint32_t t76 = 7387285U;

	t76 = (x365-((x366&x367)-x368));

	if (t76 != 2146801432U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	static uint8_t x371 = 9U;
	int32_t x372 = INT32_MIN;
	static int64_t t77 = 224059LL;

	t77 = (x369-((x370&x371)-x372));

	if (t77 != -2147483776LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x374 = 5146995LLU;
	int16_t x375 = INT16_MIN;
	static int64_t x376 = -82LL;

	t78 = (x373-((x374&x375)-x376));

	if (t78 != 18446744073704374190LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x377 = 17;
	int16_t x379 = -2357;
	uint8_t x380 = UINT8_MAX;
	uint32_t t79 = 19U;

	t79 = (x377-((x378&x379)-x380));

	if (t79 != 4050250950U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x382 = -4518;
	int8_t x383 = -1;
	volatile int32_t t80 = 3407543;

	t80 = (x381-((x382&x383)-x384));

	if (t80 != -2147479127) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x389 = 1440328U;
	uint8_t x390 = 1U;
	int16_t x391 = INT16_MAX;
	int64_t x392 = -1LL;
	volatile int64_t t81 = -23LL;

	t81 = (x389-((x390&x391)-x392));

	if (t81 != 1440326LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x393 = -629;
	static int32_t x394 = INT32_MAX;
	int64_t x395 = -1LL;
	static int16_t x396 = -4533;
	int64_t t82 = 5705948LL;

	t82 = (x393-((x394&x395)-x396));

	if (t82 != -2147488809LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x398 = 956U;
	uint64_t t83 = 20547754229LLU;

	t83 = (x397-((x398&x399)-x400));

	if (t83 != 1914LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x402 = INT32_MIN;
	volatile int16_t x403 = -1;
	uint64_t x404 = 3180811117978803LLU;

	t84 = (x401-((x402&x403)-x404));

	if (t84 != 3180811117978803LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x407 = UINT8_MAX;
	volatile uint8_t x408 = UINT8_MAX;

	t85 = (x405-((x406&x407)-x408));

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x413 = -221947;
	int8_t x414 = INT8_MIN;
	uint64_t x415 = 1016199LLU;
	int16_t x416 = INT16_MIN;

	t86 = (x413-((x414&x415)-x416));

	if (t86 != 18446744073708280709LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x417 = 1835LLU;
	volatile int32_t x418 = INT32_MIN;
	int64_t x419 = INT64_MIN;
	int16_t x420 = 0;

	t87 = (x417-((x418&x419)-x420));

	if (t87 != 9223372036854777643LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x427 = INT32_MAX;
	uint16_t x428 = UINT16_MAX;
	static volatile uint64_t t88 = 2726LLU;

	t88 = (x425-((x426&x427)-x428));

	if (t88 != 18446744072934658887LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x429 = INT64_MAX;
	uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MIN;
	volatile uint64_t x432 = 5023627930LLU;

	t89 = (x429-((x430&x431)-x432));

	if (t89 != 9223372041878338329LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x433 = -21;
	int8_t x434 = 40;
	uint16_t x435 = UINT16_MAX;
	int32_t t90 = -934;

	t90 = (x433-((x434&x435)-x436));

	if (t90 != -60) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x438 = INT64_MIN;
	volatile int8_t x439 = -1;
	static int8_t x440 = -1;
	static int64_t t91 = -6LL;

	t91 = (x437-((x438&x439)-x440));

	if (t91 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = INT32_MAX;
	int16_t x442 = 7;
	static int32_t x443 = -2;
	uint32_t x444 = 30U;

	t92 = (x441-((x442&x443)-x444));

	if (t92 != 2147483671U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x449 = 546283U;
	uint16_t x451 = UINT16_MAX;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t93 = 6534228LLU;

	t93 = (x449-((x450&x451)-x452));

	if (t93 != 501878LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x453 = INT16_MIN;
	static int8_t x454 = -1;
	uint32_t x455 = UINT32_MAX;
	uint32_t t94 = 418604159U;

	t94 = (x453-((x454&x455)-x456));

	if (t94 != 2147450881U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x457 = -38;
	int16_t x458 = 14708;
	uint64_t x459 = 4968LLU;
	volatile uint32_t x460 = UINT32_MAX;
	uint64_t t95 = 8310LLU;

	t95 = (x457-((x458&x459)-x460));

	if (t95 != 4294962809LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x465 = -6864963LL;
	int32_t x466 = INT32_MAX;
	volatile int32_t x467 = -1;
	volatile uint16_t x468 = 16236U;
	int64_t t96 = -5580522404527674LL;

	t96 = (x465-((x466&x467)-x468));

	if (t96 != -2154332374LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x470 = 512103225U;
	int64_t x471 = -512486LL;
	int8_t x472 = INT8_MIN;
	static volatile int64_t t97 = -1LL;

	t97 = (x469-((x470&x471)-x472));

	if (t97 != -511705753LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x473 = 177251423805LLU;
	int32_t x474 = INT32_MAX;
	uint32_t x475 = UINT32_MAX;
	int8_t x476 = -1;

	t98 = (x473-((x474&x475)-x476));

	if (t98 != 175103940157LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = -10911816LL;
	uint8_t x478 = UINT8_MAX;
	volatile uint32_t x480 = 139635169U;
	int64_t t99 = 128058185LL;

	t99 = (x477-((x478&x479)-x480));

	if (t99 != -4166244171LL) { NG(); } else { ; }
	
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

