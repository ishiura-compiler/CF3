#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x1 = UINT32_MAX;
volatile uint64_t t2 = 406557230666018LLU;
int16_t x14 = INT16_MIN;
volatile int64_t t3 = 2948716230052739161LL;
static uint16_t x29 = 31U;
int16_t x41 = 8;
uint32_t t6 = 492450U;
uint32_t x53 = 26432716U;
static int16_t x55 = -1;
int64_t x56 = 2244294052703652LL;
volatile int16_t x58 = 8761;
volatile int16_t x69 = INT16_MIN;
static int64_t x72 = INT64_MIN;
uint32_t x76 = 18816266U;
volatile int16_t x87 = INT16_MIN;
volatile uint32_t x91 = 8041730U;
volatile int64_t t15 = -250679954383463736LL;
uint64_t t17 = 248266LLU;
static volatile int32_t t18 = -18959;
uint64_t t19 = 32366LLU;
static int16_t x117 = 424;
volatile uint64_t t20 = 241LLU;
uint16_t x121 = 58U;
int64_t x125 = -38513LL;
int32_t x128 = INT32_MIN;
volatile int64_t x129 = -1LL;
int32_t x132 = INT32_MIN;
volatile int16_t x136 = 0;
uint64_t x150 = 62607LLU;
int16_t x151 = -96;
uint16_t x152 = 228U;
int16_t x154 = INT16_MIN;
uint8_t x161 = UINT8_MAX;
uint64_t x164 = 3617763LLU;
static int32_t x172 = 16389;
int32_t x179 = -7331;
volatile int64_t t33 = 53385219643662025LL;
int32_t x184 = INT32_MIN;
int8_t x188 = INT8_MAX;
volatile int16_t x190 = 3;
int16_t x192 = INT16_MAX;
uint64_t x199 = UINT64_MAX;
volatile uint64_t t38 = 15593758LLU;
volatile int64_t t40 = 99598038LL;
uint64_t x211 = 40835922843669139LLU;
volatile uint64_t t42 = 7LLU;
volatile int64_t x218 = INT64_MIN;
uint8_t x219 = UINT8_MAX;
volatile int64_t t43 = 5561205768240946LL;
int16_t x222 = INT16_MIN;
int32_t t44 = -216652;
static uint8_t x225 = UINT8_MAX;
int32_t x226 = INT32_MIN;
static uint32_t x227 = 550080702U;
int16_t x228 = -2199;
int64_t x233 = 4023355419592LL;
uint16_t x237 = 10821U;
uint64_t x239 = UINT64_MAX;
uint64_t t48 = 15855601170LLU;
int64_t x241 = INT64_MAX;
int8_t x248 = 1;
volatile int32_t x251 = 1;
int16_t x259 = INT16_MAX;
static int16_t x260 = -7;
int64_t x264 = INT64_MIN;
uint32_t x271 = UINT32_MAX;
volatile uint32_t t55 = 1018423U;
int64_t t56 = -121993403LL;
volatile int16_t x283 = INT16_MIN;
static uint64_t t58 = 1812693202430163LLU;
int8_t x292 = INT8_MIN;
int8_t x293 = -1;
static int16_t x297 = -3;
uint8_t x299 = 33U;
int32_t t61 = -1335;
int16_t x304 = INT16_MAX;
volatile int8_t x307 = INT8_MIN;
int8_t x308 = -1;
volatile int8_t x313 = INT8_MAX;
int8_t x320 = -63;
int32_t t66 = -4;
int16_t x328 = 7339;
volatile int32_t x329 = INT32_MIN;
static volatile uint16_t x333 = 55U;
static uint8_t x337 = 24U;
int8_t x339 = -1;
int64_t x340 = INT64_MAX;
int64_t t70 = 524827LL;
uint32_t x348 = UINT32_MAX;
uint32_t x350 = 1U;
int8_t x361 = 63;
static volatile uint32_t x368 = UINT32_MAX;
static volatile int8_t x376 = 0;
int64_t x382 = -588LL;
volatile uint16_t x384 = 1U;
static uint8_t x388 = UINT8_MAX;
static uint32_t t81 = 5853U;
static int64_t t82 = 1381283056898LL;
uint64_t x401 = 35854083399LLU;
int16_t x403 = INT16_MIN;
int64_t x406 = 534533001362262883LL;
int8_t x407 = INT8_MIN;
int16_t x408 = INT16_MIN;
int16_t x410 = 7995;
int32_t x415 = -1;
int32_t x424 = INT32_MAX;
static int16_t x430 = INT16_MIN;
volatile int64_t x440 = -257629215LL;
int32_t x444 = 77149;
uint64_t t90 = 906960520878228702LLU;
int16_t x445 = INT16_MAX;
uint16_t x449 = UINT16_MAX;
static int32_t x458 = INT32_MIN;
int16_t x459 = INT16_MIN;
uint32_t t95 = 14364295U;
static int8_t x466 = INT8_MIN;
int8_t x467 = INT8_MAX;
uint8_t x473 = 14U;
int32_t x474 = INT32_MIN;
volatile int32_t x475 = 38077072;
uint16_t x478 = 58U;
volatile uint32_t t99 = 7002U;


void f0(void) {
	volatile int64_t x2 = 46LL;
	static volatile int16_t x3 = INT16_MIN;
	int16_t x4 = -1;
	static volatile int64_t t0 = -11662301LL;

	t0 = (x1+((x2%x3)*x4));

	if (t0 != 4294967249LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	volatile int16_t x6 = INT16_MIN;
	int32_t x7 = -1;
	volatile uint8_t x8 = 8U;
	int32_t t1 = 1;

	t1 = (x5+((x6%x7)*x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 6625034155LLU;
	int8_t x10 = 32;
	volatile int32_t x11 = INT32_MIN;
	uint64_t x12 = 28843853097LLU;

	t2 = (x9+((x10%x11)*x12));

	if (t2 != 929628333259LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -5235399824761LL;
	uint8_t x15 = 61U;
	static int8_t x16 = -1;

	t3 = (x13+((x14%x15)*x16));

	if (t3 != -5235399824750LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MAX;
	volatile int64_t x26 = INT64_MIN;
	int32_t x27 = 8826;
	static int32_t x28 = INT32_MIN;
	volatile int64_t t4 = 8667701836LL;

	t4 = (x25+((x26%x27)*x28));

	if (t4 != 13816909823999LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x30 = 0U;
	int16_t x31 = -1;
	uint32_t x32 = 50U;
	uint32_t t5 = 39U;

	t5 = (x29+((x30%x31)*x32));

	if (t5 != 31U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x42 = 488U;
	uint32_t x43 = 103172190U;
	uint8_t x44 = UINT8_MAX;

	t6 = (x41+((x42%x43)*x44));

	if (t6 != 124448U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x54 = UINT32_MAX;
	int64_t t7 = -3610779411459LL;

	t7 = (x53+((x54%x55)*x56));

	if (t7 != 26432716LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x57 = 3U;
	uint64_t x59 = 4754850LLU;
	int8_t x60 = INT8_MIN;
	static volatile uint64_t t8 = 0LLU;

	t8 = (x57+((x58%x59)*x60));

	if (t8 != 18446744073708430211LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x61 = INT64_MAX;
	uint16_t x62 = 67U;
	int64_t x63 = -3899212354381LL;
	int8_t x64 = -1;
	int64_t t9 = 35684847710872LL;

	t9 = (x61+((x62%x63)*x64));

	if (t9 != 9223372036854775740LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x70 = -1;
	int64_t x71 = -1LL;
	int64_t t10 = 127562192939LL;

	t10 = (x69+((x70%x71)*x72));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = 6LL;
	static int8_t x74 = -1;
	volatile uint32_t x75 = 32098U;
	volatile int64_t t11 = 48LL;

	t11 = (x73+((x74%x75)*x76));

	if (t11 != 1484896528LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x77 = 57761;
	static int8_t x78 = 25;
	int16_t x79 = INT16_MAX;
	uint64_t x80 = 239763LLU;
	uint64_t t12 = 55178347LLU;

	t12 = (x77+((x78%x79)*x80));

	if (t12 != 6051836LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int64_t x83 = 1LL;
	int16_t x84 = INT16_MIN;
	int64_t t13 = -1825LL;

	t13 = (x81+((x82%x83)*x84));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x85 = UINT64_MAX;
	int16_t x86 = -1;
	int64_t x88 = 75LL;
	static uint64_t t14 = 214437586817338LLU;

	t14 = (x85+((x86%x87)*x88));

	if (t14 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = -1;
	int64_t x92 = -7LL;

	t15 = (x89+((x90%x91)*x92));

	if (t15 != -4817093LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = -1;
	int64_t x94 = -333989261242083477LL;
	static uint8_t x95 = UINT8_MAX;
	int32_t x96 = INT32_MAX;
	int64_t t16 = 385677758LL;

	t16 = (x93+((x94%x95)*x96));

	if (t16 != -122406567880LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x101 = 0U;
	volatile uint8_t x102 = 60U;
	volatile uint64_t x103 = UINT64_MAX;
	volatile uint64_t x104 = 72931990677811LLU;

	t17 = (x101+((x102%x103)*x104));

	if (t17 != 4375919440668660LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x105 = 423;
	int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = -24;

	t18 = (x105+((x106%x107)*x108));

	if (t18 != -785985) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x113 = INT8_MIN;
	uint64_t x114 = 906885517382LLU;
	volatile int16_t x115 = INT16_MIN;
	volatile int8_t x116 = INT8_MIN;

	t19 = (x113+((x114%x115)*x116));

	if (t19 != 18446627992363326592LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x118 = 66269540804548LLU;
	volatile int8_t x119 = INT8_MAX;
	uint64_t x120 = UINT64_MAX;

	t20 = (x117+((x118%x119)*x120));

	if (t20 != 319LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x122 = INT16_MAX;
	int32_t x123 = -28043;
	volatile int16_t x124 = INT16_MIN;
	volatile int32_t t21 = 21;

	t21 = (x121+((x122%x123)*x124));

	if (t21 != -154795974) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x126 = 10LL;
	int16_t x127 = INT16_MAX;
	static volatile int64_t t22 = -2248816841875690644LL;

	t22 = (x125+((x126%x127)*x128));

	if (t22 != -21474874993LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x130 = -10;
	uint32_t x131 = 123061U;
	volatile int64_t t23 = 864964981LL;

	t23 = (x129+((x130%x131)*x132));

	if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x133 = 13;
	int8_t x134 = 1;
	uint32_t x135 = 25U;
	uint32_t t24 = 6400674U;

	t24 = (x133+((x134%x135)*x136));

	if (t24 != 13U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x137 = INT8_MAX;
	int8_t x138 = -6;
	uint32_t x139 = 3993U;
	volatile uint16_t x140 = UINT16_MAX;
	volatile uint32_t t25 = 28425U;

	t25 = (x137+((x138%x139)*x140));

	if (t25 != 43122157U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = INT64_MIN;
	uint32_t x146 = UINT32_MAX;
	volatile uint8_t x147 = 57U;
	uint32_t x148 = 1242U;
	int64_t t26 = -598LL;

	t26 = (x145+((x146%x147)*x148));

	if (t26 != -9223372036854746000LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x149 = INT32_MIN;
	uint64_t t27 = 30410798229229LLU;

	t27 = (x149+((x150%x151)*x152));

	if (t27 != 18446744071576342364LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x153 = UINT16_MAX;
	uint64_t x155 = UINT64_MAX;
	int64_t x156 = INT64_MIN;
	static volatile uint64_t t28 = 213970596487LLU;

	t28 = (x153+((x154%x155)*x156));

	if (t28 != 65535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x157 = -86201LL;
	uint8_t x158 = 9U;
	volatile int16_t x159 = 10;
	int16_t x160 = INT16_MIN;
	volatile int64_t t29 = -1441633186794974934LL;

	t29 = (x157+((x158%x159)*x160));

	if (t29 != -381113LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x162 = 0U;
	volatile uint8_t x163 = UINT8_MAX;
	static uint64_t t30 = 1210940966436699105LLU;

	t30 = (x161+((x162%x163)*x164));

	if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = -109;
	int64_t x170 = 47234281LL;
	uint32_t x171 = 87U;
	int64_t t31 = 804853365585437LL;

	t31 = (x169+((x170%x171)*x172));

	if (t31 != 1097954LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = -1;
	int32_t x175 = INT32_MAX;
	uint32_t x176 = 349569U;
	static uint32_t t32 = 491U;

	t32 = (x173+((x174%x175)*x176));

	if (t32 != 2147134079U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x177 = INT64_MIN;
	uint32_t x178 = 1946515935U;
	volatile int32_t x180 = -211;

	t33 = (x177+((x178%x179)*x180));

	if (t33 != -9223372035252777677LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = INT32_MIN;
	volatile int64_t x183 = INT64_MAX;
	volatile int64_t t34 = 29478482260137LL;

	t34 = (x181+((x182%x183)*x184));

	if (t34 != 4611686018427387776LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x185 = -59;
	int8_t x186 = INT8_MIN;
	static int64_t x187 = INT64_MIN;
	static volatile int64_t t35 = -1723502LL;

	t35 = (x185+((x186%x187)*x188));

	if (t35 != -16315LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x189 = 1U;
	int64_t x191 = -56LL;
	volatile int64_t t36 = 612LL;

	t36 = (x189+((x190%x191)*x192));

	if (t36 != 98302LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x193 = INT16_MIN;
	volatile int64_t x194 = -3577480LL;
	int8_t x195 = -3;
	static int32_t x196 = -496724050;
	int64_t t37 = 0LL;

	t37 = (x193+((x194%x195)*x196));

	if (t37 != 496691282LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x197 = INT32_MIN;
	volatile int8_t x198 = INT8_MIN;
	static int32_t x200 = INT32_MIN;

	t38 = (x197+((x198%x199)*x200));

	if (t38 != 272730423296LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x201 = 1;
	int8_t x202 = -19;
	uint8_t x203 = 7U;
	volatile int16_t x204 = -7;
	int32_t t39 = -7;

	t39 = (x201+((x202%x203)*x204));

	if (t39 != 36) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = 5U;
	int64_t x206 = INT64_MIN;
	int8_t x207 = 61;
	uint8_t x208 = 27U;

	t40 = (x205+((x206%x207)*x208));

	if (t40 != -211LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x209 = 3;
	volatile int32_t x210 = -3274;
	uint32_t x212 = UINT32_MAX;
	static uint64_t t41 = 21581911LLU;

	t41 = (x209+((x210%x211)*x212));

	if (t41 != 15632433291563681222LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x213 = 290631788LLU;
	int64_t x214 = 44LL;
	int32_t x215 = INT32_MAX;
	uint64_t x216 = 3LLU;

	t42 = (x213+((x214%x215)*x216));

	if (t42 != 290631920LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x220 = INT32_MAX;

	t43 = (x217+((x218%x219)*x220));

	if (t43 != -274877841281LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x221 = 48;
	uint8_t x223 = UINT8_MAX;
	int8_t x224 = -1;

	t44 = (x221+((x222%x223)*x224));

	if (t44 != 176) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t t45 = 6U;

	t45 = (x225+((x226%x227)*x228));

	if (t45 != 1782509877U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x229 = INT64_MIN;
	int32_t x230 = -4698927;
	uint64_t x231 = 63111374582841689LLU;
	uint8_t x232 = 0U;
	volatile uint64_t t46 = 1142LLU;

	t46 = (x229+((x230%x231)*x232));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x234 = 118U;
	int16_t x235 = -23;
	uint16_t x236 = 2U;
	static int64_t t47 = -30831015134015LL;

	t47 = (x233+((x234%x235)*x236));

	if (t47 != 4023355419598LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x238 = 4;
	int64_t x240 = INT64_MAX;

	t48 = (x237+((x238%x239)*x240));

	if (t48 != 10817LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x242 = INT64_MIN;
	uint16_t x243 = 45U;
	volatile int16_t x244 = INT16_MAX;
	volatile int64_t t49 = -1618144LL;

	t49 = (x241+((x242%x243)*x244));

	if (t49 != 9223372036854513671LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x245 = INT32_MIN;
	static uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MIN;
	static volatile int64_t t50 = -230174388LL;

	t50 = (x245+((x246%x247)*x248));

	if (t50 != -2147483393LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MAX;
	uint32_t x252 = UINT32_MAX;
	uint32_t t51 = 2979177U;

	t51 = (x249+((x250%x251)*x252));

	if (t51 != 4294967168U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = -10463875886332LL;
	uint8_t x254 = 24U;
	static int8_t x255 = INT8_MAX;
	int16_t x256 = 14834;
	int64_t t52 = -128579102LL;

	t52 = (x253+((x254%x255)*x256));

	if (t52 != -10463875530316LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = 1641602629230LLU;
	static uint64_t x258 = 53LLU;
	uint64_t t53 = 195123LLU;

	t53 = (x257+((x258%x259)*x260));

	if (t53 != 1641602628859LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x261 = 61U;
	int16_t x262 = INT16_MIN;
	static volatile int16_t x263 = -1;
	volatile int64_t t54 = 710669086967LL;

	t54 = (x261+((x262%x263)*x264));

	if (t54 != 61LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = -20;
	static int8_t x270 = 9;
	static int16_t x272 = 61;

	t55 = (x269+((x270%x271)*x272));

	if (t55 != 529U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x277 = 18075425269159581LL;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -101;
	uint16_t x280 = 23859U;

	t56 = (x277+((x278%x279)*x280));

	if (t56 != 18075425268515388LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x281 = -1LL;
	volatile uint16_t x282 = 19U;
	int8_t x284 = INT8_MAX;
	int64_t t57 = 37LL;

	t57 = (x281+((x282%x283)*x284));

	if (t57 != 2412LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x285 = 10;
	int32_t x286 = 2;
	uint64_t x287 = 165LLU;
	uint16_t x288 = 36U;

	t58 = (x285+((x286%x287)*x288));

	if (t58 != 82LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x289 = 10U;
	uint32_t x290 = 8195748U;
	uint8_t x291 = 1U;
	static uint32_t t59 = 3380U;

	t59 = (x289+((x290%x291)*x292));

	if (t59 != 10U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x294 = INT64_MAX;
	uint32_t x295 = 31538497U;
	int16_t x296 = -1;
	volatile int64_t t60 = -464476094062LL;

	t60 = (x293+((x294%x295)*x296));

	if (t60 != -19979298LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x298 = 80421;
	int16_t x300 = INT16_MIN;

	t61 = (x297+((x298%x299)*x300));

	if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = -1;
	int64_t x302 = -225LL;
	int16_t x303 = 1;
	int64_t t62 = 1845418758LL;

	t62 = (x301+((x302%x303)*x304));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = -1;
	int32_t x306 = -46041;
	static volatile int32_t t63 = -994;

	t63 = (x305+((x306%x307)*x308));

	if (t63 != 88) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x314 = INT32_MIN;
	volatile int8_t x315 = INT8_MIN;
	static int32_t x316 = -21671150;
	volatile int32_t t64 = -1148956;

	t64 = (x313+((x314%x315)*x316));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x317 = -12;
	int64_t x318 = 26635108013962LL;
	uint64_t x319 = 368841296843LLU;
	volatile uint64_t t65 = 7643132480LLU;

	t65 = (x317+((x318%x319)*x320));

	if (t65 != 18446739126027151846LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x321 = -1914;
	volatile int16_t x322 = -1;
	static uint8_t x323 = 52U;
	int32_t x324 = -54886694;

	t66 = (x321+((x322%x323)*x324));

	if (t66 != 54884780) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x325 = 353U;
	int64_t x326 = -1LL;
	int64_t x327 = INT64_MAX;
	int64_t t67 = 18410018LL;

	t67 = (x325+((x326%x327)*x328));

	if (t67 != -6986LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x330 = INT64_MIN;
	uint64_t x331 = 228918090270305LLU;
	static volatile uint8_t x332 = 2U;
	volatile uint64_t t68 = 1938970370528LLU;

	t68 = (x329+((x330%x331)*x332));

	if (t68 != 66521400350458LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x334 = 487922759U;
	int32_t x335 = INT32_MIN;
	static int64_t x336 = -13LL;
	static int64_t t69 = 743766462914279LL;

	t69 = (x333+((x334%x335)*x336));

	if (t69 != -6342995812LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x338 = -19;

	t70 = (x337+((x338%x339)*x340));

	if (t70 != 24LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = INT32_MAX;
	volatile int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	uint16_t x344 = 2196U;
	volatile int32_t t71 = INT32_MAX;

	t71 = (x341+((x342%x343)*x344));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = INT64_MIN;
	static volatile uint32_t x346 = UINT32_MAX;
	uint16_t x347 = 27U;
	int64_t t72 = -150065286LL;

	t72 = (x345+((x346%x347)*x348));

	if (t72 != -9223372032559808533LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x349 = 46U;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MIN;
	volatile uint32_t t73 = 256327U;

	t73 = (x349+((x350%x351)*x352));

	if (t73 != 4294967214U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = -1LL;
	uint32_t x354 = 31296U;
	uint32_t x355 = 28669U;
	static volatile int8_t x356 = -1;
	volatile int64_t t74 = -8LL;

	t74 = (x353+((x354%x355)*x356));

	if (t74 != 4294964668LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = 12639LL;
	uint8_t x358 = 1U;
	int32_t x359 = -1;
	int64_t x360 = INT64_MIN;
	int64_t t75 = 54883LL;

	t75 = (x357+((x358%x359)*x360));

	if (t75 != 12639LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x362 = -1;
	static int8_t x363 = INT8_MAX;
	volatile int8_t x364 = INT8_MAX;
	static int32_t t76 = 3383883;

	t76 = (x361+((x362%x363)*x364));

	if (t76 != -64) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = -1;
	static volatile int16_t x366 = -1;
	static int16_t x367 = -1;
	uint32_t t77 = UINT32_MAX;

	t77 = (x365+((x366%x367)*x368));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x373 = -1;
	uint8_t x374 = 7U;
	int16_t x375 = -1;
	int32_t t78 = 121266;

	t78 = (x373+((x374%x375)*x376));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x377 = 7U;
	static int8_t x378 = INT8_MIN;
	int32_t x379 = -9060;
	int8_t x380 = -28;
	volatile int32_t t79 = 1017900;

	t79 = (x377+((x378%x379)*x380));

	if (t79 != 3591) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x381 = -1;
	int64_t x383 = -1LL;
	int64_t t80 = 29451629763214LL;

	t80 = (x381+((x382%x383)*x384));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x385 = 537833U;
	int32_t x386 = INT32_MIN;
	static int8_t x387 = -1;

	t81 = (x385+((x386%x387)*x388));

	if (t81 != 537833U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x397 = INT64_MIN;
	static int16_t x398 = INT16_MAX;
	uint8_t x399 = 4U;
	int32_t x400 = 2226851;

	t82 = (x397+((x398%x399)*x400));

	if (t82 != -9223372036848095255LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x402 = -1;
	uint16_t x404 = UINT16_MAX;
	volatile uint64_t t83 = 2376928608836LLU;

	t83 = (x401+((x402%x403)*x404));

	if (t83 != 35854017864LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x405 = INT16_MIN;
	int64_t t84 = 1457755130523049LL;

	t84 = (x405+((x406%x407)*x408));

	if (t84 != -3276800LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x409 = 2U;
	int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t85 = 1;

	t85 = (x409+((x410%x411)*x412));

	if (t85 != -1023358) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	uint32_t x416 = 31U;
	volatile uint32_t t86 = 30U;

	t86 = (x413+((x414%x415)*x416));

	if (t86 != 4294967168U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x421 = INT32_MIN;
	int64_t x422 = 555267458284697LL;
	static int32_t x423 = -21870;
	volatile int64_t t87 = 17LL;

	t87 = (x421+((x422%x423)*x424));

	if (t87 != 31988916405711LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = INT8_MAX;
	volatile int8_t x431 = -1;
	int32_t x432 = INT32_MIN;
	volatile int32_t t88 = 8217;

	t88 = (x429+((x430%x431)*x432));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x437 = UINT16_MAX;
	volatile int32_t x438 = INT32_MIN;
	uint16_t x439 = 1130U;
	int64_t t89 = -884583566083892LL;

	t89 = (x437+((x438%x439)*x440));

	if (t89 != 2061099255LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x441 = UINT64_MAX;
	int8_t x442 = 1;
	int32_t x443 = INT32_MIN;

	t90 = (x441+((x442%x443)*x444));

	if (t90 != 77148LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x446 = INT8_MIN;
	int16_t x447 = -1;
	int16_t x448 = INT16_MIN;
	static volatile int32_t t91 = 1;

	t91 = (x445+((x446%x447)*x448));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x450 = 30178U;
	int64_t x451 = INT64_MAX;
	int64_t x452 = -1682LL;
	int64_t t92 = -35689600116860LL;

	t92 = (x449+((x450%x451)*x452));

	if (t92 != -50693861LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x453 = -1;
	uint16_t x454 = UINT16_MAX;
	uint32_t x455 = UINT32_MAX;
	volatile int8_t x456 = INT8_MAX;
	uint32_t t93 = 72807U;

	t93 = (x453+((x454%x455)*x456));

	if (t93 != 8322944U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x457 = -12;
	int64_t x460 = -1LL;
	int64_t t94 = 68805LL;

	t94 = (x457+((x458%x459)*x460));

	if (t94 != -12LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x461 = INT16_MIN;
	int8_t x462 = INT8_MIN;
	static int8_t x463 = -1;
	static volatile uint32_t x464 = 44U;

	t95 = (x461+((x462%x463)*x464));

	if (t95 != 4294934528U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x465 = -28;
	uint16_t x468 = 1U;
	volatile int32_t t96 = -1972;

	t96 = (x465+((x466%x467)*x468));

	if (t96 != -29) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x469 = 45U;
	uint16_t x470 = UINT16_MAX;
	uint32_t x471 = 14791U;
	uint8_t x472 = UINT8_MAX;
	volatile uint32_t t97 = 533357910U;

	t97 = (x469+((x470%x471)*x472));

	if (t97 != 1624650U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x476 = 2;
	volatile int32_t t98 = 1520;

	t98 = (x473+((x474%x475)*x476));

	if (t98 != -30335218) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x477 = -1;
	volatile int8_t x479 = INT8_MIN;
	uint32_t x480 = UINT32_MAX;

	t99 = (x477+((x478%x479)*x480));

	if (t99 != 4294967237U) { NG(); } else { ; }
	
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

