#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MAX;
int64_t x2 = 107LL;
int32_t x14 = INT32_MIN;
uint16_t x16 = UINT16_MAX;
int64_t x20 = INT64_MIN;
static int32_t t4 = 259956;
int8_t x29 = -1;
uint64_t x36 = UINT64_MAX;
static volatile int16_t x37 = INT16_MIN;
volatile int32_t x39 = 295;
int32_t t7 = 258302485;
int64_t x47 = 27653577323471526LL;
volatile int16_t x66 = 491;
volatile int64_t x67 = 980692388361153LL;
uint64_t x69 = 23353LLU;
volatile int8_t x72 = INT8_MIN;
uint16_t x75 = UINT16_MAX;
static uint64_t x89 = 292LLU;
volatile int16_t x101 = INT16_MIN;
volatile int64_t x102 = -83LL;
int8_t x106 = INT8_MIN;
int64_t x119 = -1LL;
int32_t t24 = 1718;
volatile uint8_t x145 = 1U;
uint32_t x148 = 90U;
int16_t x149 = -1;
int8_t x150 = INT8_MIN;
int32_t t31 = 953951;
uint32_t x159 = 42021203U;
int8_t x172 = -1;
uint8_t x182 = UINT8_MAX;
uint64_t x184 = 55228895964LLU;
int16_t x191 = 284;
static int8_t x192 = INT8_MAX;
int32_t t43 = 10634;
int16_t x210 = INT16_MAX;
uint8_t x214 = 8U;
volatile int8_t x218 = INT8_MIN;
static volatile int8_t x220 = INT8_MIN;
int32_t t47 = 0;
volatile int8_t x229 = INT8_MAX;
uint32_t x232 = 51103U;
int64_t x235 = 2030960265354LL;
uint32_t x236 = 19894U;
static int32_t t51 = 1;
int32_t t52 = 2847;
volatile int32_t t54 = 29891;
int16_t x273 = INT16_MAX;
static int32_t t57 = 225114721;
static int16_t x285 = INT16_MAX;
int16_t x286 = INT16_MAX;
static int64_t x288 = 30705897890842LL;
int64_t x302 = INT64_MIN;
volatile int32_t t63 = 158;
volatile int32_t t64 = 10520544;
int8_t x317 = INT8_MIN;
int8_t x325 = 21;
volatile int32_t t66 = -122999;
static int8_t x337 = INT8_MAX;
int8_t x339 = INT8_MIN;
volatile int32_t t69 = 1;
volatile int16_t x341 = 12;
volatile int16_t x342 = INT16_MAX;
uint32_t x346 = 50405U;
volatile int32_t t71 = 11;
uint32_t x354 = 1U;
static volatile int32_t t73 = -1142;
int32_t t74 = -65352538;
uint16_t x364 = 6767U;
int32_t x366 = 1;
uint16_t x376 = UINT16_MAX;
int32_t t78 = 0;
int32_t x377 = INT32_MAX;
int32_t t80 = 5063399;
volatile int8_t x386 = INT8_MAX;
uint8_t x396 = 7U;
int32_t x403 = -1;
static volatile int32_t t84 = -27;
int8_t x408 = INT8_MAX;
volatile int32_t t85 = -1486617;
volatile uint32_t x413 = 1948773321U;
static int32_t t86 = 0;
int32_t x425 = -36432;
static int16_t x430 = 1;
int8_t x445 = -1;
int32_t x446 = 87;
volatile int32_t t94 = 7965;
int8_t x461 = INT8_MIN;
volatile int8_t x462 = -3;
static volatile int16_t x465 = INT16_MIN;


void f0(void) {
	int16_t x3 = INT16_MAX;
	static uint16_t x4 = 1U;
	int32_t t0 = 1;

	t0 = (((x1-x2)/x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile uint32_t x6 = 193962375U;
	static int16_t x7 = INT16_MIN;
	int32_t x8 = -15;
	volatile int32_t t1 = -626422;

	t1 = (((x5-x6)/x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -198;
	int32_t x15 = -628314143;
	int32_t t2 = 703198371;

	t2 = (((x13-x14)/x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	uint16_t x18 = 469U;
	static uint8_t x19 = 2U;
	static int32_t t3 = -3242;

	t3 = (((x17-x18)/x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = -19;
	int16_t x23 = -1;
	uint32_t x24 = UINT32_MAX;

	t4 = (((x21-x22)/x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x30 = INT32_MIN;
	volatile int64_t x31 = 11433384613478626LL;
	int16_t x32 = INT16_MIN;
	static int32_t t5 = -2266996;

	t5 = (((x29-x30)/x31)<=x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MIN;
	uint64_t x34 = 1LLU;
	static int8_t x35 = -1;
	static volatile int32_t t6 = -1300;

	t6 = (((x33-x34)/x35)<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x38 = 111U;
	static uint32_t x40 = 138604U;

	t7 = (((x37-x38)/x39)<=x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MAX;
	int8_t x43 = -1;
	static int32_t x44 = -1;
	volatile int32_t t8 = 708;

	t8 = (((x41-x42)/x43)<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 11713;
	static int32_t x46 = -1;
	uint16_t x48 = 13U;
	volatile int32_t t9 = 13;

	t9 = (((x45-x46)/x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	static int64_t x50 = -28LL;
	int64_t x51 = -1LL;
	static uint32_t x52 = 529041560U;
	int32_t t10 = 196370;

	t10 = (((x49-x50)/x51)<=x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	uint8_t x54 = 101U;
	static uint16_t x55 = 424U;
	static uint8_t x56 = 3U;
	int32_t t11 = 3413406;

	t11 = (((x53-x54)/x55)<=x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = -1;
	uint8_t x62 = 38U;
	uint16_t x63 = 178U;
	static int16_t x64 = -1;
	volatile int32_t t12 = 2136;

	t12 = (((x61-x62)/x63)<=x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MAX;
	volatile int16_t x68 = -3;
	static int32_t t13 = -202960;

	t13 = (((x65-x66)/x67)<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x70 = 0LLU;
	int64_t x71 = INT64_MIN;
	int32_t t14 = -3092;

	t14 = (((x69-x70)/x71)<=x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = 119503;
	int32_t x74 = -1;
	volatile uint32_t x76 = 30457U;
	static int32_t t15 = 1;

	t15 = (((x73-x74)/x75)<=x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = INT16_MAX;
	int16_t x82 = -1;
	uint16_t x83 = 4966U;
	int8_t x84 = -1;
	int32_t t16 = 94997915;

	t16 = (((x81-x82)/x83)<=x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x85 = UINT32_MAX;
	static volatile int32_t x86 = 2860;
	static uint16_t x87 = UINT16_MAX;
	int32_t x88 = INT32_MAX;
	int32_t t17 = 1;

	t17 = (((x85-x86)/x87)<=x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x90 = INT16_MIN;
	volatile int32_t x91 = INT32_MIN;
	uint8_t x92 = 13U;
	int32_t t18 = 4907;

	t18 = (((x89-x90)/x91)<=x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -1;
	volatile uint8_t x94 = UINT8_MAX;
	uint64_t x95 = 1003912351641289LLU;
	volatile uint32_t x96 = 29104520U;
	volatile int32_t t19 = 58191333;

	t19 = (((x93-x94)/x95)<=x96);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x103 = INT8_MIN;
	volatile int32_t x104 = -1;
	volatile int32_t t20 = 29464;

	t20 = (((x101-x102)/x103)<=x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x105 = -1;
	int8_t x107 = INT8_MIN;
	static int16_t x108 = -16;
	volatile int32_t t21 = 3861298;

	t21 = (((x105-x106)/x107)<=x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x109 = UINT16_MAX;
	uint8_t x110 = 44U;
	int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	int32_t t22 = -2463;

	t22 = (((x109-x110)/x111)<=x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = 0;
	int64_t x114 = 184795LL;
	int16_t x115 = -1;
	int8_t x116 = -1;
	int32_t t23 = -1114;

	t23 = (((x113-x114)/x115)<=x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	static int16_t x118 = INT16_MAX;
	static uint32_t x120 = 5215U;

	t24 = (((x117-x118)/x119)<=x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = -1LL;
	uint32_t x122 = UINT32_MAX;
	int64_t x123 = -45161261LL;
	int8_t x124 = INT8_MIN;
	volatile int32_t t25 = -416;

	t25 = (((x121-x122)/x123)<=x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = 387LL;
	volatile uint16_t x126 = 1U;
	uint8_t x127 = 8U;
	static int32_t x128 = 555;
	volatile int32_t t26 = -13420;

	t26 = (((x125-x126)/x127)<=x128);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	volatile int16_t x130 = INT16_MIN;
	static volatile int64_t x131 = -1LL;
	int32_t x132 = INT32_MIN;
	volatile int32_t t27 = -25;

	t27 = (((x129-x130)/x131)<=x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = 620627;
	int64_t x134 = -1LL;
	volatile uint16_t x135 = 15U;
	int16_t x136 = INT16_MIN;
	volatile int32_t t28 = -57465;

	t28 = (((x133-x134)/x135)<=x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 7882871451764349LLU;
	static int32_t x142 = -11619346;
	int32_t x143 = 300739;
	int64_t x144 = INT64_MAX;
	int32_t t29 = 0;

	t29 = (((x141-x142)/x143)<=x144);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = 92007;
	volatile uint32_t x147 = 254U;
	volatile int32_t t30 = 2268312;

	t30 = (((x145-x146)/x147)<=x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x151 = 22888236088LL;
	int64_t x152 = -1LL;

	t31 = (((x149-x150)/x151)<=x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x153 = UINT16_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile int16_t x155 = -1;
	uint32_t x156 = 14887U;
	volatile int32_t t32 = -1248412;

	t32 = (((x153-x154)/x155)<=x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x157 = 42749240LLU;
	int16_t x158 = INT16_MAX;
	int16_t x160 = INT16_MIN;
	volatile int32_t t33 = 403535378;

	t33 = (((x157-x158)/x159)<=x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = 2744337U;
	int16_t x162 = INT16_MIN;
	int64_t x163 = -1LL;
	uint64_t x164 = 475045LLU;
	volatile int32_t t34 = 637835;

	t34 = (((x161-x162)/x163)<=x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MAX;
	static int64_t x166 = 971763533032359LL;
	static int64_t x167 = -1LL;
	volatile int32_t x168 = 1;
	static volatile int32_t t35 = 252408390;

	t35 = (((x165-x166)/x167)<=x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MAX;
	uint16_t x170 = 14907U;
	int64_t x171 = 69LL;
	volatile int32_t t36 = 814034;

	t36 = (((x169-x170)/x171)<=x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = 26;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MIN;
	static int8_t x176 = INT8_MIN;
	volatile int32_t t37 = 1;

	t37 = (((x173-x174)/x175)<=x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x177 = 9399U;
	static uint64_t x178 = 1LLU;
	int16_t x179 = INT16_MAX;
	volatile uint8_t x180 = 11U;
	volatile int32_t t38 = -4758;

	t38 = (((x177-x178)/x179)<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x181 = 820989741LLU;
	volatile uint8_t x183 = 73U;
	int32_t t39 = 51032;

	t39 = (((x181-x182)/x183)<=x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = INT8_MIN;
	volatile int16_t x186 = INT16_MAX;
	static uint32_t x187 = 29768U;
	uint16_t x188 = 5166U;
	volatile int32_t t40 = -877;

	t40 = (((x185-x186)/x187)<=x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x189 = 58479U;
	uint32_t x190 = UINT32_MAX;
	int32_t t41 = 19840164;

	t41 = (((x189-x190)/x191)<=x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = -1;
	uint32_t x195 = 23036U;
	static uint32_t x196 = 159213243U;
	static volatile int32_t t42 = -1;

	t42 = (((x193-x194)/x195)<=x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x205 = -2578;
	int8_t x206 = 7;
	volatile int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;

	t43 = (((x205-x206)/x207)<=x208);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int8_t x211 = -32;
	int8_t x212 = INT8_MIN;
	volatile int32_t t44 = 234;

	t44 = (((x209-x210)/x211)<=x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MAX;
	int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MAX;
	volatile int32_t t45 = 80855498;

	t45 = (((x213-x214)/x215)<=x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = 9U;
	static int8_t x219 = INT8_MIN;
	int32_t t46 = 1;

	t46 = (((x217-x218)/x219)<=x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x221 = 716719125U;
	volatile int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MAX;
	static int32_t x224 = INT32_MAX;

	t47 = (((x221-x222)/x223)<=x224);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x225 = INT16_MIN;
	volatile uint64_t x226 = 1890257LLU;
	int8_t x227 = 49;
	uint64_t x228 = 41LLU;
	static int32_t t48 = -8;

	t48 = (((x225-x226)/x227)<=x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x230 = -2541;
	uint64_t x231 = UINT64_MAX;
	int32_t t49 = -15034760;

	t49 = (((x229-x230)/x231)<=x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = INT16_MIN;
	int64_t x234 = -1LL;
	volatile int32_t t50 = 4404659;

	t50 = (((x233-x234)/x235)<=x236);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	volatile int8_t x239 = INT8_MAX;
	uint16_t x240 = 1U;

	t51 = (((x237-x238)/x239)<=x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x249 = 7302;
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = 29956147079429LL;
	static uint16_t x252 = 45U;

	t52 = (((x249-x250)/x251)<=x252);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = -8LL;
	static int64_t x254 = -41971LL;
	int64_t x255 = INT64_MAX;
	int8_t x256 = -1;
	int32_t t53 = 5312491;

	t53 = (((x253-x254)/x255)<=x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x257 = -974943043541193LL;
	uint64_t x258 = UINT64_MAX;
	volatile uint64_t x259 = 50501LLU;
	int32_t x260 = 4;

	t54 = (((x257-x258)/x259)<=x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = 10;
	int8_t x266 = 29;
	static int32_t x267 = 9157;
	uint32_t x268 = UINT32_MAX;
	int32_t t55 = -1;

	t55 = (((x265-x266)/x267)<=x268);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x269 = 1;
	int32_t x270 = -1;
	static int8_t x271 = -9;
	static int16_t x272 = -1;
	int32_t t56 = 240049;

	t56 = (((x269-x270)/x271)<=x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x274 = INT8_MIN;
	int8_t x275 = -1;
	static int32_t x276 = 74;

	t57 = (((x273-x274)/x275)<=x276);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 918706820U;
	static int32_t x280 = -1;
	volatile int32_t t58 = -14301836;

	t58 = (((x277-x278)/x279)<=x280);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x287 = 105;
	int32_t t59 = -240192;

	t59 = (((x285-x286)/x287)<=x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x289 = INT16_MIN;
	volatile int64_t x290 = INT64_MIN;
	int32_t x291 = 1;
	uint32_t x292 = 1153422U;
	volatile int32_t t60 = 506;

	t60 = (((x289-x290)/x291)<=x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x297 = 3227;
	uint8_t x298 = UINT8_MAX;
	uint16_t x299 = 1370U;
	static int8_t x300 = 1;
	int32_t t61 = 212260;

	t61 = (((x297-x298)/x299)<=x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x301 = INT8_MIN;
	int32_t x303 = -1;
	uint32_t x304 = UINT32_MAX;
	int32_t t62 = -6303007;

	t62 = (((x301-x302)/x303)<=x304);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x305 = 926;
	int32_t x306 = -1;
	static int8_t x307 = -3;
	static int64_t x308 = INT64_MAX;

	t63 = (((x305-x306)/x307)<=x308);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x313 = 24679221;
	int8_t x314 = -1;
	static int32_t x315 = 8;
	int8_t x316 = 6;

	t64 = (((x313-x314)/x315)<=x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x318 = 0;
	int32_t x319 = -1;
	uint64_t x320 = 1725LLU;
	int32_t t65 = -127461;

	t65 = (((x317-x318)/x319)<=x320);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x326 = -42643453464239527LL;
	uint64_t x327 = 23364743818947116LLU;
	volatile int16_t x328 = 31;

	t66 = (((x325-x326)/x327)<=x328);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x329 = -1;
	static uint8_t x330 = 5U;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	static int32_t t67 = -1482;

	t67 = (((x329-x330)/x331)<=x332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x333 = INT16_MAX;
	int64_t x334 = 31072LL;
	volatile uint32_t x335 = 443U;
	static int8_t x336 = INT8_MIN;
	static volatile int32_t t68 = -7097;

	t68 = (((x333-x334)/x335)<=x336);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x338 = 219966;
	static int8_t x340 = INT8_MIN;

	t69 = (((x337-x338)/x339)<=x340);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x343 = 2878000;
	volatile int8_t x344 = 8;
	static volatile int32_t t70 = 1420;

	t70 = (((x341-x342)/x343)<=x344);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x345 = INT16_MIN;
	uint32_t x347 = 11U;
	int64_t x348 = -89LL;

	t71 = (((x345-x346)/x347)<=x348);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x349 = 58201LL;
	uint64_t x350 = UINT64_MAX;
	volatile int32_t x351 = 3701;
	int16_t x352 = -16330;
	volatile int32_t t72 = -22;

	t72 = (((x349-x350)/x351)<=x352);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x353 = -600240;
	volatile int16_t x355 = -2;
	int32_t x356 = INT32_MIN;

	t73 = (((x353-x354)/x355)<=x356);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = 135858341983LL;
	static int8_t x358 = -1;
	uint8_t x359 = UINT8_MAX;
	volatile uint16_t x360 = 1866U;

	t74 = (((x357-x358)/x359)<=x360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x361 = 1U;
	volatile int16_t x362 = -25;
	int64_t x363 = INT64_MIN;
	volatile int32_t t75 = 10816584;

	t75 = (((x361-x362)/x363)<=x364);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = 15815;
	uint8_t x367 = 121U;
	volatile int64_t x368 = INT64_MAX;
	int32_t t76 = 6;

	t76 = (((x365-x366)/x367)<=x368);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x369 = UINT64_MAX;
	static int64_t x370 = INT64_MIN;
	int8_t x371 = -2;
	uint16_t x372 = 10459U;
	int32_t t77 = -34358;

	t77 = (((x369-x370)/x371)<=x372);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x373 = -1;
	int16_t x374 = INT16_MIN;
	static int32_t x375 = -998;

	t78 = (((x373-x374)/x375)<=x376);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x378 = 571947325U;
	static volatile int64_t x379 = INT64_MAX;
	int16_t x380 = 118;
	volatile int32_t t79 = 494759580;

	t79 = (((x377-x378)/x379)<=x380);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x381 = 875U;
	int8_t x382 = INT8_MIN;
	static uint64_t x383 = UINT64_MAX;
	static uint8_t x384 = 0U;

	t80 = (((x381-x382)/x383)<=x384);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x385 = -1;
	static int16_t x387 = 15231;
	static int64_t x388 = 4342195560361114LL;
	volatile int32_t t81 = 101649573;

	t81 = (((x385-x386)/x387)<=x388);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x389 = -1LL;
	volatile int16_t x390 = INT16_MAX;
	static int8_t x391 = -1;
	int8_t x392 = -1;
	volatile int32_t t82 = 798869;

	t82 = (((x389-x390)/x391)<=x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x393 = 69989366630817115LL;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -113146980824LL;
	volatile int32_t t83 = -235;

	t83 = (((x393-x394)/x395)<=x396);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x401 = -1;
	int8_t x402 = INT8_MAX;
	volatile int64_t x404 = 4098841LL;

	t84 = (((x401-x402)/x403)<=x404);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = INT8_MIN;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;

	t85 = (((x405-x406)/x407)<=x408);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = -10;
	uint16_t x416 = 7281U;

	t86 = (((x413-x414)/x415)<=x416);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x417 = 3495U;
	int32_t x418 = -90;
	static uint32_t x419 = 33216339U;
	int64_t x420 = INT64_MIN;
	volatile int32_t t87 = -7;

	t87 = (((x417-x418)/x419)<=x420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = -591;
	volatile int64_t x423 = 8059927LL;
	int16_t x424 = INT16_MAX;
	volatile int32_t t88 = 653;

	t88 = (((x421-x422)/x423)<=x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x426 = -1;
	int32_t x427 = -1;
	static uint64_t x428 = 6000551LLU;
	static int32_t t89 = 5261868;

	t89 = (((x425-x426)/x427)<=x428);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x429 = 35484LL;
	volatile int16_t x431 = -1;
	volatile uint16_t x432 = UINT16_MAX;
	int32_t t90 = -4040;

	t90 = (((x429-x430)/x431)<=x432);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x433 = -447;
	int32_t x434 = INT32_MIN;
	int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	int32_t t91 = -48831;

	t91 = (((x433-x434)/x435)<=x436);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = -218;
	static int32_t x442 = -1;
	int64_t x443 = INT64_MIN;
	uint64_t x444 = 0LLU;
	volatile int32_t t92 = 24;

	t92 = (((x441-x442)/x443)<=x444);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x447 = INT8_MIN;
	static uint32_t x448 = UINT32_MAX;
	int32_t t93 = -836635076;

	t93 = (((x445-x446)/x447)<=x448);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = 0;
	int16_t x450 = INT16_MAX;
	int16_t x451 = INT16_MIN;
	volatile int8_t x452 = 7;

	t94 = (((x449-x450)/x451)<=x452);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = 497;
	static volatile int8_t x454 = INT8_MAX;
	volatile uint8_t x455 = 43U;
	static volatile int16_t x456 = 3877;
	static int32_t t95 = -1095340;

	t95 = (((x453-x454)/x455)<=x456);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x463 = -1LL;
	static volatile uint32_t x464 = 7334U;
	volatile int32_t t96 = 5;

	t96 = (((x461-x462)/x463)<=x464);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x466 = 797628015U;
	static uint16_t x467 = 43U;
	uint64_t x468 = 3917419473503367LLU;
	int32_t t97 = 44491362;

	t97 = (((x465-x466)/x467)<=x468);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x469 = -1;
	int64_t x470 = -1LL;
	int64_t x471 = -182LL;
	uint64_t x472 = 5519151LLU;
	volatile int32_t t98 = -14896;

	t98 = (((x469-x470)/x471)<=x472);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x473 = 118584089030353LL;
	int16_t x474 = -1;
	uint16_t x475 = 1110U;
	int32_t x476 = -1;
	int32_t t99 = -480084865;

	t99 = (((x473-x474)/x475)<=x476);

	if (t99 != 0) { NG(); } else { ; }
	
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

