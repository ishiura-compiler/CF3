#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
int32_t x8 = INT32_MIN;
uint16_t x10 = 172U;
int32_t x12 = INT32_MIN;
int64_t x15 = -1LL;
static int32_t x21 = -40877474;
static int8_t x26 = INT8_MIN;
volatile int64_t x28 = 552LL;
static int32_t x32 = -9929;
volatile int32_t t6 = 10244;
uint16_t x36 = UINT16_MAX;
volatile int32_t t7 = 0;
uint8_t x37 = 28U;
volatile int16_t x38 = INT16_MAX;
int16_t x39 = INT16_MIN;
int8_t x41 = 1;
static int32_t x42 = 2286296;
int16_t x56 = INT16_MAX;
static int32_t x64 = INT32_MIN;
volatile int64_t x66 = -101508694674LL;
uint16_t x69 = 15U;
uint64_t x71 = 104LLU;
uint16_t x81 = 11U;
int16_t x84 = INT16_MIN;
static uint16_t x104 = 2696U;
static int8_t x108 = INT8_MAX;
volatile int32_t x109 = -40293591;
int64_t x111 = 1711545182778665443LL;
uint32_t x112 = UINT32_MAX;
static int32_t t24 = -1;
volatile int32_t t25 = -118219381;
uint8_t x129 = 59U;
int32_t x144 = INT32_MIN;
volatile int16_t x146 = 0;
int64_t x147 = -16362562093LL;
int16_t x151 = -1;
int16_t x152 = -1;
int16_t x156 = 13;
int8_t x159 = -1;
uint64_t x161 = UINT64_MAX;
int32_t t39 = 20198;
int64_t x181 = 5520LL;
int8_t x196 = -1;
int64_t x198 = 416503700586LL;
volatile int32_t x204 = 29898596;
int32_t x205 = 1477;
static volatile uint16_t x209 = UINT16_MAX;
volatile uint8_t x212 = UINT8_MAX;
volatile int16_t x226 = -574;
uint64_t x229 = 649692LLU;
volatile int8_t x238 = -21;
static int64_t x241 = -1LL;
static int16_t x263 = 1912;
uint8_t x265 = UINT8_MAX;
static int32_t x268 = INT32_MAX;
int8_t x278 = INT8_MIN;
volatile int32_t t64 = -5;
static uint16_t x288 = 5644U;
static volatile int16_t x291 = INT16_MIN;
uint64_t x297 = 57688504342081439LLU;
volatile int32_t t69 = -1175686;
volatile uint8_t x316 = 46U;
int16_t x320 = INT16_MIN;
int8_t x324 = -11;
volatile int32_t t72 = -75705;
volatile uint32_t x325 = 1U;
uint64_t x326 = 2038684888LLU;
int32_t x327 = INT32_MIN;
int16_t x332 = 10170;
int16_t x336 = INT16_MIN;
volatile int32_t t75 = 542;
static int64_t x337 = INT64_MIN;
int32_t x340 = INT32_MIN;
static uint8_t x350 = 69U;
uint16_t x355 = 72U;
volatile int32_t x356 = INT32_MIN;
int8_t x362 = 3;
volatile int16_t x379 = 5;
int64_t x383 = 8610981LL;
uint64_t x385 = UINT64_MAX;
int8_t x386 = 32;
volatile int32_t t87 = -731242884;
static int16_t x390 = INT16_MIN;
static int16_t x411 = 1;
volatile int32_t t95 = 893972;
uint32_t x431 = 27218471U;
static volatile int16_t x434 = -1;
uint8_t x435 = 27U;
int32_t x436 = 2;
int32_t t98 = 6;
static uint64_t x442 = 28633539915LLU;


void f0(void) {
	volatile int32_t x1 = -1;
	int8_t x2 = INT8_MIN;
	uint64_t x4 = 2263LLU;
	volatile int32_t t0 = -67;

	t0 = (((x1&x2)-x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MIN;
	static volatile int32_t x7 = -8;
	int32_t t1 = 8382;

	t1 = (((x5&x6)-x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint8_t x11 = 22U;
	volatile int32_t t2 = 1038441;

	t2 = (((x9&x10)-x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint8_t x14 = 8U;
	uint64_t x16 = UINT64_MAX;
	volatile int32_t t3 = 340;

	t3 = (((x13&x14)-x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x22 = -1;
	int64_t x23 = 847294129LL;
	static uint64_t x24 = UINT64_MAX;
	int32_t t4 = -194715;

	t4 = (((x21&x22)-x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -2650024075417581402LL;
	int32_t x27 = -3964022;
	volatile int32_t t5 = -452497;

	t5 = (((x25&x26)-x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = INT64_MAX;
	uint8_t x30 = UINT8_MAX;
	uint8_t x31 = 10U;

	t6 = (((x29&x30)-x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	int8_t x34 = INT8_MIN;
	uint8_t x35 = 36U;

	t7 = (((x33&x34)-x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t8 = 104335249;

	t8 = (((x37&x38)-x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x43 = -13669426LL;
	uint64_t x44 = UINT64_MAX;
	int32_t t9 = 51770929;

	t9 = (((x41&x42)-x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	volatile uint16_t x50 = UINT16_MAX;
	uint16_t x51 = 14U;
	static uint16_t x52 = UINT16_MAX;
	int32_t t10 = -1;

	t10 = (((x49&x50)-x51)==x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = INT16_MAX;
	int8_t x54 = 10;
	int16_t x55 = -1;
	volatile int32_t t11 = -32769;

	t11 = (((x53&x54)-x55)==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = INT32_MIN;
	volatile int8_t x58 = INT8_MAX;
	int64_t x59 = -1LL;
	static uint64_t x60 = 0LLU;
	static int32_t t12 = 620;

	t12 = (((x57&x58)-x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MAX;
	static volatile uint8_t x62 = 0U;
	int64_t x63 = INT64_MAX;
	volatile int32_t t13 = -1;

	t13 = (((x61&x62)-x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 97U;
	volatile int32_t x67 = -4806;
	int8_t x68 = 1;
	static int32_t t14 = -402;

	t14 = (((x65&x66)-x67)==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x70 = 0U;
	int64_t x72 = INT64_MIN;
	int32_t t15 = 192;

	t15 = (((x69&x70)-x71)==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x73 = 169U;
	int8_t x74 = -2;
	int32_t x75 = INT32_MAX;
	uint16_t x76 = 143U;
	static volatile int32_t t16 = 381870;

	t16 = (((x73&x74)-x75)==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = INT64_MIN;
	volatile int32_t x83 = -1;
	volatile int32_t t17 = 7416333;

	t17 = (((x81&x82)-x83)==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = UINT8_MAX;
	uint64_t x90 = UINT64_MAX;
	int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t18 = -211;

	t18 = (((x89&x90)-x91)==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = 36;
	int8_t x94 = -1;
	volatile uint32_t x95 = UINT32_MAX;
	int64_t x96 = INT64_MAX;
	int32_t t19 = 15155771;

	t19 = (((x93&x94)-x95)==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = 101485800;
	int64_t x98 = INT64_MIN;
	uint64_t x99 = UINT64_MAX;
	uint32_t x100 = 92U;
	static volatile int32_t t20 = 325797;

	t20 = (((x97&x98)-x99)==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x101 = 0;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = INT16_MIN;
	int32_t t21 = 29;

	t21 = (((x101&x102)-x103)==x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x105 = INT8_MAX;
	volatile uint64_t x106 = 56769835774108LLU;
	int8_t x107 = 1;
	int32_t t22 = -62275383;

	t22 = (((x105&x106)-x107)==x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x110 = UINT32_MAX;
	volatile int32_t t23 = 3231;

	t23 = (((x109&x110)-x111)==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x117 = -1;
	uint16_t x118 = 223U;
	static uint16_t x119 = 6585U;
	int32_t x120 = INT32_MIN;

	t24 = (((x117&x118)-x119)==x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = 283;
	uint32_t x122 = UINT32_MAX;
	int64_t x123 = -1LL;
	uint32_t x124 = 239518952U;

	t25 = (((x121&x122)-x123)==x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MIN;
	volatile uint8_t x126 = UINT8_MAX;
	volatile uint16_t x127 = 18687U;
	int32_t x128 = INT32_MIN;
	volatile int32_t t26 = 4891;

	t26 = (((x125&x126)-x127)==x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x130 = -1LL;
	static uint32_t x131 = 24917U;
	volatile uint16_t x132 = UINT16_MAX;
	static volatile int32_t t27 = -262403988;

	t27 = (((x129&x130)-x131)==x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = 309922LL;
	int16_t x134 = -1;
	int32_t x135 = INT32_MIN;
	static volatile int32_t x136 = -1;
	volatile int32_t t28 = 0;

	t28 = (((x133&x134)-x135)==x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MIN;
	static int8_t x138 = INT8_MIN;
	int16_t x139 = 12;
	int16_t x140 = -420;
	int32_t t29 = 9492025;

	t29 = (((x137&x138)-x139)==x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x141 = INT32_MAX;
	uint64_t x142 = 4480994464046896731LLU;
	uint8_t x143 = UINT8_MAX;
	volatile int32_t t30 = -12654;

	t30 = (((x141&x142)-x143)==x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 52592914537117024LLU;
	uint16_t x148 = UINT16_MAX;
	int32_t t31 = 14090047;

	t31 = (((x145&x146)-x147)==x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	volatile int32_t t32 = 16521;

	t32 = (((x149&x150)-x151)==x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -1;
	volatile int8_t x154 = -1;
	int32_t x155 = 40;
	volatile int32_t t33 = 29647;

	t33 = (((x153&x154)-x155)==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = 0;
	int8_t x158 = -1;
	uint64_t x160 = 134588407395LLU;
	static volatile int32_t t34 = 414;

	t34 = (((x157&x158)-x159)==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x162 = INT16_MIN;
	volatile int64_t x163 = 251864881326043334LL;
	int32_t x164 = INT32_MIN;
	int32_t t35 = -256510755;

	t35 = (((x161&x162)-x163)==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x165 = INT16_MAX;
	static int64_t x166 = -2237LL;
	uint32_t x167 = UINT32_MAX;
	static uint64_t x168 = 2461384LLU;
	int32_t t36 = -4;

	t36 = (((x165&x166)-x167)==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x169 = INT32_MIN;
	int16_t x170 = 1;
	volatile int8_t x171 = -1;
	volatile uint8_t x172 = UINT8_MAX;
	volatile int32_t t37 = -5;

	t37 = (((x169&x170)-x171)==x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 2265U;
	int8_t x174 = INT8_MIN;
	static int64_t x175 = INT64_MAX;
	int64_t x176 = 1378LL;
	volatile int32_t t38 = -647;

	t38 = (((x173&x174)-x175)==x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x177 = 32529U;
	volatile int64_t x178 = -1LL;
	int16_t x179 = INT16_MAX;
	int32_t x180 = INT32_MIN;

	t39 = (((x177&x178)-x179)==x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x182 = UINT8_MAX;
	uint32_t x183 = 1086U;
	static uint32_t x184 = UINT32_MAX;
	static volatile int32_t t40 = 29804;

	t40 = (((x181&x182)-x183)==x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x185 = INT8_MIN;
	static int64_t x186 = -252536985LL;
	volatile uint16_t x187 = 0U;
	int32_t x188 = -178011664;
	int32_t t41 = 117496652;

	t41 = (((x185&x186)-x187)==x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 87LLU;
	volatile int16_t x190 = 959;
	int32_t x191 = INT32_MAX;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t42 = 334753727;

	t42 = (((x189&x190)-x191)==x192);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x193 = INT32_MAX;
	volatile int32_t x194 = INT32_MIN;
	int16_t x195 = -1;
	static volatile int32_t t43 = -156595204;

	t43 = (((x193&x194)-x195)==x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = 118641532317339923LL;
	uint16_t x199 = 21952U;
	static volatile uint32_t x200 = 187U;
	int32_t t44 = -1;

	t44 = (((x197&x198)-x199)==x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MAX;
	uint16_t x203 = 1312U;
	static volatile int32_t t45 = -626;

	t45 = (((x201&x202)-x203)==x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x206 = INT64_MAX;
	int32_t x207 = 11978688;
	int8_t x208 = -2;
	volatile int32_t t46 = 425889;

	t46 = (((x205&x206)-x207)==x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x210 = INT32_MIN;
	static uint16_t x211 = 2761U;
	int32_t t47 = -50082360;

	t47 = (((x209&x210)-x211)==x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 30U;
	int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t48 = -22;

	t48 = (((x213&x214)-x215)==x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = 7;
	uint16_t x219 = 9033U;
	uint16_t x220 = 127U;
	volatile int32_t t49 = -12547251;

	t49 = (((x217&x218)-x219)==x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x221 = 0U;
	static int64_t x222 = INT64_MAX;
	int16_t x223 = -3;
	volatile uint32_t x224 = 116762U;
	volatile int32_t t50 = -244;

	t50 = (((x221&x222)-x223)==x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MIN;
	int16_t x227 = INT16_MAX;
	uint32_t x228 = UINT32_MAX;
	int32_t t51 = 13;

	t51 = (((x225&x226)-x227)==x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x230 = -1;
	uint8_t x231 = UINT8_MAX;
	int8_t x232 = INT8_MIN;
	int32_t t52 = 72419620;

	t52 = (((x229&x230)-x231)==x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x233 = 787943464U;
	uint32_t x234 = 3387U;
	uint32_t x235 = 33581U;
	int16_t x236 = -4449;
	volatile int32_t t53 = 32646978;

	t53 = (((x233&x234)-x235)==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = INT16_MIN;
	int64_t x239 = INT64_MIN;
	uint16_t x240 = 13130U;
	int32_t t54 = 3723678;

	t54 = (((x237&x238)-x239)==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x242 = INT16_MIN;
	volatile uint16_t x243 = 10838U;
	int16_t x244 = -1;
	volatile int32_t t55 = -7177303;

	t55 = (((x241&x242)-x243)==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x245 = INT16_MAX;
	static volatile uint64_t x246 = 330691772692061649LLU;
	volatile int64_t x247 = 5LL;
	int8_t x248 = INT8_MIN;
	volatile int32_t t56 = -177615;

	t56 = (((x245&x246)-x247)==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x249 = UINT8_MAX;
	volatile uint32_t x250 = 1259U;
	static int8_t x251 = -3;
	volatile uint16_t x252 = 11U;
	int32_t t57 = 13396;

	t57 = (((x249&x250)-x251)==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x253 = INT16_MIN;
	int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	static uint16_t x256 = 2U;
	static int32_t t58 = -1;

	t58 = (((x253&x254)-x255)==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	uint32_t x259 = 1301273026U;
	volatile int64_t x260 = 4023056491539764240LL;
	int32_t t59 = 564;

	t59 = (((x257&x258)-x259)==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x261 = UINT64_MAX;
	static uint16_t x262 = 993U;
	int32_t x264 = INT32_MIN;
	int32_t t60 = 164737;

	t60 = (((x261&x262)-x263)==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = 4;
	int32_t t61 = 7;

	t61 = (((x265&x266)-x267)==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x269 = INT16_MAX;
	volatile int8_t x270 = INT8_MAX;
	volatile uint8_t x271 = 0U;
	uint64_t x272 = 649437989633290693LLU;
	int32_t t62 = 7305;

	t62 = (((x269&x270)-x271)==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MAX;
	int64_t x274 = INT64_MIN;
	int8_t x275 = 1;
	int64_t x276 = -1LL;
	int32_t t63 = 115;

	t63 = (((x273&x274)-x275)==x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	volatile uint32_t x279 = 7791U;
	volatile int64_t x280 = -1LL;

	t64 = (((x277&x278)-x279)==x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MAX;
	int64_t x287 = 6LL;
	int32_t t65 = -105471;

	t65 = (((x285&x286)-x287)==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = INT16_MIN;
	volatile uint32_t x290 = UINT32_MAX;
	int32_t x292 = -847499;
	static int32_t t66 = 1167991;

	t66 = (((x289&x290)-x291)==x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x298 = UINT32_MAX;
	uint16_t x299 = 167U;
	int8_t x300 = INT8_MAX;
	volatile int32_t t67 = 7820727;

	t67 = (((x297&x298)-x299)==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = -1;
	uint32_t x302 = UINT32_MAX;
	int32_t x303 = -1;
	int8_t x304 = INT8_MIN;
	int32_t t68 = 65;

	t68 = (((x301&x302)-x303)==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MAX;
	static int16_t x306 = -58;
	int16_t x307 = 3927;
	int16_t x308 = 4;

	t69 = (((x305&x306)-x307)==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = -1LL;
	volatile int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	int32_t t70 = -2771848;

	t70 = (((x313&x314)-x315)==x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x317 = -95061560;
	volatile int8_t x318 = 0;
	volatile int8_t x319 = INT8_MAX;
	volatile int32_t t71 = -1;

	t71 = (((x317&x318)-x319)==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;

	t72 = (((x321&x322)-x323)==x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x328 = INT64_MIN;
	volatile int32_t t73 = 279700;

	t73 = (((x325&x326)-x327)==x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x329 = INT8_MIN;
	int8_t x330 = INT8_MAX;
	static int32_t x331 = -12703166;
	int32_t t74 = -7;

	t74 = (((x329&x330)-x331)==x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	static int8_t x334 = -1;
	static uint8_t x335 = UINT8_MAX;

	t75 = (((x333&x334)-x335)==x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x338 = -1;
	int64_t x339 = 0LL;
	int32_t t76 = 1402378;

	t76 = (((x337&x338)-x339)==x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = 207U;
	uint16_t x342 = 5969U;
	static int32_t x343 = -126;
	volatile int16_t x344 = 6;
	volatile int32_t t77 = 0;

	t77 = (((x341&x342)-x343)==x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x345 = 6031U;
	int16_t x346 = -283;
	int32_t x347 = -2202;
	int16_t x348 = INT16_MIN;
	static int32_t t78 = -305102924;

	t78 = (((x345&x346)-x347)==x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = 2;
	static uint64_t x351 = UINT64_MAX;
	int64_t x352 = -1LL;
	static volatile int32_t t79 = -1;

	t79 = (((x349&x350)-x351)==x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x354 = INT16_MIN;
	int32_t t80 = -151;

	t80 = (((x353&x354)-x355)==x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x361 = INT32_MIN;
	int16_t x363 = -1;
	int16_t x364 = -5673;
	volatile int32_t t81 = 1;

	t81 = (((x361&x362)-x363)==x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x365 = INT8_MAX;
	uint64_t x366 = UINT64_MAX;
	volatile uint64_t x367 = UINT64_MAX;
	int16_t x368 = 2;
	volatile int32_t t82 = -2208;

	t82 = (((x365&x366)-x367)==x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MIN;
	volatile int32_t x370 = -19;
	int8_t x371 = INT8_MIN;
	uint32_t x372 = 16U;
	int32_t t83 = -1016520640;

	t83 = (((x369&x370)-x371)==x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MIN;
	uint64_t x375 = 8246767438467252LLU;
	int8_t x376 = -1;
	static int32_t t84 = 0;

	t84 = (((x373&x374)-x375)==x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x377 = -1;
	int16_t x378 = INT16_MIN;
	uint64_t x380 = 150983588356LLU;
	volatile int32_t t85 = 788;

	t85 = (((x377&x378)-x379)==x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = -38133;
	volatile int64_t x384 = INT64_MIN;
	int32_t t86 = 37;

	t86 = (((x381&x382)-x383)==x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x387 = INT8_MIN;
	volatile int16_t x388 = -55;

	t87 = (((x385&x386)-x387)==x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x389 = 1921012751LLU;
	uint32_t x391 = UINT32_MAX;
	volatile uint16_t x392 = 0U;
	int32_t t88 = 1937;

	t88 = (((x389&x390)-x391)==x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x393 = 11U;
	uint64_t x394 = UINT64_MAX;
	int8_t x395 = -1;
	static int8_t x396 = INT8_MIN;
	int32_t t89 = 29797;

	t89 = (((x393&x394)-x395)==x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x397 = 49377794240134334LLU;
	volatile uint16_t x398 = 70U;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;
	volatile int32_t t90 = -19;

	t90 = (((x397&x398)-x399)==x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x401 = 2563;
	volatile uint64_t x402 = 67398032262LLU;
	int16_t x403 = INT16_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t91 = -1277;

	t91 = (((x401&x402)-x403)==x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x405 = 53;
	uint64_t x406 = UINT64_MAX;
	static int8_t x407 = -2;
	static int64_t x408 = 5027599920664LL;
	volatile int32_t t92 = 96287;

	t92 = (((x405&x406)-x407)==x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x409 = -2027LL;
	volatile int32_t x410 = 175;
	uint8_t x412 = 4U;
	volatile int32_t t93 = 3967;

	t93 = (((x409&x410)-x411)==x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = INT8_MAX;
	int32_t x418 = INT32_MAX;
	int8_t x419 = INT8_MAX;
	volatile int16_t x420 = -1;
	int32_t t94 = -493961;

	t94 = (((x417&x418)-x419)==x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MIN;
	int8_t x423 = -1;
	int8_t x424 = -1;

	t95 = (((x421&x422)-x423)==x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = INT64_MAX;
	static int64_t x426 = 529416722165254LL;
	uint16_t x427 = 0U;
	int8_t x428 = 30;
	volatile int32_t t96 = 102784457;

	t96 = (((x425&x426)-x427)==x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x429 = -138723;
	volatile uint32_t x430 = 319U;
	uint64_t x432 = 817230989844461LLU;
	volatile int32_t t97 = -29876;

	t97 = (((x429&x430)-x431)==x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;

	t98 = (((x433&x434)-x435)==x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x441 = INT64_MAX;
	volatile uint64_t x443 = UINT64_MAX;
	volatile int64_t x444 = 3452708780122LL;
	volatile int32_t t99 = -35923;

	t99 = (((x441&x442)-x443)==x444);

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

