#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 483U;
int8_t x5 = INT8_MIN;
uint8_t x6 = 63U;
uint64_t x8 = 89673959517667LLU;
uint8_t x11 = 7U;
static int64_t x18 = INT64_MAX;
volatile int8_t x19 = INT8_MIN;
int32_t x27 = INT32_MAX;
volatile uint8_t x32 = 3U;
uint8_t x33 = 14U;
int64_t x35 = INT64_MIN;
volatile int64_t x41 = -1LL;
int32_t x46 = 338928198;
volatile int32_t x56 = -1;
uint64_t x58 = 4641507LLU;
int32_t x60 = INT32_MIN;
uint32_t x66 = 272381077U;
int16_t x68 = INT16_MIN;
int8_t x71 = INT8_MAX;
int32_t t17 = -491;
int32_t x75 = INT32_MAX;
volatile int32_t x76 = INT32_MIN;
volatile uint32_t x78 = 5633U;
int64_t x82 = -1343302665819LL;
static int64_t x84 = -1LL;
volatile int16_t x95 = -1;
volatile uint32_t t23 = 17U;
int32_t x103 = -28545130;
uint64_t x107 = 1280506012533LLU;
int32_t x108 = INT32_MAX;
int8_t x111 = INT8_MAX;
uint64_t x117 = 2984930616665087121LLU;
int32_t x121 = -1;
volatile int32_t t30 = -1893055;
int64_t x136 = INT64_MIN;
int64_t x137 = -1LL;
static volatile int64_t t33 = 205LL;
volatile int16_t x149 = INT16_MIN;
uint64_t t37 = 108152844611LLU;
volatile uint64_t x165 = UINT64_MAX;
volatile uint32_t x170 = 122278145U;
int64_t x176 = -1867966695024LL;
volatile uint64_t t41 = 616238883LLU;
volatile int16_t x186 = 3;
uint64_t x209 = 163250236638086LLU;
uint64_t x210 = 42092310728366274LLU;
static volatile uint64_t t47 = 1876LLU;
uint8_t x220 = 4U;
volatile int64_t t48 = 6769471682487LL;
int8_t x222 = -4;
static uint32_t t49 = 206629U;
static volatile int16_t x229 = -1;
static volatile int64_t t51 = 13601028727395LL;
int32_t x242 = -1;
uint16_t x252 = UINT16_MAX;
int8_t x254 = -1;
int16_t x257 = 0;
int8_t x261 = 3;
volatile int32_t t58 = 955057;
int64_t t60 = -71005936436515492LL;
uint64_t x275 = 3037429748715641LLU;
uint16_t x278 = UINT16_MAX;
int8_t x291 = -1;
volatile int16_t x295 = INT16_MAX;
int32_t x300 = -1;
volatile uint64_t t68 = 1597740876042LLU;
volatile int16_t x306 = 3;
int32_t x317 = 0;
volatile int64_t x328 = INT64_MIN;
static volatile uint8_t x338 = UINT8_MAX;
uint32_t t77 = 12306748U;
uint16_t x346 = 9U;
int64_t t78 = -24917267825493LL;
int32_t x351 = -1;
int64_t x352 = INT64_MAX;
int64_t x353 = -1LL;
volatile int8_t x355 = -1;
volatile int32_t x378 = INT32_MAX;
int64_t x389 = INT64_MAX;
uint16_t x390 = 30277U;
static int32_t x392 = 1014331;
volatile int64_t x395 = -6466754772388357LL;
uint32_t x401 = 2804665U;
volatile int8_t x404 = 0;
uint32_t t91 = 271533U;
int32_t x407 = INT32_MIN;
uint32_t x410 = 1790692U;
static uint64_t x411 = UINT64_MAX;
uint16_t x416 = 4U;
uint8_t x432 = 2U;
int64_t t98 = 741728879950LL;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int8_t x2 = -1;
	int16_t x3 = -1;
	volatile uint32_t x4 = 815998221U;

	t0 = (((x1-x2)|x3)^x4);

	if (t0 != 3478969074U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 2123049U;
	volatile uint64_t t1 = 32254079LLU;

	t1 = (((x5-x6)|x7)^x8);

	if (t1 != 89670989861514LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = INT16_MAX;
	uint16_t x12 = 11U;
	int32_t t2 = -92;

	t2 = (((x9-x10)|x11)^x12);

	if (t2 != -32628) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 5U;
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = -1;
	static int16_t x16 = -1;
	volatile uint32_t t3 = 12130U;

	t3 = (((x13-x14)|x15)^x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 12862;
	volatile uint16_t x20 = UINT16_MAX;
	int64_t t4 = -380LL;

	t4 = (((x17-x18)|x19)^x20);

	if (t4 != -65472LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	static uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 1U;
	uint16_t x24 = UINT16_MAX;
	static volatile int32_t t5 = -127677;

	t5 = (((x21-x22)|x23)^x24);

	if (t5 != -65282) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 1U;
	int8_t x26 = INT8_MIN;
	int64_t x28 = 510147897LL;
	int64_t t6 = -31351388759LL;

	t6 = (((x25-x26)|x27)^x28);

	if (t6 != 1637335750LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = -1LL;
	static int32_t x30 = -1;
	volatile int32_t x31 = INT32_MIN;
	volatile int64_t t7 = -11807232281LL;

	t7 = (((x29-x30)|x31)^x32);

	if (t7 != -2147483645LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -279364207461456550LL;
	int32_t x36 = INT32_MAX;
	volatile int64_t t8 = 739252965663LL;

	t8 = (((x33-x34)|x35)^x36);

	if (t8 != -8944007829282544309LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = 33858351419LL;
	int8_t x38 = INT8_MIN;
	static uint16_t x39 = UINT16_MAX;
	static uint32_t x40 = UINT32_MAX;
	volatile int64_t t9 = 2626034LL;

	t9 = (((x37-x38)|x39)^x40);

	if (t9 != 30566121472LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = 6;
	uint64_t x43 = UINT64_MAX;
	int64_t x44 = 54907494718409LL;
	uint64_t t10 = 209782108010LLU;

	t10 = (((x41-x42)|x43)^x44);

	if (t10 != 18446689166214833206LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 7U;
	int8_t x47 = INT8_MAX;
	static uint8_t x48 = UINT8_MAX;
	int32_t t11 = -1;

	t11 = (((x45-x46)|x47)^x48);

	if (t11 != -338928384) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 24U;
	static int16_t x50 = INT16_MAX;
	volatile int16_t x51 = INT16_MIN;
	uint64_t x52 = 7299614493670LLU;
	static uint64_t t12 = 14662LLU;

	t12 = (((x49-x50)|x51)^x52);

	if (t12 != 18446736774095064063LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -31225277;
	int8_t x54 = INT8_MIN;
	int32_t x55 = 1692;
	int32_t t13 = 235728322;

	t13 = (((x53-x54)|x55)^x56);

	if (t13 != 31224096) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 11146465695LL;
	int32_t x59 = -1;
	static volatile uint64_t t14 = 927LLU;

	t14 = (((x57-x58)|x59)^x60);

	if (t14 != 2147483647LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	static int8_t x62 = -4;
	int16_t x63 = -1;
	static volatile int16_t x64 = INT16_MAX;
	int32_t t15 = 45305;

	t15 = (((x61-x62)|x63)^x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint64_t x67 = 285578401880972LLU;
	static uint64_t t16 = 101LLU;

	t16 = (((x65-x66)|x67)^x68);

	if (t16 != 18446458493013351407LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 4U;
	uint16_t x70 = 544U;
	int32_t x72 = -7;

	t17 = (((x69-x70)|x71)^x72);

	if (t17 != 518) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x74 = -239LL;
	int64_t t18 = 23114468606769691LL;

	t18 = (((x73-x74)|x75)^x76);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -110;
	volatile int64_t x79 = -16571097427LL;
	uint32_t x80 = 2U;
	volatile int64_t t19 = -15LL;

	t19 = (((x77-x78)|x79)^x80);

	if (t19 != -12884901953LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x83 = 73;
	static volatile int64_t t20 = -997001224631LL;

	t20 = (((x81-x82)|x83)^x84);

	if (t20 != 9223370693552109988LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -1;
	int64_t x86 = -1LL;
	static int64_t x87 = INT64_MIN;
	int16_t x88 = -1;
	int64_t t21 = INT64_MAX;

	t21 = (((x85-x86)|x87)^x88);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	static uint16_t x90 = 1U;
	static volatile uint16_t x91 = UINT16_MAX;
	int32_t x92 = 209987;
	static volatile int64_t t22 = -1LL;

	t22 = (((x89-x90)|x91)^x92);

	if (t22 != -209988LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	static uint32_t x96 = 2U;

	t23 = (((x93-x94)|x95)^x96);

	if (t23 != 4294967293U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -5;
	static int32_t x98 = 302486;
	uint16_t x99 = UINT16_MAX;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = 0;

	t24 = (((x97-x98)|x99)^x100);

	if (t24 != 2147221503) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int16_t x102 = INT16_MIN;
	static uint64_t x104 = 231520LLU;
	uint64_t t25 = 130906LLU;

	t25 = (((x101-x102)|x103)^x104);

	if (t25 != 4266653599LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	int16_t x106 = 0;
	static uint64_t t26 = 42LLU;

	t26 = (((x105-x106)|x107)^x108);

	if (t26 != 1281441979392LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	int64_t x110 = -6580LL;
	volatile uint16_t x112 = 15955U;
	volatile int64_t t27 = 260456LL;

	t27 = (((x109-x110)|x111)^x112);

	if (t27 != 10156LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 7595LL;
	static volatile int32_t x114 = INT32_MIN;
	static volatile uint64_t x115 = 66896153LLU;
	int32_t x116 = -460574;
	volatile uint64_t t28 = 553511025LLU;

	t28 = (((x113-x114)|x115)^x116);

	if (t28 != 18446744071495230809LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = 40;
	uint8_t x119 = UINT8_MAX;
	static int16_t x120 = INT16_MIN;
	uint64_t t29 = 28748600LLU;

	t29 = (((x117-x118)|x119)^x120);

	if (t29 != 15461813457044446463LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = INT8_MAX;
	int16_t x123 = -832;
	int32_t x124 = INT32_MAX;

	t30 = (((x121-x122)|x123)^x124);

	if (t30 != -2147483585) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int64_t x126 = -2587LL;
	uint8_t x127 = 0U;
	int64_t x128 = 271430LL;
	volatile int64_t t31 = -565165358443088LL;

	t31 = (((x125-x126)|x127)^x128);

	if (t31 != -9223372036854501795LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = 10;
	static int32_t x134 = -179729177;
	int32_t x135 = INT32_MAX;
	int64_t t32 = 15255632397615LL;

	t32 = (((x133-x134)|x135)^x136);

	if (t32 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x138 = -1395;
	volatile int32_t x139 = 32373;
	int32_t x140 = -1;

	t33 = (((x137-x138)|x139)^x140);

	if (t33 != -32632LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 0U;
	int16_t x146 = INT16_MIN;
	int8_t x147 = 0;
	static int8_t x148 = -1;
	static volatile int32_t t34 = 54249;

	t34 = (((x145-x146)|x147)^x148);

	if (t34 != -32769) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x150 = 45U;
	int64_t x151 = -1LL;
	static int64_t x152 = INT64_MIN;
	int64_t t35 = INT64_MAX;

	t35 = (((x149-x150)|x151)^x152);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MIN;
	uint64_t x158 = 85798054LLU;
	int32_t x159 = -1;
	uint8_t x160 = 0U;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (((x157-x158)|x159)^x160);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x161 = 100U;
	int8_t x162 = -1;
	uint64_t x163 = 8544498023208936189LLU;
	uint8_t x164 = 0U;

	t37 = (((x161-x162)|x163)^x164);

	if (t37 != 8544498023208936189LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x166 = INT16_MAX;
	uint8_t x167 = 1U;
	uint8_t x168 = 1U;
	static uint64_t t38 = 127LLU;

	t38 = (((x165-x166)|x167)^x168);

	if (t38 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = INT8_MIN;
	static uint32_t t39 = 722106U;

	t39 = (((x169-x170)|x171)^x172);

	if (t39 != 127U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x173 = 3608U;
	int8_t x174 = INT8_MIN;
	int16_t x175 = INT16_MIN;
	static volatile int64_t t40 = -14123929764LL;

	t40 = (((x173-x174)|x175)^x176);

	if (t40 != 1867966691080LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x181 = UINT64_MAX;
	static int8_t x182 = -1;
	int64_t x183 = 3984334983LL;
	int16_t x184 = INT16_MAX;

	t41 = (((x181-x182)|x183)^x184);

	if (t41 != 3984351096LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	static int8_t x188 = INT8_MIN;
	int32_t t42 = 8;

	t42 = (((x185-x186)|x187)^x188);

	if (t42 != 32893) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 55U;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t43 = -7236106;

	t43 = (((x189-x190)|x191)^x192);

	if (t43 != -32696) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 1U;
	uint16_t x194 = 20U;
	int32_t x195 = 104451279;
	uint64_t x196 = UINT64_MAX;
	uint64_t t44 = 1LLU;

	t44 = (((x193-x194)|x195)^x196);

	if (t44 != 16LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	int32_t x203 = 114489;
	static int16_t x204 = -53;
	static int32_t t45 = 13771417;

	t45 = (((x201-x202)|x203)^x204);

	if (t45 != 16626) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x211 = INT8_MIN;
	int8_t x212 = 6;
	uint64_t t46 = 10379LLU;

	t46 = (((x209-x210)|x211)^x212);

	if (t46 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = 2062546LL;
	static volatile uint64_t x214 = UINT64_MAX;
	int64_t x215 = -1LL;
	static int8_t x216 = -38;

	t47 = (((x213-x214)|x215)^x216);

	if (t47 != 37LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x217 = -117LL;
	uint32_t x218 = 15202275U;
	static int32_t x219 = INT32_MAX;

	t48 = (((x217-x218)|x219)^x220);

	if (t48 != -5LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x221 = 2U;
	uint16_t x223 = 16U;
	int16_t x224 = INT16_MAX;

	t49 = (((x221-x222)|x223)^x224);

	if (t49 != 32745U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x225 = 94U;
	int8_t x226 = INT8_MIN;
	int64_t x227 = INT64_MAX;
	volatile int16_t x228 = -2;
	int64_t t50 = -120681849LL;

	t50 = (((x225-x226)|x227)^x228);

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x230 = INT16_MAX;
	volatile uint8_t x231 = 24U;
	int64_t x232 = INT64_MAX;

	t51 = (((x229-x230)|x231)^x232);

	if (t51 != -9223372036854743065LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x233 = UINT32_MAX;
	int16_t x234 = 86;
	int16_t x235 = -6724;
	volatile uint8_t x236 = 1U;
	uint32_t t52 = 14U;

	t52 = (((x233-x234)|x235)^x236);

	if (t52 != 4294967228U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x241 = -1;
	volatile uint8_t x243 = 2U;
	uint64_t x244 = 958917977LLU;
	uint64_t t53 = 189519LLU;

	t53 = (((x241-x242)|x243)^x244);

	if (t53 != 958917979LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = INT32_MIN;
	volatile int8_t x247 = INT8_MIN;
	uint64_t x248 = 38023240LLU;
	uint64_t t54 = 19803LLU;

	t54 = (((x245-x246)|x247)^x248);

	if (t54 != 18446744073671528375LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = 1;
	uint16_t x250 = 23669U;
	static int64_t x251 = INT64_MAX;
	volatile int64_t t55 = -677806170067330LL;

	t55 = (((x249-x250)|x251)^x252);

	if (t55 != -65536LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MAX;
	int8_t x255 = -1;
	volatile uint32_t x256 = 4958U;
	volatile uint32_t t56 = 0U;

	t56 = (((x253-x254)|x255)^x256);

	if (t56 != 4294962337U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	static uint64_t x260 = UINT64_MAX;
	static uint64_t t57 = 554464089460LLU;

	t57 = (((x257-x258)|x259)^x260);

	if (t57 != 32766LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x262 = 38U;
	int16_t x263 = INT16_MIN;
	static volatile int8_t x264 = INT8_MIN;

	t58 = (((x261-x262)|x263)^x264);

	if (t58 != 93) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = 1U;
	volatile int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MAX;
	int32_t t59 = -7262973;

	t59 = (((x265-x266)|x267)^x268);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MIN;
	int64_t x270 = -67731LL;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = 435126U;

	t60 = (((x269-x270)|x271)^x272);

	if (t60 != -447707LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = -2;
	static volatile int16_t x274 = -1;
	volatile int8_t x276 = INT8_MAX;
	uint64_t t61 = 91LLU;

	t61 = (((x273-x274)|x275)^x276);

	if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MAX;
	static uint64_t x279 = UINT64_MAX;
	uint8_t x280 = UINT8_MAX;
	uint64_t t62 = 774LLU;

	t62 = (((x277-x278)|x279)^x280);

	if (t62 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = -1;
	uint32_t x282 = 0U;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;
	volatile uint32_t t63 = 3398670U;

	t63 = (((x281-x282)|x283)^x284);

	if (t63 != 32767U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = -4;
	static int16_t x286 = INT16_MIN;
	int64_t x287 = 59LL;
	int16_t x288 = 669;
	static int64_t t64 = 3120483299327797LL;

	t64 = (((x285-x286)|x287)^x288);

	if (t64 != 32098LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x289 = 4LLU;
	int16_t x290 = INT16_MAX;
	int32_t x292 = INT32_MIN;
	static uint64_t t65 = 426373376600LLU;

	t65 = (((x289-x290)|x291)^x292);

	if (t65 != 2147483647LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	static int32_t x296 = -1;
	static int32_t t66 = 424;

	t66 = (((x293-x294)|x295)^x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	volatile int16_t x299 = -1;
	volatile int32_t t67 = 4760618;

	t67 = (((x297-x298)|x299)^x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x301 = 2876LLU;
	int32_t x302 = 246083381;
	int64_t x303 = INT64_MIN;
	int64_t x304 = -1LL;

	t68 = (((x301-x302)|x303)^x304);

	if (t68 != 246080504LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x305 = INT32_MAX;
	volatile uint64_t x307 = UINT64_MAX;
	uint16_t x308 = UINT16_MAX;
	uint64_t t69 = 47946LLU;

	t69 = (((x305-x306)|x307)^x308);

	if (t69 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = INT64_MAX;
	uint16_t x310 = UINT16_MAX;
	volatile int8_t x311 = -1;
	uint64_t x312 = 4752974769503741LLU;
	static uint64_t t70 = 1813112208636440396LLU;

	t70 = (((x309-x310)|x311)^x312);

	if (t70 != 18441991098940047874LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = 14U;
	uint32_t x314 = 2060U;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	uint32_t t71 = 42U;

	t71 = (((x313-x314)|x315)^x316);

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x318 = 3LLU;
	static volatile uint8_t x319 = 30U;
	int16_t x320 = 0;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (((x317-x318)|x319)^x320);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x321 = 453149555663823914LLU;
	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	volatile int32_t x324 = -11;
	volatile uint64_t t73 = 12607067579LLU;

	t73 = (((x321-x322)|x323)^x324);

	if (t73 != 1216879583LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = 3U;
	uint16_t x326 = UINT16_MAX;
	uint32_t x327 = 1254U;
	volatile int64_t t74 = -23LL;

	t74 = (((x325-x326)|x327)^x328);

	if (t74 != -9223372032559872794LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x329 = INT16_MIN;
	uint16_t x330 = 20U;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t75 = 57029;

	t75 = (((x329-x330)|x331)^x332);

	if (t75 != 108) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = 3440U;
	volatile uint32_t x339 = 88557791U;
	int16_t x340 = -18;
	uint32_t t76 = 55U;

	t76 = (((x337-x338)|x339)^x340);

	if (t76 != 4206408465U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x341 = 91U;
	int32_t x342 = -1;
	int8_t x343 = 40;
	uint16_t x344 = 28U;

	t77 = (((x341-x342)|x343)^x344);

	if (t77 != 96U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x345 = 627U;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MAX;

	t78 = (((x345-x346)|x347)^x348);

	if (t78 != -9223372036854743659LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x349 = UINT64_MAX;
	volatile uint32_t x350 = UINT32_MAX;
	uint64_t t79 = 14378LLU;

	t79 = (((x349-x350)|x351)^x352);

	if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x354 = INT16_MIN;
	int16_t x356 = -1;
	volatile int64_t t80 = 17LL;

	t80 = (((x353-x354)|x355)^x356);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x357 = UINT32_MAX;
	volatile int8_t x358 = 0;
	uint8_t x359 = 1U;
	int32_t x360 = INT32_MIN;
	volatile uint32_t t81 = 530153724U;

	t81 = (((x357-x358)|x359)^x360);

	if (t81 != 2147483647U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x361 = UINT16_MAX;
	static int8_t x362 = INT8_MAX;
	volatile uint8_t x363 = UINT8_MAX;
	uint32_t x364 = 63U;
	volatile uint32_t t82 = 152613251U;

	t82 = (((x361-x362)|x363)^x364);

	if (t82 != 65472U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x365 = 0LL;
	uint16_t x366 = 12400U;
	uint32_t x367 = 98U;
	int64_t x368 = 17LL;
	volatile int64_t t83 = 1LL;

	t83 = (((x365-x366)|x367)^x368);

	if (t83 != -12317LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = 6U;
	uint8_t x370 = 5U;
	int64_t x371 = -58094552142LL;
	int64_t x372 = INT64_MIN;
	int64_t t84 = -28100713LL;

	t84 = (((x369-x370)|x371)^x372);

	if (t84 != 9223371978760223667LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x373 = 200U;
	volatile int32_t x374 = 531829453;
	static uint8_t x375 = 7U;
	volatile uint32_t x376 = 53588U;
	uint32_t t85 = 5208U;

	t85 = (((x373-x374)|x375)^x376);

	if (t85 != 3763092651U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x377 = 12U;
	static volatile int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MAX;
	volatile int32_t t86 = INT32_MIN;

	t86 = (((x377-x378)|x379)^x380);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x381 = -1;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = -1LL;
	int8_t x384 = INT8_MAX;
	static volatile int64_t t87 = -222226LL;

	t87 = (((x381-x382)|x383)^x384);

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x391 = INT8_MIN;
	volatile int64_t t88 = -1085967665140521369LL;

	t88 = (((x389-x390)|x391)^x392);

	if (t88 != -1014399LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x393 = 4390301008490LLU;
	volatile int32_t x394 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	uint64_t t89 = 112504956LLU;

	t89 = (((x393-x394)|x395)^x396);

	if (t89 != 6465128590133371LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -50;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	int64_t x400 = -1LL;
	static volatile int64_t t90 = 26103269760264LL;

	t90 = (((x397-x398)|x399)^x400);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x402 = 3;
	int32_t x403 = 6;

	t91 = (((x401-x402)|x403)^x404);

	if (t91 != 2804662U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = UINT32_MAX;
	int8_t x406 = INT8_MAX;
	volatile uint64_t x408 = UINT64_MAX;
	uint64_t t92 = 77022797LLU;

	t92 = (((x405-x406)|x407)^x408);

	if (t92 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x409 = INT8_MAX;
	int16_t x412 = 1;
	volatile uint64_t t93 = 506209696LLU;

	t93 = (((x409-x410)|x411)^x412);

	if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x413 = INT16_MIN;
	uint16_t x414 = 3483U;
	int16_t x415 = INT16_MAX;
	int32_t t94 = 2444341;

	t94 = (((x413-x414)|x415)^x416);

	if (t94 != -32773) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MIN;
	int8_t x418 = -1;
	static uint32_t x419 = 30U;
	int32_t x420 = -45572;
	uint32_t t95 = 10168071U;

	t95 = (((x417-x418)|x419)^x420);

	if (t95 != 2147438051U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x421 = UINT16_MAX;
	int16_t x422 = 152;
	int8_t x423 = -1;
	static volatile int64_t x424 = -1LL;
	int64_t t96 = -6LL;

	t96 = (((x421-x422)|x423)^x424);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = -1;
	int64_t x426 = INT64_MIN;
	static uint32_t x427 = 13U;
	int16_t x428 = INT16_MAX;
	volatile int64_t t97 = 38LL;

	t97 = (((x425-x426)|x427)^x428);

	if (t97 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x429 = 1727421003U;
	static int32_t x430 = 94;
	int64_t x431 = -11968046376995LL;

	t98 = (((x429-x430)|x431)^x432);

	if (t98 != -11967943221249LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x433 = 511772148U;
	static volatile int8_t x434 = -1;
	int32_t x435 = 3850;
	uint64_t x436 = UINT64_MAX;
	static volatile uint64_t t99 = 880688596228LLU;

	t99 = (((x433-x434)|x435)^x436);

	if (t99 != 18446744073197776896LLU) { NG(); } else { ; }
	
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

