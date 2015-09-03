#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -1;
int64_t x10 = INT64_MIN;
volatile int64_t t3 = 289746LL;
uint16_t x21 = UINT16_MAX;
int64_t t4 = 316310718LL;
static uint16_t x29 = UINT16_MAX;
volatile uint32_t x33 = 150U;
uint64_t x36 = 996794LLU;
uint64_t t7 = 365119067373717606LLU;
uint16_t x38 = 419U;
int16_t x54 = 43;
volatile int64_t t12 = -238766LL;
static int64_t t13 = 998923031799327437LL;
volatile int16_t x68 = INT16_MAX;
static volatile int32_t t14 = -69470;
uint64_t x77 = 7700LLU;
int16_t x81 = -1;
int8_t x82 = 1;
volatile int32_t t16 = -27;
volatile int16_t x88 = 0;
int16_t x93 = -40;
static uint8_t x101 = 14U;
int64_t x105 = INT64_MIN;
uint64_t x116 = UINT64_MAX;
int64_t x124 = 10660506893493466LL;
volatile uint16_t x130 = 382U;
static volatile uint16_t x131 = 6U;
uint8_t x141 = 101U;
static volatile int64_t x142 = -1LL;
volatile int64_t x145 = -3010604227171LL;
uint32_t x153 = 54U;
int16_t x155 = 634;
static uint16_t x156 = UINT16_MAX;
uint32_t t32 = 5U;
static int8_t x159 = INT8_MIN;
uint64_t x160 = 27841960733LLU;
volatile uint64_t t33 = 44572LLU;
int16_t x162 = -4;
static uint32_t t34 = 502U;
int32_t x171 = INT32_MIN;
static int32_t x172 = INT32_MIN;
int32_t t35 = 208;
uint64_t x176 = UINT64_MAX;
int8_t x179 = INT8_MAX;
volatile uint64_t t37 = 32394308013601LLU;
volatile int32_t t38 = 7;
int8_t x189 = 1;
int32_t t39 = -3499;
uint16_t x194 = 990U;
int8_t x199 = -11;
uint32_t x201 = UINT32_MAX;
static int32_t x202 = -1;
int16_t x203 = 0;
uint64_t x204 = 47879LLU;
volatile uint64_t t42 = 266230374LLU;
int8_t x209 = 6;
uint32_t x212 = 1700610638U;
int64_t x229 = -1LL;
int64_t x230 = INT64_MIN;
static volatile uint64_t x239 = 4710204599555LLU;
int16_t x246 = 1;
uint16_t x258 = 54U;
int32_t x259 = 93296590;
int8_t x260 = INT8_MIN;
static uint16_t x266 = 1682U;
uint8_t x274 = 5U;
int64_t x281 = INT64_MIN;
volatile uint64_t t58 = 3681633LLU;
int32_t x294 = INT32_MIN;
volatile int32_t t59 = 8227150;
int16_t x298 = INT16_MIN;
int16_t x304 = 79;
int8_t x305 = 1;
int16_t x309 = INT16_MIN;
uint16_t x310 = 9U;
volatile int32_t t63 = -46904999;
uint16_t x335 = 331U;
int16_t x336 = 3947;
uint8_t x339 = 1U;
uint32_t x340 = 12U;
static int16_t x356 = INT16_MIN;
int8_t x358 = INT8_MIN;
int32_t x360 = INT32_MIN;
uint64_t x364 = 40331339LLU;
uint64_t t73 = 169097344LLU;
static int64_t x372 = -1LL;
volatile int64_t t74 = -658587630412LL;
static int64_t x381 = 1038LL;
int8_t x383 = 1;
volatile uint16_t x384 = 2208U;
static uint32_t x386 = 37U;
int8_t x387 = INT8_MAX;
int16_t x391 = -5;
int8_t x400 = INT8_MIN;
uint8_t x415 = UINT8_MAX;
volatile uint64_t t87 = 4LLU;
volatile uint8_t x430 = UINT8_MAX;
int64_t x431 = -2LL;
volatile int8_t x435 = -53;
int16_t x447 = INT16_MIN;
volatile int8_t x470 = INT8_MIN;
uint64_t x471 = 360372491237981071LLU;
uint32_t x477 = 28699884U;
uint64_t x479 = 49668178286033LLU;
uint32_t x484 = 870U;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static volatile int32_t x2 = -1284721;
	uint8_t x3 = UINT8_MAX;
	int32_t t0 = -41840;

	t0 = ((x1&x2)-(x3-x4));

	if (t0 != 25743) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MIN;
	uint64_t x11 = UINT64_MAX;
	volatile int16_t x12 = -1;
	static volatile uint64_t t1 = 18952087083602LLU;

	t1 = ((x9&x10)-(x11-x12));

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = INT8_MAX;
	int64_t x14 = INT64_MIN;
	int8_t x15 = -1;
	int32_t x16 = 16703;
	int64_t t2 = 133LL;

	t2 = ((x13&x14)-(x15-x16));

	if (t2 != 16704LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = 442063225LL;
	int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MIN;
	int32_t x20 = -27895;

	t3 = ((x17&x18)-(x19-x20));

	if (t3 != 442045193LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x22 = INT32_MIN;
	static int64_t x23 = INT64_MAX;
	volatile int32_t x24 = INT32_MAX;

	t4 = ((x21&x22)-(x23-x24));

	if (t4 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 9U;
	static uint8_t x26 = 74U;
	uint32_t x27 = 29438U;
	static int64_t x28 = INT64_MAX;
	volatile int64_t t5 = -32333878LL;

	t5 = ((x25&x26)-(x27-x28));

	if (t5 != 9223372036854746377LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = INT8_MIN;
	static volatile int32_t x31 = -1;
	volatile int16_t x32 = -1;
	int32_t t6 = 25753;

	t6 = ((x29&x30)-(x31-x32));

	if (t6 != 65408) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MIN;

	t7 = ((x33&x34)-(x35-x36));

	if (t7 != 997072LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = 71LLU;
	volatile int64_t x39 = 5660903462230828LL;
	static uint8_t x40 = 5U;
	volatile uint64_t t8 = 11659678401793LLU;

	t8 = ((x37&x38)-(x39-x40));

	if (t8 != 18441083170247320796LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MAX;
	int8_t x46 = 62;
	static uint64_t x47 = UINT64_MAX;
	static int8_t x48 = INT8_MIN;
	static volatile uint64_t t9 = 16193737174118LLU;

	t9 = ((x45&x46)-(x47-x48));

	if (t9 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MAX;
	static int32_t x50 = INT32_MIN;
	static uint64_t x51 = 28144709324LLU;
	int8_t x52 = 1;
	uint64_t t10 = 148835LLU;

	t10 = ((x49&x50)-(x51-x52));

	if (t10 != 18446744045564842293LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MAX;
	int8_t x55 = INT8_MIN;
	static int32_t x56 = 27445582;
	volatile int32_t t11 = -1531;

	t11 = ((x53&x54)-(x55-x56));

	if (t11 != 27445753) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MAX;
	volatile int32_t x58 = -7367898;
	static int64_t x59 = -1LL;
	static volatile uint16_t x60 = 3U;

	t12 = ((x57&x58)-(x59-x60));

	if (t12 != 2140115754LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = -26681LL;
	int64_t x63 = INT64_MAX;
	uint16_t x64 = 14424U;

	t13 = ((x61&x62)-(x63-x64));

	if (t13 != -9223372036854761184LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = INT32_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x67 = INT32_MAX;

	t14 = ((x65&x66)-(x67-x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x78 = -1;
	int64_t x79 = INT64_MIN;
	static int32_t x80 = -1;
	uint64_t t15 = 241433749388108LLU;

	t15 = ((x77&x78)-(x79-x80));

	if (t15 != 9223372036854783507LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x83 = INT8_MAX;
	int32_t x84 = 217;

	t16 = ((x81&x82)-(x83-x84));

	if (t16 != 91) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x85 = 13133491075LLU;
	uint64_t x86 = UINT64_MAX;
	int32_t x87 = -2615;
	static uint64_t t17 = 3491166211135522711LLU;

	t17 = ((x85&x86)-(x87-x88));

	if (t17 != 13133493690LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x94 = -1;
	uint8_t x95 = UINT8_MAX;
	volatile int64_t x96 = 8097196470627934LL;
	int64_t t18 = -670846771591004655LL;

	t18 = ((x93&x94)-(x95-x96));

	if (t18 != 8097196470627639LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x97 = INT8_MAX;
	int32_t x98 = 15286;
	uint32_t x99 = UINT32_MAX;
	int16_t x100 = INT16_MAX;
	static uint32_t t19 = 59747U;

	t19 = ((x97&x98)-(x99-x100));

	if (t19 != 32822U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x102 = INT64_MAX;
	uint32_t x103 = 1923215U;
	int8_t x104 = INT8_MAX;
	int64_t t20 = -3778954012LL;

	t20 = ((x101&x102)-(x103-x104));

	if (t20 != -1923074LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x106 = -43097865028933LL;
	uint8_t x107 = 5U;
	static volatile uint16_t x108 = UINT16_MAX;
	int64_t t21 = -65909LL;

	t21 = ((x105&x106)-(x107-x108));

	if (t21 != -9223372036854710278LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = -6961;
	int16_t x110 = 200;
	volatile uint16_t x111 = UINT16_MAX;
	volatile int64_t x112 = -1LL;
	int64_t t22 = -354LL;

	t22 = ((x109&x110)-(x111-x112));

	if (t22 != -65336LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 658684083U;
	volatile int8_t x114 = 9;
	static int8_t x115 = INT8_MIN;
	static uint64_t t23 = 69790648LLU;

	t23 = ((x113&x114)-(x115-x116));

	if (t23 != 128LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = 9;
	int64_t x118 = 47153800126752059LL;
	static int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	static int64_t t24 = -376251LL;

	t24 = ((x117&x118)-(x119-x120));

	if (t24 != -118LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = 78;
	static int32_t x122 = INT32_MIN;
	volatile uint8_t x123 = 21U;
	int64_t t25 = 425534011233862LL;

	t25 = ((x121&x122)-(x123-x124));

	if (t25 != 10660506893493445LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 27875948995015LLU;
	int64_t x126 = -23100337405LL;
	static int16_t x127 = INT16_MIN;
	static int64_t x128 = 269361693971524063LL;
	volatile uint64_t t26 = 34292LLU;

	t26 = ((x125&x126)-(x127-x128));

	if (t26 != 269389568309865186LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MIN;
	int8_t x132 = -1;
	static volatile int32_t t27 = -36625395;

	t27 = ((x129&x130)-(x131-x132));

	if (t27 != 249) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x133 = 117719761U;
	int8_t x134 = -1;
	uint32_t x135 = UINT32_MAX;
	volatile int16_t x136 = INT16_MIN;
	uint32_t t28 = 88U;

	t28 = ((x133&x134)-(x135-x136));

	if (t28 != 117686994U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x143 = 120661473U;
	int32_t x144 = INT32_MIN;
	int64_t t29 = 42630LL;

	t29 = ((x141&x142)-(x143-x144));

	if (t29 != -2268145020LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x146 = UINT32_MAX;
	volatile uint32_t x147 = 5821U;
	volatile int8_t x148 = INT8_MIN;
	static int64_t t30 = 939429065LL;

	t30 = ((x145&x146)-(x147-x148));

	if (t30 != 167841376LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x149 = 2U;
	int16_t x150 = -1;
	volatile uint8_t x151 = 0U;
	static uint64_t x152 = UINT64_MAX;
	uint64_t t31 = 15LLU;

	t31 = ((x149&x150)-(x151-x152));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x154 = INT16_MIN;

	t32 = ((x153&x154)-(x155-x156));

	if (t32 != 64901U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x157 = 66389U;
	uint8_t x158 = 7U;

	t33 = ((x157&x158)-(x159-x160));

	if (t33 != 27841960866LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = -1;
	static int8_t x163 = INT8_MIN;
	volatile uint32_t x164 = UINT32_MAX;

	t34 = ((x161&x162)-(x163-x164));

	if (t34 != 123U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x169 = 774U;
	volatile uint8_t x170 = UINT8_MAX;

	t35 = ((x169&x170)-(x171-x172));

	if (t35 != 6) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = 1;
	uint8_t x175 = UINT8_MAX;
	volatile uint64_t t36 = 2434100490LLU;

	t36 = ((x173&x174)-(x175-x176));

	if (t36 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 9554LLU;
	static uint64_t x178 = 56LLU;
	static int8_t x180 = 0;

	t37 = ((x177&x178)-(x179-x180));

	if (t37 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x181 = 1;
	int8_t x182 = INT8_MAX;
	int8_t x183 = INT8_MIN;
	uint8_t x184 = 17U;

	t38 = ((x181&x182)-(x183-x184));

	if (t38 != 146) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x190 = 1U;
	static int32_t x191 = -41;
	int8_t x192 = INT8_MIN;

	t39 = ((x189&x190)-(x191-x192));

	if (t39 != -86) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = 0U;
	static uint8_t x195 = UINT8_MAX;
	static int32_t x196 = INT32_MAX;
	int32_t t40 = 183675;

	t40 = ((x193&x194)-(x195-x196));

	if (t40 != 2147483392) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = -1;
	int32_t x198 = -1916972;
	static uint8_t x200 = 29U;
	int32_t t41 = -7;

	t41 = ((x197&x198)-(x199-x200));

	if (t41 != -1916932) { NG(); } else { ; }
	
}

void f42(void) {


	t42 = ((x201&x202)-(x203-x204));

	if (t42 != 4295015174LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = 0;
	uint32_t x206 = 7553066U;
	int16_t x207 = INT16_MAX;
	int8_t x208 = INT8_MIN;
	volatile uint32_t t43 = 62817U;

	t43 = ((x205&x206)-(x207-x208));

	if (t43 != 4294934401U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x210 = -1;
	uint8_t x211 = 1U;
	uint32_t t44 = 8U;

	t44 = ((x209&x210)-(x211-x212));

	if (t44 != 1700610643U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x213 = INT64_MAX;
	volatile uint64_t x214 = 2772935870885LLU;
	int32_t x215 = -18;
	int64_t x216 = -1LL;
	uint64_t t45 = 407078920LLU;

	t45 = ((x213&x214)-(x215-x216));

	if (t45 != 2772935870902LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x221 = INT8_MIN;
	int8_t x222 = INT8_MAX;
	volatile int8_t x223 = 0;
	int8_t x224 = -57;
	volatile int32_t t46 = 0;

	t46 = ((x221&x222)-(x223-x224));

	if (t46 != -57) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = UINT16_MAX;
	static volatile int16_t x226 = -54;
	int8_t x227 = 46;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t47 = 2145938;

	t47 = ((x225&x226)-(x227-x228));

	if (t47 != 65308) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x231 = -1;
	uint32_t x232 = UINT32_MAX;
	int64_t t48 = INT64_MIN;

	t48 = ((x229&x230)-(x231-x232));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = 4138;
	uint64_t x238 = UINT64_MAX;
	volatile int8_t x240 = -12;
	volatile uint64_t t49 = 66289157LLU;

	t49 = ((x237&x238)-(x239-x240));

	if (t49 != 18446739363504956187LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	int16_t x243 = -1;
	int32_t x244 = INT32_MAX;
	int32_t t50 = -10533;

	t50 = ((x241&x242)-(x243-x244));

	if (t50 != 2147450880) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x245 = 5300;
	volatile uint64_t x247 = 14731667439LLU;
	int8_t x248 = -1;
	volatile uint64_t t51 = 0LLU;

	t51 = ((x245&x246)-(x247-x248));

	if (t51 != 18446744058977884176LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x257 = 2LL;
	int64_t t52 = 28296476800LL;

	t52 = ((x257&x258)-(x259-x260));

	if (t52 != -93296716LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile uint64_t x267 = 7LLU;
	uint16_t x268 = UINT16_MAX;
	volatile uint64_t t53 = 1805306118129LLU;

	t53 = ((x265&x266)-(x267-x268));

	if (t53 != 65528LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x273 = UINT16_MAX;
	int64_t x275 = -433642195LL;
	int32_t x276 = 207;
	int64_t t54 = -247146731804LL;

	t54 = ((x273&x274)-(x275-x276));

	if (t54 != 433642407LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x277 = 4861;
	int64_t x278 = INT64_MAX;
	int16_t x279 = 320;
	int8_t x280 = INT8_MIN;
	static int64_t t55 = 376LL;

	t55 = ((x277&x278)-(x279-x280));

	if (t55 != 4413LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x282 = 1;
	volatile int64_t x283 = INT64_MAX;
	int8_t x284 = INT8_MAX;
	int64_t t56 = -457345781LL;

	t56 = ((x281&x282)-(x283-x284));

	if (t56 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x285 = 6741U;
	static int16_t x286 = INT16_MIN;
	static volatile uint8_t x287 = 10U;
	int16_t x288 = INT16_MIN;
	uint32_t t57 = 921U;

	t57 = ((x285&x286)-(x287-x288));

	if (t57 != 4294934518U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x289 = 30U;
	static uint32_t x290 = UINT32_MAX;
	static volatile int64_t x291 = INT64_MAX;
	uint64_t x292 = UINT64_MAX;

	t58 = ((x289&x290)-(x291-x292));

	if (t58 != 9223372036854775838LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x293 = 0U;
	int16_t x295 = 6;
	static volatile int16_t x296 = INT16_MAX;

	t59 = ((x293&x294)-(x295-x296));

	if (t59 != 32761) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = INT64_MAX;
	volatile int32_t x299 = INT32_MAX;
	static uint32_t x300 = 3U;
	volatile int64_t t60 = 8533368558029129LL;

	t60 = ((x297&x298)-(x299-x300));

	if (t60 != 9223372034707259396LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x302 = 406026171807LLU;
	static int16_t x303 = -1;
	volatile uint64_t t61 = 856116425969396626LLU;

	t61 = ((x301&x302)-(x303-x304));

	if (t61 != 406026171856LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x306 = 9196869U;
	int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t62 = -8202623013LL;

	t62 = ((x305&x306)-(x307-x308));

	if (t62 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x311 = 2;
	int16_t x312 = -54;

	t63 = ((x309&x310)-(x311-x312));

	if (t63 != -56) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x317 = INT32_MAX;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile uint32_t t64 = 25848U;

	t64 = ((x317&x318)-(x319-x320));

	if (t64 != 65662U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x321 = -1;
	static uint8_t x322 = 14U;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = 1;
	volatile int32_t t65 = 341858093;

	t65 = ((x321&x322)-(x323-x324));

	if (t65 != -65520) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x325 = UINT8_MAX;
	int16_t x326 = -1;
	int64_t x327 = -1LL;
	static int32_t x328 = -1;
	volatile int64_t t66 = 509LL;

	t66 = ((x325&x326)-(x327-x328));

	if (t66 != 255LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = 4957456;
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MIN;
	volatile int8_t x332 = -1;
	int32_t t67 = 45515731;

	t67 = ((x329&x330)-(x331-x332));

	if (t67 != 32783) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x333 = 0U;
	uint32_t x334 = 568772180U;
	static volatile uint32_t t68 = 80U;

	t68 = ((x333&x334)-(x335-x336));

	if (t68 != 3616U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = INT8_MIN;
	static int16_t x338 = 185;
	volatile uint32_t t69 = 56243U;

	t69 = ((x337&x338)-(x339-x340));

	if (t69 != 139U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x345 = -1LL;
	volatile int8_t x346 = INT8_MIN;
	uint16_t x347 = 51U;
	static int32_t x348 = -1;
	volatile int64_t t70 = 133242287147690962LL;

	t70 = ((x345&x346)-(x347-x348));

	if (t70 != -180LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x353 = 919619908308LLU;
	volatile int32_t x354 = -1;
	uint16_t x355 = 5867U;
	volatile uint64_t t71 = 26LLU;

	t71 = ((x353&x354)-(x355-x356));

	if (t71 != 919619869673LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x357 = 7036886117LLU;
	volatile int64_t x359 = INT64_MIN;
	volatile uint64_t t72 = 479LLU;

	t72 = ((x357&x358)-(x359-x360));

	if (t72 != 9223372041744178176LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x361 = -16232779LL;
	int16_t x362 = 0;
	int8_t x363 = 42;

	t73 = ((x361&x362)-(x363-x364));

	if (t73 != 40331297LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x369 = 490U;
	static volatile uint8_t x370 = 1U;
	uint16_t x371 = UINT16_MAX;

	t74 = ((x369&x370)-(x371-x372));

	if (t74 != -65536LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	static int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t75 = -932;

	t75 = ((x377&x378)-(x379-x380));

	if (t75 != 65280) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x382 = UINT8_MAX;
	int64_t t76 = 3731975LL;

	t76 = ((x381&x382)-(x383-x384));

	if (t76 != 2221LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = INT32_MIN;
	int64_t x388 = -605572615295LL;
	static int64_t t77 = 6967737350471LL;

	t77 = ((x385&x386)-(x387-x388));

	if (t77 != -605572615422LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MIN;
	int8_t x392 = -1;
	volatile uint32_t t78 = 3450479U;

	t78 = ((x389&x390)-(x391-x392));

	if (t78 != 2147483652U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x393 = 11129;
	int16_t x394 = INT16_MIN;
	uint16_t x395 = 0U;
	static int16_t x396 = INT16_MAX;
	int32_t t79 = -30834;

	t79 = ((x393&x394)-(x395-x396));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x397 = 46U;
	volatile int32_t x398 = -1;
	int16_t x399 = INT16_MAX;
	int32_t t80 = -7878;

	t80 = ((x397&x398)-(x399-x400));

	if (t80 != -32849) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x401 = INT8_MAX;
	uint32_t x402 = UINT32_MAX;
	volatile int16_t x403 = INT16_MIN;
	uint64_t x404 = 6696837547453LLU;
	volatile uint64_t t81 = 670620658892LLU;

	t81 = ((x401&x402)-(x403-x404));

	if (t81 != 6696837580348LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x405 = -1;
	volatile int32_t x406 = -1;
	static int64_t x407 = 25LL;
	volatile int32_t x408 = -1;
	int64_t t82 = -39168790345LL;

	t82 = ((x405&x406)-(x407-x408));

	if (t82 != -27LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x409 = INT8_MIN;
	volatile int8_t x410 = -1;
	uint16_t x411 = 10690U;
	int64_t x412 = -251996252129700676LL;
	volatile int64_t t83 = 1324378429LL;

	t83 = ((x409&x410)-(x411-x412));

	if (t83 != -251996252129711494LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x413 = -871;
	uint32_t x414 = 1431U;
	int32_t x416 = -1;
	volatile uint32_t t84 = 76115807U;

	t84 = ((x413&x414)-(x415-x416));

	if (t84 != 913U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x417 = -323370799854751LL;
	uint64_t x418 = UINT64_MAX;
	volatile int64_t x419 = -1LL;
	int32_t x420 = INT32_MIN;
	static uint64_t t85 = 6502507828LLU;

	t85 = ((x417&x418)-(x419-x420));

	if (t85 != 18446420700762213218LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = INT16_MIN;
	int32_t x422 = -14729;
	int8_t x423 = INT8_MIN;
	int32_t x424 = -83576488;
	static int32_t t86 = -12573610;

	t86 = ((x421&x422)-(x423-x424));

	if (t86 != -83609128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x425 = INT16_MIN;
	volatile uint64_t x426 = 9058LLU;
	uint32_t x427 = UINT32_MAX;
	uint8_t x428 = 0U;

	t87 = ((x425&x426)-(x427-x428));

	if (t87 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x429 = INT16_MIN;
	static int16_t x432 = INT16_MIN;
	volatile int64_t t88 = -178685283411668137LL;

	t88 = ((x429&x430)-(x431-x432));

	if (t88 != -32766LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x433 = INT32_MIN;
	int32_t x434 = INT32_MAX;
	uint64_t x436 = 135119192670LLU;
	uint64_t t89 = 10LLU;

	t89 = ((x433&x434)-(x435-x436));

	if (t89 != 135119192723LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x437 = UINT64_MAX;
	uint64_t x438 = 27067855LLU;
	uint32_t x439 = 9U;
	uint16_t x440 = 2U;
	volatile uint64_t t90 = 312033352888653LLU;

	t90 = ((x437&x438)-(x439-x440));

	if (t90 != 27067848LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x441 = 19789418U;
	static int8_t x442 = -3;
	int64_t x443 = -17959943932942750LL;
	volatile int8_t x444 = INT8_MAX;
	int64_t t91 = -4205576535527LL;

	t91 = ((x441&x442)-(x443-x444));

	if (t91 != 17959943952732293LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x445 = INT16_MIN;
	uint64_t x446 = 3876LLU;
	volatile int8_t x448 = 1;
	volatile uint64_t t92 = 18LLU;

	t92 = ((x445&x446)-(x447-x448));

	if (t92 != 32769LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x449 = -4056274;
	int16_t x450 = -88;
	static volatile int8_t x451 = -54;
	int32_t x452 = -1;
	volatile int32_t t93 = -145;

	t93 = ((x449&x450)-(x451-x452));

	if (t93 != -4056227) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x453 = INT8_MAX;
	volatile uint32_t x454 = 9558U;
	volatile int32_t x455 = 0;
	int32_t x456 = INT32_MAX;
	uint32_t t94 = 779U;

	t94 = ((x453&x454)-(x455-x456));

	if (t94 != 2147483733U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x457 = INT32_MIN;
	static int8_t x458 = INT8_MIN;
	int32_t x459 = -136209;
	uint16_t x460 = UINT16_MAX;
	static int32_t t95 = 40541043;

	t95 = ((x457&x458)-(x459-x460));

	if (t95 != -2147281904) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x461 = 64644;
	int32_t x462 = -10175;
	int16_t x463 = INT16_MIN;
	int64_t x464 = INT64_MIN;
	volatile int64_t t96 = 9318287372357LL;

	t96 = ((x461&x462)-(x463-x464));

	if (t96 != -9223372036854687744LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x469 = 154U;
	int16_t x472 = 1242;
	volatile uint64_t t97 = 5380583413859273LLU;

	t97 = ((x469&x470)-(x471-x472));

	if (t97 != 18086371582471571915LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x478 = INT16_MAX;
	volatile int64_t x480 = 6218656620142LL;
	volatile uint64_t t98 = 1158456110492243909LLU;

	t98 = ((x477&x478)-(x479-x480));

	if (t98 != 18446700624187913609LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x481 = -27576926026835LL;
	int16_t x482 = 0;
	int64_t x483 = 210576344758866054LL;
	static volatile int64_t t99 = -6289708LL;

	t99 = ((x481&x482)-(x483-x484));

	if (t99 != -210576344758865184LL) { NG(); } else { ; }
	
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

