#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 2342874278480075658LL;
static int8_t x8 = INT8_MAX;
int16_t x11 = INT16_MIN;
static int64_t x19 = 28326466112337LL;
int16_t x21 = -1;
static volatile uint32_t t5 = 10087U;
volatile int64_t t6 = INT64_MIN;
int16_t x53 = INT16_MIN;
int32_t x61 = -811;
volatile int8_t x64 = -2;
uint64_t t16 = 12629LLU;
static int32_t t19 = -293411672;
int16_t x88 = INT16_MIN;
uint16_t x91 = 2577U;
int64_t x93 = -1LL;
volatile int64_t x102 = 5LL;
static int32_t x103 = -1;
int16_t x114 = INT16_MIN;
int16_t x123 = -11;
volatile int32_t t30 = -1318722;
uint8_t x136 = UINT8_MAX;
int16_t x138 = 0;
uint64_t x140 = 67128832544LLU;
int64_t t34 = 79541797427057LL;
int32_t x145 = -1;
int16_t x152 = INT16_MIN;
int8_t x155 = INT8_MIN;
uint16_t x158 = 1313U;
uint16_t x160 = UINT16_MAX;
uint32_t x167 = 389191U;
int32_t x169 = -1;
static int32_t t41 = -70329;
volatile int32_t t43 = 45377704;
uint8_t x188 = 60U;
int16_t x192 = -1;
int64_t x195 = 2684LL;
volatile int64_t x199 = INT64_MAX;
int16_t x201 = -1;
volatile int8_t x203 = -32;
int64_t x208 = 2707862320135LL;
int64_t x210 = INT64_MAX;
static int64_t x213 = INT64_MIN;
uint16_t x215 = UINT16_MAX;
int32_t x218 = INT32_MIN;
uint32_t x224 = 204756131U;
int8_t x230 = INT8_MIN;
int64_t x236 = INT64_MAX;
int64_t t56 = -11498585521144131LL;
volatile uint32_t x238 = 28315U;
volatile int64_t t59 = INT64_MIN;
int8_t x251 = 0;
volatile int32_t x252 = INT32_MIN;
volatile int32_t t60 = 0;
int16_t x260 = INT16_MIN;
int32_t x265 = -1;
int8_t x268 = INT8_MIN;
uint64_t x271 = UINT64_MAX;
static volatile int32_t x278 = INT32_MIN;
volatile int64_t t66 = 0LL;
int32_t x284 = -280;
static uint16_t x291 = 2667U;
uint8_t x298 = UINT8_MAX;
int8_t x299 = -1;
uint8_t x312 = 2U;
volatile uint32_t t73 = 13U;
volatile int16_t x316 = -1;
int64_t x322 = 259248463LL;
int8_t x324 = -39;
uint8_t x326 = UINT8_MAX;
uint8_t x328 = 5U;
static uint8_t x335 = 29U;
volatile int16_t x336 = INT16_MIN;
volatile uint8_t x340 = UINT8_MAX;
int64_t x341 = -1LL;
volatile int64_t x344 = INT64_MIN;
uint8_t x346 = 42U;
int16_t x350 = INT16_MIN;
int8_t x356 = -3;
volatile uint32_t t84 = 10U;
int64_t x365 = -31609752LL;
uint64_t x368 = UINT64_MAX;
static volatile uint32_t x374 = UINT32_MAX;
int8_t x376 = INT8_MIN;
int8_t x378 = INT8_MAX;
uint64_t t91 = 7915374982478635434LLU;
volatile uint32_t x395 = 1U;
int8_t x398 = 50;
static int64_t x402 = INT64_MIN;
static int16_t x403 = INT16_MAX;
static volatile uint64_t t96 = 146635LLU;
int64_t x413 = -947280820409093LL;
int8_t x416 = -1;


void f0(void) {
	int64_t x1 = -1LL;
	int64_t x2 = INT64_MIN;
	int8_t x4 = -1;
	volatile int64_t t0 = 3071191LL;

	t0 = (((x1|x2)-x3)&x4);

	if (t0 != -2342874278480075659LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int64_t x6 = -4113LL;
	int32_t x7 = -3871059;
	volatile int64_t t1 = -6693020LL;

	t1 = (((x5|x6)-x7)&x8);

	if (t1 != 66LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	static int64_t x10 = INT64_MIN;
	int16_t x12 = -1;
	int64_t t2 = 762924940613LL;

	t2 = (((x9|x10)-x11)&x12);

	if (t2 != 32640LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	static volatile uint16_t x14 = 1U;
	static int64_t x15 = INT64_MAX;
	volatile int8_t x16 = INT8_MIN;
	uint64_t t3 = 2LLU;

	t3 = (((x13|x14)-x15)&x16);

	if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	uint16_t x18 = 28U;
	int8_t x20 = INT8_MIN;
	int64_t t4 = 218LL;

	t4 = (((x17|x18)-x19)&x20);

	if (t4 != -28326466112384LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 5U;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = -21;

	t5 = (((x21|x22)-x23)&x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int32_t x26 = -3813;
	int64_t x27 = 956099632139LL;
	int64_t x28 = INT64_MIN;

	t6 = (((x25|x26)-x27)&x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -174884LL;
	int64_t x30 = -1LL;
	uint8_t x31 = UINT8_MAX;
	uint64_t x32 = UINT64_MAX;
	static uint64_t t7 = 381900824LLU;

	t7 = (((x29|x30)-x31)&x32);

	if (t7 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int32_t x34 = INT32_MAX;
	int8_t x35 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;
	static volatile int64_t t8 = 566849974LL;

	t8 = (((x33|x34)-x35)&x36);

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 43;
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = INT16_MIN;
	uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 380073U;

	t9 = (((x37|x38)-x39)&x40);

	if (t9 != 33023U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = -1;
	uint8_t x42 = UINT8_MAX;
	uint16_t x43 = UINT16_MAX;
	volatile uint64_t x44 = 12449LLU;
	uint64_t t10 = 222LLU;

	t10 = (((x41|x42)-x43)&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 45;
	volatile uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = 43167U;
	uint64_t t11 = 20690LLU;

	t11 = (((x45|x46)-x47)&x48);

	if (t11 != 43167LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x54 = UINT8_MAX;
	volatile uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;
	volatile uint64_t t12 = 3LLU;

	t12 = (((x53|x54)-x55)&x56);

	if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 59150LLU;
	static uint64_t x58 = 3779LLU;
	volatile int16_t x59 = INT16_MIN;
	volatile int8_t x60 = -1;
	volatile uint64_t t13 = 137446175842042051LLU;

	t13 = (((x57|x58)-x59)&x60);

	if (t13 != 94159LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = 129070785972LLU;
	int16_t x63 = INT16_MIN;
	volatile uint64_t t14 = 4980989816LLU;

	t14 = (((x61|x62)-x63)&x64);

	if (t14 != 32244LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -3;
	static volatile int32_t x66 = INT32_MIN;
	uint64_t x67 = 3219901354756LLU;
	uint64_t x68 = 23332164860330LLU;
	uint64_t t15 = 21239703516105889LLU;

	t15 = (((x65|x66)-x67)&x68);

	if (t15 != 23159543982248LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = 247U;
	int64_t x70 = -57052LL;
	static volatile int8_t x71 = INT8_MAX;
	static uint64_t x72 = 57071885122913316LLU;

	t16 = (((x69|x70)-x71)&x72);

	if (t16 != 57071885122863136LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	uint16_t x74 = UINT16_MAX;
	volatile int8_t x75 = INT8_MAX;
	static volatile int8_t x76 = INT8_MAX;
	uint64_t t17 = 2LLU;

	t17 = (((x73|x74)-x75)&x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MAX;
	volatile int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MAX;
	volatile int32_t t18 = -85;

	t18 = (((x77|x78)-x79)&x80);

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 3;
	int32_t x82 = INT32_MIN;
	volatile uint8_t x83 = 0U;
	int8_t x84 = -5;

	t19 = (((x81|x82)-x83)&x84);

	if (t19 != -2147483645) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = 2U;
	volatile int32_t t20 = -41;

	t20 = (((x85|x86)-x87)&x88);

	if (t20 != -2147450880) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = 1;
	int32_t x90 = -1;
	uint32_t x92 = 14831U;
	static uint32_t t21 = 3U;

	t21 = (((x89|x90)-x91)&x92);

	if (t21 != 12782U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x94 = -2;
	int16_t x95 = -9;
	int64_t x96 = INT64_MAX;
	int64_t t22 = 37LL;

	t22 = (((x93|x94)-x95)&x96);

	if (t22 != 8LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	int16_t x99 = 60;
	static uint32_t x100 = UINT32_MAX;
	uint32_t t23 = 4588405U;

	t23 = (((x97|x98)-x99)&x100);

	if (t23 != 4294967235U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MIN;
	int32_t x104 = -1;
	int64_t t24 = 100069305434294LL;

	t24 = (((x101|x102)-x103)&x104);

	if (t24 != -32762LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 1662U;
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	uint32_t x108 = 8U;
	volatile uint32_t t25 = 158599856U;

	t25 = (((x105|x106)-x107)&x108);

	if (t25 != 8U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 2021LLU;
	int64_t x110 = 49948836897LL;
	static uint32_t x111 = 108U;
	int8_t x112 = INT8_MAX;
	static volatile uint64_t t26 = 6578617792LLU;

	t26 = (((x109|x110)-x111)&x112);

	if (t26 != 121LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x113 = -1;
	static int16_t x115 = -1;
	int8_t x116 = INT8_MIN;
	volatile int32_t t27 = 7;

	t27 = (((x113|x114)-x115)&x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	volatile uint8_t x118 = UINT8_MAX;
	int8_t x119 = INT8_MIN;
	int16_t x120 = -1;
	int32_t t28 = -7;

	t28 = (((x117|x118)-x119)&x120);

	if (t28 != -2147483265) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	int64_t x122 = INT64_MAX;
	static int32_t x124 = 0;
	volatile int64_t t29 = 5579991855276LL;

	t29 = (((x121|x122)-x123)&x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x126 = -1;
	int8_t x127 = INT8_MAX;
	volatile uint16_t x128 = 148U;

	t30 = (((x125|x126)-x127)&x128);

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 355U;
	volatile int32_t x130 = -1;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = UINT32_MAX;
	int64_t t31 = 5572672LL;

	t31 = (((x129|x130)-x131)&x132);

	if (t31 != 4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -125;
	int32_t x134 = INT32_MAX;
	uint32_t x135 = 345007U;
	uint32_t t32 = 3390769U;

	t32 = (((x133|x134)-x135)&x136);

	if (t32 != 80U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = -68909LL;
	int64_t x139 = INT64_MIN;
	static volatile uint64_t t33 = 1990607263LLU;

	t33 = (((x137|x138)-x139)&x140);

	if (t33 != 67128832512LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MAX;
	static uint8_t x142 = 7U;
	uint8_t x143 = 5U;
	int64_t x144 = -1LL;

	t34 = (((x141|x142)-x143)&x144);

	if (t34 != 122LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = -1;
	int64_t x147 = -13847446170308920LL;
	static int64_t x148 = 451904LL;
	int64_t t35 = -14404481537822421LL;

	t35 = (((x145|x146)-x147)&x148);

	if (t35 != 393472LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MAX;
	int64_t x150 = INT64_MIN;
	static int8_t x151 = INT8_MIN;
	int64_t t36 = -2180447912LL;

	t36 = (((x149|x150)-x151)&x152);

	if (t36 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x153 = 34120U;
	uint8_t x154 = 1U;
	int16_t x156 = INT16_MAX;
	volatile uint32_t t37 = 32U;

	t37 = (((x153|x154)-x155)&x156);

	if (t37 != 1481U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x159 = 0;
	volatile int32_t t38 = 628753141;

	t38 = (((x157|x158)-x159)&x160);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = -1;
	static int8_t x166 = INT8_MAX;
	static uint16_t x168 = 1U;
	volatile uint32_t t39 = 4U;

	t39 = (((x165|x166)-x167)&x168);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x170 = 1547U;
	volatile uint16_t x171 = UINT16_MAX;
	int64_t x172 = INT64_MIN;
	volatile int64_t t40 = 285948LL;

	t40 = (((x169|x170)-x171)&x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MAX;
	uint8_t x174 = UINT8_MAX;
	uint8_t x175 = UINT8_MAX;
	volatile int32_t x176 = INT32_MIN;

	t41 = (((x173|x174)-x175)&x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 1366U;
	static int16_t x178 = INT16_MIN;
	static uint16_t x179 = 28766U;
	volatile uint64_t x180 = UINT64_MAX;
	uint64_t t42 = 1122954LLU;

	t42 = (((x177|x178)-x179)&x180);

	if (t42 != 4294907128LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	static int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MAX;

	t43 = (((x181|x182)-x183)&x184);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 6U;
	volatile int8_t x186 = 22;
	uint32_t x187 = 66494123U;
	static uint32_t t44 = 7296893U;

	t44 = (((x185|x186)-x187)&x188);

	if (t44 != 40U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = 15257285277142LL;
	int32_t x190 = -1;
	volatile int64_t x191 = -1LL;
	volatile int64_t t45 = -204907479705313LL;

	t45 = (((x189|x190)-x191)&x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MAX;
	uint8_t x194 = 63U;
	int64_t x196 = INT64_MIN;
	volatile int64_t t46 = 28383LL;

	t46 = (((x193|x194)-x195)&x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = 7498;
	uint16_t x198 = UINT16_MAX;
	uint64_t x200 = 1208109848079LLU;
	uint64_t t47 = 4889957LLU;

	t47 = (((x197|x198)-x199)&x200);

	if (t47 != 65536LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x202 = 830U;
	int16_t x204 = 442;
	volatile int32_t t48 = 509;

	t48 = (((x201|x202)-x203)&x204);

	if (t48 != 26) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x205 = INT16_MAX;
	static int32_t x206 = 0;
	volatile uint8_t x207 = UINT8_MAX;
	volatile int64_t t49 = -13590061LL;

	t49 = (((x205|x206)-x207)&x208);

	if (t49 != 29696LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -2LL;
	int32_t x211 = 115;
	volatile uint16_t x212 = UINT16_MAX;
	volatile int64_t t50 = 11296LL;

	t50 = (((x209|x210)-x211)&x212);

	if (t50 != 65420LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x214 = 53654232U;
	uint64_t x216 = 1447LLU;
	uint64_t t51 = 511LLU;

	t51 = (((x213|x214)-x215)&x216);

	if (t51 != 129LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x217 = 1U;
	int64_t x219 = 2495210012996254362LL;
	uint64_t x220 = 2131473633241LLU;
	static uint64_t t52 = 3610878340876LLU;

	t52 = (((x217|x218)-x219)&x220);

	if (t52 != 1855511332161LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -1LL;
	int16_t x222 = -221;
	volatile int64_t x223 = INT64_MAX;
	volatile int64_t t53 = 225547000324LL;

	t53 = (((x221|x222)-x223)&x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x225 = 2922783243898197320LLU;
	int32_t x226 = INT32_MIN;
	volatile int32_t x227 = 24;
	int32_t x228 = INT32_MAX;
	uint64_t t54 = 3829510457LLU;

	t54 = (((x225|x226)-x227)&x228);

	if (t54 != 1879315760LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = 26620976962242LL;
	int8_t x231 = INT8_MIN;
	int32_t x232 = 42491199;
	static int64_t t55 = -28063448176177LL;

	t55 = (((x229|x230)-x231)&x232);

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;

	t56 = (((x233|x234)-x235)&x236);

	if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = 13U;
	uint32_t t57 = 22393U;

	t57 = (((x237|x238)-x239)&x240);

	if (t57 != 9U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x241 = 4U;
	volatile uint8_t x242 = UINT8_MAX;
	uint8_t x243 = 6U;
	int64_t x244 = 51333LL;
	volatile int64_t t58 = 522828719127557330LL;

	t58 = (((x241|x242)-x243)&x244);

	if (t58 != 129LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = 1;
	int8_t x247 = -1;
	int32_t x248 = INT32_MIN;

	t59 = (((x245|x246)-x247)&x248);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 3195U;
	uint16_t x250 = 1U;

	t60 = (((x249|x250)-x251)&x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 5716132744LLU;
	uint8_t x254 = 0U;
	uint16_t x255 = 210U;
	uint64_t x256 = 21355888281LLU;
	volatile uint64_t t61 = 8656042648851612820LLU;

	t61 = (((x253|x254)-x255)&x256);

	if (t61 != 1352680080LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = 13U;
	static int64_t x258 = -1LL;
	static int32_t x259 = INT32_MIN;
	volatile int64_t t62 = 696316681555978333LL;

	t62 = (((x257|x258)-x259)&x260);

	if (t62 != 2147450880LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = 9U;
	uint8_t x262 = 1U;
	volatile int16_t x263 = -1;
	volatile int16_t x264 = INT16_MIN;
	int32_t t63 = -5615836;

	t63 = (((x261|x262)-x263)&x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x266 = INT64_MIN;
	uint64_t x267 = 6233240960LLU;
	static uint64_t t64 = 426632LLU;

	t64 = (((x265|x266)-x267)&x268);

	if (t64 != 18446744067476310528LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x269 = INT32_MIN;
	uint64_t x270 = 4LLU;
	uint8_t x272 = 7U;
	uint64_t t65 = 183126343LLU;

	t65 = (((x269|x270)-x271)&x272);

	if (t65 != 5LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = INT64_MIN;
	static int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MIN;

	t66 = (((x277|x278)-x279)&x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 43U;
	int64_t x282 = -76033LL;
	static volatile int32_t x283 = INT32_MIN;
	int64_t t67 = 13567226LL;

	t67 = (((x281|x282)-x283)&x284);

	if (t67 != 2147407592LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = 862259780456LLU;
	uint8_t x290 = 61U;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t68 = 2684408450733489LLU;

	t68 = (((x289|x290)-x291)&x292);

	if (t68 != 862259777810LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x293 = INT8_MIN;
	int64_t x294 = 370749LL;
	volatile int8_t x295 = INT8_MAX;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int64_t t69 = -480985623717493LL;

	t69 = (((x293|x294)-x295)&x296);

	if (t69 != 65342LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -1;
	static volatile int8_t x300 = INT8_MAX;
	volatile int32_t t70 = -1113;

	t70 = (((x297|x298)-x299)&x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x301 = 0;
	int16_t x302 = INT16_MIN;
	volatile uint8_t x303 = 2U;
	static int8_t x304 = INT8_MIN;
	int32_t t71 = 2872310;

	t71 = (((x301|x302)-x303)&x304);

	if (t71 != -32896) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = -135274790;
	int8_t x306 = INT8_MAX;
	int32_t x307 = 220;
	int64_t x308 = INT64_MIN;
	int64_t t72 = INT64_MIN;

	t72 = (((x305|x306)-x307)&x308);

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = -1;
	uint32_t x310 = 175627U;
	int32_t x311 = -1;

	t73 = (((x309|x310)-x311)&x312);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MAX;
	volatile int64_t x315 = 127638287196263LL;
	volatile int64_t t74 = -27390LL;

	t74 = (((x313|x314)-x315)&x316);

	if (t74 != -127638287196264LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = -47;
	static int64_t x319 = 31682LL;
	uint16_t x320 = 259U;
	volatile int64_t t75 = 2001992795040391LL;

	t75 = (((x317|x318)-x319)&x320);

	if (t75 != 3LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = -1;
	int32_t x323 = INT32_MIN;
	static int64_t t76 = -255LL;

	t76 = (((x321|x322)-x323)&x324);

	if (t76 != 2147483609LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x325 = INT16_MIN;
	volatile int8_t x327 = INT8_MIN;
	int32_t t77 = 2421113;

	t77 = (((x325|x326)-x327)&x328);

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = 9931LL;
	int32_t x330 = 13;
	uint16_t x331 = 5U;
	int16_t x332 = INT16_MIN;
	static int64_t t78 = -9666596320737159LL;

	t78 = (((x329|x330)-x331)&x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x333 = 109U;
	static int8_t x334 = INT8_MIN;
	volatile uint32_t t79 = 837279U;

	t79 = (((x333|x334)-x335)&x336);

	if (t79 != 4294934528U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = -1;
	volatile int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	volatile int32_t t80 = 8119;

	t80 = (((x337|x338)-x339)&x340);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x342 = -22;
	uint16_t x343 = 5131U;
	int64_t t81 = INT64_MIN;

	t81 = (((x341|x342)-x343)&x344);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = -1;
	int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t82 = 849012846;

	t82 = (((x345|x346)-x347)&x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = -1;
	int16_t x351 = INT16_MIN;
	volatile int64_t x352 = INT64_MAX;
	int64_t t83 = -276148697554754769LL;

	t83 = (((x349|x350)-x351)&x352);

	if (t83 != 32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MIN;
	static uint32_t x354 = 259061612U;
	uint32_t x355 = 316859U;

	t84 = (((x353|x354)-x355)&x356);

	if (t84 != 4294650417U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = -150349528LL;
	uint64_t x362 = 16032608557386LLU;
	volatile int8_t x363 = -1;
	volatile uint32_t x364 = 168617U;
	volatile uint64_t t85 = 135335901495645144LLU;

	t85 = (((x361|x362)-x363)&x364);

	if (t85 != 36905LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x366 = UINT16_MAX;
	int8_t x367 = -7;
	uint64_t t86 = 177413873LLU;

	t86 = (((x365|x366)-x367)&x368);

	if (t86 != 18446744073677963270LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x369 = INT64_MIN;
	int8_t x370 = 42;
	volatile int32_t x371 = INT32_MIN;
	static uint16_t x372 = UINT16_MAX;
	int64_t t87 = 148419471413361192LL;

	t87 = (((x369|x370)-x371)&x372);

	if (t87 != 42LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x373 = 25022246U;
	int8_t x375 = INT8_MIN;
	volatile uint32_t t88 = 7U;

	t88 = (((x373|x374)-x375)&x376);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x377 = -1LL;
	uint32_t x379 = 1236978520U;
	uint32_t x380 = 1055250U;
	int64_t t89 = -5653677147150LL;

	t89 = (((x377|x378)-x379)&x380);

	if (t89 != 4098LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = UINT64_MAX;
	int64_t x382 = -1LL;
	int16_t x383 = INT16_MAX;
	int64_t x384 = 3618938332225896LL;
	uint64_t t90 = 7820674LLU;

	t90 = (((x381|x382)-x383)&x384);

	if (t90 != 3618938332217344LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x385 = 981U;
	uint64_t x386 = 14LLU;
	volatile uint32_t x387 = 1U;
	static volatile int64_t x388 = INT64_MIN;

	t91 = (((x385|x386)-x387)&x388);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x389 = 5U;
	static int64_t x390 = 30115LL;
	uint8_t x391 = 34U;
	int16_t x392 = -1;
	volatile int64_t t92 = 24958479LL;

	t92 = (((x389|x390)-x391)&x392);

	if (t92 != 30085LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x393 = INT32_MAX;
	int8_t x394 = -1;
	int8_t x396 = -2;
	volatile uint32_t t93 = 136720460U;

	t93 = (((x393|x394)-x395)&x396);

	if (t93 != 4294967294U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MIN;
	int32_t x399 = 0;
	int16_t x400 = -1;
	int64_t t94 = -9873178647LL;

	t94 = (((x397|x398)-x399)&x400);

	if (t94 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = INT16_MIN;
	int32_t x404 = -1;
	static volatile int64_t t95 = 3708976609155704073LL;

	t95 = (((x401|x402)-x403)&x404);

	if (t95 != -65535LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = 1;
	int8_t x406 = INT8_MIN;
	uint64_t x407 = UINT64_MAX;
	static int16_t x408 = INT16_MIN;

	t96 = (((x405|x406)-x407)&x408);

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x409 = 62139485U;
	uint32_t x410 = UINT32_MAX;
	static int64_t x411 = -1LL;
	volatile int8_t x412 = INT8_MIN;
	int64_t t97 = 1LL;

	t97 = (((x409|x410)-x411)&x412);

	if (t97 != 4294967296LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x414 = UINT16_MAX;
	uint8_t x415 = 8U;
	static int64_t t98 = 59925152711LL;

	t98 = (((x413|x414)-x415)&x416);

	if (t98 != -947280820371465LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x417 = -1;
	uint8_t x418 = 3U;
	int32_t x419 = INT32_MAX;
	int16_t x420 = INT16_MIN;
	volatile int32_t t99 = INT32_MIN;

	t99 = (((x417|x418)-x419)&x420);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

