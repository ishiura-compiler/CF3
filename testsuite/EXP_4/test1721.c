#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = -1;
int64_t x3 = 70060LL;
static volatile uint16_t x13 = UINT16_MAX;
int8_t x35 = 25;
volatile int16_t x47 = -2705;
uint64_t x48 = UINT64_MAX;
int8_t x49 = INT8_MIN;
static int8_t x52 = 39;
volatile uint32_t t5 = 7U;
uint16_t x53 = 6091U;
static volatile uint8_t x56 = UINT8_MAX;
int32_t t6 = 0;
int16_t x57 = INT16_MAX;
volatile uint64_t t9 = 1580180LLU;
int64_t x75 = -2062LL;
int16_t x81 = 3;
uint16_t x91 = UINT16_MAX;
int16_t x106 = -1;
static int16_t x114 = -1;
volatile int64_t t16 = 14LL;
uint64_t x119 = 3702084LLU;
static volatile int8_t x125 = 2;
static int32_t x136 = INT32_MIN;
volatile int32_t t22 = -861593259;
uint32_t x168 = 31493904U;
int8_t x175 = INT8_MIN;
volatile int32_t t26 = -58653380;
int16_t x187 = 62;
int16_t x201 = INT16_MIN;
int64_t x206 = INT64_MAX;
uint32_t x219 = 2059078188U;
static uint16_t x220 = UINT16_MAX;
int16_t x222 = -1;
uint64_t x226 = 2142414LLU;
uint64_t t34 = 5858406579013174191LLU;
uint32_t x231 = 23U;
int8_t x232 = 2;
int8_t x240 = -53;
volatile int32_t x241 = INT32_MIN;
int16_t x268 = -1;
uint32_t x282 = 3947766U;
int8_t x292 = -1;
int32_t t40 = 4849;
static volatile uint32_t t41 = 5U;
int32_t x297 = INT32_MAX;
int32_t x299 = INT32_MAX;
volatile uint16_t x303 = UINT16_MAX;
int32_t x313 = -51118578;
int16_t x330 = INT16_MIN;
static int32_t x342 = INT32_MAX;
uint32_t t49 = 59U;
int16_t x351 = -1;
volatile int32_t x369 = -1;
volatile uint32_t t53 = 234077481U;
volatile uint64_t t54 = 7088663011813LLU;
volatile int32_t x381 = INT32_MIN;
static int16_t x391 = -1;
static volatile int32_t t56 = -1;
static uint32_t x398 = UINT32_MAX;
int64_t t58 = 2853863939204120689LL;
uint64_t x408 = UINT64_MAX;
uint64_t x420 = 4243227LLU;
int64_t x423 = INT64_MAX;
int64_t t62 = 650786088LL;
uint64_t x435 = UINT64_MAX;
volatile int8_t x442 = INT8_MIN;
volatile uint64_t x450 = 214578963362371754LLU;
int16_t x455 = -1;
int8_t x465 = -6;
int32_t x466 = 26049;
uint32_t x471 = UINT32_MAX;
uint32_t x487 = 24861920U;
volatile uint64_t x489 = 3325961541LLU;
static int16_t x492 = 62;
int32_t x509 = INT32_MAX;
static int8_t x510 = INT8_MIN;
static uint8_t x514 = 90U;
int8_t x516 = 1;
volatile int64_t t75 = 123832LL;
static int32_t x553 = -1;
uint16_t x555 = 374U;
volatile uint64_t t78 = 5476463589456LLU;
volatile int8_t x574 = -1;
static uint16_t x580 = 5U;
static int8_t x583 = INT8_MIN;
int64_t x586 = 277LL;
uint16_t x589 = UINT16_MAX;
int32_t x604 = INT32_MIN;
int8_t x611 = INT8_MAX;
static volatile int64_t t85 = 3581312634000689LL;
static int8_t x619 = INT8_MAX;
int64_t x655 = -28910115937LL;
int64_t x660 = -2447211LL;
static int16_t x663 = 2547;
volatile uint64_t x664 = UINT64_MAX;
static uint64_t t92 = 135626125197407690LLU;
int32_t x669 = -69684924;
volatile int32_t x673 = INT32_MIN;
int16_t x674 = INT16_MIN;
static uint64_t x676 = 47090528070LLU;
static uint64_t t94 = 114038135LLU;
int16_t x681 = INT16_MIN;
int8_t x689 = INT8_MAX;
int8_t x692 = INT8_MAX;
volatile int32_t t96 = -254;
int32_t x693 = -8111721;
int64_t x696 = -394269LL;
int16_t x697 = -1;
volatile uint64_t t98 = 32625907431LLU;
volatile int32_t x703 = 14418;


void f0(void) {
	int8_t x1 = -1;
	static volatile int8_t x4 = -1;
	volatile int64_t t0 = 891444712426LL;

	t0 = (x1%(x2*(x3&x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x14 = UINT16_MAX;
	uint64_t x15 = 64808141803LLU;
	int8_t x16 = INT8_MAX;
	uint64_t t1 = 102LLU;

	t1 = (x13%(x14*(x15&x16)));

	if (t1 != 65535LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x21 = INT8_MIN;
	uint32_t x22 = 578583053U;
	int8_t x23 = -1;
	uint64_t x24 = 3300754920202152LLU;
	volatile uint64_t t2 = 11045586692LLU;

	t2 = (x21%(x22*(x23&x24)));

	if (t2 != 5769799413666293872LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = -893381LL;
	static int32_t x36 = -1;
	static int64_t t3 = 33376218LL;

	t3 = (x33%(x34*(x35&x36)));

	if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x45 = -1;
	volatile int64_t x46 = 1948980893019580145LL;
	uint64_t t4 = 811LLU;

	t4 = (x45%(x46*(x47&x48)));

	if (t4 != 3344786221839671811LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x50 = -1;
	volatile uint32_t x51 = UINT32_MAX;

	t5 = (x49%(x50*(x51&x52)));

	if (t5 != 4294967168U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x54 = -1;
	int32_t x55 = -1;

	t6 = (x53%(x54*(x55&x56)));

	if (t6 != 226) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x58 = 110U;
	volatile uint64_t x59 = 8322364612100LLU;
	int8_t x60 = -1;
	volatile uint64_t t7 = 209186993113LLU;

	t7 = (x57%(x58*(x59&x60)));

	if (t7 != 32767LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = -99LL;
	volatile int8_t x63 = INT8_MIN;
	uint8_t x64 = UINT8_MAX;
	int64_t t8 = -4124922081723989LL;

	t8 = (x61%(x62*(x63&x64)));

	if (t8 != -10496LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x69 = 3;
	volatile uint64_t x70 = 31838226300404356LLU;
	int32_t x71 = -1;
	volatile uint64_t x72 = UINT64_MAX;

	t9 = (x69%(x70*(x71&x72)));

	if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x73 = INT16_MAX;
	static uint8_t x74 = 6U;
	static int64_t x76 = 23786565890LL;
	int64_t t10 = -3680072LL;

	t10 = (x73%(x74*(x75&x76)));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = -6;
	uint16_t x84 = 12884U;
	static int32_t t11 = -6;

	t11 = (x81%(x82*(x83&x84)));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x89 = 56U;
	volatile int64_t x90 = -1LL;
	uint32_t x92 = UINT32_MAX;
	int64_t t12 = 509LL;

	t12 = (x89%(x90*(x91&x92)));

	if (t12 != 56LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = -1;
	uint32_t x94 = 975165559U;
	uint32_t x95 = 725474601U;
	int64_t x96 = 97LL;
	volatile int64_t t13 = -31LL;

	t13 = (x93%(x94*(x95&x96)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x97 = -1;
	int16_t x98 = -17;
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t14 = -118453;

	t14 = (x97%(x98*(x99&x100)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = UINT64_MAX;
	int64_t x107 = -2275LL;
	int32_t x108 = 44;
	static volatile uint64_t t15 = 848LLU;

	t15 = (x105%(x106*(x107&x108)));

	if (t15 != 11LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x113 = INT64_MIN;
	uint16_t x115 = UINT16_MAX;
	int16_t x116 = 2047;

	t16 = (x113%(x114*(x115&x116)));

	if (t16 != -256LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x117 = 23790639;
	int16_t x118 = -1;
	uint64_t x120 = UINT64_MAX;
	static uint64_t t17 = 7997556422LLU;

	t17 = (x117%(x118*(x119&x120)));

	if (t17 != 23790639LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x126 = UINT8_MAX;
	static uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MAX;
	static volatile uint64_t t18 = 564042LLU;

	t18 = (x125%(x126*(x127&x128)));

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x129 = -34;
	int8_t x130 = INT8_MAX;
	static int64_t x131 = -1998029498165259LL;
	uint8_t x132 = 55U;
	static volatile int64_t t19 = -1992506LL;

	t19 = (x129%(x130*(x131&x132)));

	if (t19 != -34LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x133 = INT8_MAX;
	uint16_t x134 = 156U;
	int64_t x135 = -1363873440LL;
	int64_t t20 = -20156043LL;

	t20 = (x133%(x134*(x135&x136)));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x141 = UINT32_MAX;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = -1;
	uint8_t x144 = 41U;
	volatile uint64_t t21 = 10677047928LLU;

	t21 = (x141%(x142*(x143&x144)));

	if (t21 != 4294967295LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MAX;
	int32_t x159 = 18;
	int32_t x160 = -1;

	t22 = (x157%(x158*(x159&x160)));

	if (t22 != 1527) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x161 = 8962U;
	int64_t x162 = -1LL;
	static int16_t x163 = INT16_MIN;
	int16_t x164 = -1756;
	volatile int64_t t23 = 9422LL;

	t23 = (x161%(x162*(x163&x164)));

	if (t23 != 8962LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x165 = 12361U;
	uint64_t x166 = 420LLU;
	int8_t x167 = INT8_MIN;
	static volatile uint64_t t24 = 524298219488049213LLU;

	t24 = (x165%(x166*(x167&x168)));

	if (t24 != 12361LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x169 = INT64_MIN;
	int32_t x170 = -1;
	static uint64_t x171 = UINT64_MAX;
	volatile int64_t x172 = INT64_MIN;
	volatile uint64_t t25 = 143296944LLU;

	t25 = (x169%(x170*(x171&x172)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = 1;
	static int8_t x176 = INT8_MIN;

	t26 = (x173%(x174*(x175&x176)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	int32_t x188 = INT32_MAX;
	uint64_t t27 = 738987LLU;

	t27 = (x185%(x186*(x187&x188)));

	if (t27 != 61LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MAX;
	int16_t x191 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t28 = 19337993U;

	t28 = (x189%(x190*(x191&x192)));

	if (t28 != 2147483648U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x197 = 14U;
	static int16_t x198 = INT16_MAX;
	int8_t x199 = 5;
	uint16_t x200 = 43U;
	volatile int32_t t29 = -34;

	t29 = (x197%(x198*(x199&x200)));

	if (t29 != 14) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x202 = 185;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MAX;
	int64_t t30 = 152199LL;

	t30 = (x201%(x202*(x203&x204)));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x205 = UINT8_MAX;
	uint64_t x207 = UINT64_MAX;
	int32_t x208 = -1;
	uint64_t t31 = 84319556846LLU;

	t31 = (x205%(x206*(x207&x208)));

	if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MAX;
	int64_t t32 = -2951039564LL;

	t32 = (x217%(x218*(x219&x220)));

	if (t32 != 29490307LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x221 = 6583615505706LLU;
	uint64_t x223 = 288094745LLU;
	static uint8_t x224 = 3U;
	uint64_t t33 = 1LLU;

	t33 = (x221%(x222*(x223&x224)));

	if (t33 != 6583615505706LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x225 = 27U;
	int8_t x227 = INT8_MIN;
	static volatile uint16_t x228 = UINT16_MAX;

	t34 = (x225%(x226*(x227&x228)));

	if (t34 != 27LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x229 = INT8_MIN;
	volatile int32_t x230 = -1454;
	volatile uint32_t t35 = 496432482U;

	t35 = (x229%(x230*(x231&x232)));

	if (t35 != 2780U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x237 = INT32_MIN;
	static uint8_t x238 = 1U;
	volatile uint8_t x239 = 33U;
	static int32_t t36 = -453;

	t36 = (x237%(x238*(x239&x240)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x242 = -1;
	int16_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	int32_t t37 = -315366704;

	t37 = (x241%(x242*(x243&x244)));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	int8_t x267 = -1;
	int32_t t38 = 815492;

	t38 = (x265%(x266*(x267&x268)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x281 = INT64_MIN;
	int32_t x283 = 505;
	uint8_t x284 = UINT8_MAX;
	volatile int64_t t39 = 91386LL;

	t39 = (x281%(x282*(x283&x284)));

	if (t39 != -369978992LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x289 = -1;
	int8_t x290 = 3;
	volatile int8_t x291 = -23;

	t40 = (x289%(x290*(x291&x292)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x293 = 1004184079U;
	int8_t x294 = -24;
	volatile uint16_t x295 = 78U;
	int32_t x296 = -1;

	t41 = (x293%(x294*(x295&x296)));

	if (t41 != 1004184079U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x298 = 1132U;
	uint64_t x300 = 31134860LLU;
	static volatile uint64_t t42 = 958776197784LLU;

	t42 = (x297%(x298*(x299&x300)));

	if (t42 != 2147483647LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x301 = 254433U;
	int16_t x302 = INT16_MAX;
	int8_t x304 = -1;
	volatile uint32_t t43 = 207U;

	t43 = (x301%(x302*(x303&x304)));

	if (t43 != 254433U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x309 = -8764135997089640LL;
	static uint16_t x310 = UINT16_MAX;
	static uint64_t x311 = 1288199709908982326LLU;
	uint8_t x312 = UINT8_MAX;
	static uint64_t t44 = 1290993429LLU;

	t44 = (x309%(x310*(x311&x312)));

	if (t44 != 2345096LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x314 = 101443138LL;
	int8_t x315 = -1;
	int32_t x316 = 31405821;
	int64_t t45 = 316813500516LL;

	t45 = (x313%(x314*(x315&x316)));

	if (t45 != -51118578LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x321 = -1;
	static volatile int64_t x322 = -1LL;
	int16_t x323 = INT16_MIN;
	volatile int64_t x324 = INT64_MAX;
	volatile int64_t t46 = -204LL;

	t46 = (x321%(x322*(x323&x324)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x329 = -1;
	int64_t x331 = -1LL;
	volatile uint32_t x332 = UINT32_MAX;
	volatile int64_t t47 = -241373LL;

	t47 = (x329%(x330*(x331&x332)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x333 = INT16_MAX;
	int64_t x334 = INT64_MIN;
	volatile uint16_t x335 = 1U;
	static uint32_t x336 = UINT32_MAX;
	static int64_t t48 = -179628LL;

	t48 = (x333%(x334*(x335&x336)));

	if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x341 = -182853;
	int32_t x343 = -1;
	uint32_t x344 = 572869U;

	t49 = (x341%(x342*(x343&x344)));

	if (t49 != 962885U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x349 = INT8_MIN;
	static int32_t x350 = 3;
	uint64_t x352 = 1348648133591470LLU;
	static uint64_t t50 = 245LLU;

	t50 = (x349%(x350*(x351&x352)));

	if (t50 != 1283550579016298LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x357 = UINT16_MAX;
	volatile uint16_t x358 = UINT16_MAX;
	uint64_t x359 = 99132LLU;
	int32_t x360 = -1;
	volatile uint64_t t51 = 26LLU;

	t51 = (x357%(x358*(x359&x360)));

	if (t51 != 65535LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x365 = 1893U;
	static int8_t x366 = 3;
	uint8_t x367 = 7U;
	int8_t x368 = INT8_MAX;
	static volatile uint32_t t52 = 2330U;

	t52 = (x365%(x366*(x367&x368)));

	if (t52 != 3U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MIN;
	volatile int8_t x372 = -1;

	t53 = (x369%(x370*(x371&x372)));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x377 = -1;
	int8_t x378 = -1;
	uint64_t x379 = UINT64_MAX;
	int16_t x380 = -1;

	t54 = (x377%(x378*(x379&x380)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x382 = INT16_MIN;
	volatile int16_t x383 = -24;
	uint64_t x384 = 2515781LLU;
	volatile uint64_t t55 = 5165103423LLU;

	t55 = (x381%(x382*(x383&x384)));

	if (t55 != 80289464320LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x389 = INT16_MAX;
	static volatile int32_t x390 = -1;
	int16_t x392 = -24;

	t56 = (x389%(x390*(x391&x392)));

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x397 = 18U;
	int8_t x399 = -5;
	static int32_t x400 = INT32_MIN;
	volatile uint32_t t57 = 9U;

	t57 = (x397%(x398*(x399&x400)));

	if (t57 != 18U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x401 = INT32_MAX;
	int64_t x402 = -297548378291923LL;
	static int32_t x403 = -1;
	volatile uint8_t x404 = UINT8_MAX;

	t58 = (x401%(x402*(x403&x404)));

	if (t58 != 2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x405 = -104;
	static uint64_t x406 = 10141473192626172LLU;
	int64_t x407 = -1LL;
	volatile uint64_t t59 = 1530413783975LLU;

	t59 = (x405%(x406*(x407&x408)));

	if (t59 != 10141473192626068LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x417 = 60U;
	static volatile int16_t x418 = INT16_MIN;
	uint16_t x419 = UINT16_MAX;
	uint64_t t60 = 70008LLU;

	t60 = (x417%(x418*(x419&x420)));

	if (t60 != 60LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x421 = -473;
	int16_t x422 = -1;
	uint32_t x424 = UINT32_MAX;
	volatile int64_t t61 = 4084917254139LL;

	t61 = (x421%(x422*(x423&x424)));

	if (t61 != -473LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x429 = -127833527;
	volatile int32_t x430 = INT32_MIN;
	uint8_t x431 = 7U;
	int64_t x432 = -1LL;

	t62 = (x429%(x430*(x431&x432)));

	if (t62 != -127833527LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x433 = INT8_MAX;
	uint64_t x434 = 15LLU;
	uint64_t x436 = 223529LLU;
	static uint64_t t63 = 16469896837LLU;

	t63 = (x433%(x434*(x435&x436)));

	if (t63 != 127LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x441 = -6;
	uint16_t x443 = 654U;
	volatile uint32_t x444 = UINT32_MAX;
	uint32_t t64 = 56762769U;

	t64 = (x441%(x442*(x443&x444)));

	if (t64 != 83706U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x445 = INT64_MIN;
	static int64_t x446 = 288330191142462LL;
	uint32_t x447 = 305U;
	int8_t x448 = 35;
	volatile int64_t t65 = -71620LL;

	t65 = (x445%(x446*(x447&x448)));

	if (t65 != -3437514692268434LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x449 = UINT16_MAX;
	volatile uint16_t x451 = 597U;
	volatile int16_t x452 = INT16_MAX;
	static uint64_t t66 = 392707888466LLU;

	t66 = (x449%(x450*(x451&x452)));

	if (t66 != 65535LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x453 = -1;
	int16_t x454 = -7492;
	static int32_t x456 = -1;
	int32_t t67 = 206384;

	t67 = (x453%(x454*(x455&x456)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x467 = UINT32_MAX;
	static uint64_t x468 = 36258941LLU;
	volatile uint64_t t68 = 124162986LLU;

	t68 = (x465%(x466*(x467&x468)));

	if (t68 != 483310494238LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MAX;
	int16_t x472 = INT16_MIN;
	int64_t t69 = 30300705LL;

	t69 = (x469%(x470*(x471&x472)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x485 = 437;
	static uint8_t x486 = 2U;
	uint32_t x488 = 5214933U;
	uint32_t t70 = 513U;

	t70 = (x485%(x486*(x487&x488)));

	if (t70 != 437U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x490 = -25;
	volatile uint64_t x491 = 66621740199LLU;
	volatile uint64_t t71 = 16987367886257284LLU;

	t71 = (x489%(x490*(x491&x492)));

	if (t71 != 3325961541LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x511 = -1;
	uint64_t x512 = UINT64_MAX;
	uint64_t t72 = 264360483241566477LLU;

	t72 = (x509%(x510*(x511&x512)));

	if (t72 != 127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x513 = 2U;
	uint8_t x515 = 87U;
	int32_t t73 = -225821;

	t73 = (x513%(x514*(x515&x516)));

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x517 = -15;
	volatile uint8_t x518 = 2U;
	volatile int16_t x519 = 413;
	int8_t x520 = INT8_MIN;
	volatile int32_t t74 = -40262;

	t74 = (x517%(x518*(x519&x520)));

	if (t74 != -15) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x549 = -1;
	int32_t x550 = INT32_MIN;
	static uint16_t x551 = UINT16_MAX;
	int64_t x552 = -1LL;

	t75 = (x549%(x550*(x551&x552)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x554 = 124U;
	uint64_t x556 = UINT64_MAX;
	uint64_t t76 = 31452LLU;

	t76 = (x553%(x554*(x555&x556)));

	if (t76 != 35479LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x561 = 6U;
	int16_t x562 = INT16_MIN;
	volatile uint32_t x563 = UINT32_MAX;
	volatile uint8_t x564 = 60U;
	static uint32_t t77 = 111U;

	t77 = (x561%(x562*(x563&x564)));

	if (t77 != 6U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x565 = INT64_MIN;
	static int32_t x566 = INT32_MIN;
	int32_t x567 = 1;
	uint64_t x568 = UINT64_MAX;

	t78 = (x565%(x566*(x567&x568)));

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x573 = -2146662374183516691LL;
	int8_t x575 = INT8_MAX;
	uint16_t x576 = 13U;
	volatile int64_t t79 = 54137405608LL;

	t79 = (x573%(x574*(x575&x576)));

	if (t79 != -8LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x577 = 26660U;
	uint16_t x578 = 18U;
	uint8_t x579 = 1U;
	int32_t t80 = 1;

	t80 = (x577%(x578*(x579&x580)));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x581 = -1;
	uint32_t x582 = 24003310U;
	int32_t x584 = -254025;
	volatile uint32_t t81 = 92U;

	t81 = (x581%(x582*(x583&x584)));

	if (t81 != 37413375U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x585 = 23U;
	int8_t x587 = -3;
	static uint32_t x588 = UINT32_MAX;
	volatile int64_t t82 = -166444028632LL;

	t82 = (x585%(x586*(x587&x588)));

	if (t82 != 23LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x590 = UINT32_MAX;
	uint32_t x591 = 768723U;
	static uint16_t x592 = 108U;
	volatile uint32_t t83 = 2192U;

	t83 = (x589%(x590*(x591&x592)));

	if (t83 != 65535U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x601 = -1309;
	static int64_t x602 = -192355603198LL;
	uint64_t x603 = 15088518660335974LLU;
	volatile uint64_t t84 = 1639975097164LLU;

	t84 = (x601%(x602*(x603&x604)));

	if (t84 != 7981692065253685987LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x609 = INT64_MIN;
	int8_t x610 = INT8_MIN;
	volatile int64_t x612 = -1LL;

	t85 = (x609%(x610*(x611&x612)));

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x617 = 3559167155LLU;
	uint64_t x618 = 3203967LLU;
	static int8_t x620 = 1;
	static volatile uint64_t t86 = 1LLU;

	t86 = (x617%(x618*(x619&x620)));

	if (t86 != 2763785LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x625 = INT16_MIN;
	static int8_t x626 = 45;
	int16_t x627 = INT16_MIN;
	static int8_t x628 = -20;
	volatile int32_t t87 = -8597704;

	t87 = (x625%(x626*(x627&x628)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x629 = UINT64_MAX;
	int16_t x630 = INT16_MIN;
	int8_t x631 = 2;
	static uint64_t x632 = UINT64_MAX;
	uint64_t t88 = 6366484998LLU;

	t88 = (x629%(x630*(x631&x632)));

	if (t88 != 65535LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x653 = 403U;
	static int32_t x654 = 6;
	int16_t x656 = -27;
	int64_t t89 = 496793183LL;

	t89 = (x653%(x654*(x655&x656)));

	if (t89 != 403LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x657 = 17322173387292270LL;
	static int8_t x658 = -1;
	uint8_t x659 = UINT8_MAX;
	int64_t t90 = 26798718487180LL;

	t90 = (x657%(x658*(x659&x660)));

	if (t90 != 69LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x661 = 388U;
	uint64_t x662 = 2226529917805172300LLU;
	uint64_t t91 = 449711LLU;

	t91 = (x661%(x662*(x663&x664)));

	if (t91 != 388LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x665 = 0U;
	volatile uint16_t x666 = UINT16_MAX;
	uint64_t x667 = 223824LLU;
	uint32_t x668 = UINT32_MAX;

	t92 = (x665%(x666*(x667&x668)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x670 = 11U;
	int64_t x671 = -1LL;
	static int8_t x672 = INT8_MAX;
	volatile int64_t t93 = -929556151665669LL;

	t93 = (x669%(x670*(x671&x672)));

	if (t93 != -1167LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x675 = UINT64_MAX;

	t94 = (x673%(x674*(x675&x676)));

	if (t94 != 1543060276314112LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x682 = 43U;
	int8_t x683 = -1;
	int16_t x684 = INT16_MAX;
	static volatile int32_t t95 = -109929658;

	t95 = (x681%(x682*(x683&x684)));

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x690 = 23U;
	static int8_t x691 = 1;

	t96 = (x689%(x690*(x691&x692)));

	if (t96 != 12) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x694 = INT64_MIN;
	uint64_t x695 = UINT64_MAX;
	uint64_t t97 = 1463LLU;

	t97 = (x693%(x694*(x695&x696)));

	if (t97 != 9223372036846664087LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x698 = 56U;
	uint64_t x699 = UINT64_MAX;
	volatile uint8_t x700 = 2U;

	t98 = (x697%(x698*(x699&x700)));

	if (t98 != 15LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x701 = 76U;
	static uint64_t x702 = 1033352445LLU;
	volatile int8_t x704 = INT8_MIN;
	volatile uint64_t t99 = 1LLU;

	t99 = (x701%(x702*(x703&x704)));

	if (t99 != 76LLU) { NG(); } else { ; }
	
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

