#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x10 = -246;
volatile int16_t x12 = INT16_MIN;
volatile int8_t x15 = 3;
static int16_t x16 = -1;
static volatile uint16_t x23 = UINT16_MAX;
int16_t x34 = INT16_MIN;
uint64_t x35 = 238615LLU;
int32_t x39 = INT32_MIN;
volatile int64_t t9 = -91174444813LL;
int8_t x69 = INT8_MAX;
uint32_t x70 = 537400U;
int64_t x73 = 47LL;
int16_t x78 = -1956;
uint16_t x81 = 366U;
uint64_t x82 = UINT64_MAX;
int64_t x83 = INT64_MAX;
int64_t x86 = 3584LL;
int8_t x94 = INT8_MIN;
volatile int16_t x97 = INT16_MAX;
uint16_t x99 = UINT16_MAX;
int64_t t18 = 96149168185605LL;
volatile int8_t x107 = -9;
static int32_t x113 = 54359;
uint16_t x118 = 1353U;
int64_t x120 = INT64_MIN;
volatile int64_t t22 = 1916512269LL;
uint32_t x121 = 509U;
volatile uint32_t x128 = UINT32_MAX;
int8_t x132 = -1;
uint64_t t25 = 5334495854063LLU;
int16_t x135 = INT16_MAX;
static int64_t t26 = 25LL;
uint16_t x143 = 1U;
int16_t x148 = -234;
volatile int32_t t29 = 0;
int16_t x149 = INT16_MAX;
int16_t x151 = INT16_MIN;
static int64_t x153 = 12659701LL;
volatile int64_t x154 = INT64_MIN;
int64_t x157 = -1LL;
uint64_t x159 = UINT64_MAX;
uint64_t x160 = UINT64_MAX;
uint64_t t34 = 627097764LLU;
int64_t x174 = -948378LL;
static int64_t x175 = 63440129679LL;
volatile uint64_t x176 = UINT64_MAX;
int8_t x178 = INT8_MAX;
uint16_t x182 = 227U;
static int16_t x186 = -1115;
uint16_t x189 = 1588U;
volatile uint64_t t39 = 1405LLU;
int16_t x199 = 19;
uint16_t x213 = 8916U;
int8_t x215 = INT8_MIN;
int16_t x216 = INT16_MIN;
int8_t x217 = -1;
int16_t x234 = INT16_MIN;
int64_t x238 = -1LL;
volatile uint64_t t51 = 4595968609115824741LLU;
int64_t x261 = -4445LL;
uint8_t x272 = UINT8_MAX;
static volatile int64_t t55 = -107403674468LL;
int8_t x274 = -1;
uint32_t x280 = 820943U;
int64_t t58 = -96835040255701876LL;
int64_t x285 = INT64_MIN;
uint16_t x296 = UINT16_MAX;
int32_t x307 = INT32_MIN;
int64_t x314 = INT64_MIN;
uint16_t x327 = UINT16_MAX;
static int64_t x335 = -1LL;
static uint8_t x336 = UINT8_MAX;
volatile int64_t x337 = INT64_MAX;
int16_t x338 = -1;
int16_t x346 = -1;
static int32_t x348 = 479692208;
static volatile int64_t t72 = 0LL;
int8_t x351 = -1;
static int64_t x352 = INT64_MAX;
volatile uint64_t x360 = 2121792477995754LLU;
uint64_t t75 = 9563LLU;
uint32_t x361 = 78776345U;
uint32_t x365 = 249924003U;
static int16_t x366 = 0;
static volatile int64_t x368 = INT64_MIN;
uint64_t x376 = UINT64_MAX;
int16_t x381 = -8;
uint32_t x390 = 108862706U;
int16_t x391 = -1;
volatile int64_t t81 = 7922LL;
volatile uint8_t x395 = 1U;
uint64_t t82 = 271959939LLU;
volatile int32_t x401 = -290209997;
uint64_t x405 = 19910722LLU;
int8_t x406 = INT8_MIN;
int8_t x407 = -1;
static int8_t x408 = -2;
static int8_t x419 = -1;
int32_t x423 = -1;
int16_t x425 = INT16_MAX;
static volatile uint64_t x428 = 5975265LLU;
int16_t x441 = INT16_MAX;
static uint16_t x450 = UINT16_MAX;
static int8_t x467 = INT8_MIN;
volatile uint32_t x480 = UINT32_MAX;
static volatile uint16_t x481 = 6861U;
int32_t x483 = -1;
int32_t x485 = -34;


void f0(void) {
	int16_t x1 = 697;
	int8_t x2 = INT8_MAX;
	static int64_t x3 = -8291505926LL;
	uint16_t x4 = 16526U;
	volatile int64_t t0 = -7446664LL;

	t0 = (((x1+x2)%x3)%x4);

	if (t0 != 824LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 259012247255LLU;
	int32_t x11 = INT32_MIN;
	uint64_t t1 = 41485620LLU;

	t1 = (((x9+x10)%x11)%x12);

	if (t1 != 259012247009LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	uint8_t x14 = 28U;
	int32_t t2 = -56531;

	t2 = (((x13+x14)%x15)%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	static int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = -1LL;
	volatile int64_t t3 = 33593090663847LL;

	t3 = (((x17+x18)%x19)%x20);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 6U;
	int16_t x22 = INT16_MAX;
	int16_t x24 = INT16_MIN;
	int32_t t4 = 101;

	t4 = (((x21+x22)%x23)%x24);

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 9U;
	static uint8_t x36 = 90U;
	volatile uint64_t t5 = 624LLU;

	t5 = (((x33+x34)%x35)%x36);

	if (t5 != 2LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MAX;
	static int64_t x40 = INT64_MIN;
	int64_t t6 = 209765712721540LL;

	t6 = (((x37+x38)%x39)%x40);

	if (t6 != 382LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 1549U;
	int8_t x42 = -1;
	static int64_t x43 = INT64_MAX;
	volatile int16_t x44 = 105;
	static int64_t t7 = -2159575605183962LL;

	t7 = (((x41+x42)%x43)%x44);

	if (t7 != 78LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x57 = 148LLU;
	int8_t x58 = -1;
	volatile int32_t x59 = INT32_MAX;
	static int16_t x60 = 6;
	uint64_t t8 = 18902451096670161LLU;

	t8 = (((x57+x58)%x59)%x60);

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x61 = -1LL;
	volatile int64_t x62 = -361560905902763LL;
	uint32_t x63 = 1013U;
	int32_t x64 = -1;

	t9 = (((x61+x62)%x63)%x64);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x65 = 2;
	uint32_t x66 = 1007U;
	static int64_t x67 = INT64_MAX;
	volatile uint16_t x68 = 8U;
	static volatile int64_t t10 = 1629384756LL;

	t10 = (((x65+x66)%x67)%x68);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x71 = 14647;
	int32_t x72 = -1031;
	volatile uint32_t t11 = 470756U;

	t11 = (((x69+x70)%x71)%x72);

	if (t11 != 10235U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MIN;
	volatile uint64_t x76 = 330669376075764242LLU;
	volatile uint64_t t12 = 4876LLU;

	t12 = (((x73+x74)%x75)%x76);

	if (t12 != 46LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 0U;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = -1;
	volatile int32_t t13 = -44;

	t13 = (((x77+x78)%x79)%x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x84 = UINT8_MAX;
	volatile uint64_t t14 = 998280337405509LLU;

	t14 = (((x81+x82)%x83)%x84);

	if (t14 != 110LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x85 = INT8_MIN;
	int32_t x87 = INT32_MAX;
	uint32_t x88 = 1U;
	volatile int64_t t15 = -1445961959LL;

	t15 = (((x85+x86)%x87)%x88);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	int32_t x91 = INT32_MIN;
	volatile int32_t x92 = INT32_MIN;
	volatile int64_t t16 = -44973458LL;

	t16 = (((x89+x90)%x91)%x92);

	if (t16 != -129LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	volatile uint64_t x96 = 178773117627571113LLU;
	volatile uint64_t t17 = 58571509564372814LLU;

	t17 = (((x93+x94)%x95)%x96);

	if (t17 != 33112958069694081LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x98 = 30036LL;
	int32_t x100 = 1;

	t18 = (((x97+x98)%x99)%x100);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x101 = -522;
	volatile int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	volatile int32_t x104 = 43;
	volatile int32_t t19 = 3234302;

	t19 = (((x101+x102)%x103)%x104);

	if (t19 != -5) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = 39;
	int16_t x106 = -1;
	volatile int8_t x108 = -1;
	int32_t t20 = 3551;

	t20 = (((x105+x106)%x107)%x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x114 = 34999471LL;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile uint64_t t21 = 239063588858LLU;

	t21 = (((x113+x114)%x115)%x116);

	if (t21 != 6LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = 929U;
	volatile uint8_t x119 = 1U;

	t22 = (((x117+x118)%x119)%x120);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x122 = -1LL;
	int32_t x123 = -208;
	uint8_t x124 = 22U;
	static int64_t t23 = 85517LL;

	t23 = (((x121+x122)%x123)%x124);

	if (t23 != 4LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = INT16_MAX;
	uint8_t x126 = 90U;
	int32_t x127 = INT32_MAX;
	static uint32_t t24 = 22860U;

	t24 = (((x125+x126)%x127)%x128);

	if (t24 != 32857U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x129 = 315;
	uint64_t x130 = 1039661654960LLU;
	uint64_t x131 = UINT64_MAX;

	t25 = (((x129+x130)%x131)%x132);

	if (t25 != 1039661655275LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x133 = 263654799278LL;
	volatile int8_t x134 = INT8_MIN;
	int16_t x136 = INT16_MIN;

	t26 = (((x133+x134)%x135)%x136);

	if (t26 != 15933LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = 57138575171236889LLU;
	volatile int8_t x138 = -1;
	uint8_t x139 = UINT8_MAX;
	uint16_t x140 = 10U;
	uint64_t t27 = 49418LLU;

	t27 = (((x137+x138)%x139)%x140);

	if (t27 != 8LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x141 = 11U;
	uint64_t x142 = 9568LLU;
	volatile int32_t x144 = INT32_MIN;
	uint64_t t28 = 126257850129LLU;

	t28 = (((x141+x142)%x143)%x144);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x145 = 6U;
	int16_t x146 = INT16_MIN;
	uint16_t x147 = 27675U;

	t29 = (((x145+x146)%x147)%x148);

	if (t29 != -173) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x150 = -1040;
	static int32_t x152 = 5798231;
	volatile int32_t t30 = 3;

	t30 = (((x149+x150)%x151)%x152);

	if (t30 != 31727) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x155 = UINT8_MAX;
	volatile int16_t x156 = -1782;
	volatile int64_t t31 = 3845137995961592278LL;

	t31 = (((x153+x154)%x155)%x156);

	if (t31 != -157LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x158 = 11;
	volatile uint64_t t32 = 20653576645756LLU;

	t32 = (((x157+x158)%x159)%x160);

	if (t32 != 10LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x161 = 117U;
	static uint8_t x162 = 10U;
	uint16_t x163 = 117U;
	int32_t x164 = 37;
	static int32_t t33 = -165580124;

	t33 = (((x161+x162)%x163)%x164);

	if (t33 != 10) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 13866326163623LLU;
	volatile int8_t x166 = 38;
	static uint32_t x167 = 191987U;
	static volatile int8_t x168 = INT8_MIN;

	t34 = (((x165+x166)%x167)%x168);

	if (t34 != 5068LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x173 = -1;
	volatile uint64_t t35 = 45154LLU;

	t35 = (((x173+x174)%x175)%x176);

	if (t35 != 18446744073708603237LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -53601;
	int16_t x179 = -1;
	static volatile int8_t x180 = -1;
	int32_t t36 = -153;

	t36 = (((x177+x178)%x179)%x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x181 = UINT32_MAX;
	int64_t x183 = -800LL;
	int16_t x184 = -535;
	volatile int64_t t37 = 806618659LL;

	t37 = (((x181+x182)%x183)%x184);

	if (t37 != 226LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x185 = UINT16_MAX;
	uint32_t x187 = 63185061U;
	static int32_t x188 = 1233;
	uint32_t t38 = 334U;

	t38 = (((x185+x186)%x187)%x188);

	if (t38 != 304U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x190 = UINT64_MAX;
	uint8_t x191 = 9U;
	static uint16_t x192 = 3418U;

	t39 = (((x189+x190)%x191)%x192);

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x193 = -1LL;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	uint32_t x196 = 1319566U;
	int64_t t40 = -20LL;

	t40 = (((x193+x194)%x195)%x196);

	if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = INT64_MIN;
	static volatile uint32_t x198 = 1U;
	int32_t x200 = 253;
	static volatile int64_t t41 = 399729332140169LL;

	t41 = (((x197+x198)%x199)%x200);

	if (t41 != -17LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = INT32_MIN;
	int64_t x202 = 0LL;
	static uint16_t x203 = UINT16_MAX;
	int32_t x204 = INT32_MIN;
	int64_t t42 = -3LL;

	t42 = (((x201+x202)%x203)%x204);

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x205 = INT8_MAX;
	static int16_t x206 = INT16_MAX;
	static int16_t x207 = -53;
	int32_t x208 = -490830188;
	volatile int32_t t43 = 60;

	t43 = (((x205+x206)%x207)%x208);

	if (t43 != 34) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x214 = 557U;
	int32_t t44 = -1;

	t44 = (((x213+x214)%x215)%x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x218 = -1;
	uint8_t x219 = UINT8_MAX;
	uint16_t x220 = UINT16_MAX;
	int32_t t45 = -136;

	t45 = (((x217+x218)%x219)%x220);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = 2U;
	static int64_t x222 = -1LL;
	static int16_t x223 = INT16_MIN;
	int32_t x224 = -1;
	int64_t t46 = 1861103256202358359LL;

	t46 = (((x221+x222)%x223)%x224);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = INT64_MAX;
	int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MIN;
	int32_t x228 = -1;
	volatile int64_t t47 = 21814117041822LL;

	t47 = (((x225+x226)%x227)%x228);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x229 = 59U;
	int16_t x230 = INT16_MAX;
	uint32_t x231 = 85583460U;
	int64_t x232 = 522271800LL;
	volatile int64_t t48 = -61550753787703LL;

	t48 = (((x229+x230)%x231)%x232);

	if (t48 != 32826LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = 11;
	uint64_t x235 = 61164790665355031LLU;
	int8_t x236 = INT8_MIN;
	static volatile uint64_t t49 = 62912281913227091LLU;

	t49 = (((x233+x234)%x235)%x236);

	if (t49 != 36142083437654528LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x237 = 5LLU;
	volatile uint32_t x239 = 1600434525U;
	static int32_t x240 = INT32_MIN;
	static uint64_t t50 = 277923540414515133LLU;

	t50 = (((x237+x238)%x239)%x240);

	if (t50 != 4LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x253 = 458932U;
	int8_t x254 = -3;
	static uint8_t x255 = 111U;
	uint64_t x256 = 8783101869696236LLU;

	t51 = (((x253+x254)%x255)%x256);

	if (t51 != 55LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x257 = UINT32_MAX;
	int32_t x258 = INT32_MIN;
	static volatile int64_t x259 = -1LL;
	static int64_t x260 = -24892225715LL;
	volatile int64_t t52 = -2505318LL;

	t52 = (((x257+x258)%x259)%x260);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x262 = 201U;
	int32_t x263 = -1183;
	int32_t x264 = 46;
	volatile int64_t t53 = -245LL;

	t53 = (((x261+x262)%x263)%x264);

	if (t53 != -5LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	static uint32_t x267 = 25177U;
	static int32_t x268 = INT32_MAX;
	static uint32_t t54 = 1U;

	t54 = (((x265+x266)%x267)%x268);

	if (t54 != 22610U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x269 = INT32_MAX;
	int16_t x270 = -1;
	int64_t x271 = INT64_MIN;

	t55 = (((x269+x270)%x271)%x272);

	if (t55 != 126LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = -43LL;
	volatile int16_t x275 = INT16_MIN;
	int64_t x276 = -15125695011425LL;
	volatile int64_t t56 = -174218539LL;

	t56 = (((x273+x274)%x275)%x276);

	if (t56 != -44LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x277 = -160921935434320825LL;
	static uint8_t x278 = 21U;
	uint8_t x279 = 19U;
	static int64_t t57 = -1793189LL;

	t57 = (((x277+x278)%x279)%x280);

	if (t57 != -3LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = -2;
	int32_t x282 = -217;
	uint16_t x283 = 9U;
	int64_t x284 = INT64_MAX;

	t58 = (((x281+x282)%x283)%x284);

	if (t58 != -3LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x286 = INT64_MAX;
	int16_t x287 = INT16_MIN;
	uint16_t x288 = 2043U;
	volatile int64_t t59 = 430577LL;

	t59 = (((x285+x286)%x287)%x288);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x293 = 0U;
	uint8_t x294 = UINT8_MAX;
	volatile int64_t x295 = 20655242614918LL;
	volatile int64_t t60 = -2316886LL;

	t60 = (((x293+x294)%x295)%x296);

	if (t60 != 255LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x301 = 11;
	int16_t x302 = -7494;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t61 = 2;

	t61 = (((x301+x302)%x303)%x304);

	if (t61 != -59) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	int32_t x308 = -481342100;
	volatile int32_t t62 = 235053;

	t62 = (((x305+x306)%x307)%x308);

	if (t62 != -256) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x309 = UINT64_MAX;
	uint16_t x310 = 1U;
	int16_t x311 = INT16_MAX;
	static int64_t x312 = -1213457617927201417LL;
	uint64_t t63 = 2281966LLU;

	t63 = (((x309+x310)%x311)%x312);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x313 = 1;
	volatile int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;
	volatile int64_t t64 = -2936272LL;

	t64 = (((x313+x314)%x315)%x316);

	if (t64 != -2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = -38851;
	int32_t x318 = -1;
	uint32_t x319 = 1365689397U;
	int16_t x320 = -82;
	volatile uint32_t t65 = 22U;

	t65 = (((x317+x318)%x319)%x320);

	if (t65 != 197860253U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x321 = 642570595158523889LLU;
	volatile int32_t x322 = -1;
	int8_t x323 = INT8_MIN;
	int8_t x324 = INT8_MIN;
	volatile uint64_t t66 = 655151LLU;

	t66 = (((x321+x322)%x323)%x324);

	if (t66 != 642570595158523888LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x325 = 3512469342324242LL;
	int32_t x326 = -62311;
	int64_t x328 = 51885028137286386LL;
	static volatile int64_t t67 = -5601389127LL;

	t67 = (((x325+x326)%x327)%x328);

	if (t67 != 3256LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x329 = INT8_MAX;
	int16_t x330 = INT16_MAX;
	int64_t x331 = -29126255LL;
	int32_t x332 = INT32_MIN;
	static int64_t t68 = -37LL;

	t68 = (((x329+x330)%x331)%x332);

	if (t68 != 32894LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x333 = UINT16_MAX;
	uint16_t x334 = 1399U;
	int64_t t69 = 11992626838LL;

	t69 = (((x333+x334)%x335)%x336);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x339 = INT64_MIN;
	int8_t x340 = -1;
	volatile int64_t t70 = 6998344352342721LL;

	t70 = (((x337+x338)%x339)%x340);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x341 = 16;
	static int32_t x342 = INT32_MIN;
	uint64_t x343 = 21889915LLU;
	static int8_t x344 = INT8_MAX;
	static uint64_t t71 = 0LLU;

	t71 = (((x341+x342)%x343)%x344);

	if (t71 != 85LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x345 = -1LL;
	volatile int32_t x347 = -2028185;

	t72 = (((x345+x346)%x347)%x348);

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x349 = INT64_MIN;
	uint16_t x350 = UINT16_MAX;
	static volatile int64_t t73 = 208084352LL;

	t73 = (((x349+x350)%x351)%x352);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x353 = 0U;
	uint64_t x354 = UINT64_MAX;
	static int32_t x355 = -29;
	int16_t x356 = INT16_MIN;
	uint64_t t74 = 105531524482079LLU;

	t74 = (((x353+x354)%x355)%x356);

	if (t74 != 28LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x357 = 172632261608454LLU;
	uint32_t x358 = 30014174U;
	static uint32_t x359 = UINT32_MAX;

	t75 = (((x357+x358)%x359)%x360);

	if (t75 != 376167398LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x362 = -6;
	volatile uint16_t x363 = 675U;
	static int8_t x364 = INT8_MIN;
	static uint32_t t76 = 3U;

	t76 = (((x361+x362)%x363)%x364);

	if (t76 != 464U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x367 = UINT8_MAX;
	int64_t t77 = -958521171855712997LL;

	t77 = (((x365+x366)%x367)%x368);

	if (t77 != 33LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = -827LL;
	int8_t x374 = -1;
	int8_t x375 = -1;
	uint64_t t78 = 7485529910LLU;

	t78 = (((x373+x374)%x375)%x376);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = 1154134U;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = 2LLU;
	volatile uint64_t t79 = 3122288285508623561LLU;

	t79 = (((x377+x378)%x379)%x380);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x382 = -10129;
	static uint16_t x383 = 3U;
	volatile int8_t x384 = INT8_MAX;
	int32_t t80 = -94374944;

	t80 = (((x381+x382)%x383)%x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x389 = INT64_MIN;
	volatile int64_t x392 = INT64_MIN;

	t81 = (((x389+x390)%x391)%x392);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x393 = 460337092937LLU;
	volatile int32_t x394 = 119597;
	int32_t x396 = -597525;

	t82 = (((x393+x394)%x395)%x396);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x402 = INT16_MIN;
	int64_t x403 = INT64_MIN;
	static int8_t x404 = INT8_MIN;
	int64_t t83 = 808813276285LL;

	t83 = (((x401+x402)%x403)%x404);

	if (t83 != -77LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t t84 = 753644320LLU;

	t84 = (((x405+x406)%x407)%x408);

	if (t84 != 19910594LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x409 = 1;
	static int8_t x410 = INT8_MIN;
	volatile uint8_t x411 = 41U;
	uint64_t x412 = 28702LLU;
	uint64_t t85 = 1177973LLU;

	t85 = (((x409+x410)%x411)%x412);

	if (t85 != 252LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x417 = 61161749U;
	static uint16_t x418 = 399U;
	int32_t x420 = INT32_MAX;
	uint32_t t86 = 15U;

	t86 = (((x417+x418)%x419)%x420);

	if (t86 != 61162148U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x421 = 4894;
	int32_t x422 = INT32_MIN;
	int8_t x424 = 1;
	volatile int32_t t87 = -849;

	t87 = (((x421+x422)%x423)%x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x426 = 584U;
	volatile int32_t x427 = 15488243;
	uint64_t t88 = 53LLU;

	t88 = (((x425+x426)%x427)%x428);

	if (t88 != 33351LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x429 = INT64_MIN;
	static volatile int8_t x430 = INT8_MAX;
	int32_t x431 = INT32_MAX;
	static int8_t x432 = INT8_MAX;
	static volatile int64_t t89 = -123338736864080834LL;

	t89 = (((x429+x430)%x431)%x432);

	if (t89 != -9LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x433 = INT16_MIN;
	uint32_t x434 = 9655U;
	uint32_t x435 = 375956038U;
	int8_t x436 = INT8_MIN;
	uint32_t t90 = 257U;

	t90 = (((x433+x434)%x435)%x436);

	if (t90 != 159427765U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x437 = UINT32_MAX;
	int16_t x438 = -1;
	static int8_t x439 = 3;
	static uint16_t x440 = UINT16_MAX;
	volatile uint32_t t91 = 56490730U;

	t91 = (((x437+x438)%x439)%x440);

	if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x442 = 2U;
	int8_t x443 = -11;
	volatile int16_t x444 = INT16_MIN;
	volatile int32_t t92 = 44;

	t92 = (((x441+x442)%x443)%x444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x449 = 149928U;
	int16_t x451 = INT16_MIN;
	uint16_t x452 = 7U;
	uint32_t t93 = 1851652092U;

	t93 = (((x449+x450)%x451)%x452);

	if (t93 != 3U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x461 = 363;
	volatile int16_t x462 = -1;
	int16_t x463 = 141;
	uint32_t x464 = UINT32_MAX;
	volatile uint32_t t94 = 13U;

	t94 = (((x461+x462)%x463)%x464);

	if (t94 != 80U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x465 = 8812;
	static uint16_t x466 = 2673U;
	static int16_t x468 = -407;
	int32_t t95 = -416111;

	t95 = (((x465+x466)%x467)%x468);

	if (t95 != 93) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = 51997358;
	int16_t x474 = 8902;
	volatile int16_t x475 = INT16_MAX;
	uint16_t x476 = 15U;
	static volatile int32_t t96 = 159;

	t96 = (((x473+x474)%x475)%x476);

	if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x477 = INT8_MIN;
	int16_t x478 = INT16_MIN;
	uint64_t x479 = UINT64_MAX;
	volatile uint64_t t97 = 2234202747878962481LLU;

	t97 = (((x477+x478)%x479)%x480);

	if (t97 != 4294934400LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x482 = INT16_MIN;
	uint64_t x484 = 101265360LLU;
	uint64_t t98 = 1014695217414660LLU;

	t98 = (((x481+x482)%x483)%x484);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x486 = -1LL;
	volatile int64_t x487 = -1LL;
	static uint64_t x488 = 45518802LLU;
	static uint64_t t99 = 272112035588LLU;

	t99 = (((x485+x486)%x487)%x488);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

