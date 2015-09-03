#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 93964970LLU;
int32_t x18 = INT32_MAX;
static int64_t x40 = INT64_MIN;
volatile uint64_t t5 = 4841LLU;
static volatile uint64_t x45 = 7242325956LLU;
volatile uint16_t x51 = UINT16_MAX;
volatile int64_t t8 = -338507LL;
uint16_t x57 = 6081U;
uint64_t x62 = 772845980808169LLU;
static uint32_t x80 = 33720U;
uint32_t t13 = UINT32_MAX;
uint8_t x85 = UINT8_MAX;
int64_t x93 = INT64_MAX;
uint64_t x95 = UINT64_MAX;
static volatile int64_t t16 = -38973740399844498LL;
int32_t t19 = -201;
uint16_t x157 = UINT16_MAX;
static uint64_t x188 = 18024LLU;
int32_t x215 = -1;
static int32_t x219 = INT32_MAX;
int64_t x240 = -10049658LL;
volatile uint16_t x249 = 1515U;
volatile int8_t x250 = INT8_MAX;
static volatile int32_t x270 = INT32_MAX;
int32_t x275 = -1;
volatile int32_t t38 = -1;
uint32_t x301 = 194U;
int16_t x304 = -413;
int32_t x317 = INT32_MAX;
uint32_t x325 = UINT32_MAX;
static int32_t x339 = 275801;
volatile uint16_t x340 = 1529U;
uint32_t x349 = UINT32_MAX;
int32_t x354 = INT32_MIN;
int16_t x355 = INT16_MIN;
int64_t x375 = -1173401527334510944LL;
int16_t x388 = -1;
int32_t x390 = 1;
int16_t x392 = INT16_MIN;
static int16_t x395 = 5;
int32_t x413 = 936;
int32_t x414 = 165701115;
int16_t x426 = -1;
int32_t x427 = -1;
volatile int16_t x434 = INT16_MIN;
volatile uint16_t x436 = UINT16_MAX;
int8_t x448 = -1;
int32_t x469 = 942026500;
volatile int32_t t59 = -37363;
int32_t x476 = 21010352;
volatile uint16_t x477 = UINT16_MAX;
uint8_t x478 = UINT8_MAX;
int16_t x488 = 181;
int32_t t63 = 52965;
volatile int32_t x489 = 522;
int64_t x494 = -1LL;
static int32_t t65 = -1;
static int16_t x499 = 25;
int16_t x502 = -14817;
volatile uint16_t x503 = 9U;
int64_t x526 = -434839867270894724LL;
uint16_t x527 = 2198U;
static int32_t t70 = -1;
int32_t t72 = 1;
int8_t x556 = INT8_MIN;
int32_t x568 = -223866031;
uint8_t x570 = 9U;
static int32_t x598 = INT32_MIN;
volatile uint32_t x600 = 1154U;
int32_t x604 = INT32_MAX;
int32_t t80 = -92075;
static int16_t x625 = 187;
uint64_t x633 = 8LLU;
int32_t x634 = -1;
int32_t x648 = -14505821;
volatile int64_t t83 = -31LL;
uint8_t x681 = 2U;
uint16_t x682 = 5312U;
int16_t x692 = INT16_MIN;
uint16_t x701 = 0U;
static int32_t t87 = -65405;
int8_t x726 = 0;
volatile uint64_t x730 = UINT64_MAX;
int32_t x732 = -48;
int32_t x738 = -134;
static int32_t x739 = INT32_MIN;
uint64_t x748 = 166825271750369LLU;
static volatile int32_t t94 = -12776;
uint64_t x754 = UINT64_MAX;
static int16_t x771 = -1;


void f0(void) {
	int16_t x5 = 8734;
	uint8_t x6 = 5U;
	volatile int16_t x7 = -13701;
	int64_t x8 = -1LL;
	int32_t t0 = 78;

	t0 = (x5>>((x6<x7)%x8));

	if (t0 != 8734) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = 100624222110907LLU;
	int16_t x10 = -1;
	int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MIN;

	t1 = (x9>>((x10<x11)%x12));

	if (t1 != 50312111055453LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = 13373LLU;
	volatile int32_t x19 = INT32_MIN;
	int16_t x20 = 9614;
	volatile uint64_t t2 = 327351174334656235LLU;

	t2 = (x17>>((x18<x19)%x20));

	if (t2 != 13373LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x29 = 3;
	uint64_t x30 = 17382LLU;
	int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MIN;
	volatile int32_t t3 = -11697050;

	t3 = (x29>>((x30<x31)%x32));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = 327;
	int64_t x38 = INT64_MAX;
	uint32_t x39 = 97611U;
	volatile int32_t t4 = -86412;

	t4 = (x37>>((x38<x39)%x40));

	if (t4 != 327) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x41 = 128454498072007LLU;
	uint8_t x42 = UINT8_MAX;
	uint32_t x43 = 968642267U;
	static int16_t x44 = INT16_MAX;

	t5 = (x41>>((x42<x43)%x44));

	if (t5 != 64227249036003LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x46 = 1;
	int64_t x47 = INT64_MAX;
	int16_t x48 = 3;
	uint64_t t6 = 272365540LLU;

	t6 = (x45>>((x46<x47)%x48));

	if (t6 != 3621162978LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x49 = 21732377U;
	int8_t x50 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	uint32_t t7 = 12U;

	t7 = (x49>>((x50<x51)%x52));

	if (t7 != 10866188U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x53 = 8355529971977144LL;
	static int16_t x54 = INT16_MAX;
	int32_t x55 = INT32_MAX;
	static int64_t x56 = INT64_MIN;

	t8 = (x53>>((x54<x55)%x56));

	if (t8 != 4177764985988572LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x58 = -1;
	int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	volatile int32_t t9 = -2837171;

	t9 = (x57>>((x58<x59)%x60));

	if (t9 != 6081) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x61 = INT8_MAX;
	int64_t x63 = 14214270103364LL;
	volatile int16_t x64 = INT16_MIN;
	int32_t t10 = -144;

	t10 = (x61>>((x62<x63)%x64));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x69 = 815797LLU;
	int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MIN;
	int64_t x72 = -927546150LL;
	uint64_t t11 = 16220LLU;

	t11 = (x69>>((x70<x71)%x72));

	if (t11 != 815797LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x77 = 7502LLU;
	int8_t x78 = INT8_MAX;
	static volatile int16_t x79 = INT16_MAX;
	volatile uint64_t t12 = 124020433LLU;

	t12 = (x77>>((x78<x79)%x80));

	if (t12 != 3751LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x81 = UINT32_MAX;
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MAX;

	t13 = (x81>>((x82<x83)%x84));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x86 = INT8_MIN;
	static uint32_t x87 = UINT32_MAX;
	static int64_t x88 = 8LL;
	static volatile int32_t t14 = -3547573;

	t14 = (x85>>((x86<x87)%x88));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x89 = 2651734LL;
	uint8_t x90 = 2U;
	int16_t x91 = -15140;
	int64_t x92 = INT64_MIN;
	volatile int64_t t15 = 591304014905LL;

	t15 = (x89>>((x90<x91)%x92));

	if (t15 != 2651734LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x94 = 228247906LLU;
	int64_t x96 = 6561443460536989LL;

	t16 = (x93>>((x94<x95)%x96));

	if (t16 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x113 = INT32_MAX;
	uint64_t x114 = 6219LLU;
	static int8_t x115 = -45;
	int32_t x116 = -1;
	int32_t t17 = INT32_MAX;

	t17 = (x113>>((x114<x115)%x116));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x125 = 1U;
	static volatile uint64_t x126 = 11904376LLU;
	uint64_t x127 = 2923656LLU;
	int8_t x128 = INT8_MIN;
	volatile int32_t t18 = 181603;

	t18 = (x125>>((x126<x127)%x128));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x129 = 63U;
	static int32_t x130 = INT32_MAX;
	int64_t x131 = -1LL;
	volatile int16_t x132 = -1;

	t19 = (x129>>((x130<x131)%x132));

	if (t19 != 63) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x153 = INT8_MAX;
	int32_t x154 = -90;
	int64_t x155 = 142LL;
	volatile int64_t x156 = 178063574694368LL;
	static volatile int32_t t20 = -84712;

	t20 = (x153>>((x154<x155)%x156));

	if (t20 != 63) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x158 = 312;
	int32_t x159 = -1708;
	int16_t x160 = -1;
	int32_t t21 = -104303252;

	t21 = (x157>>((x158<x159)%x160));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = INT32_MIN;
	int16_t x179 = 1;
	static int8_t x180 = INT8_MAX;
	static int32_t t22 = -33642632;

	t22 = (x177>>((x178<x179)%x180));

	if (t22 != 16383) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x181 = 1U;
	static int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	int64_t x184 = -4161314811882923LL;
	int32_t t23 = 132920;

	t23 = (x181>>((x182<x183)%x184));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x185 = INT32_MAX;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = 15936934718LLU;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x185>>((x186<x187)%x188));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x189 = 1U;
	int8_t x190 = -1;
	int64_t x191 = INT64_MIN;
	volatile int32_t x192 = INT32_MIN;
	volatile int32_t t25 = -462812398;

	t25 = (x189>>((x190<x191)%x192));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x197 = 6;
	uint32_t x198 = 312U;
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 68U;
	static int32_t t26 = 592;

	t26 = (x197>>((x198<x199)%x200));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x213 = 306LL;
	int16_t x214 = -1;
	static volatile int32_t x216 = INT32_MIN;
	volatile int64_t t27 = 885504801223LL;

	t27 = (x213>>((x214<x215)%x216));

	if (t27 != 306LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x217 = 59;
	uint64_t x218 = 2254064528071229270LLU;
	int8_t x220 = 1;
	volatile int32_t t28 = -60294122;

	t28 = (x217>>((x218<x219)%x220));

	if (t28 != 59) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x221 = INT32_MAX;
	int16_t x222 = INT16_MAX;
	uint32_t x223 = 0U;
	int16_t x224 = -15;
	volatile int32_t t29 = INT32_MAX;

	t29 = (x221>>((x222<x223)%x224));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x229 = 1;
	volatile uint32_t x230 = 0U;
	int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MIN;
	int32_t t30 = 387021354;

	t30 = (x229>>((x230<x231)%x232));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x237 = UINT32_MAX;
	static int32_t x238 = INT32_MAX;
	uint8_t x239 = 57U;
	uint32_t t31 = UINT32_MAX;

	t31 = (x237>>((x238<x239)%x240));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x241 = INT8_MAX;
	int32_t x242 = INT32_MAX;
	volatile uint8_t x243 = 10U;
	volatile uint64_t x244 = 2548956184552046515LLU;
	volatile int32_t t32 = -61;

	t32 = (x241>>((x242<x243)%x244));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x251 = 4LLU;
	int8_t x252 = 3;
	int32_t t33 = 883343;

	t33 = (x249>>((x250<x251)%x252));

	if (t33 != 1515) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x265 = 2421325;
	int16_t x266 = INT16_MIN;
	static int8_t x267 = 1;
	int64_t x268 = INT64_MIN;
	int32_t t34 = -849612;

	t34 = (x265>>((x266<x267)%x268));

	if (t34 != 1210662) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x269 = 1;
	int16_t x271 = -1;
	int64_t x272 = INT64_MIN;
	volatile int32_t t35 = -108;

	t35 = (x269>>((x270<x271)%x272));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x273 = 1217953265U;
	int64_t x274 = INT64_MAX;
	volatile uint16_t x276 = UINT16_MAX;
	static volatile uint32_t t36 = 894091615U;

	t36 = (x273>>((x274<x275)%x276));

	if (t36 != 1217953265U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x281 = UINT16_MAX;
	uint8_t x282 = 110U;
	volatile int16_t x283 = 55;
	volatile int32_t x284 = INT32_MIN;
	int32_t t37 = -13;

	t37 = (x281>>((x282<x283)%x284));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x289 = 20664U;
	int64_t x290 = 34085707601LL;
	int64_t x291 = -62416021078517LL;
	int16_t x292 = -3;

	t38 = (x289>>((x290<x291)%x292));

	if (t38 != 20664) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x297 = 1U;
	int8_t x298 = INT8_MAX;
	static int64_t x299 = -1LL;
	volatile int64_t x300 = INT64_MIN;
	int32_t t39 = 10;

	t39 = (x297>>((x298<x299)%x300));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x302 = INT64_MIN;
	static uint8_t x303 = UINT8_MAX;
	volatile uint32_t t40 = 814348U;

	t40 = (x301>>((x302<x303)%x304));

	if (t40 != 97U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x313 = INT32_MAX;
	int64_t x314 = -1LL;
	static volatile int64_t x315 = 967136LL;
	int16_t x316 = 6031;
	static int32_t t41 = 0;

	t41 = (x313>>((x314<x315)%x316));

	if (t41 != 1073741823) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x318 = INT8_MIN;
	static uint8_t x319 = 4U;
	volatile int16_t x320 = -1;
	volatile int32_t t42 = INT32_MAX;

	t42 = (x317>>((x318<x319)%x320));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x326 = UINT16_MAX;
	uint16_t x327 = 1744U;
	static uint16_t x328 = UINT16_MAX;
	static volatile uint32_t t43 = UINT32_MAX;

	t43 = (x325>>((x326<x327)%x328));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x333 = 13U;
	int8_t x334 = INT8_MAX;
	volatile uint32_t x335 = 3146845U;
	uint64_t x336 = 6803670LLU;
	static volatile int32_t t44 = -10;

	t44 = (x333>>((x334<x335)%x336));

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x337 = UINT8_MAX;
	int32_t x338 = -1;
	int32_t t45 = 7;

	t45 = (x337>>((x338<x339)%x340));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x345 = UINT32_MAX;
	int8_t x346 = INT8_MAX;
	volatile int16_t x347 = INT16_MAX;
	int64_t x348 = -140436827133LL;
	volatile uint32_t t46 = 853533U;

	t46 = (x345>>((x346<x347)%x348));

	if (t46 != 2147483647U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x350 = INT8_MIN;
	uint64_t x351 = 34060878731057LLU;
	int16_t x352 = -1150;
	uint32_t t47 = UINT32_MAX;

	t47 = (x349>>((x350<x351)%x352));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x353 = UINT16_MAX;
	static int16_t x356 = -1;
	int32_t t48 = 3715865;

	t48 = (x353>>((x354<x355)%x356));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x373 = 8409543536962LL;
	uint8_t x374 = 52U;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int64_t t49 = 2523934LL;

	t49 = (x373>>((x374<x375)%x376));

	if (t49 != 8409543536962LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x385 = UINT32_MAX;
	uint64_t x386 = 1138444800LLU;
	volatile int16_t x387 = 454;
	uint32_t t50 = UINT32_MAX;

	t50 = (x385>>((x386<x387)%x388));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x389 = 0U;
	volatile int16_t x391 = 24;
	int32_t t51 = -905678;

	t51 = (x389>>((x390<x391)%x392));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = INT8_MIN;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t52 = 118401;

	t52 = (x393>>((x394<x395)%x396));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x397 = 621U;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = UINT32_MAX;
	int8_t x400 = INT8_MAX;
	volatile int32_t t53 = 0;

	t53 = (x397>>((x398<x399)%x400));

	if (t53 != 310) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x409 = 13042417U;
	int32_t x410 = INT32_MIN;
	volatile int8_t x411 = INT8_MIN;
	static uint32_t x412 = 12534U;
	volatile uint32_t t54 = 12988U;

	t54 = (x409>>((x410<x411)%x412));

	if (t54 != 6521208U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x415 = INT16_MAX;
	int64_t x416 = 2619586245281984073LL;
	volatile int32_t t55 = 482;

	t55 = (x413>>((x414<x415)%x416));

	if (t55 != 936) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x425 = 51LLU;
	int64_t x428 = -12LL;
	volatile uint64_t t56 = 1633857611LLU;

	t56 = (x425>>((x426<x427)%x428));

	if (t56 != 51LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x433 = 60;
	uint32_t x435 = 281411U;
	int32_t t57 = 73068;

	t57 = (x433>>((x434<x435)%x436));

	if (t57 != 60) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x445 = INT16_MAX;
	static volatile int32_t x446 = -129896306;
	int64_t x447 = -1LL;
	int32_t t58 = 18421;

	t58 = (x445>>((x446<x447)%x448));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x470 = 429U;
	uint32_t x471 = UINT32_MAX;
	int64_t x472 = -3954616445LL;

	t59 = (x469>>((x470<x471)%x472));

	if (t59 != 471013250) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x473 = UINT16_MAX;
	int64_t x474 = INT64_MIN;
	static int64_t x475 = INT64_MIN;
	static int32_t t60 = 3703496;

	t60 = (x473>>((x474<x475)%x476));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x479 = 5722U;
	static uint32_t x480 = 388U;
	volatile int32_t t61 = 181;

	t61 = (x477>>((x478<x479)%x480));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x481 = UINT32_MAX;
	int16_t x482 = INT16_MAX;
	int8_t x483 = -1;
	static int32_t x484 = INT32_MIN;
	uint32_t t62 = UINT32_MAX;

	t62 = (x481>>((x482<x483)%x484));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x485 = 48184;
	int16_t x486 = INT16_MAX;
	static int32_t x487 = INT32_MAX;

	t63 = (x485>>((x486<x487)%x488));

	if (t63 != 24092) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x490 = INT8_MAX;
	volatile uint32_t x491 = 29U;
	uint64_t x492 = 2544LLU;
	int32_t t64 = 102508791;

	t64 = (x489>>((x490<x491)%x492));

	if (t64 != 522) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x493 = 0;
	static uint8_t x495 = 10U;
	int8_t x496 = -1;

	t65 = (x493>>((x494<x495)%x496));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x497 = INT16_MAX;
	int8_t x498 = INT8_MIN;
	int32_t x500 = -1;
	int32_t t66 = 5897836;

	t66 = (x497>>((x498<x499)%x500));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x501 = 758U;
	int16_t x504 = INT16_MIN;
	uint32_t t67 = 70U;

	t67 = (x501>>((x502<x503)%x504));

	if (t67 != 379U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x513 = UINT16_MAX;
	int32_t x514 = INT32_MAX;
	int32_t x515 = -10;
	int16_t x516 = INT16_MIN;
	volatile int32_t t68 = 662903;

	t68 = (x513>>((x514<x515)%x516));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x521 = 3787818249734485LLU;
	uint64_t x522 = UINT64_MAX;
	uint32_t x523 = 91U;
	uint16_t x524 = 7338U;
	static volatile uint64_t t69 = 3484954766LLU;

	t69 = (x521>>((x522<x523)%x524));

	if (t69 != 3787818249734485LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x525 = 9344;
	uint16_t x528 = 652U;

	t70 = (x525>>((x526<x527)%x528));

	if (t70 != 4672) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x529 = 8139;
	uint32_t x530 = UINT32_MAX;
	uint16_t x531 = 3U;
	uint16_t x532 = UINT16_MAX;
	volatile int32_t t71 = 50295352;

	t71 = (x529>>((x530<x531)%x532));

	if (t71 != 8139) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x533 = UINT16_MAX;
	static int64_t x534 = -1LL;
	int64_t x535 = -1LL;
	int16_t x536 = INT16_MIN;

	t72 = (x533>>((x534<x535)%x536));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x549 = 1981984U;
	static int64_t x550 = -1LL;
	volatile int16_t x551 = 2021;
	int32_t x552 = INT32_MIN;
	volatile uint32_t t73 = 6689273U;

	t73 = (x549>>((x550<x551)%x552));

	if (t73 != 990992U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x553 = 31;
	volatile int32_t x554 = INT32_MAX;
	int8_t x555 = INT8_MIN;
	volatile int32_t t74 = -2208473;

	t74 = (x553>>((x554<x555)%x556));

	if (t74 != 31) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x557 = 1363U;
	int64_t x558 = -53997603LL;
	uint64_t x559 = UINT64_MAX;
	uint16_t x560 = 1525U;
	static volatile int32_t t75 = 366767379;

	t75 = (x557>>((x558<x559)%x560));

	if (t75 != 681) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x565 = 33576891U;
	static uint32_t x566 = UINT32_MAX;
	int32_t x567 = 34482595;
	static volatile uint32_t t76 = 78494U;

	t76 = (x565>>((x566<x567)%x568));

	if (t76 != 33576891U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x569 = 998518188192179LL;
	static int32_t x571 = -7097;
	int32_t x572 = -1;
	volatile int64_t t77 = 1365LL;

	t77 = (x569>>((x570<x571)%x572));

	if (t77 != 998518188192179LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x593 = INT32_MAX;
	uint32_t x594 = 1377U;
	volatile int16_t x595 = 12;
	uint64_t x596 = 4287038265948LLU;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x593>>((x594<x595)%x596));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x597 = UINT32_MAX;
	uint16_t x599 = 26019U;
	volatile uint32_t t79 = 125188500U;

	t79 = (x597>>((x598<x599)%x600));

	if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x601 = INT16_MAX;
	int32_t x602 = INT32_MAX;
	uint32_t x603 = 571U;

	t80 = (x601>>((x602<x603)%x604));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x626 = INT64_MIN;
	int64_t x627 = -47367LL;
	volatile int8_t x628 = INT8_MIN;
	static volatile int32_t t81 = 108;

	t81 = (x625>>((x626<x627)%x628));

	if (t81 != 93) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x635 = UINT32_MAX;
	int8_t x636 = INT8_MIN;
	volatile uint64_t t82 = 836200011168110171LLU;

	t82 = (x633>>((x634<x635)%x636));

	if (t82 != 8LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x645 = 537127839896668401LL;
	int16_t x646 = -1;
	uint8_t x647 = UINT8_MAX;

	t83 = (x645>>((x646<x647)%x648));

	if (t83 != 268563919948334200LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x683 = UINT8_MAX;
	static int16_t x684 = INT16_MIN;
	int32_t t84 = 475573;

	t84 = (x681>>((x682<x683)%x684));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x689 = UINT8_MAX;
	volatile int16_t x690 = 11;
	uint8_t x691 = 54U;
	volatile int32_t t85 = 686;

	t85 = (x689>>((x690<x691)%x692));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x697 = UINT16_MAX;
	int8_t x698 = INT8_MAX;
	int32_t x699 = INT32_MAX;
	uint64_t x700 = UINT64_MAX;
	volatile int32_t t86 = -12616712;

	t86 = (x697>>((x698<x699)%x700));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x702 = 6773584U;
	int32_t x703 = INT32_MIN;
	int16_t x704 = 1;

	t87 = (x701>>((x702<x703)%x704));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x705 = 2836987U;
	int8_t x706 = INT8_MIN;
	uint64_t x707 = 16167162025LLU;
	uint32_t x708 = 59573711U;
	uint32_t t88 = 2236214U;

	t88 = (x705>>((x706<x707)%x708));

	if (t88 != 2836987U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x713 = 28U;
	static volatile uint64_t x714 = UINT64_MAX;
	uint64_t x715 = 862LLU;
	int32_t x716 = INT32_MIN;
	static volatile int32_t t89 = 27608661;

	t89 = (x713>>((x714<x715)%x716));

	if (t89 != 28) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x725 = 1U;
	int8_t x727 = INT8_MIN;
	int16_t x728 = -75;
	static int32_t t90 = 2299;

	t90 = (x725>>((x726<x727)%x728));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x729 = 3485350418LL;
	int16_t x731 = INT16_MIN;
	int64_t t91 = -9LL;

	t91 = (x729>>((x730<x731)%x732));

	if (t91 != 3485350418LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x733 = 2161144971199889851LLU;
	int16_t x734 = 11;
	int32_t x735 = -10;
	uint32_t x736 = 426U;
	uint64_t t92 = 86752267207LLU;

	t92 = (x733>>((x734<x735)%x736));

	if (t92 != 2161144971199889851LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x737 = UINT32_MAX;
	uint64_t x740 = 2340LLU;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (x737>>((x738<x739)%x740));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x745 = 0U;
	static int64_t x746 = INT64_MIN;
	int8_t x747 = -8;

	t94 = (x745>>((x746<x747)%x748));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x753 = 31075566U;
	int64_t x755 = 49769487722754438LL;
	uint32_t x756 = 6858625U;
	uint32_t t95 = 1941391605U;

	t95 = (x753>>((x754<x755)%x756));

	if (t95 != 31075566U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x757 = 1859;
	uint64_t x758 = 5024775588501065LLU;
	uint64_t x759 = UINT64_MAX;
	int32_t x760 = -1;
	volatile int32_t t96 = -669;

	t96 = (x757>>((x758<x759)%x760));

	if (t96 != 1859) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x761 = INT32_MAX;
	int32_t x762 = INT32_MIN;
	volatile uint32_t x763 = UINT32_MAX;
	static volatile int32_t x764 = -1;
	static volatile int32_t t97 = INT32_MAX;

	t97 = (x761>>((x762<x763)%x764));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x769 = 26364599;
	volatile int16_t x770 = INT16_MAX;
	int32_t x772 = INT32_MIN;
	static int32_t t98 = 1193451;

	t98 = (x769>>((x770<x771)%x772));

	if (t98 != 26364599) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x793 = INT64_MAX;
	int32_t x794 = INT32_MIN;
	int64_t x795 = -1LL;
	int8_t x796 = INT8_MIN;
	volatile int64_t t99 = -116LL;

	t99 = (x793>>((x794<x795)%x796));

	if (t99 != 4611686018427387903LL) { NG(); } else { ; }
	
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

