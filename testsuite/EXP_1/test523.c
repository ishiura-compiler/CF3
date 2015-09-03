#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = 2809U;
int16_t x9 = INT16_MIN;
int32_t x11 = -1;
static int64_t x13 = -211705908571284LL;
static volatile int32_t x19 = 20;
int16_t x25 = -440;
uint8_t x29 = 0U;
int32_t x32 = 4;
volatile uint64_t x46 = 6103LLU;
int16_t x47 = INT16_MIN;
uint8_t x54 = UINT8_MAX;
int16_t x67 = -1;
static uint32_t x68 = 12627992U;
uint32_t x77 = UINT32_MAX;
uint64_t x78 = UINT64_MAX;
volatile int16_t x83 = 25;
int64_t x87 = -1LL;
int32_t x90 = INT32_MIN;
uint16_t x93 = 9U;
int32_t x98 = INT32_MAX;
volatile uint64_t x99 = 7884918LLU;
uint16_t x108 = 7U;
uint32_t x115 = UINT32_MAX;
uint32_t t21 = 43939U;
int64_t x117 = INT64_MAX;
static int32_t x120 = 340;
volatile uint64_t x135 = 55111LLU;
int64_t x136 = -1LL;
volatile int16_t x137 = INT16_MAX;
int32_t x146 = -1;
int8_t x148 = -1;
volatile int64_t t26 = -2162450380567LL;
int8_t x155 = 0;
static int32_t x159 = INT32_MIN;
uint64_t t28 = 200391719260LLU;
volatile int8_t x164 = -1;
volatile int8_t x171 = INT8_MIN;
uint32_t x187 = 40153U;
uint32_t x189 = 173U;
uint32_t t34 = 462830U;
volatile int64_t t35 = -366LL;
int8_t x206 = INT8_MAX;
static int64_t x211 = -1LL;
int16_t x212 = INT16_MIN;
volatile int64_t t37 = -68636670307352LL;
volatile int8_t x216 = INT8_MAX;
static uint64_t t40 = 25469571681094891LLU;
volatile int64_t t42 = INT64_MIN;
int8_t x249 = INT8_MIN;
int32_t t44 = 19011242;
volatile uint32_t t45 = 4U;
uint8_t x265 = 4U;
uint32_t x266 = 104499100U;
static volatile uint32_t t46 = 2U;
volatile int8_t x270 = -1;
volatile uint32_t t47 = 621268U;
static int64_t x280 = 1480725093860503602LL;
uint32_t x281 = 8277473U;
uint64_t x291 = 6712404371092078LLU;
uint8_t x296 = UINT8_MAX;
uint32_t t52 = 7U;
int32_t x307 = -1;
volatile uint64_t x311 = UINT64_MAX;
static uint64_t t54 = 684274LLU;
int16_t x316 = -98;
int8_t x320 = 2;
int64_t x322 = -44510138668LL;
volatile uint64_t t57 = 5253LLU;
int16_t x325 = 1;
int16_t x328 = -7;
static int64_t x336 = INT64_MIN;
uint64_t t61 = 7705LLU;
int8_t x346 = -26;
static volatile int64_t x359 = -2060959045505567LL;
uint16_t x360 = 1736U;
int64_t t65 = 1LL;
int16_t x363 = -1;
static volatile uint16_t x365 = 1U;
uint16_t x379 = 1U;
int64_t x396 = -1LL;
volatile int32_t x398 = -1;
int64_t x415 = -1LL;
uint8_t x418 = 14U;
int8_t x421 = -1;
volatile int32_t x430 = -1;
uint64_t t79 = 299537586LLU;
uint64_t x437 = UINT64_MAX;
uint32_t x441 = 7832280U;
int32_t x445 = -1;
volatile int64_t x446 = INT64_MIN;
int64_t x449 = -503457104033LL;
int16_t x471 = -14860;
static uint32_t x473 = 49U;
uint64_t t90 = 4373453024930LLU;
static int32_t x490 = -1;
int16_t x492 = 194;
static uint16_t x494 = 186U;
uint32_t x500 = 948970663U;
uint64_t t93 = 548587209266LLU;
volatile uint8_t x511 = 1U;
int8_t x516 = INT8_MIN;
uint32_t t96 = 232U;
static uint32_t x521 = 429U;
static volatile uint64_t t99 = 1861614782529442875LLU;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	static int64_t x2 = INT64_MIN;
	uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = 2003045LL;

	t0 = (((x1/x2)-x3)*x4);

	if (t0 != -716295LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static uint32_t x6 = 102U;
	int16_t x7 = INT16_MIN;
	int64_t x8 = -1LL;
	int64_t t1 = -479639528LL;

	t1 = (((x5/x6)-x7)*x8);

	if (t1 != -42140290LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	volatile int8_t x12 = 30;
	volatile int32_t t2 = 1;

	t2 = (((x9/x10)-x11)*x12);

	if (t2 != 30) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = UINT8_MAX;
	volatile int8_t x15 = -1;
	uint64_t x16 = 1718909LLU;
	uint64_t t3 = 73571LLU;

	t3 = (((x13/x14)-x15)*x16);

	if (t3 != 17019672734117975734LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static int32_t x18 = -44902851;
	int64_t x20 = INT64_MIN;
	volatile uint64_t t4 = 310LLU;

	t4 = (((x17/x18)-x19)*x20);

	if (t4 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 390109892391344575LLU;
	volatile int64_t x22 = INT64_MIN;
	volatile int8_t x23 = 6;
	static uint16_t x24 = 2803U;
	uint64_t t5 = 3844872LLU;

	t5 = (((x21/x22)-x23)*x24);

	if (t5 != 18446744073709534798LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x26 = INT64_MIN;
	volatile uint16_t x27 = 26U;
	uint32_t x28 = UINT32_MAX;
	volatile int64_t t6 = 163648973212947291LL;

	t6 = (((x25/x26)-x27)*x28);

	if (t6 != -111669149670LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 1637U;
	int8_t x31 = 1;
	static int32_t t7 = 647170095;

	t7 = (((x29/x30)-x31)*x32);

	if (t7 != -4) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int64_t x34 = -26489729442LL;
	uint8_t x35 = 79U;
	int16_t x36 = INT16_MAX;
	static volatile int64_t t8 = 3453282891772LL;

	t8 = (((x33/x34)-x35)*x36);

	if (t8 != -2588593LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -13336;
	volatile uint64_t x38 = 51019LLU;
	int16_t x39 = 22;
	int16_t x40 = -1;
	volatile uint64_t t9 = 2LLU;

	t9 = (((x37/x38)-x39)*x40);

	if (t9 != 18446382507546480831LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int32_t x48 = -1;
	uint64_t t10 = 19495LLU;

	t10 = (((x45/x46)-x47)*x48);

	if (t10 != 18443721503813777483LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x53 = 22481U;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = 3;
	uint32_t t11 = 969U;

	t11 = (((x53/x54)-x55)*x56);

	if (t11 != 98568U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MAX;
	uint16_t x66 = 1U;
	volatile uint32_t t12 = 1019973513U;

	t12 = (((x65/x66)-x67)*x68);

	if (t12 != 1616382976U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x79 = 3U;
	int8_t x80 = INT8_MIN;
	uint64_t t13 = 50LLU;

	t13 = (((x77/x78)-x79)*x80);

	if (t13 != 384LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 14328051161594LLU;
	int16_t x84 = 0;
	static uint64_t t14 = 83LLU;

	t14 = (((x81/x82)-x83)*x84);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = -1;
	static int8_t x86 = INT8_MAX;
	volatile uint64_t x88 = 217773LLU;
	static uint64_t t15 = 103172781LLU;

	t15 = (((x85/x86)-x87)*x88);

	if (t15 != 217773LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = -1;
	uint8_t x91 = 3U;
	int32_t x92 = 530;
	int32_t t16 = 395;

	t16 = (((x89/x90)-x91)*x92);

	if (t16 != -1590) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x94 = -4;
	static uint8_t x95 = 3U;
	uint64_t x96 = UINT64_MAX;
	uint64_t t17 = 1083987278703LLU;

	t17 = (((x93/x94)-x95)*x96);

	if (t17 != 5LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = 0;
	uint8_t x100 = 7U;
	volatile uint64_t t18 = 549671751170777LLU;

	t18 = (((x97/x98)-x99)*x100);

	if (t18 != 18446744073654357190LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 77153U;
	int8_t x102 = INT8_MIN;
	uint8_t x103 = UINT8_MAX;
	volatile uint64_t x104 = UINT64_MAX;
	static volatile uint64_t t19 = 37245208LLU;

	t19 = (((x101/x102)-x103)*x104);

	if (t19 != 18446744069414584575LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x105 = 8792064U;
	uint32_t x106 = 812954539U;
	static uint8_t x107 = 20U;
	uint32_t t20 = 12U;

	t20 = (((x105/x106)-x107)*x108);

	if (t20 != 4294967156U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x113 = -1;
	volatile int16_t x114 = INT16_MIN;
	volatile int32_t x116 = INT32_MAX;

	t21 = (((x113/x114)-x115)*x116);

	if (t21 != 2147483647U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x118 = INT32_MIN;
	int64_t x119 = 2864780958LL;
	int64_t t22 = -211568044LL;

	t22 = (((x117/x118)-x119)*x120);

	if (t22 != -2434314406020LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x121 = UINT64_MAX;
	static int32_t x122 = -1;
	volatile int8_t x123 = INT8_MIN;
	static volatile int16_t x124 = INT16_MIN;
	volatile uint64_t t23 = 7062178579861043LLU;

	t23 = (((x121/x122)-x123)*x124);

	if (t23 != 18446744073705324544LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = -1;
	volatile uint64_t t24 = 3987761LLU;

	t24 = (((x133/x134)-x135)*x136);

	if (t24 != 22343LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x138 = INT64_MIN;
	volatile int8_t x139 = -29;
	int8_t x140 = INT8_MIN;
	volatile int64_t t25 = 52702LL;

	t25 = (((x137/x138)-x139)*x140);

	if (t25 != -3712LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = 94;
	int64_t x147 = INT64_MIN;

	t26 = (((x145/x146)-x147)*x148);

	if (t26 != -9223372036854775714LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = 0;
	static uint8_t x154 = 7U;
	uint16_t x156 = 4U;
	volatile int32_t t27 = 9420;

	t27 = (((x153/x154)-x155)*x156);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x157 = 7934357303733851024LLU;
	int32_t x158 = 162976115;
	int32_t x160 = 3798633;

	t28 = (((x157/x158)-x159)*x160);

	if (t28 != 193090806666981435LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x161 = UINT64_MAX;
	int8_t x162 = -1;
	int8_t x163 = INT8_MIN;
	static volatile uint64_t t29 = 896986996877441200LLU;

	t29 = (((x161/x162)-x163)*x164);

	if (t29 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x165 = 6583606;
	static uint32_t x166 = 4561U;
	int32_t x167 = -1;
	static int8_t x168 = INT8_MIN;
	uint32_t t30 = 3U;

	t30 = (((x165/x166)-x167)*x168);

	if (t30 != 4294782464U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x169 = -1;
	static int8_t x170 = INT8_MIN;
	static volatile uint64_t x172 = UINT64_MAX;
	uint64_t t31 = 17690646668004LLU;

	t31 = (((x169/x170)-x171)*x172);

	if (t31 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x181 = INT64_MAX;
	static volatile int16_t x182 = INT16_MAX;
	uint64_t x183 = 4100491902630089LLU;
	uint16_t x184 = 254U;
	uint64_t t32 = 132536707625LLU;

	t32 = (((x181/x182)-x183)*x184);

	if (t32 != 17476715956435988610LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x185 = 1535591958LLU;
	volatile uint32_t x186 = 8U;
	static int64_t x188 = INT64_MIN;
	uint64_t t33 = 130LLU;

	t33 = (((x185/x186)-x187)*x188);

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x190 = INT32_MIN;
	int8_t x191 = -12;
	volatile uint8_t x192 = 7U;

	t34 = (((x189/x190)-x191)*x192);

	if (t34 != 84U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = -1;
	int32_t x194 = INT32_MIN;
	static uint8_t x195 = 32U;
	volatile int64_t x196 = -3659775948278862LL;

	t35 = (((x193/x194)-x195)*x196);

	if (t35 != 117112830344923584LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x205 = INT8_MAX;
	static int16_t x207 = INT16_MAX;
	static int32_t x208 = -150;
	volatile int32_t t36 = -4125283;

	t36 = (((x205/x206)-x207)*x208);

	if (t36 != 4914900) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x209 = 25636084U;
	volatile int64_t x210 = -1LL;

	t37 = (((x209/x210)-x211)*x212);

	if (t37 != 840043167744LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x213 = -39667286;
	uint64_t x214 = UINT64_MAX;
	int64_t x215 = INT64_MIN;
	static volatile uint64_t t38 = 17720691012900986LLU;

	t38 = (((x213/x214)-x215)*x216);

	if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = INT64_MAX;
	uint32_t x218 = UINT32_MAX;
	volatile uint8_t x219 = 52U;
	volatile int8_t x220 = INT8_MIN;
	volatile int64_t t39 = 2397275488572344676LL;

	t39 = (((x217/x218)-x219)*x220);

	if (t39 != -274877900288LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x225 = INT16_MIN;
	volatile uint64_t x226 = 133LLU;
	volatile int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;

	t40 = (((x225/x226)-x227)*x228);

	if (t40 != 17614560130538814831LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x237 = 45U;
	static int8_t x238 = -62;
	int8_t x239 = INT8_MIN;
	volatile int32_t x240 = -1;
	volatile int32_t t41 = -83;

	t41 = (((x237/x238)-x239)*x240);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MAX;
	static int32_t x243 = -1;
	int64_t x244 = INT64_MIN;

	t42 = (((x241/x242)-x243)*x244);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x245 = INT64_MIN;
	static uint64_t x246 = UINT64_MAX;
	uint8_t x247 = 3U;
	int64_t x248 = -1LL;
	uint64_t t43 = 566399019LLU;

	t43 = (((x245/x246)-x247)*x248);

	if (t43 != 3LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x250 = -169;
	int8_t x251 = INT8_MAX;
	static int16_t x252 = INT16_MIN;

	t44 = (((x249/x250)-x251)*x252);

	if (t44 != 4161536) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x257 = 96U;
	static uint32_t x258 = UINT32_MAX;
	static uint16_t x259 = 1849U;
	volatile int16_t x260 = INT16_MAX;

	t45 = (((x257/x258)-x259)*x260);

	if (t45 != 4234381113U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x267 = -1;
	static int8_t x268 = INT8_MIN;

	t46 = (((x265/x266)-x267)*x268);

	if (t46 != 4294967168U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x269 = INT16_MIN;
	uint32_t x271 = 446629U;
	volatile int8_t x272 = -1;

	t47 = (((x269/x270)-x271)*x272);

	if (t47 != 413861U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x277 = -35;
	static uint8_t x278 = UINT8_MAX;
	uint64_t x279 = 333794483949902845LLU;
	volatile uint64_t t48 = 1410338LLU;

	t48 = (((x277/x278)-x279)*x280);

	if (t48 != 9384432417428691094LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x282 = UINT8_MAX;
	static volatile uint16_t x283 = 1U;
	static int32_t x284 = -1;
	volatile uint32_t t49 = 1498U;

	t49 = (((x281/x282)-x283)*x284);

	if (t49 != 4294934837U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x285 = 11U;
	int64_t x286 = -1LL;
	uint8_t x287 = 1U;
	int64_t x288 = 1312LL;
	volatile int64_t t50 = -547365842092LL;

	t50 = (((x285/x286)-x287)*x288);

	if (t50 != -15744LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x289 = 5U;
	static uint16_t x290 = 98U;
	volatile uint8_t x292 = UINT8_MAX;
	uint64_t t51 = 1133609477699906803LLU;

	t51 = (((x289/x290)-x291)*x292);

	if (t51 != 16735080959081071726LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x293 = INT32_MIN;
	int32_t x294 = -620;
	uint32_t x295 = UINT32_MAX;

	t52 = (((x293/x294)-x295)*x296);

	if (t52 != 883239420U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x305 = -1177664;
	int32_t x306 = -1;
	uint64_t x308 = UINT64_MAX;
	uint64_t t53 = 646655887885844985LLU;

	t53 = (((x305/x306)-x307)*x308);

	if (t53 != 18446744073708373951LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x309 = UINT64_MAX;
	uint64_t x310 = 515498684LLU;
	static int32_t x312 = -29894666;

	t54 = (((x309/x310)-x311)*x312);

	if (t54 != 17376985275111834258LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x313 = INT16_MIN;
	uint8_t x314 = 6U;
	int8_t x315 = INT8_MIN;
	static volatile int32_t t55 = -1;

	t55 = (((x313/x314)-x315)*x316);

	if (t55 != 522634) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x317 = 21703U;
	int64_t x318 = 14683018046942LL;
	static uint64_t x319 = 665446LLU;
	static volatile uint64_t t56 = 1488109790LLU;

	t56 = (((x317/x318)-x319)*x320);

	if (t56 != 18446744073708220724LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x321 = 617829701U;
	static uint64_t x323 = 11862182458561385LLU;
	int8_t x324 = INT8_MIN;

	t57 = (((x321/x322)-x323)*x324);

	if (t57 != 1518359354695857280LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x326 = INT32_MIN;
	uint8_t x327 = UINT8_MAX;
	int32_t t58 = 208317;

	t58 = (((x325/x326)-x327)*x328);

	if (t58 != 1785) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x329 = 3U;
	uint16_t x330 = 101U;
	volatile uint64_t x331 = 98588086245LLU;
	int32_t x332 = INT32_MIN;
	static uint64_t t59 = 3366499693042699358LLU;

	t59 = (((x329/x330)-x331)*x332);

	if (t59 != 8802118287946153984LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x333 = 1459526014LLU;
	volatile int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	uint64_t t60 = 9379775009964770LLU;

	t60 = (((x333/x334)-x335)*x336);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x341 = 94057607545185LLU;
	int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MIN;
	volatile int32_t x344 = -121622172;

	t61 = (((x341/x342)-x343)*x344);

	if (t61 != 18185562448105308160LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x345 = 152;
	int64_t x347 = 151970629559928421LL;
	volatile int16_t x348 = -1;
	int64_t t62 = -1702238295021512514LL;

	t62 = (((x345/x346)-x347)*x348);

	if (t62 != 151970629559928426LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MAX;
	uint8_t x351 = UINT8_MAX;
	static uint64_t x352 = 16408300LLU;
	static uint64_t t63 = 3591LLU;

	t63 = (((x349/x350)-x351)*x352);

	if (t63 != 18446744069525435116LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = INT64_MIN;
	volatile int16_t x355 = -1079;
	int8_t x356 = 1;
	static int64_t t64 = 790LL;

	t64 = (((x353/x354)-x355)*x356);

	if (t64 != 1079LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x357 = -1;
	int16_t x358 = -6;

	t65 = (((x357/x358)-x359)*x360);

	if (t65 != 3577824902997664312LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x361 = UINT64_MAX;
	int8_t x362 = -33;
	int32_t x364 = INT32_MIN;
	uint64_t t66 = 5717LLU;

	t66 = (((x361/x362)-x363)*x364);

	if (t66 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x366 = 2485LLU;
	volatile uint32_t x367 = 22983815U;
	uint64_t x368 = 10549LLU;
	uint64_t t67 = 978490856827997355LLU;

	t67 = (((x365/x366)-x367)*x368);

	if (t67 != 18446743831253287181LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x369 = 0U;
	static uint32_t x370 = 1U;
	uint32_t x371 = 6552098U;
	volatile uint32_t x372 = 1927749000U;
	static volatile uint32_t t68 = 3766925U;

	t68 = (((x369/x370)-x371)*x372);

	if (t68 != 2665432048U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = 105;
	static int16_t x378 = 5;
	uint32_t x380 = 401U;
	uint32_t t69 = 12505U;

	t69 = (((x377/x378)-x379)*x380);

	if (t69 != 8020U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = -787;
	int64_t x391 = INT64_MIN;
	volatile uint32_t x392 = 1035520002U;
	uint64_t t70 = 57464684400955142LLU;

	t70 = (((x389/x390)-x391)*x392);

	if (t70 != 1035520002LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x393 = UINT8_MAX;
	int8_t x394 = INT8_MIN;
	static int64_t x395 = -14LL;
	volatile int64_t t71 = 34056482727LL;

	t71 = (((x393/x394)-x395)*x396);

	if (t71 != -13LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x397 = -138541191;
	int16_t x399 = INT16_MAX;
	static int64_t x400 = -1LL;
	volatile int64_t t72 = 6534318LL;

	t72 = (((x397/x398)-x399)*x400);

	if (t72 != -138508424LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x409 = -1LL;
	int16_t x410 = 1;
	int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MIN;
	int64_t t73 = -2340943425499LL;

	t73 = (((x409/x410)-x411)*x412);

	if (t73 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x413 = INT8_MAX;
	static int16_t x414 = 1262;
	int32_t x416 = 264073732;
	static volatile int64_t t74 = -232402073LL;

	t74 = (((x413/x414)-x415)*x416);

	if (t74 != 264073732LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x417 = UINT64_MAX;
	static volatile int16_t x419 = INT16_MAX;
	int8_t x420 = INT8_MIN;
	static uint64_t t75 = 31236LLU;

	t75 = (((x417/x418)-x419)*x420);

	if (t75 != 15811494920326667008LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x422 = INT64_MIN;
	int16_t x423 = -1;
	static int16_t x424 = INT16_MIN;
	int64_t t76 = 0LL;

	t76 = (((x421/x422)-x423)*x424);

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = INT8_MIN;
	int32_t x426 = INT32_MAX;
	int32_t x427 = -4361316;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t77 = 486166356;

	t77 = (((x425/x426)-x427)*x428);

	if (t77 != 1112135580) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x429 = -1099406948005632LL;
	uint8_t x431 = 1U;
	static volatile int32_t x432 = 0;
	volatile int64_t t78 = -8433371543412LL;

	t78 = (((x429/x430)-x431)*x432);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x433 = INT32_MIN;
	uint64_t x434 = 72LLU;
	uint8_t x435 = UINT8_MAX;
	int32_t x436 = INT32_MIN;

	t79 = (((x433/x434)-x435)*x436);

	if (t79 != 4163328204087492608LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x438 = 53U;
	volatile uint16_t x439 = 1U;
	int8_t x440 = INT8_MAX;
	static volatile uint64_t t80 = 62812052120LLU;

	t80 = (((x437/x438)-x439)*x440);

	if (t80 != 7309087274488690100LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x442 = -514;
	int32_t x443 = -46961345;
	int8_t x444 = 6;
	uint32_t t81 = 113U;

	t81 = (((x441/x442)-x443)*x444);

	if (t81 != 281768070U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x447 = INT32_MAX;
	uint8_t x448 = UINT8_MAX;
	static volatile int64_t t82 = -3712LL;

	t82 = (((x445/x446)-x447)*x448);

	if (t82 != -547608329985LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x450 = UINT16_MAX;
	volatile int8_t x451 = INT8_MIN;
	int64_t x452 = -1LL;
	int64_t t83 = -168449987LL;

	t83 = (((x449/x450)-x451)*x452);

	if (t83 != 7682134LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x453 = 4561931;
	volatile uint64_t x454 = 16554657LLU;
	int64_t x455 = -1LL;
	volatile int64_t x456 = 1322127LL;
	static uint64_t t84 = 6LLU;

	t84 = (((x453/x454)-x455)*x456);

	if (t84 != 1322127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x461 = 33U;
	uint32_t x462 = 23995550U;
	int8_t x463 = 1;
	int8_t x464 = INT8_MIN;
	uint32_t t85 = 0U;

	t85 = (((x461/x462)-x463)*x464);

	if (t85 != 128U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x469 = INT64_MIN;
	static int8_t x470 = INT8_MIN;
	int16_t x472 = -82;
	volatile int64_t t86 = -130641889LL;

	t86 = (((x469/x470)-x471)*x472);

	if (t86 != -5908722711111309272LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x474 = -1LL;
	volatile uint16_t x475 = UINT16_MAX;
	uint64_t x476 = 64044454017104365LLU;
	volatile uint64_t t87 = 56297947762584478LLU;

	t87 = (((x473/x474)-x475)*x476);

	if (t87 != 5566176548005094288LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x477 = 3LLU;
	volatile int64_t x478 = -1LL;
	volatile uint32_t x479 = 2054961U;
	static int32_t x480 = INT32_MAX;
	uint64_t t88 = 8691623520056LLU;

	t88 = (((x477/x478)-x479)*x480);

	if (t88 != 18442331078566828849LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x481 = -1;
	static int32_t x482 = -1;
	int64_t x483 = 7719448325495LL;
	int16_t x484 = 1708;
	volatile int64_t t89 = 27325855416LL;

	t89 = (((x481/x482)-x483)*x484);

	if (t89 != -13184817739943752LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x485 = INT64_MIN;
	static int8_t x486 = INT8_MIN;
	uint64_t x487 = 82LLU;
	uint16_t x488 = 38U;

	t90 = (((x485/x486)-x487)*x488);

	if (t90 != 2738188573441258452LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x489 = INT32_MAX;
	uint32_t x491 = 485168U;
	uint32_t t91 = 5192U;

	t91 = (((x489/x490)-x491)*x492);

	if (t91 != 4200844898U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x493 = 329U;
	static int16_t x495 = INT16_MIN;
	uint32_t x496 = UINT32_MAX;
	volatile uint32_t t92 = 241U;

	t92 = (((x493/x494)-x495)*x496);

	if (t92 != 4294934527U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x497 = 251110946U;
	static int32_t x498 = INT32_MAX;
	uint64_t x499 = UINT64_MAX;

	t93 = (((x497/x498)-x499)*x500);

	if (t93 != 948970663LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x505 = 34;
	volatile int16_t x506 = INT16_MIN;
	static uint32_t x507 = UINT32_MAX;
	int16_t x508 = -1;
	static uint32_t t94 = UINT32_MAX;

	t94 = (((x505/x506)-x507)*x508);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x509 = INT32_MIN;
	int8_t x510 = INT8_MAX;
	uint32_t x512 = 117U;
	static uint32_t t95 = 646U;

	t95 = (((x509/x510)-x511)*x512);

	if (t95 != 2316576739U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x513 = 935714014U;
	int16_t x514 = -238;
	static int32_t x515 = 806;

	t96 = (((x513/x514)-x515)*x516);

	if (t96 != 103168U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x522 = 3U;
	uint64_t x523 = UINT64_MAX;
	int8_t x524 = 0;
	uint64_t t97 = 13672095970512LLU;

	t97 = (((x521/x522)-x523)*x524);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x525 = UINT64_MAX;
	int16_t x526 = -1004;
	int32_t x527 = -1;
	int16_t x528 = 8607;
	volatile uint64_t t98 = 44591626518LLU;

	t98 = (((x525/x526)-x527)*x528);

	if (t98 != 17214LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x529 = -1LL;
	int16_t x530 = INT16_MIN;
	uint16_t x531 = UINT16_MAX;
	uint64_t x532 = UINT64_MAX;

	t99 = (((x529/x530)-x531)*x532);

	if (t99 != 65535LLU) { NG(); } else { ; }
	
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

