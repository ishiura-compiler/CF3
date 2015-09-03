#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
int16_t x3 = -1;
uint8_t x5 = 3U;
int32_t x6 = INT32_MAX;
int16_t x7 = INT16_MAX;
int64_t x8 = -142219106776769031LL;
volatile int64_t t2 = -140260LL;
static uint16_t x23 = 3U;
volatile uint32_t t3 = 76176U;
volatile uint32_t x35 = 1U;
static int64_t t5 = 6808419145629446LL;
static int16_t x43 = INT16_MIN;
static volatile uint32_t x53 = 60U;
static uint64_t x54 = 343370499LLU;
uint64_t t8 = 13LLU;
volatile int64_t x58 = INT64_MIN;
volatile int32_t x60 = -1422;
volatile int64_t t9 = -519049527201LL;
int64_t t10 = -99471339807616LL;
static int64_t x66 = 5033LL;
uint8_t x74 = UINT8_MAX;
static uint32_t x77 = UINT32_MAX;
int8_t x85 = INT8_MIN;
int8_t x86 = INT8_MIN;
uint16_t x91 = 1U;
volatile uint64_t t18 = 2331LLU;
volatile int32_t x102 = INT32_MIN;
static volatile int8_t x130 = -6;
int16_t x131 = INT16_MIN;
int8_t x132 = INT8_MIN;
int8_t x144 = INT8_MIN;
static volatile uint16_t x159 = 15432U;
uint32_t x163 = UINT32_MAX;
static int64_t t31 = 607LL;
volatile int64_t x168 = -67LL;
int32_t x170 = INT32_MIN;
uint64_t t33 = 29LLU;
int8_t x177 = -7;
static int64_t x178 = 2959351LL;
static uint8_t x179 = UINT8_MAX;
uint8_t x180 = 5U;
uint8_t x181 = UINT8_MAX;
volatile uint8_t x182 = 6U;
uint16_t x186 = 86U;
int16_t x190 = -28;
int32_t x191 = INT32_MIN;
uint16_t x196 = UINT16_MAX;
uint64_t t40 = 4229765273165LLU;
static volatile int32_t x202 = INT32_MIN;
int32_t x204 = INT32_MIN;
int64_t x214 = -33961682936687LL;
static int64_t t44 = -1335598697417LL;
volatile uint32_t x251 = 694801U;
volatile uint32_t x256 = UINT32_MAX;
int32_t x280 = -1;
int8_t x281 = INT8_MIN;
int8_t x291 = INT8_MIN;
static int8_t x293 = INT8_MAX;
int16_t x295 = INT16_MIN;
static uint64_t x296 = 5054229838173LLU;
uint32_t x298 = 8618328U;
uint16_t x305 = 110U;
uint32_t t56 = 1U;
static uint32_t x310 = 260760830U;
int8_t x312 = -1;
int16_t x317 = -45;
int16_t x321 = INT16_MIN;
volatile uint64_t t61 = 26386847778849LLU;
static volatile int16_t x330 = 1;
int16_t x333 = INT16_MAX;
int8_t x337 = -49;
static int64_t x358 = 499429189LL;
int8_t x367 = INT8_MIN;
int32_t t69 = 88452848;
volatile int64_t x370 = INT64_MIN;
uint8_t x371 = UINT8_MAX;
volatile uint64_t t71 = 4486995178382317LLU;
static int32_t x377 = -3061;
static int64_t x378 = 12LL;
static int16_t x381 = 10;
int32_t x383 = -168;
int16_t x390 = INT16_MIN;
static uint32_t x392 = UINT32_MAX;
int32_t x393 = -1;
uint32_t x395 = 11805837U;
uint64_t x403 = 76384631323653LLU;
int64_t x411 = -1LL;
uint64_t t78 = 1794173130408LLU;
int16_t x416 = -2202;
int32_t x417 = INT32_MAX;
volatile int32_t x418 = INT32_MIN;
volatile int16_t x421 = INT16_MAX;
volatile int32_t x423 = -49481;
uint64_t x428 = 731548884LLU;
int16_t x431 = -1;
int32_t t85 = -24;
static int64_t x445 = -4066627597934LL;
int32_t x447 = -1;
volatile int16_t x451 = -6;
static int64_t t89 = -309679007409LL;
int8_t x462 = 5;
volatile int64_t t92 = -1903379978LL;
volatile uint16_t x472 = 19410U;
uint32_t t93 = 117514737U;
volatile int32_t x493 = INT32_MIN;
volatile int32_t x495 = -1;
volatile uint32_t x501 = UINT32_MAX;


void f0(void) {
	uint8_t x2 = 6U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -65;

	t0 = (x1+(x2+(x3-x4)));

	if (t0 != -32763) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t t1 = -3265559156LL;

	t1 = (x5+(x6+(x7-x8)));

	if (t1 != 142219108924285448LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = -1;
	volatile int64_t x18 = -1LL;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = -15365;

	t2 = (x17+(x18+(x19-x20)));

	if (t2 != 15362LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 123U;
	volatile uint32_t x22 = 66822690U;
	int8_t x24 = -1;

	t3 = (x21+(x22+(x23-x24)));

	if (t3 != 66822817U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = 0;
	uint32_t x34 = 6U;
	int8_t x36 = -1;
	volatile uint32_t t4 = 18951U;

	t4 = (x33+(x34+(x35-x36)));

	if (t4 != 8U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = INT32_MIN;
	static volatile int64_t x38 = 126LL;
	uint32_t x39 = UINT32_MAX;
	static volatile int32_t x40 = -1;

	t5 = (x37+(x38+(x39-x40)));

	if (t5 != -2147483522LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x41 = 22120974576LLU;
	uint16_t x42 = 10U;
	static uint8_t x44 = 0U;
	uint64_t t6 = 90072089913LLU;

	t6 = (x41+(x42+(x43-x44)));

	if (t6 != 22120941818LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x49 = 1U;
	volatile int64_t x50 = INT64_MIN;
	int8_t x51 = -54;
	uint32_t x52 = 56U;
	int64_t t7 = 2926LL;

	t7 = (x49+(x50+(x51-x52)));

	if (t7 != -9223372032559808621LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x55 = INT8_MIN;
	int64_t x56 = -1LL;

	t8 = (x53+(x54+(x55-x56)));

	if (t8 != 343370432LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x57 = UINT32_MAX;
	uint32_t x59 = UINT32_MAX;

	t9 = (x57+(x58+(x59-x60)));

	if (t9 != -9223372032559807092LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 1948U;
	static uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MIN;
	int64_t x64 = INT64_MIN;

	t10 = (x61+(x62+(x63-x64)));

	if (t10 != 9223372036854745243LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x65 = 33243678559LLU;
	int16_t x67 = -33;
	int8_t x68 = 31;
	uint64_t t11 = 3491469053742575LLU;

	t11 = (x65+(x66+(x67-x68)));

	if (t11 != 33243683528LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = -719478866493LL;
	int32_t x71 = 59447158;
	int8_t x72 = INT8_MIN;
	static volatile int64_t t12 = -100528473LL;

	t12 = (x69+(x70+(x71-x72)));

	if (t12 != -721566902855LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x73 = UINT64_MAX;
	volatile int16_t x75 = 356;
	int64_t x76 = INT64_MAX;
	uint64_t t13 = 20213833LLU;

	t13 = (x73+(x74+(x75-x76)));

	if (t13 != 9223372036854776419LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x78 = INT32_MIN;
	static uint16_t x79 = UINT16_MAX;
	int32_t x80 = -1;
	static uint32_t t14 = 11037824U;

	t14 = (x77+(x78+(x79-x80)));

	if (t14 != 2147549183U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x87 = UINT64_MAX;
	uint16_t x88 = UINT16_MAX;
	uint64_t t15 = 388683767LLU;

	t15 = (x85+(x86+(x87-x88)));

	if (t15 != 18446744073709485824LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MIN;
	uint8_t x90 = 5U;
	int16_t x92 = INT16_MIN;
	static int32_t t16 = 1005;

	t16 = (x89+(x90+(x91-x92)));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x93 = INT32_MAX;
	uint64_t x94 = 4839734394LLU;
	uint16_t x95 = 493U;
	static uint32_t x96 = 8172893U;
	volatile uint64_t t17 = 4138201596969111LLU;

	t17 = (x93+(x94+(x95-x96)));

	if (t17 != 11274012937LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x97 = 250LLU;
	int8_t x98 = INT8_MIN;
	uint64_t x99 = UINT64_MAX;
	volatile int32_t x100 = 42;

	t18 = (x97+(x98+(x99-x100)));

	if (t18 != 79LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MAX;
	static uint64_t x103 = UINT64_MAX;
	volatile int8_t x104 = 2;
	uint64_t t19 = 8770638222025043479LLU;

	t19 = (x101+(x102+(x103-x104)));

	if (t19 != 18446744071562068092LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x105 = 5U;
	int32_t x106 = -1;
	uint64_t x107 = 21799198LLU;
	int16_t x108 = INT16_MIN;
	volatile uint64_t t20 = 573LLU;

	t20 = (x105+(x106+(x107-x108)));

	if (t20 != 21831970LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = -3424863161918036LL;
	uint16_t x110 = 24U;
	int32_t x111 = INT32_MIN;
	static int8_t x112 = -1;
	int64_t t21 = -2LL;

	t21 = (x109+(x110+(x111-x112)));

	if (t21 != -3424865309401659LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = UINT32_MAX;
	int64_t x116 = -1LL;
	static int64_t t22 = -17745LL;

	t22 = (x113+(x114+(x115-x116)));

	if (t22 != 8589934463LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MIN;
	static uint32_t x118 = UINT32_MAX;
	static int32_t x119 = 182664;
	uint16_t x120 = 19904U;
	int64_t t23 = -61194209594096LL;

	t23 = (x117+(x118+(x119-x120)));

	if (t23 != -9223372036854613049LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x121 = 1;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MIN;
	int64_t x124 = -1LL;
	static volatile uint64_t t24 = 2234382054218171LLU;

	t24 = (x121+(x122+(x123-x124)));

	if (t24 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x125 = -4957;
	int32_t x126 = 68496;
	int16_t x127 = 3;
	static int8_t x128 = -62;
	static volatile int32_t t25 = 1487135;

	t25 = (x125+(x126+(x127-x128)));

	if (t25 != 63604) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x129 = UINT32_MAX;
	uint32_t t26 = 2547U;

	t26 = (x129+(x130+(x131-x132)));

	if (t26 != 4294934649U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = -1;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	volatile int64_t t27 = 6LL;

	t27 = (x141+(x142+(x143-x144)));

	if (t27 != -2147483522LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x145 = 0;
	uint8_t x146 = 22U;
	uint32_t x147 = 1735886U;
	uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t28 = 119U;

	t28 = (x145+(x146+(x147-x148)));

	if (t28 != 1735909U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = INT8_MAX;
	static int64_t x150 = INT64_MIN;
	uint32_t x151 = 6973112U;
	int16_t x152 = INT16_MIN;
	int64_t t29 = 175LL;

	t29 = (x149+(x150+(x151-x152)));

	if (t29 != -9223372036847769801LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = -56;
	static int16_t x158 = INT16_MAX;
	volatile int16_t x160 = -1;
	volatile int32_t t30 = -788;

	t30 = (x157+(x158+(x159-x160)));

	if (t30 != 48144) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = -3625427931LL;
	int32_t x162 = 59977;
	int8_t x164 = -14;

	t31 = (x161+(x162+(x163-x164)));

	if (t31 != -3625367941LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = 3691901133362LL;
	int32_t x167 = 42532;
	static int64_t t32 = -49552LL;

	t32 = (x165+(x166+(x167-x168)));

	if (t32 != 3691901143193LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x169 = 522LLU;
	uint64_t x171 = 184248721LLU;
	int8_t x172 = INT8_MIN;

	t33 = (x169+(x170+(x171-x172)));

	if (t33 != 18446744071746317339LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x173 = 30;
	uint16_t x174 = UINT16_MAX;
	volatile int64_t x175 = 2851584549223LL;
	int64_t x176 = 218244328LL;
	static volatile int64_t t34 = 256095624008136992LL;

	t34 = (x173+(x174+(x175-x176)));

	if (t34 != 2851366370460LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t t35 = -4230118727710929305LL;

	t35 = (x177+(x178+(x179-x180)));

	if (t35 != 2959594LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t36 = 28;

	t36 = (x181+(x182+(x183-x184)));

	if (t36 != 33029) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = 1U;
	uint8_t x187 = 79U;
	static int16_t x188 = 14380;
	int32_t t37 = -19295690;

	t37 = (x185+(x186+(x187-x188)));

	if (t37 != -14214) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = -1;
	int64_t x192 = INT64_MIN;
	volatile int64_t t38 = 279LL;

	t38 = (x189+(x190+(x191-x192)));

	if (t38 != 9223372034707292131LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x193 = INT32_MAX;
	static uint32_t x194 = 315126U;
	static uint16_t x195 = 28U;
	volatile uint32_t t39 = 35993U;

	t39 = (x193+(x194+(x195-x196)));

	if (t39 != 2147733266U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x197 = INT8_MAX;
	static volatile uint64_t x198 = 6397586330LLU;
	int16_t x199 = -1760;
	uint64_t x200 = 245158LLU;

	t40 = (x197+(x198+(x199-x200)));

	if (t40 != 6397339539LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x201 = 1913887640LLU;
	int16_t x203 = INT16_MIN;
	volatile uint64_t t41 = 3572893074LLU;

	t41 = (x201+(x202+(x203-x204)));

	if (t41 != 1913854872LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x213 = INT32_MIN;
	uint8_t x215 = 109U;
	uint8_t x216 = 60U;
	int64_t t42 = -920313419035291085LL;

	t42 = (x213+(x214+(x215-x216)));

	if (t42 != -33963830420286LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = INT16_MAX;
	uint32_t x218 = 549542U;
	uint64_t x219 = 64501123LLU;
	int32_t x220 = 13;
	uint64_t t43 = 139900264500236LLU;

	t43 = (x217+(x218+(x219-x220)));

	if (t43 != 65083419LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = INT64_MIN;
	static volatile int32_t x223 = INT32_MAX;
	uint8_t x224 = 104U;

	t44 = (x221+(x222+(x223-x224)));

	if (t44 != -9223372030412324970LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x225 = INT64_MIN;
	static uint64_t x226 = 287899316448382LLU;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = 177U;
	volatile uint64_t t45 = 3659666LLU;

	t45 = (x225+(x226+(x227-x228)));

	if (t45 != 9223659936171224268LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x241 = INT32_MIN;
	int16_t x242 = -1;
	uint16_t x243 = 7403U;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t46 = 25034U;

	t46 = (x241+(x242+(x243-x244)));

	if (t46 != 2147491051U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x245 = 48U;
	int16_t x246 = -1;
	int32_t x247 = 12929229;
	uint16_t x248 = 7U;
	volatile int32_t t47 = 2032;

	t47 = (x245+(x246+(x247-x248)));

	if (t47 != 12929269) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x249 = INT32_MIN;
	int32_t x250 = INT32_MIN;
	static uint64_t x252 = 137464391LLU;
	volatile uint64_t t48 = 1086641693020LLU;

	t48 = (x249+(x250+(x251-x252)));

	if (t48 != 18446744069277814730LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x253 = 5;
	static int32_t x254 = -7979;
	uint8_t x255 = UINT8_MAX;
	uint32_t t49 = 90155240U;

	t49 = (x253+(x254+(x255-x256)));

	if (t49 != 4294959578U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MAX;
	volatile uint32_t x268 = UINT32_MAX;
	uint32_t t50 = 865127U;

	t50 = (x265+(x266+(x267-x268)));

	if (t50 != 32512U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x277 = INT8_MIN;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = -1;
	volatile int32_t t51 = 3520414;

	t51 = (x277+(x278+(x279-x280)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x282 = 418822390754446LLU;
	volatile uint16_t x283 = 3105U;
	static uint32_t x284 = 25026434U;
	volatile uint64_t t52 = 243951983344829LLU;

	t52 = (x281+(x282+(x283-x284)));

	if (t52 != 418826660698285LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x289 = -1;
	int32_t x290 = INT32_MAX;
	uint8_t x292 = 11U;
	int32_t t53 = -704774738;

	t53 = (x289+(x290+(x291-x292)));

	if (t53 != 2147483507) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x294 = 6670U;
	uint64_t t54 = 39919268456LLU;

	t54 = (x293+(x294+(x295-x296)));

	if (t54 != 18446739019479687472LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x297 = INT8_MIN;
	static volatile int32_t x299 = -11670;
	int16_t x300 = 0;
	uint32_t t55 = 1066123606U;

	t55 = (x297+(x298+(x299-x300)));

	if (t55 != 8606530U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x306 = 60;
	uint32_t x307 = 252203885U;
	int8_t x308 = -1;

	t56 = (x305+(x306+(x307-x308)));

	if (t56 != 252204056U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x309 = INT8_MIN;
	int8_t x311 = -1;
	volatile uint32_t t57 = 1006067U;

	t57 = (x309+(x310+(x311-x312)));

	if (t57 != 260760702U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = 23;
	static int8_t x314 = -21;
	volatile int64_t x315 = INT64_MIN;
	volatile uint64_t x316 = 14258543059082LLU;
	volatile uint64_t t58 = 1540896525314686786LLU;

	t58 = (x313+(x314+(x315-x316)));

	if (t58 != 9223357778311716728LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x318 = -1LL;
	int64_t x319 = INT64_MIN;
	static int32_t x320 = -67496596;
	volatile int64_t t59 = 381284777048044801LL;

	t59 = (x317+(x318+(x319-x320)));

	if (t59 != -9223372036787279258LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x322 = 0;
	uint64_t x323 = 3383988LLU;
	int8_t x324 = INT8_MIN;
	uint64_t t60 = 179380248662160LLU;

	t60 = (x321+(x322+(x323-x324)));

	if (t60 != 3351348LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x325 = 54LLU;
	int32_t x326 = -1;
	int16_t x327 = -1;
	volatile int8_t x328 = INT8_MAX;

	t61 = (x325+(x326+(x327-x328)));

	if (t61 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x329 = 27;
	uint64_t x331 = 1815772435LLU;
	volatile int16_t x332 = -1;
	volatile uint64_t t62 = 49LLU;

	t62 = (x329+(x330+(x331-x332)));

	if (t62 != 1815772464LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x334 = UINT16_MAX;
	static int8_t x335 = INT8_MIN;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t63 = 3;

	t63 = (x333+(x334+(x335-x336)));

	if (t63 != 98302) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x338 = 3769322;
	volatile uint16_t x339 = 4069U;
	int32_t x340 = 2;
	int32_t t64 = 6;

	t64 = (x337+(x338+(x339-x340)));

	if (t64 != 3773340) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x341 = 53U;
	int8_t x342 = INT8_MAX;
	int64_t x343 = -1LL;
	volatile int16_t x344 = INT16_MIN;
	static volatile int64_t t65 = -41221581101LL;

	t65 = (x341+(x342+(x343-x344)));

	if (t65 != 32947LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x345 = INT32_MAX;
	int32_t x346 = -1;
	volatile uint16_t x347 = 7895U;
	volatile int64_t x348 = INT64_MAX;
	int64_t t66 = 56368158685724068LL;

	t66 = (x345+(x346+(x347-x348)));

	if (t66 != -9223372034707284266LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x353 = 3LLU;
	int64_t x354 = -1LL;
	static int16_t x355 = -1;
	volatile int32_t x356 = INT32_MIN;
	uint64_t t67 = 26487484664193LLU;

	t67 = (x353+(x354+(x355-x356)));

	if (t67 != 2147483649LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x357 = -7714;
	uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	uint64_t t68 = 763251999202716LLU;

	t68 = (x357+(x358+(x359-x360)));

	if (t68 != 499421602LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x365 = -1;
	volatile uint16_t x366 = 1374U;
	int16_t x368 = -1;

	t69 = (x365+(x366+(x367-x368)));

	if (t69 != 1246) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x369 = 4650U;
	uint16_t x372 = 195U;
	volatile int64_t t70 = 170773599LL;

	t70 = (x369+(x370+(x371-x372)));

	if (t70 != -9223372036854771098LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x373 = 1;
	int64_t x374 = -1LL;
	uint64_t x375 = 229088536609LLU;
	int32_t x376 = 44236;

	t71 = (x373+(x374+(x375-x376)));

	if (t71 != 229088492373LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x379 = -1LL;
	static int16_t x380 = -26;
	volatile int64_t t72 = 82807LL;

	t72 = (x377+(x378+(x379-x380)));

	if (t72 != -3024LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x382 = 2898U;
	int32_t x384 = 7;
	volatile int32_t t73 = 1;

	t73 = (x381+(x382+(x383-x384)));

	if (t73 != 2733) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint64_t x389 = 229726LLU;
	int32_t x391 = -25853435;
	uint64_t t74 = 6017174315032843702LLU;

	t74 = (x389+(x390+(x391-x392)));

	if (t74 != 4269310820LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x394 = INT32_MIN;
	uint64_t x396 = 26944293LLU;
	volatile uint64_t t75 = 107LLU;

	t75 = (x393+(x394+(x395-x396)));

	if (t75 != 18446744071546929511LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x397 = INT64_MAX;
	uint64_t x398 = 4589692LLU;
	uint8_t x399 = 4U;
	int8_t x400 = INT8_MAX;
	uint64_t t76 = 558628588274LLU;

	t76 = (x397+(x398+(x399-x400)));

	if (t76 != 9223372036859365376LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x401 = INT8_MAX;
	volatile int64_t x402 = INT64_MIN;
	static int16_t x404 = INT16_MAX;
	volatile uint64_t t77 = 370703108692LLU;

	t77 = (x401+(x402+(x403-x404)));

	if (t77 != 9223448421486066821LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = 15419LLU;
	int16_t x412 = 2;

	t78 = (x409+(x410+(x411-x412)));

	if (t78 != 9223372036854791224LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x413 = 84U;
	uint64_t x414 = UINT64_MAX;
	int64_t x415 = -1LL;
	static volatile uint64_t t79 = 17120582099514448LLU;

	t79 = (x413+(x414+(x415-x416)));

	if (t79 != 2284LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x419 = INT16_MIN;
	static int16_t x420 = INT16_MIN;
	int32_t t80 = 128869;

	t80 = (x417+(x418+(x419-x420)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x422 = INT32_MAX;
	int8_t x424 = -1;
	static int32_t t81 = -460514;

	t81 = (x421+(x422+(x423-x424)));

	if (t81 != 2147466934) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x425 = -75148241;
	volatile int16_t x426 = 6;
	static int64_t x427 = -1LL;
	volatile uint64_t t82 = 486418478012237LLU;

	t82 = (x425+(x426+(x427-x428)));

	if (t82 != 18446744072902854496LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x429 = -1LL;
	int32_t x430 = INT32_MAX;
	volatile uint8_t x432 = UINT8_MAX;
	int64_t t83 = -130590450608245LL;

	t83 = (x429+(x430+(x431-x432)));

	if (t83 != 2147483390LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x433 = 48;
	int16_t x434 = INT16_MAX;
	volatile int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MIN;
	volatile int64_t t84 = 146460LL;

	t84 = (x433+(x434+(x435-x436)));

	if (t84 != -9223372034707259345LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x437 = INT8_MIN;
	uint8_t x438 = 6U;
	uint8_t x439 = UINT8_MAX;
	int8_t x440 = -1;

	t85 = (x437+(x438+(x439-x440)));

	if (t85 != 134) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x441 = INT32_MAX;
	uint64_t x442 = 529619936LLU;
	int8_t x443 = 5;
	volatile uint32_t x444 = 273179U;
	uint64_t t86 = 786200294301190201LLU;

	t86 = (x441+(x442+(x443-x444)));

	if (t86 != 6971797705LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x446 = INT64_MAX;
	static uint16_t x448 = 2049U;
	int64_t t87 = -2049866931924045LL;

	t87 = (x445+(x446+(x447-x448)));

	if (t87 != 9223367970227175823LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x449 = INT32_MAX;
	int64_t x450 = 354673081LL;
	volatile int64_t x452 = -235963546371254508LL;
	volatile int64_t t88 = 595365532877LL;

	t88 = (x449+(x450+(x451-x452)));

	if (t88 != 235963548873411230LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x453 = INT64_MIN;
	uint16_t x454 = 359U;
	static int16_t x455 = INT16_MAX;
	int16_t x456 = INT16_MIN;

	t89 = (x453+(x454+(x455-x456)));

	if (t89 != -9223372036854709914LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x457 = 7397U;
	int8_t x458 = -21;
	volatile uint16_t x459 = UINT16_MAX;
	int64_t x460 = INT64_MAX;
	int64_t t90 = 86LL;

	t90 = (x457+(x458+(x459-x460)));

	if (t90 != -9223372036854702896LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x461 = 492021100;
	int32_t x463 = -206522;
	int8_t x464 = INT8_MAX;
	volatile int32_t t91 = 56570735;

	t91 = (x461+(x462+(x463-x464)));

	if (t91 != 491814456) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x465 = INT16_MIN;
	int64_t x466 = 472417545441LL;
	volatile int16_t x467 = 5629;
	int32_t x468 = -1;

	t92 = (x465+(x466+(x467-x468)));

	if (t92 != 472417518303LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x469 = 14142U;
	static int32_t x470 = -1;
	uint8_t x471 = UINT8_MAX;

	t93 = (x469+(x470+(x471-x472)));

	if (t93 != 4294962282U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x481 = INT8_MIN;
	int32_t x482 = -1;
	int16_t x483 = INT16_MIN;
	int32_t x484 = 14838005;
	int32_t t94 = -6;

	t94 = (x481+(x482+(x483-x484)));

	if (t94 != -14870902) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x485 = 24U;
	int64_t x486 = -46549278919073LL;
	uint64_t x487 = UINT64_MAX;
	static int64_t x488 = -1LL;
	uint64_t t95 = 3197021752885122LLU;

	t95 = (x485+(x486+(x487-x488)));

	if (t95 != 18446697524430632567LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x494 = -8;
	static volatile int64_t x496 = 28884455LL;
	volatile int64_t t96 = 3LL;

	t96 = (x493+(x494+(x495-x496)));

	if (t96 != -2176368112LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x497 = -1;
	int64_t x498 = 1LL;
	int64_t x499 = INT64_MIN;
	int16_t x500 = INT16_MIN;
	static volatile int64_t t97 = 221LL;

	t97 = (x497+(x498+(x499-x500)));

	if (t97 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x502 = INT8_MAX;
	volatile int8_t x503 = INT8_MIN;
	static int8_t x504 = INT8_MIN;
	volatile uint32_t t98 = 185601907U;

	t98 = (x501+(x502+(x503-x504)));

	if (t98 != 126U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x509 = -1;
	int8_t x510 = 24;
	int64_t x511 = -1643442724LL;
	uint32_t x512 = 11U;
	int64_t t99 = -5588651361093LL;

	t99 = (x509+(x510+(x511-x512)));

	if (t99 != -1643442712LL) { NG(); } else { ; }
	
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

