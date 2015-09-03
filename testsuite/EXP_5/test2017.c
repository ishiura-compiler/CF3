#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 3U;
volatile int16_t x8 = INT16_MIN;
uint64_t t1 = 227958200747262442LLU;
uint64_t x9 = UINT64_MAX;
uint64_t x12 = 15838921LLU;
volatile uint64_t t3 = 11680LLU;
volatile int64_t x17 = INT64_MAX;
volatile uint8_t x28 = UINT8_MAX;
int32_t t6 = 3668719;
volatile int64_t x41 = INT64_MIN;
uint64_t x42 = UINT64_MAX;
volatile uint64_t t10 = 96463508185279LLU;
int64_t x52 = INT64_MIN;
int32_t x54 = INT32_MIN;
int16_t x61 = -1;
uint64_t x64 = 24662LLU;
static uint64_t t15 = 475710911846LLU;
volatile int64_t t16 = 7478349779130508LL;
uint16_t x84 = UINT16_MAX;
uint64_t x87 = UINT64_MAX;
int8_t x88 = INT8_MAX;
uint64_t t20 = 579337821LLU;
int64_t x90 = INT64_MAX;
int32_t x94 = -1;
volatile int8_t x96 = INT8_MIN;
static uint16_t x99 = 11U;
uint32_t x102 = UINT32_MAX;
int8_t x103 = INT8_MAX;
int8_t x104 = -11;
static int64_t x105 = INT64_MIN;
int8_t x106 = INT8_MIN;
static int8_t x118 = -1;
int8_t x129 = INT8_MIN;
int64_t x133 = 59LL;
volatile int64_t x138 = -53596LL;
volatile int64_t t32 = 49904047612LL;
uint32_t x141 = UINT32_MAX;
static volatile uint64_t x143 = 57152567665LLU;
static volatile int8_t x146 = INT8_MIN;
int16_t x148 = INT16_MIN;
int64_t x150 = INT64_MIN;
int64_t x156 = 2723354LL;
static uint64_t t36 = 15472847705371812LLU;
volatile int32_t x160 = -1630849;
volatile uint32_t t38 = 58124U;
static volatile int64_t t39 = -2730756285762816LL;
uint32_t x171 = 19141199U;
volatile int32_t x174 = -3040;
uint8_t x175 = 0U;
volatile int16_t x176 = -1534;
int16_t x184 = INT16_MIN;
int64_t t44 = -293433434638LL;
int32_t x195 = INT32_MIN;
int16_t x196 = INT16_MIN;
int16_t x197 = -1;
int8_t x205 = INT8_MIN;
volatile int32_t t49 = 647872367;
uint16_t x214 = 66U;
volatile int8_t x215 = -1;
volatile int64_t t52 = -34199646LL;
int32_t x225 = INT32_MIN;
int64_t t54 = 1LL;
int8_t x235 = INT8_MAX;
int16_t x236 = 27;
int8_t x243 = -1;
volatile int64_t t57 = 1823745883LL;
int64_t x251 = INT64_MAX;
static int64_t x252 = INT64_MAX;
uint64_t t59 = 4064LLU;
uint16_t x254 = UINT16_MAX;
int32_t x261 = INT32_MIN;
uint32_t x267 = UINT32_MAX;
int64_t x268 = INT64_MIN;
int32_t x274 = INT32_MIN;
volatile int8_t x282 = INT8_MIN;
static int32_t x293 = INT32_MIN;
int32_t x295 = INT32_MIN;
int16_t x297 = -67;
int8_t x312 = -1;
uint32_t x317 = UINT32_MAX;
volatile int16_t x331 = -1;
int8_t x334 = 1;
uint32_t t78 = 7258392U;
static uint64_t t79 = 3596541384123235114LLU;
static int64_t t80 = -36LL;
uint32_t x350 = 2420U;
static uint8_t x351 = UINT8_MAX;
int16_t x352 = INT16_MIN;
uint32_t t81 = 1994241020U;
uint16_t x353 = 1435U;
int8_t x356 = 1;
volatile int32_t t84 = 132317266;
static int32_t x368 = 12342;
int64_t t85 = 311876755LL;
static int32_t t86 = 42272;
uint64_t x374 = UINT64_MAX;
int8_t x377 = INT8_MAX;
uint16_t x383 = 16U;
int32_t t89 = 143050202;
static int8_t x388 = INT8_MIN;
uint64_t t90 = 188489LLU;
uint16_t x389 = 1U;
int8_t x390 = 29;
volatile int64_t x391 = 73519422LL;
int64_t t91 = 11171LL;
int8_t x393 = INT8_MIN;
int32_t x400 = -1;
int32_t x401 = -1;
static volatile int8_t x404 = INT8_MIN;
static volatile int32_t x408 = -1736743;
uint64_t x410 = 267845016620412556LLU;
int16_t x413 = 9988;
volatile int64_t x414 = -1LL;
uint16_t x415 = 1U;
int32_t x424 = -71;


void f0(void) {
	int8_t x2 = INT8_MIN;
	static uint8_t x3 = 38U;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -28;

	t0 = (x1-((x2|x3)^x4));

	if (t0 != -2147483555) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 11472194894720LLU;
	int64_t x6 = INT64_MIN;
	uint16_t x7 = 0U;

	t1 = (x5-((x6|x7)^x8));

	if (t1 != 9223383509049703296LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	uint64_t x11 = 28310968907LLU;
	volatile uint64_t t2 = 1089524434538300283LLU;

	t2 = (x9-((x10|x11)^x12));

	if (t2 != 15846269LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 3U;
	static int64_t x14 = 16LL;
	static uint64_t x15 = UINT64_MAX;
	volatile uint16_t x16 = 3973U;

	t3 = (x13-((x14|x15)^x16));

	if (t3 != 3977LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = INT64_MIN;
	volatile int16_t x19 = -1;
	int16_t x20 = INT16_MIN;
	int64_t t4 = 1LL;

	t4 = (x17-((x18|x19)^x20));

	if (t4 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 0U;
	static volatile int16_t x22 = -1;
	int64_t x23 = -1LL;
	static int8_t x24 = INT8_MIN;
	int64_t t5 = 334876952672LL;

	t5 = (x21-((x22|x23)^x24));

	if (t5 != -127LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;

	t6 = (x25-((x26|x27)^x28));

	if (t6 != 32512) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	uint8_t x30 = UINT8_MAX;
	volatile int64_t x31 = -1979889LL;
	static uint8_t x32 = 2U;
	uint64_t t7 = 59702022465LLU;

	t7 = (x29-((x30|x31)^x32));

	if (t7 != 1979650LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	uint32_t x39 = 581U;
	int8_t x40 = INT8_MIN;
	volatile uint32_t t8 = 469677U;

	t8 = (x37-((x38|x39)^x40));

	if (t8 != 4294934459U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x43 = -1LL;
	volatile int16_t x44 = INT16_MAX;
	uint64_t t9 = 54777719970506331LLU;

	t9 = (x41-((x42|x43)^x44));

	if (t9 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = UINT64_MAX;
	static uint32_t x46 = 1064406922U;
	int64_t x47 = INT64_MIN;
	static int64_t x48 = 2939233674305361118LL;

	t10 = (x45-((x46|x47)^x48));

	if (t10 != 6284138363508761771LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x49 = 64663281U;
	volatile int32_t x50 = INT32_MAX;
	uint16_t x51 = 50U;
	static volatile int64_t t11 = 232LL;

	t11 = (x49-((x50|x51)^x52));

	if (t11 != 9223372034771955442LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 94425LL;
	uint32_t x55 = 1U;
	static int32_t x56 = INT32_MIN;
	volatile int64_t t12 = -8682890605053LL;

	t12 = (x53-((x54|x55)^x56));

	if (t12 != 94424LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	static int16_t x58 = 22;
	int32_t x59 = -55558;
	static volatile int16_t x60 = -1;
	static int32_t t13 = -75;

	t13 = (x57-((x58|x59)^x60));

	if (t13 != -88321) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x62 = -1LL;
	int8_t x63 = INT8_MIN;
	static uint64_t t14 = 117471LLU;

	t14 = (x61-((x62|x63)^x64));

	if (t14 != 24662LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = UINT64_MAX;
	int16_t x66 = -1;
	volatile uint8_t x67 = UINT8_MAX;
	int16_t x68 = -12;

	t15 = (x65-((x66|x67)^x68));

	if (t15 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MIN;
	static uint8_t x71 = 0U;
	static uint8_t x72 = 3U;

	t16 = (x69-((x70|x71)^x72));

	if (t16 != 9223372036854743037LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 648672414U;
	uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MAX;
	static uint16_t x76 = 4U;
	int64_t t17 = -6626824LL;

	t17 = (x73-((x74|x75)^x76));

	if (t17 != -9223372036206103389LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MAX;
	uint32_t x78 = UINT32_MAX;
	volatile uint64_t x79 = UINT64_MAX;
	volatile uint64_t x80 = 1715726568LLU;
	uint64_t t18 = 0LLU;

	t18 = (x77-((x78|x79)^x80));

	if (t18 != 1715759336LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	uint8_t x82 = UINT8_MAX;
	static uint16_t x83 = 15351U;
	int64_t t19 = 8024333856LL;

	t19 = (x81-((x82|x83)^x84));

	if (t19 != -50177LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	uint64_t x86 = UINT64_MAX;

	t20 = (x85-((x86|x87)^x88));

	if (t20 != 32895LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -12;
	volatile uint16_t x91 = 7489U;
	static volatile int32_t x92 = INT32_MIN;
	static int64_t t21 = -457LL;

	t21 = (x89-((x90|x91)^x92));

	if (t21 != 9223372034707292149LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x93 = -6;
	static int8_t x95 = INT8_MIN;
	static volatile int32_t t22 = -109;

	t22 = (x93-((x94|x95)^x96));

	if (t22 != -133) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -61415;
	volatile int16_t x98 = INT16_MIN;
	volatile int8_t x100 = INT8_MAX;
	int32_t t23 = 21;

	t23 = (x97-((x98|x99)^x100));

	if (t23 != -28763) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	uint32_t t24 = 1566U;

	t24 = (x101-((x102|x103)^x104));

	if (t24 != 4294967158U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x107 = -4;
	static volatile int32_t x108 = INT32_MAX;
	volatile int64_t t25 = 6520087LL;

	t25 = (x105-((x106|x107)^x108));

	if (t25 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x113 = INT64_MIN;
	uint16_t x114 = 120U;
	int32_t x115 = 13;
	int64_t x116 = -1LL;
	volatile int64_t t26 = 258482472LL;

	t26 = (x113-((x114|x115)^x116));

	if (t26 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 81U;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = -1;
	int32_t t27 = 1;

	t27 = (x117-((x118|x119)^x120));

	if (t27 != 81) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	volatile uint8_t x122 = UINT8_MAX;
	static volatile uint64_t x123 = 1983972145LLU;
	int32_t x124 = INT32_MIN;
	uint64_t t28 = 428313126LLU;

	t28 = (x121-((x122|x123)^x124));

	if (t28 != 163511169LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = -1;
	int64_t x127 = 15872LL;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t29 = 422527499608018676LLU;

	t29 = (x125-((x126|x127)^x128));

	if (t29 != 255LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x130 = 19U;
	volatile int8_t x131 = -1;
	uint64_t x132 = UINT64_MAX;
	uint64_t t30 = 7698537LLU;

	t30 = (x129-((x130|x131)^x132));

	if (t30 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = INT32_MIN;
	static int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;
	int64_t t31 = -7386LL;

	t31 = (x133-((x134|x135)^x136));

	if (t31 != -9223372036854775621LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x137 = 1208647868542952LL;
	int16_t x139 = INT16_MIN;
	static int16_t x140 = INT16_MAX;

	t32 = (x137-((x138|x139)^x140));

	if (t32 != 1208647868554893LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x142 = INT64_MIN;
	int32_t x144 = INT32_MIN;
	uint64_t t33 = 1822253290948LLU;

	t33 = (x141-((x142|x143)^x144));

	if (t33 != 9223372097813808782LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 2U;
	int32_t x147 = INT32_MAX;
	static volatile int32_t t34 = 5259;

	t34 = (x145-((x146|x147)^x148));

	if (t34 != -32765) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 9436LLU;
	static volatile int64_t x151 = -1322137179515LL;
	int16_t x152 = INT16_MIN;
	volatile uint64_t t35 = 2215404074343398376LLU;

	t35 = (x149-((x150|x151)^x152));

	if (t35 != 18446742751572392535LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	uint8_t x154 = 2U;
	static uint64_t x155 = 9194LLU;

	t36 = (x153-((x154|x155)^x156));

	if (t36 != 18446744071559336464LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MAX;
	uint32_t x158 = 333687U;
	int16_t x159 = 16260;
	uint32_t t37 = 223652447U;

	t37 = (x157-((x158|x159)^x160));

	if (t37 != 1957367U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = -49;
	uint32_t x162 = 643U;
	uint8_t x163 = 5U;
	static uint8_t x164 = 9U;

	t38 = (x161-((x162|x163)^x164));

	if (t38 != 4294966593U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -681743042662331996LL;
	static int8_t x166 = INT8_MAX;
	int16_t x167 = -1;
	int64_t x168 = INT64_MAX;

	t39 = (x165-((x166|x167)^x168));

	if (t39 != 8541628994192443812LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = INT32_MIN;
	int8_t x170 = 0;
	uint32_t x172 = 30853U;
	volatile uint32_t t40 = 20U;

	t40 = (x169-((x170|x171)^x172));

	if (t40 != 2128319798U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -1;
	volatile int32_t t41 = -4065110;

	t41 = (x173-((x174|x175)^x176));

	if (t41 != -3619) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 5855U;
	volatile uint64_t x178 = 34638239264993763LLU;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = INT32_MAX;
	uint64_t t42 = 426LLU;

	t42 = (x177-((x178|x179)^x180));

	if (t42 != 18412105832667354847LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MIN;
	int64_t x182 = INT64_MAX;
	int32_t x183 = 180874;
	static int64_t t43 = 845LL;

	t43 = (x181-((x182|x183)^x184));

	if (t43 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x186 = -1LL;
	volatile int64_t x187 = INT64_MIN;
	static uint8_t x188 = 0U;

	t44 = (x185-((x186|x187)^x188));

	if (t44 != 4294967296LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = 1371;
	uint16_t x190 = 163U;
	int64_t x191 = -185LL;
	static uint8_t x192 = 26U;
	volatile int64_t t45 = -1724459LL;

	t45 = (x189-((x190|x191)^x192));

	if (t45 != 1374LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MAX;
	static int32_t x194 = -1;
	volatile int32_t t46 = -9;

	t46 = (x193-((x194|x195)^x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x198 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	static volatile int64_t x200 = 6730LL;
	int64_t t47 = -673981333713781LL;

	t47 = (x197-((x198|x199)^x200));

	if (t47 != 26037LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MAX;
	int64_t x204 = INT64_MIN;
	volatile int64_t t48 = 24410LL;

	t48 = (x201-((x202|x203)^x204));

	if (t48 != -255LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x206 = UINT16_MAX;
	uint16_t x207 = UINT16_MAX;
	uint16_t x208 = UINT16_MAX;

	t49 = (x205-((x206|x207)^x208));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = 329;
	int16_t x216 = INT16_MIN;
	volatile int32_t t50 = 1001674;

	t50 = (x213-((x214|x215)^x216));

	if (t50 != -32438) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x217 = INT16_MIN;
	static volatile int8_t x218 = -49;
	int8_t x219 = INT8_MIN;
	volatile int16_t x220 = -97;
	int32_t t51 = -11093;

	t51 = (x217-((x218|x219)^x220));

	if (t51 != -32848) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MAX;
	int64_t x223 = INT64_MIN;
	int16_t x224 = 13123;

	t52 = (x221-((x222|x223)^x224));

	if (t52 != 9223372036854723396LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x226 = INT64_MIN;
	volatile uint16_t x227 = 215U;
	int64_t x228 = 275869LL;
	static volatile int64_t t53 = -207913143543560LL;

	t53 = (x225-((x226|x227)^x228));

	if (t53 != 9223372034707016374LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	volatile int32_t x230 = INT32_MIN;
	int8_t x231 = 10;
	int64_t x232 = INT64_MAX;

	t54 = (x229-((x230|x231)^x232));

	if (t54 != -2147483637LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = UINT64_MAX;
	volatile int64_t x234 = INT64_MIN;
	uint64_t t55 = 3095843838442LLU;

	t55 = (x233-((x234|x235)^x236));

	if (t55 != 9223372036854775707LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	int16_t x239 = -1;
	int16_t x240 = -1;
	volatile int32_t t56 = 21;

	t56 = (x237-((x238|x239)^x240));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x241 = 1LL;
	int32_t x242 = -107844;
	int32_t x244 = INT32_MIN;

	t57 = (x241-((x242|x243)^x244));

	if (t57 != -2147483646LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x245 = -1LL;
	int8_t x246 = -1;
	uint8_t x247 = 29U;
	static volatile int16_t x248 = INT16_MIN;
	volatile int64_t t58 = 4473899711653353LL;

	t58 = (x245-((x246|x247)^x248));

	if (t58 != -32768LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = UINT64_MAX;
	uint64_t x250 = UINT64_MAX;

	t59 = (x249-((x250|x251)^x252));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = 25U;
	volatile int32_t x255 = -1;
	uint8_t x256 = 5U;
	int32_t t60 = 3286619;

	t60 = (x253-((x254|x255)^x256));

	if (t60 != 31) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 1498326719U;
	uint64_t x258 = 0LLU;
	int16_t x259 = 25;
	volatile uint16_t x260 = 500U;
	volatile uint64_t t61 = 505269996513535LLU;

	t61 = (x257-((x258|x259)^x260));

	if (t61 != 1498326226LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = INT8_MIN;
	static volatile int32_t x263 = -1;
	uint64_t x264 = 5347820418LLU;
	static uint64_t t62 = 961LLU;

	t62 = (x261-((x262|x263)^x264));

	if (t62 != 3200336771LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x265 = 5317455691934844LLU;
	static int32_t x266 = -1;
	static volatile uint64_t t63 = 6344352551177741LLU;

	t63 = (x265-((x266|x267)^x268));

	if (t63 != 9228689488251743357LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 3U;
	int16_t x270 = -1;
	int32_t x271 = INT32_MIN;
	int8_t x272 = -3;
	volatile int32_t t64 = -2441;

	t64 = (x269-((x270|x271)^x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x273 = 2U;
	static volatile int64_t x275 = INT64_MIN;
	volatile int64_t x276 = -68514LL;
	volatile int64_t t65 = 1354990957685613LL;

	t65 = (x273-((x274|x275)^x276));

	if (t65 != -2147415132LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x278 = 13607711868736776LLU;
	int32_t x279 = 0;
	volatile uint16_t x280 = UINT16_MAX;
	uint64_t t66 = 1555LLU;

	t66 = (x277-((x278|x279)^x280));

	if (t66 != 18433136359693309193LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = 82833LL;
	static int8_t x283 = -2;
	uint8_t x284 = 35U;
	static int64_t t67 = 32712LL;

	t67 = (x281-((x282|x283)^x284));

	if (t67 != 82868LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = 21;
	volatile int64_t x290 = INT64_MIN;
	int8_t x291 = INT8_MAX;
	static volatile uint64_t x292 = 66922119045643LLU;
	volatile uint64_t t68 = 833908301852LLU;

	t68 = (x289-((x290|x291)^x292));

	if (t68 != 9223305114735730081LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x294 = UINT32_MAX;
	int64_t x296 = 33514329952838LL;
	int64_t t69 = -385353363LL;

	t69 = (x293-((x294|x295)^x296));

	if (t69 != -33519372119481LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x298 = 0U;
	volatile uint16_t x299 = 9U;
	int64_t x300 = 7060280LL;
	volatile int64_t t70 = -4174LL;

	t70 = (x297-((x298|x299)^x300));

	if (t70 != -7060340LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -96LL;
	uint32_t x306 = 261573563U;
	volatile int64_t x307 = -11460LL;
	int8_t x308 = INT8_MIN;
	static volatile int64_t t71 = 0LL;

	t71 = (x305-((x306|x307)^x308));

	if (t71 != -9375LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x309 = 5336U;
	int8_t x310 = INT8_MIN;
	uint8_t x311 = 14U;
	volatile int32_t t72 = -185337173;

	t72 = (x309-((x310|x311)^x312));

	if (t72 != 5223) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MAX;
	volatile uint8_t x314 = 13U;
	static volatile int16_t x315 = -1;
	int64_t x316 = INT64_MIN;
	volatile int64_t t73 = -3003745143LL;

	t73 = (x313-((x314|x315)^x316));

	if (t73 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x318 = INT64_MAX;
	uint64_t x319 = 168761037590070LLU;
	int16_t x320 = 18;
	static uint64_t t74 = 241870944660LLU;

	t74 = (x317-((x318|x319)^x320));

	if (t74 != 9223372041149743122LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x321 = 1300874813467LLU;
	static uint8_t x322 = UINT8_MAX;
	int32_t x323 = -1;
	uint16_t x324 = UINT16_MAX;
	volatile uint64_t t75 = 2877LLU;

	t75 = (x321-((x322|x323)^x324));

	if (t75 != 1300874879003LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = 13U;
	uint32_t x326 = 6160U;
	static int8_t x327 = INT8_MIN;
	int8_t x328 = 62;
	volatile uint32_t t76 = 1179590596U;

	t76 = (x325-((x326|x327)^x328));

	if (t76 != 95U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 98176340057LLU;
	int64_t x330 = INT64_MIN;
	int16_t x332 = 15;
	uint64_t t77 = 13148583782046176LLU;

	t77 = (x329-((x330|x331)^x332));

	if (t77 != 98176340073LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x333 = INT32_MIN;
	volatile uint32_t x335 = UINT32_MAX;
	uint16_t x336 = 14136U;

	t78 = (x333-((x334|x335)^x336));

	if (t78 != 2147497785U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x337 = INT32_MIN;
	uint8_t x338 = UINT8_MAX;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;

	t79 = (x337-((x338|x339)^x340));

	if (t79 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = 67942573;
	int64_t x342 = -146419608LL;
	int32_t x343 = -1;
	uint8_t x344 = 44U;

	t80 = (x341-((x342|x343)^x344));

	if (t80 != 67942618LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x349 = 2533U;

	t81 = (x349-((x350|x351)^x352));

	if (t81 != 32742U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x354 = 51U;
	volatile uint64_t x355 = 577896953936LLU;
	uint64_t t82 = 881960648LLU;

	t82 = (x353-((x354|x355)^x356));

	if (t82 != 18446743495812599081LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x357 = 62;
	uint16_t x358 = 25519U;
	static int8_t x359 = 31;
	static volatile int8_t x360 = -1;
	int32_t t83 = -91424133;

	t83 = (x357-((x358|x359)^x360));

	if (t83 != 25598) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x361 = INT16_MIN;
	uint16_t x362 = UINT16_MAX;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = INT16_MIN;

	t84 = (x361-((x362|x363)^x364));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = -184LL;
	int64_t x366 = -1LL;
	uint16_t x367 = 2348U;

	t85 = (x365-((x366|x367)^x368));

	if (t85 != 12159LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = -469;
	uint16_t x371 = 1012U;
	int8_t x372 = INT8_MIN;

	t86 = (x369-((x370|x371)^x372));

	if (t86 != 65408) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x373 = 253;
	int8_t x375 = -14;
	static int64_t x376 = -1LL;
	uint64_t t87 = 0LLU;

	t87 = (x373-((x374|x375)^x376));

	if (t87 != 253LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x378 = INT64_MIN;
	volatile uint8_t x379 = UINT8_MAX;
	volatile int32_t x380 = -1;
	volatile int64_t t88 = -26860758480084LL;

	t88 = (x377-((x378|x379)^x380));

	if (t88 != -9223372036854775425LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x381 = -46;
	static int16_t x382 = INT16_MIN;
	volatile int16_t x384 = INT16_MIN;

	t89 = (x381-((x382|x383)^x384));

	if (t89 != -62) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = 1LLU;
	uint16_t x386 = UINT16_MAX;
	volatile uint8_t x387 = UINT8_MAX;

	t90 = (x385-((x386|x387)^x388));

	if (t90 != 65410LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x392 = INT32_MIN;

	t91 = (x389-((x390|x391)^x392));

	if (t91 != 2073964226LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x394 = 3U;
	int32_t x395 = INT32_MIN;
	int16_t x396 = 632;
	volatile int32_t t92 = -183417167;

	t92 = (x393-((x394|x395)^x396));

	if (t92 != 2147482885) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = 243;
	static uint16_t x399 = 21U;
	static volatile int32_t t93 = 22620540;

	t93 = (x397-((x398|x399)^x400));

	if (t93 != 120) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x402 = INT8_MIN;
	volatile uint16_t x403 = 15U;
	int32_t t94 = -2830954;

	t94 = (x401-((x402|x403)^x404));

	if (t94 != -16) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = 99U;
	uint16_t x406 = 0U;
	int8_t x407 = INT8_MAX;
	volatile uint32_t t95 = 3170650U;

	t95 = (x405-((x406|x407)^x408));

	if (t95 != 1736893U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x409 = 14415U;
	int8_t x411 = INT8_MAX;
	uint64_t x412 = 53336612428472LLU;
	uint64_t t96 = 41174534LLU;

	t96 = (x409-((x410|x411)^x412));

	if (t96 != 18178882021691835400LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x416 = INT32_MIN;
	static volatile int64_t t97 = -66851493334463495LL;

	t97 = (x413-((x414|x415)^x416));

	if (t97 != -2147473659LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x417 = 20U;
	int32_t x418 = -1;
	uint64_t x419 = UINT64_MAX;
	uint32_t x420 = 1U;
	static uint64_t t98 = 7551347354529134LLU;

	t98 = (x417-((x418|x419)^x420));

	if (t98 != 22LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x421 = 26;
	int32_t x422 = 1;
	volatile int8_t x423 = 50;
	int32_t t99 = 2780;

	t99 = (x421-((x422|x423)^x424));

	if (t99 != 144) { NG(); } else { ; }
	
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

