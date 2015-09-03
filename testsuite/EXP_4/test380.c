#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x10 = 3;
volatile uint64_t t1 = 47330082LLU;
int16_t x22 = -1;
int64_t x32 = -10136646147030LL;
int64_t x33 = INT64_MIN;
volatile int32_t x34 = INT32_MAX;
static uint64_t x35 = 3048958966021977LLU;
int16_t x36 = INT16_MAX;
volatile uint64_t t5 = 176585460LLU;
uint32_t x65 = 1290688312U;
int8_t x68 = -1;
static uint32_t x80 = 5759U;
int32_t x87 = 498488;
int64_t x91 = -1LL;
int32_t x92 = INT32_MAX;
static uint64_t x101 = UINT64_MAX;
uint64_t x103 = UINT64_MAX;
volatile int32_t t17 = 1573;
uint8_t x119 = 1U;
static int64_t t18 = 2107960LL;
int8_t x151 = -1;
static int8_t x153 = INT8_MIN;
volatile int64_t x156 = -1LL;
int64_t x161 = -1LL;
static int64_t t24 = 19200LL;
uint8_t x201 = UINT8_MAX;
int16_t x205 = 862;
volatile int8_t x209 = -1;
uint16_t x211 = 10U;
uint32_t x212 = UINT32_MAX;
volatile uint64_t t32 = 2248409772LLU;
static uint16_t x233 = 613U;
volatile uint64_t x249 = 5619LLU;
uint64_t t38 = 176533429261LLU;
uint64_t x271 = UINT64_MAX;
int32_t x273 = -1804198;
int8_t x275 = 1;
uint32_t x300 = UINT32_MAX;
uint16_t x303 = 22685U;
int64_t x310 = INT64_MAX;
int16_t x311 = INT16_MIN;
uint64_t x312 = UINT64_MAX;
volatile uint64_t t45 = 3627144740412791LLU;
volatile uint32_t t46 = 176U;
uint64_t x338 = UINT64_MAX;
int8_t x339 = -1;
uint64_t t47 = 54415348LLU;
int8_t x350 = -1;
uint8_t x351 = UINT8_MAX;
int16_t x357 = INT16_MAX;
volatile uint32_t x360 = UINT32_MAX;
volatile uint8_t x365 = UINT8_MAX;
static volatile int16_t x367 = -1;
int32_t x377 = INT32_MIN;
int32_t x380 = -241;
int64_t x404 = -1LL;
int64_t x415 = -1LL;
volatile uint64_t t60 = 25LLU;
int8_t x425 = -50;
volatile int16_t x429 = INT16_MIN;
volatile uint64_t t63 = 4618705612768430LLU;
int8_t x441 = 2;
volatile uint64_t x442 = 1LLU;
int16_t x444 = INT16_MIN;
static uint64_t x447 = 21LLU;
static int64_t x451 = 1596605403LL;
int64_t x453 = -1LL;
int8_t x457 = 0;
static int32_t x460 = INT32_MIN;
int64_t x462 = 3596314029LL;
uint8_t x479 = 123U;
int8_t x480 = INT8_MAX;
uint16_t x482 = 5U;
uint32_t x484 = UINT32_MAX;
static volatile int64_t t72 = 25132400LL;
int32_t x488 = 1;
static volatile int32_t t73 = -19;
int64_t t74 = 3574798LL;
int64_t t75 = 3769630524026LL;
int64_t x510 = INT64_MIN;
int8_t x512 = -1;
static uint8_t x525 = 38U;
int16_t x527 = -1;
volatile int32_t t78 = 131;
int8_t x533 = INT8_MAX;
int8_t x535 = -7;
uint32_t x536 = UINT32_MAX;
volatile int64_t t80 = -415093358LL;
static volatile uint32_t x543 = 27U;
volatile uint64_t x548 = UINT64_MAX;
volatile uint64_t t82 = 0LLU;
int64_t x565 = -283595899695LL;
uint64_t t85 = 16271161668928LLU;
static int32_t t86 = 12;
static int32_t x591 = -1;
uint32_t x600 = UINT32_MAX;
volatile uint64_t t90 = 126632LLU;
int32_t x614 = INT32_MAX;
static uint64_t x616 = UINT64_MAX;
uint64_t t92 = 239872186873730LLU;
int64_t t96 = 34886778LL;
int64_t t99 = -4749173817838LL;


void f0(void) {
	uint16_t x9 = UINT16_MAX;
	int32_t x11 = INT32_MAX;
	uint32_t x12 = 5084U;
	volatile uint32_t t0 = 6381U;

	t0 = (x9*(x10/(x11*x12)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x17 = -1;
	int16_t x18 = 462;
	uint64_t x19 = 41767680LLU;
	volatile int32_t x20 = -1;

	t1 = (x17*(x18/(x19*x20)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x21 = INT64_MIN;
	volatile int8_t x23 = 49;
	static volatile uint64_t x24 = UINT64_MAX;
	uint64_t t2 = 3LLU;

	t2 = (x21*(x22/(x23*x24)));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x29 = INT64_MIN;
	uint32_t x30 = UINT32_MAX;
	int64_t x31 = -1LL;
	static volatile int64_t t3 = -9382174634883181LL;

	t3 = (x29*(x30/(x31*x32)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t t4 = 53648LLU;

	t4 = (x33*(x34/(x35*x36)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 133663524441828LLU;
	uint64_t x38 = UINT64_MAX;
	uint32_t x39 = 396818770U;
	static int8_t x40 = -3;

	t5 = (x37*(x38/(x39*x40)));

	if (t5 != 11339741886324469088LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x41 = 94U;
	static uint64_t x42 = 3LLU;
	int16_t x43 = -664;
	volatile int8_t x44 = INT8_MIN;
	uint64_t t6 = 950LLU;

	t6 = (x41*(x42/(x43*x44)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = -1;
	int32_t x62 = -150577821;
	int16_t x63 = 5661;
	uint16_t x64 = 31352U;
	volatile int32_t t7 = 3;

	t7 = (x61*(x62/(x63*x64)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x66 = 23318186486979LL;
	uint32_t x67 = 15965392U;
	static volatile int64_t t8 = 2LL;

	t8 = (x65*(x66/(x67*x68)));

	if (t8 != 7032960612088LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x73 = -4142;
	int8_t x74 = INT8_MAX;
	volatile uint32_t x75 = 333928U;
	volatile int32_t x76 = -7;
	volatile uint32_t t9 = 431U;

	t9 = (x73*(x74/(x75*x76)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x77 = -1329;
	uint16_t x78 = 1U;
	volatile uint64_t x79 = 1335311528985995LLU;
	uint64_t t10 = 892LLU;

	t10 = (x77*(x78/(x79*x80)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x85 = INT64_MIN;
	uint32_t x86 = UINT32_MAX;
	uint64_t x88 = UINT64_MAX;
	static volatile uint64_t t11 = 2061228810654355618LLU;

	t11 = (x85*(x86/(x87*x88)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x89 = 3U;
	uint32_t x90 = 2U;
	volatile int64_t t12 = 239883583LL;

	t12 = (x89*(x90/(x91*x92)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x93 = 46U;
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = UINT64_MAX;
	static volatile uint64_t t13 = 5216963632177808LLU;

	t13 = (x93*(x94/(x95*x96)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x97 = -1;
	int32_t x98 = INT32_MAX;
	uint32_t x99 = 2047039699U;
	int8_t x100 = INT8_MIN;
	uint32_t t14 = 3U;

	t14 = (x97*(x98/(x99*x100)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x102 = -641137;
	int64_t x104 = 14097944872LL;
	static uint64_t t15 = UINT64_MAX;

	t15 = (x101*(x102/(x103*x104)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x109 = INT8_MAX;
	int64_t x110 = -2849348137195499LL;
	volatile uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MAX;
	volatile uint64_t t16 = 1LLU;

	t16 = (x109*(x110/(x111*x112)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x113 = 53;
	int32_t x114 = 2;
	int16_t x115 = -1;
	uint8_t x116 = 116U;

	t17 = (x113*(x114/(x115*x116)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x117 = -1LL;
	volatile int8_t x118 = 1;
	int32_t x120 = -1;

	t18 = (x117*(x118/(x119*x120)));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x125 = 20U;
	uint8_t x126 = UINT8_MAX;
	uint8_t x127 = UINT8_MAX;
	int32_t x128 = -1;
	int32_t t19 = 127328771;

	t19 = (x125*(x126/(x127*x128)));

	if (t19 != -20) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x141 = 51LLU;
	uint16_t x142 = 163U;
	int16_t x143 = -568;
	uint16_t x144 = 13160U;
	uint64_t t20 = 955LLU;

	t20 = (x141*(x142/(x143*x144)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x149 = -1;
	int32_t x150 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t21 = 85583;

	t21 = (x149*(x150/(x151*x152)));

	if (t21 != -8421504) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x154 = INT64_MIN;
	uint64_t x155 = UINT64_MAX;
	uint64_t t22 = 199731LLU;

	t22 = (x153*(x154/(x155*x156)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x157 = UINT64_MAX;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = INT32_MIN;
	static int64_t x160 = -1LL;
	volatile uint64_t t23 = 75353537LLU;

	t23 = (x157*(x158/(x159*x160)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x162 = UINT16_MAX;
	int64_t x163 = 717439136949LL;
	uint8_t x164 = 90U;

	t24 = (x161*(x162/(x163*x164)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x169 = 14;
	int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	static uint32_t x172 = 122133U;
	uint32_t t25 = 112945U;

	t25 = (x169*(x170/(x171*x172)));

	if (t25 != 1918U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x173 = 0U;
	volatile int64_t x174 = 1LL;
	uint16_t x175 = 96U;
	int8_t x176 = INT8_MIN;
	static int64_t t26 = 11LL;

	t26 = (x173*(x174/(x175*x176)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x185 = INT64_MIN;
	static uint8_t x186 = 11U;
	volatile uint8_t x187 = 9U;
	uint64_t x188 = UINT64_MAX;
	uint64_t t27 = 40096985LLU;

	t27 = (x185*(x186/(x187*x188)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x197 = INT64_MAX;
	volatile int16_t x198 = 0;
	volatile uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 94979111240LLU;
	uint64_t t28 = 0LLU;

	t28 = (x197*(x198/(x199*x200)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x202 = -15091256767679LL;
	uint64_t x203 = 1943027078216LLU;
	uint8_t x204 = 2U;
	volatile uint64_t t29 = 110535612040LLU;

	t29 = (x201*(x202/(x203*x204)));

	if (t29 != 1210460520LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x206 = -113078335982953726LL;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = UINT8_MAX;
	int64_t t30 = 328687467708LL;

	t30 = (x205*(x206/(x207*x208)));

	if (t30 != -5832747692852LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x210 = UINT16_MAX;
	uint32_t t31 = 993503U;

	t31 = (x209*(x210/(x211*x212)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x213 = -1;
	int16_t x214 = -11;
	volatile int16_t x215 = INT16_MAX;
	volatile uint64_t x216 = 50LLU;

	t32 = (x213*(x214/(x215*x216)));

	if (t32 != 18446732814366875320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x217 = 6793U;
	static uint32_t x218 = 512592190U;
	uint16_t x219 = UINT16_MAX;
	int16_t x220 = INT16_MIN;
	static volatile uint32_t t33 = 3395157U;

	t33 = (x217*(x218/(x219*x220)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x234 = 8;
	int8_t x235 = 1;
	static volatile int32_t x236 = INT32_MIN;
	static int32_t t34 = 1608805;

	t34 = (x233*(x234/(x235*x236)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x237 = -1;
	volatile uint32_t x238 = 24745344U;
	static int32_t x239 = -1;
	volatile int64_t x240 = 1LL;
	volatile int64_t t35 = 3480603658416LL;

	t35 = (x237*(x238/(x239*x240)));

	if (t35 != 24745344LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x241 = 38U;
	volatile uint64_t x242 = UINT64_MAX;
	uint16_t x243 = 1U;
	static volatile int64_t x244 = INT64_MIN;
	uint64_t t36 = 1479640788674LLU;

	t36 = (x241*(x242/(x243*x244)));

	if (t36 != 38LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x250 = UINT8_MAX;
	uint16_t x251 = 2968U;
	uint64_t x252 = 289LLU;
	uint64_t t37 = 354284084706520974LLU;

	t37 = (x249*(x250/(x251*x252)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x253 = -1LL;
	static uint32_t x254 = UINT32_MAX;
	int64_t x255 = -1LL;
	uint64_t x256 = 890LLU;

	t38 = (x253*(x254/(x255*x256)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x269 = INT64_MIN;
	uint16_t x270 = UINT16_MAX;
	uint32_t x272 = 252U;
	volatile uint64_t t39 = 3315LLU;

	t39 = (x269*(x270/(x271*x272)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x274 = INT8_MIN;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t40 = 9;

	t40 = (x273*(x274/(x275*x276)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x285 = 1U;
	int16_t x286 = INT16_MIN;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = 17747199LL;
	static int64_t t41 = -41286282285512LL;

	t41 = (x285*(x286/(x287*x288)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x289 = 2034U;
	uint8_t x290 = 11U;
	volatile uint16_t x291 = 1771U;
	int32_t x292 = -2;
	volatile uint32_t t42 = 1155U;

	t42 = (x289*(x290/(x291*x292)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x297 = -137054552281623LL;
	volatile uint8_t x298 = 22U;
	volatile int32_t x299 = 442170284;
	volatile int64_t t43 = -13808074LL;

	t43 = (x297*(x298/(x299*x300)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x301 = 4255U;
	int64_t x302 = -1LL;
	int8_t x304 = 3;
	static volatile int64_t t44 = -35728030171097LL;

	t44 = (x301*(x302/(x303*x304)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x309 = UINT64_MAX;

	t45 = (x309*(x310/(x311*x312)));

	if (t45 != 18446462598732840961LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = 3U;
	uint32_t x320 = 372547555U;

	t46 = (x317*(x318/(x319*x320)));

	if (t46 != 4294868992U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x337 = 59U;
	volatile int16_t x340 = INT16_MIN;

	t47 = (x337*(x338/(x339*x340)));

	if (t47 != 33214047251857349LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int16_t x342 = 1195;
	static uint64_t x343 = UINT64_MAX;
	static uint32_t x344 = 26372U;
	uint64_t t48 = 1LLU;

	t48 = (x341*(x342/(x343*x344)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x349 = 41;
	volatile int16_t x352 = INT16_MIN;
	int32_t t49 = 45699931;

	t49 = (x349*(x350/(x351*x352)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x358 = 4U;
	volatile int8_t x359 = INT8_MIN;
	uint32_t t50 = 884U;

	t50 = (x357*(x358/(x359*x360)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x361 = 13U;
	int16_t x362 = 2188;
	static int64_t x363 = 20659833LL;
	uint64_t x364 = 2034LLU;
	uint64_t t51 = 1297LLU;

	t51 = (x361*(x362/(x363*x364)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x366 = INT8_MIN;
	volatile int64_t x368 = INT64_MAX;
	int64_t t52 = -16630LL;

	t52 = (x365*(x366/(x367*x368)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x369 = INT8_MIN;
	uint8_t x370 = 66U;
	uint8_t x371 = 115U;
	int8_t x372 = INT8_MIN;
	volatile int32_t t53 = -15;

	t53 = (x369*(x370/(x371*x372)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x378 = 0U;
	uint16_t x379 = UINT16_MAX;
	int32_t t54 = 93894;

	t54 = (x377*(x378/(x379*x380)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x385 = -1LL;
	static int32_t x386 = INT32_MAX;
	int32_t x387 = -1;
	volatile int64_t x388 = INT64_MAX;
	volatile int64_t t55 = -23715503509103318LL;

	t55 = (x385*(x386/(x387*x388)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x389 = 153U;
	int16_t x390 = INT16_MIN;
	volatile uint8_t x391 = UINT8_MAX;
	int64_t x392 = -49LL;
	static volatile int64_t t56 = -1005811909346630LL;

	t56 = (x389*(x390/(x391*x392)));

	if (t56 != 306LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x401 = 11886778533LLU;
	static volatile int32_t x402 = 12;
	static uint16_t x403 = 6315U;
	volatile uint64_t t57 = 481439279622090LLU;

	t57 = (x401*(x402/(x403*x404)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x409 = -1;
	uint32_t x410 = 2U;
	volatile int8_t x411 = -2;
	static uint64_t x412 = 43832975303LLU;
	uint64_t t58 = 149722106628141LLU;

	t58 = (x409*(x410/(x411*x412)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x413 = UINT32_MAX;
	uint64_t x414 = 5637768082203LLU;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t59 = 727LLU;

	t59 = (x413*(x414/(x415*x416)));

	if (t59 != 11901305149824830693LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x421 = -2904984591711984LL;
	uint64_t x422 = 96989910997967LLU;
	int8_t x423 = INT8_MIN;
	uint32_t x424 = 55285397U;

	t60 = (x421*(x422/(x423*x424)));

	if (t60 != 16742437281759149168LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x426 = 1U;
	uint64_t x427 = 3LLU;
	int16_t x428 = -11;
	uint64_t t61 = 9762153370666155LLU;

	t61 = (x425*(x426/(x427*x428)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x430 = 210113899084832LL;
	uint64_t x431 = 36258129538LLU;
	volatile int8_t x432 = INT8_MIN;
	volatile uint64_t t62 = 44481513924LLU;

	t62 = (x429*(x430/(x431*x432)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x433 = 93U;
	static int16_t x434 = 6522;
	int16_t x435 = 1;
	uint64_t x436 = 611115438709907LLU;

	t63 = (x433*(x434/(x435*x436)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x443 = INT16_MAX;
	uint64_t t64 = 190LLU;

	t64 = (x441*(x442/(x443*x444)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x445 = -1;
	static volatile int8_t x446 = INT8_MIN;
	uint32_t x448 = 699465U;
	volatile uint64_t t65 = 12970LLU;

	t65 = (x445*(x446/(x447*x448)));

	if (t65 != 18446742817869181530LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x449 = INT8_MAX;
	int64_t x450 = INT64_MAX;
	uint8_t x452 = 57U;
	int64_t t66 = 107404324983169266LL;

	t66 = (x449*(x450/(x451*x452)));

	if (t66 != 12871257976LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x454 = INT64_MIN;
	uint32_t x455 = 90U;
	int16_t x456 = 2;
	static volatile int64_t t67 = 1971203815870694947LL;

	t67 = (x453*(x454/(x455*x456)));

	if (t67 != 51240955760304310LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x458 = INT16_MIN;
	static int64_t x459 = 131LL;
	static volatile int64_t t68 = 7496831885101017LL;

	t68 = (x457*(x458/(x459*x460)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x461 = 1;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = -1LL;
	int64_t t69 = -13099346368LL;

	t69 = (x461*(x462/(x463*x464)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x473 = UINT64_MAX;
	uint64_t x474 = UINT64_MAX;
	static int64_t x475 = -4381798165464531LL;
	int16_t x476 = 29;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x473*(x474/(x475*x476)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x477 = INT64_MIN;
	static int16_t x478 = -241;
	int64_t t71 = 15294481LL;

	t71 = (x477*(x478/(x479*x480)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x481 = INT64_MAX;
	uint8_t x483 = 10U;

	t72 = (x481*(x482/(x483*x484)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x485 = INT16_MAX;
	int32_t x486 = INT32_MIN;
	int32_t x487 = -266768;

	t73 = (x485*(x486/(x487*x488)));

	if (t73 != 263774350) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x489 = INT64_MIN;
	int64_t x490 = -1LL;
	uint16_t x491 = 30339U;
	uint32_t x492 = 2042179801U;

	t74 = (x489*(x490/(x491*x492)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x497 = -750188;
	int8_t x498 = INT8_MAX;
	int32_t x499 = -1;
	volatile int64_t x500 = INT64_MAX;

	t75 = (x497*(x498/(x499*x500)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x509 = INT64_MIN;
	int64_t x511 = INT64_MAX;
	static int64_t t76 = INT64_MIN;

	t76 = (x509*(x510/(x511*x512)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x526 = UINT8_MAX;
	volatile int64_t x528 = 52845497704LL;
	volatile int64_t t77 = -409133907037406654LL;

	t77 = (x525*(x526/(x527*x528)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x529 = -794;
	int32_t x530 = INT32_MIN;
	uint8_t x531 = UINT8_MAX;
	int16_t x532 = INT16_MIN;

	t78 = (x529*(x530/(x531*x532)));

	if (t78 != -204058) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x534 = 1966LLU;
	volatile uint64_t t79 = 2760404972363050LLU;

	t79 = (x533*(x534/(x535*x536)));

	if (t79 != 35560LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x537 = 45U;
	int64_t x538 = -243446690019297692LL;
	int16_t x539 = 3;
	uint8_t x540 = 6U;

	t80 = (x537*(x538/(x539*x540)));

	if (t80 != -608616725048244225LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x541 = -2;
	volatile int16_t x542 = -1;
	volatile uint64_t x544 = 5LLU;
	static uint64_t t81 = 267171152170LLU;

	t81 = (x541*(x542/(x543*x544)));

	if (t81 != 18173458976321261964LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x545 = 7;
	volatile int32_t x546 = 0;
	static uint8_t x547 = UINT8_MAX;

	t82 = (x545*(x546/(x547*x548)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x553 = -687;
	uint64_t x554 = 41733129372819LLU;
	uint64_t x555 = 708128983833328435LLU;
	uint32_t x556 = 365U;
	uint64_t t83 = 1083299808138LLU;

	t83 = (x553*(x554/(x555*x556)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x561 = INT16_MIN;
	int8_t x562 = INT8_MAX;
	static uint64_t x563 = UINT64_MAX;
	int8_t x564 = INT8_MIN;
	volatile uint64_t t84 = 166935LLU;

	t84 = (x561*(x562/(x563*x564)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x566 = 0LL;
	uint64_t x567 = 165708263656448LLU;
	volatile int16_t x568 = -1;

	t85 = (x565*(x566/(x567*x568)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x569 = 96U;
	volatile int16_t x570 = INT16_MIN;
	static int16_t x571 = INT16_MIN;
	volatile int32_t x572 = -11;

	t86 = (x569*(x570/(x571*x572)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x577 = UINT8_MAX;
	volatile uint16_t x578 = UINT16_MAX;
	volatile uint32_t x579 = UINT32_MAX;
	int16_t x580 = INT16_MIN;
	uint32_t t87 = 265349159U;

	t87 = (x577*(x578/(x579*x580)));

	if (t87 != 255U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x589 = INT32_MIN;
	static volatile int32_t x590 = -1;
	volatile int16_t x592 = INT16_MAX;
	volatile int32_t t88 = -703637827;

	t88 = (x589*(x590/(x591*x592)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x593 = 176105LL;
	int16_t x594 = INT16_MIN;
	volatile int16_t x595 = -1;
	int64_t x596 = 1476142425517392281LL;
	volatile int64_t t89 = -112557966098814873LL;

	t89 = (x593*(x594/(x595*x596)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x597 = 394;
	int8_t x598 = INT8_MAX;
	uint64_t x599 = 19847LLU;

	t90 = (x597*(x598/(x599*x600)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x605 = -1;
	int64_t x606 = -1LL;
	volatile int64_t x607 = 3053782590027648601LL;
	int32_t x608 = -1;
	volatile int64_t t91 = -1373318450844805007LL;

	t91 = (x605*(x606/(x607*x608)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x613 = -1;
	uint32_t x615 = 6997U;

	t92 = (x613*(x614/(x615*x616)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x617 = -1;
	volatile int8_t x618 = -55;
	static int8_t x619 = INT8_MIN;
	int32_t x620 = 1;
	static int32_t t93 = 134428671;

	t93 = (x617*(x618/(x619*x620)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x621 = 19725U;
	int64_t x622 = INT64_MAX;
	uint64_t x623 = 9LLU;
	uint32_t x624 = 9U;
	static uint64_t t94 = 992755677987096376LLU;

	t94 = (x621*(x622/(x623*x624)));

	if (t94 != 14005861241149838414LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x629 = 12519U;
	int8_t x630 = 7;
	int16_t x631 = INT16_MIN;
	volatile int16_t x632 = INT16_MIN;
	int32_t t95 = 121;

	t95 = (x629*(x630/(x631*x632)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x633 = -1;
	int32_t x634 = INT32_MIN;
	volatile int32_t x635 = INT32_MIN;
	volatile int64_t x636 = -1LL;

	t96 = (x633*(x634/(x635*x636)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x637 = -10291;
	static uint16_t x638 = 1U;
	int8_t x639 = INT8_MIN;
	int64_t x640 = -29170104LL;
	int64_t t97 = -1LL;

	t97 = (x637*(x638/(x639*x640)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x641 = 45033662U;
	uint16_t x642 = 1173U;
	uint16_t x643 = 83U;
	volatile uint16_t x644 = 3U;
	static volatile uint32_t t98 = 1U;

	t98 = (x641*(x642/(x643*x644)));

	if (t98 != 180134648U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x657 = -1;
	int64_t x658 = -1LL;
	int16_t x659 = INT16_MIN;
	volatile uint8_t x660 = 24U;

	t99 = (x657*(x658/(x659*x660)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

