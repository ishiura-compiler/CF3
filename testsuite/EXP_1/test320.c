#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MIN;
volatile int16_t x6 = INT16_MIN;
int64_t x9 = -5043384417718LL;
int64_t x10 = -2438358LL;
volatile int32_t x12 = INT32_MIN;
volatile int32_t t3 = 7;
int64_t x25 = INT64_MAX;
volatile int8_t x30 = -1;
int16_t x34 = -7;
int16_t x35 = -40;
static volatile uint8_t x36 = 1U;
int32_t x37 = -1;
int32_t x39 = INT32_MIN;
volatile int32_t t8 = 33;
int16_t x48 = -1;
static int32_t x54 = INT32_MAX;
uint16_t x62 = 86U;
volatile int32_t t13 = 13671829;
volatile int8_t x66 = INT8_MAX;
int64_t x67 = INT64_MIN;
int32_t x70 = -1;
static int32_t t16 = 123125;
int32_t x80 = INT32_MIN;
int8_t x84 = INT8_MAX;
int32_t x86 = INT32_MIN;
uint16_t x92 = UINT16_MAX;
uint8_t x101 = UINT8_MAX;
static int32_t x103 = -10320;
volatile int32_t t25 = -35601250;
int64_t x136 = INT64_MAX;
static int32_t t27 = -713;
int16_t x138 = INT16_MAX;
int64_t x145 = 9102LL;
static int16_t x146 = INT16_MIN;
int64_t x147 = INT64_MAX;
int16_t x152 = INT16_MIN;
int64_t x159 = 35386964158804806LL;
static volatile int32_t t33 = -23;
int32_t x171 = INT32_MIN;
int32_t x177 = -4109167;
volatile int32_t t38 = -124;
int8_t x182 = INT8_MIN;
static int32_t x183 = -35927226;
int16_t x185 = -1;
static int8_t x186 = INT8_MIN;
volatile int32_t t40 = 301;
int32_t x190 = -1;
int16_t x197 = INT16_MIN;
volatile int64_t x200 = INT64_MIN;
uint32_t x203 = UINT32_MAX;
volatile int32_t x205 = -748789;
int32_t t44 = 238;
uint32_t x209 = UINT32_MAX;
int32_t x211 = -933957;
static uint32_t x217 = UINT32_MAX;
int64_t x220 = 2034692LL;
static volatile uint32_t x226 = 25850U;
int32_t x231 = -1;
static volatile uint64_t x240 = 1LLU;
int64_t x244 = -1LL;
static int64_t x250 = -22673321117LL;
static int16_t x255 = 240;
volatile uint32_t x267 = UINT32_MAX;
uint32_t x268 = 350740U;
int8_t x271 = 10;
static int32_t t59 = -372;
uint32_t x275 = 7249U;
volatile uint8_t x288 = 0U;
volatile int32_t x291 = -1;
uint64_t x293 = 3544420LLU;
static int32_t x294 = -7;
int16_t x296 = 2030;
uint8_t x297 = UINT8_MAX;
uint8_t x301 = 5U;
uint8_t x303 = UINT8_MAX;
static int32_t t67 = -54648;
int8_t x309 = INT8_MAX;
int32_t x310 = INT32_MAX;
int32_t t69 = -135286219;
int32_t x319 = INT32_MIN;
int32_t x325 = -1;
int64_t x326 = 4569043374634277610LL;
static int16_t x332 = INT16_MAX;
volatile int32_t x333 = INT32_MAX;
int16_t x342 = -1;
int16_t x343 = INT16_MIN;
int64_t x349 = -1LL;
static uint16_t x355 = UINT16_MAX;
int64_t x361 = 390648538525LL;
uint16_t x363 = 3200U;
volatile int32_t t78 = 86349;
volatile uint64_t x369 = 2723244019LLU;
uint64_t x373 = UINT64_MAX;
uint32_t x377 = UINT32_MAX;
uint16_t x384 = UINT16_MAX;
int8_t x389 = INT8_MAX;
static int8_t x392 = INT8_MIN;
int8_t x395 = -1;
int32_t t87 = 0;
static int16_t x407 = INT16_MAX;
int64_t x413 = -1LL;
int32_t x418 = -1;
int32_t t91 = -331139461;
int16_t x421 = INT16_MAX;
int16_t x425 = INT16_MIN;
static uint16_t x427 = 0U;
int16_t x428 = 283;
volatile int32_t t93 = -496;
int32_t t94 = -1751117;
int32_t t95 = -47024862;
int32_t t96 = 99588;
uint64_t x457 = 982255988575LLU;
static int8_t x461 = INT8_MAX;
static int32_t t99 = -826650;


void f0(void) {
	int8_t x1 = -3;
	int32_t x3 = 12547107;
	uint8_t x4 = 6U;
	volatile int32_t t0 = -234810089;

	t0 = (((x1-x2)|x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 8U;
	volatile int8_t x7 = -1;
	int64_t x8 = INT64_MAX;
	static volatile int32_t t1 = 17193;

	t1 = (((x5-x6)|x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x11 = -3;
	volatile int32_t t2 = -7;

	t2 = (((x9-x10)|x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int8_t x14 = INT8_MIN;
	volatile uint32_t x15 = UINT32_MAX;
	int32_t x16 = INT32_MIN;

	t3 = (((x13-x14)|x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 7;
	int8_t x22 = 1;
	int64_t x23 = INT64_MIN;
	int64_t x24 = 5481448LL;
	int32_t t4 = -91526;

	t4 = (((x21-x22)|x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x26 = 7821U;
	static volatile int64_t x27 = INT64_MIN;
	int16_t x28 = -1;
	volatile int32_t t5 = 0;

	t5 = (((x25-x26)|x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	int32_t x31 = -17717;
	int64_t x32 = INT64_MAX;
	static volatile int32_t t6 = 14502;

	t6 = (((x29-x30)|x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 11398U;
	int32_t t7 = 1;

	t7 = (((x33-x34)|x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = 38;
	int16_t x40 = -1800;

	t8 = (((x37-x38)|x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 9U;
	uint64_t x42 = 44276048LLU;
	int64_t x43 = -1LL;
	uint64_t x44 = 572175557LLU;
	int32_t t9 = 0;

	t9 = (((x41-x42)|x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int32_t x46 = 1465583;
	uint8_t x47 = 1U;
	static int32_t t10 = 127287381;

	t10 = (((x45-x46)|x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	int8_t x55 = -1;
	uint8_t x56 = 125U;
	volatile int32_t t11 = 8812497;

	t11 = (((x53-x54)|x55)==x56);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 2U;
	volatile int8_t x58 = INT8_MIN;
	uint64_t x59 = UINT64_MAX;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t12 = -750;

	t12 = (((x57-x58)|x59)==x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = INT32_MAX;
	volatile uint16_t x63 = 6U;
	volatile int32_t x64 = -1;

	t13 = (((x61-x62)|x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x65 = 1LLU;
	int16_t x68 = -1;
	int32_t t14 = 1;

	t14 = (((x65-x66)|x67)==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1371010420523LL;
	static int16_t x71 = 1;
	static volatile int8_t x72 = INT8_MIN;
	volatile int32_t t15 = -229712118;

	t15 = (((x69-x70)|x71)==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = -35;
	static int16_t x74 = INT16_MIN;
	static int64_t x75 = 108235386LL;
	int32_t x76 = INT32_MAX;

	t16 = (((x73-x74)|x75)==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x77 = INT32_MAX;
	int64_t x78 = 0LL;
	volatile uint32_t x79 = 41306U;
	static int32_t t17 = 214;

	t17 = (((x77-x78)|x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x81 = INT64_MAX;
	uint32_t x82 = UINT32_MAX;
	uint16_t x83 = 198U;
	static volatile int32_t t18 = 529569542;

	t18 = (((x81-x82)|x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MAX;
	int32_t t19 = 319;

	t19 = (((x85-x86)|x87)==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile int16_t x90 = INT16_MAX;
	volatile uint64_t x91 = 3500908452380LLU;
	volatile int32_t t20 = -1;

	t20 = (((x89-x90)|x91)==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 11U;
	int32_t x94 = INT32_MIN;
	int64_t x95 = 25875932226500989LL;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t21 = -184775;

	t21 = (((x93-x94)|x95)==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x102 = 5U;
	volatile uint64_t x104 = 1961872189632LLU;
	int32_t t22 = 626750287;

	t22 = (((x101-x102)|x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile int32_t x114 = 0;
	static int32_t x115 = 234751972;
	int32_t x116 = INT32_MIN;
	int32_t t23 = 8185;

	t23 = (((x113-x114)|x115)==x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x121 = 3U;
	static int16_t x122 = INT16_MIN;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = -1;
	static volatile int32_t t24 = -12803926;

	t24 = (((x121-x122)|x123)==x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x125 = 415528923932LLU;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	int64_t x128 = INT64_MIN;

	t25 = (((x125-x126)|x127)==x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x129 = 29U;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	volatile uint32_t x132 = UINT32_MAX;
	volatile int32_t t26 = 646;

	t26 = (((x129-x130)|x131)==x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x133 = UINT8_MAX;
	volatile int32_t x134 = -1;
	int8_t x135 = INT8_MAX;

	t27 = (((x133-x134)|x135)==x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = -1;
	int8_t x139 = INT8_MIN;
	int16_t x140 = -1;
	int32_t t28 = 5052478;

	t28 = (((x137-x138)|x139)==x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -10;
	int16_t x142 = INT16_MIN;
	volatile int8_t x143 = -1;
	int16_t x144 = 30;
	static volatile int32_t t29 = 270;

	t29 = (((x141-x142)|x143)==x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x148 = -1;
	static volatile int32_t t30 = -1868141;

	t30 = (((x145-x146)|x147)==x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = -7914;
	volatile uint16_t x150 = UINT16_MAX;
	static int64_t x151 = -1LL;
	volatile int32_t t31 = 366006;

	t31 = (((x149-x150)|x151)==x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x153 = 26U;
	int16_t x154 = INT16_MIN;
	int16_t x155 = -10;
	uint32_t x156 = 7U;
	volatile int32_t t32 = -306918;

	t32 = (((x153-x154)|x155)==x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	volatile int8_t x158 = INT8_MAX;
	int32_t x160 = INT32_MAX;

	t33 = (((x157-x158)|x159)==x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = -1;
	int8_t x162 = -12;
	int16_t x163 = INT16_MIN;
	volatile int64_t x164 = 3LL;
	volatile int32_t t34 = -613689582;

	t34 = (((x161-x162)|x163)==x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x165 = 897051408935300LLU;
	static int32_t x166 = INT32_MIN;
	volatile uint8_t x167 = UINT8_MAX;
	volatile int16_t x168 = 7;
	static volatile int32_t t35 = 293037;

	t35 = (((x165-x166)|x167)==x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -1;
	int32_t x170 = -1;
	static int8_t x172 = INT8_MAX;
	int32_t t36 = 37161072;

	t36 = (((x169-x170)|x171)==x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x173 = 0U;
	volatile int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	static uint64_t x176 = 198641272259261LLU;
	int32_t t37 = 51272391;

	t37 = (((x173-x174)|x175)==x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;

	t38 = (((x177-x178)|x179)==x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MAX;
	int32_t x184 = INT32_MIN;
	volatile int32_t t39 = -4666179;

	t39 = (((x181-x182)|x183)==x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x187 = -4;
	static volatile int8_t x188 = -1;

	t40 = (((x185-x186)|x187)==x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x189 = 8093U;
	int64_t x191 = INT64_MIN;
	int8_t x192 = 40;
	int32_t t41 = -6614993;

	t41 = (((x189-x190)|x191)==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x198 = UINT16_MAX;
	int32_t x199 = INT32_MAX;
	int32_t t42 = 155920;

	t42 = (((x197-x198)|x199)==x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = 6U;
	int8_t x202 = INT8_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t43 = -312;

	t43 = (((x201-x202)|x203)==x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x206 = UINT64_MAX;
	volatile int16_t x207 = INT16_MIN;
	volatile uint64_t x208 = UINT64_MAX;

	t44 = (((x205-x206)|x207)==x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x210 = 0;
	static uint16_t x212 = 20998U;
	volatile int32_t t45 = -670542324;

	t45 = (((x209-x210)|x211)==x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x213 = 78U;
	uint16_t x214 = UINT16_MAX;
	uint32_t x215 = UINT32_MAX;
	uint64_t x216 = 1080756LLU;
	int32_t t46 = -119;

	t46 = (((x213-x214)|x215)==x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x218 = 7U;
	static int32_t x219 = 3;
	int32_t t47 = -53;

	t47 = (((x217-x218)|x219)==x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x221 = 128516861U;
	volatile int32_t x222 = INT32_MAX;
	int32_t x223 = 1;
	uint64_t x224 = 47442825032LLU;
	volatile int32_t t48 = 2214544;

	t48 = (((x221-x222)|x223)==x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = -38;
	int16_t x227 = -2830;
	int32_t x228 = -2;
	volatile int32_t t49 = -27;

	t49 = (((x225-x226)|x227)==x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = INT16_MAX;
	static int16_t x230 = 13860;
	volatile int32_t x232 = INT32_MAX;
	volatile int32_t t50 = 831;

	t50 = (((x229-x230)|x231)==x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	volatile int32_t x239 = INT32_MAX;
	int32_t t51 = 152;

	t51 = (((x237-x238)|x239)==x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = UINT16_MAX;
	int8_t x242 = INT8_MIN;
	static int32_t x243 = INT32_MAX;
	volatile int32_t t52 = 421;

	t52 = (((x241-x242)|x243)==x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int8_t x246 = -1;
	int64_t x247 = INT64_MIN;
	int64_t x248 = INT64_MIN;
	volatile int32_t t53 = 181;

	t53 = (((x245-x246)|x247)==x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = INT32_MAX;
	volatile int64_t x251 = 698101013122240042LL;
	int32_t x252 = INT32_MIN;
	static int32_t t54 = -201716790;

	t54 = (((x249-x250)|x251)==x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x253 = UINT32_MAX;
	volatile int64_t x254 = INT64_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t55 = -8714;

	t55 = (((x253-x254)|x255)==x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x257 = 1LL;
	uint32_t x258 = 1361U;
	int64_t x259 = -1LL;
	int32_t x260 = INT32_MIN;
	volatile int32_t t56 = -2641;

	t56 = (((x257-x258)|x259)==x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = -1;
	int32_t x263 = INT32_MAX;
	int16_t x264 = -1;
	volatile int32_t t57 = -108;

	t57 = (((x261-x262)|x263)==x264);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MIN;
	volatile uint32_t x266 = UINT32_MAX;
	static int32_t t58 = 470187384;

	t58 = (((x265-x266)|x267)==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x269 = 333105LLU;
	static uint32_t x270 = UINT32_MAX;
	uint32_t x272 = UINT32_MAX;

	t59 = (((x269-x270)|x271)==x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x273 = UINT16_MAX;
	int16_t x274 = -1;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t60 = 1910852;

	t60 = (((x273-x274)|x275)==x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x277 = INT32_MIN;
	int8_t x278 = -30;
	int8_t x279 = INT8_MIN;
	int8_t x280 = 0;
	volatile int32_t t61 = -4681;

	t61 = (((x277-x278)|x279)==x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = INT8_MIN;
	uint8_t x282 = UINT8_MAX;
	uint64_t x283 = 1787922966887661LLU;
	int8_t x284 = -1;
	volatile int32_t t62 = 32;

	t62 = (((x281-x282)|x283)==x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x285 = UINT64_MAX;
	int64_t x286 = INT64_MAX;
	int64_t x287 = INT64_MIN;
	volatile int32_t t63 = 4;

	t63 = (((x285-x286)|x287)==x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = 6;
	uint64_t x292 = 58610360861LLU;
	volatile int32_t t64 = 399;

	t64 = (((x289-x290)|x291)==x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x295 = UINT16_MAX;
	int32_t t65 = 418;

	t65 = (((x293-x294)|x295)==x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x298 = UINT64_MAX;
	volatile int16_t x299 = 5;
	volatile uint32_t x300 = 849U;
	static volatile int32_t t66 = -119;

	t66 = (((x297-x298)|x299)==x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x302 = INT16_MIN;
	int64_t x304 = -1LL;

	t67 = (((x301-x302)|x303)==x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x311 = 6;
	static volatile int16_t x312 = INT16_MAX;
	volatile int32_t t68 = 31;

	t68 = (((x309-x310)|x311)==x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MAX;
	static int32_t x315 = 1;
	int32_t x316 = -1;

	t69 = (((x313-x314)|x315)==x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x317 = 10755340LL;
	uint8_t x318 = 33U;
	int64_t x320 = INT64_MIN;
	volatile int32_t t70 = 1;

	t70 = (((x317-x318)|x319)==x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x327 = 197909220U;
	int32_t x328 = -1647;
	volatile int32_t t71 = 830;

	t71 = (((x325-x326)|x327)==x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x329 = INT8_MIN;
	uint16_t x330 = 127U;
	static int64_t x331 = -1LL;
	int32_t t72 = -3;

	t72 = (((x329-x330)|x331)==x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x334 = 2084354;
	static uint16_t x335 = UINT16_MAX;
	int32_t x336 = -1;
	int32_t t73 = 46369;

	t73 = (((x333-x334)|x335)==x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x337 = INT32_MIN;
	static volatile int8_t x338 = -1;
	int16_t x339 = -356;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t74 = 1;

	t74 = (((x337-x338)|x339)==x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = INT8_MIN;
	uint64_t x344 = 914LLU;
	static int32_t t75 = 409;

	t75 = (((x341-x342)|x343)==x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = UINT32_MAX;
	int16_t x352 = 946;
	static volatile int32_t t76 = 341771659;

	t76 = (((x349-x350)|x351)==x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x353 = UINT8_MAX;
	uint32_t x354 = 354439999U;
	int16_t x356 = INT16_MIN;
	static int32_t t77 = -21810574;

	t77 = (((x353-x354)|x355)==x356);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x362 = INT8_MIN;
	uint16_t x364 = 1U;

	t78 = (((x361-x362)|x363)==x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x370 = 70U;
	static int64_t x371 = INT64_MIN;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t79 = 775591;

	t79 = (((x369-x370)|x371)==x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x374 = INT32_MIN;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = 1;
	volatile int32_t t80 = -247208;

	t80 = (((x373-x374)|x375)==x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x378 = INT32_MAX;
	int64_t x379 = -1LL;
	uint8_t x380 = 9U;
	volatile int32_t t81 = -267135925;

	t81 = (((x377-x378)|x379)==x380);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x381 = 21U;
	uint16_t x382 = UINT16_MAX;
	uint32_t x383 = UINT32_MAX;
	static int32_t t82 = 12219;

	t82 = (((x381-x382)|x383)==x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = INT16_MIN;
	volatile int8_t x386 = INT8_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t83 = 559785137;

	t83 = (((x385-x386)|x387)==x388);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x390 = INT8_MIN;
	static int32_t x391 = -1;
	int32_t t84 = 392746721;

	t84 = (((x389-x390)|x391)==x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x393 = UINT32_MAX;
	volatile int16_t x394 = -1;
	int16_t x396 = -1084;
	volatile int32_t t85 = 12156;

	t85 = (((x393-x394)|x395)==x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -1LL;
	static volatile uint16_t x398 = 12372U;
	int8_t x399 = INT8_MAX;
	volatile int8_t x400 = -1;
	volatile int32_t t86 = 1;

	t86 = (((x397-x398)|x399)==x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x401 = 40404U;
	uint64_t x402 = 14856440LLU;
	uint8_t x403 = UINT8_MAX;
	uint32_t x404 = 131331U;

	t87 = (((x401-x402)|x403)==x404);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = INT8_MIN;
	static volatile int64_t x406 = -2LL;
	int64_t x408 = INT64_MIN;
	volatile int32_t t88 = -3794002;

	t88 = (((x405-x406)|x407)==x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = -25077761;
	volatile int32_t x410 = -1;
	int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MIN;
	volatile int32_t t89 = -12873927;

	t89 = (((x409-x410)|x411)==x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x414 = -1;
	volatile uint16_t x415 = 88U;
	uint16_t x416 = UINT16_MAX;
	int32_t t90 = -32181;

	t90 = (((x413-x414)|x415)==x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	uint64_t x420 = 5632137232LLU;

	t91 = (((x417-x418)|x419)==x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x422 = INT64_MAX;
	static int16_t x423 = -1;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t92 = -4977;

	t92 = (((x421-x422)|x423)==x424);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x426 = UINT16_MAX;

	t93 = (((x425-x426)|x427)==x428);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = -27210765680321LL;
	volatile uint8_t x430 = UINT8_MAX;
	int8_t x431 = -1;
	uint64_t x432 = UINT64_MAX;

	t94 = (((x429-x430)|x431)==x432);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x437 = INT16_MAX;
	static uint32_t x438 = 1066218647U;
	int16_t x439 = 65;
	uint16_t x440 = 151U;

	t95 = (((x437-x438)|x439)==x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x441 = INT16_MAX;
	static uint16_t x442 = UINT16_MAX;
	volatile int8_t x443 = INT8_MIN;
	int64_t x444 = 21916025671LL;

	t96 = (((x441-x442)|x443)==x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x445 = INT64_MIN;
	int16_t x446 = -1665;
	static volatile int32_t x447 = INT32_MAX;
	int8_t x448 = -1;
	volatile int32_t t97 = -2321;

	t97 = (((x445-x446)|x447)==x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x458 = UINT16_MAX;
	volatile int32_t x459 = INT32_MIN;
	int8_t x460 = 6;
	static volatile int32_t t98 = 113;

	t98 = (((x457-x458)|x459)==x460);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x462 = 10658U;
	static int8_t x463 = INT8_MIN;
	int64_t x464 = 544817932LL;

	t99 = (((x461-x462)|x463)==x464);

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

