#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x8 = 192U;
int64_t x41 = -26131177LL;
volatile int8_t x42 = INT8_MIN;
uint8_t x48 = UINT8_MAX;
volatile uint16_t x49 = 5836U;
int8_t x51 = -1;
static int32_t x59 = INT32_MIN;
static int64_t x67 = INT64_MAX;
uint32_t x77 = 31448U;
int64_t x94 = INT64_MIN;
volatile int16_t x95 = INT16_MIN;
static int16_t x100 = INT16_MAX;
volatile uint16_t x105 = 3021U;
int32_t x107 = 1;
volatile uint16_t x111 = 1U;
int32_t t15 = 3;
static uint8_t x117 = 6U;
uint16_t x126 = 822U;
int64_t t18 = 20263224794769945LL;
uint32_t x134 = UINT32_MAX;
volatile int64_t x146 = INT64_MAX;
static uint64_t x148 = 373LLU;
int32_t x156 = 1818;
volatile int64_t x162 = -561778363755080LL;
int32_t x166 = INT32_MAX;
volatile uint8_t x167 = 11U;
static int64_t t26 = -531948559164LL;
int16_t x173 = INT16_MIN;
int32_t x176 = 8312724;
int8_t x179 = INT8_MIN;
uint64_t x188 = UINT64_MAX;
uint64_t t30 = 3568562354649LLU;
int8_t x189 = INT8_MIN;
static uint8_t x190 = UINT8_MAX;
volatile int8_t x207 = 27;
static int32_t t32 = -992;
uint64_t x221 = 403668430563LLU;
int64_t x223 = -1LL;
int64_t x233 = INT64_MIN;
uint32_t x235 = 471657U;
uint64_t x236 = UINT64_MAX;
volatile uint16_t x255 = 15U;
int8_t x257 = 1;
int32_t x258 = 0;
static int8_t x261 = -29;
static uint64_t x270 = 507455143713207LLU;
int64_t x271 = -714269548227LL;
int16_t x278 = INT16_MIN;
int8_t x282 = INT8_MIN;
uint64_t x284 = UINT64_MAX;
int8_t x286 = INT8_MIN;
volatile uint64_t t47 = 8LLU;
volatile uint8_t x298 = 23U;
static volatile int32_t x301 = -445;
int32_t t50 = -29;
int64_t x315 = -272988094262526358LL;
uint8_t x327 = 62U;
volatile uint64_t t53 = 15254LLU;
volatile uint64_t t54 = 72059842392LLU;
static int32_t x334 = -1;
uint16_t x336 = 14U;
int16_t x365 = -1;
static int32_t x368 = INT32_MAX;
int32_t t60 = 516;
volatile uint32_t x382 = UINT32_MAX;
int32_t x385 = INT32_MIN;
int16_t x387 = INT16_MAX;
uint64_t x390 = 59323267518LLU;
volatile uint64_t t64 = UINT64_MAX;
volatile int64_t t67 = -19243077787605LL;
int16_t x422 = INT16_MIN;
uint32_t x436 = 24327558U;
int8_t x437 = -1;
int64_t t73 = 5LL;
int8_t x455 = INT8_MIN;
uint16_t x456 = 909U;
volatile uint64_t t75 = 37863707LLU;
static int8_t x462 = INT8_MAX;
volatile int64_t x465 = INT64_MIN;
volatile int16_t x468 = -215;
uint64_t x470 = 178904112305LLU;
uint8_t x471 = 3U;
uint64_t t78 = 7LLU;
int16_t x473 = -1;
int64_t x474 = -1LL;
uint64_t t79 = UINT64_MAX;
int32_t x480 = -38230864;
int32_t x482 = -12483;
static int64_t x483 = INT64_MIN;
uint32_t x496 = 154333U;
uint64_t x500 = 8710354449113LLU;
uint64_t x503 = 432177635802LLU;
int64_t x514 = 603449230247072LL;
static int64_t x515 = 276866157681LL;
volatile uint16_t x517 = UINT16_MAX;
static int32_t x518 = -2;
uint64_t t89 = 470001694676338LLU;
static uint64_t x522 = 94536328997LLU;
volatile uint64_t t90 = 46774748LLU;
int8_t x525 = 5;
static volatile int32_t x527 = INT32_MIN;
int16_t x542 = -159;
int16_t x551 = INT16_MIN;
static int8_t x557 = -1;
volatile uint32_t t97 = UINT32_MAX;
volatile int64_t x562 = 286968542LL;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	static uint64_t x6 = 890428868098608LLU;
	uint8_t x7 = UINT8_MAX;
	static uint64_t t0 = 961799LLU;

	t0 = (x5|(x6/(x7%x8)));

	if (t0 != 14133791621119LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x21 = INT64_MIN;
	uint32_t x22 = UINT32_MAX;
	int8_t x23 = INT8_MIN;
	int64_t x24 = -508967246690LL;
	volatile int64_t t1 = -14757LL;

	t1 = (x21|(x22/(x23%x24)));

	if (t1 != -33554431LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x33 = -1LL;
	uint32_t x34 = 375U;
	int16_t x35 = -1120;
	uint8_t x36 = UINT8_MAX;
	int64_t t2 = 1LL;

	t2 = (x33|(x34/(x35%x36)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x37 = UINT32_MAX;
	static int64_t x38 = 135012LL;
	uint32_t x39 = 7687U;
	static int16_t x40 = INT16_MIN;
	int64_t t3 = 35733LL;

	t3 = (x37|(x38/(x39%x40)));

	if (t3 != 4294967295LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x43 = 79928U;
	int16_t x44 = -10;
	static volatile int64_t t4 = 1119105LL;

	t4 = (x41|(x42/(x43%x44)));

	if (t4 != -26094089LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int32_t x46 = 30138626;
	uint32_t x47 = 188483U;
	uint32_t t5 = 55U;

	t5 = (x45|(x46/(x47%x48)));

	if (t5 != 4294941217U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x50 = -1;
	uint16_t x52 = 4U;
	volatile int32_t t6 = -2566494;

	t6 = (x49|(x50/(x51%x52)));

	if (t6 != 5837) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x53 = 686U;
	uint8_t x54 = 17U;
	int64_t x55 = 28301LL;
	uint32_t x56 = UINT32_MAX;
	volatile int64_t t7 = -14LL;

	t7 = (x53|(x54/(x55%x56)));

	if (t7 != 686LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x57 = 269867233LL;
	uint16_t x58 = UINT16_MAX;
	static int64_t x60 = INT64_MIN;
	static int64_t t8 = -330LL;

	t8 = (x57|(x58/(x59%x60)));

	if (t8 != 269867233LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x61 = -1;
	static uint64_t x62 = UINT64_MAX;
	int64_t x63 = INT64_MIN;
	volatile int32_t x64 = INT32_MAX;
	uint64_t t9 = UINT64_MAX;

	t9 = (x61|(x62/(x63%x64)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x65 = INT64_MAX;
	volatile int32_t x66 = 116834;
	static int64_t x68 = -252602832LL;
	int64_t t10 = INT64_MAX;

	t10 = (x65|(x66/(x67%x68)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x78 = -1;
	int16_t x79 = -191;
	int32_t x80 = INT32_MAX;
	volatile uint32_t t11 = 536U;

	t11 = (x77|(x78/(x79%x80)));

	if (t11 != 31448U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	static volatile int64_t t12 = 7LL;

	t12 = (x93|(x94/(x95%x96)));

	if (t12 != 281479271677951LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x97 = INT64_MIN;
	uint8_t x98 = UINT8_MAX;
	volatile int16_t x99 = -1;
	int64_t t13 = 1971827309LL;

	t13 = (x97|(x98/(x99%x100)));

	if (t13 != -255LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x106 = INT32_MIN;
	static uint64_t x108 = UINT64_MAX;
	uint64_t t14 = 42LLU;

	t14 = (x105|(x106/(x107%x108)));

	if (t14 != 18446744071562070989LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x109 = UINT16_MAX;
	int16_t x110 = INT16_MAX;
	int16_t x112 = INT16_MIN;

	t15 = (x109|(x110/(x111%x112)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x113 = 7U;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MAX;
	uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t16 = 501262346033LLU;

	t16 = (x113|(x114/(x115%x116)));

	if (t16 != 7LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x118 = 108LLU;
	uint32_t x119 = UINT32_MAX;
	volatile int16_t x120 = 1836;
	uint64_t t17 = 5798894985LLU;

	t17 = (x117|(x118/(x119%x120)));

	if (t17 != 6LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x125 = 23440LL;
	volatile uint16_t x127 = 4622U;
	static int64_t x128 = INT64_MIN;

	t18 = (x125|(x126/(x127%x128)));

	if (t18 != 23440LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x133 = INT16_MIN;
	static int64_t x135 = INT64_MAX;
	static int64_t x136 = INT64_MIN;
	static volatile int64_t t19 = -27777909335850255LL;

	t19 = (x133|(x134/(x135%x136)));

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x141 = -9373038;
	uint32_t x142 = UINT32_MAX;
	uint64_t x143 = 16042977934776LLU;
	int8_t x144 = -1;
	uint64_t t20 = 11617034LLU;

	t20 = (x141|(x142/(x143%x144)));

	if (t20 != 18446744073700178578LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x145 = 642222LLU;
	uint64_t x147 = 99313889138387451LLU;
	static volatile uint64_t t21 = 2021127LLU;

	t21 = (x145|(x146/(x147%x148)));

	if (t21 != 401016175515524527LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x149 = 2U;
	static int32_t x150 = -1;
	uint64_t x151 = 1866876760896LLU;
	uint16_t x152 = UINT16_MAX;
	volatile uint64_t t22 = 75626294297LLU;

	t22 = (x149|(x150/(x151%x152)));

	if (t22 != 754745880844055LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x153 = 63U;
	volatile int8_t x154 = INT8_MIN;
	static int16_t x155 = INT16_MIN;
	volatile int32_t t23 = 167680;

	t23 = (x153|(x154/(x155%x156)));

	if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x157 = INT8_MIN;
	int8_t x158 = 21;
	uint64_t x159 = 14462977LLU;
	volatile int32_t x160 = INT32_MIN;
	volatile uint64_t t24 = 3642LLU;

	t24 = (x157|(x158/(x159%x160)));

	if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x161 = INT32_MIN;
	volatile uint64_t x163 = 4LLU;
	int16_t x164 = INT16_MIN;
	uint64_t t25 = 26663862002450LLU;

	t25 = (x161|(x162/(x163%x164)));

	if (t25 != 18446744072401708398LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = 7443697846LL;
	static int32_t x168 = 688548145;

	t26 = (x165|(x166/(x167%x168)));

	if (t26 != 7443839166LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x174 = 3780747810262LLU;
	int32_t x175 = INT32_MIN;
	uint64_t t27 = 3667202103939012LLU;

	t27 = (x173|(x174/(x175%x176)));

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x177 = -1;
	static volatile int32_t x178 = -513841;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x177|(x178/(x179%x180)));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x181 = -12059;
	int32_t x182 = -1;
	int32_t x183 = INT32_MAX;
	static volatile int32_t x184 = INT32_MIN;
	int32_t t29 = -7210778;

	t29 = (x181|(x182/(x183%x184)));

	if (t29 != -12059) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = 521;
	uint16_t x187 = 1U;

	t30 = (x185|(x186/(x187%x188)));

	if (t30 != 9223372036854776329LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x191 = UINT32_MAX;
	volatile int32_t x192 = -771187926;
	uint32_t t31 = 15016U;

	t31 = (x189|(x190/(x191%x192)));

	if (t31 != 4294967168U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x205 = INT32_MAX;
	int16_t x206 = INT16_MIN;
	int16_t x208 = INT16_MIN;

	t32 = (x205|(x206/(x207%x208)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x209 = INT8_MAX;
	int8_t x210 = INT8_MIN;
	uint32_t x211 = 326331667U;
	int64_t x212 = 11392441224LL;
	volatile int64_t t33 = -1872599LL;

	t33 = (x209|(x210/(x211%x212)));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x217 = 384U;
	int8_t x218 = INT8_MAX;
	static int8_t x219 = 10;
	int8_t x220 = -28;
	static volatile int32_t t34 = 1116260;

	t34 = (x217|(x218/(x219%x220)));

	if (t34 != 396) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x222 = 7U;
	static int64_t x224 = INT64_MAX;
	uint64_t t35 = 19878445170820111LLU;

	t35 = (x221|(x222/(x223%x224)));

	if (t35 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x229 = UINT64_MAX;
	volatile uint8_t x230 = 6U;
	int16_t x231 = INT16_MIN;
	uint64_t x232 = 782516260201812739LLU;
	uint64_t t36 = UINT64_MAX;

	t36 = (x229|(x230/(x231%x232)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x234 = -1008570;
	volatile uint64_t t37 = 1639294140LLU;

	t37 = (x233|(x234/(x235%x236)));

	if (t37 != 9223411147361083799LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x237 = INT64_MAX;
	uint16_t x238 = 1869U;
	int8_t x239 = -1;
	uint16_t x240 = 3U;
	static volatile int64_t t38 = 1LL;

	t38 = (x237|(x238/(x239%x240)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x253 = INT64_MAX;
	static uint8_t x254 = 2U;
	volatile int16_t x256 = INT16_MIN;
	static volatile int64_t t39 = INT64_MAX;

	t39 = (x253|(x254/(x255%x256)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x259 = 6486730815LLU;
	int32_t x260 = -180;
	volatile uint64_t t40 = 107LLU;

	t40 = (x257|(x258/(x259%x260)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x262 = 0U;
	static volatile int16_t x263 = -9;
	int8_t x264 = -62;
	volatile int32_t t41 = -219849;

	t41 = (x261|(x262/(x263%x264)));

	if (t41 != -29) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x265 = INT64_MIN;
	int8_t x266 = -1;
	static int32_t x267 = INT32_MAX;
	static int16_t x268 = INT16_MAX;
	volatile int64_t t42 = -62068872647LL;

	t42 = (x265|(x266/(x267%x268)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x269 = UINT64_MAX;
	static int8_t x272 = INT8_MIN;
	uint64_t t43 = UINT64_MAX;

	t43 = (x269|(x270/(x271%x272)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x273 = UINT64_MAX;
	uint64_t x274 = 85040LLU;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;
	uint64_t t44 = UINT64_MAX;

	t44 = (x273|(x274/(x275%x276)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x277 = INT16_MIN;
	static int32_t x279 = -22531;
	volatile uint32_t x280 = 596504U;
	volatile uint32_t t45 = 3U;

	t45 = (x277|(x278/(x279%x280)));

	if (t45 != 4294938796U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x281 = 74754316832342970LLU;
	int8_t x283 = INT8_MAX;
	uint64_t t46 = 18418630188163LLU;

	t46 = (x281|(x282/(x283%x284)));

	if (t46 != 220004269631767483LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x285 = 836215207LLU;
	uint32_t x287 = 57U;
	uint32_t x288 = 1959876307U;

	t47 = (x285|(x286/(x287%x288)));

	if (t47 != 905961919LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	uint64_t x295 = 1695136159252LLU;
	int64_t x296 = -131354594LL;
	volatile uint64_t t48 = UINT64_MAX;

	t48 = (x293|(x294/(x295%x296)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x297 = INT64_MIN;
	uint16_t x299 = UINT16_MAX;
	int64_t x300 = INT64_MIN;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x297|(x298/(x299%x300)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x302 = -1;
	int32_t x303 = -56162906;
	int32_t x304 = INT32_MIN;

	t50 = (x301|(x302/(x303%x304)));

	if (t50 != -445) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x309 = 564701353LLU;
	int32_t x310 = -1;
	int64_t x311 = INT64_MAX;
	static int64_t x312 = 29199228LL;
	uint64_t t51 = 26225LLU;

	t51 = (x309|(x310/(x311%x312)));

	if (t51 != 564701353LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x313 = INT16_MIN;
	int16_t x314 = INT16_MAX;
	static int8_t x316 = INT8_MAX;
	volatile int64_t t52 = -4107053LL;

	t52 = (x313|(x314/(x315%x316)));

	if (t52 != -6553LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x325 = 1;
	uint64_t x326 = 11667546100424LLU;
	volatile uint32_t x328 = 88U;

	t53 = (x325|(x326/(x327%x328)));

	if (t53 != 188186227427LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x329 = 16148995342650167LLU;
	volatile int16_t x330 = -1;
	volatile uint16_t x331 = 95U;
	volatile int32_t x332 = -240435780;

	t54 = (x329|(x330/(x331%x332)));

	if (t54 != 16148995342650167LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x333 = INT8_MIN;
	static int16_t x335 = INT16_MIN;
	int32_t t55 = 0;

	t55 = (x333|(x334/(x335%x336)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x337 = 1303755132062LLU;
	int16_t x338 = 1;
	uint16_t x339 = 5399U;
	uint32_t x340 = 7852359U;
	volatile uint64_t t56 = 2111571208047LLU;

	t56 = (x337|(x338/(x339%x340)));

	if (t56 != 1303755132062LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MAX;
	static uint64_t x343 = 10078LLU;
	static int16_t x344 = INT16_MIN;
	volatile uint64_t t57 = 3719758107LLU;

	t57 = (x341|(x342/(x343%x344)));

	if (t57 != 255LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = 7;
	int16_t x359 = 4255;
	static int16_t x360 = -598;
	static volatile int32_t t58 = 32286598;

	t58 = (x357|(x358/(x359%x360)));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x366 = 1503919230381LLU;
	uint16_t x367 = 11U;
	volatile uint64_t t59 = UINT64_MAX;

	t59 = (x365|(x366/(x367%x368)));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x369 = INT8_MAX;
	static uint16_t x370 = 1398U;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MAX;

	t60 = (x369|(x370/(x371%x372)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t x374 = INT32_MAX;
	uint8_t x375 = 69U;
	static volatile int16_t x376 = -2;
	volatile int32_t t61 = INT32_MAX;

	t61 = (x373|(x374/(x375%x376)));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x381 = INT16_MIN;
	uint32_t x383 = 225U;
	int64_t x384 = INT64_MIN;
	int64_t t62 = 9804LL;

	t62 = (x381|(x382/(x383%x384)));

	if (t62 != -15001LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x386 = 9U;
	uint8_t x388 = 120U;
	volatile int32_t t63 = -1;

	t63 = (x385|(x386/(x387%x388)));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x389 = -1;
	static int8_t x391 = INT8_MAX;
	volatile uint64_t x392 = UINT64_MAX;

	t64 = (x389|(x390/(x391%x392)));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x397 = UINT32_MAX;
	uint16_t x398 = 4887U;
	volatile int8_t x399 = 19;
	uint16_t x400 = UINT16_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (x397|(x398/(x399%x400)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x401 = 308374U;
	static int16_t x402 = 299;
	volatile uint64_t x403 = 15576103LLU;
	int32_t x404 = -1;
	volatile uint64_t t66 = 44558949086147LLU;

	t66 = (x401|(x402/(x403%x404)));

	if (t66 != 308374LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x405 = -174711300860258LL;
	volatile int32_t x406 = INT32_MIN;
	int32_t x407 = -15743672;
	int8_t x408 = INT8_MAX;

	t67 = (x405|(x406/(x407%x408)));

	if (t67 != -174711284082785LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x409 = INT8_MAX;
	int32_t x410 = 561383;
	static volatile uint8_t x411 = 104U;
	volatile uint8_t x412 = 94U;
	int32_t t68 = -111;

	t68 = (x409|(x410/(x411%x412)));

	if (t68 != 56191) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x413 = -39;
	static volatile int16_t x414 = 1;
	uint16_t x415 = 2U;
	uint32_t x416 = 15353873U;
	volatile uint32_t t69 = 75594472U;

	t69 = (x413|(x414/(x415%x416)));

	if (t69 != 4294967257U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x421 = 3U;
	uint32_t x423 = 12U;
	uint64_t x424 = 57893LLU;
	static uint64_t t70 = 1207704LLU;

	t70 = (x421|(x422/(x423%x424)));

	if (t70 != 1537228672809126571LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x433 = INT64_MIN;
	static volatile int32_t x434 = -7583;
	volatile int8_t x435 = INT8_MIN;
	int64_t t71 = -216103LL;

	t71 = (x433|(x434/(x435%x436)));

	if (t71 != -9223372036854775486LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x438 = -209LL;
	volatile uint32_t x439 = UINT32_MAX;
	uint16_t x440 = 54U;
	static int64_t t72 = -2983509815521411LL;

	t72 = (x437|(x438/(x439%x440)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x441 = -1LL;
	int32_t x442 = -1;
	volatile uint8_t x443 = 39U;
	uint8_t x444 = UINT8_MAX;

	t73 = (x441|(x442/(x443%x444)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x453 = 6841523;
	volatile int64_t x454 = INT64_MIN;
	volatile int64_t t74 = -2998902952976822LL;

	t74 = (x453|(x454/(x455%x456)));

	if (t74 != 72057594044769459LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x457 = UINT32_MAX;
	uint64_t x458 = 8740855707982014LLU;
	int16_t x459 = -1;
	int16_t x460 = -62;

	t75 = (x457|(x458/(x459%x460)));

	if (t75 != 4294967295LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x461 = INT32_MAX;
	volatile uint16_t x463 = UINT16_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile uint32_t t76 = 1U;

	t76 = (x461|(x462/(x463%x464)));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x466 = 0;
	static volatile int32_t x467 = -72748889;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x465|(x466/(x467%x468)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x469 = 87U;
	static int32_t x472 = -60;

	t78 = (x469|(x470/(x471%x472)));

	if (t78 != 59634704119LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x475 = 113U;
	uint64_t x476 = 11LLU;

	t79 = (x473|(x474/(x475%x476)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x477 = INT64_MIN;
	uint8_t x478 = UINT8_MAX;
	volatile uint64_t x479 = 980LLU;
	volatile uint64_t t80 = 16371LLU;

	t80 = (x477|(x478/(x479%x480)));

	if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x481 = INT8_MIN;
	int64_t x484 = 17400192842908LL;
	int64_t t81 = -6286969945LL;

	t81 = (x481|(x482/(x483%x484)));

	if (t81 != -128LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x489 = -1;
	int16_t x490 = INT16_MIN;
	int8_t x491 = 1;
	int8_t x492 = INT8_MAX;
	int32_t t82 = 8754774;

	t82 = (x489|(x490/(x491%x492)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x493 = UINT64_MAX;
	int8_t x494 = -1;
	uint8_t x495 = UINT8_MAX;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x493|(x494/(x495%x496)));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x497 = -1;
	volatile int64_t x498 = INT64_MAX;
	int8_t x499 = INT8_MIN;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x497|(x498/(x499%x500)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x501 = 4;
	int64_t x502 = INT64_MAX;
	volatile uint16_t x504 = 17699U;
	static volatile uint64_t t85 = 1340LLU;

	t85 = (x501|(x502/(x503%x504)));

	if (t85 != 3693781352364748LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x505 = -1;
	volatile uint16_t x506 = UINT16_MAX;
	uint8_t x507 = UINT8_MAX;
	static int16_t x508 = 58;
	int32_t t86 = 18;

	t86 = (x505|(x506/(x507%x508)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x509 = -1;
	static int8_t x510 = 1;
	static volatile int64_t x511 = INT64_MAX;
	int64_t x512 = INT64_MIN;
	volatile int64_t t87 = 451607102351LL;

	t87 = (x509|(x510/(x511%x512)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x513 = INT64_MIN;
	int8_t x516 = INT8_MIN;
	static int64_t t88 = 84735194928LL;

	t88 = (x513|(x514/(x515%x516)));

	if (t88 != -9223366696596101056LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x519 = UINT64_MAX;
	static int16_t x520 = 1079;

	t89 = (x517|(x518/(x519%x520)));

	if (t89 != 23589186795077631LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x521 = INT32_MIN;
	int64_t x523 = INT64_MAX;
	volatile int8_t x524 = INT8_MIN;

	t90 = (x521|(x522/(x523%x524)));

	if (t90 != 18446744072306448511LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x526 = UINT8_MAX;
	static volatile int64_t x528 = INT64_MAX;
	int64_t t91 = -239833268LL;

	t91 = (x525|(x526/(x527%x528)));

	if (t91 != 5LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x533 = 42U;
	uint8_t x534 = UINT8_MAX;
	int8_t x535 = INT8_MIN;
	static int16_t x536 = -2953;
	volatile int32_t t92 = -7;

	t92 = (x533|(x534/(x535%x536)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x537 = 44643LLU;
	int16_t x538 = 382;
	volatile int64_t x539 = 728091233000748526LL;
	uint64_t x540 = UINT64_MAX;
	volatile uint64_t t93 = 1LLU;

	t93 = (x537|(x538/(x539%x540)));

	if (t93 != 44643LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x541 = -169535661435937938LL;
	int64_t x543 = INT64_MAX;
	static uint64_t x544 = UINT64_MAX;
	volatile uint64_t t94 = 59432329945LLU;

	t94 = (x541|(x542/(x543%x544)));

	if (t94 != 18277208412273613679LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x545 = 48LLU;
	int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MIN;
	uint16_t x548 = UINT16_MAX;
	uint64_t t95 = 143408404LLU;

	t95 = (x545|(x546/(x547%x548)));

	if (t95 != 49LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x549 = -359446;
	volatile int16_t x550 = INT16_MIN;
	uint64_t x552 = 23454LLU;
	static volatile uint64_t t96 = 24LLU;

	t96 = (x549|(x550/(x551%x552)));

	if (t96 != 18446744073709524990LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x558 = 0U;
	uint32_t x559 = 615529U;
	int32_t x560 = INT32_MIN;

	t97 = (x557|(x558/(x559%x560)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x561 = 205;
	static uint16_t x563 = 21475U;
	int64_t x564 = INT64_MAX;
	volatile int64_t t98 = -2241674114176291LL;

	t98 = (x561|(x562/(x563%x564)));

	if (t98 != 13567LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x569 = -6551099720589636LL;
	volatile uint32_t x570 = UINT32_MAX;
	static uint8_t x571 = UINT8_MAX;
	uint64_t x572 = 103LLU;
	volatile uint64_t t99 = 8051730376LLU;

	t99 = (x569|(x570/(x571%x572)));

	if (t99 != 18440192974009499325LLU) { NG(); } else { ; }
	
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

