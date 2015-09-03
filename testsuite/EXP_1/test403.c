#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x5 = 10745928144LLU;
int64_t x11 = INT64_MIN;
static volatile uint16_t x13 = 6842U;
static int8_t x14 = INT8_MIN;
volatile int8_t x15 = INT8_MAX;
volatile int64_t x16 = INT64_MIN;
volatile uint32_t t3 = 15906636U;
int64_t t5 = -7966296438308LL;
uint64_t x42 = UINT64_MAX;
static volatile uint32_t x71 = UINT32_MAX;
static volatile int8_t x79 = 1;
volatile int8_t x87 = -1;
volatile int64_t t13 = -6089292561160LL;
int8_t x97 = INT8_MAX;
uint64_t x98 = 34030691020952634LLU;
static uint64_t t15 = 3LLU;
int8_t x117 = INT8_MIN;
int32_t x135 = -429278012;
int64_t x143 = 491328LL;
volatile int64_t t24 = -2501734717398LL;
uint64_t x153 = UINT64_MAX;
volatile int8_t x154 = INT8_MIN;
volatile uint16_t x155 = UINT16_MAX;
uint64_t t26 = 1708LLU;
int16_t x169 = INT16_MIN;
volatile int8_t x170 = INT8_MIN;
int8_t x177 = -1;
int16_t x178 = INT16_MIN;
int8_t x179 = INT8_MIN;
int8_t x180 = -1;
int32_t x185 = INT32_MAX;
volatile uint64_t t31 = 2580572081573LLU;
volatile int64_t t32 = 189499952345768LL;
int64_t t33 = -6799395072634LL;
uint8_t x210 = 56U;
uint64_t t35 = 28957273807194LLU;
int64_t x216 = -57992045LL;
volatile int64_t t36 = 47654LL;
volatile int16_t x217 = 249;
int64_t x219 = -94280562926143LL;
volatile int64_t t37 = 257691424LL;
static int64_t x229 = 1817299808671LL;
volatile uint16_t x230 = 58U;
uint16_t x236 = 23U;
uint32_t x237 = 580U;
int32_t x240 = -1;
uint16_t x245 = 17U;
int16_t x250 = -1;
volatile int16_t x252 = -1;
int8_t x258 = -4;
uint64_t x259 = UINT64_MAX;
static uint64_t t45 = 367997758LLU;
uint16_t x265 = 340U;
static int16_t x269 = INT16_MIN;
static volatile int16_t x270 = INT16_MAX;
int64_t x271 = INT64_MIN;
static volatile uint8_t x272 = 98U;
static int32_t x285 = -13404;
int32_t x287 = INT32_MIN;
uint64_t t51 = 1510LLU;
volatile uint16_t x291 = UINT16_MAX;
static uint16_t x292 = 295U;
volatile uint16_t x293 = 3U;
volatile int64_t x294 = 285389636936LL;
int8_t x296 = 1;
int64_t x300 = INT64_MIN;
volatile uint64_t t54 = 27689261917LLU;
static int32_t x312 = -5845692;
static uint8_t x328 = 13U;
int16_t x330 = INT16_MAX;
uint64_t x331 = 8410868760151LLU;
volatile uint16_t x341 = 1U;
int32_t x343 = INT32_MIN;
volatile int8_t x347 = -2;
volatile int64_t x357 = INT64_MIN;
static volatile int32_t x365 = -1;
int32_t x372 = INT32_MAX;
static int32_t x379 = INT32_MIN;
int64_t t65 = 1167487208LL;
int16_t x381 = 1;
volatile int32_t t67 = -849;
volatile int32_t t68 = 3551051;
volatile uint16_t x397 = 20004U;
uint8_t x399 = 40U;
static uint32_t t71 = 1U;
int32_t x411 = INT32_MIN;
uint8_t x416 = UINT8_MAX;
int32_t x419 = INT32_MAX;
volatile uint64_t x430 = 8092161560267LLU;
static uint32_t x431 = 260006356U;
int64_t t78 = 14837168406LL;
int16_t x445 = INT16_MIN;
int64_t x454 = 161063LL;
uint64_t t86 = 1140530746LLU;
static uint32_t x477 = UINT32_MAX;
uint16_t x482 = 23612U;
uint32_t x483 = 2487U;
int8_t x492 = INT8_MIN;
static int8_t x493 = INT8_MIN;
uint32_t x494 = 345391654U;
static int16_t x498 = INT16_MIN;
int32_t x501 = INT32_MAX;
uint32_t x502 = UINT32_MAX;
int64_t x509 = -149LL;
static volatile uint8_t x511 = 99U;
volatile int16_t x513 = INT16_MAX;
uint32_t t94 = 3U;
volatile uint64_t t95 = 163184103970326242LLU;
volatile uint64_t x540 = UINT64_MAX;
int32_t x559 = INT32_MIN;


void f0(void) {
	int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	volatile int32_t x8 = -1335;
	volatile uint64_t t0 = 523LLU;

	t0 = (((x5*x6)%x7)^x8);

	if (t0 != 1375478801097LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = -1LL;
	int32_t x10 = INT32_MIN;
	uint64_t x12 = 13524767LLU;
	volatile uint64_t t1 = 159622LLU;

	t1 = (((x9*x10)%x11)^x12);

	if (t1 != 2161008415LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t t2 = 1919LL;

	t2 = (((x13*x14)%x15)^x16);

	if (t2 != 9223372036854775697LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MAX;
	uint32_t x18 = UINT32_MAX;
	uint16_t x19 = UINT16_MAX;
	static volatile int16_t x20 = INT16_MAX;

	t3 = (((x17*x18)%x19)^x20);

	if (t3 != 65534U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = INT8_MIN;
	uint16_t x26 = UINT16_MAX;
	volatile uint64_t x27 = 20884LLU;
	int32_t x28 = INT32_MIN;
	uint64_t t4 = 490713LLU;

	t4 = (((x25*x26)%x27)^x28);

	if (t4 != 18446744071562085856LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 47435736;
	int8_t x30 = -1;
	int32_t x31 = -1;
	volatile int64_t x32 = -6587327910002227LL;

	t5 = (((x29*x30)%x31)^x32);

	if (t5 != -6587327910002227LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x37 = -1;
	int8_t x38 = 1;
	int16_t x39 = 1;
	static uint16_t x40 = 9U;
	int32_t t6 = 504;

	t6 = (((x37*x38)%x39)^x40);

	if (t6 != 9) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MIN;
	volatile int64_t x43 = INT64_MAX;
	int32_t x44 = -1;
	static uint64_t t7 = 558783573173980LLU;

	t7 = (((x41*x42)%x43)^x44);

	if (t7 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x65 = INT16_MIN;
	volatile int8_t x66 = 1;
	int32_t x67 = -1;
	int16_t x68 = INT16_MIN;
	volatile int32_t t8 = -33;

	t8 = (((x65*x66)%x67)^x68);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x69 = INT16_MIN;
	int8_t x70 = INT8_MIN;
	uint32_t x72 = 3692U;
	static uint32_t t9 = 24186291U;

	t9 = (((x69*x70)%x71)^x72);

	if (t9 != 4197996U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x73 = 3406474575246941606LLU;
	int8_t x74 = -3;
	uint64_t x75 = 113LLU;
	int64_t x76 = -1186727893645855LL;
	static volatile uint64_t t10 = 5289252LLU;

	t10 = (((x73*x74)%x75)^x76);

	if (t10 != 18445557345815905708LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x77 = -42;
	static volatile int16_t x78 = INT16_MIN;
	static int64_t x80 = 190247661LL;
	static volatile int64_t t11 = -2761312328LL;

	t11 = (((x77*x78)%x79)^x80);

	if (t11 != 190247661LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x81 = 189021U;
	int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	volatile uint32_t t12 = 74U;

	t12 = (((x81*x82)%x83)^x84);

	if (t12 != 4270967843U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = 3763;
	uint16_t x86 = UINT16_MAX;
	static int64_t x88 = -26688182798137LL;

	t13 = (((x85*x86)%x87)^x88);

	if (t13 != -26688182798137LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x89 = 1U;
	int16_t x90 = INT16_MAX;
	volatile int16_t x91 = INT16_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t14 = 24815637;

	t14 = (((x89*x90)%x91)^x92);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x99 = INT8_MIN;
	uint32_t x100 = UINT32_MAX;

	t15 = (((x97*x98)%x99)^x100);

	if (t15 != 4321897762340321081LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = -1;
	static int8_t x102 = -1;
	uint8_t x103 = 84U;
	volatile uint8_t x104 = 118U;
	static volatile int32_t t16 = -1448265;

	t16 = (((x101*x102)%x103)^x104);

	if (t16 != 119) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x106 = UINT64_MAX;
	volatile uint16_t x107 = UINT16_MAX;
	int32_t x108 = 8;
	uint64_t t17 = 1424705309895233093LLU;

	t17 = (((x105*x106)%x107)^x108);

	if (t17 != 32776LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x109 = 5916388818315LLU;
	static int64_t x110 = INT64_MIN;
	int16_t x111 = -26;
	int8_t x112 = 15;
	uint64_t t18 = 4012427LLU;

	t18 = (((x109*x110)%x111)^x112);

	if (t18 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	static int64_t x115 = INT64_MIN;
	int64_t x116 = INT64_MAX;
	uint64_t t19 = 73397665741740181LLU;

	t19 = (((x113*x114)%x115)^x116);

	if (t19 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = 5651971LLU;
	volatile uint64_t t20 = 17769269LLU;

	t20 = (((x117*x118)%x119)^x120);

	if (t20 != 1457667LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x125 = -1;
	static uint64_t x126 = 1804018959993168LLU;
	uint8_t x127 = 41U;
	int64_t x128 = INT64_MIN;
	volatile uint64_t t21 = 4538576042987180LLU;

	t21 = (((x125*x126)%x127)^x128);

	if (t21 != 9223372036854775834LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x133 = UINT32_MAX;
	int16_t x134 = -1;
	int64_t x136 = INT64_MIN;
	volatile int64_t t22 = -7586382966607LL;

	t22 = (((x133*x134)%x135)^x136);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x137 = UINT16_MAX;
	int16_t x138 = 1547;
	static uint32_t x139 = UINT32_MAX;
	uint64_t x140 = 1254286229LLU;
	static uint64_t t23 = 726319736LLU;

	t23 = (((x137*x138)%x139)^x140);

	if (t23 != 1288182368LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = -1;
	int16_t x142 = INT16_MAX;
	static volatile int16_t x144 = INT16_MAX;

	t24 = (((x141*x142)%x143)^x144);

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x156 = 14351356569LLU;
	volatile uint64_t t25 = 1337LLU;

	t25 = (((x153*x154)%x155)^x156);

	if (t25 != 14351356441LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x157 = UINT8_MAX;
	volatile uint64_t x158 = UINT64_MAX;
	static uint32_t x159 = UINT32_MAX;
	volatile int64_t x160 = INT64_MIN;

	t26 = (((x157*x158)%x159)^x160);

	if (t26 != 9223372041149742849LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x161 = 6388LLU;
	static uint32_t x162 = 441399174U;
	int16_t x163 = INT16_MIN;
	volatile uint64_t x164 = 907LLU;
	volatile uint64_t t27 = 219LLU;

	t27 = (((x161*x162)%x163)^x164);

	if (t27 != 2819657922611LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x171 = UINT16_MAX;
	uint64_t x172 = 2033127905711LLU;
	volatile uint64_t t28 = 16539794LLU;

	t28 = (((x169*x170)%x171)^x172);

	if (t28 != 2033127905775LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t t29 = -143;

	t29 = (((x177*x178)%x179)^x180);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x181 = 1096U;
	int32_t x182 = -1;
	uint32_t x183 = 20813U;
	int16_t x184 = 0;
	volatile uint32_t t30 = 1509140U;

	t30 = (((x181*x182)%x183)^x184);

	if (t30 != 16333U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x186 = 0LLU;
	int32_t x187 = -1;
	static int64_t x188 = 152618764944LL;

	t31 = (((x185*x186)%x187)^x188);

	if (t31 != 152618764944LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x189 = 312032U;
	volatile uint16_t x190 = 20U;
	int64_t x191 = -1LL;
	static int8_t x192 = -1;

	t32 = (((x189*x190)%x191)^x192);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x193 = -11;
	int8_t x194 = INT8_MIN;
	static int64_t x195 = -1LL;
	int8_t x196 = INT8_MIN;

	t33 = (((x193*x194)%x195)^x196);

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x197 = INT16_MIN;
	int8_t x198 = 10;
	int8_t x199 = INT8_MAX;
	volatile uint64_t x200 = 4211569925997181LLU;
	uint64_t t34 = 1LLU;

	t34 = (((x197*x198)%x199)^x200);

	if (t34 != 18442532503783554449LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x209 = 347082665419LL;
	uint64_t x211 = 368916458413LLU;
	volatile uint8_t x212 = 7U;

	t35 = (((x209*x210)%x211)^x212);

	if (t35 != 252973425987LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x213 = UINT16_MAX;
	static int8_t x214 = INT8_MIN;
	volatile int64_t x215 = INT64_MAX;

	t36 = (((x213*x214)%x215)^x216);

	if (t36 != 51059731LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x218 = -1LL;
	int16_t x220 = INT16_MIN;

	t37 = (((x217*x218)%x219)^x220);

	if (t37 != 32519LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x231 = 1;
	volatile int64_t x232 = INT64_MIN;
	int64_t t38 = INT64_MIN;

	t38 = (((x229*x230)%x231)^x232);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x233 = INT8_MAX;
	volatile uint16_t x234 = UINT16_MAX;
	int16_t x235 = -3;
	int32_t t39 = 29;

	t39 = (((x233*x234)%x235)^x236);

	if (t39 != 23) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x238 = INT8_MIN;
	static volatile int8_t x239 = -1;
	uint32_t t40 = 1847161923U;

	t40 = (((x237*x238)%x239)^x240);

	if (t40 != 74239U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x246 = 6935310;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = 7506540U;
	uint32_t t41 = 411595U;

	t41 = (((x245*x246)%x247)^x248);

	if (t41 != 7506306U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x249 = -4509828904LL;
	uint8_t x251 = 5U;
	int64_t t42 = 22LL;

	t42 = (((x249*x250)%x251)^x252);

	if (t42 != -5LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x253 = 7U;
	volatile uint8_t x254 = 0U;
	int16_t x255 = -8;
	int32_t x256 = INT32_MAX;
	int32_t t43 = INT32_MAX;

	t43 = (((x253*x254)%x255)^x256);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x257 = -36416371LL;
	static int32_t x260 = INT32_MIN;
	uint64_t t44 = 23306509984LLU;

	t44 = (((x257*x258)%x259)^x260);

	if (t44 != 18446744071707733452LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x261 = 60117LLU;
	int32_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	static int64_t x264 = INT64_MIN;

	t45 = (((x261*x262)%x263)^x264);

	if (t45 != 9223372041149682987LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x266 = INT8_MIN;
	int8_t x267 = -15;
	uint8_t x268 = 6U;
	static int32_t t46 = -52542379;

	t46 = (((x265*x266)%x267)^x268);

	if (t46 != -3) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t t47 = -24254348210LL;

	t47 = (((x269*x270)%x271)^x272);

	if (t47 != -1073708958LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x273 = -1;
	volatile uint32_t x274 = 12U;
	int64_t x275 = INT64_MAX;
	volatile int8_t x276 = -5;
	volatile int64_t t48 = -78922991LL;

	t48 = (((x273*x274)%x275)^x276);

	if (t48 != -4294967281LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x277 = 2837LL;
	int16_t x278 = -11108;
	int8_t x279 = INT8_MAX;
	int64_t x280 = INT64_MIN;
	static volatile int64_t t49 = -15555201358655LL;

	t49 = (((x277*x278)%x279)^x280);

	if (t49 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x281 = 26U;
	int8_t x282 = 1;
	volatile int16_t x283 = -1;
	int32_t x284 = 7;
	int32_t t50 = 1475935;

	t50 = (((x281*x282)%x283)^x284);

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x286 = 44LLU;
	volatile uint16_t x288 = UINT16_MAX;

	t51 = (((x285*x286)%x287)^x288);

	if (t51 != 2146959311LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x289 = 2060694632LLU;
	int64_t x290 = 119723LL;
	uint64_t t52 = 22LLU;

	t52 = (((x289*x290)%x291)^x292);

	if (t52 != 22137LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x295 = 29970LL;
	volatile int64_t t53 = 3404093644LL;

	t53 = (((x293*x294)%x295)^x296);

	if (t53 != 6739LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x297 = 1701989883670484658LLU;
	int16_t x298 = INT16_MIN;
	uint64_t x299 = UINT64_MAX;

	t54 = (((x297*x298)%x299)^x300);

	if (t54 != 2926198746388037632LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x309 = 31707U;
	uint8_t x310 = 23U;
	volatile int32_t x311 = INT32_MIN;
	static int32_t t55 = 104;

	t55 = (((x309*x310)%x311)^x312);

	if (t55 != -5378583) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x325 = INT8_MIN;
	uint64_t x326 = 171973506145292262LLU;
	int8_t x327 = INT8_MIN;
	volatile uint64_t t56 = 50353LLU;

	t56 = (((x325*x326)%x327)^x328);

	if (t56 != 14880879360821693709LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x329 = INT8_MIN;
	volatile int32_t x332 = INT32_MAX;
	volatile uint64_t t57 = 3279751458132155LLU;

	t57 = (((x329*x330)%x331)^x332);

	if (t57 != 1476454112212LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x337 = 8U;
	int32_t x338 = 10493;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t58 = -2473818;

	t58 = (((x337*x338)%x339)^x340);

	if (t58 != -2147465240) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x342 = INT64_MIN;
	int32_t x344 = -2;
	int64_t t59 = 3921LL;

	t59 = (((x341*x342)%x343)^x344);

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x345 = -6479;
	uint32_t x346 = 1U;
	int32_t x348 = INT32_MAX;
	volatile uint32_t t60 = 289195U;

	t60 = (((x345*x346)%x347)^x348);

	if (t60 != 2147490126U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x349 = 0U;
	uint8_t x350 = 1U;
	static volatile uint32_t x351 = 984U;
	int64_t x352 = -1LL;
	static int64_t t61 = 38176561199671LL;

	t61 = (((x349*x350)%x351)^x352);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x358 = 1U;
	uint32_t x359 = 1489229U;
	static volatile int16_t x360 = -2;
	int64_t t62 = -4288298856694LL;

	t62 = (((x357*x358)%x359)^x360);

	if (t62 != 1105749LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x366 = 10U;
	int32_t x367 = -23820;
	volatile int16_t x368 = INT16_MIN;
	int32_t t63 = -20880;

	t63 = (((x365*x366)%x367)^x368);

	if (t63 != 32758) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x369 = 47091989162930921LLU;
	uint64_t x370 = 1LLU;
	static int16_t x371 = INT16_MIN;
	volatile uint64_t t64 = 231701110971426LLU;

	t64 = (((x369*x370)%x371)^x372);

	if (t64 != 47091990041283862LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x377 = -101992264;
	int64_t x378 = 2LL;
	int8_t x380 = -18;

	t65 = (((x377*x378)%x379)^x380);

	if (t65 != 203984542LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x382 = INT32_MIN;
	int64_t x383 = -3617471LL;
	volatile uint32_t x384 = 250U;
	static volatile int64_t t66 = 74314117068489LL;

	t66 = (((x381*x382)%x383)^x384);

	if (t66 != -2323307LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x385 = -278;
	volatile int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MIN;
	static int16_t x388 = -1;

	t67 = (((x385*x386)%x387)^x388);

	if (t67 != -35585) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x389 = 13U;
	int16_t x390 = INT16_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	static int8_t x392 = INT8_MAX;

	t68 = (((x389*x390)%x391)^x392);

	if (t68 != 32646) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x393 = -1;
	volatile int32_t x394 = INT32_MAX;
	static uint8_t x395 = UINT8_MAX;
	static int64_t x396 = -85LL;
	static int64_t t69 = 53600425LL;

	t69 = (((x393*x394)%x395)^x396);

	if (t69 != 42LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x398 = INT8_MIN;
	static volatile uint8_t x400 = UINT8_MAX;
	volatile int32_t t70 = -8631;

	t70 = (((x397*x398)%x399)^x400);

	if (t70 != -225) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x401 = -1;
	volatile uint32_t x402 = UINT32_MAX;
	int8_t x403 = -1;
	static int32_t x404 = 0;

	t71 = (((x401*x402)%x403)^x404);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x409 = 31U;
	volatile int32_t x410 = -495909;
	uint64_t x412 = 55483059335183LLU;
	uint64_t t72 = 393009633259LLU;

	t72 = (((x409*x410)%x411)^x412);

	if (t72 != 18446688590636227722LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x413 = INT8_MAX;
	int16_t x414 = INT16_MAX;
	int16_t x415 = 15361;
	static volatile int32_t t73 = -228;

	t73 = (((x413*x414)%x415)^x416);

	if (t73 != 13964) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x417 = 55U;
	int64_t x418 = -79LL;
	volatile int8_t x420 = INT8_MAX;
	int64_t t74 = -879651LL;

	t74 = (((x417*x418)%x419)^x420);

	if (t74 != -4232LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x421 = INT16_MAX;
	uint32_t x422 = UINT32_MAX;
	uint16_t x423 = UINT16_MAX;
	int32_t x424 = INT32_MIN;
	volatile uint32_t t75 = 553U;

	t75 = (((x421*x422)%x423)^x424);

	if (t75 != 2147516417U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x425 = INT8_MIN;
	int32_t x426 = -1;
	uint16_t x427 = UINT16_MAX;
	int64_t x428 = -592969437LL;
	volatile int64_t t76 = 25LL;

	t76 = (((x425*x426)%x427)^x428);

	if (t76 != -592969309LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x429 = INT16_MAX;
	int8_t x432 = INT8_MIN;
	uint64_t t77 = 555785402839350512LLU;

	t77 = (((x429*x430)%x431)^x432);

	if (t77 != 18446744073666718789LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x437 = -15;
	int64_t x438 = -2219325144814LL;
	volatile uint8_t x439 = 9U;
	uint16_t x440 = 46U;

	t78 = (((x437*x438)%x439)^x440);

	if (t78 != 40LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x441 = UINT16_MAX;
	int16_t x442 = INT16_MIN;
	static int64_t x443 = INT64_MAX;
	uint16_t x444 = UINT16_MAX;
	static volatile int64_t t79 = 12424977196LL;

	t79 = (((x441*x442)%x443)^x444);

	if (t79 != -2147450881LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x446 = -1LL;
	int64_t x447 = INT64_MIN;
	uint8_t x448 = 31U;
	int64_t t80 = 395LL;

	t80 = (((x445*x446)%x447)^x448);

	if (t80 != 32799LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x449 = UINT64_MAX;
	int64_t x450 = INT64_MAX;
	int64_t x451 = INT64_MIN;
	uint64_t x452 = 1563507LLU;
	uint64_t t81 = 102LLU;

	t81 = (((x449*x450)%x451)^x452);

	if (t81 != 1563506LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x453 = -1;
	int64_t x455 = -1LL;
	int64_t x456 = 1490LL;
	volatile int64_t t82 = -14976584LL;

	t82 = (((x453*x454)%x455)^x456);

	if (t82 != 1490LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x461 = -3349;
	volatile int32_t x462 = 27999;
	static int32_t x463 = INT32_MIN;
	int64_t x464 = -7LL;
	int64_t t83 = 3002189235169161157LL;

	t83 = (((x461*x462)%x463)^x464);

	if (t83 != 93768652LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x465 = 3U;
	static int16_t x466 = -1069;
	int64_t x467 = INT64_MIN;
	static int8_t x468 = 0;
	volatile int64_t t84 = 245708LL;

	t84 = (((x465*x466)%x467)^x468);

	if (t84 != -3207LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x469 = INT16_MIN;
	int8_t x470 = 1;
	int64_t x471 = -1LL;
	uint8_t x472 = 1U;
	volatile int64_t t85 = -460151236157362LL;

	t85 = (((x469*x470)%x471)^x472);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x473 = -1;
	uint64_t x474 = UINT64_MAX;
	volatile int64_t x475 = -1991LL;
	int64_t x476 = INT64_MIN;

	t86 = (((x473*x474)%x475)^x476);

	if (t86 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x478 = UINT16_MAX;
	int64_t x479 = INT64_MIN;
	static uint16_t x480 = UINT16_MAX;
	int64_t t87 = -273835615166LL;

	t87 = (((x477*x478)%x479)^x480);

	if (t87 != 4294967294LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x481 = UINT64_MAX;
	int16_t x484 = INT16_MIN;
	uint64_t t88 = 64680157173965LLU;

	t88 = (((x481*x482)%x483)^x484);

	if (t88 != 18446744073709520497LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x489 = INT16_MIN;
	volatile int64_t x490 = 1176057457265LL;
	int8_t x491 = INT8_MIN;
	static int64_t t89 = 3216888LL;

	t89 = (((x489*x490)%x491)^x492);

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x495 = 58;
	static volatile int64_t x496 = INT64_MIN;
	static int64_t t90 = 44167664337LL;

	t90 = (((x493*x494)%x495)^x496);

	if (t90 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x497 = 6998U;
	static volatile uint64_t x499 = 52753770090LLU;
	int32_t x500 = INT32_MAX;
	static volatile uint64_t t91 = 492167592LLU;

	t91 = (((x497*x498)%x499)^x500);

	if (t91 != 38912612353LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x503 = 66874081;
	int64_t x504 = INT64_MIN;
	int64_t t92 = -1LL;

	t92 = (((x501*x502)%x503)^x504);

	if (t92 != -9223372036847262751LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x510 = 1;
	uint64_t x512 = UINT64_MAX;
	static uint64_t t93 = 46732043LLU;

	t93 = (((x509*x510)%x511)^x512);

	if (t93 != 49LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x514 = INT16_MAX;
	uint32_t x515 = 6U;
	int32_t x516 = INT32_MIN;

	t94 = (((x513*x514)%x515)^x516);

	if (t94 != 2147483649U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x521 = 184093285;
	volatile uint64_t x522 = UINT64_MAX;
	int64_t x523 = 182990261LL;
	int32_t x524 = INT32_MAX;

	t95 = (((x521*x522)%x523)^x524);

	if (t95 != 2045960577LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x537 = 29U;
	int8_t x538 = INT8_MAX;
	static int64_t x539 = -4842134262637LL;
	uint64_t t96 = 881LLU;

	t96 = (((x537*x538)%x539)^x540);

	if (t96 != 18446744073709547932LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x541 = 69U;
	uint8_t x542 = UINT8_MAX;
	uint64_t x543 = UINT64_MAX;
	int32_t x544 = INT32_MAX;
	static uint64_t t97 = 1547LLU;

	t97 = (((x541*x542)%x543)^x544);

	if (t97 != 2147466052LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x557 = -1;
	int8_t x558 = INT8_MIN;
	int64_t x560 = 1042LL;
	volatile int64_t t98 = -96933402136980814LL;

	t98 = (((x557*x558)%x559)^x560);

	if (t98 != 1170LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x561 = 497601U;
	uint8_t x562 = 3U;
	int32_t x563 = -1;
	static int64_t x564 = INT64_MIN;
	int64_t t99 = -1253829353721717762LL;

	t99 = (((x561*x562)%x563)^x564);

	if (t99 != -9223372036853283005LL) { NG(); } else { ; }
	
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

