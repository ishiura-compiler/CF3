#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = -1;
static int16_t x30 = 2;
int32_t x36 = -352;
int32_t x39 = INT32_MIN;
volatile uint32_t t7 = 1U;
int32_t x43 = -408999057;
int32_t x50 = -10;
static uint64_t t9 = 3LLU;
static int16_t x88 = 2;
volatile uint32_t t13 = 31U;
int8_t x90 = INT8_MAX;
int64_t x92 = INT64_MAX;
int16_t x107 = -25;
uint8_t x108 = UINT8_MAX;
int32_t t17 = 1;
int32_t x110 = 2573541;
int32_t x116 = -248271;
int64_t x120 = INT64_MIN;
uint64_t t20 = 6140305747826LLU;
int16_t x123 = -1;
static volatile int8_t x127 = -1;
volatile int16_t x128 = INT16_MAX;
static uint32_t x148 = 32116738U;
static volatile uint64_t x153 = 5032027977535LLU;
int8_t x154 = -1;
static int32_t x163 = -1;
int64_t x164 = -1LL;
int32_t x166 = 5479985;
int32_t x170 = -1;
static int32_t x172 = INT32_MIN;
static int8_t x182 = -1;
static int32_t x191 = 8;
int16_t x194 = INT16_MAX;
int32_t x195 = -1;
static volatile uint32_t x205 = UINT32_MAX;
volatile uint64_t t36 = 1592252LLU;
int8_t x220 = INT8_MAX;
volatile uint32_t t37 = 4517078U;
int8_t x233 = INT8_MAX;
static int64_t x235 = -1LL;
int16_t x237 = -1;
static volatile int64_t x240 = -1067322636535999LL;
uint64_t t41 = 1463376484092224LLU;
uint32_t x241 = 3U;
int16_t x250 = INT16_MAX;
static int32_t t43 = 24;
int16_t x254 = -29;
uint16_t x263 = 5816U;
int64_t t46 = -149508446892630LL;
int32_t x285 = INT32_MAX;
static int8_t x288 = -37;
volatile uint64_t t47 = 818035125LLU;
volatile int32_t x290 = -938;
int32_t x294 = -1;
uint16_t x302 = 1U;
int64_t x303 = -1LL;
uint64_t t51 = 451542058LLU;
uint8_t x305 = 106U;
int8_t x306 = -1;
int16_t x314 = INT16_MIN;
int8_t x320 = INT8_MIN;
static int8_t x322 = 7;
uint64_t x326 = 190845680LLU;
static uint64_t t57 = 27926017LLU;
int64_t t59 = 1LL;
volatile int64_t t62 = 74LL;
volatile int32_t x362 = -1;
uint16_t x364 = 4U;
int64_t x369 = 1LL;
volatile int32_t t66 = -3;
uint64_t x382 = 6LLU;
volatile uint64_t t68 = 36463187LLU;
volatile int32_t x403 = -1;
uint64_t x429 = UINT64_MAX;
volatile uint64_t t76 = 119925534345LLU;
int8_t x444 = INT8_MIN;
int16_t x452 = INT16_MAX;
volatile int16_t x466 = INT16_MIN;
uint64_t x467 = 135423LLU;
static uint64_t t82 = 3271391691848LLU;
volatile uint32_t x477 = 62952158U;
int8_t x494 = INT8_MIN;
volatile int8_t x495 = INT8_MAX;
static int32_t x500 = INT32_MIN;
volatile uint32_t t86 = 1U;
static int16_t x503 = INT16_MAX;
volatile uint64_t t87 = 96109735774LLU;
int8_t x514 = -28;
static volatile uint16_t x515 = UINT16_MAX;
uint8_t x516 = UINT8_MAX;
int16_t x521 = INT16_MIN;
uint16_t x523 = 2056U;
int32_t x524 = 128;
volatile uint8_t x538 = UINT8_MAX;
int8_t x540 = -1;
int32_t t93 = 182391;
volatile uint64_t t94 = 84433538915LLU;
int8_t x552 = INT8_MAX;
uint32_t x554 = 632691U;
int8_t x556 = INT8_MIN;
static volatile int64_t x560 = 1032020342LL;
int64_t t97 = -54037942861489LL;
static int64_t x561 = INT64_MIN;
static uint32_t x562 = UINT32_MAX;
int64_t t98 = -2070685795205232LL;


void f0(void) {
	uint64_t x1 = 692854375443306518LLU;
	int64_t x2 = -1577069256LL;
	int64_t x3 = -1LL;
	volatile int16_t x4 = -1;
	volatile uint64_t t0 = 6LLU;

	t0 = ((x1*(x2^x3))-x4);

	if (t0 != 6854574591625581851LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -498499LL;
	volatile uint64_t x10 = 65013LLU;
	int8_t x11 = INT8_MIN;
	static volatile uint64_t x12 = 671472366LLU;
	volatile uint64_t t1 = 59273851258939322LLU;

	t1 = ((x9*(x10^x11))-x12);

	if (t1 != 31684602227LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	static volatile int16_t x14 = INT16_MAX;
	uint64_t x15 = 118630LLU;
	static uint64_t t2 = 1595763483965322105LLU;

	t2 = ((x13*(x14^x15))-x16);

	if (t2 != 18446744073709440872LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = -1;
	uint64_t x19 = UINT64_MAX;
	static int32_t x20 = -292787591;
	volatile uint64_t t3 = 90851LLU;

	t3 = ((x17*(x18^x19))-x20);

	if (t3 != 292787591LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	volatile int32_t x26 = -1;
	int8_t x27 = INT8_MAX;
	volatile int8_t x28 = INT8_MIN;
	static volatile int64_t t4 = 129196130339725LL;

	t4 = ((x25*(x26^x27))-x28);

	if (t4 != 256LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x29 = 23878665U;
	static int8_t x31 = -7;
	uint64_t x32 = 317382079LLU;
	volatile uint64_t t5 = 20198432945LLU;

	t5 = ((x29*(x30^x31))-x32);

	if (t5 != 3858191892LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 1U;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MAX;
	uint32_t t6 = 4923985U;

	t6 = ((x33*(x34^x35))-x36);

	if (t6 != 2147484127U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	static uint16_t x38 = 3928U;
	int16_t x40 = INT16_MIN;

	t7 = ((x37*(x38^x39))-x40);

	if (t7 != 2147512488U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	static int16_t x42 = -1;
	static int16_t x44 = -34;
	volatile int32_t t8 = 232585818;

	t8 = ((x41*(x42^x43))-x44);

	if (t8 != -408999022) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x49 = UINT64_MAX;
	volatile uint16_t x51 = UINT16_MAX;
	int8_t x52 = -14;

	t9 = ((x49*(x50^x51))-x52);

	if (t9 != 65541LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MAX;
	int64_t x54 = -1LL;
	int16_t x55 = -1;
	int32_t x56 = INT32_MAX;
	volatile int64_t t10 = 20LL;

	t10 = ((x53*(x54^x55))-x56);

	if (t10 != -2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	static int8_t x58 = INT8_MIN;
	volatile uint32_t x59 = 1404379402U;
	volatile uint8_t x60 = 36U;
	uint32_t t11 = 899701U;

	t11 = ((x57*(x58^x59))-x60);

	if (t11 != 3666918108U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = 12;
	int32_t x71 = -1;
	static int32_t x72 = -1;
	volatile int32_t t12 = 5730638;

	t12 = ((x69*(x70^x71))-x72);

	if (t12 != 1665) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = 249;
	uint32_t x86 = UINT32_MAX;
	uint32_t x87 = UINT32_MAX;

	t13 = ((x85*(x86^x87))-x88);

	if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x89 = -10290;
	int64_t x91 = -9577133561LL;
	int64_t t14 = -427291969LL;

	t14 = ((x89*(x90^x91))-x92);

	if (t14 != -9223273488151595887LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = -1;
	static volatile int32_t x94 = 47;
	static int16_t x95 = INT16_MAX;
	int64_t x96 = INT64_MIN;
	int64_t t15 = -6662242LL;

	t15 = ((x93*(x94^x95))-x96);

	if (t15 != 9223372036854743088LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x101 = 1U;
	int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MAX;
	static uint8_t x104 = 80U;
	uint32_t t16 = 6U;

	t16 = ((x101*(x102^x103))-x104);

	if (t16 != 4294967215U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;

	t17 = ((x105*(x106^x107))-x108);

	if (t17 != 12826) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x109 = INT8_MAX;
	static int32_t x111 = 59;
	int64_t x112 = INT64_MAX;
	int64_t t18 = 837LL;

	t18 = ((x109*(x110^x111))-x112);

	if (t18 != -9223372036527936989LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x113 = 1LLU;
	uint64_t x114 = 38164440LLU;
	static volatile int64_t x115 = INT64_MAX;
	volatile uint64_t t19 = 194237889900LLU;

	t19 = ((x113*(x114^x115))-x116);

	if (t19 != 9223372036816859638LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x117 = 3711852;
	volatile uint64_t x118 = UINT64_MAX;
	uint64_t x119 = 99629933510667858LLU;

	t20 = ((x117*(x118^x119))-x120);

	if (t20 != 17980600326431808508LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	int16_t x124 = 22;
	volatile int32_t t21 = -63777725;

	t21 = ((x121*(x122^x123))-x124);

	if (t21 != 234) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x125 = 7423U;
	int64_t x126 = 38662294LL;
	volatile int64_t t22 = 106819461942190203LL;

	t22 = ((x125*(x126^x127))-x128);

	if (t22 != -286990248552LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x129 = 3U;
	static int32_t x130 = INT32_MIN;
	volatile int64_t x131 = 30762040899246614LL;
	int8_t x132 = 0;
	volatile int64_t t23 = -1804614009359LL;

	t23 = ((x129*(x130^x131))-x132);

	if (t23 != -92286121855627710LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = -1;
	static volatile int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MIN;
	uint8_t x144 = UINT8_MAX;
	static int64_t t24 = -21272808140339LL;

	t24 = ((x141*(x142^x143))-x144);

	if (t24 != -9223372034707292415LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MIN;
	uint32_t x147 = 128511U;
	volatile uint32_t t25 = 0U;

	t25 = ((x145*(x146^x147))-x148);

	if (t25 != 4262951423U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x155 = 3;
	int64_t x156 = -82446LL;
	volatile uint64_t t26 = 1345014773316025LLU;

	t26 = ((x153*(x154^x155))-x156);

	if (t26 != 18446723945597723922LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x161 = -446;
	volatile uint8_t x162 = UINT8_MAX;
	volatile int64_t t27 = -12688127LL;

	t27 = ((x161*(x162^x163))-x164);

	if (t27 != 114177LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x167 = 1804821048U;
	static int32_t x168 = -1;
	static volatile uint32_t t28 = 1727579645U;

	t28 = ((x165*(x166^x167))-x168);

	if (t28 != 2147483649U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x169 = 1LLU;
	int64_t x171 = INT64_MAX;
	uint64_t t29 = 82062054LLU;

	t29 = ((x169*(x170^x171))-x172);

	if (t29 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x177 = -1LL;
	uint64_t x178 = 402770686024989339LLU;
	int64_t x179 = 344436810LL;
	static volatile uint8_t x180 = 0U;
	volatile uint64_t t30 = 511921147453503LLU;

	t30 = ((x177*(x178^x179))-x180);

	if (t30 != 18043973387877741871LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x181 = 0U;
	int16_t x183 = INT16_MIN;
	static int16_t x184 = 5;
	int32_t t31 = -4;

	t31 = ((x181*(x182^x183))-x184);

	if (t31 != -5) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x186 = UINT16_MAX;
	uint16_t x187 = UINT16_MAX;
	volatile uint16_t x188 = 2603U;
	static volatile int32_t t32 = 271;

	t32 = ((x185*(x186^x187))-x188);

	if (t32 != -2603) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x189 = UINT32_MAX;
	uint32_t x190 = UINT32_MAX;
	int8_t x192 = -1;
	volatile uint32_t t33 = 12159315U;

	t33 = ((x189*(x190^x191))-x192);

	if (t33 != 10U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x196 = INT8_MIN;
	static volatile uint64_t t34 = 16469383LLU;

	t34 = ((x193*(x194^x195))-x196);

	if (t34 != 32896LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x206 = INT16_MIN;
	uint64_t x207 = 2LLU;
	static int16_t x208 = 5192;
	static volatile uint64_t t35 = 482354560559037314LLU;

	t35 = ((x205*(x206^x207))-x208);

	if (t35 != 18446603344811158454LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int16_t x210 = INT16_MIN;
	uint64_t x211 = 5733553554LLU;
	int8_t x212 = -1;

	t36 = ((x209*(x210^x211))-x212);

	if (t36 != 18446368323853707887LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x217 = UINT32_MAX;
	int8_t x218 = -1;
	volatile int16_t x219 = INT16_MAX;

	t37 = ((x217*(x218^x219))-x220);

	if (t37 != 32641U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x221 = 63519LL;
	uint64_t x222 = 24214LLU;
	volatile int32_t x223 = 0;
	int32_t x224 = 19106;
	uint64_t t38 = 45LLU;

	t38 = ((x221*(x222^x223))-x224);

	if (t38 != 1538029960LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x229 = -1;
	uint8_t x230 = 126U;
	int64_t x231 = INT64_MAX;
	int64_t x232 = -1LL;
	int64_t t39 = -816LL;

	t39 = ((x229*(x230^x231))-x232);

	if (t39 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x234 = 3422891619519833623LLU;
	static volatile int64_t x236 = 23878502LL;
	uint64_t t40 = 874560867268360LLU;

	t40 = ((x233*(x234^x235))-x236);

	if (t40 != 8014622089986490034LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x238 = 506187045358558357LLU;
	int16_t x239 = 1;

	t41 = ((x237*(x238^x239))-x240);

	if (t41 != 17941624350987529259LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x242 = -1;
	int64_t x243 = -1LL;
	int16_t x244 = -1;
	static volatile int64_t t42 = 2266389106975324LL;

	t42 = ((x241*(x242^x243))-x244);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x249 = INT16_MAX;
	uint16_t x251 = 28697U;
	volatile int32_t x252 = -1397685;

	t43 = ((x249*(x250^x251))-x252);

	if (t43 != 134759375) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = -1;
	static volatile int32_t x255 = INT32_MAX;
	uint8_t x256 = 27U;
	volatile int32_t t44 = -463;

	t44 = ((x253*(x254^x255))-x256);

	if (t44 != 2147483593) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x261 = -1;
	int16_t x262 = INT16_MIN;
	uint32_t x264 = 2091222U;
	volatile uint32_t t45 = 1390788U;

	t45 = ((x261*(x262^x263))-x264);

	if (t45 != 4292903026U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x281 = 1366915539LL;
	uint16_t x282 = UINT16_MAX;
	uint32_t x283 = UINT32_MAX;
	uint32_t x284 = UINT32_MAX;

	t46 = ((x281*(x282^x283))-x284);

	if (t46 != 5870767949927481345LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = INT64_MIN;

	t47 = ((x285*(x286^x287))-x288);

	if (t47 != 9223372034707292198LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x289 = 45;
	static int64_t x291 = -295519LL;
	int64_t x292 = INT64_MAX;
	int64_t t48 = -21506179690LL;

	t48 = ((x289*(x290^x291))-x292);

	if (t48 != -9223372036841482132LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x293 = UINT8_MAX;
	uint8_t x295 = 1U;
	int16_t x296 = -140;
	int32_t t49 = 31358;

	t49 = ((x293*(x294^x295))-x296);

	if (t49 != -370) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x297 = UINT16_MAX;
	uint8_t x298 = 0U;
	static int16_t x299 = 23;
	int16_t x300 = -1;
	int32_t t50 = 493212;

	t50 = ((x297*(x298^x299))-x300);

	if (t50 != 1507306) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x301 = -1LL;
	uint64_t x304 = 525791945809883328LLU;

	t51 = ((x301*(x302^x303))-x304);

	if (t51 != 17920952127899668290LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x307 = INT8_MAX;
	volatile uint16_t x308 = 537U;
	static int32_t t52 = -35;

	t52 = ((x305*(x306^x307))-x308);

	if (t52 != -14105) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x309 = 1U;
	static volatile int32_t x310 = -1;
	uint16_t x311 = 124U;
	int32_t x312 = -1;
	volatile int32_t t53 = 126180;

	t53 = ((x309*(x310^x311))-x312);

	if (t53 != -124) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x313 = -1;
	static uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t54 = -193753;

	t54 = ((x313*(x314^x315))-x316);

	if (t54 != 32897) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x318 = 30807U;
	uint64_t x319 = 1356553997237526014LLU;
	static uint64_t t55 = 574154283LLU;

	t55 = ((x317*(x318^x319))-x320);

	if (t55 != 5091836160165773440LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x321 = -1;
	uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 61U;
	uint64_t t56 = 250554323026LLU;

	t56 = ((x321*(x322^x323))-x324);

	if (t56 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x325 = 139U;
	volatile int32_t x327 = -1;
	int16_t x328 = INT16_MIN;

	t57 = ((x325*(x326^x327))-x328);

	if (t57 != 18446744047182034725LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x329 = INT8_MIN;
	volatile int32_t x330 = INT32_MIN;
	uint64_t x331 = 1527562LLU;
	static int32_t x332 = INT32_MAX;
	volatile uint64_t t58 = 53362087LLU;

	t58 = ((x329*(x330^x331))-x332);

	if (t58 != 272534895361LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x333 = UINT32_MAX;
	int16_t x334 = INT16_MIN;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = 560945LL;

	t59 = ((x333*(x334^x335))-x336);

	if (t59 != 2146955471LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x341 = 68U;
	int64_t x342 = -1LL;
	int32_t x343 = INT32_MAX;
	int64_t x344 = -1LL;
	int64_t t60 = 20578LL;

	t60 = ((x341*(x342^x343))-x344);

	if (t60 != -146028888063LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x345 = 259555LL;
	static volatile int8_t x346 = 5;
	int32_t x347 = INT32_MAX;
	uint64_t x348 = 456960950LLU;
	uint64_t t61 = 4125824684LLU;

	t61 = ((x345*(x346^x347))-x348);

	if (t61 != 557389659738360LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x349 = -63LL;
	volatile int16_t x350 = INT16_MAX;
	int8_t x351 = 12;
	int32_t x352 = INT32_MIN;

	t62 = ((x349*(x350^x351))-x352);

	if (t62 != 2145420083LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x353 = 48390094961LLU;
	static int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	uint32_t x356 = 1010269U;
	static volatile uint64_t t63 = 464045016453195680LLU;

	t63 = ((x353*(x354^x355))-x356);

	if (t63 != 1579452698516771LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x361 = 8U;
	static volatile int8_t x363 = INT8_MAX;
	int32_t t64 = 3171931;

	t64 = ((x361*(x362^x363))-x364);

	if (t64 != -1028) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x370 = -1;
	int16_t x371 = 13796;
	static int32_t x372 = INT32_MIN;
	int64_t t65 = 2842502086744LL;

	t65 = ((x369*(x370^x371))-x372);

	if (t65 != 2147469851LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x377 = 1;
	int8_t x378 = INT8_MIN;
	static int8_t x379 = -1;
	int32_t x380 = -280404;

	t66 = ((x377*(x378^x379))-x380);

	if (t66 != 280531) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x381 = 923LLU;
	static volatile int32_t x383 = -1;
	uint64_t x384 = 3439987LLU;
	static uint64_t t67 = 45693LLU;

	t67 = ((x381*(x382^x383))-x384);

	if (t67 != 18446744073706105168LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x385 = INT64_MAX;
	int32_t x386 = 0;
	uint64_t x387 = 17805002995LLU;
	static int32_t x388 = 635181854;

	t68 = ((x385*(x386^x387))-x388);

	if (t68 != 9223372018414590959LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x393 = -237344955696LL;
	uint32_t x394 = 4U;
	static uint16_t x395 = 6735U;
	int64_t x396 = -159865500LL;
	volatile int64_t t69 = -70369084376699LL;

	t69 = ((x393*(x394^x395))-x396);

	if (t69 != -1597568736924276LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int32_t x398 = INT32_MIN;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = 4;
	uint64_t t70 = 1899202692LLU;

	t70 = ((x397*(x398^x399))-x400);

	if (t70 != 547608329981LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MIN;
	int16_t x404 = 1074;
	int32_t t71 = -1549335;

	t71 = ((x401*(x402^x403))-x404);

	if (t71 != 15055) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x409 = -1LL;
	int16_t x410 = -1;
	volatile uint16_t x411 = UINT16_MAX;
	static int32_t x412 = INT32_MAX;
	int64_t t72 = 100659044712LL;

	t72 = ((x409*(x410^x411))-x412);

	if (t72 != -2147418111LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x421 = 17963325320763268LLU;
	volatile uint16_t x422 = 15U;
	static uint8_t x423 = 2U;
	uint16_t x424 = 20U;
	volatile uint64_t t73 = 2705100740063313358LLU;

	t73 = ((x421*(x422^x423))-x424);

	if (t73 != 233523229169922464LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x425 = 5436562261450830LLU;
	int16_t x426 = -1;
	int8_t x427 = -1;
	int32_t x428 = 41080;
	static uint64_t t74 = 4289712703993814070LLU;

	t74 = ((x425*(x426^x427))-x428);

	if (t74 != 18446744073709510536LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x430 = 623051245238840LLU;
	static uint8_t x431 = 44U;
	volatile int16_t x432 = INT16_MIN;
	volatile uint64_t t75 = 226264055137LLU;

	t75 = ((x429*(x430^x431))-x432);

	if (t75 != 18446121022464345580LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x433 = 14156U;
	int32_t x434 = INT32_MAX;
	uint64_t x435 = UINT64_MAX;
	int64_t x436 = INT64_MIN;

	t76 = ((x433*(x434^x435))-x436);

	if (t76 != 9223341637076254720LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x441 = 250043435395330LLU;
	uint64_t x442 = 872062747432LLU;
	int64_t x443 = INT64_MIN;
	volatile uint64_t t77 = 193113265LLU;

	t77 = ((x441*(x442^x443))-x444);

	if (t77 != 8448880262108180176LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x449 = 42LL;
	volatile uint32_t x450 = UINT32_MAX;
	volatile uint64_t x451 = UINT64_MAX;
	static volatile uint64_t t78 = 133183LLU;

	t78 = ((x449*(x450^x451))-x452);

	if (t78 != 18446743893320892417LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x453 = 22U;
	uint16_t x454 = 1U;
	uint32_t x455 = 23802U;
	int16_t x456 = -78;
	uint32_t t79 = 132950428U;

	t79 = ((x453*(x454^x455))-x456);

	if (t79 != 523744U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x457 = 3;
	int64_t x458 = 1778657268991560007LL;
	uint64_t x459 = UINT64_MAX;
	int64_t x460 = -380029LL;
	static uint64_t t80 = 3951534180502LLU;

	t80 = ((x457*(x458^x459))-x460);

	if (t80 != 13110772266735251621LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x461 = 15240LLU;
	uint64_t x462 = 10168LLU;
	static int64_t x463 = INT64_MIN;
	int64_t x464 = 6LL;
	volatile uint64_t t81 = 35163688LLU;

	t81 = ((x461*(x462^x463))-x464);

	if (t81 != 154960314LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x465 = 63U;
	volatile int32_t x468 = INT32_MIN;

	t82 = ((x465*(x466^x467))-x468);

	if (t82 != 2137435841LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x478 = 32334109095LLU;
	volatile int32_t x479 = INT32_MIN;
	static volatile int32_t x480 = INT32_MIN;
	uint64_t t83 = 15LLU;

	t83 = ((x477*(x478^x479))-x480);

	if (t83 != 16291395393144028370LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x485 = 93U;
	int16_t x486 = INT16_MIN;
	static uint16_t x487 = UINT16_MAX;
	static int16_t x488 = -1;
	int32_t t84 = 34;

	t84 = ((x485*(x486^x487))-x488);

	if (t84 != -3047516) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x493 = 104U;
	int16_t x496 = INT16_MIN;
	static volatile uint32_t t85 = 189390156U;

	t85 = ((x493*(x494^x495))-x496);

	if (t85 != 32664U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x497 = UINT32_MAX;
	volatile int16_t x498 = INT16_MIN;
	static int8_t x499 = INT8_MAX;

	t86 = ((x497*(x498^x499))-x500);

	if (t86 != 2147516289U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x501 = -1;
	int64_t x502 = INT64_MAX;
	uint64_t x504 = UINT64_MAX;

	t87 = ((x501*(x502^x503))-x504);

	if (t87 != 9223372036854808577LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x509 = 11312;
	int8_t x510 = INT8_MIN;
	volatile uint8_t x511 = 0U;
	volatile uint8_t x512 = 40U;
	volatile int32_t t88 = 5872251;

	t88 = ((x509*(x510^x511))-x512);

	if (t88 != -1447976) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x513 = 13281U;
	volatile int32_t t89 = 197353;

	t89 = ((x513*(x514^x515))-x516);

	if (t89 != -870025284) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x522 = UINT16_MAX;
	int32_t t90 = -29;

	t90 = ((x521*(x522^x523))-x524);

	if (t90 != -2080080000) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x529 = 19U;
	volatile uint16_t x530 = 1U;
	uint16_t x531 = UINT16_MAX;
	static uint32_t x532 = UINT32_MAX;
	static uint32_t t91 = 1597U;

	t91 = ((x529*(x530^x531))-x532);

	if (t91 != 1245147U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x533 = -1;
	volatile int8_t x534 = -1;
	static int8_t x535 = INT8_MIN;
	static uint16_t x536 = 3U;
	static volatile int32_t t92 = 54;

	t92 = ((x533*(x534^x535))-x536);

	if (t92 != -130) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x537 = 1;
	int32_t x539 = -1;

	t93 = ((x537*(x538^x539))-x540);

	if (t93 != -255) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x545 = INT32_MIN;
	int16_t x546 = INT16_MIN;
	volatile uint64_t x547 = 1019895585583LLU;
	volatile uint64_t x548 = 15778LLU;

	t94 = ((x545*(x546^x547))-x548);

	if (t94 != 13493332489216705118LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x549 = -6713;
	volatile uint64_t x550 = 3097709101833LLU;
	static int64_t x551 = INT64_MAX;
	uint64_t t95 = 64934322840LLU;

	t95 = ((x549*(x550^x551))-x552);

	if (t95 != 9244166958055387323LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x553 = 54;
	static int64_t x555 = -123LL;
	volatile int64_t t96 = -792839658504LL;

	t96 = ((x553*(x554^x555))-x556);

	if (t96 != -34159516LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x557 = UINT16_MAX;
	static int32_t x558 = -6;
	uint8_t x559 = 0U;

	t97 = ((x557*(x558^x559))-x560);

	if (t97 != -1032413552LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x563 = -1;
	int8_t x564 = INT8_MAX;

	t98 = ((x561*(x562^x563))-x564);

	if (t98 != -127LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x569 = 121U;
	static int32_t x570 = -1;
	uint32_t x571 = 20U;
	uint16_t x572 = 2U;
	volatile uint32_t t99 = 1944549644U;

	t99 = ((x569*(x570^x571))-x572);

	if (t99 != 4294964753U) { NG(); } else { ; }
	
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

