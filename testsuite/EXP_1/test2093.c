#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = UINT32_MAX;
int64_t x6 = -2034LL;
uint32_t x9 = 3U;
static uint32_t x11 = 14U;
static int32_t x18 = 31227541;
static int32_t x23 = -13010;
uint16_t x29 = 0U;
volatile int32_t x31 = INT32_MAX;
volatile uint32_t t6 = 0U;
int8_t x33 = INT8_MAX;
uint8_t x41 = 0U;
static volatile int16_t x43 = 18;
static int32_t x52 = INT32_MIN;
uint8_t x54 = 0U;
int16_t x55 = INT16_MIN;
int64_t x62 = 673360090401LL;
int64_t t14 = 21226583LL;
volatile uint16_t x70 = 1750U;
uint16_t x71 = UINT16_MAX;
uint16_t x77 = 4U;
volatile int16_t x80 = -1;
static volatile int32_t x84 = -839215;
int16_t x85 = 454;
int32_t x88 = INT32_MIN;
int8_t x90 = -1;
static uint16_t x101 = UINT16_MAX;
uint64_t x117 = 440322171LLU;
volatile int16_t x119 = -1;
int16_t x121 = INT16_MIN;
volatile int64_t t29 = 5648316279133LL;
uint8_t x127 = 1U;
uint16_t x136 = 20067U;
volatile int32_t t32 = 1430;
volatile int32_t t34 = 241;
static int16_t x145 = -1;
static int32_t x146 = INT32_MIN;
int64_t x150 = -1LL;
int32_t t38 = -2061;
int16_t x172 = 0;
int8_t x173 = INT8_MIN;
volatile int8_t x174 = -1;
int16_t x176 = -1;
int32_t t41 = 941;
volatile int8_t x179 = -1;
int64_t t42 = -7LL;
static volatile int64_t t43 = 32504464LL;
int64_t x185 = -1LL;
int64_t x201 = -1LL;
volatile int64_t x202 = 5052LL;
static int8_t x209 = INT8_MIN;
static int32_t x211 = -11099273;
uint8_t x213 = 14U;
static int32_t x214 = INT32_MIN;
uint32_t t51 = 58499U;
int64_t t53 = 10908867020LL;
int32_t x229 = -1;
uint64_t t54 = 14117263949LLU;
int64_t x244 = -12272180003682LL;
int64_t t58 = 5238503115LL;
volatile int32_t x250 = INT32_MIN;
int32_t x255 = -10258;
int8_t x257 = INT8_MIN;
int32_t x260 = -72658;
int8_t x265 = 1;
volatile uint64_t t63 = 1103355821472LLU;
uint32_t x270 = 2032616U;
uint16_t x272 = 370U;
uint64_t t65 = 1243092544929854LLU;
int64_t t66 = -5208237LL;
int32_t x281 = INT32_MIN;
int64_t x283 = 3LL;
volatile int64_t t67 = 1764029LL;
int64_t x285 = INT64_MIN;
static int16_t x296 = -1500;
uint64_t t71 = 62942028958013LLU;
volatile int16_t x311 = -1;
volatile int8_t x313 = 5;
int8_t x318 = INT8_MAX;
static int32_t x320 = INT32_MAX;
volatile uint32_t t79 = 847684U;
int8_t x333 = INT8_MIN;
int64_t x341 = INT64_MIN;
uint32_t t84 = 6441909U;
uint16_t x354 = 8015U;
int64_t x357 = INT64_MIN;
static int16_t x358 = INT16_MIN;
volatile uint8_t x362 = 17U;
int16_t x364 = INT16_MIN;
int32_t t87 = 3;
uint16_t x365 = 104U;
int64_t x371 = -1LL;
int8_t x376 = INT8_MIN;
int64_t x378 = INT64_MIN;
static int64_t t91 = -68781218818646LL;
volatile uint64_t t94 = 161037LLU;
int16_t x393 = -1414;
int32_t x394 = INT32_MIN;
int8_t x395 = 31;
uint16_t x400 = 80U;
int8_t x401 = 0;
static uint8_t x404 = 81U;
static volatile uint32_t x405 = UINT32_MAX;
int64_t x410 = -18483665744765LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	int64_t x4 = 27LL;
	static volatile int64_t t0 = 1737292271LL;

	t0 = (((x1^x2)%x3)^x4);

	if (t0 != 32740LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int8_t x7 = INT8_MAX;
	int64_t x8 = -1LL;
	static volatile int64_t t1 = 95004LL;

	t1 = (((x5^x6)%x7)^x8);

	if (t1 != 29LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = 6313719488702LLU;

	t2 = (((x9^x10)%x11)^x12);

	if (t2 != 4LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -3204440425451805LL;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = -3047885681706LL;
	int64_t t3 = -1431960LL;

	t3 = (((x17^x18)%x19)^x20);

	if (t3 != 3047885687478LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	volatile int8_t x22 = 1;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 462447;

	t4 = (((x21^x22)%x23)^x24);

	if (t4 != 6693) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 7U;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 3715838715851148546LLU;
	int8_t x28 = -3;
	static uint64_t t5 = 1007746940403759104LLU;

	t5 = (((x25^x26)%x27)^x28);

	if (t5 != 14863354863404626946LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x30 = INT8_MAX;
	uint32_t x32 = 798659U;

	t6 = (((x29^x30)%x31)^x32);

	if (t6 != 798652U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x34 = UINT16_MAX;
	int32_t x35 = INT32_MIN;
	int64_t x36 = 1LL;
	static int64_t t7 = -5LL;

	t7 = (((x33^x34)%x35)^x36);

	if (t7 != 65409LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	uint8_t x38 = 43U;
	static uint8_t x39 = UINT8_MAX;
	int32_t x40 = INT32_MAX;
	int32_t t8 = -352;

	t8 = (((x37^x38)%x39)^x40);

	if (t8 != -2147483564) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x42 = 13U;
	int16_t x44 = 1;
	static int32_t t9 = -1388;

	t9 = (((x41^x42)%x43)^x44);

	if (t9 != 12) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MIN;
	int16_t x46 = 1;
	volatile uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MAX;
	int64_t t10 = 1914LL;

	t10 = (((x45^x46)%x47)^x48);

	if (t10 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x49 = UINT64_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MIN;
	static volatile uint64_t t11 = 254327LLU;

	t11 = (((x49^x50)%x51)^x52);

	if (t11 != 2147483648LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = INT16_MIN;
	uint32_t x56 = 84U;
	static volatile uint32_t t12 = 285U;

	t12 = (((x53^x54)%x55)^x56);

	if (t12 != 84U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	static int32_t x58 = -223;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = INT32_MIN;
	int64_t t13 = -44270255770LL;

	t13 = (((x57^x58)%x59)^x60);

	if (t13 != -223LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 48U;
	volatile int16_t x63 = 2766;
	volatile uint16_t x64 = 9257U;

	t14 = (((x61^x62)%x63)^x64);

	if (t14 != 11690LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 77569485LL;
	uint16_t x66 = 24U;
	static volatile uint16_t x67 = UINT16_MAX;
	uint8_t x68 = 2U;
	volatile int64_t t15 = 106114108949833LL;

	t15 = (((x65^x66)%x67)^x68);

	if (t15 != 41590LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	uint16_t x72 = 124U;
	volatile int32_t t16 = 3205;

	t16 = (((x69^x70)%x71)^x72);

	if (t16 != -1707) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = 54768744487LL;
	volatile int64_t x74 = INT64_MIN;
	uint64_t x75 = 115062385776LLU;
	uint32_t x76 = UINT32_MAX;
	uint64_t t17 = 2749733324769810LLU;

	t17 = (((x73^x74)%x75)^x76);

	if (t17 != 16648966776LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x78 = 2811958LLU;
	int16_t x79 = -361;
	uint64_t t18 = 1762LLU;

	t18 = (((x77^x78)%x79)^x80);

	if (t18 != 18446744073706739661LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 119U;
	int32_t x82 = 45;
	uint64_t x83 = 30857800LLU;
	static uint64_t t19 = 1940270452559406LLU;

	t19 = (((x81^x82)%x83)^x84);

	if (t19 != 18446744073708712331LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x86 = 2U;
	int16_t x87 = INT16_MIN;
	static volatile int32_t t20 = -202012296;

	t20 = (((x85^x86)%x87)^x88);

	if (t20 != -2147483196) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	uint64_t x91 = 104035966892LLU;
	static int64_t x92 = INT64_MAX;
	volatile uint64_t t21 = 572048053002LLU;

	t21 = (((x89^x90)%x91)^x92);

	if (t21 != 9223372002714097228LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int8_t x94 = 8;
	static uint8_t x95 = UINT8_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile uint64_t t22 = 2058357903718LLU;

	t22 = (((x93^x94)%x95)^x96);

	if (t22 != 65288LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -4;
	int32_t x98 = 1;
	int16_t x99 = INT16_MAX;
	uint8_t x100 = UINT8_MAX;
	int32_t t23 = -2775;

	t23 = (((x97^x98)%x99)^x100);

	if (t23 != -254) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x102 = -1;
	volatile int8_t x103 = INT8_MIN;
	int64_t x104 = 33884LL;
	volatile int64_t t24 = -40794119843777263LL;

	t24 = (((x101^x102)%x103)^x104);

	if (t24 != 33884LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 124767U;
	uint16_t x106 = 54U;
	volatile uint64_t x107 = 2494457111LLU;
	int8_t x108 = 1;
	uint64_t t25 = 419826LLU;

	t25 = (((x105^x106)%x107)^x108);

	if (t25 != 124776LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	int8_t x110 = INT8_MIN;
	int32_t x111 = 15;
	volatile uint16_t x112 = 20U;
	int32_t t26 = 223;

	t26 = (((x109^x110)%x111)^x112);

	if (t26 != 19) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -1;
	volatile int8_t x114 = -1;
	static uint64_t x115 = 36LLU;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t27 = 7161824470241846LLU;

	t27 = (((x113^x114)%x115)^x116);

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = -1;
	int64_t x120 = 652LL;
	volatile uint64_t t28 = 412573776367LLU;

	t28 = (((x117^x118)%x119)^x120);

	if (t28 != 18446744073269228808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x122 = 9;
	static int32_t x123 = 100;
	int64_t x124 = INT64_MIN;

	t29 = (((x121^x122)%x123)^x124);

	if (t29 != 9223372036854775749LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = 1;
	volatile int8_t x128 = INT8_MAX;
	volatile int32_t t30 = -485952;

	t30 = (((x125^x126)%x127)^x128);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 8U;
	uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 6335LLU;
	volatile uint8_t x132 = 5U;
	volatile uint64_t t31 = 6836111420000668761LLU;

	t31 = (((x129^x130)%x131)^x132);

	if (t31 != 2180LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 715U;
	int8_t x134 = -45;
	volatile int8_t x135 = INT8_MAX;

	t32 = (((x133^x134)%x135)^x136);

	if (t32 != -19984) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	static int64_t x138 = -1835603LL;
	uint16_t x139 = UINT16_MAX;
	int32_t x140 = INT32_MAX;
	int64_t t33 = 641509215493267734LL;

	t33 = (((x137^x138)%x139)^x140);

	if (t33 != -2147482935LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -1;
	uint8_t x142 = 1U;
	uint16_t x143 = UINT16_MAX;
	int16_t x144 = INT16_MIN;

	t34 = (((x141^x142)%x143)^x144);

	if (t34 != 32766) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x147 = 261;
	uint64_t x148 = 116509369998345LLU;
	uint64_t t35 = 369824654LLU;

	t35 = (((x145^x146)%x147)^x148);

	if (t35 != 116509369998524LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x149 = 435677706018146933LLU;
	int64_t x151 = INT64_MAX;
	int16_t x152 = -1;
	volatile uint64_t t36 = 777845969LLU;

	t36 = (((x149^x150)%x151)^x152);

	if (t36 != 9659049742872922740LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = 83213803401LL;
	uint16_t x154 = 195U;
	static uint16_t x155 = UINT16_MAX;
	static int64_t x156 = INT64_MIN;
	volatile int64_t t37 = 2710092209798285273LL;

	t37 = (((x153^x154)%x155)^x156);

	if (t37 != -9223372036854759605LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = INT32_MAX;
	int16_t x158 = 499;
	int8_t x159 = 33;
	int16_t x160 = -1835;

	t38 = (((x157^x158)%x159)^x160);

	if (t38 != -1845) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	static int32_t x166 = -898107359;
	int64_t x167 = INT64_MAX;
	uint32_t x168 = UINT32_MAX;
	static volatile int64_t t39 = -12683LL;

	t39 = (((x165^x166)%x167)^x168);

	if (t39 != 3045591006LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -26573661777779465LL;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	volatile int64_t t40 = 1788LL;

	t40 = (((x169^x170)%x171)^x172);

	if (t40 != 9196798375076996343LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x175 = UINT8_MAX;

	t41 = (((x173^x174)%x175)^x176);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = 8171;
	volatile int32_t x178 = -1;
	int64_t x180 = 210082465LL;

	t42 = (((x177^x178)%x179)^x180);

	if (t42 != 210082465LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = 0LL;
	volatile int8_t x182 = INT8_MIN;
	int16_t x183 = -57;
	uint32_t x184 = UINT32_MAX;

	t43 = (((x181^x182)%x183)^x184);

	if (t43 != -4294967283LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x186 = 18U;
	uint64_t x187 = UINT64_MAX;
	uint64_t x188 = 176LLU;
	volatile uint64_t t44 = 1304766LLU;

	t44 = (((x185^x186)%x187)^x188);

	if (t44 != 18446744073709551453LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	static int64_t x191 = INT64_MIN;
	static int32_t x192 = -156683584;
	static volatile int64_t t45 = -27003610472LL;

	t45 = (((x189^x190)%x191)^x192);

	if (t45 != -156683584LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = 242LL;
	int64_t x194 = INT64_MAX;
	uint32_t x195 = 428498U;
	uint16_t x196 = 38U;
	int64_t t46 = 64799572333LL;

	t46 = (((x193^x194)%x195)^x196);

	if (t46 != 359773LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x197 = INT64_MAX;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -470778LL;
	int64_t x200 = INT64_MAX;
	volatile int64_t t47 = 600608303796LL;

	t47 = (((x197^x198)%x199)^x200);

	if (t47 != -9223372036854383990LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x203 = -787226056337852LL;
	int8_t x204 = -1;
	volatile int64_t t48 = -12207933LL;

	t48 = (((x201^x202)%x203)^x204);

	if (t48 != 5052LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x205 = 3;
	int8_t x206 = INT8_MAX;
	int64_t x207 = 6533LL;
	uint8_t x208 = UINT8_MAX;
	static volatile int64_t t49 = -465587233197243529LL;

	t49 = (((x205^x206)%x207)^x208);

	if (t49 != 131LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x210 = 60U;
	int64_t x212 = INT64_MIN;
	int64_t t50 = -28266307749531LL;

	t50 = (((x209^x210)%x211)^x212);

	if (t50 != 9223372036854775740LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x215 = UINT32_MAX;
	volatile int16_t x216 = -78;

	t51 = (((x213^x214)%x215)^x216);

	if (t51 != 2147483580U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x217 = 2U;
	volatile int16_t x218 = -212;
	int32_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	uint64_t t52 = UINT64_MAX;

	t52 = (((x217^x218)%x219)^x220);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x221 = -1LL;
	static volatile int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MAX;
	static int64_t x224 = -1LL;

	t53 = (((x221^x222)%x223)^x224);

	if (t53 != -2LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = INT64_MIN;
	static int64_t x231 = INT64_MIN;
	static uint64_t x232 = UINT64_MAX;

	t54 = (((x229^x230)%x231)^x232);

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -1;
	static int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	static int8_t x236 = 29;
	volatile int32_t t55 = 965419074;

	t55 = (((x233^x234)%x235)^x236);

	if (t55 != 98) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = 1091;
	uint64_t x238 = 1538806951995LLU;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = UINT8_MAX;
	uint64_t t56 = 35026LLU;

	t56 = (((x237^x238)%x239)^x240);

	if (t56 != 1538806953095LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x241 = -24;
	int64_t x242 = -104219314946LL;
	uint8_t x243 = 1U;
	volatile int64_t t57 = -231114026455LL;

	t57 = (((x241^x242)%x243)^x244);

	if (t57 != -12272180003682LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	static int16_t x246 = -1;
	int8_t x247 = INT8_MAX;
	volatile int64_t x248 = -1LL;

	t58 = (((x245^x246)%x247)^x248);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x249 = INT16_MIN;
	int8_t x251 = -1;
	volatile int64_t x252 = -102726411841LL;
	static volatile int64_t t59 = -93971877LL;

	t59 = (((x249^x250)%x251)^x252);

	if (t59 != -102726411841LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x253 = 2939804831961LLU;
	volatile uint64_t x254 = 1059193557105005LLU;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t60 = 200596LLU;

	t60 = (((x253^x254)%x255)^x256);

	if (t60 != 18445686374431615412LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x258 = -1;
	uint32_t x259 = 10U;
	volatile uint32_t t61 = 145653371U;

	t61 = (((x257^x258)%x259)^x260);

	if (t61 != 4294894633U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x261 = UINT32_MAX;
	static uint64_t x262 = 4242899485381823LLU;
	uint16_t x263 = 7793U;
	uint32_t x264 = 80U;
	uint64_t t62 = 1957866074979789744LLU;

	t62 = (((x261^x262)%x263)^x264);

	if (t62 != 4884LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x266 = INT64_MIN;
	volatile uint64_t x267 = 2683587019449LLU;
	volatile int8_t x268 = -1;

	t63 = (((x265^x266)%x267)^x268);

	if (t63 != 18446742544872133050LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x269 = -1;
	int64_t x271 = 210537505808LL;
	volatile int64_t t64 = -2503635LL;

	t64 = (((x269^x270)%x271)^x272);

	if (t64 != 4292935013LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x273 = 14U;
	int16_t x274 = 3;
	int32_t x275 = INT32_MIN;
	static uint64_t x276 = 114118829462LLU;

	t65 = (((x273^x274)%x275)^x276);

	if (t65 != 114118829467LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -2782;
	int8_t x278 = INT8_MAX;
	uint8_t x279 = 3U;
	int64_t x280 = INT64_MIN;

	t66 = (((x277^x278)%x279)^x280);

	if (t66 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x282 = UINT32_MAX;
	int64_t x284 = INT64_MIN;

	t67 = (((x281^x282)%x283)^x284);

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x286 = 0LLU;
	int64_t x287 = INT64_MIN;
	uint8_t x288 = UINT8_MAX;
	uint64_t t68 = 57965557LLU;

	t68 = (((x285^x286)%x287)^x288);

	if (t68 != 255LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = 226765548;
	uint8_t x290 = 2U;
	volatile int32_t x291 = -10412297;
	int64_t x292 = INT64_MAX;
	static int64_t t69 = 2043485709990LL;

	t69 = (((x289^x290)%x291)^x292);

	if (t69 != 9223372036846668494LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x293 = 3732U;
	int64_t x294 = -4649759LL;
	int8_t x295 = INT8_MIN;
	int64_t t70 = -113779357276329077LL;

	t70 = (((x293^x294)%x295)^x296);

	if (t70 != 1489LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x297 = 4U;
	uint64_t x298 = 10LLU;
	static int16_t x299 = -4981;
	int32_t x300 = -290;

	t71 = (((x297^x298)%x299)^x300);

	if (t71 != 18446744073709551312LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x301 = 23U;
	volatile uint32_t x302 = 199321U;
	uint64_t x303 = 236471794413947384LLU;
	static int8_t x304 = -1;
	uint64_t t72 = 673501110LLU;

	t72 = (((x301^x302)%x303)^x304);

	if (t72 != 18446744073709352305LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = -1;
	int16_t x306 = INT16_MAX;
	volatile int64_t x307 = INT64_MAX;
	static int16_t x308 = INT16_MIN;
	int64_t t73 = -886572LL;

	t73 = (((x305^x306)%x307)^x308);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	uint8_t x310 = 3U;
	volatile uint8_t x312 = 9U;
	volatile int32_t t74 = -209;

	t74 = (((x309^x310)%x311)^x312);

	if (t74 != 9) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x314 = -23;
	uint64_t x315 = UINT64_MAX;
	volatile uint64_t x316 = UINT64_MAX;
	volatile uint64_t t75 = 209LLU;

	t75 = (((x313^x314)%x315)^x316);

	if (t75 != 19LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	static volatile int64_t x319 = -706900LL;
	int64_t t76 = -260462423LL;

	t76 = (((x317^x318)%x319)^x320);

	if (t76 != -2147003668LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = -1;
	int32_t x323 = -1;
	int16_t x324 = -1;
	static volatile int32_t t77 = -1;

	t77 = (((x321^x322)%x323)^x324);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	volatile int16_t x327 = INT16_MAX;
	static uint32_t x328 = 3488389U;
	volatile uint32_t t78 = 36U;

	t78 = (((x325^x326)%x327)^x328);

	if (t78 != 3491076U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x329 = INT8_MIN;
	volatile uint8_t x330 = 127U;
	static uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MIN;

	t79 = (((x329^x330)%x331)^x332);

	if (t79 != 4294967168U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x334 = INT64_MIN;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = INT16_MAX;
	volatile uint64_t t80 = 254789026743LLU;

	t80 = (((x333^x334)%x335)^x336);

	if (t80 != 9223372036854743167LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = 0;
	static int64_t x338 = -3603634415227457LL;
	int16_t x339 = -1;
	uint8_t x340 = 35U;
	int64_t t81 = -15385365894LL;

	t81 = (((x337^x338)%x339)^x340);

	if (t81 != 35LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x342 = UINT32_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	int8_t x344 = -1;
	volatile int64_t t82 = -69549855065LL;

	t82 = (((x341^x342)%x343)^x344);

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	volatile uint32_t x348 = 49354U;
	uint32_t t83 = 6609712U;

	t83 = (((x345^x346)%x347)^x348);

	if (t83 != 16202U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MAX;
	int16_t x352 = -29;

	t84 = (((x349^x350)%x351)^x352);

	if (t84 != 4294967267U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 0U;
	int64_t x355 = -1LL;
	int16_t x356 = INT16_MIN;
	int64_t t85 = -463208LL;

	t85 = (((x353^x354)%x355)^x356);

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x359 = 4U;
	uint16_t x360 = 696U;
	int64_t t86 = 8066035197LL;

	t86 = (((x357^x358)%x359)^x360);

	if (t86 != 696LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x361 = -1;
	volatile int16_t x363 = INT16_MAX;

	t87 = (((x361^x362)%x363)^x364);

	if (t87 != 32750) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x366 = INT8_MIN;
	int16_t x367 = 485;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t88 = 12470221825093812LLU;

	t88 = (((x365^x366)%x367)^x368);

	if (t88 != 23LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	int8_t x370 = INT8_MIN;
	static volatile uint8_t x372 = 5U;
	volatile int64_t t89 = -172314543LL;

	t89 = (((x369^x370)%x371)^x372);

	if (t89 != 5LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x373 = INT32_MIN;
	static int8_t x374 = INT8_MIN;
	volatile int8_t x375 = INT8_MAX;
	int32_t t90 = 771;

	t90 = (((x373^x374)%x375)^x376);

	if (t90 != -121) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MIN;
	volatile uint32_t x379 = 3U;
	static volatile int8_t x380 = INT8_MIN;

	t91 = (((x377^x378)%x379)^x380);

	if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -1;
	volatile int64_t x382 = -1LL;
	static int16_t x383 = INT16_MAX;
	static int8_t x384 = INT8_MIN;
	int64_t t92 = -205041868023132LL;

	t92 = (((x381^x382)%x383)^x384);

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = 70;
	uint8_t x386 = 13U;
	volatile uint32_t x387 = 31983026U;
	static volatile uint64_t x388 = 1991LLU;
	static uint64_t t93 = 488390459398906LLU;

	t93 = (((x385^x386)%x387)^x388);

	if (t93 != 1932LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x389 = UINT64_MAX;
	static int16_t x390 = -1597;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = INT32_MAX;

	t94 = (((x389^x390)%x391)^x392);

	if (t94 != 2147483581LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x396 = -732757523LL;
	int64_t t95 = 210710579902118LL;

	t95 = (((x393^x394)%x395)^x396);

	if (t95 != -732757533LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x397 = -1;
	uint16_t x398 = 1U;
	uint8_t x399 = 1U;
	static int32_t t96 = 133;

	t96 = (((x397^x398)%x399)^x400);

	if (t96 != 80) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x402 = UINT16_MAX;
	volatile int8_t x403 = -1;
	int32_t t97 = 0;

	t97 = (((x401^x402)%x403)^x404);

	if (t97 != 81) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x406 = -1LL;
	int16_t x407 = -1;
	int32_t x408 = -1;
	int64_t t98 = 120349LL;

	t98 = (((x405^x406)%x407)^x408);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	static int64_t t99 = -1057015083980020524LL;

	t99 = (((x409^x410)%x411)^x412);

	if (t99 != -19586LL) { NG(); } else { ; }
	
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

