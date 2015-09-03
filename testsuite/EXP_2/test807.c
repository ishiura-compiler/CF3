#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = INT16_MAX;
int64_t x7 = INT64_MIN;
int16_t x12 = INT16_MIN;
int64_t x16 = INT64_MIN;
int16_t x19 = -3594;
int32_t x21 = INT32_MAX;
int16_t x23 = -8188;
int16_t x24 = -6546;
volatile int64_t t5 = 30129LL;
uint16_t x26 = 230U;
int64_t x29 = -1LL;
int64_t x30 = 4LL;
volatile int8_t x32 = INT8_MIN;
uint32_t x33 = UINT32_MAX;
static volatile int64_t t8 = 992093564159LL;
static int16_t x42 = INT16_MIN;
volatile int32_t x45 = 82;
volatile int32_t x46 = INT32_MIN;
int16_t x50 = -2134;
uint64_t x54 = UINT64_MAX;
static uint64_t t13 = UINT64_MAX;
static int64_t t16 = -1LL;
static int16_t x76 = -32;
static uint64_t t17 = 364869LLU;
volatile int32_t x87 = -112912834;
uint64_t x90 = 771021117792056733LLU;
static uint64_t t21 = UINT64_MAX;
int8_t x95 = INT8_MAX;
uint64_t x100 = 73312566LLU;
volatile uint64_t t23 = 105037188028086LLU;
int64_t x104 = INT64_MIN;
volatile uint8_t x106 = 1U;
int8_t x107 = INT8_MAX;
uint64_t t27 = 261348819245609LLU;
int16_t x127 = INT16_MIN;
volatile int32_t x128 = INT32_MIN;
volatile int32_t t30 = 1671;
volatile uint64_t t31 = 702444LLU;
volatile uint32_t x134 = 11U;
int8_t x135 = -10;
uint32_t t32 = 51880U;
int8_t x143 = INT8_MIN;
static int32_t x148 = INT32_MIN;
uint64_t x149 = 430596288LLU;
int32_t x156 = -1;
volatile int16_t x158 = 4684;
int32_t x160 = -1;
uint64_t x161 = 14871497710181369LLU;
volatile int16_t x164 = INT16_MAX;
uint64_t t38 = 1130137LLU;
uint16_t x168 = UINT16_MAX;
volatile int64_t t39 = 14776LL;
uint64_t x170 = 0LLU;
volatile int16_t x172 = -1;
int16_t x176 = INT16_MIN;
volatile uint64_t t41 = 109070867421043LLU;
int64_t t42 = INT64_MIN;
int16_t x182 = INT16_MIN;
uint8_t x186 = 7U;
int64_t t47 = -12554993202830LL;
uint32_t x208 = 97809U;
int64_t x209 = INT64_MIN;
uint8_t x211 = 34U;
int8_t x212 = INT8_MAX;
static volatile int64_t t49 = 60195992460LL;
uint8_t x216 = 30U;
int32_t x220 = INT32_MAX;
volatile int64_t x233 = INT64_MAX;
int8_t x235 = INT8_MIN;
volatile uint8_t x238 = 26U;
static int8_t x275 = 13;
int32_t x278 = 1;
int16_t x281 = INT16_MAX;
int16_t x284 = -1;
static int64_t x288 = -1LL;
volatile int8_t x290 = 0;
static int64_t x292 = -1LL;
volatile uint64_t t71 = 70157942LLU;
uint64_t x312 = UINT64_MAX;
static uint64_t t74 = 465694LLU;
int32_t x313 = -1;
volatile int8_t x316 = 2;
volatile int64_t t75 = -6929002482172847LL;
int64_t t76 = -41854129490461LL;
int64_t x321 = -1LL;
volatile int32_t x324 = INT32_MIN;
int64_t t78 = -5116884005859LL;
uint32_t x330 = UINT32_MAX;
int32_t x331 = -384;
volatile int64_t x332 = -1LL;
int32_t x335 = -1;
int8_t x338 = 52;
uint8_t x342 = 6U;
int16_t x344 = 1;
int32_t x345 = -1;
static volatile uint64_t t83 = 48825450648390466LLU;
int64_t x367 = INT64_MIN;
uint16_t x368 = 1U;
uint64_t x375 = 23241683LLU;
int16_t x376 = -1;
uint64_t t89 = UINT64_MAX;
uint8_t x379 = 12U;
int64_t x380 = 158LL;
static int8_t x388 = -1;
int64_t x389 = 778868837LL;
int8_t x397 = -1;
int32_t x398 = 0;
uint32_t x399 = 243420U;
static uint32_t t95 = 244U;
static volatile uint16_t x404 = UINT16_MAX;
uint64_t x412 = 81065617915262604LLU;
int16_t x416 = -29;


void f0(void) {
	volatile uint32_t x1 = 16987U;
	uint16_t x2 = 14502U;
	int64_t x3 = -24313652015278LL;
	int64_t t0 = -29635LL;

	t0 = ((x1&(x2%x3))+x4);

	if (t0 != 32769LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2157U;
	static int64_t x6 = -1LL;
	volatile int32_t x8 = INT32_MAX;
	static int64_t t1 = 17926445218520LL;

	t1 = ((x5&(x6%x7))+x8);

	if (t1 != 2147485804LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int16_t x10 = 1;
	static uint64_t x11 = 1841844609222394LLU;
	static uint64_t t2 = 84865259211665LLU;

	t2 = ((x9&(x10%x11))+x12);

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int16_t x14 = -1;
	uint32_t x15 = 4093U;
	volatile int64_t t3 = 2LL;

	t3 = ((x13&(x14%x15))+x16);

	if (t3 != -9223372036854773632LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 70U;
	static uint8_t x18 = UINT8_MAX;
	volatile uint64_t x20 = 17373873052076LLU;
	uint64_t t4 = 117802606515002LLU;

	t4 = ((x17&(x18%x19))+x20);

	if (t4 != 17373873052146LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;

	t5 = ((x21&(x22%x23))+x24);

	if (t5 != 2147476846LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x27 = -121966969529746011LL;
	int8_t x28 = -2;
	volatile int64_t t6 = 990840LL;

	t6 = ((x25&(x26%x27))+x28);

	if (t6 != 126LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MIN;
	int64_t t7 = 58433863LL;

	t7 = ((x29&(x30%x31))+x32);

	if (t7 != -124LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	volatile int32_t x35 = INT32_MIN;
	volatile int32_t x36 = INT32_MAX;

	t8 = ((x33&(x34%x35))+x36);

	if (t8 != 6442450942LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	uint32_t x38 = 62476914U;
	int64_t x39 = -1LL;
	static volatile int32_t x40 = INT32_MAX;
	volatile int64_t t9 = 7465565845240866LL;

	t9 = ((x37&(x38%x39))+x40);

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile int32_t x43 = INT32_MAX;
	static uint16_t x44 = 17098U;
	int32_t t10 = -23971;

	t10 = ((x41&(x42%x43))+x44);

	if (t10 != -15670) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x47 = -1;
	uint64_t x48 = 92164857648632LLU;
	volatile uint64_t t11 = 0LLU;

	t11 = ((x45&(x46%x47))+x48);

	if (t11 != 92164857648632LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 2949133842584531LLU;
	int8_t x51 = 24;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 26LLU;

	t12 = ((x49&(x50%x51))+x52);

	if (t12 != 9226321170697360322LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	volatile int32_t x55 = INT32_MAX;
	int8_t x56 = -1;

	t13 = ((x53&(x54%x55))+x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 101650U;
	int8_t x58 = 7;
	volatile int8_t x59 = INT8_MAX;
	int16_t x60 = INT16_MAX;
	volatile uint32_t t14 = 15U;

	t14 = ((x57&(x58%x59))+x60);

	if (t14 != 32769U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = 95329;
	int8_t x63 = INT8_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t15 = INT32_MIN;

	t15 = ((x61&(x62%x63))+x64);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = INT64_MIN;
	int32_t x68 = -1;

	t16 = ((x65&(x66%x67))+x68);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x73 = 14LL;
	int8_t x74 = 0;
	volatile uint64_t x75 = UINT64_MAX;

	t17 = ((x73&(x74%x75))+x76);

	if (t17 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 31563LLU;
	int16_t x78 = -1;
	static volatile int8_t x79 = INT8_MIN;
	int64_t x80 = -637LL;
	uint64_t t18 = 192LLU;

	t18 = ((x77&(x78%x79))+x80);

	if (t18 != 30926LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = INT16_MAX;
	volatile int8_t x82 = -39;
	uint64_t x83 = 600247409424LLU;
	int64_t x84 = INT64_MAX;
	uint64_t t19 = 31746784LLU;

	t19 = ((x81&(x82%x83))+x84);

	if (t19 != 9223372036854802696LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -149;
	volatile int8_t x86 = 1;
	uint8_t x88 = 23U;
	int32_t t20 = 59;

	t20 = ((x85&(x86%x87))+x88);

	if (t20 != 24) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	int16_t x91 = INT16_MAX;
	int64_t x92 = -1LL;

	t21 = ((x89&(x90%x91))+x92);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x93 = 40U;
	uint32_t x94 = UINT32_MAX;
	static int16_t x96 = 375;
	volatile uint32_t t22 = 784632805U;

	t22 = ((x93&(x94%x95))+x96);

	if (t22 != 383U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = -1;
	uint8_t x98 = 11U;
	int64_t x99 = INT64_MIN;

	t23 = ((x97&(x98%x99))+x100);

	if (t23 != 73312577LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = 1085;
	int64_t x102 = 134049786072991LL;
	static volatile uint8_t x103 = 14U;
	int64_t t24 = 3273815313LL;

	t24 = ((x101&(x102%x103))+x104);

	if (t24 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = UINT16_MAX;
	uint16_t x108 = 12126U;
	volatile int32_t t25 = 0;

	t25 = ((x105&(x106%x107))+x108);

	if (t25 != 12127) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	static int64_t x110 = -1LL;
	int64_t x111 = 2651LL;
	int16_t x112 = -1;
	volatile int64_t t26 = 846083995145187LL;

	t26 = ((x109&(x110%x111))+x112);

	if (t26 != 65534LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x113 = 11518U;
	static uint64_t x114 = 11604412233023546LLU;
	static volatile uint8_t x115 = 15U;
	static uint64_t x116 = 8473315608LLU;

	t27 = ((x113&(x114%x115))+x116);

	if (t27 != 8473315618LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x117 = INT64_MIN;
	uint8_t x118 = 0U;
	int32_t x119 = -27901627;
	uint64_t x120 = 37177235294LLU;
	volatile uint64_t t28 = 130777LLU;

	t28 = ((x117&(x118%x119))+x120);

	if (t28 != 37177235294LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 3621163737LLU;
	int8_t x122 = INT8_MAX;
	volatile int64_t x123 = INT64_MIN;
	uint64_t x124 = 5300LLU;
	volatile uint64_t t29 = 47051535525170018LLU;

	t29 = ((x121&(x122%x123))+x124);

	if (t29 != 5389LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -326;
	uint8_t x126 = UINT8_MAX;

	t30 = ((x125&(x126%x127))+x128);

	if (t30 != -2147483462) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x129 = UINT64_MAX;
	int8_t x130 = INT8_MIN;
	static int8_t x131 = -1;
	volatile int64_t x132 = 20LL;

	t31 = ((x129&(x130%x131))+x132);

	if (t31 != 20LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = -1;
	int8_t x136 = INT8_MIN;

	t32 = ((x133&(x134%x135))+x136);

	if (t32 != 4294967179U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 12958950428126LLU;
	static int16_t x142 = 45;
	static volatile int16_t x144 = INT16_MAX;
	volatile uint64_t t33 = 116LLU;

	t33 = ((x141&(x142%x143))+x144);

	if (t33 != 32779LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -1;
	int64_t x146 = -791873442LL;
	int32_t x147 = INT32_MIN;
	static int64_t t34 = 70644821944017108LL;

	t34 = ((x145&(x146%x147))+x148);

	if (t34 != -2939357090LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	volatile uint16_t x152 = 5007U;
	uint64_t t35 = 43LLU;

	t35 = ((x149&(x150%x151))+x152);

	if (t35 != 430576527LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile int32_t x155 = 294273;
	static int32_t t36 = 7714;

	t36 = ((x153&(x154%x155))+x156);

	if (t36 != 126) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x157 = 119U;
	int64_t x159 = INT64_MIN;
	int64_t t37 = 4012LL;

	t37 = ((x157&(x158%x159))+x160);

	if (t37 != 67LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x162 = UINT32_MAX;
	static int64_t x163 = INT64_MAX;

	t38 = ((x161&(x162%x163))+x164);

	if (t38 != 1649122296LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -6635581LL;
	int8_t x166 = -8;
	int16_t x167 = INT16_MAX;

	t39 = ((x165&(x166%x167))+x168);

	if (t39 != -6570049LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -8;
	volatile uint8_t x171 = UINT8_MAX;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = ((x169&(x170%x171))+x172);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x173 = 1143LLU;
	uint8_t x174 = UINT8_MAX;
	int8_t x175 = INT8_MIN;

	t41 = ((x173&(x174%x175))+x176);

	if (t41 != 18446744073709518967LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x177 = INT32_MIN;
	uint8_t x178 = 6U;
	uint16_t x179 = 559U;
	int64_t x180 = INT64_MIN;

	t42 = ((x177&(x178%x179))+x180);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = -1;
	volatile int8_t x183 = INT8_MIN;
	int32_t x184 = -1;
	static int32_t t43 = 18251089;

	t43 = ((x181&(x182%x183))+x184);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	volatile int8_t x187 = 2;
	uint16_t x188 = 1U;
	int32_t t44 = 124;

	t44 = ((x185&(x186%x187))+x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -1;
	uint32_t x190 = 3625U;
	static int64_t x191 = 643209373305042182LL;
	static uint64_t x192 = 27868359673LLU;
	static volatile uint64_t t45 = 1599259LLU;

	t45 = ((x189&(x190%x191))+x192);

	if (t45 != 27868363298LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -1;
	volatile uint64_t x194 = UINT64_MAX;
	int64_t x195 = -1LL;
	volatile int32_t x196 = -1;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x193&(x194%x195))+x196);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MAX;
	int8_t x198 = INT8_MAX;
	int32_t x199 = INT32_MAX;
	volatile int8_t x200 = 0;

	t47 = ((x197&(x198%x199))+x200);

	if (t47 != 127LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -10;
	int8_t x206 = INT8_MIN;
	uint64_t x207 = 4792103134946441544LLU;
	uint64_t t48 = 183363662608131792LLU;

	t48 = ((x205&(x206%x207))+x208);

	if (t48 != 4070434668870324657LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x210 = 241988720;

	t49 = ((x209&(x210%x211))+x212);

	if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x213 = 3980598192651LLU;
	int8_t x214 = 1;
	static uint32_t x215 = 327618U;
	volatile uint64_t t50 = 4LLU;

	t50 = ((x213&(x214%x215))+x216);

	if (t50 != 31LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = 2415334535579LLU;
	int64_t x218 = INT64_MAX;
	volatile uint32_t x219 = 2918U;
	volatile uint64_t t51 = 426241498453993494LLU;

	t51 = ((x217&(x218%x219))+x220);

	if (t51 != 2147483794LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x221 = INT16_MIN;
	uint32_t x222 = 638255U;
	uint64_t x223 = 2762827795LLU;
	uint8_t x224 = 59U;
	uint64_t t52 = 1734911768LLU;

	t52 = ((x221&(x222%x223))+x224);

	if (t52 != 622651LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = UINT8_MAX;
	int32_t x226 = -1;
	volatile int64_t x227 = INT64_MIN;
	uint8_t x228 = 1U;
	static int64_t t53 = -32409224846984089LL;

	t53 = ((x225&(x226%x227))+x228);

	if (t53 != 256LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x229 = 8294LLU;
	int32_t x230 = -6203437;
	int32_t x231 = INT32_MIN;
	int16_t x232 = -1;
	volatile uint64_t t54 = 422720677LLU;

	t54 = ((x229&(x230%x231))+x232);

	if (t54 != 65LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x234 = 20U;
	uint16_t x236 = 3U;
	int64_t t55 = -5373437854LL;

	t55 = ((x233&(x234%x235))+x236);

	if (t55 != 23LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	int64_t x239 = 4036549975967LL;
	int64_t x240 = 1441258935696981LL;
	static volatile int64_t t56 = -40743471168LL;

	t56 = ((x237&(x238%x239))+x240);

	if (t56 != 1441258935697007LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x241 = INT8_MIN;
	static int64_t x242 = 33107956458LL;
	volatile int8_t x243 = INT8_MIN;
	uint8_t x244 = UINT8_MAX;
	int64_t t57 = -231211276828284003LL;

	t57 = ((x241&(x242%x243))+x244);

	if (t57 != 255LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = -63;
	volatile int8_t x246 = INT8_MIN;
	volatile int16_t x247 = INT16_MIN;
	int32_t x248 = 44075051;
	int32_t t58 = -8327;

	t58 = ((x245&(x246%x247))+x248);

	if (t58 != 44074923) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x249 = 8U;
	int8_t x250 = INT8_MIN;
	int32_t x251 = 90369;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t59 = INT32_MIN;

	t59 = ((x249&(x250%x251))+x252);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 838U;
	uint16_t x254 = 2334U;
	static volatile int32_t x255 = INT32_MAX;
	int32_t x256 = 5;
	volatile int32_t t60 = -1;

	t60 = ((x253&(x254%x255))+x256);

	if (t60 != 267) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 3U;
	static int16_t x258 = 6583;
	static int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t61 = 18364;

	t61 = ((x257&(x258%x259))+x260);

	if (t61 != -125) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 19;
	int64_t x262 = -1LL;
	int16_t x263 = INT16_MAX;
	static int64_t x264 = -1LL;
	volatile int64_t t62 = -15546898084LL;

	t62 = ((x261&(x262%x263))+x264);

	if (t62 != 18LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -2330;
	int8_t x266 = -31;
	int16_t x267 = -1;
	int8_t x268 = -1;
	volatile int32_t t63 = 53410824;

	t63 = ((x265&(x266%x267))+x268);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = 7;
	uint32_t x270 = 1U;
	int64_t x271 = -1LL;
	int16_t x272 = INT16_MIN;
	int64_t t64 = 11626LL;

	t64 = ((x269&(x270%x271))+x272);

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = -4909523;
	static volatile uint32_t x274 = 7U;
	static volatile uint64_t x276 = UINT64_MAX;
	volatile uint64_t t65 = 60703423231317LLU;

	t65 = ((x273&(x274%x275))+x276);

	if (t65 != 4LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x277 = UINT8_MAX;
	static int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MAX;
	int32_t t66 = -1;

	t66 = ((x277&(x278%x279))+x280);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x282 = 8150489U;
	int8_t x283 = INT8_MIN;
	static volatile uint32_t t67 = 690533U;

	t67 = ((x281&(x282%x283))+x284);

	if (t67 != 24024U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x285 = 24056292;
	volatile uint64_t x286 = UINT64_MAX;
	int16_t x287 = INT16_MIN;
	static uint64_t t68 = 769LLU;

	t68 = ((x285&(x286%x287))+x288);

	if (t68 != 4579LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x289 = INT8_MIN;
	uint8_t x291 = UINT8_MAX;
	int64_t t69 = 462811927011999LL;

	t69 = ((x289&(x290%x291))+x292);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = -7010853;
	int16_t x294 = -1;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = 1903U;
	uint32_t t70 = 459090U;

	t70 = ((x293&(x294%x295))+x296);

	if (t70 != 4287958346U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = 278314859429LL;
	int32_t x298 = INT32_MAX;
	volatile uint64_t x299 = 5852727971298780LLU;
	static volatile int64_t x300 = INT64_MAX;

	t71 = ((x297&(x298%x299))+x300);

	if (t71 != 9223372038144244644LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 40091U;
	int16_t x302 = INT16_MAX;
	int8_t x303 = INT8_MAX;
	int8_t x304 = 6;
	uint32_t t72 = 326U;

	t72 = ((x301&(x302%x303))+x304);

	if (t72 != 7U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MIN;
	int64_t x306 = -1LL;
	static int32_t x307 = -1;
	static int8_t x308 = INT8_MAX;
	int64_t t73 = 0LL;

	t73 = ((x305&(x306%x307))+x308);

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x309 = UINT32_MAX;
	int16_t x310 = -612;
	int64_t x311 = INT64_MAX;

	t74 = ((x309&(x310%x311))+x312);

	if (t74 != 4294966683LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x314 = 13093227LL;
	static int8_t x315 = 5;

	t75 = ((x313&(x314%x315))+x316);

	if (t75 != 4LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MAX;
	uint16_t x318 = UINT16_MAX;
	int32_t x319 = 15574;
	uint16_t x320 = UINT16_MAX;

	t76 = ((x317&(x318%x319))+x320);

	if (t76 != 68774LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x322 = 5654731044529LLU;
	int16_t x323 = -1713;
	volatile uint64_t t77 = 3589626LLU;

	t77 = ((x321&(x322%x323))+x324);

	if (t77 != 5652583560881LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x325 = INT16_MIN;
	static int16_t x326 = INT16_MIN;
	int64_t x327 = 70017336898333349LL;
	static uint8_t x328 = 0U;

	t78 = ((x325&(x326%x327))+x328);

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -26073786;
	static volatile int64_t t79 = 35074900936850274LL;

	t79 = ((x329&(x330%x331))+x332);

	if (t79 != 325LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	uint32_t x334 = UINT32_MAX;
	int16_t x336 = INT16_MIN;
	int64_t t80 = -310670LL;

	t80 = ((x333&(x334%x335))+x336);

	if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int64_t x339 = INT64_MAX;
	static int64_t x340 = INT64_MAX;
	volatile uint64_t t81 = 3143LLU;

	t81 = ((x337&(x338%x339))+x340);

	if (t81 != 9223372036854775859LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x341 = 28U;
	int16_t x343 = INT16_MIN;
	int32_t t82 = -38;

	t82 = ((x341&(x342%x343))+x344);

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x346 = 70345U;
	int16_t x347 = INT16_MAX;
	volatile uint64_t x348 = UINT64_MAX;

	t83 = ((x345&(x346%x347))+x348);

	if (t83 != 4810LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -7809;
	static uint8_t x350 = UINT8_MAX;
	static int32_t x351 = INT32_MIN;
	volatile uint32_t x352 = 730194U;
	static uint32_t t84 = 22291U;

	t84 = ((x349&(x350%x351))+x352);

	if (t84 != 730321U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MAX;
	static int64_t x354 = -2936974622LL;
	uint8_t x355 = 19U;
	int64_t x356 = INT64_MIN;
	int64_t t85 = 17903462LL;

	t85 = ((x353&(x354%x355))+x356);

	if (t85 != -9223372034707292173LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = 18718273LLU;
	int16_t x358 = 15723;
	uint16_t x359 = 7U;
	static int16_t x360 = -15;
	static volatile uint64_t t86 = 117017LLU;

	t86 = ((x357&(x358%x359))+x360);

	if (t86 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	volatile uint16_t x362 = 4168U;
	static int8_t x363 = -1;
	static uint8_t x364 = UINT8_MAX;
	int32_t t87 = -4186342;

	t87 = ((x361&(x362%x363))+x364);

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = UINT8_MAX;
	uint32_t x366 = 126U;
	volatile int64_t t88 = 12302145LL;

	t88 = ((x365&(x366%x367))+x368);

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = 1;

	t89 = ((x373&(x374%x375))+x376);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MAX;
	static volatile uint32_t x378 = UINT32_MAX;
	volatile int64_t t90 = -4175348889651207LL;

	t90 = ((x377&(x378%x379))+x380);

	if (t90 != 161LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x381 = INT64_MIN;
	static uint64_t x382 = 0LLU;
	int32_t x383 = INT32_MIN;
	int64_t x384 = -1LL;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = ((x381&(x382%x383))+x384);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x385 = 9U;
	int8_t x386 = 1;
	int16_t x387 = INT16_MIN;
	int32_t t92 = 5192;

	t92 = ((x385&(x386%x387))+x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x390 = INT32_MIN;
	uint8_t x391 = UINT8_MAX;
	uint16_t x392 = 7U;
	int64_t t93 = -17251LL;

	t93 = ((x389&(x390%x391))+x392);

	if (t93 != 778868743LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = 43700161366617LL;
	int16_t x394 = 1;
	int8_t x395 = 49;
	static int64_t x396 = -1127373250943695770LL;
	int64_t t94 = -4040371403LL;

	t94 = ((x393&(x394%x395))+x396);

	if (t94 != -1127373250943695769LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x400 = INT8_MIN;

	t95 = ((x397&(x398%x399))+x400);

	if (t95 != 4294967168U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x401 = INT8_MIN;
	static int8_t x402 = 1;
	int8_t x403 = INT8_MAX;
	int32_t t96 = 16179762;

	t96 = ((x401&(x402%x403))+x404);

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = INT64_MAX;
	volatile int32_t x406 = 1817450;
	int8_t x407 = 8;
	static int32_t x408 = INT32_MIN;
	int64_t t97 = -12848731LL;

	t97 = ((x405&(x406%x407))+x408);

	if (t97 != -2147483646LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x409 = INT16_MIN;
	static int16_t x410 = INT16_MIN;
	static uint64_t x411 = UINT64_MAX;
	uint64_t t98 = 216950LLU;

	t98 = ((x409&(x410%x411))+x412);

	if (t98 != 81065617915229836LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = -1LL;
	volatile uint32_t x414 = 8U;
	int64_t x415 = INT64_MIN;
	volatile int64_t t99 = -19LL;

	t99 = ((x413&(x414%x415))+x416);

	if (t99 != -21LL) { NG(); } else { ; }
	
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

