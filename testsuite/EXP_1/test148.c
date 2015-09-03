#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int32_t x4 = INT32_MIN;
static int32_t t1 = 50881007;
int8_t x13 = 1;
static int32_t x15 = -12;
static volatile uint32_t t5 = 1109U;
uint64_t t7 = 22544LLU;
volatile int16_t x38 = 1;
static volatile int16_t x40 = INT16_MIN;
uint16_t x45 = UINT16_MAX;
int64_t x46 = -58364LL;
static volatile int8_t x53 = -1;
int32_t x59 = INT32_MIN;
int32_t t13 = 6116;
int8_t x65 = INT8_MIN;
uint16_t x77 = 21405U;
volatile uint64_t x94 = 831LLU;
uint8_t x107 = UINT8_MAX;
uint16_t x109 = UINT16_MAX;
static int64_t x110 = -7LL;
static uint8_t x112 = 28U;
volatile int64_t t21 = -35873176752584503LL;
volatile int64_t x118 = INT64_MIN;
uint32_t x121 = 6052U;
uint8_t x133 = 1U;
volatile int64_t t25 = 1261LL;
int8_t x156 = -55;
volatile int32_t t31 = -660930;
int8_t x177 = -1;
int64_t x193 = 18466366826040LL;
uint64_t x194 = 5478781068017106386LLU;
uint64_t t36 = 288637034464084LLU;
int8_t x199 = INT8_MIN;
uint16_t x200 = 1068U;
volatile int16_t x209 = 18;
volatile uint32_t x219 = UINT32_MAX;
uint32_t t42 = 12U;
volatile uint32_t t43 = 42702549U;
static volatile int32_t x227 = -2325;
volatile uint64_t x230 = 0LLU;
uint8_t x231 = 2U;
int64_t x232 = 3230771LL;
volatile int64_t t46 = 10214279651551204LL;
int8_t x237 = -13;
int16_t x238 = 2;
static int32_t x241 = INT32_MAX;
static int8_t x258 = -5;
volatile uint32_t t51 = 34695U;
uint64_t x261 = 540584319105LLU;
volatile uint16_t x284 = UINT16_MAX;
volatile int32_t t56 = 3330;
uint16_t x285 = 7275U;
volatile int64_t x287 = INT64_MIN;
volatile int64_t t57 = -59774048946177LL;
volatile uint8_t x293 = 10U;
uint16_t x310 = 5238U;
volatile uint32_t x313 = 58U;
uint64_t x320 = UINT64_MAX;
uint64_t x324 = 15122LLU;
uint64_t x325 = 904167LLU;
static int16_t x326 = INT16_MIN;
static uint8_t x327 = 0U;
uint8_t x328 = 59U;
volatile uint64_t t65 = 852758552640LLU;
int64_t x334 = INT64_MIN;
uint16_t x339 = 34U;
volatile int16_t x342 = INT16_MAX;
static int32_t t69 = 3626383;
static volatile int32_t t71 = -3311377;
uint16_t x357 = 17861U;
int16_t x362 = 196;
int16_t x364 = -87;
int8_t x366 = 7;
static uint8_t x369 = 1U;
int64_t x372 = 28918341235458681LL;
int16_t x377 = -15395;
uint8_t x383 = UINT8_MAX;
int16_t x386 = 978;
static int64_t x388 = INT64_MIN;
static int64_t x390 = 10374694LL;
int64_t x395 = -1LL;
int64_t x398 = INT64_MIN;
uint32_t x401 = 76U;
int16_t x403 = -12;
int64_t t84 = -13600836807426LL;
volatile int64_t t85 = -4204615132003LL;
volatile int16_t x416 = INT16_MAX;
volatile int64_t t86 = -475113LL;
static int64_t x422 = 254440639470LL;
volatile int8_t x423 = 4;
int16_t x424 = INT16_MAX;
int8_t x429 = -1;
int8_t x430 = INT8_MIN;
static volatile uint32_t t89 = 548U;
uint32_t x433 = 1632U;
volatile int64_t t90 = -14917730992220LL;
int32_t x438 = INT32_MAX;
int64_t x443 = -15715541LL;
uint64_t x449 = UINT64_MAX;
uint8_t x455 = 23U;
volatile int64_t x456 = -1791679024LL;
static volatile int8_t x457 = INT8_MAX;
uint64_t x460 = 129432787044883722LLU;
static uint8_t x463 = UINT8_MAX;
uint16_t x464 = 82U;
int16_t x465 = INT16_MIN;


void f0(void) {
	uint32_t x2 = 181951751U;
	int32_t x3 = -320350808;
	static uint32_t t0 = 1U;

	t0 = (((x1+x2)|x3)%x4);

	if (t0 != 1862262190U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1010;
	volatile int16_t x6 = -1;
	int16_t x7 = -1;
	volatile int8_t x8 = INT8_MIN;

	t1 = (((x5+x6)|x7)%x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 6U;
	uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MAX;
	static uint8_t x12 = 4U;
	volatile uint32_t t2 = 31016768U;

	t2 = (((x9+x10)|x11)%x12);

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MAX;
	uint64_t x16 = 16435995109055LLU;
	static uint64_t t3 = 2894384440157955387LLU;

	t3 = (((x13+x14)|x15)%x16);

	if (t3 != 2195002981014LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 82183625LL;
	static volatile int16_t x22 = -1;
	volatile int8_t x23 = INT8_MIN;
	uint8_t x24 = 2U;
	int64_t t4 = 7LL;

	t4 = (((x21+x22)|x23)%x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 20U;
	uint32_t x26 = 9020407U;
	int16_t x27 = -7812;
	uint32_t x28 = UINT32_MAX;

	t5 = (((x25+x26)|x27)%x28);

	if (t5 != 4294960511U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MIN;
	int8_t x30 = -16;
	int64_t x31 = 0LL;
	uint8_t x32 = UINT8_MAX;
	int64_t t6 = 4056LL;

	t6 = (((x29+x30)|x31)%x32);

	if (t6 != -144LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 28U;
	int64_t x34 = 199694LL;
	volatile uint64_t x35 = 10612064809345143LLU;
	int8_t x36 = -3;

	t7 = (((x33+x34)|x35)%x36);

	if (t7 != 10612064809348223LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x37 = 667155327062198LLU;
	int8_t x39 = -6;
	uint64_t t8 = 22919880621156243LLU;

	t8 = (((x37+x38)|x39)%x40);

	if (t8 != 32767LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x47 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;
	static int64_t t9 = 22LL;

	t9 = (((x45+x46)|x47)%x48);

	if (t9 != -2147476477LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x49 = 32698U;
	static volatile uint8_t x50 = 7U;
	uint64_t x51 = UINT64_MAX;
	int8_t x52 = -1;
	uint64_t t10 = 258176747391LLU;

	t10 = (((x49+x50)|x51)%x52);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x54 = -59;
	volatile int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	volatile int32_t t11 = -3945936;

	t11 = (((x53+x54)|x55)%x56);

	if (t11 != -60) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = 3;
	int64_t x60 = INT64_MIN;
	static volatile int64_t t12 = 1647440071667722LL;

	t12 = (((x57+x58)|x59)%x60);

	if (t12 != -2147483645LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = -456;
	volatile uint8_t x62 = 1U;
	int32_t x63 = -2198;
	int16_t x64 = INT16_MIN;

	t13 = (((x61+x62)|x63)%x64);

	if (t13 != -133) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x66 = -1;
	uint32_t x67 = UINT32_MAX;
	uint16_t x68 = UINT16_MAX;
	static uint32_t t14 = 192689807U;

	t14 = (((x65+x66)|x67)%x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = 3;
	int8_t x74 = INT8_MIN;
	volatile uint32_t x75 = UINT32_MAX;
	int16_t x76 = INT16_MIN;
	uint32_t t15 = 23483343U;

	t15 = (((x73+x74)|x75)%x76);

	if (t15 != 32767U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x78 = 1740U;
	int16_t x79 = 3420;
	uint8_t x80 = UINT8_MAX;
	static volatile uint32_t t16 = 433U;

	t16 = (((x77+x78)|x79)%x80);

	if (t16 != 220U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = 16005U;
	static volatile int64_t x90 = INT64_MIN;
	int8_t x91 = INT8_MIN;
	int16_t x92 = 16;
	int64_t t17 = 791LL;

	t17 = (((x89+x90)|x91)%x92);

	if (t17 != -11LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 785049991LLU;
	uint32_t x95 = UINT32_MAX;
	volatile int8_t x96 = INT8_MAX;
	uint64_t t18 = 346404230552784LLU;

	t18 = (((x93+x94)|x95)%x96);

	if (t18 != 15LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x101 = 0;
	static int32_t x102 = 18;
	int32_t x103 = INT32_MIN;
	int32_t x104 = -1;
	volatile int32_t t19 = 259;

	t19 = (((x101+x102)|x103)%x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = 23;
	int32_t x106 = INT32_MIN;
	uint32_t x108 = UINT32_MAX;
	uint32_t t20 = 816101654U;

	t20 = (((x105+x106)|x107)%x108);

	if (t20 != 2147483903U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x111 = UINT8_MAX;

	t21 = (((x109+x110)|x111)%x112);

	if (t21 != 15LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x117 = INT16_MAX;
	volatile int32_t x119 = 1014796660;
	int8_t x120 = INT8_MAX;
	int64_t t22 = 514074377LL;

	t22 = (((x117+x118)|x119)%x120);

	if (t22 != -38LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x122 = -1;
	volatile int16_t x123 = INT16_MIN;
	int16_t x124 = -1;
	uint32_t t23 = 845620839U;

	t23 = (((x121+x122)|x123)%x124);

	if (t23 != 4294940579U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x134 = 5;
	static uint8_t x135 = UINT8_MAX;
	uint32_t x136 = 61U;
	volatile uint32_t t24 = 171093310U;

	t24 = (((x133+x134)|x135)%x136);

	if (t24 != 11U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x141 = 1;
	int64_t x142 = INT64_MIN;
	uint16_t x143 = 673U;
	int64_t x144 = INT64_MAX;

	t25 = (((x141+x142)|x143)%x144);

	if (t25 != -9223372036854775135LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x145 = INT8_MIN;
	volatile int32_t x146 = INT32_MAX;
	static int8_t x147 = INT8_MIN;
	int64_t x148 = -549607510728734LL;
	static int64_t t26 = -968788LL;

	t26 = (((x145+x146)|x147)%x148);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x153 = INT8_MAX;
	static volatile int64_t x154 = INT64_MIN;
	int16_t x155 = 58;
	volatile int64_t t27 = -5989438LL;

	t27 = (((x153+x154)|x155)%x156);

	if (t27 != -46LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x157 = -4;
	static uint32_t x158 = 1080U;
	volatile int16_t x159 = -1682;
	uint8_t x160 = 80U;
	volatile uint32_t t28 = 266198268U;

	t28 = (((x157+x158)|x159)%x160);

	if (t28 != 14U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x161 = INT32_MIN;
	static int64_t x162 = INT64_MAX;
	static int32_t x163 = -925929;
	int64_t x164 = -1LL;
	int64_t t29 = -907206817LL;

	t29 = (((x161+x162)|x163)%x164);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x165 = 2U;
	volatile int8_t x166 = -1;
	static int64_t x167 = INT64_MAX;
	int16_t x168 = -1;
	volatile int64_t t30 = 61035572476828LL;

	t30 = (((x165+x166)|x167)%x168);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x173 = INT16_MIN;
	static volatile int16_t x174 = -2;
	int16_t x175 = INT16_MAX;
	volatile int16_t x176 = -1;

	t31 = (((x173+x174)|x175)%x176);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x178 = 0;
	int8_t x179 = INT8_MIN;
	int32_t x180 = -6724;
	int32_t t32 = -1;

	t32 = (((x177+x178)|x179)%x180);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x181 = 12867907LL;
	volatile int32_t x182 = 4161;
	int16_t x183 = 4;
	static uint32_t x184 = 10721227U;
	static int64_t t33 = -294104103664LL;

	t33 = (((x181+x182)|x183)%x184);

	if (t33 != 2150841LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x185 = UINT8_MAX;
	int8_t x186 = -2;
	static int8_t x187 = INT8_MAX;
	static uint32_t x188 = UINT32_MAX;
	uint32_t t34 = 1059775300U;

	t34 = (((x185+x186)|x187)%x188);

	if (t34 != 255U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x189 = INT32_MIN;
	static int64_t x190 = -1LL;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = INT32_MIN;
	int64_t t35 = -926281382745797850LL;

	t35 = (((x189+x190)|x191)%x192);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x195 = 7248031356299444LLU;
	volatile uint64_t x196 = 31LLU;

	t36 = (((x193+x194)|x195)%x196);

	if (t36 != 6LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x197 = INT8_MIN;
	static uint64_t x198 = 50986LLU;
	volatile uint64_t t37 = 11750059340812LLU;

	t37 = (((x197+x198)|x199)%x200);

	if (t37 != 782LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x201 = -56;
	int32_t x202 = INT32_MAX;
	uint32_t x203 = 1U;
	volatile uint32_t x204 = 9297U;
	static uint32_t t38 = 33913882U;

	t38 = (((x201+x202)|x203)%x204);

	if (t38 != 6749U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = INT16_MIN;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = -59116682517LL;
	static volatile int8_t x208 = 5;
	static volatile uint64_t t39 = 2498865641LLU;

	t39 = (((x205+x206)|x207)%x208);

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x210 = INT16_MAX;
	int64_t x211 = -1LL;
	uint64_t x212 = 1300517309062852469LLU;
	uint64_t t40 = 766129387LLU;

	t40 = (((x209+x210)|x211)%x212);

	if (t40 != 239501746829617049LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x213 = INT8_MIN;
	uint8_t x214 = 25U;
	volatile uint8_t x215 = 1U;
	volatile uint8_t x216 = UINT8_MAX;
	volatile int32_t t41 = 23070;

	t41 = (((x213+x214)|x215)%x216);

	if (t41 != -103) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x217 = UINT8_MAX;
	static int16_t x218 = INT16_MIN;
	volatile uint16_t x220 = UINT16_MAX;

	t42 = (((x217+x218)|x219)%x220);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x221 = INT16_MIN;
	int32_t x222 = 23979733;
	static uint32_t x223 = 609U;
	uint32_t x224 = 289212596U;

	t43 = (((x221+x222)|x223)%x224);

	if (t43 != 23946997U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x225 = 115452LLU;
	static int64_t x226 = INT64_MIN;
	volatile int32_t x228 = INT32_MAX;
	uint64_t t44 = 4737952347258419981LLU;

	t44 = (((x225+x226)|x227)%x228);

	if (t44 != 2147481346LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x229 = UINT8_MAX;
	volatile uint64_t t45 = 15544258267LLU;

	t45 = (((x229+x230)|x231)%x232);

	if (t45 != 255LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x233 = UINT8_MAX;
	int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;

	t46 = (((x233+x234)|x235)%x236);

	if (t46 != -2147483266LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x239 = 1258U;
	int16_t x240 = 3085;
	volatile uint32_t t47 = 11740227U;

	t47 = (((x237+x238)|x239)%x240);

	if (t47 != 2530U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x242 = INT8_MIN;
	static uint32_t x243 = 31393108U;
	uint8_t x244 = UINT8_MAX;
	volatile uint32_t t48 = 5881005U;

	t48 = (((x241+x242)|x243)%x244);

	if (t48 != 254U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x245 = 11U;
	int32_t x246 = 8;
	int16_t x247 = 2;
	int16_t x248 = INT16_MIN;
	volatile uint32_t t49 = 235U;

	t49 = (((x245+x246)|x247)%x248);

	if (t49 != 19U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x253 = -55;
	int16_t x254 = -1;
	int16_t x255 = -35;
	int64_t x256 = INT64_MIN;
	int64_t t50 = -352988535679820373LL;

	t50 = (((x253+x254)|x255)%x256);

	if (t50 != -35LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x257 = 3838U;
	static volatile int32_t x259 = -12433;
	int8_t x260 = -1;

	t51 = (((x257+x258)|x259)%x260);

	if (t51 != 4294955007U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x262 = 651;
	int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MIN;
	static uint64_t t52 = 63253418LLU;

	t52 = (((x261+x262)|x263)%x264);

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x265 = 31LLU;
	uint16_t x266 = UINT16_MAX;
	volatile int8_t x267 = -17;
	volatile int16_t x268 = 26;
	uint64_t t53 = 2576411998LLU;

	t53 = (((x265+x266)|x267)%x268);

	if (t53 != 15LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = -5;
	uint16_t x270 = 1U;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 2U;
	int64_t t54 = -83424605414LL;

	t54 = (((x269+x270)|x271)%x272);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x273 = INT32_MIN;
	uint8_t x274 = UINT8_MAX;
	volatile uint8_t x275 = UINT8_MAX;
	int16_t x276 = 131;
	volatile int32_t t55 = 18360;

	t55 = (((x273+x274)|x275)%x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x281 = 1U;
	static int16_t x282 = 1976;
	int8_t x283 = 4;

	t56 = (((x281+x282)|x283)%x284);

	if (t56 != 1981) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x286 = -1LL;
	uint16_t x288 = 267U;

	t57 = (((x285+x286)|x287)%x288);

	if (t57 != -102LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x294 = -1LL;
	int64_t x295 = 128512LL;
	static int8_t x296 = INT8_MAX;
	static volatile int64_t t58 = -16273187LL;

	t58 = (((x293+x294)|x295)%x296);

	if (t58 != 124LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x297 = 15271603LLU;
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;
	volatile uint64_t t59 = 3LLU;

	t59 = (((x297+x298)|x299)%x300);

	if (t59 != 9223372036854744755LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x301 = 0U;
	uint32_t x302 = 15146103U;
	uint32_t x303 = UINT32_MAX;
	uint32_t x304 = 6U;
	uint32_t t60 = 1436835U;

	t60 = (((x301+x302)|x303)%x304);

	if (t60 != 3U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = INT16_MIN;
	int8_t x311 = INT8_MIN;
	volatile int32_t x312 = INT32_MAX;
	int32_t t61 = 895;

	t61 = (((x309+x310)|x311)%x312);

	if (t61 != -10) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	uint32_t t62 = 12U;

	t62 = (((x313+x314)|x315)%x316);

	if (t62 != 2147483577U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = 20010LLU;
	volatile uint16_t x319 = 180U;
	uint64_t t63 = 2255LLU;

	t63 = (((x317+x318)|x319)%x320);

	if (t63 != 18446744073709539006LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x321 = 34U;
	static int16_t x322 = -1;
	int16_t x323 = INT16_MIN;
	uint64_t t64 = 2060809352162LLU;

	t64 = (((x321+x322)|x323)%x324);

	if (t64 != 10109LLU) { NG(); } else { ; }
	
}

void f65(void) {


	t65 = (((x325+x326)|x327)%x328);

	if (t65 != 28LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x329 = -101;
	int32_t x330 = 4708;
	uint32_t x331 = 481183U;
	uint16_t x332 = UINT16_MAX;
	volatile uint32_t t66 = 4508266U;

	t66 = (((x329+x330)|x331)%x332);

	if (t66 != 22534U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x333 = INT8_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	int64_t x336 = INT64_MIN;
	int64_t t67 = 1572622579406LL;

	t67 = (((x333+x334)|x335)%x336);

	if (t67 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x337 = -1LL;
	int16_t x338 = -1;
	int64_t x340 = INT64_MIN;
	volatile int64_t t68 = -236LL;

	t68 = (((x337+x338)|x339)%x340);

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x341 = INT8_MIN;
	int32_t x343 = INT32_MAX;
	int8_t x344 = INT8_MAX;

	t69 = (((x341+x342)|x343)%x344);

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x345 = 109U;
	int16_t x346 = 943;
	int64_t x347 = INT64_MIN;
	uint16_t x348 = 59U;
	int64_t t70 = -43116019LL;

	t70 = (((x345+x346)|x347)%x348);

	if (t70 != -42LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x349 = INT32_MAX;
	int16_t x350 = INT16_MIN;
	uint8_t x351 = UINT8_MAX;
	uint16_t x352 = 90U;

	t71 = (((x349+x350)|x351)%x352);

	if (t71 != 29) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x358 = -1;
	uint8_t x359 = UINT8_MAX;
	uint32_t x360 = UINT32_MAX;
	uint32_t t72 = 32257U;

	t72 = (((x357+x358)|x359)%x360);

	if (t72 != 17919U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = INT16_MIN;
	int64_t x363 = INT64_MIN;
	static int64_t t73 = -7598810952476607LL;

	t73 = (((x361+x362)|x363)%x364);

	if (t73 != -34LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x365 = -1;
	volatile int8_t x367 = -51;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t74 = 1877119;

	t74 = (((x365+x366)|x367)%x368);

	if (t74 != -49) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x370 = INT16_MIN;
	static int8_t x371 = INT8_MIN;
	static volatile int64_t t75 = 286832246215410LL;

	t75 = (((x369+x370)|x371)%x372);

	if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x373 = UINT64_MAX;
	int32_t x374 = -28294635;
	uint8_t x375 = 41U;
	int16_t x376 = INT16_MAX;
	volatile uint64_t t76 = 309811LLU;

	t76 = (((x373+x374)|x375)%x376);

	if (t76 != 16109LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x378 = 15U;
	volatile int8_t x379 = INT8_MIN;
	volatile int8_t x380 = 1;
	volatile int32_t t77 = -1;

	t77 = (((x377+x378)|x379)%x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x381 = UINT16_MAX;
	uint64_t x382 = 958526LLU;
	volatile uint32_t x384 = 1069U;
	uint64_t t78 = 53LLU;

	t78 = (((x381+x382)|x383)%x384);

	if (t78 != 153LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x385 = UINT64_MAX;
	uint64_t x387 = UINT64_MAX;
	uint64_t t79 = 7921383LLU;

	t79 = (((x385+x386)|x387)%x388);

	if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x389 = -1LL;
	int8_t x391 = 1;
	volatile uint8_t x392 = 92U;
	volatile int64_t t80 = 122LL;

	t80 = (((x389+x390)|x391)%x392);

	if (t80 != 37LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x393 = INT16_MIN;
	int8_t x394 = -1;
	int8_t x396 = 1;
	static int64_t t81 = 34726338117835823LL;

	t81 = (((x393+x394)|x395)%x396);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = UINT8_MAX;
	int64_t t82 = 2LL;

	t82 = (((x397+x398)|x399)%x400);

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x402 = 363;
	int8_t x404 = 2;
	static uint32_t t83 = 14402U;

	t83 = (((x401+x402)|x403)%x404);

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x405 = -1LL;
	uint16_t x406 = 2U;
	volatile uint8_t x407 = UINT8_MAX;
	static volatile int16_t x408 = INT16_MIN;

	t84 = (((x405+x406)|x407)%x408);

	if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x409 = 16;
	int64_t x410 = -62005541697892592LL;
	int32_t x411 = INT32_MIN;
	static uint8_t x412 = 6U;

	t85 = (((x409+x410)|x411)%x412);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x413 = INT64_MAX;
	volatile int32_t x414 = INT32_MIN;
	static int8_t x415 = -1;

	t86 = (((x413+x414)|x415)%x416);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x421 = 2LLU;
	uint64_t t87 = 0LLU;

	t87 = (((x421+x422)|x423)%x424);

	if (t87 != 2193LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x425 = 31U;
	volatile uint64_t x426 = 37505LLU;
	uint64_t x427 = UINT64_MAX;
	int32_t x428 = -1;
	static volatile uint64_t t88 = 1435LLU;

	t88 = (((x425+x426)|x427)%x428);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x431 = 47843174U;
	uint16_t x432 = 2U;

	t89 = (((x429+x430)|x431)%x432);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x434 = INT64_MIN;
	volatile uint32_t x435 = 109546579U;
	int8_t x436 = INT8_MIN;

	t90 = (((x433+x434)|x435)%x436);

	if (t90 != -13LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x437 = 46LLU;
	uint64_t x439 = UINT64_MAX;
	int16_t x440 = -18;
	static volatile uint64_t t91 = 2385865238LLU;

	t91 = (((x437+x438)|x439)%x440);

	if (t91 != 17LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x441 = INT16_MAX;
	uint8_t x442 = UINT8_MAX;
	uint64_t x444 = UINT64_MAX;
	uint64_t t92 = 11697073625768LLU;

	t92 = (((x441+x442)|x443)%x444);

	if (t92 != 18446744073693869055LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x445 = UINT8_MAX;
	int32_t x446 = INT32_MIN;
	uint32_t x447 = UINT32_MAX;
	int32_t x448 = INT32_MIN;
	volatile uint32_t t93 = 66276580U;

	t93 = (((x445+x446)|x447)%x448);

	if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x450 = 2367LLU;
	int8_t x451 = 0;
	uint16_t x452 = UINT16_MAX;
	uint64_t t94 = 632299237230037LLU;

	t94 = (((x449+x450)|x451)%x452);

	if (t94 != 2366LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x453 = 4;
	uint64_t x454 = 318890070582LLU;
	volatile uint64_t t95 = 18845493785LLU;

	t95 = (((x453+x454)|x455)%x456);

	if (t95 != 318890070591LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x458 = 13U;
	static uint16_t x459 = UINT16_MAX;
	volatile uint64_t t96 = 1045412172113LLU;

	t96 = (((x457+x458)|x459)%x460);

	if (t96 != 65535LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x461 = UINT32_MAX;
	int32_t x462 = INT32_MAX;
	volatile uint32_t t97 = 2027882850U;

	t97 = (((x461+x462)|x463)%x464);

	if (t97 != 79U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x466 = -204;
	uint8_t x467 = 8U;
	volatile uint32_t x468 = 11591488U;
	static volatile uint32_t t98 = 3909617U;

	t98 = (((x465+x466)|x467)%x468);

	if (t98 != 6083772U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x473 = UINT16_MAX;
	int8_t x474 = INT8_MAX;
	static uint16_t x475 = 125U;
	volatile int8_t x476 = INT8_MAX;
	static volatile int32_t t99 = -190176;

	t99 = (((x473+x474)|x475)%x476);

	if (t99 != 4) { NG(); } else { ; }
	
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

