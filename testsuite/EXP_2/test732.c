#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = UINT64_MAX;
int64_t x12 = -1LL;
static volatile uint32_t x14 = 18834U;
uint32_t x15 = UINT32_MAX;
uint32_t t2 = 32001810U;
uint16_t x32 = 3668U;
int32_t x38 = INT32_MIN;
uint16_t x47 = 5318U;
uint16_t x54 = UINT16_MAX;
volatile int64_t x60 = -73710296101LL;
int64_t x61 = 231946LL;
int8_t x74 = INT8_MIN;
int64_t x82 = 5LL;
static int64_t x88 = -1LL;
static int16_t x94 = INT16_MAX;
int16_t x100 = INT16_MAX;
int32_t x102 = -1;
int64_t x103 = 13319380923985LL;
static int16_t x108 = -33;
volatile int32_t t20 = -21900961;
int32_t x115 = INT32_MIN;
static int32_t x116 = INT32_MIN;
volatile uint32_t x119 = 6137U;
uint32_t x132 = 1987717246U;
volatile uint64_t x175 = UINT64_MAX;
int8_t x179 = -1;
uint64_t x187 = 55LLU;
uint16_t x188 = 3U;
int32_t x190 = INT32_MIN;
uint32_t x202 = 30182388U;
static int16_t x203 = INT16_MAX;
uint16_t x210 = UINT16_MAX;
static uint64_t t37 = 6233LLU;
volatile uint32_t x214 = 1133U;
static uint8_t x229 = 16U;
volatile int32_t t42 = -304;
uint8_t x236 = UINT8_MAX;
static volatile int64_t t43 = -80355LL;
int16_t x238 = 162;
static int32_t t44 = -28;
uint64_t t45 = 213657LLU;
volatile uint16_t x246 = 598U;
uint64_t x247 = UINT64_MAX;
int16_t x251 = INT16_MIN;
int8_t x257 = INT8_MIN;
static volatile int16_t x258 = INT16_MAX;
uint8_t x259 = 88U;
int16_t x260 = -1;
uint16_t x275 = 3083U;
volatile int64_t x281 = -1LL;
int8_t x286 = INT8_MAX;
int32_t x287 = INT32_MIN;
uint8_t x288 = UINT8_MAX;
int64_t t53 = 1LL;
volatile uint64_t x292 = UINT64_MAX;
volatile int32_t x299 = -3;
int32_t t55 = 818;
int32_t x304 = INT32_MIN;
uint32_t x307 = 32609U;
int32_t t58 = -120838;
int32_t x317 = -640038;
int64_t t60 = -1118197062599828LL;
int8_t x326 = -1;
int64_t x331 = -1047003378513LL;
uint64_t x332 = UINT64_MAX;
int64_t x343 = INT64_MIN;
static int64_t t64 = -3800630047080102820LL;
uint32_t x346 = 10U;
int64_t x352 = INT64_MAX;
uint64_t t66 = 1730346780989081709LLU;
uint16_t x358 = UINT16_MAX;
int64_t x360 = 2131756598133LL;
int64_t t67 = -147499619667119LL;
volatile int16_t x362 = 31;
volatile uint16_t x364 = 20U;
volatile uint32_t x365 = 1U;
int64_t x368 = -1LL;
uint32_t x370 = 14232390U;
static int64_t x383 = 2041666727LL;
int16_t x389 = INT16_MAX;
static int64_t x404 = INT64_MAX;
volatile int64_t t74 = 259981164LL;
static uint16_t x406 = UINT16_MAX;
static int64_t x413 = INT64_MAX;
uint64_t x415 = 66502794LLU;
volatile int32_t x416 = INT32_MAX;
static volatile uint64_t x438 = 198301064751LLU;
static int32_t x446 = -1;
int64_t x453 = INT64_MIN;
int32_t x455 = 629391822;
static int64_t x456 = INT64_MAX;
volatile int64_t t82 = -89044060LL;
int32_t x458 = INT32_MIN;
int64_t x461 = INT64_MAX;
uint32_t x462 = UINT32_MAX;
int64_t x463 = INT64_MAX;
int8_t x468 = INT8_MIN;
int32_t t85 = -16302827;
int32_t x470 = INT32_MIN;
int64_t x476 = 127LL;
int32_t x477 = INT32_MAX;
int64_t x478 = -1252429629LL;
volatile int16_t x482 = -1;
uint8_t x484 = 117U;
volatile uint64_t x488 = UINT64_MAX;
volatile int8_t x499 = -26;
volatile int64_t x501 = -2565879LL;
int8_t x506 = INT8_MAX;
int64_t x508 = -1LL;
int64_t x520 = -1398353130LL;
volatile int64_t t96 = -1181040LL;
int16_t x531 = -3222;


void f0(void) {
	int8_t x1 = -1;
	int64_t x2 = 2134180809LL;
	int8_t x3 = 39;
	int32_t x4 = -29509287;
	volatile int64_t t0 = 0LL;

	t0 = ((x1%(x2%x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	int8_t x11 = INT8_MIN;
	uint64_t t1 = 237651390870LLU;

	t1 = ((x9%(x10%x11))/x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	uint8_t x16 = UINT8_MAX;

	t2 = ((x13%(x14%x15))/x16);

	if (t2 != 21U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	volatile int32_t x18 = -1;
	int8_t x19 = -5;
	int32_t x20 = INT32_MIN;
	volatile int32_t t3 = 962379931;

	t3 = ((x17%(x18%x19))/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = 1916;
	uint32_t x27 = 1437597876U;
	volatile uint16_t x28 = 54U;
	static uint64_t t4 = 694217873416807LLU;

	t4 = ((x25%(x26%x27))/x28);

	if (t4 != 34LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MAX;
	uint32_t x30 = 229129169U;
	uint32_t x31 = UINT32_MAX;
	uint32_t t5 = 6U;

	t5 = ((x29%(x30%x31))/x32);

	if (t5 != 23260U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 0U;
	uint8_t x39 = UINT8_MAX;
	static uint32_t x40 = UINT32_MAX;
	uint32_t t6 = 212U;

	t6 = ((x37%(x38%x39))/x40);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x41 = 240167505LLU;
	volatile uint64_t x42 = 700743646926LLU;
	int64_t x43 = INT64_MAX;
	int8_t x44 = -1;
	volatile uint64_t t7 = 110837LLU;

	t7 = ((x41%(x42%x43))/x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	static int64_t x46 = INT64_MIN;
	uint64_t x48 = 232582533978549548LLU;
	uint64_t t8 = 2792315007143508LLU;

	t8 = ((x45%(x46%x47))/x48);

	if (t8 != 79LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 1588018317755488LLU;
	uint16_t x55 = 53U;
	static volatile int16_t x56 = INT16_MAX;
	volatile uint64_t t9 = 6618LLU;

	t9 = ((x53%(x54%x55))/x56);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = UINT8_MAX;
	static int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MAX;
	int64_t t10 = 64681161LL;

	t10 = ((x57%(x58%x59))/x60);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x62 = 86604719;
	int32_t x63 = INT32_MIN;
	int16_t x64 = -253;
	volatile int64_t t11 = 98012580190209LL;

	t11 = ((x61%(x62%x63))/x64);

	if (t11 != -916LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x69 = UINT64_MAX;
	static int8_t x70 = -4;
	static uint16_t x71 = UINT16_MAX;
	static int8_t x72 = INT8_MAX;
	volatile uint64_t t12 = 2051030LLU;

	t12 = ((x69%(x70%x71))/x72);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x73 = 1LLU;
	static int64_t x75 = INT64_MIN;
	static uint16_t x76 = 191U;
	volatile uint64_t t13 = 7682770017193779904LLU;

	t13 = ((x73%(x74%x75))/x76);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x83 = INT32_MIN;
	int64_t x84 = INT64_MIN;
	int64_t t14 = 3113711LL;

	t14 = ((x81%(x82%x83))/x84);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x85 = 1U;
	uint32_t x86 = 179U;
	int32_t x87 = INT32_MAX;
	volatile int64_t t15 = -4237832LL;

	t15 = ((x85%(x86%x87))/x88);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MAX;
	int32_t x90 = INT32_MIN;
	static uint8_t x91 = 15U;
	int64_t x92 = INT64_MIN;
	volatile int64_t t16 = 4480832890LL;

	t16 = ((x89%(x90%x91))/x92);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = 2235;
	int32_t x95 = -622674;
	volatile int32_t x96 = INT32_MAX;
	int32_t t17 = 256438801;

	t17 = ((x93%(x94%x95))/x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	int64_t x98 = 5053486938479LL;
	static int8_t x99 = 24;
	int64_t t18 = -818795LL;

	t18 = ((x97%(x98%x99))/x100);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x101 = 447;
	int32_t x104 = -1698;
	int64_t t19 = -3659825862LL;

	t19 = ((x101%(x102%x103))/x104);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x105 = INT8_MIN;
	static int8_t x106 = 47;
	uint16_t x107 = 29696U;

	t20 = ((x105%(x106%x107))/x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x113 = -2;
	static int16_t x114 = -2239;
	volatile int32_t t21 = -105701455;

	t21 = ((x113%(x114%x115))/x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x117 = 796;
	int16_t x118 = -606;
	int64_t x120 = -1LL;
	volatile int64_t t22 = 53917775LL;

	t22 = ((x117%(x118%x119))/x120);

	if (t22 != -796LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = -1;
	int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MAX;
	volatile uint32_t t23 = 15632744U;

	t23 = ((x129%(x130%x131))/x132);

	if (t23 != 2U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x133 = INT64_MIN;
	static uint8_t x134 = UINT8_MAX;
	int8_t x135 = INT8_MIN;
	uint16_t x136 = 69U;
	int64_t t24 = -13026LL;

	t24 = ((x133%(x134%x135))/x136);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x141 = INT32_MAX;
	int8_t x142 = -1;
	static int32_t x143 = 2064;
	volatile uint32_t x144 = 3629068U;
	volatile uint32_t t25 = 12700877U;

	t25 = ((x141%(x142%x143))/x144);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x149 = 726701U;
	volatile int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	uint32_t t26 = 2619001U;

	t26 = ((x149%(x150%x151))/x152);

	if (t26 != 2849U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x161 = UINT32_MAX;
	static int32_t x162 = 10356211;
	int16_t x163 = INT16_MIN;
	volatile int32_t x164 = INT32_MIN;
	static uint32_t t27 = 803975196U;

	t27 = ((x161%(x162%x163))/x164);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x165 = 1U;
	uint16_t x166 = 15028U;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t28 = -956685;

	t28 = ((x165%(x166%x167))/x168);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = INT64_MAX;
	volatile int16_t x170 = 190;
	uint32_t x171 = UINT32_MAX;
	static int8_t x172 = -22;
	volatile int64_t t29 = -712477949LL;

	t29 = ((x169%(x170%x171))/x172);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x173 = INT32_MAX;
	static volatile uint16_t x174 = UINT16_MAX;
	int64_t x176 = INT64_MAX;
	volatile uint64_t t30 = 569811LLU;

	t30 = ((x173%(x174%x175))/x176);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x177 = 16;
	static uint32_t x178 = 2915737U;
	int16_t x180 = INT16_MAX;
	uint32_t t31 = 1U;

	t31 = ((x177%(x178%x179))/x180);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x181 = UINT64_MAX;
	static int8_t x182 = INT8_MAX;
	int32_t x183 = INT32_MAX;
	int16_t x184 = INT16_MAX;
	static uint64_t t32 = 4587987164353594LLU;

	t32 = ((x181%(x182%x183))/x184);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x185 = 1;
	int32_t x186 = INT32_MIN;
	uint64_t t33 = 81412852230LLU;

	t33 = ((x185%(x186%x187))/x188);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x189 = 4U;
	int32_t x191 = INT32_MAX;
	int32_t x192 = INT32_MIN;
	static int32_t t34 = -2;

	t34 = ((x189%(x190%x191))/x192);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x201 = INT8_MAX;
	int8_t x204 = -6;
	uint32_t t35 = 214U;

	t35 = ((x201%(x202%x203))/x204);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x205 = -3;
	int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	int32_t x208 = -1;
	volatile int64_t t36 = 18525994021374289LL;

	t36 = ((x205%(x206%x207))/x208);

	if (t36 != 3LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x209 = INT64_MIN;
	static uint64_t x211 = 53630929680586LLU;
	int64_t x212 = 1LL;

	t37 = ((x209%(x210%x211))/x212);

	if (t37 != 32768LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = -1015;
	int64_t x215 = INT64_MIN;
	int8_t x216 = -1;
	int64_t t38 = -3627425LL;

	t38 = ((x213%(x214%x215))/x216);

	if (t38 != 1015LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MAX;
	uint8_t x219 = UINT8_MAX;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t39 = 4520164;

	t39 = ((x217%(x218%x219))/x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x221 = -6;
	int32_t x222 = INT32_MIN;
	uint64_t x223 = UINT64_MAX;
	volatile int8_t x224 = -1;
	volatile uint64_t t40 = 240967875555463LLU;

	t40 = ((x221%(x222%x223))/x224);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x225 = 1383927;
	int16_t x226 = INT16_MIN;
	int64_t x227 = -100582114193712LL;
	static int32_t x228 = INT32_MAX;
	int64_t t41 = -109696965777498117LL;

	t41 = ((x225%(x226%x227))/x228);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x230 = 1848;
	uint16_t x231 = 65U;
	int16_t x232 = INT16_MIN;

	t42 = ((x229%(x230%x231))/x232);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x233 = INT64_MIN;
	volatile int8_t x234 = INT8_MIN;
	volatile int64_t x235 = -7220946423516LL;

	t43 = ((x233%(x234%x235))/x236);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x237 = INT32_MIN;
	volatile uint8_t x239 = UINT8_MAX;
	int8_t x240 = -1;

	t44 = ((x237%(x238%x239))/x240);

	if (t44 != 146) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x241 = -1LL;
	volatile uint32_t x242 = UINT32_MAX;
	static int64_t x243 = INT64_MAX;
	uint64_t x244 = UINT64_MAX;

	t45 = ((x241%(x242%x243))/x244);

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x245 = -1LL;
	int64_t x248 = -1LL;
	volatile uint64_t t46 = 344468LLU;

	t46 = ((x245%(x246%x247))/x248);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MAX;
	uint8_t x252 = UINT8_MAX;
	uint64_t t47 = 62435236547770457LLU;

	t47 = ((x249%(x250%x251))/x252);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t t48 = -548;

	t48 = ((x257%(x258%x259))/x260);

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x265 = INT8_MIN;
	uint32_t x266 = 105246440U;
	int8_t x267 = INT8_MIN;
	volatile uint32_t x268 = UINT32_MAX;
	uint32_t t49 = 55U;

	t49 = ((x265%(x266%x267))/x268);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x273 = UINT16_MAX;
	static uint8_t x274 = 110U;
	int8_t x276 = -21;
	volatile int32_t t50 = 399167999;

	t50 = ((x273%(x274%x275))/x276);

	if (t50 != -4) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x277 = INT64_MIN;
	uint32_t x278 = 196U;
	int64_t x279 = 753350289107022LL;
	volatile int32_t x280 = INT32_MIN;
	volatile int64_t t51 = -36518442375386LL;

	t51 = ((x277%(x278%x279))/x280);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x282 = UINT32_MAX;
	uint64_t x283 = UINT64_MAX;
	volatile int16_t x284 = 12197;
	volatile uint64_t t52 = 79142284974025LLU;

	t52 = ((x281%(x282%x283))/x284);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x285 = INT64_MAX;

	t53 = ((x285%(x286%x287))/x288);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x289 = -5;
	int8_t x290 = -1;
	volatile int32_t x291 = 976254430;
	uint64_t t54 = 882393159473LLU;

	t54 = ((x289%(x290%x291))/x292);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x297 = INT16_MAX;
	int32_t x298 = INT32_MIN;
	static int16_t x300 = 209;

	t55 = ((x297%(x298%x299))/x300);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x301 = INT64_MIN;
	static volatile int32_t x302 = -1;
	uint16_t x303 = 29U;
	static int64_t t56 = -965385627788354868LL;

	t56 = ((x301%(x302%x303))/x304);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x305 = -1;
	int8_t x306 = INT8_MIN;
	int8_t x308 = 1;
	static uint32_t t57 = 162287171U;

	t57 = ((x305%(x306%x307))/x308);

	if (t57 != 2581U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x309 = 112U;
	uint8_t x310 = 18U;
	uint8_t x311 = UINT8_MAX;
	int16_t x312 = -502;

	t58 = ((x309%(x310%x311))/x312);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x313 = 0;
	int64_t x314 = -1LL;
	volatile uint16_t x315 = 4552U;
	int32_t x316 = -1;
	volatile int64_t t59 = 2952LL;

	t59 = ((x313%(x314%x315))/x316);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x318 = INT8_MIN;
	int64_t x319 = -247LL;
	static int8_t x320 = INT8_MIN;

	t60 = ((x317%(x318%x319))/x320);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = 3;
	uint16_t x327 = 24762U;
	static int32_t x328 = INT32_MIN;
	int32_t t61 = 840;

	t61 = ((x325%(x326%x327))/x328);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = INT32_MIN;
	int32_t x330 = 36788539;
	volatile uint64_t t62 = 346094702467143905LLU;

	t62 = ((x329%(x330%x331))/x332);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x337 = -1;
	int32_t x338 = INT32_MIN;
	int32_t x339 = 1375;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t63 = 7;

	t63 = ((x337%(x338%x339))/x340);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	uint16_t x344 = 501U;

	t64 = ((x341%(x342%x343))/x344);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x345 = 23;
	int16_t x347 = INT16_MIN;
	static int16_t x348 = -1;
	uint32_t t65 = 321163U;

	t65 = ((x345%(x346%x347))/x348);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	int8_t x351 = 21;

	t66 = ((x349%(x350%x351))/x352);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x357 = 11138LL;
	volatile uint32_t x359 = 406749U;

	t67 = ((x357%(x358%x359))/x360);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x361 = UINT16_MAX;
	uint16_t x363 = UINT16_MAX;
	volatile int32_t t68 = 7;

	t68 = ((x361%(x362%x363))/x364);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x366 = -1;
	static volatile uint16_t x367 = 22784U;
	volatile int64_t t69 = -1231148789757123591LL;

	t69 = ((x365%(x366%x367))/x368);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x369 = 16640889U;
	static int8_t x371 = -1;
	int32_t x372 = INT32_MIN;
	volatile uint32_t t70 = 635345390U;

	t70 = ((x369%(x370%x371))/x372);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MIN;
	int8_t x376 = -5;
	int32_t t71 = 2769;

	t71 = ((x373%(x374%x375))/x376);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x381 = 8618U;
	int64_t x382 = INT64_MIN;
	uint32_t x384 = 1901802476U;
	static volatile int64_t t72 = -16940369071LL;

	t72 = ((x381%(x382%x383))/x384);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x390 = INT64_MIN;
	volatile int32_t x391 = INT32_MAX;
	int64_t x392 = -1LL;
	int64_t t73 = -68975984033048638LL;

	t73 = ((x389%(x390%x391))/x392);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x401 = -13416071;
	int64_t x402 = INT64_MIN;
	static int16_t x403 = INT16_MAX;

	t74 = ((x401%(x402%x403))/x404);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x405 = INT8_MIN;
	int16_t x407 = INT16_MAX;
	int64_t x408 = 396867002113LL;
	int64_t t75 = 13430006LL;

	t75 = ((x405%(x406%x407))/x408);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x409 = INT8_MIN;
	static int32_t x410 = INT32_MIN;
	int64_t x411 = 30LL;
	static uint64_t x412 = UINT64_MAX;
	volatile uint64_t t76 = 1294344LLU;

	t76 = ((x409%(x410%x411))/x412);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x414 = -1;
	volatile uint64_t t77 = 82037289LLU;

	t77 = ((x413%(x414%x415))/x416);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x421 = UINT64_MAX;
	int8_t x422 = 2;
	uint8_t x423 = 14U;
	uint8_t x424 = 1U;
	volatile uint64_t t78 = 24LLU;

	t78 = ((x421%(x422%x423))/x424);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x433 = 18183415LLU;
	uint64_t x434 = 3823442428598LLU;
	uint32_t x435 = 156972125U;
	static int16_t x436 = INT16_MAX;
	volatile uint64_t t79 = 147520536559980LLU;

	t79 = ((x433%(x434%x435))/x436);

	if (t79 != 554LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x437 = INT16_MAX;
	static uint16_t x439 = 191U;
	int8_t x440 = INT8_MIN;
	volatile uint64_t t80 = 117804683265LLU;

	t80 = ((x437%(x438%x439))/x440);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x445 = UINT32_MAX;
	uint32_t x447 = 1860U;
	int16_t x448 = -3700;
	uint32_t t81 = 18541766U;

	t81 = ((x445%(x446%x447))/x448);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x454 = INT32_MIN;

	t82 = ((x453%(x454%x455))/x456);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x457 = UINT64_MAX;
	int8_t x459 = -3;
	static volatile int64_t x460 = INT64_MIN;
	volatile uint64_t t83 = 28401302LLU;

	t83 = ((x457%(x458%x459))/x460);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x464 = 722U;
	int64_t t84 = -29714815116583LL;

	t84 = ((x461%(x462%x463))/x464);

	if (t84 != 2974354LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x465 = INT8_MIN;
	volatile int32_t x466 = 3;
	volatile int32_t x467 = INT32_MIN;

	t85 = ((x465%(x466%x467))/x468);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x469 = 24;
	static uint64_t x471 = 447540180925434247LLU;
	int64_t x472 = INT64_MIN;
	volatile uint64_t t86 = 0LLU;

	t86 = ((x469%(x470%x471))/x472);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x473 = INT64_MIN;
	int16_t x474 = -1;
	int8_t x475 = -2;
	volatile int64_t t87 = -7313883116LL;

	t87 = ((x473%(x474%x475))/x476);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x479 = 7103835U;
	volatile uint64_t x480 = UINT64_MAX;
	static volatile uint64_t t88 = 849LLU;

	t88 = ((x477%(x478%x479))/x480);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x481 = -1755210400LL;
	uint16_t x483 = 5U;
	static int64_t t89 = 32841761LL;

	t89 = ((x481%(x482%x483))/x484);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x485 = INT32_MIN;
	int32_t x486 = INT32_MAX;
	uint64_t x487 = 551424261721690772LLU;
	uint64_t t90 = 24170270952826LLU;

	t90 = ((x485%(x486%x487))/x488);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x493 = INT32_MAX;
	int64_t x494 = INT64_MIN;
	uint32_t x495 = UINT32_MAX;
	int64_t x496 = -30LL;
	volatile int64_t t91 = -8686570916816784LL;

	t91 = ((x493%(x494%x495))/x496);

	if (t91 != -71582788LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x497 = 82;
	int32_t x498 = INT32_MIN;
	static volatile int32_t x500 = -6158;
	int32_t t92 = -50;

	t92 = ((x497%(x498%x499))/x500);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x502 = 7386U;
	uint64_t x503 = 4510627LLU;
	uint8_t x504 = UINT8_MAX;
	uint64_t t93 = 52623548117256744LLU;

	t93 = ((x501%(x502%x503))/x504);

	if (t93 != 20LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x505 = 31291568;
	uint32_t x507 = 16464005U;
	int64_t t94 = -3554391LL;

	t94 = ((x505%(x506%x507))/x508);

	if (t94 != -38LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x509 = -222;
	static volatile uint8_t x510 = 4U;
	int8_t x511 = INT8_MAX;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t95 = -150287952;

	t95 = ((x509%(x510%x511))/x512);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x517 = INT16_MIN;
	int64_t x518 = 149158189LL;
	static uint8_t x519 = 10U;

	t96 = ((x517%(x518%x519))/x520);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x521 = 1;
	static int16_t x522 = 1;
	int32_t x523 = INT32_MAX;
	static int64_t x524 = INT64_MIN;
	static volatile int64_t t97 = 5799LL;

	t97 = ((x521%(x522%x523))/x524);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x525 = UINT8_MAX;
	static int32_t x526 = -7572;
	volatile int16_t x527 = INT16_MIN;
	volatile uint16_t x528 = UINT16_MAX;
	volatile int32_t t98 = -3;

	t98 = ((x525%(x526%x527))/x528);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x529 = 1U;
	int32_t x530 = -1710609;
	int32_t x532 = 242585078;
	volatile int32_t t99 = 42308318;

	t99 = ((x529%(x530%x531))/x532);

	if (t99 != 0) { NG(); } else { ; }
	
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

