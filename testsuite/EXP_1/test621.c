#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MAX;
uint32_t x5 = 10659U;
uint8_t x11 = 27U;
int64_t x18 = INT64_MIN;
uint8_t x20 = UINT8_MAX;
int32_t x32 = -1;
static int16_t x34 = -1;
volatile int16_t x43 = 0;
uint16_t x45 = UINT16_MAX;
uint64_t x47 = UINT64_MAX;
int32_t t11 = 356418239;
int16_t x51 = -1;
volatile int32_t x54 = INT32_MAX;
static uint32_t x58 = UINT32_MAX;
volatile int32_t x59 = INT32_MAX;
uint8_t x68 = 57U;
static volatile int32_t t16 = 3738;
int8_t x69 = INT8_MIN;
uint64_t x72 = 1584005937260872871LLU;
int32_t t17 = 199729;
static int8_t x77 = INT8_MIN;
int32_t t19 = -1;
int64_t x85 = 12485116591423LL;
uint64_t x87 = 1426406731639711LLU;
volatile uint64_t x91 = UINT64_MAX;
static int16_t x99 = -34;
volatile int32_t t24 = 178187626;
uint64_t x102 = 12222704739LLU;
int32_t x105 = INT32_MIN;
uint32_t x108 = UINT32_MAX;
volatile int32_t t26 = -1172;
uint16_t x114 = 1931U;
int64_t x117 = 640LL;
static int16_t x118 = -1;
volatile int16_t x127 = 53;
volatile int16_t x129 = -1;
static uint8_t x130 = 3U;
int32_t t32 = 515;
static int32_t t33 = -5318029;
volatile int32_t t34 = -6;
int16_t x141 = -1;
int32_t x150 = -1;
uint64_t x151 = 742367883141642090LLU;
int8_t x155 = INT8_MIN;
int32_t x160 = INT32_MIN;
static volatile int32_t t39 = 1067389;
uint8_t x165 = 3U;
static int8_t x167 = INT8_MAX;
uint64_t x175 = 149328LLU;
int64_t x176 = INT64_MAX;
volatile int32_t t43 = -3;
int32_t x184 = -76;
int32_t t44 = -148064553;
int64_t x187 = INT64_MIN;
uint8_t x188 = 2U;
static uint8_t x194 = UINT8_MAX;
int32_t t47 = 265457;
volatile int8_t x198 = INT8_MAX;
static int16_t x211 = INT16_MIN;
uint32_t x212 = 1873688U;
uint8_t x213 = 61U;
int32_t t52 = 0;
int16_t x220 = INT16_MIN;
volatile int16_t x226 = -5987;
volatile int32_t t56 = -6657;
static int32_t t57 = 2;
volatile int16_t x240 = INT16_MIN;
uint16_t x248 = 167U;
volatile int16_t x249 = INT16_MIN;
volatile int32_t t61 = 3101057;
uint8_t x255 = 12U;
int16_t x256 = INT16_MIN;
uint8_t x258 = UINT8_MAX;
uint32_t x262 = 109133749U;
int32_t t64 = -101446;
int64_t x268 = -1LL;
int32_t x270 = INT32_MAX;
static int64_t x272 = -3182469LL;
static int16_t x275 = 1;
volatile int8_t x280 = -1;
static int32_t x291 = -122;
static uint16_t x293 = 306U;
volatile int32_t x297 = -7;
static int32_t x299 = INT32_MAX;
int32_t t73 = 1;
volatile int8_t x303 = 1;
int32_t t75 = -515389;
uint32_t x311 = 15794578U;
int64_t x312 = INT64_MIN;
int8_t x313 = INT8_MIN;
uint8_t x314 = 3U;
uint16_t x316 = UINT16_MAX;
uint16_t x335 = 1314U;
uint64_t x338 = 434286434199LLU;
uint64_t x340 = UINT64_MAX;
int32_t t84 = 62390806;
static uint32_t x349 = 543433380U;
uint64_t x353 = 4LLU;
uint64_t x365 = 127960993869373LLU;
volatile uint64_t x366 = UINT64_MAX;
uint16_t x372 = 1713U;
static uint64_t x373 = 2876403577143970LLU;
volatile int32_t t93 = -3;
uint16_t x389 = UINT16_MAX;
static uint8_t x391 = 3U;
int32_t t98 = -218587;
uint16_t x407 = UINT16_MAX;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MAX;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 7;

	t0 = (((x1/x2)<x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int32_t x7 = INT32_MAX;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = -1532;

	t1 = (((x5/x6)<x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MAX;
	volatile uint64_t x10 = 17089202533471148LLU;
	int8_t x12 = -1;
	static int32_t t2 = 119;

	t2 = (((x9/x10)<x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x14 = -5;
	volatile int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -1;

	t3 = (((x13/x14)<x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x19 = -1;
	int32_t t4 = -4741745;

	t4 = (((x17/x18)<x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 2099493064U;
	uint64_t x22 = 1988532423LLU;
	volatile int64_t x23 = 167780LL;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -433376;

	t5 = (((x21/x22)<x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -11026;
	int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MAX;
	int32_t x28 = INT32_MAX;
	volatile int32_t t6 = 71004;

	t6 = (((x25/x26)<x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 5;
	int32_t x30 = INT32_MIN;
	static int16_t x31 = 1111;
	int32_t t7 = -157;

	t7 = (((x29/x30)<x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = -53977;
	static int32_t x35 = 0;
	int32_t x36 = INT32_MIN;
	int32_t t8 = -46078694;

	t8 = (((x33/x34)<x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MAX;
	int8_t x38 = -1;
	volatile int8_t x39 = INT8_MIN;
	uint16_t x40 = 1006U;
	volatile int32_t t9 = 3;

	t9 = (((x37/x38)<x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MAX;
	int32_t x42 = 303;
	int8_t x44 = -8;
	int32_t t10 = 14;

	t10 = (((x41/x42)<x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x46 = UINT64_MAX;
	int16_t x48 = 1;

	t11 = (((x45/x46)<x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int16_t x50 = 83;
	int8_t x52 = -1;
	int32_t t12 = 502493447;

	t12 = (((x49/x50)<x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = -189504281;

	t13 = (((x53/x54)<x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	volatile uint8_t x60 = 23U;
	volatile int32_t t14 = 664;

	t14 = (((x57/x58)<x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	uint64_t x62 = 3293997713190LLU;
	int32_t x63 = 651134;
	uint32_t x64 = 1847549U;
	int32_t t15 = 100130;

	t15 = (((x61/x62)<x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	uint64_t x66 = 253841368521LLU;
	int32_t x67 = INT32_MIN;

	t16 = (((x65/x66)<x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	int32_t x71 = 0;

	t17 = (((x69/x70)<x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	int64_t x74 = 8525509186207480LL;
	static int64_t x75 = -1LL;
	static int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 9297289;

	t18 = (((x73/x74)<x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x78 = -18;
	static volatile int8_t x79 = INT8_MIN;
	static int32_t x80 = 249455;

	t19 = (((x77/x78)<x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 8180U;
	volatile int64_t x82 = INT64_MAX;
	int16_t x83 = INT16_MAX;
	static uint16_t x84 = 12883U;
	volatile int32_t t20 = -3;

	t20 = (((x81/x82)<x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MAX;
	int64_t x88 = -1LL;
	volatile int32_t t21 = -6479;

	t21 = (((x85/x86)<x87)<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 2710;
	uint16_t x90 = 836U;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = -147266844;

	t22 = (((x89/x90)<x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile uint64_t x94 = UINT64_MAX;
	int64_t x95 = INT64_MAX;
	uint32_t x96 = UINT32_MAX;
	volatile int32_t t23 = -6;

	t23 = (((x93/x94)<x95)<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	static uint16_t x98 = UINT16_MAX;
	uint64_t x100 = UINT64_MAX;

	t24 = (((x97/x98)<x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -920;
	int64_t x103 = 7917LL;
	uint8_t x104 = 0U;
	static int32_t t25 = 920442;

	t25 = (((x101/x102)<x103)<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 3832145U;
	volatile int32_t x107 = -25423;

	t26 = (((x105/x106)<x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x109 = 330906LL;
	volatile uint8_t x110 = 31U;
	static uint8_t x111 = UINT8_MAX;
	int32_t x112 = -1;
	volatile int32_t t27 = 62;

	t27 = (((x109/x110)<x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 7921255497462LLU;
	int8_t x115 = INT8_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -9728;

	t28 = (((x113/x114)<x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x119 = INT32_MAX;
	volatile int32_t x120 = -1;
	int32_t t29 = 208167819;

	t29 = (((x117/x118)<x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	uint64_t x122 = UINT64_MAX;
	volatile int8_t x123 = INT8_MAX;
	uint16_t x124 = 1U;
	int32_t t30 = -11;

	t30 = (((x121/x122)<x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MAX;
	int8_t x126 = INT8_MIN;
	uint16_t x128 = 3U;
	int32_t t31 = -59103;

	t31 = (((x125/x126)<x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x131 = INT8_MIN;
	static uint64_t x132 = 1539LLU;

	t32 = (((x129/x130)<x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -1LL;
	static int64_t x134 = -244852490LL;
	uint8_t x135 = 0U;
	static uint64_t x136 = UINT64_MAX;

	t33 = (((x133/x134)<x135)<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	int16_t x138 = 1;
	int64_t x139 = INT64_MIN;
	uint16_t x140 = 3U;

	t34 = (((x137/x138)<x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = -3046;
	volatile int8_t x143 = -1;
	volatile int16_t x144 = 0;
	volatile int32_t t35 = -6;

	t35 = (((x141/x142)<x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x145 = 1963U;
	uint16_t x146 = 865U;
	volatile uint64_t x147 = 41760198545306817LLU;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 9;

	t36 = (((x145/x146)<x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 2U;
	volatile int16_t x152 = -1;
	int32_t t37 = 384292;

	t37 = (((x149/x150)<x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 465;
	int32_t x154 = -1;
	int64_t x156 = -4122435LL;
	volatile int32_t t38 = -60362279;

	t38 = (((x153/x154)<x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 0U;
	uint16_t x158 = 75U;
	volatile int32_t x159 = INT32_MAX;

	t39 = (((x157/x158)<x159)<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = UINT32_MAX;
	int8_t x162 = 1;
	int8_t x163 = -7;
	int32_t x164 = -1;
	static volatile int32_t t40 = -87185381;

	t40 = (((x161/x162)<x163)<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = -33;
	uint32_t x168 = 53U;
	int32_t t41 = 4294;

	t41 = (((x165/x166)<x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	volatile uint32_t x170 = 2U;
	uint8_t x171 = 26U;
	int64_t x172 = -1LL;
	int32_t t42 = -1;

	t42 = (((x169/x170)<x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = -1;

	t43 = (((x173/x174)<x175)<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	uint32_t x182 = 44013U;
	int64_t x183 = 20324626902615568LL;

	t44 = (((x181/x182)<x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 2592401;
	int64_t x186 = -1LL;
	static volatile int32_t t45 = -409052;

	t45 = (((x185/x186)<x187)<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 125283U;
	volatile uint8_t x190 = 8U;
	uint32_t x191 = 7362U;
	int64_t x192 = INT64_MIN;
	volatile int32_t t46 = -12261468;

	t46 = (((x189/x190)<x191)<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	static int64_t x195 = 5241LL;
	int64_t x196 = INT64_MAX;

	t47 = (((x193/x194)<x195)<=x196);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -345LL;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = -307067030885851LL;
	int32_t t48 = 125030;

	t48 = (((x197/x198)<x199)<=x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = 1977;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 5917U;
	int32_t t49 = -23;

	t49 = (((x201/x202)<x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x205 = INT8_MAX;
	int16_t x206 = -1;
	int64_t x207 = 1024264961LL;
	uint16_t x208 = 3U;
	volatile int32_t t50 = -3165548;

	t50 = (((x205/x206)<x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x209 = UINT64_MAX;
	uint64_t x210 = UINT64_MAX;
	int32_t t51 = -659;

	t51 = (((x209/x210)<x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x214 = UINT16_MAX;
	uint32_t x215 = 187882626U;
	uint8_t x216 = UINT8_MAX;

	t52 = (((x213/x214)<x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = -13122;
	int32_t x218 = -1;
	static uint8_t x219 = 48U;
	volatile int32_t t53 = 8;

	t53 = (((x217/x218)<x219)<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x221 = 16U;
	volatile int32_t x222 = INT32_MIN;
	static int16_t x223 = -1;
	int16_t x224 = INT16_MIN;
	int32_t t54 = -73180;

	t54 = (((x221/x222)<x223)<=x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	int16_t x227 = INT16_MAX;
	int16_t x228 = -1;
	static int32_t t55 = -1;

	t55 = (((x225/x226)<x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = -105LL;
	volatile uint32_t x230 = 1589146517U;
	int16_t x231 = -1;
	int64_t x232 = INT64_MIN;

	t56 = (((x229/x230)<x231)<=x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = 8131U;
	int8_t x234 = 9;
	static volatile uint64_t x235 = 1364267033LLU;
	static uint8_t x236 = UINT8_MAX;

	t57 = (((x233/x234)<x235)<=x236);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	volatile int16_t x238 = 17;
	int8_t x239 = -37;
	volatile int32_t t58 = 127593970;

	t58 = (((x237/x238)<x239)<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MAX;
	uint16_t x242 = 52U;
	int8_t x243 = -1;
	int32_t x244 = -6381;
	static int32_t t59 = 398695581;

	t59 = (((x241/x242)<x243)<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -30;
	static int64_t x246 = INT64_MIN;
	static int32_t x247 = -15367;
	static volatile int32_t t60 = 40;

	t60 = (((x245/x246)<x247)<=x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x250 = INT16_MIN;
	uint8_t x251 = UINT8_MAX;
	uint64_t x252 = 4917825017062LLU;

	t61 = (((x249/x250)<x251)<=x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x253 = 9130U;
	static int16_t x254 = 19;
	int32_t t62 = 0;

	t62 = (((x253/x254)<x255)<=x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x257 = -117800347LL;
	int16_t x259 = -4144;
	int64_t x260 = 1LL;
	int32_t t63 = -1199;

	t63 = (((x257/x258)<x259)<=x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x261 = UINT16_MAX;
	uint16_t x263 = 323U;
	uint16_t x264 = 2U;

	t64 = (((x261/x262)<x263)<=x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MAX;
	volatile int32_t t65 = 69;

	t65 = (((x265/x266)<x267)<=x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = 6707U;
	static int16_t x271 = -10;
	static volatile int32_t t66 = -145709580;

	t66 = (((x269/x270)<x271)<=x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = -843210;
	int64_t x274 = INT64_MAX;
	volatile int8_t x276 = INT8_MAX;
	static int32_t t67 = -25;

	t67 = (((x273/x274)<x275)<=x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = -1LL;
	uint16_t x278 = 353U;
	static uint8_t x279 = UINT8_MAX;
	static int32_t t68 = 26;

	t68 = (((x277/x278)<x279)<=x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x281 = UINT8_MAX;
	uint16_t x282 = 6U;
	int64_t x283 = INT64_MIN;
	static volatile int32_t x284 = 7;
	volatile int32_t t69 = 26;

	t69 = (((x281/x282)<x283)<=x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 314U;
	int8_t x286 = -1;
	int64_t x287 = 2320165294146LL;
	static int64_t x288 = -1LL;
	volatile int32_t t70 = 97831207;

	t70 = (((x285/x286)<x287)<=x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t71 = 119271061;

	t71 = (((x289/x290)<x291)<=x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x294 = 3868042883909392321LLU;
	int64_t x295 = -1LL;
	uint32_t x296 = 185633032U;
	volatile int32_t t72 = -10;

	t72 = (((x293/x294)<x295)<=x296);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x298 = INT16_MAX;
	volatile uint8_t x300 = 10U;

	t73 = (((x297/x298)<x299)<=x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	volatile int64_t x302 = -10269408993872910LL;
	uint32_t x304 = 1U;
	int32_t t74 = 41;

	t74 = (((x301/x302)<x303)<=x304);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	int8_t x308 = -9;

	t75 = (((x305/x306)<x307)<=x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = -25;
	volatile int16_t x310 = -103;
	static int32_t t76 = 88;

	t76 = (((x309/x310)<x311)<=x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x315 = INT64_MIN;
	static int32_t t77 = 787;

	t77 = (((x313/x314)<x315)<=x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x317 = INT64_MIN;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = 84030121;
	int32_t x320 = -1;
	int32_t t78 = -201750711;

	t78 = (((x317/x318)<x319)<=x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x321 = INT16_MAX;
	int64_t x322 = 28655100LL;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = INT64_MIN;
	volatile int32_t t79 = 772;

	t79 = (((x321/x322)<x323)<=x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = 3;
	static int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MIN;
	volatile int32_t t80 = 4875882;

	t80 = (((x325/x326)<x327)<=x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x329 = UINT16_MAX;
	static uint8_t x330 = 30U;
	volatile uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MAX;
	static int32_t t81 = -72;

	t81 = (((x329/x330)<x331)<=x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x333 = UINT64_MAX;
	static volatile int32_t x334 = INT32_MIN;
	int64_t x336 = 32167270829459LL;
	volatile int32_t t82 = -676;

	t82 = (((x333/x334)<x335)<=x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 2U;
	static int16_t x339 = 12;
	int32_t t83 = -1749261;

	t83 = (((x337/x338)<x339)<=x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = 1U;
	uint16_t x342 = 83U;
	static int32_t x343 = -1;
	volatile int16_t x344 = 3;

	t84 = (((x341/x342)<x343)<=x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x345 = 15665U;
	uint64_t x346 = UINT64_MAX;
	uint32_t x347 = 32861687U;
	int16_t x348 = -1;
	static int32_t t85 = 8;

	t85 = (((x345/x346)<x347)<=x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x350 = 2891U;
	volatile int16_t x351 = -23;
	int32_t x352 = INT32_MIN;
	volatile int32_t t86 = 301547;

	t86 = (((x349/x350)<x351)<=x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x354 = INT16_MAX;
	volatile int32_t x355 = INT32_MIN;
	int64_t x356 = 9535749240804LL;
	volatile int32_t t87 = -7;

	t87 = (((x353/x354)<x355)<=x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = UINT64_MAX;
	int8_t x358 = INT8_MIN;
	int32_t x359 = -1;
	volatile int8_t x360 = -25;
	int32_t t88 = -3244671;

	t88 = (((x357/x358)<x359)<=x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x367 = -1LL;
	static uint16_t x368 = UINT16_MAX;
	int32_t t89 = 896471572;

	t89 = (((x365/x366)<x367)<=x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x369 = INT64_MIN;
	uint64_t x370 = UINT64_MAX;
	uint8_t x371 = UINT8_MAX;
	volatile int32_t t90 = 4814;

	t90 = (((x369/x370)<x371)<=x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x374 = 2;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MIN;
	int32_t t91 = 27;

	t91 = (((x373/x374)<x375)<=x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x377 = 0U;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MAX;
	int8_t x380 = -1;
	int32_t t92 = -96;

	t92 = (((x377/x378)<x379)<=x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 128U;
	uint64_t x382 = 1291692757714577LLU;
	volatile int32_t x383 = INT32_MIN;
	uint16_t x384 = 25055U;

	t93 = (((x381/x382)<x383)<=x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = -8687LL;
	int64_t x386 = -1874LL;
	volatile uint64_t x387 = 37079583LLU;
	int64_t x388 = -3470LL;
	volatile int32_t t94 = -7850;

	t94 = (((x385/x386)<x387)<=x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x390 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	volatile int32_t t95 = -20;

	t95 = (((x389/x390)<x391)<=x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = UINT64_MAX;
	static int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MAX;
	uint64_t x396 = 695289433LLU;
	int32_t t96 = -209945583;

	t96 = (((x393/x394)<x395)<=x396);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	volatile int8_t x399 = INT8_MIN;
	uint32_t x400 = 1737U;
	static int32_t t97 = 699;

	t97 = (((x397/x398)<x399)<=x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MIN;
	static volatile int16_t x403 = INT16_MIN;
	uint8_t x404 = UINT8_MAX;

	t98 = (((x401/x402)<x403)<=x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = 33LL;
	static int16_t x406 = 62;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t99 = -632504;

	t99 = (((x405/x406)<x407)<=x408);

	if (t99 != 1) { NG(); } else { ; }
	
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

