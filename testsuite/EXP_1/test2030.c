#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x4 = 9005989U;
uint32_t x5 = 3251297U;
uint32_t x6 = 4U;
int8_t x7 = INT8_MIN;
int8_t x8 = INT8_MIN;
volatile uint32_t t1 = 47028422U;
static volatile int64_t x17 = -12LL;
uint32_t x18 = 140197U;
static int8_t x19 = INT8_MIN;
int16_t x22 = INT16_MIN;
int64_t x26 = -67198608223LL;
uint16_t x35 = UINT16_MAX;
uint32_t t7 = 95153590U;
int32_t x37 = INT32_MAX;
static volatile uint32_t x52 = 8U;
int32_t x57 = -251;
int32_t t13 = 16567;
int32_t x77 = INT32_MIN;
int32_t t15 = 875;
int64_t x84 = 4008089988754653919LL;
static uint64_t x91 = 3445808929998499LLU;
static int64_t x92 = 96025500409LL;
uint64_t x94 = 210LLU;
int64_t x98 = 131861690LL;
uint16_t x100 = 607U;
static int64_t t19 = 1013212489546826564LL;
int64_t x106 = INT64_MIN;
static uint32_t x107 = 984U;
uint8_t x108 = 3U;
volatile uint8_t x112 = 71U;
uint8_t x120 = UINT8_MAX;
int16_t x121 = 360;
int8_t x122 = INT8_MIN;
int16_t x123 = -1;
volatile uint64_t t25 = 3611LLU;
volatile int16_t x161 = INT16_MAX;
static uint64_t x168 = UINT64_MAX;
int32_t x170 = INT32_MIN;
static uint32_t x172 = UINT32_MAX;
static int16_t x182 = INT16_MAX;
volatile uint64_t x184 = UINT64_MAX;
int64_t t35 = -755907489647LL;
int16_t x197 = INT16_MIN;
int16_t x200 = -1;
volatile uint32_t x201 = UINT32_MAX;
int64_t t38 = -64716864LL;
static int64_t x210 = -1LL;
volatile int32_t t40 = -46;
int8_t x225 = INT8_MIN;
int16_t x227 = INT16_MAX;
static volatile int8_t x229 = INT8_MIN;
int64_t x238 = -149728603LL;
volatile int8_t x239 = INT8_MIN;
static volatile uint64_t t45 = 5741173LLU;
int32_t x242 = -1;
uint16_t x249 = 11U;
int8_t x257 = -1;
int16_t x269 = 6;
uint64_t x272 = 108601666986532LLU;
volatile int64_t t51 = -3393932335089750LL;
volatile uint8_t x277 = UINT8_MAX;
int16_t x282 = -5354;
volatile int32_t t53 = 846;
volatile uint16_t x288 = UINT16_MAX;
int8_t x290 = INT8_MIN;
static volatile uint16_t x297 = UINT16_MAX;
uint16_t x306 = 20U;
int32_t x307 = 2112;
uint64_t t60 = 1026379LLU;
static uint32_t x318 = 26248245U;
uint32_t x320 = UINT32_MAX;
int64_t x321 = INT64_MIN;
uint16_t x322 = UINT16_MAX;
static uint16_t x330 = 4055U;
uint16_t x331 = UINT16_MAX;
int64_t x343 = INT64_MIN;
static volatile uint64_t x350 = UINT64_MAX;
volatile uint64_t x368 = UINT64_MAX;
uint64_t t71 = 0LLU;
volatile uint16_t x369 = 112U;
static volatile uint32_t x375 = UINT32_MAX;
uint16_t x382 = UINT16_MAX;
static uint32_t t74 = 6778U;
uint16_t x385 = UINT16_MAX;
int64_t x394 = INT64_MIN;
volatile uint16_t x397 = 1U;
uint64_t x399 = UINT64_MAX;
uint16_t x406 = UINT16_MAX;
uint32_t x408 = 57746U;
int64_t x433 = INT64_MAX;
int16_t x465 = -1;
int32_t x469 = INT32_MAX;
int16_t x471 = INT16_MAX;
int32_t x473 = INT32_MIN;
static volatile uint16_t x479 = UINT16_MAX;
static uint32_t x480 = UINT32_MAX;
int16_t x491 = INT16_MAX;
uint8_t x499 = UINT8_MAX;
int32_t x500 = -1;
volatile uint64_t t97 = 22049LLU;
static volatile int8_t x509 = INT8_MIN;
int64_t x511 = 371244665511322LL;


void f0(void) {
	int64_t x1 = -1LL;
	int64_t x2 = -1LL;
	static uint32_t x3 = 3U;
	int64_t t0 = -4716750LL;

	t0 = (((x1^x2)+x3)-x4);

	if (t0 != -9005986LL) { NG(); } else { ; }
	
}

void f1(void) {


	t1 = (((x5^x6)+x7)-x8);

	if (t1 != 3251301U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int16_t x10 = INT16_MAX;
	int8_t x11 = -4;
	int16_t x12 = -1;
	volatile uint32_t t2 = 533846027U;

	t2 = (((x9^x10)+x11)-x12);

	if (t2 != 4294934525U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile uint32_t x14 = UINT32_MAX;
	int64_t x15 = INT64_MIN;
	static int16_t x16 = -1;
	volatile int64_t t3 = -64396330878112557LL;

	t3 = (((x13^x14)+x15)-x16);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x20 = -1;
	volatile int64_t t4 = -1584583398621LL;

	t4 = (((x17^x18)+x19)-x20);

	if (t4 != -140334LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 36989593LLU;
	int64_t x23 = INT64_MAX;
	uint32_t x24 = 14U;
	volatile uint64_t t5 = 9338561644507LLU;

	t5 = (((x21^x22)+x23)-x24);

	if (t5 != 9223372036817808010LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -13;
	volatile int64_t x27 = -14673511044LL;
	int64_t x28 = 12909131837549130LL;
	volatile int64_t t6 = -2472421943899999920LL;

	t6 = (((x25^x26)+x27)-x28);

	if (t6 != -12909079312451964LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	uint32_t x34 = 323U;
	volatile int32_t x36 = INT32_MAX;

	t7 = (((x33^x34)+x35)-x36);

	if (t7 != 65859U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = 6U;
	int16_t x39 = -1;
	static volatile int16_t x40 = 11553;
	volatile int32_t t8 = -2746;

	t8 = (((x37^x38)+x39)-x40);

	if (t8 != 2147472087) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = -9125;
	uint64_t x43 = 1845342548LLU;
	static uint8_t x44 = 20U;
	volatile uint64_t t9 = 4LLU;

	t9 = (((x41^x42)+x43)-x44);

	if (t9 != 1845366171LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = INT64_MIN;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = 438516151080965LL;
	volatile int64_t t10 = -520800739193312550LL;

	t10 = (((x49^x50)+x51)-x52);

	if (t10 != -9222933520703629316LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = -1905013LL;
	int32_t x54 = -894986919;
	static int8_t x55 = INT8_MAX;
	uint8_t x56 = 15U;
	volatile int64_t t11 = 1083780170791LL;

	t11 = (((x53^x54)+x55)-x56);

	if (t11 != 893746242LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = INT8_MIN;
	static int8_t x59 = INT8_MAX;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t12 = 3;

	t12 = (((x57^x58)+x59)-x60);

	if (t12 != 388) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = 3611;
	static int32_t x66 = -2679317;
	int8_t x67 = -1;
	static int8_t x68 = 5;

	t13 = (((x65^x66)+x67)-x68);

	if (t13 != -2681878) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MIN;
	uint16_t x74 = 101U;
	int16_t x75 = 9;
	int8_t x76 = INT8_MIN;
	int32_t t14 = 119081622;

	t14 = (((x73^x74)+x75)-x76);

	if (t14 != -32530) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x78 = UINT16_MAX;
	static int16_t x79 = -1;
	volatile uint8_t x80 = 1U;

	t15 = (((x77^x78)+x79)-x80);

	if (t15 != -2147418115) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -49;
	int32_t x82 = -83447790;
	int32_t x83 = -1;
	volatile int64_t t16 = 2551120LL;

	t16 = (((x81^x82)+x83)-x84);

	if (t16 != -4008089988671206147LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MAX;
	uint64_t t17 = 6202433LLU;

	t17 = (((x89^x90)+x91)-x92);

	if (t17 != 9226817751906757545LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = 1494;
	int64_t x95 = INT64_MIN;
	static uint32_t x96 = 307639U;
	volatile uint64_t t18 = 45391440LLU;

	t18 = (((x93^x94)+x95)-x96);

	if (t18 != 9223372036854469453LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = -57252012796LL;
	static uint16_t x99 = 376U;

	t19 = (((x97^x98)+x99)-x100);

	if (t19 != -57237597993LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = -1018;
	volatile int64_t t20 = -109569889290LL;

	t20 = (((x105^x106)+x107)-x108);

	if (t20 != 9223372036854775771LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x109 = -1;
	int8_t x110 = -3;
	static volatile int8_t x111 = INT8_MIN;
	int32_t t21 = 253193;

	t21 = (((x109^x110)+x111)-x112);

	if (t21 != -197) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = 1067U;
	int16_t x114 = -24;
	static uint32_t x115 = 7U;
	int64_t x116 = 182743LL;
	volatile int64_t t22 = 4412307889938462LL;

	t22 = (((x113^x114)+x115)-x116);

	if (t22 != 4294783475LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x117 = -1045;
	uint8_t x118 = UINT8_MAX;
	int32_t x119 = 97880549;
	int32_t t23 = -5;

	t23 = (((x117^x118)+x119)-x120);

	if (t23 != 97879034) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x124 = UINT8_MAX;
	int32_t t24 = 0;

	t24 = (((x121^x122)+x123)-x124);

	if (t24 != -536) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x125 = INT8_MIN;
	uint64_t x126 = 5566317924863LLU;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = 1667599LL;

	t25 = (((x125^x126)+x127)-x128);

	if (t25 != 18446738511684926575LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x133 = UINT64_MAX;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = INT32_MAX;
	static int64_t x136 = INT64_MIN;
	uint64_t t26 = 3748575928333LLU;

	t26 = (((x133^x134)+x135)-x136);

	if (t26 != 9223372039002259199LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x137 = 2U;
	uint64_t x138 = 608342288291LLU;
	volatile int16_t x139 = 186;
	uint32_t x140 = 319065U;
	static uint64_t t27 = 809303617440900LLU;

	t27 = (((x137^x138)+x139)-x140);

	if (t27 != 608341969410LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x145 = INT8_MAX;
	volatile int64_t x146 = -102LL;
	uint16_t x147 = 31U;
	int64_t x148 = INT64_MAX;
	static int64_t t28 = -118547379980982LL;

	t28 = (((x145^x146)+x147)-x148);

	if (t28 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x153 = 96507294265299267LLU;
	int64_t x154 = 1017151LL;
	static int32_t x155 = 2157649;
	int32_t x156 = 7767;
	uint64_t t29 = 21007LLU;

	t29 = (((x153^x154)+x155)-x156);

	if (t29 != 96507294267089526LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x162 = 237U;
	int64_t x163 = -39LL;
	static int16_t x164 = INT16_MAX;
	static int64_t t30 = 1773853430024LL;

	t30 = (((x161^x162)+x163)-x164);

	if (t30 != -276LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x165 = -81;
	int16_t x166 = INT16_MIN;
	static uint16_t x167 = 20U;
	uint64_t t31 = 2LLU;

	t31 = (((x165^x166)+x167)-x168);

	if (t31 != 32708LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x169 = 6628U;
	volatile int8_t x171 = 7;
	static uint32_t t32 = 1U;

	t32 = (((x169^x170)+x171)-x172);

	if (t32 != 2147490284U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x181 = UINT16_MAX;
	static int8_t x183 = -14;
	static uint64_t t33 = 86730904060277LLU;

	t33 = (((x181^x182)+x183)-x184);

	if (t33 != 32755LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = -1;
	uint8_t x186 = 61U;
	static uint8_t x187 = 52U;
	int8_t x188 = INT8_MAX;
	int32_t t34 = -38160;

	t34 = (((x185^x186)+x187)-x188);

	if (t34 != -137) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int64_t x194 = INT64_MIN;
	int8_t x195 = -26;
	static int16_t x196 = INT16_MIN;

	t35 = (((x193^x194)+x195)-x196);

	if (t35 != -9223372036854742811LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x198 = -7460;
	static uint32_t x199 = UINT32_MAX;
	uint32_t t36 = 53061U;

	t36 = (((x197^x198)+x199)-x200);

	if (t36 != 25308U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x202 = -3;
	int32_t x203 = 0;
	int8_t x204 = INT8_MIN;
	volatile uint32_t t37 = 9U;

	t37 = (((x201^x202)+x203)-x204);

	if (t37 != 130U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MIN;
	int64_t x207 = 326017020LL;
	static uint8_t x208 = 3U;

	t38 = (((x205^x206)+x207)-x208);

	if (t38 != 326017016LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x209 = INT64_MAX;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = 8;
	volatile int64_t t39 = -407185215376LL;

	t39 = (((x209^x210)+x211)-x212);

	if (t39 != -9223372036854710281LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	int32_t x216 = 189445772;

	t40 = (((x213^x214)+x215)-x216);

	if (t40 != -189380365) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x221 = UINT8_MAX;
	int32_t x222 = INT32_MIN;
	static int8_t x223 = INT8_MIN;
	volatile uint8_t x224 = 40U;
	int32_t t41 = -1;

	t41 = (((x221^x222)+x223)-x224);

	if (t41 != -2147483561) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x226 = -1;
	static int32_t x228 = -1;
	static int32_t t42 = -3030026;

	t42 = (((x225^x226)+x227)-x228);

	if (t42 != 32895) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x230 = -1;
	static int16_t x231 = INT16_MIN;
	static int16_t x232 = INT16_MIN;
	int32_t t43 = 5;

	t43 = (((x229^x230)+x231)-x232);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = INT16_MAX;
	static int8_t x234 = -1;
	int8_t x235 = 1;
	int32_t x236 = -3982290;
	int32_t t44 = -1308920;

	t44 = (((x233^x234)+x235)-x236);

	if (t44 != 3949523) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x237 = -1;
	static volatile uint64_t x240 = 10364LLU;

	t45 = (((x237^x238)+x239)-x240);

	if (t45 != 149718110LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x241 = -1;
	static uint16_t x243 = 2U;
	uint8_t x244 = 24U;
	int32_t t46 = 694572;

	t46 = (((x241^x242)+x243)-x244);

	if (t46 != -22) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = 0;
	int64_t x246 = -1LL;
	int32_t x247 = -1;
	uint8_t x248 = 7U;
	int64_t t47 = -1128888175321366233LL;

	t47 = (((x245^x246)+x247)-x248);

	if (t47 != -9LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x250 = INT32_MIN;
	static uint8_t x251 = 24U;
	int64_t x252 = INT64_MIN;
	int64_t t48 = -108535503206889LL;

	t48 = (((x249^x250)+x251)-x252);

	if (t48 != 9223372034707292195LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x258 = -1;
	int8_t x259 = -1;
	uint32_t x260 = 203009U;
	static volatile uint32_t t49 = 2040774084U;

	t49 = (((x257^x258)+x259)-x260);

	if (t49 != 4294764286U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x270 = 172216294U;
	int8_t x271 = 0;
	volatile uint64_t t50 = 698800972105LLU;

	t50 = (((x269^x270)+x271)-x272);

	if (t50 != 18446635472214781372LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x273 = -268;
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = 13963988989450384LL;
	int32_t x276 = INT32_MIN;

	t51 = (((x273^x274)+x275)-x276);

	if (t51 != 13963991136934299LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x278 = 7680U;
	static uint64_t x279 = 69859289003423459LLU;
	int64_t x280 = -1LL;
	volatile uint64_t t52 = 7210384262996958023LLU;

	t52 = (((x277^x278)+x279)-x280);

	if (t52 != 69859289003431395LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x281 = INT8_MIN;
	int16_t x283 = -1749;
	static int16_t x284 = INT16_MIN;

	t53 = (((x281^x282)+x283)-x284);

	if (t53 != 36289) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x285 = 5072557244LLU;
	int32_t x286 = INT32_MIN;
	volatile int8_t x287 = INT8_MAX;
	static volatile uint64_t t54 = 6LLU;

	t54 = (((x285^x286)+x287)-x288);

	if (t54 != 18446744068044625212LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x289 = UINT64_MAX;
	int16_t x291 = -1;
	static int8_t x292 = -1;
	volatile uint64_t t55 = 37669LLU;

	t55 = (((x289^x290)+x291)-x292);

	if (t55 != 127LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x298 = INT16_MIN;
	static uint16_t x299 = UINT16_MAX;
	uint16_t x300 = 129U;
	volatile int32_t t56 = -114118940;

	t56 = (((x297^x298)+x299)-x300);

	if (t56 != 32637) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x301 = 52U;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = UINT16_MAX;
	int64_t t57 = -149174824876874LL;

	t57 = (((x301^x302)+x303)-x304);

	if (t57 != -98356LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x305 = INT16_MIN;
	uint16_t x308 = 2562U;
	int32_t t58 = -12;

	t58 = (((x305^x306)+x307)-x308);

	if (t58 != -33198) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x309 = -36;
	volatile uint64_t x310 = 14514230158630LLU;
	volatile int64_t x311 = INT64_MAX;
	static int32_t x312 = -1;
	volatile uint64_t t59 = 16565946773LLU;

	t59 = (((x309^x310)+x311)-x312);

	if (t59 != 9223357522624617210LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x313 = 1076763819597539LLU;
	static uint16_t x314 = 355U;
	int64_t x315 = 2641LL;
	uint32_t x316 = 2U;

	t60 = (((x313^x314)+x315)-x316);

	if (t60 != 1076763819600335LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = -1;
	uint64_t x319 = UINT64_MAX;
	volatile uint64_t t61 = 437LLU;

	t61 = (((x317^x318)+x319)-x320);

	if (t61 != 18446744073683303370LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x323 = -227;
	volatile uint64_t x324 = UINT64_MAX;
	uint64_t t62 = 158216969635059LLU;

	t62 = (((x321^x322)+x323)-x324);

	if (t62 != 9223372036854841117LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x325 = -2;
	volatile int32_t x326 = INT32_MAX;
	volatile int8_t x327 = INT8_MAX;
	int64_t x328 = 105LL;
	volatile int64_t t63 = 105983856272976LL;

	t63 = (((x325^x326)+x327)-x328);

	if (t63 != -2147483625LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x329 = 1U;
	int16_t x332 = INT16_MIN;
	static int32_t t64 = 993296295;

	t64 = (((x329^x330)+x331)-x332);

	if (t64 != 102357) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MAX;
	int16_t x335 = -2;
	static uint64_t x336 = 18LLU;
	uint64_t t65 = 472536564LLU;

	t65 = (((x333^x334)+x335)-x336);

	if (t65 != 9223372039002259435LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x341 = 59947172338917206LLU;
	volatile int8_t x342 = INT8_MAX;
	int16_t x344 = INT16_MIN;
	uint64_t t66 = 37663850LLU;

	t66 = (((x341^x342)+x343)-x344);

	if (t66 != 9283319209193725737LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x349 = INT16_MAX;
	static uint8_t x351 = 123U;
	volatile uint16_t x352 = 200U;
	static uint64_t t67 = 230733LLU;

	t67 = (((x349^x350)+x351)-x352);

	if (t67 != 18446744073709518771LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x353 = -1;
	int32_t x354 = -1;
	int32_t x355 = INT32_MIN;
	static int32_t x356 = -1;
	int32_t t68 = -66812;

	t68 = (((x353^x354)+x355)-x356);

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x358 = 89U;
	static int8_t x359 = INT8_MAX;
	static volatile int64_t x360 = -1LL;
	volatile int64_t t69 = -18180315240542LL;

	t69 = (((x357^x358)+x359)-x360);

	if (t69 != -2147483431LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = -115501490;
	int64_t x363 = -108003015949063873LL;
	int8_t x364 = -1;
	int64_t t70 = 1076531512905617LL;

	t70 = (((x361^x362)+x363)-x364);

	if (t70 != 9115369020790210446LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x365 = -510;
	volatile int8_t x366 = 12;
	static int64_t x367 = -19153977745LL;

	t71 = (((x365^x366)+x367)-x368);

	if (t71 != 18446744054555573374LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x370 = 7734U;
	int16_t x371 = -1;
	int64_t x372 = -1LL;
	static volatile int64_t t72 = -194676302422498984LL;

	t72 = (((x369^x370)+x371)-x372);

	if (t72 != 7750LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x373 = 0U;
	static uint64_t x374 = 8609390029690840185LLU;
	uint16_t x376 = UINT16_MAX;
	volatile uint64_t t73 = 3321LLU;

	t73 = (((x373^x374)+x375)-x376);

	if (t73 != 8609390033985741945LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x381 = 219U;
	int16_t x383 = INT16_MIN;
	volatile int8_t x384 = -1;

	t74 = (((x381^x382)+x383)-x384);

	if (t74 != 32549U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x386 = 10LLU;
	volatile int32_t x387 = INT32_MIN;
	uint16_t x388 = 3597U;
	volatile uint64_t t75 = 6634663900LLU;

	t75 = (((x385^x386)+x387)-x388);

	if (t75 != 18446744071562129896LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x389 = -1LL;
	int8_t x390 = -1;
	uint32_t x391 = 2U;
	static int32_t x392 = 1020337999;
	int64_t t76 = -120LL;

	t76 = (((x389^x390)+x391)-x392);

	if (t76 != -1020337997LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x393 = 1U;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = 17;
	static uint64_t t77 = 282811162LLU;

	t77 = (((x393^x394)+x395)-x396);

	if (t77 != 9223372036854775791LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x398 = -2749;
	volatile uint64_t x400 = 1005318LLU;
	volatile uint64_t t78 = 645484319LLU;

	t78 = (((x397^x398)+x399)-x400);

	if (t78 != 18446744073708543547LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MAX;
	volatile int64_t x404 = -1LL;
	static uint64_t t79 = 1LLU;

	t79 = (((x401^x402)+x403)-x404);

	if (t79 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x405 = UINT32_MAX;
	uint8_t x407 = 35U;
	uint32_t t80 = 124533U;

	t80 = (((x405^x406)+x407)-x408);

	if (t80 != 4294844049U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MIN;
	int32_t x412 = INT32_MIN;
	volatile int64_t t81 = 25427616214LL;

	t81 = (((x409^x410)+x411)-x412);

	if (t81 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x413 = -1LL;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t82 = 25988549921399908LLU;

	t82 = (((x413^x414)+x415)-x416);

	if (t82 != 32767LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x417 = INT64_MAX;
	static int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	int32_t x420 = -1;
	volatile int64_t t83 = 0LL;

	t83 = (((x417^x418)+x419)-x420);

	if (t83 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x425 = -68811858LL;
	int32_t x426 = -1;
	int64_t x427 = 123272385251386639LL;
	static volatile uint32_t x428 = 3566U;
	volatile int64_t t84 = 244189770786780LL;

	t84 = (((x425^x426)+x427)-x428);

	if (t84 != 123272385320194930LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x434 = INT32_MAX;
	static uint8_t x435 = UINT8_MAX;
	int16_t x436 = INT16_MIN;
	volatile int64_t t85 = 939LL;

	t85 = (((x433^x434)+x435)-x436);

	if (t85 != 9223372034707325183LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x441 = 376;
	volatile uint8_t x442 = 1U;
	static int32_t x443 = 56;
	uint32_t x444 = UINT32_MAX;
	volatile uint32_t t86 = 216499120U;

	t86 = (((x441^x442)+x443)-x444);

	if (t86 != 434U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x445 = UINT16_MAX;
	int16_t x446 = 5875;
	int32_t x447 = 32;
	volatile int64_t x448 = 13742456LL;
	int64_t t87 = -23157338133LL;

	t87 = (((x445^x446)+x447)-x448);

	if (t87 != -13682764LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x453 = 85306333393041257LLU;
	volatile uint16_t x454 = 286U;
	int64_t x455 = -1LL;
	volatile int64_t x456 = -7358268707843600LL;
	volatile uint64_t t88 = 223LLU;

	t88 = (((x453^x454)+x455)-x456);

	if (t88 != 92664602100884614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x457 = -1;
	static volatile int16_t x458 = INT16_MAX;
	int16_t x459 = INT16_MAX;
	volatile int16_t x460 = INT16_MIN;
	volatile int32_t t89 = -1202300;

	t89 = (((x457^x458)+x459)-x460);

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x466 = INT32_MIN;
	int64_t x467 = 4822282618LL;
	uint32_t x468 = 20800712U;
	volatile int64_t t90 = -15232192078LL;

	t90 = (((x465^x466)+x467)-x468);

	if (t90 != 6948965553LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x470 = UINT32_MAX;
	int64_t x472 = INT64_MAX;
	volatile int64_t t91 = -7LL;

	t91 = (((x469^x470)+x471)-x472);

	if (t91 != -9223372034707259392LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x474 = 2;
	int64_t x475 = INT64_MAX;
	int64_t x476 = 12124LL;
	int64_t t92 = 3166070LL;

	t92 = (((x473^x474)+x475)-x476);

	if (t92 != 9223372034707280037LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x477 = 742U;
	uint64_t x478 = UINT64_MAX;
	uint64_t t93 = 213LLU;

	t93 = (((x477^x478)+x479)-x480);

	if (t93 != 18446744069414649113LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x481 = 8U;
	uint8_t x482 = 11U;
	int32_t x483 = -439225309;
	int8_t x484 = INT8_MIN;
	volatile int32_t t94 = 19;

	t94 = (((x481^x482)+x483)-x484);

	if (t94 != -439225178) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x489 = 278399230677170LLU;
	volatile int64_t x490 = INT64_MIN;
	uint32_t x492 = 6U;
	static uint64_t t95 = 1431491177LLU;

	t95 = (((x489^x490)+x491)-x492);

	if (t95 != 9223650436085485739LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x493 = INT32_MIN;
	int32_t x494 = -3141750;
	uint32_t x495 = UINT32_MAX;
	int16_t x496 = INT16_MAX;
	uint32_t t96 = 28581U;

	t96 = (((x493^x494)+x495)-x496);

	if (t96 != 2144309130U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x497 = INT32_MIN;
	volatile uint64_t x498 = UINT64_MAX;

	t97 = (((x497^x498)+x499)-x500);

	if (t97 != 2147483903LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x501 = INT32_MIN;
	uint64_t x502 = UINT64_MAX;
	int16_t x503 = INT16_MIN;
	uint64_t x504 = 6LLU;
	volatile uint64_t t98 = 285LLU;

	t98 = (((x501^x502)+x503)-x504);

	if (t98 != 2147450873LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x510 = INT32_MAX;
	volatile int8_t x512 = 5;
	volatile int64_t t99 = 584510188026030LL;

	t99 = (((x509^x510)+x511)-x512);

	if (t99 != 371242518027796LL) { NG(); } else { ; }
	
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

