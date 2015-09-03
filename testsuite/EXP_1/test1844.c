#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
int8_t x11 = INT8_MIN;
static int8_t x18 = -1;
uint8_t x19 = UINT8_MAX;
uint32_t x22 = UINT32_MAX;
int64_t x24 = -1LL;
int64_t t5 = -744647177472971LL;
volatile int16_t x25 = -2166;
uint64_t x26 = UINT64_MAX;
int64_t x30 = INT64_MIN;
int16_t x33 = -340;
uint16_t x38 = 4U;
int64_t x43 = -87538573381399LL;
uint32_t x49 = UINT32_MAX;
static volatile int64_t t12 = -8348985187926208LL;
int16_t x53 = INT16_MIN;
uint8_t x55 = UINT8_MAX;
static int16_t x60 = -1;
int16_t x64 = INT16_MAX;
int32_t x69 = INT32_MIN;
static volatile int64_t t17 = 6063668224LL;
uint8_t x77 = UINT8_MAX;
int16_t x78 = 21;
volatile uint32_t t19 = 45020U;
int8_t x82 = -1;
volatile uint64_t x87 = 853614938981347LLU;
int32_t x89 = -60994;
volatile uint32_t x91 = 1U;
uint32_t t22 = 1240U;
volatile uint32_t t23 = 61U;
volatile int32_t x108 = INT32_MIN;
static int32_t x112 = -1;
volatile int32_t t27 = 467;
volatile int64_t x115 = -34962LL;
static volatile int64_t t28 = -20LL;
static uint16_t x119 = 9U;
static int8_t x123 = INT8_MAX;
static int8_t x124 = 6;
int64_t x125 = -173LL;
static uint8_t x134 = 2U;
int64_t t33 = 1LL;
uint64_t t34 = 9845107947259LLU;
static int64_t x156 = INT64_MAX;
volatile int64_t t38 = 5790LL;
static int64_t x158 = 1151707827761294LL;
uint64_t t39 = 3009420LLU;
int64_t t40 = 81232788706LL;
int64_t x172 = INT64_MAX;
static int64_t x182 = INT64_MIN;
int64_t t45 = 11506LL;
int8_t x185 = 2;
uint64_t x187 = UINT64_MAX;
int16_t x189 = INT16_MIN;
uint32_t x190 = 1586U;
uint16_t x200 = 0U;
int32_t t49 = 0;
int16_t x201 = 178;
uint16_t x203 = 3U;
uint32_t x204 = UINT32_MAX;
uint32_t t50 = 27083U;
uint16_t x209 = 3U;
static volatile int32_t x214 = INT32_MAX;
int32_t x216 = INT32_MIN;
volatile uint32_t t53 = 345U;
int8_t x224 = INT8_MIN;
volatile uint32_t t55 = 15802226U;
int8_t x225 = INT8_MAX;
volatile uint16_t x226 = UINT16_MAX;
int32_t x227 = INT32_MIN;
int32_t x229 = -1;
int32_t x230 = INT32_MIN;
volatile int8_t x235 = INT8_MIN;
uint16_t x240 = 17498U;
volatile int32_t t59 = -281809461;
volatile int64_t t64 = 4355LL;
volatile uint64_t t66 = 55734607485938LLU;
int64_t x269 = INT64_MAX;
int32_t x272 = INT32_MAX;
static volatile uint32_t x281 = UINT32_MAX;
uint8_t x287 = UINT8_MAX;
volatile uint64_t x290 = UINT64_MAX;
int32_t x294 = -1;
int32_t t76 = -235539645;
int32_t x311 = INT32_MIN;
uint32_t x312 = 146556U;
int16_t x313 = -1755;
volatile int32_t t78 = -276;
int32_t x318 = -1;
int8_t x319 = INT8_MIN;
volatile int64_t x321 = 1422281LL;
int64_t x326 = -1LL;
static int32_t x329 = INT32_MAX;
uint16_t x336 = UINT16_MAX;
uint64_t x347 = 29552919584863721LLU;
uint16_t x365 = UINT16_MAX;
int64_t x367 = INT64_MIN;
volatile uint8_t x374 = 15U;
volatile int16_t x375 = 334;
int32_t x379 = INT32_MAX;
static int32_t x383 = -1335;
int64_t x385 = -61240706971542875LL;
static int8_t x392 = INT8_MAX;


void f0(void) {
	uint64_t x1 = 2699025656012143021LLU;
	static uint8_t x2 = 57U;
	int64_t x4 = INT64_MAX;
	volatile uint64_t t0 = 168131LLU;

	t0 = (((x1&x2)|x3)&x4);

	if (t0 != 41LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	int8_t x6 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	static uint64_t x8 = 43187674564184863LLU;
	uint64_t t1 = 32746105905819LLU;

	t1 = (((x5&x6)|x7)&x8);

	if (t1 != 286444319LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 8;
	uint16_t x10 = 11313U;
	uint64_t x12 = 1767142LLU;
	uint64_t t2 = 229202292892LLU;

	t2 = (((x9&x10)|x11)&x12);

	if (t2 != 1767040LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	static uint32_t x14 = 408U;
	uint32_t x15 = UINT32_MAX;
	int8_t x16 = 36;
	static volatile uint32_t t3 = 968151U;

	t3 = (((x13&x14)|x15)&x16);

	if (t3 != 36U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -30;
	static int8_t x20 = 4;
	static int32_t t4 = -2002;

	t4 = (((x17&x18)|x19)&x20);

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int64_t x23 = 15740LL;

	t5 = (((x21&x22)|x23)&x24);

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = 7724U;
	volatile uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 2820525278LLU;

	t6 = (((x25&x26)|x27)&x28);

	if (t6 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x31 = 26U;
	int32_t x32 = INT32_MAX;
	int64_t t7 = 4603814627989255LL;

	t7 = (((x29&x30)|x31)&x32);

	if (t7 != 26LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = INT16_MIN;
	volatile uint8_t x35 = 86U;
	int32_t x36 = INT32_MAX;
	int32_t t8 = -78280900;

	t8 = (((x33&x34)|x35)&x36);

	if (t8 != 2147450966) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 53;
	uint16_t x39 = 207U;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -10;

	t9 = (((x37&x38)|x39)&x40);

	if (t9 != 207) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MAX;
	int32_t x42 = 1899211;
	int32_t x44 = -1;
	int64_t t10 = -1883410486532248LL;

	t10 = (((x41&x42)|x43)&x44);

	if (t10 != -87538572330261LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	static int32_t x46 = INT32_MIN;
	int16_t x47 = -1;
	int32_t x48 = 1955354;
	int32_t t11 = -71282;

	t11 = (((x45&x46)|x47)&x48);

	if (t11 != 1955354) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MAX;
	static uint16_t x52 = UINT16_MAX;

	t12 = (((x49&x50)|x51)&x52);

	if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 3U;
	int16_t x56 = -1;
	int32_t t13 = -5930;

	t13 = (((x53&x54)|x55)&x56);

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -3;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	volatile int64_t t14 = -113415558490214LL;

	t14 = (((x57&x58)|x59)&x60);

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 24208821;
	uint64_t x62 = 30945416LLU;
	uint8_t x63 = UINT8_MAX;
	static uint64_t t15 = 15633507504LLU;

	t15 = (((x61&x62)|x63)&x64);

	if (t15 != 8447LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MAX;
	static int32_t x66 = INT32_MIN;
	volatile int64_t x67 = 11LL;
	uint64_t x68 = 64966834LLU;
	volatile uint64_t t16 = 846863LLU;

	t16 = (((x65&x66)|x67)&x68);

	if (t16 != 2LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int64_t x71 = -7LL;
	uint32_t x72 = UINT32_MAX;

	t17 = (((x69&x70)|x71)&x72);

	if (t17 != 4294967289LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = -42;
	volatile int64_t x74 = INT64_MIN;
	int8_t x75 = -62;
	uint64_t x76 = UINT64_MAX;
	static uint64_t t18 = 214361240476655LLU;

	t18 = (((x73&x74)|x75)&x76);

	if (t18 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x79 = 42915U;
	uint8_t x80 = 15U;

	t19 = (((x77&x78)|x79)&x80);

	if (t19 != 7U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	volatile int32_t x83 = -12413792;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = 489780;

	t20 = (((x81&x82)|x83)&x84);

	if (t20 != -12413824) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	uint32_t x86 = 34903914U;
	uint16_t x88 = 8U;
	static volatile uint64_t t21 = 123290274534689396LLU;

	t21 = (((x85&x86)|x87)&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = -629;
	static int32_t x92 = 2825;

	t22 = (((x89&x90)|x91)&x92);

	if (t22 != 265U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	volatile int32_t x94 = INT32_MAX;
	volatile uint32_t x95 = 5027U;
	static uint8_t x96 = 90U;

	t23 = (((x93&x94)|x95)&x96);

	if (t23 != 90U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 9;
	volatile uint16_t x98 = 1919U;
	int8_t x99 = INT8_MAX;
	int32_t x100 = INT32_MIN;
	int32_t t24 = 178;

	t24 = (((x97&x98)|x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static volatile int64_t x102 = 16597LL;
	uint32_t x103 = UINT32_MAX;
	volatile uint8_t x104 = 0U;
	static volatile int64_t t25 = -1611447873LL;

	t25 = (((x101&x102)|x103)&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MAX;
	int32_t x106 = -1;
	volatile int64_t x107 = INT64_MIN;
	int64_t t26 = INT64_MIN;

	t26 = (((x105&x106)|x107)&x108);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	uint16_t x111 = UINT16_MAX;

	t27 = (((x109&x110)|x111)&x112);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	uint32_t x114 = UINT32_MAX;
	int32_t x116 = 95968422;

	t28 = (((x113&x114)|x115)&x116);

	if (t28 != 95968422LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int8_t x118 = -1;
	int16_t x120 = -1;
	static int32_t t29 = -208996135;

	t29 = (((x117&x118)|x119)&x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 2U;
	static uint8_t x122 = UINT8_MAX;
	int32_t t30 = -707014;

	t30 = (((x121&x122)|x123)&x124);

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x126 = INT8_MIN;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MIN;
	volatile uint64_t t31 = 36104794LLU;

	t31 = (((x125&x126)|x127)&x128);

	if (t31 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 260484596LLU;
	static int64_t x130 = INT64_MIN;
	int8_t x131 = -1;
	int8_t x132 = -1;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (((x129&x130)|x131)&x132);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	int8_t x135 = 29;
	volatile int64_t x136 = INT64_MAX;

	t33 = (((x133&x134)|x135)&x136);

	if (t33 != 31LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = UINT64_MAX;
	int16_t x138 = 2858;
	volatile int16_t x139 = INT16_MAX;
	int64_t x140 = INT64_MIN;

	t34 = (((x137&x138)|x139)&x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	uint32_t x143 = UINT32_MAX;
	uint32_t x144 = 42813U;
	volatile uint32_t t35 = 39U;

	t35 = (((x141&x142)|x143)&x144);

	if (t35 != 42813U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -14;
	int16_t x146 = -341;
	int8_t x147 = -1;
	int8_t x148 = INT8_MAX;
	volatile int32_t t36 = 28578;

	t36 = (((x145&x146)|x147)&x148);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	uint64_t x150 = UINT64_MAX;
	static int8_t x151 = -8;
	uint8_t x152 = 5U;
	static volatile uint64_t t37 = 10589632613LLU;

	t37 = (((x149&x150)|x151)&x152);

	if (t37 != 5LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 24U;
	volatile int16_t x154 = INT16_MIN;
	int8_t x155 = -6;

	t38 = (((x153&x154)|x155)&x156);

	if (t38 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static int32_t x159 = INT32_MAX;
	int64_t x160 = INT64_MIN;

	t39 = (((x157&x158)|x159)&x160);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 33717U;
	int16_t x162 = INT16_MAX;
	volatile uint8_t x163 = 1U;
	int64_t x164 = INT64_MIN;

	t40 = (((x161&x162)|x163)&x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 0;
	uint16_t x166 = UINT16_MAX;
	volatile int64_t x167 = -1LL;
	uint8_t x168 = UINT8_MAX;
	int64_t t41 = 3495148537LL;

	t41 = (((x165&x166)|x167)&x168);

	if (t41 != 255LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	static int8_t x170 = -1;
	int32_t x171 = -1;
	int64_t t42 = INT64_MAX;

	t42 = (((x169&x170)|x171)&x172);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = -7;
	uint16_t x175 = 56U;
	uint16_t x176 = UINT16_MAX;
	volatile int64_t t43 = -31633LL;

	t43 = (((x173&x174)|x175)&x176);

	if (t43 != 56LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 1038222593LLU;
	volatile uint64_t x178 = 9579620799LLU;
	volatile uint32_t x179 = 3U;
	static int64_t x180 = INT64_MIN;
	volatile uint64_t t44 = 4836851666LLU;

	t44 = (((x177&x178)|x179)&x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int32_t x183 = -2414;
	int8_t x184 = INT8_MAX;

	t45 = (((x181&x182)|x183)&x184);

	if (t45 != 18LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x186 = UINT16_MAX;
	int64_t x188 = 26LL;
	uint64_t t46 = 402589807539558219LLU;

	t46 = (((x185&x186)|x187)&x188);

	if (t46 != 26LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x191 = -1LL;
	int16_t x192 = INT16_MIN;
	static volatile int64_t t47 = -3685LL;

	t47 = (((x189&x190)|x191)&x192);

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 1573;
	uint8_t x194 = 62U;
	int32_t x195 = INT32_MIN;
	int32_t x196 = 14319382;
	int32_t t48 = -13567844;

	t48 = (((x193&x194)|x195)&x196);

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static volatile int8_t x198 = INT8_MAX;
	static uint16_t x199 = 3U;

	t49 = (((x197&x198)|x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = -1954;

	t50 = (((x201&x202)|x203)&x204);

	if (t50 != 19U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MAX;
	uint32_t x206 = UINT32_MAX;
	static volatile uint16_t x207 = 0U;
	uint16_t x208 = 1745U;
	uint32_t t51 = 384710684U;

	t51 = (((x205&x206)|x207)&x208);

	if (t51 != 1745U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x210 = 0;
	static int64_t x211 = INT64_MIN;
	volatile int32_t x212 = INT32_MIN;
	volatile int64_t t52 = INT64_MIN;

	t52 = (((x209&x210)|x211)&x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 204664U;
	volatile int8_t x215 = -1;

	t53 = (((x213&x214)|x215)&x216);

	if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 341876104569508LLU;
	uint32_t x218 = 658U;
	uint16_t x219 = 2022U;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t54 = 510900828LLU;

	t54 = (((x217&x218)|x219)&x220);

	if (t54 != 1920LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 5U;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MIN;

	t55 = (((x221&x222)|x223)&x224);

	if (t55 != 4294967168U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x228 = -6;
	int32_t t56 = -13520696;

	t56 = (((x225&x226)|x227)&x228);

	if (t56 != -2147483526) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x231 = INT64_MAX;
	static int32_t x232 = 672;
	int64_t t57 = -25418LL;

	t57 = (((x229&x230)|x231)&x232);

	if (t57 != 672LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MIN;
	int8_t x236 = 8;
	static volatile int32_t t58 = -594609;

	t58 = (((x233&x234)|x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = 127;
	static int8_t x238 = INT8_MIN;
	volatile int16_t x239 = INT16_MIN;

	t59 = (((x237&x238)|x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -1LL;
	int64_t x242 = INT64_MIN;
	int32_t x243 = INT32_MIN;
	static int16_t x244 = INT16_MAX;
	volatile int64_t t60 = 3561280LL;

	t60 = (((x241&x242)|x243)&x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	volatile uint32_t x246 = 1177253U;
	volatile uint32_t x247 = UINT32_MAX;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t61 = UINT32_MAX;

	t61 = (((x245&x246)|x247)&x248);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = 2U;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = INT32_MIN;

	t62 = (((x249&x250)|x251)&x252);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = INT8_MIN;
	static uint8_t x255 = 15U;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = INT32_MIN;

	t63 = (((x253&x254)|x255)&x256);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	uint32_t x258 = 3949U;
	int8_t x259 = -1;
	int16_t x260 = 101;

	t64 = (((x257&x258)|x259)&x260);

	if (t64 != 101LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -6966;
	int16_t x262 = INT16_MIN;
	static uint8_t x263 = 39U;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t65 = 1018998198;

	t65 = (((x261&x262)|x263)&x264);

	if (t65 != 32807) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MIN;
	static int32_t x266 = INT32_MIN;
	uint64_t x267 = 3732944008LLU;
	int16_t x268 = 26;

	t66 = (((x265&x266)|x267)&x268);

	if (t66 != 8LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	volatile int64_t t67 = 379538400277224LL;

	t67 = (((x269&x270)|x271)&x272);

	if (t67 != 2147483520LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 159652;
	int8_t x274 = 46;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 111U;
	uint32_t t68 = 588899108U;

	t68 = (((x273&x274)|x275)&x276);

	if (t68 != 36U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	volatile uint8_t x278 = UINT8_MAX;
	int8_t x279 = 22;
	static int64_t x280 = -1LL;
	int64_t t69 = 12LL;

	t69 = (((x277&x278)|x279)&x280);

	if (t69 != 255LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = -1;
	int64_t x283 = 0LL;
	uint64_t x284 = UINT64_MAX;
	uint64_t t70 = 21LLU;

	t70 = (((x281&x282)|x283)&x284);

	if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	static int8_t x286 = INT8_MIN;
	volatile int32_t x288 = INT32_MAX;
	static volatile uint32_t t71 = 0U;

	t71 = (((x285&x286)|x287)&x288);

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -41024495003LL;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MIN;
	static volatile uint64_t t72 = 1LLU;

	t72 = (((x289&x290)|x291)&x292);

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 63143961U;
	volatile uint32_t x295 = 3694U;
	static int16_t x296 = INT16_MIN;
	static volatile uint32_t t73 = 3593U;

	t73 = (((x293&x294)|x295)&x296);

	if (t73 != 63143936U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	volatile uint16_t x298 = UINT16_MAX;
	volatile int16_t x299 = INT16_MAX;
	static int16_t x300 = INT16_MIN;
	static int64_t t74 = -31LL;

	t74 = (((x297&x298)|x299)&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	int64_t x302 = -29411677603917LL;
	volatile uint32_t x303 = UINT32_MAX;
	int64_t x304 = -1LL;
	volatile int64_t t75 = -19409020LL;

	t75 = (((x301&x302)|x303)&x304);

	if (t75 != -29407641075713LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 11372U;
	static uint8_t x306 = UINT8_MAX;
	int16_t x307 = INT16_MAX;
	uint16_t x308 = 955U;

	t76 = (((x305&x306)|x307)&x308);

	if (t76 != 955) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	static volatile int16_t x310 = INT16_MAX;
	uint32_t t77 = 945U;

	t77 = (((x309&x310)|x311)&x312);

	if (t77 != 15484U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x314 = 6U;
	volatile int16_t x315 = INT16_MIN;
	uint8_t x316 = 4U;

	t78 = (((x313&x314)|x315)&x316);

	if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = -233;
	int64_t x320 = INT64_MIN;
	static int64_t t79 = INT64_MIN;

	t79 = (((x317&x318)|x319)&x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x322 = UINT32_MAX;
	uint16_t x323 = 7U;
	int16_t x324 = INT16_MIN;
	int64_t t80 = -27258958LL;

	t80 = (((x321&x322)|x323)&x324);

	if (t80 != 1409024LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	volatile int32_t x327 = 14864680;
	uint16_t x328 = 445U;
	int64_t t81 = 24LL;

	t81 = (((x325&x326)|x327)&x328);

	if (t81 != 445LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = 13493825LL;
	static volatile uint8_t x331 = 3U;
	int16_t x332 = -1;
	int64_t t82 = 102876LL;

	t82 = (((x329&x330)|x331)&x332);

	if (t82 != 13493827LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	volatile uint16_t x334 = 44U;
	uint64_t x335 = 13378522148629LLU;
	static volatile uint64_t t83 = 117LLU;

	t83 = (((x333&x334)|x335)&x336);

	if (t83 != 28477LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 22U;
	int64_t x338 = -1LL;
	static int16_t x339 = INT16_MIN;
	static uint64_t x340 = 1979040LLU;
	uint64_t t84 = 11484154262596LLU;

	t84 = (((x337&x338)|x339)&x340);

	if (t84 != 1966080LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 57LLU;
	static int64_t x342 = -35283705691LL;
	volatile int8_t x343 = INT8_MAX;
	static int64_t x344 = INT64_MIN;
	uint64_t t85 = 458656LLU;

	t85 = (((x341&x342)|x343)&x344);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 16;
	static int64_t x346 = INT64_MAX;
	static int32_t x348 = INT32_MAX;
	volatile uint64_t t86 = 8028093011300751LLU;

	t86 = (((x345&x346)|x347)&x348);

	if (t86 != 1240364537LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = 42859596394315LL;
	uint16_t x351 = 0U;
	static int64_t x352 = INT64_MAX;
	static volatile int64_t t87 = -1855347LL;

	t87 = (((x349&x350)|x351)&x352);

	if (t87 != 44875LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = UINT16_MAX;
	static volatile int32_t x354 = -4034295;
	int32_t x355 = INT32_MIN;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (((x353&x354)|x355)&x356);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = INT8_MIN;
	int32_t x358 = -97;
	uint16_t x359 = 217U;
	int64_t x360 = INT64_MIN;
	volatile int64_t t89 = INT64_MIN;

	t89 = (((x357&x358)|x359)&x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 1358488U;
	static volatile uint64_t x362 = UINT64_MAX;
	static int32_t x363 = 40875;
	int16_t x364 = 1;
	static volatile uint64_t t90 = 730123477LLU;

	t90 = (((x361&x362)|x363)&x364);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x366 = 33666868U;
	uint16_t x368 = 1330U;
	volatile int64_t t91 = -124306LL;

	t91 = (((x365&x366)|x367)&x368);

	if (t91 != 1328LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x369 = 1U;
	volatile uint16_t x370 = 35U;
	int8_t x371 = -1;
	int8_t x372 = 0;
	int32_t t92 = 117;

	t92 = (((x369&x370)|x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 0U;
	int64_t x376 = 1LL;
	static int64_t t93 = -356LL;

	t93 = (((x373&x374)|x375)&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	static uint64_t x378 = UINT64_MAX;
	volatile int16_t x380 = -2708;
	uint64_t t94 = 20619407LLU;

	t94 = (((x377&x378)|x379)&x380);

	if (t94 != 9223372036854773100LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 0U;
	int16_t x382 = -45;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = INT32_MIN;

	t95 = (((x381&x382)|x383)&x384);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x386 = 51U;
	int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t96 = INT64_MIN;

	t96 = (((x385&x386)|x387)&x388);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	static int32_t x390 = -166;
	uint16_t x391 = 235U;
	volatile int64_t t97 = 13823LL;

	t97 = (((x389&x390)|x391)&x392);

	if (t97 != 107LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	static int8_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	static volatile int64_t x396 = -1LL;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (((x393&x394)|x395)&x396);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1488;
	static int64_t x398 = -3761663158LL;
	int8_t x399 = 1;
	int64_t x400 = INT64_MAX;
	static volatile int64_t t99 = -949359831935LL;

	t99 = (((x397&x398)|x399)&x400);

	if (t99 != 9223372033093112321LL) { NG(); } else { ; }
	
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

