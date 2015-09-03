#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 382U;
volatile int16_t x5 = -1;
int8_t x7 = INT8_MIN;
volatile int8_t x14 = 1;
int32_t x15 = -12;
int16_t x16 = INT16_MAX;
static volatile int32_t t5 = -19106273;
int32_t t6 = 18266805;
volatile int64_t x41 = -623408295118045LL;
uint32_t x43 = 8186456U;
volatile int32_t t9 = -544529142;
volatile int32_t x79 = INT32_MIN;
static int16_t x111 = INT16_MIN;
uint64_t x123 = 19LLU;
int8_t x142 = INT8_MIN;
int64_t x143 = INT64_MIN;
static int32_t x150 = INT32_MIN;
volatile int8_t x154 = INT8_MAX;
volatile int32_t t17 = 649;
static uint8_t x158 = UINT8_MAX;
int64_t x162 = -1LL;
uint8_t x168 = 2U;
int16_t x172 = 173;
volatile int32_t t21 = 770;
int16_t x174 = -186;
static uint8_t x175 = 24U;
int64_t x199 = -1LL;
volatile int32_t t25 = 686;
int16_t x221 = INT16_MAX;
static int64_t x251 = INT64_MIN;
int32_t x252 = INT32_MAX;
static uint8_t x257 = UINT8_MAX;
uint64_t x271 = 12640225368LLU;
int32_t x276 = -1;
int32_t x289 = INT32_MAX;
static int32_t x290 = -100;
volatile int32_t t36 = -226;
static int8_t x296 = 23;
static int32_t t37 = -150376798;
volatile int32_t x304 = 219619293;
int16_t x307 = -1;
static volatile int32_t t41 = 6754;
int64_t x317 = -1LL;
int32_t x324 = -6357;
static uint8_t x353 = UINT8_MAX;
static volatile int32_t t47 = -166;
volatile int16_t x364 = -1;
int64_t x369 = 3705871955035561LL;
int32_t t52 = 30567390;
static uint16_t x406 = 62U;
volatile int32_t t54 = -429065;
uint64_t x456 = UINT64_MAX;
static int16_t x463 = -44;
volatile int16_t x465 = INT16_MAX;
volatile int32_t t62 = -11237053;
volatile uint64_t x494 = 43422127356054736LLU;
int16_t x495 = 2135;
int32_t t63 = 81837124;
int64_t x499 = INT64_MIN;
int32_t t64 = -12925;
volatile int32_t t65 = 1;
int16_t x516 = 2798;
int16_t x521 = INT16_MIN;
static int32_t t70 = 5;
static int32_t x547 = INT32_MIN;
int64_t x563 = INT64_MIN;
static int16_t x564 = -1;
uint64_t x568 = 3285937266LLU;
volatile int32_t x578 = INT32_MAX;
volatile int32_t t77 = -7;
static int8_t x600 = -2;
volatile int32_t t80 = -4255;
static volatile int32_t t81 = -1409778;
int16_t x617 = INT16_MAX;
volatile int32_t t84 = -60508956;
static int64_t x654 = -1LL;
int32_t x655 = INT32_MIN;
volatile int64_t x656 = -1LL;
volatile uint64_t x664 = 309575520227LLU;
int32_t t87 = 253548;
uint64_t x697 = 399LLU;
static uint16_t x698 = 351U;
int16_t x699 = INT16_MIN;
uint16_t x702 = 20112U;
volatile int64_t x714 = INT64_MIN;
volatile int32_t t93 = -123;
uint16_t x725 = 78U;
int16_t x727 = INT16_MIN;
int32_t x740 = INT32_MAX;
volatile int32_t t97 = -121;
volatile int32_t x753 = -1;
uint8_t x754 = 0U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MIN;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 1712;

	t0 = (x1==(x2/(x3<=x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x6 = UINT32_MAX;
	int8_t x8 = -1;
	int32_t t1 = -1797248;

	t1 = (x5==(x6/(x7<=x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 109U;
	int16_t x10 = 0;
	uint32_t x11 = 0U;
	volatile uint16_t x12 = 1U;
	volatile int32_t t2 = 38658258;

	t2 = (x9==(x10/(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 10;
	volatile int32_t t3 = 1;

	t3 = (x13==(x14/(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int64_t x18 = -21LL;
	volatile int8_t x19 = -5;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -1;

	t4 = (x17==(x18/(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -76LL;
	uint16_t x22 = 10070U;
	int64_t x23 = INT64_MIN;
	int32_t x24 = 0;

	t5 = (x21==(x22/(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = -25;
	int8_t x38 = 7;
	int8_t x39 = INT8_MAX;
	uint16_t x40 = UINT16_MAX;

	t6 = (x37==(x38/(x39<=x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x42 = INT32_MIN;
	int8_t x44 = INT8_MIN;
	static int32_t t7 = -2876;

	t7 = (x41==(x42/(x43<=x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x69 = 1;
	uint8_t x70 = UINT8_MAX;
	volatile int8_t x71 = 1;
	int32_t x72 = 70013;
	int32_t t8 = 7990;

	t8 = (x69==(x70/(x71<=x72)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x73 = 2156683U;
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = UINT32_MAX;

	t9 = (x73==(x74/(x75<=x76)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x77 = 61LLU;
	int8_t x78 = INT8_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t10 = 14364;

	t10 = (x77==(x78/(x79<=x80)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x89 = INT16_MAX;
	int64_t x90 = INT64_MIN;
	int64_t x91 = -1LL;
	int16_t x92 = -1;
	volatile int32_t t11 = -13;

	t11 = (x89==(x90/(x91<=x92)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MIN;
	int8_t x107 = -8;
	static int16_t x108 = 10;
	static volatile int32_t t12 = 251053;

	t12 = (x105==(x106/(x107<=x108)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x109 = 0;
	static int8_t x110 = INT8_MIN;
	int32_t x112 = INT32_MAX;
	int32_t t13 = -619928;

	t13 = (x109==(x110/(x111<=x112)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x121 = -1LL;
	static volatile int64_t x122 = -4718800725LL;
	int64_t x124 = INT64_MIN;
	static int32_t t14 = -151785161;

	t14 = (x121==(x122/(x123<=x124)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x141 = INT16_MIN;
	volatile int32_t x144 = -1;
	int32_t t15 = 17288001;

	t15 = (x141==(x142/(x143<=x144)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x149 = 63912758U;
	int8_t x151 = INT8_MIN;
	static int32_t x152 = INT32_MAX;
	volatile int32_t t16 = -21178;

	t16 = (x149==(x150/(x151<=x152)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x153 = 1228633U;
	int32_t x155 = INT32_MIN;
	volatile int8_t x156 = -13;

	t17 = (x153==(x154/(x155<=x156)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x157 = INT8_MIN;
	int64_t x159 = -63938LL;
	int64_t x160 = -1LL;
	volatile int32_t t18 = 8388134;

	t18 = (x157==(x158/(x159<=x160)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x161 = INT16_MIN;
	int32_t x163 = -1025;
	int8_t x164 = INT8_MAX;
	int32_t t19 = 497688;

	t19 = (x161==(x162/(x163<=x164)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MAX;
	int32_t x167 = -218;
	volatile int32_t t20 = -25;

	t20 = (x165==(x166/(x167<=x168)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	volatile int64_t x171 = INT64_MIN;

	t21 = (x169==(x170/(x171<=x172)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x173 = INT16_MIN;
	uint64_t x176 = 193046749LLU;
	static volatile int32_t t22 = -67495;

	t22 = (x173==(x174/(x175<=x176)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x193 = -7LL;
	uint32_t x194 = 1807661U;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MAX;
	volatile int32_t t23 = 7155;

	t23 = (x193==(x194/(x195<=x196)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x197 = UINT32_MAX;
	volatile int32_t x198 = -1;
	int8_t x200 = 7;
	volatile int32_t t24 = -35;

	t24 = (x197==(x198/(x199<=x200)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MIN;
	int8_t x211 = -1;
	static int64_t x212 = 368949220525967335LL;

	t25 = (x209==(x210/(x211<=x212)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x222 = -1;
	static int8_t x223 = -1;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t26 = 826782;

	t26 = (x221==(x222/(x223<=x224)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int64_t x231 = 1024232573908LL;
	int64_t x232 = INT64_MAX;
	volatile int32_t t27 = 1940;

	t27 = (x229==(x230/(x231<=x232)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x241 = 156317740326418083LLU;
	int64_t x242 = INT64_MAX;
	uint8_t x243 = 16U;
	static uint8_t x244 = UINT8_MAX;
	int32_t t28 = -4040046;

	t28 = (x241==(x242/(x243<=x244)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x249 = -3;
	uint64_t x250 = 4765LLU;
	volatile int32_t t29 = 5;

	t29 = (x249==(x250/(x251<=x252)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x258 = INT16_MIN;
	volatile int32_t x259 = -1;
	uint16_t x260 = 10514U;
	static volatile int32_t t30 = 610;

	t30 = (x257==(x258/(x259<=x260)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x269 = 39;
	int16_t x270 = INT16_MIN;
	volatile int32_t x272 = -1;
	volatile int32_t t31 = 262;

	t31 = (x269==(x270/(x271<=x272)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x273 = 2682;
	volatile int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MIN;
	static int32_t t32 = -33420;

	t32 = (x273==(x274/(x275<=x276)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x277 = 0LLU;
	volatile uint8_t x278 = UINT8_MAX;
	int32_t x279 = INT32_MIN;
	static int64_t x280 = 17458316868888690LL;
	volatile int32_t t33 = 237;

	t33 = (x277==(x278/(x279<=x280)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x281 = UINT32_MAX;
	int32_t x282 = INT32_MIN;
	int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	static volatile int32_t t34 = 7;

	t34 = (x281==(x282/(x283<=x284)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	int32_t x287 = -1;
	uint64_t x288 = UINT64_MAX;
	int32_t t35 = 52;

	t35 = (x285==(x286/(x287<=x288)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x291 = UINT32_MAX;
	int16_t x292 = -1;

	t36 = (x289==(x290/(x291<=x292)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x293 = 5;
	int32_t x294 = INT32_MAX;
	int16_t x295 = INT16_MIN;

	t37 = (x293==(x294/(x295<=x296)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = 63;
	uint64_t x299 = 0LLU;
	int8_t x300 = -1;
	int32_t t38 = 32660;

	t38 = (x297==(x298/(x299<=x300)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x301 = INT16_MAX;
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = INT64_MIN;
	int32_t t39 = -5427422;

	t39 = (x301==(x302/(x303<=x304)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x305 = 3U;
	int64_t x306 = -1LL;
	static volatile uint8_t x308 = UINT8_MAX;
	int32_t t40 = 8945;

	t40 = (x305==(x306/(x307<=x308)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x313 = 3959;
	volatile int64_t x314 = 1067660709912173108LL;
	int8_t x315 = 9;
	uint32_t x316 = 12030289U;

	t41 = (x313==(x314/(x315<=x316)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x318 = 6U;
	int64_t x319 = INT64_MIN;
	uint8_t x320 = UINT8_MAX;
	int32_t t42 = -4246;

	t42 = (x317==(x318/(x319<=x320)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x321 = -5;
	int32_t x322 = -1;
	int32_t x323 = INT32_MIN;
	int32_t t43 = -35571495;

	t43 = (x321==(x322/(x323<=x324)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x325 = INT16_MIN;
	int8_t x326 = -1;
	volatile int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MAX;
	int32_t t44 = 474889825;

	t44 = (x325==(x326/(x327<=x328)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x329 = 4166445321408LL;
	int32_t x330 = -1;
	volatile int16_t x331 = -1;
	int64_t x332 = INT64_MAX;
	int32_t t45 = -439;

	t45 = (x329==(x330/(x331<=x332)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x341 = 1243733;
	uint64_t x342 = 2033939176989LLU;
	int16_t x343 = -14933;
	int64_t x344 = INT64_MAX;
	static volatile int32_t t46 = -504;

	t46 = (x341==(x342/(x343<=x344)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x354 = UINT64_MAX;
	int8_t x355 = 0;
	int16_t x356 = INT16_MAX;

	t47 = (x353==(x354/(x355<=x356)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int16_t x358 = 1;
	static int64_t x359 = -125615479834373283LL;
	static int16_t x360 = INT16_MIN;
	volatile int32_t t48 = 56525;

	t48 = (x357==(x358/(x359<=x360)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x361 = 5741101479620091143LLU;
	int64_t x362 = INT64_MIN;
	volatile int32_t x363 = INT32_MIN;
	int32_t t49 = 1;

	t49 = (x361==(x362/(x363<=x364)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x370 = -1LL;
	static uint64_t x371 = 23446447236921LLU;
	int16_t x372 = -1;
	static volatile int32_t t50 = -819;

	t50 = (x369==(x370/(x371<=x372)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x385 = 7689554LLU;
	volatile uint32_t x386 = UINT32_MAX;
	static uint32_t x387 = 146081U;
	int32_t x388 = -1;
	volatile int32_t t51 = 8;

	t51 = (x385==(x386/(x387<=x388)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x397 = UINT64_MAX;
	uint64_t x398 = 135053463217973667LLU;
	uint32_t x399 = 23U;
	int64_t x400 = 3008491763774298571LL;

	t52 = (x397==(x398/(x399<=x400)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x401 = UINT8_MAX;
	int32_t x402 = INT32_MIN;
	int64_t x403 = -795645LL;
	uint8_t x404 = 2U;
	volatile int32_t t53 = -40;

	t53 = (x401==(x402/(x403<=x404)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x405 = -1;
	int16_t x407 = INT16_MIN;
	int32_t x408 = -1;

	t54 = (x405==(x406/(x407<=x408)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x413 = UINT8_MAX;
	int32_t x414 = 3;
	int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MIN;
	volatile int32_t t55 = 1192343;

	t55 = (x413==(x414/(x415<=x416)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x441 = -1;
	uint8_t x442 = 6U;
	uint16_t x443 = 173U;
	volatile uint16_t x444 = 264U;
	volatile int32_t t56 = -967206029;

	t56 = (x441==(x442/(x443<=x444)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x449 = -1LL;
	int16_t x450 = INT16_MIN;
	int32_t x451 = -170;
	int8_t x452 = -1;
	volatile int32_t t57 = 1;

	t57 = (x449==(x450/(x451<=x452)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x453 = 2;
	int16_t x454 = INT16_MIN;
	volatile int8_t x455 = -2;
	volatile int32_t t58 = 13426341;

	t58 = (x453==(x454/(x455<=x456)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x461 = UINT64_MAX;
	uint64_t x462 = UINT64_MAX;
	volatile int8_t x464 = -5;
	int32_t t59 = -11834718;

	t59 = (x461==(x462/(x463<=x464)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x466 = -1LL;
	volatile int64_t x467 = -998884LL;
	int32_t x468 = INT32_MAX;
	volatile int32_t t60 = -580;

	t60 = (x465==(x466/(x467<=x468)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x473 = INT32_MIN;
	volatile int32_t x474 = -1;
	int16_t x475 = -1;
	int8_t x476 = -1;
	int32_t t61 = -607505;

	t61 = (x473==(x474/(x475<=x476)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x485 = 0U;
	int8_t x486 = INT8_MIN;
	uint64_t x487 = 1LLU;
	volatile int16_t x488 = INT16_MAX;

	t62 = (x485==(x486/(x487<=x488)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x493 = -1;
	static uint32_t x496 = UINT32_MAX;

	t63 = (x493==(x494/(x495<=x496)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x497 = 12U;
	int64_t x498 = -8LL;
	int8_t x500 = -2;

	t64 = (x497==(x498/(x499<=x500)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x509 = INT8_MIN;
	static int32_t x510 = INT32_MAX;
	int64_t x511 = INT64_MIN;
	uint64_t x512 = UINT64_MAX;

	t65 = (x509==(x510/(x511<=x512)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x513 = INT32_MIN;
	uint32_t x514 = UINT32_MAX;
	static int16_t x515 = INT16_MIN;
	int32_t t66 = -117995;

	t66 = (x513==(x514/(x515<=x516)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x522 = INT64_MIN;
	static int32_t x523 = INT32_MIN;
	int32_t x524 = -196433;
	int32_t t67 = -125315;

	t67 = (x521==(x522/(x523<=x524)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x529 = INT32_MAX;
	uint16_t x530 = 604U;
	int64_t x531 = INT64_MIN;
	int16_t x532 = 75;
	int32_t t68 = 882164;

	t68 = (x529==(x530/(x531<=x532)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x533 = INT16_MIN;
	static uint8_t x534 = 50U;
	int64_t x535 = INT64_MIN;
	static int32_t x536 = INT32_MIN;
	int32_t t69 = 150112;

	t69 = (x533==(x534/(x535<=x536)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x537 = INT16_MAX;
	int64_t x538 = 8517400539547LL;
	int32_t x539 = INT32_MIN;
	int8_t x540 = INT8_MAX;

	t70 = (x537==(x538/(x539<=x540)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x545 = INT64_MIN;
	int16_t x546 = -1;
	uint64_t x548 = UINT64_MAX;
	int32_t t71 = 6;

	t71 = (x545==(x546/(x547<=x548)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x553 = UINT64_MAX;
	int32_t x554 = INT32_MAX;
	int8_t x555 = INT8_MIN;
	static int8_t x556 = 1;
	static int32_t t72 = -26355;

	t72 = (x553==(x554/(x555<=x556)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x557 = 1419521840U;
	int8_t x558 = INT8_MIN;
	int64_t x559 = -99721893010615087LL;
	int8_t x560 = -1;
	int32_t t73 = -109115501;

	t73 = (x557==(x558/(x559<=x560)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x561 = INT64_MIN;
	int8_t x562 = INT8_MIN;
	static int32_t t74 = -47966;

	t74 = (x561==(x562/(x563<=x564)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x565 = 298U;
	int16_t x566 = INT16_MIN;
	int64_t x567 = 224943684LL;
	volatile int32_t t75 = 3748449;

	t75 = (x565==(x566/(x567<=x568)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x573 = INT64_MIN;
	uint64_t x574 = 111364356LLU;
	int32_t x575 = 1602;
	int64_t x576 = 1067734314343572LL;
	volatile int32_t t76 = -2;

	t76 = (x573==(x574/(x575<=x576)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x577 = 3016680986LLU;
	int32_t x579 = 0;
	uint8_t x580 = 1U;

	t77 = (x577==(x578/(x579<=x580)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x581 = INT8_MIN;
	static uint8_t x582 = UINT8_MAX;
	volatile int8_t x583 = INT8_MAX;
	int64_t x584 = 7877085813LL;
	int32_t t78 = 195565;

	t78 = (x581==(x582/(x583<=x584)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x589 = 156341895LL;
	uint32_t x590 = 888738058U;
	volatile int32_t x591 = -24703220;
	int32_t x592 = 679946;
	static int32_t t79 = -34028;

	t79 = (x589==(x590/(x591<=x592)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x597 = INT64_MAX;
	volatile uint32_t x598 = 247053574U;
	uint64_t x599 = 109358LLU;

	t80 = (x597==(x598/(x599<=x600)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x613 = -2432501507180964885LL;
	int64_t x614 = INT64_MIN;
	static int32_t x615 = INT32_MIN;
	int8_t x616 = 1;

	t81 = (x613==(x614/(x615<=x616)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x618 = -1LL;
	volatile uint32_t x619 = 80U;
	static volatile uint32_t x620 = 11731842U;
	int32_t t82 = -1;

	t82 = (x617==(x618/(x619<=x620)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x637 = -1;
	static int16_t x638 = 2815;
	static int8_t x639 = INT8_MIN;
	int16_t x640 = -1;
	int32_t t83 = 3189;

	t83 = (x637==(x638/(x639<=x640)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x645 = UINT64_MAX;
	volatile int64_t x646 = -1LL;
	volatile int8_t x647 = INT8_MAX;
	int8_t x648 = INT8_MAX;

	t84 = (x645==(x646/(x647<=x648)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x653 = UINT16_MAX;
	volatile int32_t t85 = -24;

	t85 = (x653==(x654/(x655<=x656)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x661 = -1;
	static volatile int16_t x662 = INT16_MAX;
	static uint8_t x663 = UINT8_MAX;
	int32_t t86 = 0;

	t86 = (x661==(x662/(x663<=x664)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x677 = 1860620677U;
	static volatile uint16_t x678 = UINT16_MAX;
	uint32_t x679 = 126163U;
	int16_t x680 = INT16_MIN;

	t87 = (x677==(x678/(x679<=x680)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x681 = 10;
	int16_t x682 = -212;
	uint64_t x683 = 6345430195626330LLU;
	volatile int32_t x684 = INT32_MIN;
	int32_t t88 = -111075;

	t88 = (x681==(x682/(x683<=x684)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x700 = 10;
	volatile int32_t t89 = -6556;

	t89 = (x697==(x698/(x699<=x700)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x701 = INT16_MIN;
	static volatile uint16_t x703 = UINT16_MAX;
	uint16_t x704 = UINT16_MAX;
	int32_t t90 = 6702222;

	t90 = (x701==(x702/(x703<=x704)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x709 = INT64_MIN;
	volatile int32_t x710 = -934337;
	static int8_t x711 = INT8_MIN;
	static volatile uint16_t x712 = 30U;
	volatile int32_t t91 = -948065;

	t91 = (x709==(x710/(x711<=x712)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x713 = UINT16_MAX;
	volatile int16_t x715 = INT16_MAX;
	uint16_t x716 = UINT16_MAX;
	volatile int32_t t92 = 375907706;

	t92 = (x713==(x714/(x715<=x716)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x717 = -1;
	int32_t x718 = -1;
	int8_t x719 = -9;
	int32_t x720 = 3517610;

	t93 = (x717==(x718/(x719<=x720)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x721 = UINT8_MAX;
	int64_t x722 = 2110485689529219LL;
	static int8_t x723 = INT8_MIN;
	int16_t x724 = 66;
	static volatile int32_t t94 = -160;

	t94 = (x721==(x722/(x723<=x724)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x726 = 5708250035141850248LLU;
	uint8_t x728 = UINT8_MAX;
	int32_t t95 = 288237;

	t95 = (x725==(x726/(x727<=x728)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x729 = INT32_MIN;
	int16_t x730 = -1;
	int64_t x731 = INT64_MIN;
	int8_t x732 = -13;
	static volatile int32_t t96 = 3034320;

	t96 = (x729==(x730/(x731<=x732)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x737 = UINT64_MAX;
	uint32_t x738 = 771U;
	int16_t x739 = INT16_MIN;

	t97 = (x737==(x738/(x739<=x740)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x745 = 13434U;
	int16_t x746 = -1;
	static int64_t x747 = -1LL;
	volatile uint32_t x748 = UINT32_MAX;
	int32_t t98 = 7603720;

	t98 = (x745==(x746/(x747<=x748)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x755 = 8383U;
	static uint32_t x756 = UINT32_MAX;
	static int32_t t99 = 113;

	t99 = (x753==(x754/(x755<=x756)));

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

