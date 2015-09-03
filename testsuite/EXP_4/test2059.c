#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x9 = -10;
int16_t x11 = INT16_MAX;
static int32_t x22 = -1;
uint8_t x23 = 1U;
static uint8_t x27 = UINT8_MAX;
volatile uint64_t t3 = 79726210479LLU;
static int32_t x39 = 741596943;
static uint64_t t6 = 66073286716991378LLU;
uint32_t t8 = 2337892U;
volatile int64_t t9 = 2743LL;
uint64_t x64 = UINT64_MAX;
volatile uint64_t t12 = 122372106539LLU;
volatile uint32_t x84 = 13969U;
int32_t x90 = INT32_MAX;
volatile int64_t t15 = 314162299LL;
static int16_t x93 = INT16_MIN;
int8_t x94 = 7;
static uint32_t x101 = 24U;
int16_t x102 = INT16_MIN;
int64_t t18 = -92063209907273306LL;
int8_t x108 = INT8_MAX;
int32_t x109 = INT32_MIN;
uint64_t x111 = 4763418912074LLU;
int64_t x112 = -49032567LL;
int8_t x123 = INT8_MIN;
uint32_t x124 = UINT32_MAX;
uint64_t x132 = 501LLU;
uint64_t x135 = UINT64_MAX;
volatile int64_t x136 = 2733824052LL;
int8_t x137 = INT8_MAX;
int8_t x139 = 4;
uint64_t t25 = 26LLU;
volatile int32_t x144 = INT32_MIN;
int64_t t26 = 165094537554034LL;
int32_t x151 = 340217;
int32_t x153 = -1;
static volatile int64_t x157 = -508091141311314LL;
volatile uint64_t t31 = 387109LLU;
int8_t x168 = INT8_MIN;
volatile int16_t x179 = INT16_MAX;
static uint16_t x198 = UINT16_MAX;
uint64_t t38 = 6862675LLU;
int64_t x201 = -14594LL;
static int8_t x207 = INT8_MIN;
uint64_t x211 = 30399629576227204LLU;
int8_t x215 = INT8_MAX;
uint32_t x222 = 1401110U;
uint32_t t44 = 4U;
int16_t x226 = INT16_MIN;
int8_t x233 = INT8_MAX;
static volatile uint8_t x251 = UINT8_MAX;
volatile uint64_t t49 = 236488LLU;
volatile uint64_t t50 = 26957935LLU;
volatile int32_t x269 = 7;
int8_t x272 = INT8_MIN;
volatile int16_t x288 = INT16_MAX;
uint32_t x298 = 11037001U;
int8_t x310 = INT8_MIN;
int64_t x311 = -1LL;
int8_t x318 = INT8_MIN;
volatile int64_t x327 = -203895724997LL;
static uint64_t t59 = 26972053091910LLU;
uint64_t t60 = 78226LLU;
int32_t x389 = -50716568;
int32_t x391 = INT32_MAX;
volatile int16_t x396 = -1;
int32_t x405 = -391317;
int32_t t67 = -12530253;
static volatile uint32_t x416 = 10U;
int8_t x429 = INT8_MAX;
static int16_t x430 = INT16_MIN;
int8_t x431 = -1;
static int16_t x440 = INT16_MIN;
int32_t x446 = INT32_MIN;
int64_t x447 = -1LL;
volatile uint32_t x449 = UINT32_MAX;
uint32_t x465 = 520029U;
uint64_t x468 = 1LLU;
static int64_t x474 = -231589853080LL;
uint32_t x484 = 5812U;
uint32_t t78 = 18389U;
uint64_t x491 = 38650LLU;
int64_t x492 = INT64_MIN;
uint16_t x498 = 18866U;
volatile int16_t x502 = INT16_MIN;
int32_t x510 = 950834959;
uint32_t x516 = 1664805924U;
int16_t x522 = -1;
int32_t x531 = -18542;
uint64_t x532 = 259937LLU;
int64_t x535 = 76934736235099LL;
volatile int64_t t88 = 766670LL;
int32_t x552 = -1;
static volatile int64_t x579 = -2822734305305LL;
uint16_t x591 = UINT16_MAX;
int8_t x597 = -1;
uint32_t x599 = UINT32_MAX;
int8_t x603 = INT8_MIN;
static volatile int32_t x605 = INT32_MAX;
int8_t x606 = 1;


void f0(void) {
	int64_t x5 = 20LL;
	int8_t x6 = -3;
	uint32_t x7 = 33948U;
	int64_t x8 = -920LL;
	int64_t t0 = 135046014509LL;

	t0 = (x5%(x6*(x7^x8)));

	if (t0 != 20LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = INT8_MIN;
	int8_t x12 = 31;
	int32_t t1 = 50610;

	t1 = (x9%(x10*(x11^x12)));

	if (t1 != -10) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x21 = 4205358663LLU;
	int64_t x24 = -1LL;
	static uint64_t t2 = 174103382200138LLU;

	t2 = (x21%(x22*(x23^x24)));

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x25 = INT8_MAX;
	volatile uint64_t x26 = UINT64_MAX;
	int8_t x28 = INT8_MIN;

	t3 = (x25%(x26*(x27^x28)));

	if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x29 = -1;
	int32_t x30 = INT32_MAX;
	static uint64_t x31 = UINT64_MAX;
	uint16_t x32 = 66U;
	volatile uint64_t t4 = 9LLU;

	t4 = (x29%(x30*(x31^x32)));

	if (t4 != 143881404348LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = UINT64_MAX;
	int8_t x38 = INT8_MAX;
	uint64_t x40 = 458246827956890462LLU;
	uint64_t t5 = 141115LLU;

	t5 = (x37%(x38*(x39^x40)));

	if (t5 != 1304054854476383973LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MIN;
	static int8_t x42 = INT8_MAX;
	volatile uint32_t x43 = UINT32_MAX;
	static uint64_t x44 = 26160766LLU;

	t6 = (x41%(x42*(x43^x44)));

	if (t6 != 431131661732LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = -37208281LL;
	int16_t x46 = 1;
	int8_t x47 = -1;
	int32_t x48 = INT32_MAX;
	volatile int64_t t7 = -2348272LL;

	t7 = (x45%(x46*(x47^x48)));

	if (t7 != -37208281LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x49 = UINT32_MAX;
	volatile uint8_t x50 = 13U;
	uint8_t x51 = UINT8_MAX;
	static uint16_t x52 = UINT16_MAX;

	t8 = (x49%(x50*(x51^x52)));

	if (t8 != 255U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = INT64_MIN;
	static uint8_t x54 = 50U;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = INT8_MIN;

	t9 = (x53%(x54*(x55^x56)));

	if (t9 != -1207808LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x61 = 72859151148733LLU;
	int8_t x62 = INT8_MAX;
	volatile int64_t x63 = -67246708796LL;
	volatile uint64_t t10 = 698228LLU;

	t10 = (x61%(x62*(x63^x64)));

	if (t10 != 4536495013013LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 37LLU;
	uint64_t t11 = 135599581127LLU;

	t11 = (x69%(x70*(x71^x72)));

	if (t11 != 5963557LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = 3LLU;
	static int16_t x74 = -1;
	static int32_t x75 = -1;
	int64_t x76 = -17724LL;

	t12 = (x73%(x74*(x75^x76)));

	if (t12 != 3LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x77 = UINT16_MAX;
	static int64_t x78 = -43LL;
	static volatile uint64_t x79 = 1192308517LLU;
	static volatile uint8_t x80 = UINT8_MAX;
	static volatile uint64_t t13 = 3109973022LLU;

	t13 = (x77%(x78*(x79^x80)));

	if (t13 != 65535LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = 3U;
	int8_t x82 = INT8_MAX;
	uint32_t x83 = 310557074U;
	uint32_t t14 = 36524U;

	t14 = (x81%(x82*(x83^x84)));

	if (t14 != 3U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x89 = INT16_MIN;
	int64_t x91 = -6464LL;
	int8_t x92 = INT8_MAX;

	t15 = (x89%(x90*(x91^x92)));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x95 = UINT8_MAX;
	int32_t x96 = 0;
	volatile int32_t t16 = -184;

	t16 = (x93%(x94*(x95^x96)));

	if (t16 != -638) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x97 = -1LL;
	int32_t x98 = -25580234;
	volatile uint64_t x99 = 68543476630LLU;
	int16_t x100 = INT16_MIN;
	uint64_t t17 = 136473039695LLU;

	t17 = (x97%(x98*(x99^x100)));

	if (t17 != 913169116271641495LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x103 = 117992335;
	int64_t x104 = 273877LL;

	t18 = (x101%(x102*(x103^x104)));

	if (t18 != 24LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = 261488207;
	uint64_t x106 = UINT64_MAX;
	uint16_t x107 = 11874U;
	static uint64_t t19 = 5491665050290LLU;

	t19 = (x105%(x106*(x107^x108)));

	if (t19 != 261488207LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x110 = 43;
	volatile uint64_t t20 = 2168369183943LLU;

	t20 = (x109%(x110*(x111^x112)));

	if (t20 != 204825688285759LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x113 = 24431361081840336LLU;
	int64_t x114 = 2007LL;
	int16_t x115 = INT16_MAX;
	static int64_t x116 = 4LL;
	volatile uint64_t t21 = 2065709328235109LLU;

	t21 = (x113%(x114*(x115^x116)));

	if (t21 != 35706522LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x121 = -1;
	static uint16_t x122 = 991U;
	volatile uint32_t t22 = 2187040U;

	t22 = (x121%(x122*(x123^x124)));

	if (t22 != 97170U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = INT32_MIN;
	volatile int64_t x130 = -1LL;
	volatile uint8_t x131 = 24U;
	static volatile uint64_t t23 = 375834950270145LLU;

	t23 = (x129%(x130*(x131^x132)));

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = INT32_MAX;
	int8_t x134 = 4;
	volatile uint64_t t24 = 6715503347013522304LLU;

	t24 = (x133%(x134*(x135^x136)));

	if (t24 != 2147483647LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x138 = UINT64_MAX;
	int8_t x140 = INT8_MIN;

	t25 = (x137%(x138*(x139^x140)));

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x141 = 349791494;
	volatile int16_t x142 = -1;
	int64_t x143 = INT64_MIN;

	t26 = (x141%(x142*(x143^x144)));

	if (t26 != 349791494LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 5681067729512221616LLU;
	int8_t x146 = INT8_MAX;
	static int8_t x147 = INT8_MIN;
	int16_t x148 = -1;
	volatile uint64_t t27 = 1LLU;

	t27 = (x145%(x146*(x147^x148)));

	if (t27 != 1731LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x149 = -1848849;
	uint8_t x150 = 1U;
	uint8_t x152 = 0U;
	static volatile int32_t t28 = -291982;

	t28 = (x149%(x150*(x151^x152)));

	if (t28 != -147764) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MAX;
	volatile uint64_t x156 = 12532339805390382LLU;
	volatile uint64_t t29 = 7061782LLU;

	t29 = (x153%(x154*(x155^x156)));

	if (t29 != 1604139495089973375LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x158 = INT16_MIN;
	volatile int16_t x159 = -1;
	volatile int16_t x160 = 298;
	int64_t t30 = -26169572961513762LL;

	t30 = (x157%(x158*(x159^x160)));

	if (t30 != -5393234LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = -54;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = 2;
	uint32_t x164 = UINT32_MAX;

	t31 = (x161%(x162*(x163^x164)));

	if (t31 != 4294967239LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x165 = INT32_MIN;
	int16_t x166 = -488;
	int8_t x167 = 6;
	int32_t t32 = 0;

	t32 = (x165%(x166*(x167^x168)));

	if (t32 != -20128) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = -1;
	int32_t x174 = -188460;
	volatile uint64_t x175 = UINT64_MAX;
	volatile uint16_t x176 = UINT16_MAX;
	static uint64_t t33 = 543978362950LLU;

	t33 = (x173%(x174*(x175^x176)));

	if (t33 != 233046015LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x177 = INT32_MIN;
	uint64_t x178 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t34 = 270672530679LLU;

	t34 = (x177%(x178*(x179^x180)));

	if (t34 != 2147221508LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x181 = -1;
	uint32_t x182 = 265325U;
	static int16_t x183 = 1;
	int16_t x184 = 349;
	uint32_t t35 = 376U;

	t35 = (x181%(x182*(x183^x184)));

	if (t35 != 47644695U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = INT64_MIN;
	static int64_t x186 = INT64_MAX;
	uint8_t x187 = UINT8_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t36 = 1056981641460112LLU;

	t36 = (x185%(x186*(x187^x188)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x193 = INT64_MAX;
	int32_t x194 = 1;
	int8_t x195 = INT8_MIN;
	volatile uint8_t x196 = 6U;
	volatile int64_t t37 = -7590951362003548LL;

	t37 = (x193%(x194*(x195^x196)));

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x197 = UINT32_MAX;
	static int64_t x199 = INT64_MAX;
	uint64_t x200 = 22081555659LLU;

	t38 = (x197%(x198*(x199^x200)));

	if (t38 != 4294967295LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x202 = INT8_MIN;
	static volatile uint16_t x203 = 7U;
	static uint64_t x204 = UINT64_MAX;
	static uint64_t t39 = 112LLU;

	t39 = (x201%(x202*(x203^x204)));

	if (t39 != 766LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x205 = 32325522U;
	volatile int32_t x206 = 43;
	uint64_t x208 = UINT64_MAX;
	uint64_t t40 = 10432767781428230LLU;

	t40 = (x205%(x206*(x207^x208)));

	if (t40 != 1863LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x209 = INT32_MAX;
	uint32_t x210 = 6252391U;
	uint64_t x212 = 1LLU;
	uint64_t t41 = 209899498LLU;

	t41 = (x209%(x210*(x211^x212)));

	if (t41 != 2147483647LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x213 = 5441918U;
	int16_t x214 = INT16_MAX;
	static int8_t x216 = -8;
	uint32_t t42 = 359U;

	t42 = (x213%(x214*(x215^x216)));

	if (t42 != 5441918U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x217 = 8850LLU;
	static int8_t x218 = INT8_MAX;
	int16_t x219 = -138;
	static uint64_t x220 = UINT64_MAX;
	volatile uint64_t t43 = 11102171081888405LLU;

	t43 = (x217%(x218*(x219^x220)));

	if (t43 != 8850LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x221 = INT8_MIN;
	static uint8_t x223 = 55U;
	int8_t x224 = INT8_MIN;

	t44 = (x221%(x222*(x223^x224)));

	if (t44 != 102280902U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x225 = INT16_MAX;
	uint64_t x227 = 10500276036LLU;
	int32_t x228 = INT32_MAX;
	volatile uint64_t t45 = 150258339LLU;

	t45 = (x225%(x226*(x227^x228)));

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x234 = 5897;
	static int8_t x235 = INT8_MAX;
	int8_t x236 = -20;
	int32_t t46 = 0;

	t46 = (x233%(x234*(x235^x236)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x241 = INT32_MAX;
	int16_t x242 = -45;
	uint32_t x243 = 34285U;
	static int8_t x244 = 10;
	static uint32_t t47 = 208U;

	t47 = (x241%(x242*(x243^x244)));

	if (t47 != 2147483647U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = INT8_MAX;
	int32_t x246 = 15;
	volatile uint16_t x247 = 3U;
	int16_t x248 = INT16_MIN;
	static volatile int32_t t48 = 1;

	t48 = (x245%(x246*(x247^x248)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = -1;
	uint64_t x250 = 2354361648LLU;
	int32_t x252 = INT32_MAX;

	t49 = (x249%(x250*(x251^x252)));

	if (t49 != 3278886460184301567LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x257 = UINT16_MAX;
	uint64_t x258 = UINT64_MAX;
	volatile int16_t x259 = INT16_MIN;
	int64_t x260 = 49LL;

	t50 = (x257%(x258*(x259^x260)));

	if (t50 != 97LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x261 = -1;
	int16_t x262 = -1;
	volatile uint32_t x263 = 2U;
	volatile uint64_t x264 = 133154903LLU;
	uint64_t t51 = 203LLU;

	t51 = (x261%(x262*(x263^x264)));

	if (t51 != 133154900LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x270 = 4334810290806990710LLU;
	static volatile uint64_t x271 = UINT64_MAX;
	volatile uint64_t t52 = 110417248455320936LLU;

	t52 = (x269%(x270*(x271^x272)));

	if (t52 != 7LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x273 = INT32_MAX;
	int8_t x274 = -1;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = 891U;
	int32_t t53 = -36;

	t53 = (x273%(x274*(x275^x276)));

	if (t53 != 25788) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = -1;
	int8_t x282 = INT8_MIN;
	static uint32_t x283 = 1926773485U;
	uint16_t x284 = 11252U;
	static volatile uint32_t t54 = 1182181U;

	t54 = (x281%(x282*(x283^x284)));

	if (t54 != 1812499583U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x285 = 12;
	uint16_t x286 = 1657U;
	int8_t x287 = INT8_MIN;
	int32_t t55 = -5590476;

	t55 = (x285%(x286*(x287^x288)));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x297 = UINT16_MAX;
	uint16_t x299 = 1U;
	int64_t x300 = -1LL;
	volatile int64_t t56 = 744110185105993486LL;

	t56 = (x297%(x298*(x299^x300)));

	if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = INT16_MAX;
	static uint16_t x312 = 561U;
	volatile int64_t t57 = 1389943028037638LL;

	t57 = (x309%(x310*(x311^x312)));

	if (t57 != 32767LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x317 = 437802962LL;
	volatile int64_t x319 = 245347777163227LL;
	int8_t x320 = -1;
	volatile int64_t t58 = 53945765252029162LL;

	t58 = (x317%(x318*(x319^x320)));

	if (t58 != 437802962LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x325 = 4513140025LLU;
	uint16_t x326 = UINT16_MAX;
	uint8_t x328 = 0U;

	t59 = (x325%(x326*(x327^x328)));

	if (t59 != 4513140025LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = 49;
	uint64_t x331 = 3LLU;
	int32_t x332 = -7874;

	t60 = (x329%(x330*(x331^x332)));

	if (t60 != 353107LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x337 = 43904U;
	uint32_t x338 = 877771473U;
	uint32_t x339 = 2U;
	int16_t x340 = 0;
	volatile uint32_t t61 = 986157128U;

	t61 = (x337%(x338*(x339^x340)));

	if (t61 != 43904U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x361 = INT8_MIN;
	volatile uint16_t x362 = 179U;
	int8_t x363 = -1;
	uint16_t x364 = 1444U;
	int32_t t62 = -6710162;

	t62 = (x361%(x362*(x363^x364)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x365 = 34404386LLU;
	uint16_t x366 = 18109U;
	int16_t x367 = 1;
	int64_t x368 = -7LL;
	static volatile uint64_t t63 = 4506132967623LLU;

	t63 = (x365%(x366*(x367^x368)));

	if (t63 != 34404386LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x390 = 626261U;
	int64_t x392 = 17625234019LL;
	volatile int64_t t64 = 11136509LL;

	t64 = (x389%(x390*(x391^x392)));

	if (t64 != -50716568LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x393 = 27402651184318342LLU;
	int64_t x394 = 2230439LL;
	int16_t x395 = INT16_MIN;
	uint64_t t65 = 229LLU;

	t65 = (x393%(x394*(x395^x396)));

	if (t65 != 19000241983LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x401 = INT8_MIN;
	volatile uint8_t x402 = 2U;
	int16_t x403 = INT16_MIN;
	volatile int32_t x404 = -2907978;
	volatile int32_t t66 = 1614;

	t66 = (x401%(x402*(x403^x404)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x406 = INT16_MAX;
	int16_t x407 = 3666;
	uint8_t x408 = 1U;

	t67 = (x405%(x406*(x407^x408)));

	if (t67 != -391317) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x413 = 41U;
	int64_t x414 = INT64_MIN;
	volatile uint64_t x415 = UINT64_MAX;
	uint64_t t68 = 2413801LLU;

	t68 = (x413%(x414*(x415^x416)));

	if (t68 != 41LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x417 = -1;
	uint32_t x418 = 664168004U;
	int16_t x419 = INT16_MAX;
	uint8_t x420 = 1U;
	volatile uint32_t t69 = 33730402U;

	t69 = (x417%(x418*(x419^x420)));

	if (t69 != 470469767U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x425 = INT8_MIN;
	uint64_t x426 = 207922663LLU;
	static int8_t x427 = -1;
	volatile uint8_t x428 = 80U;
	uint64_t t70 = 451LLU;

	t70 = (x425%(x426*(x427^x428)));

	if (t70 != 16841735575LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x432 = -3532490LL;
	int64_t t71 = -261331348677LL;

	t71 = (x429%(x430*(x431^x432)));

	if (t71 != 127LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x433 = 70215LL;
	static int16_t x434 = -1;
	uint8_t x435 = 4U;
	uint64_t x436 = 64920312640LLU;
	volatile uint64_t t72 = 3985872849044805LLU;

	t72 = (x433%(x434*(x435^x436)));

	if (t72 != 70215LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x437 = 6302516971081317LL;
	uint8_t x438 = 17U;
	int16_t x439 = -1;
	int64_t t73 = 1LL;

	t73 = (x437%(x438*(x439^x440)));

	if (t73 != 117250LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x445 = 1U;
	static int8_t x448 = -53;
	int64_t t74 = -9290201511232943LL;

	t74 = (x445%(x446*(x447^x448)));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x450 = INT16_MAX;
	volatile int32_t x451 = 232003;
	uint32_t x452 = 723U;
	uint32_t t75 = 3U;

	t75 = (x449%(x450*(x451^x452)));

	if (t75 != 1002145935U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x466 = INT16_MAX;
	int16_t x467 = INT16_MAX;
	uint64_t t76 = 1063732953922957647LLU;

	t76 = (x465%(x466*(x467^x468)));

	if (t76 != 520029LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x473 = 12945780;
	uint64_t x475 = 8798602967686380LLU;
	static uint32_t x476 = 287707U;
	volatile uint64_t t77 = 3LLU;

	t77 = (x473%(x474*(x475^x476)));

	if (t77 != 12945780LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x481 = UINT32_MAX;
	int32_t x482 = -1;
	int32_t x483 = -1;

	t78 = (x481%(x482*(x483^x484)));

	if (t78 != 3180U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x489 = UINT64_MAX;
	volatile uint16_t x490 = 285U;
	uint64_t t79 = 4364980359635LLU;

	t79 = (x489%(x490*(x491^x492)));

	if (t79 != 9223372036843760557LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x497 = 3LLU;
	uint64_t x499 = UINT64_MAX;
	int8_t x500 = -2;
	uint64_t t80 = 1996483245924972LLU;

	t80 = (x497%(x498*(x499^x500)));

	if (t80 != 3LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x501 = 2140U;
	int64_t x503 = -1LL;
	int32_t x504 = INT32_MIN;
	static volatile int64_t t81 = 115576LL;

	t81 = (x501%(x502*(x503^x504)));

	if (t81 != 2140LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x505 = 24702483591690LL;
	volatile int16_t x506 = -1;
	uint64_t x507 = 1651662653758240LLU;
	static volatile uint16_t x508 = 2U;
	uint64_t t82 = 218LLU;

	t82 = (x505%(x506*(x507^x508)));

	if (t82 != 24702483591690LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x509 = -1LL;
	int8_t x511 = 10;
	int64_t x512 = -3276LL;
	volatile int64_t t83 = -4982701LL;

	t83 = (x509%(x510*(x511^x512)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x513 = UINT8_MAX;
	volatile int32_t x514 = -1;
	uint32_t x515 = UINT32_MAX;
	static uint32_t t84 = 23U;

	t84 = (x513%(x514*(x515^x516)));

	if (t84 != 255U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x517 = 414025U;
	volatile uint16_t x518 = 25226U;
	int8_t x519 = -1;
	int16_t x520 = -965;
	volatile uint32_t t85 = 1751789U;

	t85 = (x517%(x518*(x519^x520)));

	if (t85 != 414025U) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x521 = 0;
	int64_t x523 = -1LL;
	uint32_t x524 = 1888615U;
	volatile int64_t t86 = 668LL;

	t86 = (x521%(x522*(x523^x524)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x529 = UINT64_MAX;
	static uint8_t x530 = UINT8_MAX;
	uint64_t t87 = 87409028975053381LLU;

	t87 = (x529%(x530*(x531^x532)));

	if (t87 != 62606834LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x533 = INT32_MAX;
	volatile uint8_t x534 = 12U;
	static int32_t x536 = 313123;

	t88 = (x533%(x534*(x535^x536)));

	if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x549 = 1173LLU;
	static int16_t x550 = -2;
	uint32_t x551 = 20U;
	uint64_t t89 = 0LLU;

	t89 = (x549%(x550*(x551^x552)));

	if (t89 != 39LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x557 = 6U;
	uint8_t x558 = UINT8_MAX;
	uint16_t x559 = 268U;
	int16_t x560 = -16;
	volatile int32_t t90 = -23771489;

	t90 = (x557%(x558*(x559^x560)));

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x561 = INT32_MIN;
	static int8_t x562 = -1;
	int64_t x563 = -4714213303656LL;
	int16_t x564 = INT16_MIN;
	volatile int64_t t91 = 8087576963674LL;

	t91 = (x561%(x562*(x563^x564)));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x565 = 1078U;
	uint16_t x566 = 521U;
	volatile int8_t x567 = INT8_MAX;
	volatile int8_t x568 = INT8_MIN;
	int32_t t92 = 15;

	t92 = (x565%(x566*(x567^x568)));

	if (t92 != 36) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x569 = UINT32_MAX;
	int16_t x570 = INT16_MIN;
	int32_t x571 = -1;
	uint8_t x572 = 25U;
	uint32_t t93 = 24247854U;

	t93 = (x569%(x570*(x571^x572)));

	if (t93 != 196607U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x577 = INT32_MIN;
	volatile uint8_t x578 = 28U;
	static int8_t x580 = 1;
	int64_t t94 = -1LL;

	t94 = (x577%(x578*(x579^x580)));

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x589 = INT8_MIN;
	int32_t x590 = -73387;
	int64_t x592 = -109LL;
	static volatile int64_t t95 = -3210724440408610LL;

	t95 = (x589%(x590*(x591^x592)));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x593 = 473LL;
	int8_t x594 = -4;
	int8_t x595 = -2;
	static int16_t x596 = 2;
	volatile int64_t t96 = -101538778793985LL;

	t96 = (x593%(x594*(x595^x596)));

	if (t96 != 9LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x598 = INT8_MIN;
	uint16_t x600 = 1U;
	volatile uint32_t t97 = 438468954U;

	t97 = (x597%(x598*(x599^x600)));

	if (t97 != 255U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x601 = UINT16_MAX;
	int64_t x602 = -1LL;
	int8_t x604 = 26;
	int64_t t98 = 441689178LL;

	t98 = (x601%(x602*(x603^x604)));

	if (t98 != 51LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x607 = 7;
	int8_t x608 = 63;
	int32_t t99 = -9841;

	t99 = (x605%(x606*(x607^x608)));

	if (t99 != 15) { NG(); } else { ; }
	
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

