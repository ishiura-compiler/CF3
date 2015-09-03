#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = -2448;
volatile int8_t x10 = INT8_MIN;
int64_t x13 = -1LL;
int16_t x25 = INT16_MIN;
volatile uint64_t x35 = 126180807872509LLU;
int8_t x36 = INT8_MIN;
uint32_t x39 = 1U;
uint16_t x44 = 12U;
volatile int64_t x45 = INT64_MAX;
static int64_t x48 = -2014186162876206251LL;
volatile uint32_t t10 = 7587U;
static volatile int32_t x54 = 805709396;
uint64_t x57 = 889952817677948LLU;
uint16_t x58 = UINT16_MAX;
static int32_t x60 = -1;
uint64_t t12 = 11553342922428276LLU;
int16_t x79 = 3;
volatile int32_t t18 = -257294;
int8_t x110 = INT8_MIN;
int64_t x111 = -1176113591288344042LL;
int64_t t20 = 288LL;
static volatile uint64_t t21 = 7348646740LLU;
int16_t x128 = 988;
static uint64_t x129 = 1489151668958144021LLU;
volatile uint64_t t24 = 1555929984435101250LLU;
static uint16_t x142 = 6U;
int64_t x146 = -1LL;
int16_t x148 = -10528;
int64_t t28 = -831269689310LL;
volatile int8_t x155 = -1;
int8_t x158 = INT8_MAX;
static volatile int16_t x161 = INT16_MIN;
int32_t t31 = -1222208;
int8_t x168 = INT8_MAX;
static int32_t t33 = 23246;
static int16_t x182 = INT16_MIN;
int32_t t37 = 1006;
volatile int8_t x209 = 34;
volatile int64_t x214 = -72831002586159LL;
int16_t x220 = INT16_MAX;
int16_t x222 = INT16_MAX;
volatile int8_t x223 = INT8_MAX;
uint8_t x224 = UINT8_MAX;
int32_t x227 = INT32_MIN;
int16_t x240 = INT16_MAX;
int16_t x244 = 1;
volatile int8_t x250 = 0;
volatile uint32_t x251 = 38012U;
int16_t x252 = INT16_MIN;
volatile uint64_t x256 = UINT64_MAX;
int8_t x268 = 8;
int32_t x274 = -734;
static uint16_t x275 = 1U;
uint16_t x276 = 2U;
uint32_t x277 = 51472445U;
uint16_t x278 = 1181U;
int8_t x280 = 1;
int64_t x287 = 8013185LL;
uint64_t x288 = 1136253011516513635LLU;
volatile int64_t t55 = 122456208232266404LL;
static uint32_t t56 = 23U;
volatile int64_t x313 = INT64_MIN;
uint32_t x314 = 551670285U;
volatile int8_t x315 = INT8_MAX;
int32_t x332 = INT32_MIN;
uint64_t x335 = 2113656073287249LLU;
volatile int32_t t65 = 450716024;
volatile int64_t t67 = -70293575583857LL;
int32_t x355 = INT32_MAX;
static int16_t x356 = INT16_MIN;
int8_t x363 = INT8_MIN;
int16_t x368 = -9;
int64_t t71 = -774822235LL;
volatile int32_t x372 = -1;
int8_t x381 = INT8_MAX;
uint16_t x382 = 5U;
int64_t x383 = INT64_MAX;
static int64_t x384 = INT64_MIN;
int16_t x387 = INT16_MAX;
volatile uint64_t t74 = 483674480342635LLU;
volatile uint64_t t76 = 282LLU;
static volatile int32_t x404 = INT32_MAX;
static volatile uint32_t t77 = 816U;
volatile int8_t x423 = INT8_MAX;
uint32_t x428 = 62206899U;
volatile uint8_t x429 = 5U;
volatile int32_t x432 = INT32_MIN;
int16_t x442 = INT16_MIN;
int16_t x444 = -1;
int16_t x445 = -1;
volatile uint64_t x448 = UINT64_MAX;
uint32_t x449 = 66607U;
int64_t x450 = -1LL;
volatile int64_t t87 = -961710LL;
static uint8_t x453 = UINT8_MAX;
int32_t x454 = -719782;
volatile uint8_t x455 = 27U;
int64_t x459 = 48963688305776LL;
volatile uint8_t x462 = 103U;
int64_t x464 = -1LL;
static uint8_t x467 = 1U;
int64_t x470 = -82072LL;
int64_t t92 = 3748LL;
int16_t x477 = INT16_MIN;
volatile uint64_t x481 = UINT64_MAX;
volatile uint64_t t95 = 22637060LLU;
volatile uint8_t x487 = 123U;
static uint64_t x494 = 36997768135888LLU;
volatile int32_t x495 = INT32_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int8_t x3 = 23;
	uint32_t x4 = 182U;
	volatile uint32_t t0 = 14U;

	t0 = (((x1+x2)-x3)/x4);

	if (t0 != 23598709U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = UINT64_MAX;
	uint64_t x11 = 380655461163035117LLU;
	uint16_t x12 = 4U;
	static volatile uint64_t t1 = 25448538LLU;

	t1 = (((x9+x10)-x11)/x12);

	if (t1 != 4516522153136629092LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = 55721369197LL;
	static uint64_t x15 = 12161LLU;
	static uint8_t x16 = UINT8_MAX;
	volatile uint64_t t2 = 13453LLU;

	t2 = (((x13+x14)-x15)/x16);

	if (t2 != 218515125LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = UINT16_MAX;
	int64_t x22 = INT64_MIN;
	volatile int64_t x23 = -1LL;
	int32_t x24 = INT32_MAX;
	volatile int64_t t3 = 385174LL;

	t3 = (((x21+x22)-x23)/x24);

	if (t3 != -4294967297LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x26 = 6694362;
	int16_t x27 = -4836;
	int32_t x28 = INT32_MIN;
	volatile int32_t t4 = -4225406;

	t4 = (((x25+x26)-x27)/x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x29 = -1;
	volatile int8_t x30 = -20;
	volatile int16_t x31 = -14;
	uint16_t x32 = UINT16_MAX;
	int32_t t5 = 0;

	t5 = (((x29+x30)-x31)/x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = 32;
	uint64_t t6 = 6366LLU;

	t6 = (((x33+x34)-x35)/x36);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x37 = -1LL;
	static uint32_t x38 = UINT32_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile int64_t t7 = 999167791121LL;

	t7 = (((x37+x38)-x39)/x40);

	if (t7 != 65536LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x41 = UINT8_MAX;
	uint32_t x42 = 5U;
	int8_t x43 = 0;
	volatile uint32_t t8 = 133316241U;

	t8 = (((x41+x42)-x43)/x44);

	if (t8 != 21U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x46 = INT16_MIN;
	uint8_t x47 = 2U;
	static int64_t t9 = 297LL;

	t9 = (((x45+x46)-x47)/x48);

	if (t9 != -4LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x50 = UINT32_MAX;
	uint16_t x51 = 206U;
	uint16_t x52 = 193U;

	t10 = (((x49+x50)-x51)/x52);

	if (t10 != 22253545U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x53 = INT32_MIN;
	static uint64_t x55 = 546016709289LLU;
	uint32_t x56 = UINT32_MAX;
	volatile uint64_t t11 = 215287746997LLU;

	t11 = (((x53+x54)-x55)/x56);

	if (t11 != 4294967169LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x59 = INT8_MIN;

	t12 = (((x57+x58)-x59)/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = UINT32_MAX;
	volatile int64_t x62 = INT64_MIN;
	uint16_t x63 = UINT16_MAX;
	uint32_t x64 = 353650869U;
	volatile int64_t t13 = -14956907808LL;

	t13 = (((x61+x62)-x63)/x64);

	if (t13 != -26080444984LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x69 = 145264U;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MIN;
	uint32_t x72 = 3809U;
	uint64_t t14 = 641201753LLU;

	t14 = (((x69+x70)-x71)/x72);

	if (t14 != 563830LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = -1LL;
	static volatile int64_t x78 = -11958930LL;
	int32_t x80 = INT32_MIN;
	int64_t t15 = -1LL;

	t15 = (((x77+x78)-x79)/x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = 45U;
	static int32_t x82 = 147;
	static uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t16 = 773701;

	t16 = (((x81+x82)-x83)/x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 686U;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -1LL;
	static int64_t x92 = -2103987002LL;
	volatile int64_t t17 = -37135LL;

	t17 = (((x89+x90)-x91)/x92);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x101 = INT8_MIN;
	int16_t x102 = -61;
	volatile int16_t x103 = INT16_MAX;
	uint16_t x104 = 3944U;

	t18 = (((x101+x102)-x103)/x104);

	if (t18 != -8) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x109 = INT32_MAX;
	int16_t x112 = INT16_MIN;
	int64_t t19 = -1428LL;

	t19 = (((x109+x110)-x111)/x112);

	if (t19 != -35892138471552LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = 24;
	static int64_t x114 = 271490234722925LL;
	int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MIN;

	t20 = (((x113+x114)-x115)/x116);

	if (t20 != -126422LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = 7400531540585133995LLU;
	uint32_t x118 = 1U;
	uint16_t x119 = UINT16_MAX;
	volatile int64_t x120 = INT64_MAX;

	t21 = (((x117+x118)-x119)/x120);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 1U;
	volatile uint16_t x122 = 0U;
	uint16_t x123 = UINT16_MAX;
	uint64_t x124 = 3987482207677898346LLU;
	static volatile uint64_t t22 = 83804939745417LLU;

	t22 = (((x121+x122)-x123)/x124);

	if (t22 != 4LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x125 = INT16_MIN;
	int32_t x126 = 123206797;
	volatile int8_t x127 = -1;
	static volatile int32_t t23 = 3559;

	t23 = (((x125+x126)-x127)/x128);

	if (t23 != 124670) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x130 = -4;
	static int32_t x131 = -1;
	volatile int16_t x132 = INT16_MAX;

	t24 = (((x129+x130)-x131)/x132);

	if (t24 != 45446689320296LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	int64_t x135 = -1LL;
	uint8_t x136 = UINT8_MAX;
	volatile int64_t t25 = 266386596067450202LL;

	t25 = (((x133+x134)-x135)/x136);

	if (t25 != -257LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = -1;
	int32_t x140 = INT32_MAX;
	volatile int32_t t26 = -172;

	t26 = (((x137+x138)-x139)/x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = INT32_MIN;
	int16_t x143 = 0;
	uint16_t x144 = 191U;
	static volatile int32_t t27 = 89886021;

	t27 = (((x141+x142)-x143)/x144);

	if (t27 != -11243369) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MAX;
	static volatile int8_t x147 = -3;

	t28 = (((x145+x146)-x147)/x148);

	if (t28 != -3LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = 31924072U;
	volatile uint8_t x156 = 44U;
	volatile uint32_t t29 = 1937850440U;

	t29 = (((x153+x154)-x155)/x156);

	if (t29 != 725544U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x157 = -27LL;
	uint8_t x159 = 7U;
	int64_t x160 = -1LL;
	volatile int64_t t30 = -1LL;

	t30 = (((x157+x158)-x159)/x160);

	if (t30 != -93LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x162 = INT8_MIN;
	static volatile int16_t x163 = INT16_MIN;
	int16_t x164 = -1;

	t31 = (((x161+x162)-x163)/x164);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = UINT64_MAX;
	static int32_t x166 = INT32_MIN;
	static uint32_t x167 = UINT32_MAX;
	uint64_t t32 = 2518455LLU;

	t32 = (((x165+x166)-x167)/x168);

	if (t32 != 145249953285567721LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = -1;
	int16_t x170 = -197;
	volatile int8_t x171 = 61;
	int16_t x172 = -7;

	t33 = (((x169+x170)-x171)/x172);

	if (t33 != 37) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x181 = 3315;
	uint8_t x183 = UINT8_MAX;
	uint64_t x184 = 3710805831LLU;
	volatile uint64_t t34 = 58991450492LLU;

	t34 = (((x181+x182)-x183)/x184);

	if (t34 != 4971088468LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x189 = UINT64_MAX;
	volatile int64_t x190 = -511445LL;
	volatile int64_t x191 = -24066809LL;
	static int64_t x192 = -1LL;
	uint64_t t35 = 619496134LLU;

	t35 = (((x189+x190)-x191)/x192);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x193 = UINT64_MAX;
	volatile uint8_t x194 = UINT8_MAX;
	uint8_t x195 = 26U;
	int32_t x196 = -1;
	uint64_t t36 = 238429371627052LLU;

	t36 = (((x193+x194)-x195)/x196);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MIN;
	int32_t x202 = 6973;
	int16_t x203 = 11619;
	int32_t x204 = INT32_MIN;

	t37 = (((x201+x202)-x203)/x204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x205 = 1494660304633941460LLU;
	volatile int8_t x206 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t38 = 107448650772590471LLU;

	t38 = (((x205+x206)-x207)/x208);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x210 = 0;
	uint32_t x211 = 322772U;
	volatile int32_t x212 = INT32_MIN;
	uint32_t t39 = 12U;

	t39 = (((x209+x210)-x211)/x212);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x213 = UINT32_MAX;
	int32_t x215 = -24184;
	int32_t x216 = INT32_MIN;
	static volatile int64_t t40 = 1229652LL;

	t40 = (((x213+x214)-x215)/x216);

	if (t40 != 33912LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x217 = 7;
	uint8_t x218 = UINT8_MAX;
	uint16_t x219 = 23286U;
	int32_t t41 = -16205;

	t41 = (((x217+x218)-x219)/x220);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x221 = 29590U;
	static volatile int32_t t42 = 0;

	t42 = (((x221+x222)-x223)/x224);

	if (t42 != 244) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x225 = 57426035626518LLU;
	static volatile int16_t x226 = 141;
	int32_t x228 = 91163;
	volatile uint64_t t43 = 626827865LLU;

	t43 = (((x225+x226)-x227)/x228);

	if (t43 != 629950562LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x237 = INT64_MIN;
	volatile uint32_t x238 = UINT32_MAX;
	int64_t x239 = -5368LL;
	volatile int64_t t44 = 6226074346718220LL;

	t44 = (((x237+x238)-x239)/x240);

	if (t44 != -281483566776323LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x241 = 67U;
	static int8_t x242 = -1;
	volatile int8_t x243 = INT8_MIN;
	volatile uint32_t t45 = 2467U;

	t45 = (((x241+x242)-x243)/x244);

	if (t45 != 194U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MIN;
	int16_t x247 = 93;
	int32_t x248 = INT32_MIN;
	volatile uint64_t t46 = 106975585070571196LLU;

	t46 = (((x245+x246)-x247)/x248);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x249 = INT16_MIN;
	static uint32_t t47 = 24U;

	t47 = (((x249+x250)-x251)/x252);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x253 = 297467303126237LL;
	uint8_t x254 = UINT8_MAX;
	static volatile uint64_t x255 = 2089LLU;
	static uint64_t t48 = 731162940078464050LLU;

	t48 = (((x253+x254)-x255)/x256);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x257 = INT32_MIN;
	int8_t x258 = 1;
	uint32_t x259 = 637U;
	uint16_t x260 = 28U;
	volatile uint32_t t49 = 256043U;

	t49 = (((x257+x258)-x259)/x260);

	if (t49 != 76695821U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x265 = 1U;
	int64_t x266 = -87377LL;
	static int16_t x267 = -1;
	int64_t t50 = 162106880061242LL;

	t50 = (((x265+x266)-x267)/x268);

	if (t50 != -10921LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = -12456;
	int16_t x270 = INT16_MAX;
	static uint32_t x271 = UINT32_MAX;
	uint64_t x272 = 29067128644509LLU;
	uint64_t t51 = 2778384243180547LLU;

	t51 = (((x269+x270)-x271)/x272);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x273 = 28U;
	static volatile uint32_t t52 = 280U;

	t52 = (((x273+x274)-x275)/x276);

	if (t52 != 2147483294U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x279 = INT16_MIN;
	volatile uint32_t t53 = 1716U;

	t53 = (((x277+x278)-x279)/x280);

	if (t53 != 51506394U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x285 = 436238533207960LLU;
	int16_t x286 = 12068;
	uint64_t t54 = 2829380470LLU;

	t54 = (((x285+x286)-x287)/x288);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x293 = 2U;
	int16_t x294 = -1;
	int64_t x295 = -1LL;
	int64_t x296 = INT64_MIN;

	t55 = (((x293+x294)-x295)/x296);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int32_t x302 = -118624099;
	uint32_t x303 = 2025U;
	int32_t x304 = INT32_MIN;

	t56 = (((x301+x302)-x303)/x304);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x305 = INT8_MAX;
	int8_t x306 = 1;
	static volatile int64_t x307 = 980758552449LL;
	int8_t x308 = INT8_MIN;
	static int64_t t57 = 488556664358562LL;

	t57 = (((x305+x306)-x307)/x308);

	if (t57 != 7662176190LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x309 = INT8_MIN;
	static int64_t x310 = -1LL;
	static int8_t x311 = INT8_MAX;
	volatile int32_t x312 = -8294132;
	volatile int64_t t58 = 858254512LL;

	t58 = (((x309+x310)-x311)/x312);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x316 = 44374489746LL;
	volatile int64_t t59 = 628105546LL;

	t59 = (((x313+x314)-x315)/x316);

	if (t59 != -207853027LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MIN;
	volatile int8_t x319 = INT8_MAX;
	int16_t x320 = 2;
	uint64_t t60 = 42005374LLU;

	t60 = (((x317+x318)-x319)/x320);

	if (t60 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x321 = 18;
	int16_t x322 = -1;
	int16_t x323 = -1;
	int16_t x324 = 6;
	volatile int32_t t61 = -2437;

	t61 = (((x321+x322)-x323)/x324);

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x325 = 884576712893708LLU;
	int8_t x326 = 25;
	volatile int32_t x327 = INT32_MAX;
	uint16_t x328 = 926U;
	volatile uint64_t t62 = 4842996LLU;

	t62 = (((x325+x326)-x327)/x328);

	if (t62 != 955264109514LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = UINT32_MAX;
	volatile int16_t x331 = -1;
	uint32_t t63 = 16U;

	t63 = (((x329+x330)-x331)/x332);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MIN;
	volatile int16_t x336 = 10;
	volatile uint64_t t64 = 21419878LLU;

	t64 = (((x333+x334)-x335)/x336);

	if (t64 != 1844463041763626449LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x337 = -8304;
	uint16_t x338 = 90U;
	volatile int8_t x339 = -30;
	int16_t x340 = -1;

	t65 = (((x337+x338)-x339)/x340);

	if (t65 != 8184) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x345 = 0U;
	uint32_t x346 = 28U;
	uint16_t x347 = 219U;
	int32_t x348 = -1;
	uint32_t t66 = 39U;

	t66 = (((x345+x346)-x347)/x348);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x349 = INT32_MIN;
	uint8_t x350 = UINT8_MAX;
	int64_t x351 = -93662188568407022LL;
	int16_t x352 = 483;

	t67 = (((x349+x350)-x351)/x352);

	if (t67 != 193917570229655LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x353 = INT8_MAX;
	volatile int8_t x354 = 1;
	static volatile int32_t t68 = 0;

	t68 = (((x353+x354)-x355)/x356);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x357 = -1;
	int32_t x358 = -29971;
	int64_t x359 = -324871250490LL;
	int64_t x360 = -57303959237298344LL;
	static int64_t t69 = 368409395554664853LL;

	t69 = (((x357+x358)-x359)/x360);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x361 = 19483U;
	volatile int64_t x362 = -518659153550LL;
	int64_t x364 = -1LL;
	volatile int64_t t70 = 3528725313827595127LL;

	t70 = (((x361+x362)-x363)/x364);

	if (t70 != 518659133939LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x365 = INT8_MIN;
	int64_t x366 = -7151LL;
	static int64_t x367 = INT64_MIN;

	t71 = (((x365+x366)-x367)/x368);

	if (t71 != -1024819115206085392LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x369 = UINT16_MAX;
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = -1387;
	volatile int32_t t72 = 21831;

	t72 = (((x369+x370)-x371)/x372);

	if (t72 != -132457) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t t73 = -200276685LL;

	t73 = (((x381+x382)-x383)/x384);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x385 = 2256;
	uint64_t x386 = 23570654LLU;
	uint8_t x388 = 2U;

	t74 = (((x385+x386)-x387)/x388);

	if (t74 != 11770071LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x389 = 231U;
	static uint8_t x390 = UINT8_MAX;
	uint32_t x391 = 4U;
	int64_t x392 = INT64_MAX;
	volatile int64_t t75 = -105740257655060LL;

	t75 = (((x389+x390)-x391)/x392);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x397 = 20295795012031812LLU;
	uint8_t x398 = 25U;
	volatile int64_t x399 = INT64_MIN;
	volatile int16_t x400 = INT16_MIN;

	t76 = (((x397+x398)-x399)/x400);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x401 = UINT32_MAX;
	volatile int8_t x402 = -1;
	uint8_t x403 = 52U;

	t77 = (((x401+x402)-x403)/x404);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x409 = 5330;
	volatile int8_t x410 = INT8_MIN;
	static int32_t x411 = -1;
	int32_t x412 = INT32_MIN;
	volatile int32_t t78 = 341;

	t78 = (((x409+x410)-x411)/x412);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x413 = INT64_MAX;
	int16_t x414 = -1016;
	volatile int64_t x415 = 494LL;
	int32_t x416 = INT32_MIN;
	volatile int64_t t79 = 2LL;

	t79 = (((x413+x414)-x415)/x416);

	if (t79 != -4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x421 = 3120680U;
	int32_t x422 = -787;
	uint8_t x424 = 17U;
	volatile uint32_t t80 = 2094420U;

	t80 = (((x421+x422)-x423)/x424);

	if (t80 != 183515U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x425 = 24094283;
	int8_t x426 = INT8_MAX;
	int32_t x427 = 22844056;
	static uint32_t t81 = 849065960U;

	t81 = (((x425+x426)-x427)/x428);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x430 = 136969389U;
	int8_t x431 = 0;
	volatile uint32_t t82 = 63861U;

	t82 = (((x429+x430)-x431)/x432);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x433 = -34018920614741LL;
	volatile int32_t x434 = INT32_MAX;
	int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	static volatile int64_t t83 = 113979331060LL;

	t83 = (((x433+x434)-x435)/x436);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x437 = 3U;
	int16_t x438 = INT16_MAX;
	int32_t x439 = 8;
	static int64_t x440 = INT64_MIN;
	int64_t t84 = -16306869893431LL;

	t84 = (((x437+x438)-x439)/x440);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x441 = 77U;
	int32_t x443 = INT32_MIN;
	int32_t t85 = 30978875;

	t85 = (((x441+x442)-x443)/x444);

	if (t85 != -2147450957) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x446 = 29U;
	static volatile int8_t x447 = INT8_MIN;
	uint64_t t86 = 29041478541LLU;

	t86 = (((x445+x446)-x447)/x448);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x451 = -1LL;
	uint8_t x452 = 6U;

	t87 = (((x449+x450)-x451)/x452);

	if (t87 != 11101LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x456 = 7684763LLU;
	uint64_t t88 = 6LLU;

	t88 = (((x453+x454)-x455)/x456);

	if (t88 != 2400431096405LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x457 = 0U;
	volatile uint64_t x458 = 36LLU;
	volatile uint32_t x460 = 403519407U;
	volatile uint64_t t89 = 27574166LLU;

	t89 = (((x457+x458)-x459)/x460);

	if (t89 != 45714517790LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x461 = 0U;
	volatile int16_t x463 = INT16_MAX;
	int64_t t90 = -6683319LL;

	t90 = (((x461+x462)-x463)/x464);

	if (t90 != 32664LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x465 = 13U;
	int32_t x466 = -2719;
	volatile int8_t x468 = INT8_MIN;
	int32_t t91 = -106739;

	t91 = (((x465+x466)-x467)/x468);

	if (t91 != 21) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x469 = -1LL;
	static int64_t x471 = -1LL;
	int16_t x472 = 4;

	t92 = (((x469+x470)-x471)/x472);

	if (t92 != -20518LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x473 = 5772687405LLU;
	int32_t x474 = INT32_MIN;
	int8_t x475 = INT8_MIN;
	int16_t x476 = 25;
	uint64_t t93 = 43785LLU;

	t93 = (((x473+x474)-x475)/x476);

	if (t93 != 145008155LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x478 = -210;
	uint64_t x479 = 19033408290952366LLU;
	static uint64_t x480 = 84LLU;
	uint64_t t94 = 978140565498659LLU;

	t94 = (((x477+x478)-x479)/x480);

	if (t94 != 219377507921649598LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x482 = INT32_MIN;
	volatile uint64_t x483 = 5974264227LLU;
	static int32_t x484 = INT32_MAX;

	t95 = (((x481+x482)-x483)/x484);

	if (t95 != 8589934592LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x485 = INT8_MAX;
	uint8_t x486 = UINT8_MAX;
	static int32_t x488 = -1;
	int32_t t96 = 0;

	t96 = (((x485+x486)-x487)/x488);

	if (t96 != -259) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x489 = INT16_MIN;
	volatile int32_t x490 = INT32_MAX;
	uint16_t x491 = UINT16_MAX;
	volatile int16_t x492 = -14;
	volatile int32_t t97 = -166;

	t97 = (((x489+x490)-x491)/x492);

	if (t97 != -153384667) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x493 = UINT8_MAX;
	int64_t x496 = INT64_MIN;
	uint64_t t98 = 689160565LLU;

	t98 = (((x493+x494)-x495)/x496);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x497 = INT8_MIN;
	int16_t x498 = -1;
	uint16_t x499 = UINT16_MAX;
	volatile int16_t x500 = -13762;
	volatile int32_t t99 = 846;

	t99 = (((x497+x498)-x499)/x500);

	if (t99 != 4) { NG(); } else { ; }
	
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

