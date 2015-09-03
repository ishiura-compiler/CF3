#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -224107LL;
int16_t x6 = 3407;
int8_t x15 = INT8_MIN;
static int16_t x18 = 1;
volatile int8_t x23 = 0;
volatile int8_t x38 = INT8_MIN;
int8_t x40 = 2;
uint8_t x44 = 7U;
int64_t x48 = -54076170290360962LL;
volatile int64_t t9 = 100961107138LL;
uint16_t x49 = UINT16_MAX;
uint64_t x50 = 23940380LLU;
volatile uint64_t t10 = 132848081397LLU;
int64_t x60 = 7334433349LL;
volatile uint64_t t13 = 2867127LLU;
static int16_t x76 = INT16_MAX;
volatile int16_t x88 = INT16_MIN;
volatile int16_t x94 = -1494;
int16_t x95 = INT16_MIN;
volatile int32_t t18 = -504639;
int64_t x103 = -1LL;
int32_t x119 = 5;
volatile int32_t x128 = -108526;
int32_t t22 = -1578;
static int8_t x138 = -1;
int32_t t24 = 0;
static int8_t x143 = -31;
static int64_t x145 = INT64_MIN;
volatile uint64_t x146 = 510010871529126LLU;
int16_t x148 = -12;
int64_t t29 = 4092LL;
uint32_t x166 = 517339455U;
uint64_t x167 = 584345021453497014LLU;
static volatile uint64_t t30 = 2526950372805LLU;
uint32_t x169 = 30274745U;
int8_t x174 = -1;
static volatile uint16_t x175 = 29590U;
int8_t x187 = INT8_MIN;
volatile uint64_t x192 = 1LLU;
volatile int32_t x195 = -1;
uint16_t x209 = UINT16_MAX;
uint64_t x226 = 67651528381981025LLU;
int32_t x231 = -1570;
volatile uint64_t t40 = 492LLU;
int32_t x233 = -1;
int64_t x236 = INT64_MIN;
int32_t t42 = -1600046;
int8_t x257 = INT8_MIN;
int8_t x258 = 0;
int16_t x267 = INT16_MAX;
static int64_t t45 = -14441495660LL;
static int32_t x275 = -1;
int32_t x288 = 0;
int32_t x295 = -1;
int8_t x300 = INT8_MIN;
volatile int16_t x306 = INT16_MAX;
static int64_t x334 = -59LL;
int32_t x335 = 229948;
volatile int32_t x336 = -1;
volatile int64_t x343 = -1LL;
int8_t x346 = INT8_MIN;
int16_t x373 = -1;
volatile int64_t x387 = 1247157196731LL;
static uint64_t x388 = UINT64_MAX;
static int64_t x392 = INT64_MAX;
volatile uint32_t x395 = 838907164U;
uint64_t x397 = 2LLU;
volatile uint64_t t65 = 17898761395990643LLU;
static int64_t x403 = -236074815617954183LL;
volatile int8_t x409 = 1;
int32_t t67 = 48;
static int16_t x417 = INT16_MAX;
static int16_t x418 = 13260;
static int8_t x421 = -1;
int32_t x424 = INT32_MIN;
int64_t t70 = -1LL;
uint32_t x434 = 14640385U;
int16_t x444 = INT16_MIN;
static volatile uint64_t t74 = 1990353298050LLU;
uint32_t t75 = 256339U;
int32_t x456 = 3;
int32_t t76 = 1664;
uint16_t x470 = 5U;
volatile int64_t t77 = INT64_MIN;
uint8_t x503 = UINT8_MAX;
volatile int32_t t81 = 2756399;
int16_t x505 = INT16_MIN;
int8_t x507 = 45;
static uint32_t t82 = 572U;
int64_t x509 = INT64_MIN;
uint64_t x511 = UINT64_MAX;
volatile int16_t x519 = -1;
static uint64_t x523 = 204524LLU;
static int64_t x531 = INT64_MIN;
int32_t x537 = INT32_MAX;
uint16_t x540 = 17U;
uint64_t x553 = 50215281844LLU;
static volatile int16_t x562 = 1;
static volatile uint16_t x565 = UINT16_MAX;
int8_t x573 = INT8_MIN;
uint16_t x574 = 914U;
int64_t x575 = -319159LL;
static int16_t x597 = INT16_MIN;
volatile int64_t x598 = -1LL;
int16_t x600 = 0;
int8_t x614 = 8;
int16_t x615 = INT16_MIN;
uint8_t x616 = UINT8_MAX;


void f0(void) {
	volatile uint16_t x1 = 0U;
	volatile uint16_t x2 = 15U;
	int32_t x3 = -1;
	int64_t x4 = INT64_MIN;

	t0 = (x1-((x2*x3)|x4));

	if (t0 != 15LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 3U;
	static int16_t x7 = 0;
	static int32_t x8 = INT32_MAX;
	volatile int32_t t1 = 10;

	t1 = (x5-((x6*x7)|x8));

	if (t1 != -2147483644) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint16_t x10 = UINT16_MAX;
	static int16_t x11 = INT16_MIN;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 2601421228LLU;

	t2 = (x9-((x10*x11)|x12));

	if (t2 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	uint64_t x14 = UINT64_MAX;
	volatile uint64_t x16 = 202861998379950575LLU;
	uint64_t t3 = 30LLU;

	t3 = (x13-((x14*x15)|x16));

	if (t3 != 18243882075329601168LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	static uint32_t x19 = 8U;
	volatile int32_t x20 = INT32_MIN;
	uint32_t t4 = 511U;

	t4 = (x17-((x18*x19)|x20));

	if (t4 != 2147516407U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int8_t x22 = -1;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 102369;

	t5 = (x21-((x22*x23)|x24));

	if (t5 != 65663) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 2U;
	volatile int32_t x26 = -1;
	static uint8_t x27 = 3U;
	static uint64_t x28 = 100LLU;
	static volatile uint64_t t6 = 29LLU;

	t6 = (x25-((x26*x27)|x28));

	if (t6 != 5LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -10153;
	static int32_t x39 = -20351;
	volatile int32_t t7 = -1013;

	t7 = (x37-((x38*x39)|x40));

	if (t7 != -2615083) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -15695;
	int8_t x42 = 0;
	uint64_t x43 = UINT64_MAX;
	uint64_t t8 = 1107388144622198LLU;

	t8 = (x41-((x42*x43)|x44));

	if (t8 != 18446744073709535914LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	volatile uint32_t x46 = 128279U;
	static uint8_t x47 = UINT8_MAX;

	t9 = (x45-((x46*x47)|x48));

	if (t9 != 54076170274623873LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x51 = 50U;
	volatile int64_t x52 = -1LL;

	t10 = (x49-((x50*x51)|x52));

	if (t10 != 65536LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 6U;
	int16_t x54 = INT16_MAX;
	uint64_t x55 = 3602LLU;
	volatile uint16_t x56 = UINT16_MAX;
	uint64_t t11 = 271974279809018LLU;

	t11 = (x53-((x54*x55)|x56));

	if (t11 != 18446744073591521287LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x57 = INT8_MIN;
	static volatile uint16_t x58 = 7U;
	int16_t x59 = 7;
	int64_t t12 = -4466649904285510LL;

	t12 = (x57-((x58*x59)|x60));

	if (t12 != -7334433525LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 28676LLU;
	int16_t x70 = -1;
	int8_t x71 = INT8_MIN;
	static int32_t x72 = INT32_MAX;

	t13 = (x69-((x70*x71)|x72));

	if (t13 != 18446744071562096645LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -4;
	int16_t x74 = INT16_MIN;
	uint16_t x75 = 477U;
	volatile int32_t t14 = 24;

	t14 = (x73-((x74*x75)|x76));

	if (t14 != 15597565) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = UINT8_MAX;
	volatile int16_t x78 = INT16_MIN;
	int64_t x79 = -1LL;
	static uint8_t x80 = 0U;
	int64_t t15 = -7497378496LL;

	t15 = (x77-((x78*x79)|x80));

	if (t15 != -32513LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x85 = UINT16_MAX;
	int64_t x86 = -33427332LL;
	volatile int32_t x87 = -1;
	static volatile int64_t t16 = -473078905035524220LL;

	t16 = (x85-((x86*x87)|x88));

	if (t16 != 94331LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = 58LL;
	int8_t x96 = -1;
	static volatile int64_t t17 = -31LL;

	t17 = (x93-((x94*x95)|x96));

	if (t17 != 59LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MIN;
	static int8_t x98 = 4;
	int32_t x99 = -1;
	uint8_t x100 = UINT8_MAX;

	t18 = (x97-((x98*x99)|x100));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = 87961432421343LLU;
	int8_t x102 = -1;
	static int64_t x104 = -35900LL;
	volatile uint64_t t19 = 794966792438241808LLU;

	t19 = (x101-((x102*x103)|x104));

	if (t19 != 87961432457242LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MIN;
	volatile int16_t x112 = -1;
	int32_t t20 = 243081;

	t20 = (x109-((x110*x111)|x112));

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x117 = -1;
	int8_t x118 = -1;
	int16_t x120 = INT16_MAX;
	volatile int32_t t21 = 12985;

	t21 = (x117-((x118*x119)|x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = -47;
	static uint8_t x127 = 1U;

	t22 = (x125-((x126*x127)|x128));

	if (t22 != -2147483603) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = INT32_MIN;
	uint8_t x130 = 35U;
	static uint16_t x131 = 3755U;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t23 = 1;

	t23 = (x129-((x130*x131)|x132));

	if (t23 != -131425) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x137 = -1;
	int16_t x139 = INT16_MAX;
	static int32_t x140 = INT32_MIN;

	t24 = (x137-((x138*x139)|x140));

	if (t24 != 32766) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x141 = 40831869442864873LLU;
	uint8_t x142 = 104U;
	int16_t x144 = -1;
	volatile uint64_t t25 = 2989LLU;

	t25 = (x141-((x142*x143)|x144));

	if (t25 != 40831869442864874LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x147 = 1;
	uint64_t t26 = 2565095763LLU;

	t26 = (x145-((x146*x147)|x148));

	if (t26 != 9223372036854775818LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x149 = INT8_MIN;
	int32_t x150 = 289;
	uint32_t x151 = 1352U;
	uint64_t x152 = UINT64_MAX;
	volatile uint64_t t27 = 26573672762269140LLU;

	t27 = (x149-((x150*x151)|x152));

	if (t27 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = 810214025905LLU;
	int8_t x154 = INT8_MAX;
	int16_t x155 = INT16_MAX;
	int32_t x156 = INT32_MAX;
	volatile uint64_t t28 = 946146016756LLU;

	t28 = (x153-((x154*x155)|x156));

	if (t28 != 808066542258LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x161 = -1;
	static int8_t x162 = INT8_MIN;
	int64_t x163 = 954LL;
	int8_t x164 = 1;

	t29 = (x161-((x162*x163)|x164));

	if (t29 != 122110LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = 1;
	static int8_t x168 = -1;

	t30 = (x165-((x166*x167)|x168));

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MAX;
	int16_t x172 = INT16_MIN;
	uint32_t t31 = 17U;

	t31 = (x169-((x170*x171)|x172));

	if (t31 != 30275128U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x173 = 16380U;
	uint32_t x176 = 17U;
	uint32_t t32 = 934486295U;

	t32 = (x173-((x174*x175)|x176));

	if (t32 != 45953U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x181 = 33U;
	int64_t x182 = -890078225287LL;
	int32_t x183 = -1;
	static uint64_t x184 = 9424666081028496LLU;
	uint64_t t33 = 1154113061174LLU;

	t33 = (x181-((x182*x183)|x184));

	if (t33 != 18437319132011828362LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x185 = -64;
	int8_t x186 = -1;
	int64_t x188 = INT64_MIN;
	volatile int64_t t34 = 48076015LL;

	t34 = (x185-((x186*x187)|x188));

	if (t34 != 9223372036854775616LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x189 = 213044LLU;
	uint64_t x190 = 5726579325673LLU;
	int64_t x191 = INT64_MIN;
	volatile uint64_t t35 = 11843772LLU;

	t35 = (x189-((x190*x191)|x192));

	if (t35 != 9223372036854988851LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x193 = UINT8_MAX;
	uint16_t x194 = 6U;
	static int8_t x196 = INT8_MIN;
	static int32_t t36 = -1;

	t36 = (x193-((x194*x195)|x196));

	if (t36 != 261) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x210 = -1;
	static volatile int8_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	static uint32_t t37 = 261U;

	t37 = (x209-((x210*x211)|x212));

	if (t37 != 65536U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MIN;
	volatile uint64_t t38 = 1358309LLU;

	t38 = (x213-((x214*x215)|x216));

	if (t38 != 33023LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x225 = 1214U;
	int16_t x227 = INT16_MIN;
	static int64_t x228 = INT64_MIN;
	volatile uint64_t t39 = 3054110612039253187LLU;

	t39 = (x225-((x226*x227)|x228));

	if (t39 != 3195993175608034494LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x229 = 605756162189LLU;
	int8_t x230 = INT8_MIN;
	static int16_t x232 = INT16_MIN;

	t40 = (x229-((x230*x231)|x232));

	if (t40 != 605756190605LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x234 = 3097141520199530880LLU;
	uint16_t x235 = UINT16_MAX;
	uint64_t t41 = 28194193581400044LLU;

	t41 = (x233-((x234*x235)|x236));

	if (t41 != 7578888786794985855LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = -1;
	static int32_t x246 = -644;
	uint8_t x247 = UINT8_MAX;
	static int8_t x248 = 22;

	t42 = (x245-((x246*x247)|x248));

	if (t42 != 164201) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x253 = 53681796U;
	int64_t x254 = 1429400151LL;
	int8_t x255 = INT8_MIN;
	volatile int64_t x256 = -1LL;
	int64_t t43 = -8503703453LL;

	t43 = (x253-((x254*x255)|x256));

	if (t43 != 53681797LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	volatile int32_t t44 = -34814161;

	t44 = (x257-((x258*x259)|x260));

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x265 = INT16_MIN;
	int16_t x266 = -2158;
	static int64_t x268 = -1000LL;

	t45 = (x265-((x266*x267)|x268));

	if (t45 != -31870LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x273 = 4310;
	static int8_t x274 = -51;
	volatile int32_t x276 = 0;
	volatile int32_t t46 = -80;

	t46 = (x273-((x274*x275)|x276));

	if (t46 != 4259) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x281 = 37U;
	volatile int16_t x282 = INT16_MIN;
	static int64_t x283 = -1LL;
	int16_t x284 = INT16_MAX;
	volatile int64_t t47 = -2011609398LL;

	t47 = (x281-((x282*x283)|x284));

	if (t47 != -65498LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x285 = 1045U;
	static uint16_t x286 = 1456U;
	volatile int64_t x287 = -16636509870LL;
	int64_t t48 = 49LL;

	t48 = (x285-((x286*x287)|x288));

	if (t48 != 24222758371765LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x289 = INT32_MAX;
	volatile int64_t x290 = -1LL;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = -1147304;
	static int64_t t49 = 2179372297761405LL;

	t49 = (x289-((x290*x291)|x292));

	if (t49 != 2147516838LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = -1;
	int32_t x296 = -1;
	static volatile int64_t t50 = -79747806534950535LL;

	t50 = (x293-((x294*x295)|x296));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x297 = 3279682;
	int16_t x298 = INT16_MIN;
	int16_t x299 = -1;
	volatile int32_t t51 = -1;

	t51 = (x297-((x298*x299)|x300));

	if (t51 != 3279810) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x301 = 3U;
	int16_t x302 = INT16_MIN;
	volatile uint64_t x303 = UINT64_MAX;
	uint16_t x304 = 590U;
	uint64_t t52 = 74838218404LLU;

	t52 = (x301-((x302*x303)|x304));

	if (t52 != 18446744073709518261LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x305 = INT8_MAX;
	static uint16_t x307 = 0U;
	static uint8_t x308 = UINT8_MAX;
	static volatile int32_t t53 = -283815701;

	t53 = (x305-((x306*x307)|x308));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = 1;
	static uint32_t x319 = 861946U;
	int64_t x320 = 957LL;
	int64_t t54 = -13456797595LL;

	t54 = (x317-((x318*x319)|x320));

	if (t54 != -2148345855LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x325 = UINT8_MAX;
	volatile int8_t x326 = 13;
	int16_t x327 = INT16_MIN;
	static int8_t x328 = -1;
	int32_t t55 = 470410935;

	t55 = (x325-((x326*x327)|x328));

	if (t55 != 256) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x329 = -1LL;
	int32_t x330 = 28396970;
	int8_t x331 = 1;
	static int64_t x332 = INT64_MIN;
	volatile int64_t t56 = -229LL;

	t56 = (x329-((x330*x331)|x332));

	if (t56 != 9223372036826378837LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x333 = -1;
	int64_t t57 = 13029LL;

	t57 = (x333-((x334*x335)|x336));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x341 = INT32_MIN;
	uint16_t x342 = 1781U;
	int8_t x344 = INT8_MAX;
	int64_t t58 = -37248541689014LL;

	t58 = (x341-((x342*x343)|x344));

	if (t58 != -2147481983LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x345 = 5344945;
	static int8_t x347 = 4;
	int16_t x348 = -1;
	volatile int32_t t59 = -151470;

	t59 = (x345-((x346*x347)|x348));

	if (t59 != 5344946) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = UINT32_MAX;
	static volatile int32_t x371 = INT32_MAX;
	static uint64_t x372 = 1493980211LLU;
	uint64_t t60 = 88LLU;

	t60 = (x369-((x370*x371)|x372));

	if (t60 != 9223372033213311949LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x374 = 4092121;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t61 = -349262194;

	t61 = (x373-((x374*x375)|x376));

	if (t61 != 88) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x385 = -1;
	int16_t x386 = -446;
	static uint64_t t62 = 7862642LLU;

	t62 = (x385-((x386*x387)|x388));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x389 = INT64_MIN;
	static int16_t x390 = INT16_MAX;
	int64_t x391 = -9299LL;
	int64_t t63 = 59LL;

	t63 = (x389-((x390*x391)|x392));

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x393 = 6;
	int8_t x394 = -1;
	static int64_t x396 = INT64_MAX;
	volatile int64_t t64 = 20029049LL;

	t64 = (x393-((x394*x395)|x396));

	if (t64 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x398 = 27148;
	int16_t x399 = -5;
	int16_t x400 = INT16_MIN;

	t65 = (x397-((x398*x399)|x400));

	if (t65 != 4670LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x401 = INT16_MIN;
	int32_t x402 = -1;
	int64_t x404 = -1LL;
	int64_t t66 = -1LL;

	t66 = (x401-((x402*x403)|x404));

	if (t66 != -32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x410 = INT8_MIN;
	static uint8_t x411 = 4U;
	static int8_t x412 = INT8_MIN;

	t67 = (x409-((x410*x411)|x412));

	if (t67 != 129) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x413 = 2;
	int64_t x414 = INT64_MIN;
	static uint64_t x415 = UINT64_MAX;
	static int16_t x416 = -1;
	volatile uint64_t t68 = 14332420LLU;

	t68 = (x413-((x414*x415)|x416));

	if (t68 != 3LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x419 = INT16_MIN;
	volatile int64_t x420 = 4593907806LL;
	static int64_t t69 = 1623639796LL;

	t69 = (x417-((x418*x419)|x420));

	if (t69 != 136644513LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x422 = 19246773359581344LL;
	volatile int64_t x423 = -1LL;

	t70 = (x421-((x422*x423)|x424));

	if (t70 != 556505247LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x425 = 116;
	int32_t x426 = 0;
	int16_t x427 = INT16_MIN;
	static volatile uint32_t x428 = UINT32_MAX;
	volatile uint32_t t71 = 14U;

	t71 = (x425-((x426*x427)|x428));

	if (t71 != 117U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x429 = INT64_MIN;
	uint64_t x430 = 312LLU;
	uint8_t x431 = 0U;
	int16_t x432 = INT16_MIN;
	volatile uint64_t t72 = 437191069612217890LLU;

	t72 = (x429-((x430*x431)|x432));

	if (t72 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x433 = INT8_MAX;
	int32_t x435 = INT32_MIN;
	int16_t x436 = INT16_MIN;
	uint32_t t73 = 612761U;

	t73 = (x433-((x434*x435)|x436));

	if (t73 != 32895U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x441 = -3937;
	uint64_t x442 = UINT64_MAX;
	static int64_t x443 = INT64_MIN;

	t74 = (x441-((x442*x443)|x444));

	if (t74 != 28831LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x449 = -1;
	uint8_t x450 = 1U;
	uint32_t x451 = 1472118667U;
	int32_t x452 = INT32_MIN;

	t75 = (x449-((x450*x451)|x452));

	if (t75 != 675364980U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x453 = 3301;
	uint8_t x454 = 2U;
	uint8_t x455 = 8U;

	t76 = (x453-((x454*x455)|x456));

	if (t76 != 3282) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x469 = -1LL;
	volatile uint16_t x471 = 102U;
	int64_t x472 = INT64_MAX;

	t77 = (x469-((x470*x471)|x472));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x481 = INT16_MIN;
	int64_t x482 = -1LL;
	uint8_t x483 = UINT8_MAX;
	static int64_t x484 = INT64_MAX;
	volatile int64_t t78 = -3210293852751LL;

	t78 = (x481-((x482*x483)|x484));

	if (t78 != -32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x489 = INT8_MIN;
	int16_t x490 = -1;
	uint32_t x491 = 73493U;
	volatile uint8_t x492 = 6U;
	static volatile uint32_t t79 = 17292994U;

	t79 = (x489-((x490*x491)|x492));

	if (t79 != 73361U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x493 = -24;
	volatile int16_t x494 = INT16_MAX;
	static volatile int8_t x495 = INT8_MAX;
	int8_t x496 = 0;
	volatile int32_t t80 = 43;

	t80 = (x493-((x494*x495)|x496));

	if (t80 != -4161433) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x501 = -505;
	volatile int8_t x502 = INT8_MIN;
	uint8_t x504 = 22U;

	t81 = (x501-((x502*x503)|x504));

	if (t81 != 32113) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x506 = 14U;
	uint32_t x508 = 123U;

	t82 = (x505-((x506*x507)|x508));

	if (t82 != 4294933889U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x510 = INT64_MIN;
	static int8_t x512 = INT8_MIN;
	volatile uint64_t t83 = 1227384266567LLU;

	t83 = (x509-((x510*x511)|x512));

	if (t83 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x513 = 12539;
	uint64_t x514 = 5930256984797LLU;
	int64_t x515 = -1LL;
	int16_t x516 = INT16_MIN;
	uint64_t t84 = 207603465LLU;

	t84 = (x513-((x514*x515)|x516));

	if (t84 != 39896LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x517 = -150;
	int8_t x518 = -1;
	int64_t x520 = -1LL;
	static volatile int64_t t85 = 25961330LL;

	t85 = (x517-((x518*x519)|x520));

	if (t85 != -149LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x521 = -1;
	int64_t x522 = -949725491959LL;
	uint8_t x524 = 6U;
	uint64_t t86 = 8148134626975047544LLU;

	t86 = (x521-((x522*x523)|x524));

	if (t86 != 194241656517422513LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x529 = 1;
	uint64_t x530 = 1176700LLU;
	static uint16_t x532 = 312U;
	static uint64_t t87 = 1028930108198970516LLU;

	t87 = (x529-((x530*x531)|x532));

	if (t87 != 18446744073709551305LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x533 = -174;
	uint32_t x534 = 793928U;
	int32_t x535 = -1;
	volatile uint16_t x536 = 1896U;
	uint32_t t88 = 1475564829U;

	t88 = (x533-((x534*x535)|x536));

	if (t88 != 792410U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x538 = INT8_MIN;
	volatile int16_t x539 = 0;
	volatile int32_t t89 = 3653404;

	t89 = (x537-((x538*x539)|x540));

	if (t89 != 2147483630) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x545 = 0;
	uint16_t x546 = 71U;
	volatile int8_t x547 = -15;
	volatile uint64_t x548 = 17LLU;
	uint64_t t90 = 484683401LLU;

	t90 = (x545-((x546*x547)|x548));

	if (t90 != 1065LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x549 = INT32_MIN;
	volatile int64_t x550 = -1LL;
	static int8_t x551 = INT8_MAX;
	int16_t x552 = INT16_MIN;
	volatile int64_t t91 = 846885226038718LL;

	t91 = (x549-((x550*x551)|x552));

	if (t91 != -2147483521LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x554 = 7384216430389LLU;
	static int16_t x555 = -79;
	int32_t x556 = -9;
	volatile uint64_t t92 = 55477218283194975LLU;

	t92 = (x553-((x554*x555)|x556));

	if (t92 != 50215281853LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x561 = INT8_MAX;
	int8_t x563 = INT8_MIN;
	uint32_t x564 = 940U;
	uint32_t t93 = 2194U;

	t93 = (x561-((x562*x563)|x564));

	if (t93 != 211U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x566 = INT8_MIN;
	int32_t x567 = 13;
	int32_t x568 = -453235;
	volatile int32_t t94 = -18036740;

	t94 = (x565-((x566*x567)|x568));

	if (t94 != 66162) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x576 = 15;
	volatile int64_t t95 = -411LL;

	t95 = (x573-((x574*x575)|x576));

	if (t95 != 291711185LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x581 = INT16_MIN;
	int16_t x582 = INT16_MIN;
	uint8_t x583 = UINT8_MAX;
	int16_t x584 = -1;
	int32_t t96 = -67403;

	t96 = (x581-((x582*x583)|x584));

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x599 = UINT16_MAX;
	static int64_t t97 = -3100316905667766508LL;

	t97 = (x597-((x598*x599)|x600));

	if (t97 != 32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x601 = UINT16_MAX;
	int64_t x602 = INT64_MAX;
	volatile uint64_t x603 = 9987LLU;
	static volatile uint16_t x604 = 54U;
	uint64_t t98 = 372505607494LLU;

	t98 = (x601-((x602*x603)|x604));

	if (t98 != 9223372036854851328LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x613 = 4;
	volatile int32_t t99 = -8677048;

	t99 = (x613-((x614*x615)|x616));

	if (t99 != 261893) { NG(); } else { ; }
	
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

