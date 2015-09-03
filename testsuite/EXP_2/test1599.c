#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x15 = INT32_MAX;
volatile int32_t x20 = -1;
volatile int8_t x42 = 1;
uint32_t x61 = 2U;
uint32_t x74 = 5084U;
int32_t x79 = 1290917;
int64_t x86 = -1LL;
static volatile int8_t x88 = -1;
volatile uint8_t x89 = UINT8_MAX;
uint16_t x90 = UINT16_MAX;
static uint64_t x93 = UINT64_MAX;
uint8_t x97 = UINT8_MAX;
int8_t x109 = INT8_MAX;
static int32_t x111 = INT32_MIN;
int8_t x118 = 1;
int64_t x119 = 21814200298209LL;
uint16_t x125 = 9279U;
int32_t x127 = -5798950;
int32_t t17 = 125934313;
int16_t x135 = INT16_MIN;
volatile int64_t t18 = -212474148856855717LL;
int32_t x162 = INT32_MIN;
int16_t x170 = INT16_MAX;
volatile int64_t t21 = INT64_MIN;
int8_t x185 = 0;
uint64_t x187 = 0LLU;
volatile int16_t x199 = -10560;
static int8_t x202 = INT8_MAX;
int8_t x204 = -1;
int8_t x209 = 20;
int16_t x212 = INT16_MAX;
int64_t x242 = INT64_MIN;
int8_t x244 = 1;
volatile uint64_t t33 = 110353905LLU;
int8_t x288 = -1;
int8_t x296 = 3;
volatile int8_t x297 = 1;
uint64_t x306 = UINT64_MAX;
volatile int64_t x311 = INT64_MIN;
volatile int32_t t39 = 7466;
uint8_t x314 = UINT8_MAX;
static int16_t x323 = -1;
volatile int64_t t41 = 50418125008575LL;
static uint32_t x325 = UINT32_MAX;
uint32_t t42 = 2U;
static int32_t x332 = -768308;
volatile int8_t x351 = -1;
int8_t x364 = INT8_MIN;
volatile int64_t x372 = 256908578178294834LL;
volatile int64_t t47 = -6LL;
volatile int32_t t49 = -471344;
static int32_t x396 = INT32_MAX;
uint64_t x399 = 640LLU;
volatile uint64_t t51 = 3198865124LLU;
int8_t x403 = INT8_MAX;
int32_t t53 = -28;
static int32_t x435 = INT32_MIN;
uint16_t x450 = 7237U;
int8_t x451 = INT8_MIN;
int8_t x455 = INT8_MIN;
int64_t t58 = -3727161LL;
uint8_t x458 = 38U;
int16_t x463 = INT16_MIN;
int32_t x465 = 36012080;
int8_t x466 = INT8_MAX;
static int64_t x467 = -1467748797496808LL;
uint16_t x471 = 13157U;
volatile int64_t t62 = 1085092400LL;
static volatile int16_t x477 = INT16_MAX;
volatile uint64_t x483 = 260992541060059LLU;
uint16_t x500 = UINT16_MAX;
int32_t t65 = -3;
static int32_t t67 = 46;
volatile int8_t x528 = INT8_MAX;
int32_t t68 = 9888;
int64_t t70 = -341770976LL;
int16_t x550 = INT16_MIN;
volatile int64_t x551 = 266475423LL;
int8_t x564 = INT8_MIN;
static volatile int64_t x572 = INT64_MAX;
uint32_t t75 = 4069U;
int64_t t76 = -373211LL;
volatile uint16_t x622 = 62U;
volatile int16_t x623 = INT16_MAX;
static int32_t x624 = -1;
static int8_t x627 = INT8_MAX;
static uint64_t x638 = UINT64_MAX;
int8_t x641 = 33;
int16_t x654 = 0;
int32_t x656 = INT32_MIN;
uint16_t x669 = UINT16_MAX;
uint8_t x691 = 0U;
volatile uint8_t x693 = 45U;
static int32_t x694 = -1;
uint32_t x709 = 9030457U;
volatile uint64_t t91 = 76172659098845LLU;
int8_t x729 = INT8_MAX;
int64_t x730 = INT64_MIN;
static int32_t t93 = 5412;
int8_t x746 = -1;
uint32_t x752 = UINT32_MAX;
int64_t t98 = -44293033LL;
int8_t x782 = -1;


void f0(void) {
	static uint8_t x5 = 1U;
	int8_t x6 = INT8_MAX;
	volatile int64_t x7 = INT64_MAX;
	uint8_t x8 = 1U;
	int32_t t0 = -456;

	t0 = ((x5<<(x6<=x7))^x8);

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x13 = 139830LL;
	uint64_t x14 = 14220201LLU;
	int8_t x16 = -1;
	int64_t t1 = 1858906551LL;

	t1 = ((x13<<(x14<=x15))^x16);

	if (t1 != -279661LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x17 = 295981LLU;
	int16_t x18 = -1;
	uint64_t x19 = 2789433LLU;
	volatile uint64_t t2 = 66580113400LLU;

	t2 = ((x17<<(x18<=x19))^x20);

	if (t2 != 18446744073709255634LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x29 = 4229U;
	volatile int8_t x30 = -1;
	int32_t x31 = INT32_MIN;
	int64_t x32 = -1LL;
	int64_t t3 = -7LL;

	t3 = ((x29<<(x30<=x31))^x32);

	if (t3 != -4230LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x41 = 4U;
	volatile int8_t x43 = -1;
	static uint8_t x44 = UINT8_MAX;
	int32_t t4 = 205038;

	t4 = ((x41<<(x42<=x43))^x44);

	if (t4 != 251) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x45 = 6U;
	int64_t x46 = 36363520195083718LL;
	static int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	volatile int32_t t5 = 175213;

	t5 = ((x45<<(x46<=x47))^x48);

	if (t5 != -122) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x62 = -33;
	int8_t x63 = -1;
	volatile uint16_t x64 = 108U;
	volatile uint32_t t6 = 3026U;

	t6 = ((x61<<(x62<=x63))^x64);

	if (t6 != 104U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	static int32_t t7 = 4202992;

	t7 = ((x73<<(x74<=x75))^x76);

	if (t7 != 32513) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x77 = UINT32_MAX;
	static uint32_t x78 = 150751642U;
	static int64_t x80 = INT64_MAX;
	static volatile int64_t t8 = 186015212486LL;

	t8 = ((x77<<(x78<=x79))^x80);

	if (t8 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x85 = 0;
	static int16_t x87 = -1;
	volatile int32_t t9 = -2506;

	t9 = ((x85<<(x86<=x87))^x88);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x91 = 480438U;
	uint16_t x92 = 26204U;
	volatile int32_t t10 = 0;

	t10 = ((x89<<(x90<=x91))^x92);

	if (t10 != 26530) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x94 = INT16_MIN;
	int16_t x95 = 14083;
	volatile int16_t x96 = INT16_MAX;
	volatile uint64_t t11 = 20820076LLU;

	t11 = ((x93<<(x94<=x95))^x96);

	if (t11 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x98 = 10510U;
	static int8_t x99 = INT8_MIN;
	uint32_t x100 = 19U;
	uint32_t t12 = 853183U;

	t12 = ((x97<<(x98<=x99))^x100);

	if (t12 != 493U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x110 = INT16_MIN;
	uint16_t x112 = 31U;
	volatile int32_t t13 = -816;

	t13 = ((x109<<(x110<=x111))^x112);

	if (t13 != 96) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x113 = 1568;
	int32_t x114 = INT32_MIN;
	uint16_t x115 = 247U;
	volatile uint32_t x116 = 1479960U;
	uint32_t t14 = 144379602U;

	t14 = ((x113<<(x114<=x115))^x116);

	if (t14 != 1481048U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x120 = 1953;
	static uint32_t t15 = 1135783U;

	t15 = ((x117<<(x118<=x119))^x120);

	if (t15 != 4294965343U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x121 = 108U;
	uint16_t x122 = 1U;
	int16_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	int32_t t16 = -10;

	t16 = ((x121<<(x122<=x123))^x124);

	if (t16 != 147) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x126 = INT8_MAX;
	int16_t x128 = INT16_MAX;

	t17 = ((x125<<(x126<=x127))^x128);

	if (t17 != 23488) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x133 = INT8_MAX;
	int32_t x134 = -8592923;
	int64_t x136 = INT64_MIN;

	t18 = ((x133<<(x134<=x135))^x136);

	if (t18 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x161 = 28;
	int64_t x163 = -966240109127LL;
	volatile int32_t x164 = 36891;
	volatile int32_t t19 = -116807978;

	t19 = ((x161<<(x162<=x163))^x164);

	if (t19 != 36871) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x169 = 19U;
	volatile int32_t x171 = -1;
	uint16_t x172 = 28U;
	int32_t t20 = -3436;

	t20 = ((x169<<(x170<=x171))^x172);

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x173 = 0;
	int16_t x174 = INT16_MAX;
	static volatile uint16_t x175 = 1322U;
	volatile int64_t x176 = INT64_MIN;

	t21 = ((x173<<(x174<=x175))^x176);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x177 = 1;
	int8_t x178 = INT8_MAX;
	uint8_t x179 = UINT8_MAX;
	static uint16_t x180 = UINT16_MAX;
	static int32_t t22 = -7457262;

	t22 = ((x177<<(x178<=x179))^x180);

	if (t22 != 65533) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x181 = 302940U;
	int64_t x182 = -1LL;
	int8_t x183 = INT8_MIN;
	int8_t x184 = 3;
	uint32_t t23 = 18123U;

	t23 = ((x181<<(x182<=x183))^x184);

	if (t23 != 302943U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x186 = 1;
	volatile int32_t x188 = INT32_MAX;
	int32_t t24 = INT32_MAX;

	t24 = ((x185<<(x186<=x187))^x188);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x189 = 74128LLU;
	int8_t x190 = INT8_MAX;
	int32_t x191 = INT32_MIN;
	volatile int8_t x192 = 30;
	uint64_t t25 = 27LLU;

	t25 = ((x189<<(x190<=x191))^x192);

	if (t25 != 74126LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x193 = INT16_MAX;
	uint8_t x194 = UINT8_MAX;
	static int8_t x195 = 10;
	int16_t x196 = INT16_MAX;
	int32_t t26 = -5692726;

	t26 = ((x193<<(x194<=x195))^x196);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x197 = INT64_MAX;
	int8_t x198 = -1;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t27 = -245088999567LL;

	t27 = ((x197<<(x198<=x199))^x200);

	if (t27 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x201 = 1982020584U;
	int16_t x203 = INT16_MIN;
	uint32_t t28 = 197056U;

	t28 = ((x201<<(x202<=x203))^x204);

	if (t28 != 2312946711U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	volatile int32_t t29 = -2500;

	t29 = ((x209<<(x210<=x211))^x212);

	if (t29 != 32747) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x217 = UINT8_MAX;
	volatile int16_t x218 = INT16_MIN;
	volatile int64_t x219 = 160694923LL;
	volatile uint32_t x220 = 198769U;
	volatile uint32_t t30 = 10U;

	t30 = ((x217<<(x218<=x219))^x220);

	if (t30 != 199055U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x225 = 9760058;
	int32_t x226 = INT32_MAX;
	uint16_t x227 = UINT16_MAX;
	uint8_t x228 = 40U;
	static volatile int32_t t31 = -216;

	t31 = ((x225<<(x226<=x227))^x228);

	if (t31 != 9760018) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x243 = -1;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = ((x241<<(x242<=x243))^x244);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x269 = 5526476060431LLU;
	int16_t x270 = -1;
	static int16_t x271 = -1;
	volatile int8_t x272 = INT8_MAX;

	t33 = ((x269<<(x270<=x271))^x272);

	if (t33 != 11052952120929LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x285 = UINT64_MAX;
	uint32_t x286 = 39542U;
	int64_t x287 = -1LL;
	volatile uint64_t t34 = 1522890445633001LLU;

	t34 = ((x285<<(x286<=x287))^x288);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x293 = INT8_MAX;
	volatile int8_t x294 = -1;
	int8_t x295 = 7;
	volatile int32_t t35 = 7;

	t35 = ((x293<<(x294<=x295))^x296);

	if (t35 != 253) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x298 = INT16_MAX;
	static uint32_t x299 = 42382452U;
	uint32_t x300 = 706778987U;
	uint32_t t36 = 0U;

	t36 = ((x297<<(x298<=x299))^x300);

	if (t36 != 706778985U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x301 = UINT16_MAX;
	uint8_t x302 = 0U;
	uint64_t x303 = 4550555079181152193LLU;
	int16_t x304 = INT16_MIN;
	volatile int32_t t37 = 367;

	t37 = ((x301<<(x302<=x303))^x304);

	if (t37 != -98306) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x305 = UINT32_MAX;
	int8_t x307 = -42;
	uint16_t x308 = 13U;
	static volatile uint32_t t38 = 31U;

	t38 = ((x305<<(x306<=x307))^x308);

	if (t38 != 4294967282U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x309 = 701U;
	int16_t x310 = -4;
	static uint8_t x312 = 1U;

	t39 = ((x309<<(x310<=x311))^x312);

	if (t39 != 700) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x313 = 40U;
	volatile int64_t x315 = 2LL;
	uint64_t x316 = 18901355LLU;
	uint64_t t40 = 298263392028313LLU;

	t40 = ((x313<<(x314<=x315))^x316);

	if (t40 != 18901315LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MAX;
	static int64_t x324 = INT64_MIN;

	t41 = ((x321<<(x322<=x323))^x324);

	if (t41 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x326 = -1;
	volatile int64_t x327 = INT64_MAX;
	static volatile int32_t x328 = INT32_MAX;

	t42 = ((x325<<(x326<=x327))^x328);

	if (t42 != 2147483649U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x329 = UINT64_MAX;
	uint16_t x330 = 0U;
	int8_t x331 = 0;
	volatile uint64_t t43 = 82043425453067751LLU;

	t43 = ((x329<<(x330<=x331))^x332);

	if (t43 != 768306LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x337 = 0;
	int32_t x338 = INT32_MIN;
	uint8_t x339 = 5U;
	int64_t x340 = INT64_MIN;
	int64_t t44 = INT64_MIN;

	t44 = ((x337<<(x338<=x339))^x340);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x349 = UINT32_MAX;
	static int8_t x350 = -4;
	int64_t x352 = -19515799LL;
	volatile int64_t t45 = 2163363563096942LL;

	t45 = ((x349<<(x350<=x351))^x352);

	if (t45 != -4275451497LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x361 = 1;
	int32_t x362 = INT32_MIN;
	static int8_t x363 = INT8_MIN;
	int32_t t46 = 12114183;

	t46 = ((x361<<(x362<=x363))^x364);

	if (t46 != -126) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MIN;
	uint64_t x371 = UINT64_MAX;

	t47 = ((x369<<(x370<=x371))^x372);

	if (t47 != 256908578178243532LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x373 = 1;
	int16_t x374 = INT16_MAX;
	volatile int16_t x375 = -1;
	int64_t x376 = -1LL;
	static int64_t t48 = -56438605LL;

	t48 = ((x373<<(x374<=x375))^x376);

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x385 = 16664824;
	uint16_t x386 = 1740U;
	volatile int16_t x387 = -1;
	int8_t x388 = INT8_MIN;

	t49 = ((x385<<(x386<=x387))^x388);

	if (t49 != -16664712) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x393 = INT64_MAX;
	int16_t x394 = 495;
	int8_t x395 = -1;
	volatile int64_t t50 = -103527006102688LL;

	t50 = ((x393<<(x394<=x395))^x396);

	if (t50 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x397 = 1333480805LLU;
	static uint8_t x398 = 90U;
	static int32_t x400 = INT32_MIN;

	t51 = ((x397<<(x398<=x399))^x400);

	if (t51 != 18446744069934062282LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x401 = 94;
	int8_t x402 = 0;
	static int64_t x404 = 612295928724207LL;
	volatile int64_t t52 = -982260780661563719LL;

	t52 = ((x401<<(x402<=x403))^x404);

	if (t52 != 612295928724051LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x405 = INT8_MAX;
	static volatile int32_t x406 = INT32_MAX;
	uint32_t x407 = UINT32_MAX;
	volatile int16_t x408 = INT16_MIN;

	t53 = ((x405<<(x406<=x407))^x408);

	if (t53 != -32514) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x413 = INT8_MAX;
	volatile uint32_t x414 = 16027354U;
	uint8_t x415 = 21U;
	uint16_t x416 = UINT16_MAX;
	static volatile int32_t t54 = 1;

	t54 = ((x413<<(x414<=x415))^x416);

	if (t54 != 65408) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x421 = 892LLU;
	int64_t x422 = -1LL;
	uint64_t x423 = UINT64_MAX;
	static volatile int16_t x424 = INT16_MIN;
	volatile uint64_t t55 = 722LLU;

	t55 = ((x421<<(x422<=x423))^x424);

	if (t55 != 18446744073709520632LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x433 = 3090178U;
	volatile uint16_t x434 = 400U;
	int8_t x436 = -1;
	uint32_t t56 = 1059212781U;

	t56 = ((x433<<(x434<=x435))^x436);

	if (t56 != 4291877117U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x449 = UINT8_MAX;
	uint64_t x452 = 1043136958115884LLU;
	static volatile uint64_t t57 = 6LLU;

	t57 = ((x449<<(x450<=x451))^x452);

	if (t57 != 1043136958116051LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x453 = 20;
	static int32_t x454 = INT32_MIN;
	int64_t x456 = -33389949596LL;

	t58 = ((x453<<(x454<=x455))^x456);

	if (t58 != -33389949620LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x457 = 0;
	static volatile int8_t x459 = INT8_MAX;
	int32_t x460 = 3763;
	volatile int32_t t59 = 1;

	t59 = ((x457<<(x458<=x459))^x460);

	if (t59 != 3763) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x461 = INT8_MAX;
	volatile int64_t x462 = INT64_MAX;
	int32_t x464 = INT32_MAX;
	int32_t t60 = 35804651;

	t60 = ((x461<<(x462<=x463))^x464);

	if (t60 != 2147483520) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x468 = 1784864379U;
	volatile uint32_t t61 = 7186U;

	t61 = ((x465<<(x466<=x467))^x468);

	if (t61 != 1749507659U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x469 = 1544465588591823LL;
	int16_t x470 = -6271;
	volatile uint8_t x472 = 1U;

	t62 = ((x469<<(x470<=x471))^x472);

	if (t62 != 3088931177183647LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x478 = 71U;
	int16_t x479 = -1;
	int64_t x480 = INT64_MIN;
	volatile int64_t t63 = -38206694938LL;

	t63 = ((x477<<(x478<=x479))^x480);

	if (t63 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x481 = 191U;
	int64_t x482 = INT64_MIN;
	int16_t x484 = INT16_MIN;
	uint32_t t64 = 67519013U;

	t64 = ((x481<<(x482<=x483))^x484);

	if (t64 != 4294934719U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x497 = 7U;
	static int32_t x498 = INT32_MAX;
	int16_t x499 = INT16_MIN;

	t65 = ((x497<<(x498<=x499))^x500);

	if (t65 != 65528) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x509 = 1310U;
	int16_t x510 = -2;
	int32_t x511 = 1;
	int16_t x512 = INT16_MIN;
	uint32_t t66 = 1U;

	t66 = ((x509<<(x510<=x511))^x512);

	if (t66 != 4294937148U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x521 = 24U;
	volatile int32_t x522 = 857483122;
	int64_t x523 = INT64_MIN;
	volatile int8_t x524 = INT8_MIN;

	t67 = ((x521<<(x522<=x523))^x524);

	if (t67 != -104) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x525 = 84U;
	uint64_t x526 = 224787476641412LLU;
	int32_t x527 = INT32_MAX;

	t68 = ((x525<<(x526<=x527))^x528);

	if (t68 != 43) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x541 = UINT64_MAX;
	int64_t x542 = INT64_MIN;
	static volatile int32_t x543 = INT32_MAX;
	uint16_t x544 = 5U;
	uint64_t t69 = 25LLU;

	t69 = ((x541<<(x542<=x543))^x544);

	if (t69 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x545 = 27718095793530LL;
	int64_t x546 = INT64_MIN;
	static volatile uint64_t x547 = 63559716426562423LLU;
	static int16_t x548 = INT16_MIN;

	t70 = ((x545<<(x546<=x547))^x548);

	if (t70 != -27718095770246LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x549 = 51022U;
	volatile int32_t x552 = INT32_MIN;
	volatile uint32_t t71 = 18U;

	t71 = ((x549<<(x550<=x551))^x552);

	if (t71 != 2147585692U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x557 = 1413686U;
	uint16_t x558 = 1U;
	int8_t x559 = INT8_MIN;
	int8_t x560 = -1;
	volatile uint32_t t72 = 295131U;

	t72 = ((x557<<(x558<=x559))^x560);

	if (t72 != 4293553609U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x561 = 836U;
	int16_t x562 = 16152;
	int64_t x563 = INT64_MAX;
	int32_t t73 = -316355150;

	t73 = ((x561<<(x562<=x563))^x564);

	if (t73 != -1784) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x569 = 270732670476163LL;
	static volatile int16_t x570 = INT16_MAX;
	uint16_t x571 = UINT16_MAX;
	volatile int64_t t74 = 1061117311376LL;

	t74 = ((x569<<(x570<=x571))^x572);

	if (t74 != 9222830571513823481LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x577 = 115562U;
	int16_t x578 = INT16_MAX;
	volatile int8_t x579 = INT8_MIN;
	static int16_t x580 = -1;

	t75 = ((x577<<(x578<=x579))^x580);

	if (t75 != 4294851733U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x601 = 5;
	uint8_t x602 = UINT8_MAX;
	uint64_t x603 = 4556410850222389582LLU;
	int64_t x604 = INT64_MAX;

	t76 = ((x601<<(x602<=x603))^x604);

	if (t76 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x617 = 16953U;
	int64_t x618 = 3775651848923LL;
	uint32_t x619 = 8620U;
	static int32_t x620 = INT32_MAX;
	volatile uint32_t t77 = 827U;

	t77 = ((x617<<(x618<=x619))^x620);

	if (t77 != 2147466694U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x621 = 1U;
	int32_t t78 = 2422;

	t78 = ((x621<<(x622<=x623))^x624);

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x625 = INT32_MAX;
	uint32_t x626 = 886716320U;
	static volatile int64_t x628 = INT64_MIN;
	volatile int64_t t79 = 426230112967009LL;

	t79 = ((x625<<(x626<=x627))^x628);

	if (t79 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x637 = 25593;
	volatile int8_t x639 = -1;
	int16_t x640 = INT16_MIN;
	volatile int32_t t80 = 229;

	t80 = ((x637<<(x638<=x639))^x640);

	if (t80 != -47118) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x642 = INT16_MIN;
	int16_t x643 = INT16_MAX;
	static int32_t x644 = -1;
	int32_t t81 = -213660482;

	t81 = ((x641<<(x642<=x643))^x644);

	if (t81 != -67) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x649 = 3U;
	int8_t x650 = -61;
	uint32_t x651 = 66U;
	volatile int32_t x652 = INT32_MIN;
	int32_t t82 = 14334;

	t82 = ((x649<<(x650<=x651))^x652);

	if (t82 != -2147483645) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x653 = UINT32_MAX;
	volatile int32_t x655 = -6875010;
	static volatile uint32_t t83 = 83628U;

	t83 = ((x653<<(x654<=x655))^x656);

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x665 = UINT16_MAX;
	static int16_t x666 = INT16_MAX;
	int16_t x667 = -9;
	int64_t x668 = INT64_MIN;
	int64_t t84 = 0LL;

	t84 = ((x665<<(x666<=x667))^x668);

	if (t84 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x670 = UINT16_MAX;
	uint16_t x671 = UINT16_MAX;
	uint64_t x672 = 26553LLU;
	volatile uint64_t t85 = 59993062797576375LLU;

	t85 = ((x669<<(x670<=x671))^x672);

	if (t85 != 104519LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x673 = 643210657U;
	int8_t x674 = 19;
	int8_t x675 = 5;
	static uint32_t x676 = 170490417U;
	static volatile uint32_t t86 = 5U;

	t86 = ((x673<<(x674<=x675))^x676);

	if (t86 != 746579856U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x689 = INT64_MAX;
	volatile int16_t x690 = 1;
	int8_t x692 = INT8_MIN;
	volatile int64_t t87 = 133335306246117LL;

	t87 = ((x689<<(x690<=x691))^x692);

	if (t87 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x695 = UINT32_MAX;
	int64_t x696 = INT64_MIN;
	static volatile int64_t t88 = 10788000465815LL;

	t88 = ((x693<<(x694<=x695))^x696);

	if (t88 != -9223372036854775718LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x701 = 14U;
	int64_t x702 = 3780558594960989095LL;
	int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MAX;
	int32_t t89 = -855690805;

	t89 = ((x701<<(x702<=x703))^x704);

	if (t89 != 113) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x710 = -1LL;
	volatile int8_t x711 = -1;
	int32_t x712 = INT32_MIN;
	uint32_t t90 = 2U;

	t90 = ((x709<<(x710<=x711))^x712);

	if (t90 != 2165544562U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x713 = UINT64_MAX;
	uint32_t x714 = UINT32_MAX;
	int32_t x715 = -273;
	static uint8_t x716 = 5U;

	t91 = ((x713<<(x714<=x715))^x716);

	if (t91 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x731 = UINT64_MAX;
	uint32_t x732 = 6789U;
	volatile uint32_t t92 = 13383798U;

	t92 = ((x729<<(x730<=x731))^x732);

	if (t92 != 6779U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x737 = INT8_MAX;
	static int8_t x738 = 4;
	uint32_t x739 = 1495051U;
	static int32_t x740 = -1;

	t93 = ((x737<<(x738<=x739))^x740);

	if (t93 != -255) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x741 = 5330972;
	int64_t x742 = -1LL;
	uint16_t x743 = 4U;
	int8_t x744 = -1;
	int32_t t94 = 310751840;

	t94 = ((x741<<(x742<=x743))^x744);

	if (t94 != -10661945) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x745 = 2149U;
	int16_t x747 = INT16_MIN;
	static int64_t x748 = INT64_MAX;
	int64_t t95 = -640016531780LL;

	t95 = ((x745<<(x746<=x747))^x748);

	if (t95 != 9223372036854773658LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x749 = 1;
	uint16_t x750 = 3U;
	static int32_t x751 = INT32_MIN;
	uint32_t t96 = 2752656U;

	t96 = ((x749<<(x750<=x751))^x752);

	if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x769 = UINT8_MAX;
	int8_t x770 = -1;
	int32_t x771 = INT32_MAX;
	static int8_t x772 = INT8_MIN;
	int32_t t97 = 10915135;

	t97 = ((x769<<(x770<=x771))^x772);

	if (t97 != -386) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x777 = 370446011LL;
	volatile uint32_t x778 = UINT32_MAX;
	uint8_t x779 = UINT8_MAX;
	int64_t x780 = -245831579404441LL;

	t98 = ((x777<<(x778<=x779))^x780);

	if (t98 != -245831209027108LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x781 = UINT64_MAX;
	static int32_t x783 = INT32_MIN;
	volatile int64_t x784 = INT64_MIN;
	volatile uint64_t t99 = 66684322257LLU;

	t99 = ((x781<<(x782<=x783))^x784);

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

