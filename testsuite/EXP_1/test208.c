#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
static int8_t x10 = -2;
volatile int16_t x14 = INT16_MIN;
int32_t x18 = -1;
static int8_t x19 = -1;
int8_t x44 = INT8_MIN;
uint16_t x52 = UINT16_MAX;
volatile uint64_t t6 = 52513LLU;
static int32_t x53 = -1;
int16_t x55 = -172;
uint32_t x56 = 74U;
int32_t x62 = INT32_MAX;
static uint8_t x63 = 0U;
int32_t x72 = -1;
static int32_t t9 = -6;
volatile int16_t x82 = INT16_MAX;
static int16_t x88 = -123;
int16_t x91 = 44;
int8_t x105 = INT8_MIN;
uint32_t x121 = UINT32_MAX;
int16_t x124 = INT16_MAX;
volatile uint64_t x125 = 81LLU;
int8_t x148 = INT8_MIN;
int8_t x157 = -1;
volatile uint16_t x163 = 2U;
int32_t x174 = -1;
volatile int32_t x177 = -1;
int32_t x178 = INT32_MIN;
int32_t x184 = INT32_MIN;
volatile int16_t x199 = INT16_MAX;
static volatile uint64_t t35 = 385735LLU;
int64_t x218 = -1LL;
volatile uint64_t x233 = UINT64_MAX;
volatile int64_t t40 = -106014550450LL;
static int8_t x246 = INT8_MIN;
int32_t x260 = -1;
int8_t x262 = INT8_MIN;
volatile uint16_t x263 = UINT16_MAX;
static volatile int32_t t47 = -660831024;
static volatile uint64_t t50 = 535675689742836LLU;
int16_t x310 = -240;
static uint8_t x318 = UINT8_MAX;
uint8_t x322 = 0U;
uint64_t x330 = 14LLU;
static int16_t x336 = -1;
int32_t x354 = -132;
uint64_t x357 = 15804572LLU;
int32_t x358 = INT32_MAX;
int64_t x362 = -194900LL;
uint32_t t62 = 9002179U;
uint64_t x371 = 780145135109105377LLU;
int16_t x377 = 219;
uint64_t x381 = UINT64_MAX;
volatile int32_t t67 = 1;
volatile int32_t x398 = -30445;
int64_t t68 = -76310207434064629LL;
int16_t x414 = -897;
volatile int32_t x426 = -531762547;
uint8_t x429 = 0U;
volatile uint64_t x430 = UINT64_MAX;
int16_t x437 = -1;
uint8_t x440 = UINT8_MAX;
int16_t x442 = -7;
static uint32_t x443 = 2112354U;
uint16_t x444 = 136U;
uint32_t x453 = UINT32_MAX;
uint64_t x454 = 1346197050264332LLU;
uint64_t x466 = 2783764991268982LLU;
volatile uint64_t t79 = 120250670978LLU;
int16_t x473 = -2;
int16_t x475 = 1;
uint8_t x478 = 14U;
static int64_t x479 = INT64_MIN;
int8_t x480 = -1;
volatile uint64_t t82 = UINT64_MAX;
int64_t x485 = -8602102LL;
int16_t x491 = -68;
uint8_t x504 = 1U;
uint64_t x519 = UINT64_MAX;
int64_t x526 = -86605798128868LL;
uint64_t x532 = 17511762300LLU;
int16_t x542 = INT16_MIN;
int64_t x545 = -1LL;
uint64_t x547 = 5LLU;
uint64_t x555 = 1845808LLU;
int16_t x566 = -6892;
int8_t x568 = 1;
uint16_t x583 = UINT16_MAX;
volatile uint64_t t98 = 91LLU;


void f0(void) {
	static int64_t x1 = 9869812885LL;
	volatile uint64_t x3 = UINT64_MAX;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 328782669143680242LLU;

	t0 = (((x1-x2)*x3)^x4);

	if (t0 != 18446744063839738773LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 60U;
	volatile uint16_t x11 = 5U;
	int64_t x12 = -14577563339086246LL;
	volatile int64_t t1 = -53395564248LL;

	t1 = (((x9-x10)*x11)^x12);

	if (t1 != -14577563339085972LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 1U;
	static int64_t x15 = -1LL;
	volatile uint64_t x16 = 4134863616004912271LLU;
	uint64_t t2 = 8445801LLU;

	t2 = (((x13-x14)*x15)^x16);

	if (t2 != 14311880457704672112LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 76U;
	volatile int64_t x20 = INT64_MAX;
	volatile int64_t t3 = 27784860504298774LL;

	t3 = (((x17-x18)*x19)^x20);

	if (t3 != -9223372036854775732LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x33 = 2U;
	volatile int8_t x34 = INT8_MIN;
	static volatile int8_t x35 = -6;
	int8_t x36 = INT8_MIN;
	volatile uint32_t t4 = 11U;

	t4 = (((x33-x34)*x35)^x36);

	if (t4 != 884U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x41 = 234U;
	static int8_t x42 = INT8_MAX;
	volatile int8_t x43 = -21;
	static volatile int32_t t5 = -459319345;

	t5 = (((x41-x42)*x43)^x44);

	if (t5 != 2233) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x49 = 2806U;
	uint8_t x50 = 60U;
	uint64_t x51 = UINT64_MAX;

	t6 = (((x49-x50)*x51)^x52);

	if (t6 != 18446744073709488825LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x54 = 1;
	static volatile uint32_t t7 = 218U;

	t7 = (((x53-x54)*x55)^x56);

	if (t7 != 274U) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x61 = 42;
	int64_t x64 = INT64_MIN;
	int64_t t8 = INT64_MIN;

	t8 = (((x61-x62)*x63)^x64);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x69 = -1;
	uint16_t x70 = 3U;
	int16_t x71 = -1;

	t9 = (((x69-x70)*x71)^x72);

	if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = -1;
	int64_t x79 = -1LL;
	uint64_t x80 = 8409904713169LLU;
	volatile uint64_t t10 = 580LLU;

	t10 = (((x77-x78)*x79)^x80);

	if (t10 != 8409904738862LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = INT16_MAX;
	uint64_t x83 = UINT64_MAX;
	static volatile uint16_t x84 = UINT16_MAX;
	uint64_t t11 = 297792521151962668LLU;

	t11 = (((x81-x82)*x83)^x84);

	if (t11 != 65535LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x85 = INT8_MAX;
	volatile uint32_t x86 = 3310U;
	volatile int8_t x87 = INT8_MIN;
	volatile uint32_t t12 = 350145U;

	t12 = (((x85-x86)*x87)^x88);

	if (t12 != 4294559749U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x89 = 40U;
	static int64_t x90 = -952487886571196LL;
	int64_t x92 = -1LL;
	static int64_t t13 = 5092246368LL;

	t13 = (((x89-x90)*x91)^x92);

	if (t13 != -41909467009134385LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x106 = 14860911764LLU;
	int16_t x107 = INT16_MAX;
	volatile uint64_t x108 = 910419364461015840LLU;
	uint64_t t14 = 7665LLU;

	t14 = (((x105-x106)*x107)^x108);

	if (t14 != 17535944414787565108LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x113 = 15280050998614LLU;
	uint32_t x114 = 801842U;
	int32_t x115 = 1;
	int64_t x116 = INT64_MIN;
	static volatile uint64_t t15 = 33LLU;

	t15 = (((x113-x114)*x115)^x116);

	if (t15 != 9223387316904972580LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x122 = UINT64_MAX;
	uint8_t x123 = 1U;
	volatile uint64_t t16 = 247525LLU;

	t16 = (((x121-x122)*x123)^x124);

	if (t16 != 4295000063LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x126 = INT64_MAX;
	int32_t x127 = -1;
	int8_t x128 = 3;
	volatile uint64_t t17 = 80166734909095580LLU;

	t17 = (((x125-x126)*x127)^x128);

	if (t17 != 9223372036854775725LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x129 = 3513;
	uint8_t x130 = 92U;
	static int32_t x131 = 23778;
	int8_t x132 = -1;
	int32_t t18 = 201395713;

	t18 = (((x129-x130)*x131)^x132);

	if (t18 != -81344539) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x133 = -30;
	uint64_t x134 = 1LLU;
	static int8_t x135 = 39;
	uint32_t x136 = UINT32_MAX;
	uint64_t t19 = 717LLU;

	t19 = (((x133-x134)*x135)^x136);

	if (t19 != 18446744069414585528LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = INT8_MIN;
	volatile uint16_t x138 = 4U;
	volatile uint16_t x139 = UINT16_MAX;
	int16_t x140 = -1;
	volatile int32_t t20 = 12564;

	t20 = (((x137-x138)*x139)^x140);

	if (t20 != 8650619) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x141 = 9608U;
	uint16_t x142 = 8U;
	volatile uint64_t x143 = UINT64_MAX;
	int64_t x144 = INT64_MIN;
	uint64_t t21 = 18LLU;

	t21 = (((x141-x142)*x143)^x144);

	if (t21 != 9223372036854766208LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x145 = -145791;
	int64_t x146 = 27773LL;
	int64_t x147 = -1LL;
	volatile int64_t t22 = 55181LL;

	t22 = (((x145-x146)*x147)^x148);

	if (t22 != -173444LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x153 = -39676760403421180LL;
	static int8_t x154 = -1;
	uint8_t x155 = 31U;
	int32_t x156 = -1;
	volatile int64_t t23 = 66967917656877909LL;

	t23 = (((x153-x154)*x155)^x156);

	if (t23 != 1229979572506056548LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x158 = INT8_MIN;
	uint16_t x159 = 53U;
	uint64_t x160 = 5978LLU;
	volatile uint64_t t24 = 1152409036347098527LLU;

	t24 = (((x157-x158)*x159)^x160);

	if (t24 != 3345LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x161 = -24;
	static int64_t x162 = -103303592015LL;
	int8_t x164 = INT8_MIN;
	volatile int64_t t25 = 108750993932797485LL;

	t25 = (((x161-x162)*x163)^x164);

	if (t25 != -206607183890LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x165 = 11;
	int16_t x166 = INT16_MIN;
	volatile uint32_t x167 = 53804U;
	int16_t x168 = -14647;
	uint32_t t26 = 504456736U;

	t26 = (((x165-x166)*x167)^x168);

	if (t26 != 2531311917U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x169 = INT32_MIN;
	static uint32_t x170 = UINT32_MAX;
	int16_t x171 = 7;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t27 = 818162449633237140LLU;

	t27 = (((x169-x170)*x171)^x172);

	if (t27 != 18446744071562067960LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x173 = 1;
	int8_t x175 = 47;
	int32_t x176 = INT32_MAX;
	int32_t t28 = -434006040;

	t28 = (((x173-x174)*x175)^x176);

	if (t28 != 2147483553) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = INT64_MIN;
	int64_t t29 = -7419609929164527LL;

	t29 = (((x177-x178)*x179)^x180);

	if (t29 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x181 = INT64_MIN;
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MIN;
	volatile uint64_t t30 = 2885519161560658458LLU;

	t30 = (((x181-x182)*x183)^x184);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x193 = INT8_MAX;
	static volatile uint8_t x194 = UINT8_MAX;
	uint32_t x195 = 28744796U;
	static uint8_t x196 = UINT8_MAX;
	volatile uint32_t t31 = 919100U;

	t31 = (((x193-x194)*x195)^x196);

	if (t31 != 615633663U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x197 = 0U;
	uint8_t x198 = 0U;
	int64_t x200 = INT64_MAX;
	static int64_t t32 = INT64_MAX;

	t32 = (((x197-x198)*x199)^x200);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x201 = -1102342827307383LL;
	static uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 14U;
	int8_t x204 = INT8_MAX;
	int64_t t33 = 18432176347129LL;

	t33 = (((x201-x202)*x203)^x204);

	if (t33 != -15432799582306829LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x205 = INT16_MIN;
	volatile int16_t x206 = -1;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = 1697560201268755830LL;
	int64_t t34 = 1640536394077LL;

	t34 = (((x205-x206)*x207)^x208);

	if (t34 != 1697560201265742582LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x209 = 64206341168LLU;
	int64_t x210 = 29910386579LL;
	int32_t x211 = -1;
	static volatile uint16_t x212 = UINT16_MAX;

	t35 = (((x209-x210)*x211)^x212);

	if (t35 != 18446744039413628060LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x213 = INT32_MIN;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = 65;
	int32_t x216 = INT32_MIN;
	uint64_t t36 = 9727882383576395LLU;

	t36 = (((x213-x214)*x215)^x216);

	if (t36 != 137438953537LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x217 = INT32_MAX;
	uint8_t x219 = 2U;
	static int64_t x220 = -2274LL;
	int64_t t37 = -917305984LL;

	t37 = (((x217-x218)*x219)^x220);

	if (t37 != -4294969570LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x229 = 1918939U;
	volatile int64_t x230 = -10LL;
	static int8_t x231 = -1;
	uint32_t x232 = UINT32_MAX;
	static int64_t t38 = -738018278405LL;

	t38 = (((x229-x230)*x231)^x232);

	if (t38 != -4293048348LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x234 = 2;
	static int32_t x235 = -877;
	uint64_t x236 = 108LLU;
	uint64_t t39 = 3578508LLU;

	t39 = (((x233-x234)*x235)^x236);

	if (t39 != 2603LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x237 = -1LL;
	int16_t x238 = -1593;
	int32_t x239 = INT32_MAX;
	static uint8_t x240 = 97U;

	t40 = (((x237-x238)*x239)^x240);

	if (t40 != 3418793965993LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x245 = UINT16_MAX;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = -1;
	volatile uint64_t t41 = 166888LLU;

	t41 = (((x245-x246)*x247)^x248);

	if (t41 != 65662LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	volatile int16_t x251 = 11982;
	volatile int32_t x252 = -1;
	volatile int32_t t42 = -8944425;

	t42 = (((x249-x250)*x251)^x252);

	if (t42 != -4589107) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x257 = 1081701319LLU;
	uint32_t x258 = 31199741U;
	volatile int16_t x259 = -40;
	uint64_t t43 = 28LLU;

	t43 = (((x257-x258)*x259)^x260);

	if (t43 != 42020063119LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = INT8_MIN;
	static int16_t x264 = INT16_MAX;
	volatile int32_t t44 = 7;

	t44 = (((x261-x262)*x263)^x264);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x265 = -1;
	static int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	static int64_t x268 = INT64_MIN;
	volatile int64_t t45 = 290LL;

	t45 = (((x265-x266)*x267)^x268);

	if (t45 != 9223372036850614272LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x277 = 2835U;
	static volatile int64_t x278 = -16LL;
	uint64_t x279 = 15726249LLU;
	uint8_t x280 = UINT8_MAX;
	volatile uint64_t t46 = 341332559470154965LLU;

	t46 = (((x277-x278)*x279)^x280);

	if (t46 != 44835536100LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x281 = 2483U;
	int32_t x282 = INT32_MAX;
	int8_t x283 = -1;
	volatile int32_t x284 = INT32_MIN;

	t47 = (((x281-x282)*x283)^x284);

	if (t47 != -2484) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x285 = -1;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = -124003;
	volatile uint32_t x288 = 2552U;
	volatile uint32_t t48 = 164523273U;

	t48 = (((x285-x286)*x287)^x288);

	if (t48 != 31746808U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x289 = -1LL;
	int64_t x290 = -1LL;
	static volatile int32_t x291 = -1;
	static uint16_t x292 = 453U;
	volatile int64_t t49 = 16096LL;

	t49 = (((x289-x290)*x291)^x292);

	if (t49 != 453LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x301 = 3815791;
	uint64_t x302 = 0LLU;
	uint32_t x303 = 181U;
	int8_t x304 = INT8_MIN;

	t50 = (((x301-x302)*x303)^x304);

	if (t50 != 18446744073018893563LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x309 = UINT32_MAX;
	int16_t x311 = INT16_MIN;
	int32_t x312 = -420;
	static uint32_t t51 = 710U;

	t51 = (((x309-x310)*x311)^x312);

	if (t51 != 7831132U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x313 = -11;
	int16_t x314 = 13;
	int32_t x315 = -505;
	int16_t x316 = 190;
	volatile int32_t t52 = -6;

	t52 = (((x313-x314)*x315)^x316);

	if (t52 != 12262) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x317 = 13274U;
	volatile int8_t x319 = 0;
	static int64_t x320 = -1LL;
	int64_t t53 = -23507818577877LL;

	t53 = (((x317-x318)*x319)^x320);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x321 = 44;
	int16_t x323 = 1;
	uint64_t x324 = 8348505LLU;
	uint64_t t54 = 20728588027527LLU;

	t54 = (((x321-x322)*x323)^x324);

	if (t54 != 8348533LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x329 = 3978LLU;
	int16_t x331 = INT16_MIN;
	static int16_t x332 = -1;
	static uint64_t t55 = 1LLU;

	t55 = (((x329-x330)*x331)^x332);

	if (t55 != 129892351LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x333 = -1;
	int8_t x334 = INT8_MAX;
	int16_t x335 = INT16_MIN;
	int32_t t56 = 0;

	t56 = (((x333-x334)*x335)^x336);

	if (t56 != -4194305) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x337 = 0U;
	uint32_t x338 = UINT32_MAX;
	int8_t x339 = -1;
	volatile uint32_t x340 = 161U;
	volatile uint32_t t57 = 100663U;

	t57 = (((x337-x338)*x339)^x340);

	if (t57 != 4294967134U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x349 = -1;
	uint64_t x350 = 18391389246938LLU;
	uint16_t x351 = 22U;
	uint8_t x352 = UINT8_MAX;
	uint64_t t58 = 111175440804452LLU;

	t58 = (((x349-x350)*x351)^x352);

	if (t58 != 18446339463146119121LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x353 = -1;
	int8_t x355 = 9;
	static volatile int64_t x356 = -1LL;
	static int64_t t59 = 3290267LL;

	t59 = (((x353-x354)*x355)^x356);

	if (t59 != -1180LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x359 = INT64_MIN;
	uint32_t x360 = 17253945U;
	uint64_t t60 = 3218072063LLU;

	t60 = (((x357-x358)*x359)^x360);

	if (t60 != 9223372036872029753LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x361 = UINT8_MAX;
	static int32_t x363 = 564;
	uint16_t x364 = UINT16_MAX;
	int64_t t61 = -5929248LL;

	t61 = (((x361-x362)*x363)^x364);

	if (t61 != 110068003LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x365 = 24707U;
	int32_t x366 = INT32_MAX;
	int32_t x367 = INT32_MAX;
	static uint32_t x368 = 108060U;

	t62 = (((x365-x366)*x367)^x368);

	if (t62 != 2147367264U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x369 = -1LL;
	static int16_t x370 = INT16_MIN;
	int16_t x372 = INT16_MAX;
	volatile uint64_t t63 = 12716LLU;

	t63 = (((x369-x370)*x371)^x372);

	if (t63 != 14275100032326919904LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x378 = 55U;
	int64_t x379 = -1LL;
	volatile int64_t x380 = INT64_MAX;
	int64_t t64 = 4434LL;

	t64 = (((x377-x378)*x379)^x380);

	if (t64 != -9223372036854775645LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x382 = 50U;
	volatile int32_t x383 = INT32_MIN;
	volatile int16_t x384 = INT16_MIN;
	static uint64_t t65 = 318951844445163LLU;

	t65 = (((x381-x382)*x383)^x384);

	if (t65 != 18446743964187852800LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x385 = -1LL;
	static volatile int16_t x386 = 2;
	volatile uint64_t x387 = 117145205306875327LLU;
	volatile int64_t x388 = INT64_MAX;
	volatile uint64_t t66 = 2362582LLU;

	t66 = (((x385-x386)*x387)^x388);

	if (t66 != 9574807652775401788LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x393 = INT8_MAX;
	volatile int32_t x394 = -2374;
	int16_t x395 = INT16_MAX;
	uint8_t x396 = 29U;

	t67 = (((x393-x394)*x395)^x396);

	if (t67 != 81950246) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x397 = -1;
	int64_t x399 = 6180LL;
	int16_t x400 = -128;

	t68 = (((x397-x398)*x399)^x400);

	if (t68 != -188143952LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x409 = -69;
	static volatile uint32_t x410 = UINT32_MAX;
	int16_t x411 = INT16_MIN;
	volatile int64_t x412 = INT64_MAX;
	int64_t t69 = -20874879842729435LL;

	t69 = (((x409-x410)*x411)^x412);

	if (t69 != 9223372036852547583LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x413 = -1LL;
	volatile int8_t x415 = -1;
	uint16_t x416 = UINT16_MAX;
	volatile int64_t t70 = 501823388LL;

	t70 = (((x413-x414)*x415)^x416);

	if (t70 != -64641LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x417 = INT16_MIN;
	uint8_t x418 = UINT8_MAX;
	uint32_t x419 = 216940U;
	volatile int32_t x420 = INT32_MIN;
	volatile uint32_t t71 = 352727766U;

	t71 = (((x417-x418)*x419)^x420);

	if (t71 != 3573408620U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x425 = UINT64_MAX;
	int32_t x427 = INT32_MAX;
	static int32_t x428 = 1995;
	volatile uint64_t t72 = 224458501975095795LLU;

	t72 = (((x425-x426)*x427)^x428);

	if (t72 != 1141951371622085957LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MAX;
	volatile uint64_t t73 = 33253689LLU;

	t73 = (((x429-x430)*x431)^x432);

	if (t73 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x433 = -1;
	static int16_t x434 = INT16_MIN;
	static int32_t x435 = -1;
	static int8_t x436 = INT8_MAX;
	int32_t t74 = 21267;

	t74 = (((x433-x434)*x435)^x436);

	if (t74 != -32642) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x438 = -1;
	uint32_t x439 = 86499U;
	volatile uint32_t t75 = 19746U;

	t75 = (((x437-x438)*x439)^x440);

	if (t75 != 255U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x441 = UINT64_MAX;
	uint64_t t76 = 234LLU;

	t76 = (((x441-x442)*x443)^x444);

	if (t76 != 12674244LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x449 = UINT32_MAX;
	volatile uint32_t x450 = 16474864U;
	uint64_t x451 = 1LLU;
	int64_t x452 = 5456903193122LL;
	uint64_t t77 = 3LLU;

	t77 = (((x449-x450)*x451)^x452);

	if (t77 != 5456617692973LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x455 = UINT32_MAX;
	static uint64_t x456 = 191LLU;
	uint64_t t78 = 2069983401858LLU;

	t78 = (((x453-x454)*x455)^x456);

	if (t78 != 1371976441385356210LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x465 = 26U;
	volatile int32_t x467 = INT32_MIN;
	int16_t x468 = INT16_MIN;

	t79 = (((x465-x466)*x467)^x468);

	if (t79 != 1893574329740787712LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x469 = -318;
	int32_t x470 = INT32_MIN;
	int32_t x471 = -1;
	static int32_t x472 = INT32_MIN;
	int32_t t80 = 1961392;

	t80 = (((x469-x470)*x471)^x472);

	if (t80 != 318) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x474 = -1;
	int32_t x476 = INT32_MIN;
	volatile int32_t t81 = INT32_MAX;

	t81 = (((x473-x474)*x475)^x476);

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x477 = 6206987972LLU;

	t82 = (((x477-x478)*x479)^x480);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x486 = 97055605LL;
	uint16_t x487 = 316U;
	static uint32_t x488 = 22602U;
	volatile int64_t t83 = 1017187LL;

	t83 = (((x485-x486)*x487)^x488);

	if (t83 != -33387817050LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x489 = INT32_MAX;
	volatile int64_t x490 = 400013LL;
	uint32_t x492 = 17130U;
	int64_t t84 = -11437609519LL;

	t84 = (((x489-x490)*x491)^x492);

	if (t84 != -146001670318LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x501 = 29U;
	volatile int8_t x502 = -1;
	int64_t x503 = -1LL;
	volatile int64_t t85 = 1LL;

	t85 = (((x501-x502)*x503)^x504);

	if (t85 != -29LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x509 = INT8_MAX;
	uint8_t x510 = UINT8_MAX;
	static int8_t x511 = -7;
	int8_t x512 = -1;
	int32_t t86 = 288;

	t86 = (((x509-x510)*x511)^x512);

	if (t86 != -897) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x513 = INT32_MIN;
	uint64_t x514 = 32405745740LLU;
	int8_t x515 = -1;
	static int16_t x516 = -4;
	static uint64_t t87 = 20LLU;

	t87 = (((x513-x514)*x515)^x516);

	if (t87 != 18446744039156322224LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x517 = 53;
	int16_t x518 = 1;
	int8_t x520 = INT8_MAX;
	volatile uint64_t t88 = 7425873766763033LLU;

	t88 = (((x517-x518)*x519)^x520);

	if (t88 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x525 = INT16_MIN;
	static uint32_t x527 = 15495U;
	int64_t x528 = 0LL;
	static int64_t t89 = -346977502LL;

	t89 = (((x525-x526)*x527)^x528);

	if (t89 != 1341956841499069500LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x529 = -1;
	int64_t x530 = -1LL;
	int16_t x531 = -1;
	uint64_t t90 = 15LLU;

	t90 = (((x529-x530)*x531)^x532);

	if (t90 != 17511762300LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x537 = 7U;
	volatile int16_t x538 = INT16_MIN;
	int64_t x539 = -199LL;
	static uint32_t x540 = UINT32_MAX;
	volatile int64_t t91 = -3482709963435137410LL;

	t91 = (((x537-x538)*x539)^x540);

	if (t91 != -4288445072LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x541 = 4;
	int16_t x543 = INT16_MIN;
	int8_t x544 = INT8_MIN;
	int32_t t92 = -27338;

	t92 = (((x541-x542)*x543)^x544);

	if (t92 != 1073872768) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x546 = 104U;
	static int64_t x548 = 555218LL;
	volatile uint64_t t93 = 394485179LLU;

	t93 = (((x545-x546)*x547)^x548);

	if (t93 != 18446744073708995873LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x553 = INT32_MIN;
	uint32_t x554 = UINT32_MAX;
	volatile int64_t x556 = -7873665601413995LL;
	uint64_t t94 = 243099664612869LLU;

	t94 = (((x553-x554)*x555)^x556);

	if (t94 != 18440573517257995941LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x557 = 410272585217146394LLU;
	volatile int32_t x558 = INT32_MIN;
	static int8_t x559 = INT8_MIN;
	uint64_t x560 = 22884372699973763LLU;
	volatile uint64_t t95 = 113392988496LLU;

	t95 = (((x557-x558)*x559)^x560);

	if (t95 != 2838654815254379395LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x565 = 3554LLU;
	uint32_t x567 = UINT32_MAX;
	static uint64_t t96 = 1472088123224006LLU;

	t96 = (((x565-x566)*x567)^x568);

	if (t96 != 44865228363571LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x573 = 91;
	uint8_t x574 = 26U;
	uint64_t x575 = UINT64_MAX;
	uint64_t x576 = UINT64_MAX;
	uint64_t t97 = 57LLU;

	t97 = (((x573-x574)*x575)^x576);

	if (t97 != 64LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x581 = INT8_MAX;
	uint16_t x582 = 30913U;
	volatile uint64_t x584 = 97275LLU;

	t98 = (((x581-x582)*x583)^x584);

	if (t98 != 18446744071692026809LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x585 = INT8_MIN;
	volatile uint32_t x586 = 713034828U;
	int8_t x587 = -1;
	static uint16_t x588 = UINT16_MAX;
	volatile uint32_t t99 = 92961951U;

	t99 = (((x585-x586)*x587)^x588);

	if (t99 != 713093939U) { NG(); } else { ; }
	
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

