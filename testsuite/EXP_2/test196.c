#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x16 = -246LL;
int64_t t1 = -420463195125387LL;
int16_t x24 = -1;
static uint8_t x39 = UINT8_MAX;
uint16_t x56 = 54U;
uint64_t t7 = 31207923649LLU;
static uint32_t x64 = 1961301973U;
int32_t x72 = -3;
int8_t x82 = -2;
static volatile uint64_t t12 = 2LLU;
uint8_t x87 = 0U;
static volatile uint64_t t13 = 1238054825746LLU;
volatile int8_t x90 = 10;
uint8_t x93 = 33U;
uint8_t x95 = 3U;
uint64_t x99 = 484671643049832666LLU;
uint16_t x101 = 1U;
int64_t x104 = -1LL;
uint32_t x106 = UINT32_MAX;
int32_t x108 = INT32_MIN;
volatile uint32_t t18 = 9786U;
uint64_t x111 = 3328766281401LLU;
int8_t x119 = -12;
int16_t x120 = INT16_MIN;
static int32_t t20 = 220803;
int8_t x122 = 13;
int8_t x124 = INT8_MAX;
volatile uint32_t t21 = 16770412U;
int8_t x125 = 0;
int8_t x142 = -1;
volatile int8_t x152 = INT8_MIN;
volatile int64_t t26 = 0LL;
volatile uint64_t t27 = 27900878456LLU;
static int32_t x161 = INT32_MIN;
uint32_t x163 = UINT32_MAX;
volatile uint32_t t28 = 1129727U;
uint32_t x166 = 92659U;
int16_t x167 = -71;
uint8_t x173 = 7U;
static volatile uint16_t x191 = 16037U;
int8_t x192 = -1;
uint8_t x194 = 2U;
int64_t x195 = -1LL;
int16_t x213 = INT16_MIN;
int8_t x215 = INT8_MIN;
uint64_t x217 = 1101175437898590817LLU;
int16_t x219 = INT16_MAX;
uint16_t x229 = 326U;
int8_t x233 = INT8_MIN;
int64_t x236 = INT64_MAX;
static volatile uint64_t x243 = 29911318678846LLU;
static uint32_t x246 = 1029623610U;
int64_t x251 = -864394288708351406LL;
int64_t t44 = 7LL;
int8_t x254 = INT8_MIN;
static volatile int8_t x271 = INT8_MIN;
static int32_t x273 = 4055021;
volatile int8_t x276 = 62;
int16_t x283 = 733;
static int32_t t50 = -1;
uint16_t x285 = 7454U;
volatile int32_t x295 = 3446;
static int8_t x297 = INT8_MIN;
static int16_t x299 = INT16_MAX;
uint16_t x309 = UINT16_MAX;
int8_t x310 = INT8_MIN;
static uint32_t x312 = UINT32_MAX;
volatile uint8_t x317 = UINT8_MAX;
static int64_t x319 = 236LL;
int64_t x320 = -1LL;
volatile int64_t t56 = -22LL;
uint8_t x321 = 5U;
int8_t x323 = INT8_MIN;
int16_t x324 = INT16_MIN;
volatile int8_t x329 = INT8_MIN;
uint64_t x337 = 993502935202LLU;
volatile int32_t x338 = INT32_MAX;
volatile uint64_t t60 = 60LLU;
volatile uint64_t x347 = 1LLU;
uint16_t x350 = 15229U;
int64_t x355 = 1045375950LL;
volatile uint32_t t64 = 149567U;
uint16_t x380 = UINT16_MAX;
volatile int32_t x384 = -1;
int16_t x393 = -1;
int64_t x395 = -124132227438956125LL;
int8_t x402 = INT8_MIN;
static uint8_t x404 = 22U;
uint16_t x419 = 13U;
static uint16_t x425 = 27980U;
volatile uint32_t t74 = 35U;
volatile uint64_t t75 = 25LLU;
uint64_t x438 = UINT64_MAX;
volatile uint8_t x445 = UINT8_MAX;
int64_t x459 = -413627274983659788LL;
static uint16_t x461 = 742U;
volatile uint32_t t81 = 1334698048U;
uint32_t x469 = UINT32_MAX;
volatile int32_t x475 = INT32_MIN;
static uint64_t x478 = 190791382LLU;
uint32_t x487 = UINT32_MAX;
int8_t x492 = 7;
int64_t x498 = -145701055LL;
volatile int64_t t87 = -15933323376674LL;
static uint8_t x510 = 5U;
uint8_t x515 = 6U;
int64_t x516 = INT64_MIN;
uint16_t x517 = UINT16_MAX;
static volatile uint32_t x520 = UINT32_MAX;
volatile uint32_t t90 = 3702282U;
int32_t x522 = -2;
volatile int32_t x525 = 2127;
uint32_t x527 = UINT32_MAX;
uint32_t x537 = UINT32_MAX;
int16_t x538 = INT16_MAX;
static int32_t x539 = -313216;
volatile int32_t x540 = -1;
uint32_t t94 = 26U;
static int16_t x559 = INT16_MAX;
int32_t x563 = INT32_MIN;


void f0(void) {
	volatile int32_t x1 = 0;
	uint64_t x2 = 100808084960LLU;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MAX;
	uint64_t t0 = 6325LLU;

	t0 = ((x1*(x2-x3))+x4);

	if (t0 != 2147483647LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	uint32_t x15 = UINT32_MAX;

	t1 = ((x13*(x14-x15))+x16);

	if (t1 != 4294966794LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = -1;
	int32_t x18 = -14;
	volatile int16_t x19 = 1;
	static uint32_t x20 = 35U;
	uint32_t t2 = 12308954U;

	t2 = ((x17*(x18-x19))+x20);

	if (t2 != 50U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x21 = 16738U;
	int16_t x22 = INT16_MIN;
	int32_t x23 = 3;
	int32_t t3 = -33;

	t3 = ((x21*(x22-x23))+x24);

	if (t3 != -548520999) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x29 = INT16_MIN;
	uint32_t x30 = 72630U;
	volatile int64_t x31 = -3LL;
	int32_t x32 = -5;
	int64_t t4 = 1570653061263605LL;

	t4 = ((x29*(x30-x31))+x32);

	if (t4 != -2380038149LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -1;
	int64_t x38 = 30551299652799LL;
	volatile int64_t x40 = INT64_MAX;
	volatile int64_t t5 = -761391LL;

	t5 = ((x37*(x38-x39))+x40);

	if (t5 != 9223341485555123263LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x45 = -1;
	int32_t x46 = 128747967;
	static uint32_t x47 = 1743881U;
	int16_t x48 = INT16_MIN;
	volatile uint32_t t6 = 471U;

	t6 = ((x45*(x46-x47))+x48);

	if (t6 != 4167930442U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x53 = INT64_MIN;
	volatile uint64_t x54 = 4653277LLU;
	int8_t x55 = INT8_MAX;

	t7 = ((x53*(x54-x55))+x56);

	if (t7 != 54LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x57 = INT8_MIN;
	int8_t x58 = INT8_MAX;
	int16_t x59 = INT16_MIN;
	int32_t x60 = -7729673;
	volatile int32_t t8 = -9;

	t8 = ((x57*(x58-x59))+x60);

	if (t8 != -11940233) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x61 = 9U;
	static int32_t x62 = -1;
	uint32_t x63 = 756773U;
	uint32_t t9 = 3054567U;

	t9 = ((x61*(x62-x63))+x64);

	if (t9 != 1954491007U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = INT16_MIN;
	static uint32_t t10 = 1U;

	t10 = ((x69*(x70-x71))+x72);

	if (t10 != 3221258237U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MAX;
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MAX;
	volatile uint64_t t11 = 29906913006644865LLU;

	t11 = ((x73*(x74-x75))+x76);

	if (t11 != 274877906816LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x81 = -3887786876740LL;
	static uint64_t x83 = 337011421948963381LLU;
	uint32_t x84 = 3021U;

	t12 = ((x81*(x82-x83))+x84);

	if (t12 != 12374864003494783849LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x85 = 645992668407LLU;
	volatile int8_t x86 = INT8_MIN;
	int8_t x88 = INT8_MAX;

	t13 = ((x85*(x86-x87))+x88);

	if (t13 != 18446661386647995647LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x91 = UINT8_MAX;
	uint8_t x92 = 6U;
	int32_t t14 = 365617;

	t14 = ((x89*(x90-x91))+x92);

	if (t14 != 31366) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x94 = INT16_MAX;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t15 = 807272897;

	t15 = ((x93*(x94-x95))+x96);

	if (t15 != 1146747) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x97 = INT8_MIN;
	uint8_t x98 = UINT8_MAX;
	uint64_t x100 = 5851180700LLU;
	volatile uint64_t t16 = 49685462938064478LLU;

	t16 = ((x97*(x98-x99))+x100);

	if (t16 != 6697738095101074460LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x102 = 16;
	int64_t x103 = -1LL;
	volatile int64_t t17 = -338479891305552LL;

	t17 = ((x101*(x102-x103))+x104);

	if (t17 != 16LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int32_t x107 = -12864;

	t18 = ((x105*(x106-x107))+x108);

	if (t18 != 2147470785U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = INT64_MIN;
	int8_t x110 = -1;
	static int64_t x112 = INT64_MIN;
	uint64_t t19 = 3264010LLU;

	t19 = ((x109*(x110-x111))+x112);

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x118 = 2U;

	t20 = ((x117*(x118-x119))+x120);

	if (t20 != -491520) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = -1;
	uint32_t x123 = 2U;

	t21 = ((x121*(x122-x123))+x124);

	if (t21 != 116U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x126 = 1LL;
	volatile int8_t x127 = INT8_MAX;
	uint32_t x128 = UINT32_MAX;
	static volatile int64_t t22 = -1915566111LL;

	t22 = ((x125*(x126-x127))+x128);

	if (t22 != 4294967295LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = -1;
	static uint64_t x130 = 109532413225416LLU;
	int8_t x131 = -1;
	uint32_t x132 = 134268U;
	volatile uint64_t t23 = 714536608068LLU;

	t23 = ((x129*(x130-x131))+x132);

	if (t23 != 18446634541296460467LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x137 = INT32_MAX;
	uint64_t x138 = 8047670407423627LLU;
	uint64_t x139 = 2375891522893LLU;
	int64_t x140 = INT64_MIN;
	static uint64_t t24 = 63585203123LLU;

	t24 = ((x137*(x138-x139))+x140);

	if (t24 != 919107573389733570LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x141 = 53U;
	uint32_t x143 = 5469489U;
	uint16_t x144 = 0U;
	volatile uint32_t t25 = 470431U;

	t25 = ((x141*(x142-x143))+x144);

	if (t25 != 4005084326U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x149 = 1;
	static int64_t x150 = -1LL;
	int32_t x151 = INT32_MIN;

	t26 = ((x149*(x150-x151))+x152);

	if (t26 != 2147483519LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x157 = 21267659211LLU;
	int32_t x158 = -1;
	volatile int16_t x159 = -1;
	uint8_t x160 = 52U;

	t27 = ((x157*(x158-x159))+x160);

	if (t27 != 52LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x162 = 6017191;
	int16_t x164 = INT16_MIN;

	t28 = ((x161*(x162-x163))+x164);

	if (t28 != 4294934528U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x165 = INT16_MIN;
	static int16_t x168 = INT16_MIN;
	volatile uint32_t t29 = 0U;

	t29 = ((x165*(x166-x167))+x168);

	if (t29 != 1256357888U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x174 = 593U;
	static int32_t x175 = -1;
	int64_t x176 = 503963099119260128LL;
	volatile int64_t t30 = -2031LL;

	t30 = ((x173*(x174-x175))+x176);

	if (t30 != 503963099119264286LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x181 = INT64_MIN;
	int32_t x182 = -1;
	int16_t x183 = -1;
	int16_t x184 = -1;
	volatile int64_t t31 = 13828944LL;

	t31 = ((x181*(x182-x183))+x184);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x185 = INT32_MIN;
	volatile int16_t x186 = -1599;
	volatile uint32_t x187 = UINT32_MAX;
	int32_t x188 = -361257;
	volatile uint32_t t32 = 116723U;

	t32 = ((x185*(x186-x187))+x188);

	if (t32 != 4294606039U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = INT32_MIN;
	uint64_t x190 = 38448840716513951LLU;
	volatile uint64_t t33 = 8761916970376508110LLU;

	t33 = ((x189*(x190-x191))+x192);

	if (t33 != 15386730658726412287LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x193 = INT16_MAX;
	int32_t x196 = 249140182;
	static volatile int64_t t34 = 50432961LL;

	t34 = ((x193*(x194-x195))+x196);

	if (t34 != 249238483LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = -31579;
	volatile uint64_t x207 = 2651926406486LLU;
	int8_t x208 = -1;
	volatile uint64_t t35 = 1948LLU;

	t35 = ((x205*(x206-x207))+x208);

	if (t35 != 18446067832467845040LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x214 = -1LL;
	volatile int32_t x216 = INT32_MAX;
	int64_t t36 = 310LL;

	t36 = ((x213*(x214-x215))+x216);

	if (t36 != 2143322111LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x218 = 11277535574LL;
	int8_t x220 = INT8_MIN;
	uint64_t t37 = 8131688804473349484LLU;

	t37 = ((x217*(x218-x219))+x220);

	if (t37 != 15190754782623321975LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x221 = INT8_MAX;
	static int32_t x222 = -326908;
	volatile uint64_t x223 = UINT64_MAX;
	int16_t x224 = INT16_MAX;
	volatile uint64_t t38 = 14587199LLU;

	t38 = ((x221*(x222-x223))+x224);

	if (t38 != 18446744073668067194LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x225 = -2;
	int32_t x226 = 68;
	uint8_t x227 = 73U;
	int16_t x228 = 2890;
	static volatile int32_t t39 = -743866463;

	t39 = ((x225*(x226-x227))+x228);

	if (t39 != 2900) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x230 = 1LLU;
	int32_t x231 = -1;
	int16_t x232 = INT16_MAX;
	volatile uint64_t t40 = 15LLU;

	t40 = ((x229*(x230-x231))+x232);

	if (t40 != 33419LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x234 = -2456;
	int16_t x235 = INT16_MIN;
	int64_t t41 = -1755240559969613076LL;

	t41 = ((x233*(x234-x235))+x236);

	if (t41 != 9223372036850895871LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x241 = 20U;
	static volatile int16_t x242 = 140;
	uint8_t x244 = UINT8_MAX;
	uint64_t t42 = 1194452288LLU;

	t42 = ((x241*(x242-x243))+x244);

	if (t42 != 18446145847335977751LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x245 = -260;
	static uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;
	uint64_t t43 = 240LLU;

	t43 = ((x245*(x246-x247))+x248);

	if (t43 != 18446743806007379988LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x249 = -1;
	uint8_t x250 = 95U;
	static uint8_t x252 = 7U;

	t44 = ((x249*(x250-x251))+x252);

	if (t44 != -864394288708351494LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x253 = 6;
	uint8_t x255 = 1U;
	int16_t x256 = -1;
	int32_t t45 = 1064812937;

	t45 = ((x253*(x254-x255))+x256);

	if (t45 != -775) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = -1LL;
	int16_t x267 = -1;
	volatile int16_t x268 = INT16_MIN;
	static int64_t t46 = 235378287696LL;

	t46 = ((x265*(x266-x267))+x268);

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x269 = -58;
	int8_t x270 = -1;
	uint64_t x272 = 1LLU;
	uint64_t t47 = 16390097LLU;

	t47 = ((x269*(x270-x271))+x272);

	if (t47 != 18446744073709544251LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x274 = UINT64_MAX;
	int64_t x275 = -1LL;
	static volatile uint64_t t48 = 12698069593LLU;

	t48 = ((x273*(x274-x275))+x276);

	if (t48 != 62LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x277 = 35014730815692305LLU;
	int64_t x278 = -111792730224793LL;
	uint8_t x279 = 0U;
	volatile uint64_t x280 = UINT64_MAX;
	uint64_t t49 = 5709697604LLU;

	t49 = ((x277*(x278-x279))+x280);

	if (t49 != 12943039171732344790LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x281 = INT16_MIN;
	int8_t x282 = 1;
	int16_t x284 = INT16_MAX;

	t50 = ((x281*(x282-x283))+x284);

	if (t50 != 24018943) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x286 = 14;
	static uint16_t x287 = 99U;
	uint32_t x288 = 11859513U;
	uint32_t t51 = 4170701U;

	t51 = ((x285*(x286-x287))+x288);

	if (t51 != 11225923U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x293 = 577U;
	volatile int8_t x294 = INT8_MIN;
	uint32_t x296 = 446189563U;
	volatile uint32_t t52 = 24U;

	t52 = ((x293*(x294-x295))+x296);

	if (t52 != 444127365U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x298 = UINT8_MAX;
	uint32_t x300 = 41U;
	static uint32_t t53 = 1019725852U;

	t53 = ((x297*(x298-x299))+x300);

	if (t53 != 4161577U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x311 = UINT8_MAX;
	uint32_t t54 = 4112218U;

	t54 = ((x309*(x310-x311))+x312);

	if (t54 != 4269867390U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = 725U;
	uint32_t x314 = 184U;
	int8_t x315 = 50;
	volatile int8_t x316 = INT8_MAX;
	static volatile uint32_t t55 = 22985U;

	t55 = ((x313*(x314-x315))+x316);

	if (t55 != 97277U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x318 = -1;

	t56 = ((x317*(x318-x319))+x320);

	if (t56 != -60436LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x322 = UINT8_MAX;
	int32_t t57 = 1;

	t57 = ((x321*(x322-x323))+x324);

	if (t57 != -30853) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x330 = 3920;
	uint64_t x331 = 1LLU;
	uint8_t x332 = 0U;
	uint64_t t58 = 1LLU;

	t58 = ((x329*(x330-x331))+x332);

	if (t58 != 18446744073709049984LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MIN;
	static int64_t x335 = -1LL;
	static volatile int16_t x336 = INT16_MIN;
	int64_t t59 = -819LL;

	t59 = ((x333*(x334-x335))+x336);

	if (t59 != -9223372030412357633LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x339 = INT32_MAX;
	int32_t x340 = INT32_MIN;

	t60 = ((x337*(x338-x339))+x340);

	if (t60 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x345 = INT64_MAX;
	static uint32_t x346 = UINT32_MAX;
	uint64_t x348 = 61045575731273027LLU;
	volatile uint64_t t61 = 143364944LLU;

	t61 = ((x345*(x346-x347))+x348);

	if (t61 != 61045571436305733LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x349 = INT16_MIN;
	int64_t x351 = -34985478340750LL;
	int32_t x352 = 1;
	int64_t t62 = 2903LL;

	t62 = ((x349*(x350-x351))+x352);

	if (t62 != -1146404154768719871LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x353 = -1;
	static uint8_t x354 = 123U;
	uint32_t x356 = 24142246U;
	volatile int64_t t63 = -112553091LL;

	t63 = ((x353*(x354-x355))+x356);

	if (t63 != 1069518073LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x357 = UINT8_MAX;
	uint32_t x358 = 52314391U;
	int32_t x359 = -27;
	int16_t x360 = INT16_MIN;

	t64 = ((x357*(x358-x359))+x360);

	if (t64 != 455241934U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x373 = 178;
	static int16_t x374 = INT16_MIN;
	uint64_t x375 = 512241LLU;
	int16_t x376 = -7377;
	uint64_t t65 = 33191LLU;

	t65 = ((x373*(x374-x375))+x376);

	if (t65 != 18446744073612532637LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = -203;
	static int64_t x379 = -1LL;
	volatile int64_t t66 = 21246922LL;

	t66 = ((x377*(x378-x379))+x380);

	if (t66 != -867583328055LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x381 = 5;
	int8_t x382 = INT8_MIN;
	static int32_t x383 = -12459130;
	volatile int32_t t67 = 33;

	t67 = ((x381*(x382-x383))+x384);

	if (t67 != 62295009) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x385 = -76541365291LL;
	uint8_t x386 = 3U;
	int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MAX;
	volatile int64_t t68 = -126LL;

	t68 = ((x385*(x386-x387))+x388);

	if (t68 != -10026918852994LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x394 = -1LL;
	uint8_t x396 = 9U;
	volatile int64_t t69 = 54514289LL;

	t69 = ((x393*(x394-x395))+x396);

	if (t69 != -124132227438956115LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x401 = INT8_MAX;
	volatile int16_t x403 = INT16_MIN;
	int32_t t70 = 110346823;

	t70 = ((x401*(x402-x403))+x404);

	if (t70 != 4145302) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x409 = INT16_MIN;
	static int16_t x410 = INT16_MIN;
	uint8_t x411 = 14U;
	volatile int32_t x412 = 1;
	volatile int32_t t71 = 8601581;

	t71 = ((x409*(x410-x411))+x412);

	if (t71 != 1074200577) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x417 = INT16_MIN;
	volatile uint64_t x418 = 8046284273796274998LLU;
	static uint16_t x420 = 1U;
	static volatile uint64_t t72 = 5955107089528185LLU;

	t72 = ((x417*(x418-x419))+x420);

	if (t72 != 17116705847992090625LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int32_t x422 = INT32_MIN;
	uint32_t x423 = UINT32_MAX;
	int8_t x424 = -1;
	uint32_t t73 = 385306554U;

	t73 = ((x421*(x422-x423))+x424);

	if (t73 != 2147549182U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x426 = -1432;
	uint32_t x427 = 468U;
	static int16_t x428 = -1;

	t74 = ((x425*(x426-x427))+x428);

	if (t74 != 4241805295U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x433 = -1;
	static int8_t x434 = -1;
	static int8_t x435 = -1;
	volatile uint64_t x436 = 72941104LLU;

	t75 = ((x433*(x434-x435))+x436);

	if (t75 != 72941104LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x437 = INT64_MIN;
	int8_t x439 = INT8_MIN;
	int64_t x440 = INT64_MIN;
	uint64_t t76 = 58864376238LLU;

	t76 = ((x437*(x438-x439))+x440);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x441 = -1;
	static volatile int32_t x442 = INT32_MAX;
	static int64_t x443 = -1LL;
	int32_t x444 = 2;
	int64_t t77 = 685LL;

	t77 = ((x441*(x442-x443))+x444);

	if (t77 != -2147483646LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x446 = INT8_MAX;
	int8_t x447 = INT8_MIN;
	int64_t x448 = -1LL;
	int64_t t78 = 16056863204489899LL;

	t78 = ((x445*(x446-x447))+x448);

	if (t78 != 65024LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x453 = INT16_MIN;
	int64_t x454 = -56648471996LL;
	uint32_t x455 = UINT32_MAX;
	uint16_t x456 = 14U;
	volatile int64_t t79 = 207758967LL;

	t79 = ((x453*(x454-x455))+x456);

	if (t79 != 1996994618687502LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x457 = 15809596494228061LLU;
	int32_t x458 = INT32_MAX;
	static int16_t x460 = -575;
	volatile uint64_t t80 = 2555794289040LLU;

	t80 = ((x457*(x458-x459))+x460);

	if (t80 != 11982232325114930368LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x462 = UINT32_MAX;
	volatile int16_t x463 = 4;
	int32_t x464 = -1;

	t81 = ((x461*(x462-x463))+x464);

	if (t81 != 4294963585U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x470 = 104727086LLU;
	int8_t x471 = INT8_MIN;
	static uint16_t x472 = 7U;
	uint64_t t82 = 3484098479704LLU;

	t82 = ((x469*(x470-x471))+x472);

	if (t82 != 449799959026466137LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x473 = 9;
	uint32_t x474 = 3501525U;
	int8_t x476 = INT8_MAX;
	static uint32_t t83 = 138954241U;

	t83 = ((x473*(x474-x475))+x476);

	if (t83 != 2178997500U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x477 = INT16_MAX;
	static uint64_t x479 = UINT64_MAX;
	uint16_t x480 = UINT16_MAX;
	static uint64_t t84 = 141658LLU;

	t84 = ((x477*(x478-x479))+x480);

	if (t84 != 6251661312296LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x485 = INT16_MIN;
	static uint32_t x486 = UINT32_MAX;
	int64_t x488 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = ((x485*(x486-x487))+x488);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x489 = INT32_MIN;
	static uint64_t x490 = 1640LLU;
	volatile uint64_t x491 = 269906675551898897LLU;
	uint64_t t86 = 45380803840LLU;

	t86 = ((x489*(x490-x491))+x492);

	if (t86 != 9179324864459177991LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x497 = UINT16_MAX;
	static volatile uint8_t x499 = UINT8_MAX;
	int8_t x500 = -1;

	t87 = ((x497*(x498-x499))+x500);

	if (t87 != -9548535350851LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x509 = 0U;
	static int64_t x511 = -3234346842337536400LL;
	int16_t x512 = INT16_MIN;
	static volatile int64_t t88 = 7824696LL;

	t88 = ((x509*(x510-x511))+x512);

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x513 = UINT16_MAX;
	int16_t x514 = INT16_MAX;
	static volatile int64_t t89 = -139844247219769LL;

	t89 = ((x513*(x514-x515))+x516);

	if (t89 != -9223372034707783673LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x518 = INT8_MIN;
	static uint8_t x519 = 5U;

	t90 = ((x517*(x518-x519))+x520);

	if (t90 != 4286251140U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x521 = 62U;
	int32_t x523 = 448845;
	int8_t x524 = 4;
	int32_t t91 = 631;

	t91 = ((x521*(x522-x523))+x524);

	if (t91 != -27828510) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x526 = 0U;
	volatile int64_t x528 = INT64_MIN;
	static int64_t t92 = 37086170968804516LL;

	t92 = ((x525*(x526-x527))+x528);

	if (t92 != -9223372036854773681LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x533 = 2103;
	int8_t x534 = -1;
	uint8_t x535 = UINT8_MAX;
	int64_t x536 = INT64_MAX;
	static int64_t t93 = -2855402017658LL;

	t93 = ((x533*(x534-x535))+x536);

	if (t93 != 9223372036854237439LL) { NG(); } else { ; }
	
}

void f94(void) {


	t94 = ((x537*(x538-x539))+x540);

	if (t94 != 4294621312U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x541 = INT32_MIN;
	uint32_t x542 = 1097U;
	static uint32_t x543 = 515067U;
	uint32_t x544 = 56255U;
	static volatile uint32_t t95 = 907832U;

	t95 = ((x541*(x542-x543))+x544);

	if (t95 != 56255U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x549 = -1;
	static volatile uint32_t x550 = UINT32_MAX;
	static int32_t x551 = INT32_MIN;
	static int32_t x552 = INT32_MIN;
	volatile uint32_t t96 = 13U;

	t96 = ((x549*(x550-x551))+x552);

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x557 = -1;
	int8_t x558 = INT8_MAX;
	uint32_t x560 = UINT32_MAX;
	uint32_t t97 = 57648994U;

	t97 = ((x557*(x558-x559))+x560);

	if (t97 != 32639U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x561 = 1U;
	uint32_t x562 = 5891831U;
	int32_t x564 = -1;
	uint32_t t98 = 41857U;

	t98 = ((x561*(x562-x563))+x564);

	if (t98 != 2153375478U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x565 = -1;
	uint32_t x566 = UINT32_MAX;
	uint8_t x567 = 1U;
	int8_t x568 = INT8_MIN;
	volatile uint32_t t99 = 5612443U;

	t99 = ((x565*(x566-x567))+x568);

	if (t99 != 4294967170U) { NG(); } else { ; }
	
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

