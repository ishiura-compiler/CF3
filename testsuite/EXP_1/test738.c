#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 228907056LL;
int64_t x8 = -32LL;
int32_t t2 = 15364035;
int64_t x19 = INT64_MAX;
int32_t t3 = 1187;
int32_t x29 = INT32_MIN;
int32_t x34 = INT32_MAX;
static uint8_t x49 = 15U;
uint32_t x50 = UINT32_MAX;
int16_t x51 = -1;
uint32_t x61 = 250U;
static int64_t x67 = INT64_MAX;
int16_t x68 = INT16_MIN;
volatile int32_t t15 = -1622;
static int64_t x70 = INT64_MIN;
int32_t t16 = 71;
volatile int32_t t20 = 12;
int8_t x89 = INT8_MAX;
volatile int32_t x94 = 4739;
volatile int32_t t23 = 29650376;
int8_t x102 = INT8_MAX;
int64_t x105 = -1LL;
static int32_t x112 = -1;
int32_t x123 = -3;
int64_t x125 = INT64_MIN;
int32_t x128 = 997351899;
int8_t x157 = -6;
static int8_t x159 = INT8_MIN;
int32_t x161 = 6081568;
uint64_t x172 = 23698425LLU;
int64_t x178 = -1394617703363817LL;
uint64_t x180 = 98LLU;
int8_t x182 = INT8_MAX;
int16_t x190 = INT16_MAX;
int32_t t42 = 54012742;
volatile int32_t x195 = INT32_MIN;
int8_t x203 = INT8_MAX;
int64_t x204 = INT64_MIN;
int8_t x214 = INT8_MAX;
volatile int32_t t49 = 24;
int16_t x223 = INT16_MIN;
int8_t x230 = INT8_MAX;
int64_t x231 = 1875LL;
int16_t x234 = INT16_MIN;
int32_t t53 = -495803644;
volatile uint32_t x243 = 85U;
volatile uint32_t x256 = 1266613U;
volatile int32_t t58 = -13056;
int32_t t59 = 2466571;
static uint32_t x266 = 1125602830U;
static int16_t x272 = INT16_MIN;
int32_t t61 = 78;
int8_t x281 = INT8_MAX;
volatile int32_t t63 = -444824714;
volatile int32_t t64 = 9624;
volatile int32_t t66 = -62;
static int32_t t67 = 168;
static int8_t x304 = 4;
int64_t x308 = -21672354LL;
int16_t x311 = -5;
static int32_t x316 = INT32_MIN;
uint16_t x326 = UINT16_MAX;
static uint64_t x328 = 37993LLU;
static int64_t x336 = INT64_MIN;
int32_t x337 = -1;
int32_t t75 = -4087932;
uint8_t x346 = 57U;
uint16_t x347 = 61U;
uint8_t x348 = 15U;
volatile int64_t x351 = INT64_MIN;
volatile int16_t x352 = INT16_MIN;
int32_t t79 = 126674;
volatile int32_t t80 = 15;
volatile uint8_t x365 = 0U;
volatile int64_t x368 = 782637249LL;
int32_t x372 = INT32_MAX;
volatile uint8_t x376 = UINT8_MAX;
int32_t x387 = INT32_MAX;
int16_t x392 = -831;
uint8_t x393 = UINT8_MAX;
int32_t t89 = -1;
int64_t x398 = INT64_MIN;
int32_t x403 = INT32_MIN;
int64_t x408 = 40218LL;
int16_t x418 = INT16_MIN;
static uint16_t x422 = UINT16_MAX;
uint32_t x427 = 25488U;
uint8_t x432 = 3U;
volatile uint8_t x435 = 33U;
static int16_t x436 = INT16_MIN;
static int32_t t99 = -3410;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MIN;
	int32_t x4 = -1;
	int32_t t0 = 1;

	t0 = (((x1%x2)%x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static uint64_t x6 = UINT64_MAX;
	volatile uint64_t x7 = UINT64_MAX;
	int32_t t1 = -728;

	t1 = (((x5%x6)%x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -7;
	int32_t x14 = 46;
	static int32_t x15 = INT32_MIN;
	int16_t x16 = -1;

	t2 = (((x13%x14)%x15)<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	uint64_t x18 = UINT64_MAX;
	int8_t x20 = -1;

	t3 = (((x17%x18)%x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 50;
	uint32_t x22 = UINT32_MAX;
	volatile uint8_t x23 = 4U;
	int32_t x24 = -1;
	int32_t t4 = -940424;

	t4 = (((x21%x22)%x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	volatile int8_t x26 = INT8_MAX;
	uint64_t x27 = 131984589140LLU;
	uint16_t x28 = 1U;
	int32_t t5 = 48302985;

	t5 = (((x25%x26)%x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = 30;
	int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t6 = 477068152;

	t6 = (((x29%x30)%x31)<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t7 = -47;

	t7 = (((x33%x34)%x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 929972964;
	int8_t x38 = INT8_MIN;
	uint32_t x39 = 1771U;
	int8_t x40 = INT8_MIN;
	static int32_t t8 = 1;

	t8 = (((x37%x38)%x39)<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int8_t x42 = INT8_MIN;
	int8_t x43 = -1;
	static uint8_t x44 = 11U;
	volatile int32_t t9 = -1005;

	t9 = (((x41%x42)%x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 303LL;
	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -22523;

	t10 = (((x45%x46)%x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x52 = -24700878;
	int32_t t11 = -125345092;

	t11 = (((x49%x50)%x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MAX;
	volatile int8_t x56 = 1;
	static int32_t t12 = -13668;

	t12 = (((x53%x54)%x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 213LLU;
	int64_t x58 = INT64_MIN;
	uint32_t x59 = UINT32_MAX;
	uint8_t x60 = 11U;
	static volatile int32_t t13 = 251527876;

	t13 = (((x57%x58)%x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MIN;
	uint16_t x63 = UINT16_MAX;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t14 = 132626602;

	t14 = (((x61%x62)%x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 427668674U;
	int16_t x66 = -1;

	t15 = (((x65%x66)%x67)<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x69 = 5731U;
	static uint64_t x71 = UINT64_MAX;
	static volatile int8_t x72 = INT8_MIN;

	t16 = (((x69%x70)%x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = -1584615;
	uint32_t x74 = 47U;
	int16_t x75 = -1;
	int16_t x76 = -1;
	int32_t t17 = 53427561;

	t17 = (((x73%x74)%x75)<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 161988LLU;
	int16_t x78 = 53;
	uint64_t x79 = 109LLU;
	int8_t x80 = -1;
	static volatile int32_t t18 = -3;

	t18 = (((x77%x78)%x79)<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x82 = UINT8_MAX;
	int16_t x83 = INT16_MIN;
	uint32_t x84 = UINT32_MAX;
	static int32_t t19 = -1301506;

	t19 = (((x81%x82)%x83)<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 21;
	static uint32_t x86 = 2884549U;
	int8_t x87 = INT8_MIN;
	static uint64_t x88 = UINT64_MAX;

	t20 = (((x85%x86)%x87)<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = INT64_MIN;
	uint16_t x91 = 4746U;
	volatile int8_t x92 = 2;
	volatile int32_t t21 = -22868;

	t21 = (((x89%x90)%x91)<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 70116409558317LLU;
	int32_t x95 = -115;
	int64_t x96 = INT64_MIN;
	int32_t t22 = -35460;

	t22 = (((x93%x94)%x95)<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	static volatile int64_t x98 = -1LL;
	volatile int32_t x99 = 17424;
	int8_t x100 = INT8_MIN;

	t23 = (((x97%x98)%x99)<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	int64_t x103 = INT64_MAX;
	uint32_t x104 = 1252006U;
	static int32_t t24 = 0;

	t24 = (((x101%x102)%x103)<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = INT64_MIN;
	volatile uint16_t x107 = 7894U;
	int16_t x108 = INT16_MIN;
	static int32_t t25 = -2757715;

	t25 = (((x105%x106)%x107)<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -128274656331574LL;
	int64_t x110 = -1LL;
	volatile int32_t x111 = INT32_MIN;
	static int32_t t26 = -26;

	t26 = (((x109%x110)%x111)<=x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x121 = 5981LLU;
	int64_t x122 = -1LL;
	int8_t x124 = -1;
	static int32_t t27 = 209277;

	t27 = (((x121%x122)%x123)<=x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x126 = -1LL;
	volatile uint8_t x127 = UINT8_MAX;
	volatile int32_t t28 = -22;

	t28 = (((x125%x126)%x127)<=x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	uint32_t x131 = UINT32_MAX;
	volatile uint16_t x132 = UINT16_MAX;
	int32_t t29 = -305410;

	t29 = (((x129%x130)%x131)<=x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 57345435865LLU;
	int64_t x138 = 1641647328165LL;
	static int64_t x139 = 478LL;
	int16_t x140 = INT16_MIN;
	static volatile int32_t t30 = -7994401;

	t30 = (((x137%x138)%x139)<=x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x145 = INT8_MIN;
	volatile int32_t x146 = INT32_MAX;
	volatile int8_t x147 = INT8_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t31 = 123003;

	t31 = (((x145%x146)%x147)<=x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x149 = INT32_MIN;
	int8_t x150 = -1;
	static volatile uint8_t x151 = 4U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t32 = -25105;

	t32 = (((x149%x150)%x151)<=x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -3;
	int8_t x154 = -7;
	volatile int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;
	int32_t t33 = -1792584;

	t33 = (((x153%x154)%x155)<=x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x158 = -3985;
	volatile int64_t x160 = INT64_MIN;
	volatile int32_t t34 = 994167;

	t34 = (((x157%x158)%x159)<=x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x162 = -1;
	static int32_t x163 = 82514;
	volatile int8_t x164 = -1;
	volatile int32_t t35 = -28806355;

	t35 = (((x161%x162)%x163)<=x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MIN;
	volatile int64_t x166 = -5LL;
	uint32_t x167 = UINT32_MAX;
	static uint8_t x168 = 10U;
	volatile int32_t t36 = 2684452;

	t36 = (((x165%x166)%x167)<=x168);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = -1LL;
	volatile int32_t x170 = 57749;
	uint64_t x171 = 225677869LLU;
	int32_t t37 = 1323;

	t37 = (((x169%x170)%x171)<=x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	static uint64_t x174 = UINT64_MAX;
	static int32_t x175 = -79310545;
	int16_t x176 = INT16_MIN;
	int32_t t38 = -70343;

	t38 = (((x173%x174)%x175)<=x176);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x177 = 77U;
	int16_t x179 = INT16_MIN;
	static int32_t t39 = 1167;

	t39 = (((x177%x178)%x179)<=x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x181 = -15;
	static int32_t x183 = INT32_MAX;
	uint32_t x184 = UINT32_MAX;
	int32_t t40 = -7912052;

	t40 = (((x181%x182)%x183)<=x184);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x185 = 2;
	static volatile int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MAX;
	volatile uint64_t x188 = 367LLU;
	static int32_t t41 = 98646;

	t41 = (((x185%x186)%x187)<=x188);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;

	t42 = (((x189%x190)%x191)<=x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MAX;
	static volatile int64_t x196 = INT64_MAX;
	int32_t t43 = 52;

	t43 = (((x193%x194)%x195)<=x196);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 1457U;
	uint64_t x198 = 1696809682LLU;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t44 = 11933666;

	t44 = (((x197%x198)%x199)<=x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = 45044872495LLU;
	volatile uint8_t x202 = 6U;
	static volatile int32_t t45 = -104305930;

	t45 = (((x201%x202)%x203)<=x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = 1;
	uint16_t x206 = 1U;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = 124695367754LLU;
	static int32_t t46 = 1135;

	t46 = (((x205%x206)%x207)<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = 10381U;
	static int32_t x210 = -371943030;
	int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MAX;
	int32_t t47 = 29;

	t47 = (((x209%x210)%x211)<=x212);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MIN;
	int16_t x215 = INT16_MIN;
	volatile int64_t x216 = 1520793902LL;
	int32_t t48 = -1182850;

	t48 = (((x213%x214)%x215)<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x217 = INT32_MIN;
	uint16_t x218 = 4U;
	int16_t x219 = INT16_MIN;
	volatile int64_t x220 = -7711657187332LL;

	t49 = (((x217%x218)%x219)<=x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 6772U;
	volatile int8_t x222 = -1;
	static int16_t x224 = -4;
	volatile int32_t t50 = -4146189;

	t50 = (((x221%x222)%x223)<=x224);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x225 = INT8_MIN;
	uint32_t x226 = 2U;
	uint64_t x227 = UINT64_MAX;
	int64_t x228 = INT64_MAX;
	static volatile int32_t t51 = 2377547;

	t51 = (((x225%x226)%x227)<=x228);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -2554023483639752644LL;
	static int8_t x232 = INT8_MIN;
	static volatile int32_t t52 = 50734;

	t52 = (((x229%x230)%x231)<=x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -1;
	int64_t x235 = INT64_MIN;
	int8_t x236 = INT8_MIN;

	t53 = (((x233%x234)%x235)<=x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MIN;
	volatile uint8_t x244 = 9U;
	static int32_t t54 = 1;

	t54 = (((x241%x242)%x243)<=x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	uint8_t x247 = 25U;
	uint16_t x248 = 647U;
	int32_t t55 = -117646;

	t55 = (((x245%x246)%x247)<=x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = INT32_MIN;
	static int64_t x250 = -15716328271514LL;
	static uint16_t x251 = 651U;
	int8_t x252 = INT8_MAX;
	volatile int32_t t56 = 45047515;

	t56 = (((x249%x250)%x251)<=x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x253 = UINT16_MAX;
	int8_t x254 = 2;
	static int64_t x255 = -27617837611772LL;
	int32_t t57 = -59717;

	t57 = (((x253%x254)%x255)<=x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = -1;
	int32_t x258 = INT32_MIN;
	int32_t x259 = 4140;
	uint64_t x260 = 159358762894635LLU;

	t58 = (((x257%x258)%x259)<=x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x261 = 216713849LLU;
	int16_t x262 = 2394;
	int16_t x263 = 1;
	int8_t x264 = -1;

	t59 = (((x261%x262)%x263)<=x264);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x265 = INT16_MIN;
	int32_t x267 = INT32_MAX;
	uint64_t x268 = 737984LLU;
	static int32_t t60 = -4575;

	t60 = (((x265%x266)%x267)<=x268);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MAX;
	static int8_t x270 = -3;
	int64_t x271 = INT64_MAX;

	t61 = (((x269%x270)%x271)<=x272);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x277 = 13LLU;
	int16_t x278 = 478;
	int8_t x279 = INT8_MIN;
	volatile int32_t x280 = -1;
	int32_t t62 = -187;

	t62 = (((x277%x278)%x279)<=x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x282 = UINT8_MAX;
	volatile uint64_t x283 = UINT64_MAX;
	volatile int32_t x284 = 410734677;

	t63 = (((x281%x282)%x283)<=x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	static volatile int32_t x288 = 1908;

	t64 = (((x285%x286)%x287)<=x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = UINT32_MAX;
	int8_t x290 = 1;
	int16_t x291 = INT16_MAX;
	int32_t x292 = -1;
	static int32_t t65 = 5158;

	t65 = (((x289%x290)%x291)<=x292);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MAX;
	volatile int8_t x296 = INT8_MIN;

	t66 = (((x293%x294)%x295)<=x296);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = 0;
	static int8_t x298 = 36;
	uint32_t x299 = 493238U;
	uint32_t x300 = 344367623U;

	t67 = (((x297%x298)%x299)<=x300);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x301 = UINT32_MAX;
	static int8_t x302 = 1;
	int8_t x303 = -1;
	int32_t t68 = 50;

	t68 = (((x301%x302)%x303)<=x304);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int16_t x306 = 1;
	uint16_t x307 = 486U;
	int32_t t69 = 179;

	t69 = (((x305%x306)%x307)<=x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x309 = 179160223U;
	int16_t x310 = 4600;
	int32_t x312 = 6666;
	int32_t t70 = 152114770;

	t70 = (((x309%x310)%x311)<=x312);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = -1LL;
	volatile int16_t x314 = INT16_MAX;
	volatile int8_t x315 = INT8_MAX;
	int32_t t71 = -39423;

	t71 = (((x313%x314)%x315)<=x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = 12LL;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -1LL;
	volatile int32_t t72 = -364444570;

	t72 = (((x317%x318)%x319)<=x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x325 = 198170901U;
	int16_t x327 = -1;
	int32_t t73 = -26711545;

	t73 = (((x325%x326)%x327)<=x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x333 = 1343U;
	uint64_t x334 = UINT64_MAX;
	uint32_t x335 = 1214U;
	int32_t t74 = -48346;

	t74 = (((x333%x334)%x335)<=x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x338 = INT16_MAX;
	int64_t x339 = -205LL;
	int8_t x340 = INT8_MIN;

	t75 = (((x337%x338)%x339)<=x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = -1;
	static volatile uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t76 = 222407;

	t76 = (((x341%x342)%x343)<=x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x345 = INT32_MIN;
	static volatile int32_t t77 = -91354074;

	t77 = (((x345%x346)%x347)<=x348);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x349 = -13557;
	volatile uint32_t x350 = 24186U;
	int32_t t78 = -46;

	t78 = (((x349%x350)%x351)<=x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MAX;
	uint32_t x354 = 6143802U;
	uint16_t x355 = UINT16_MAX;
	static volatile int8_t x356 = INT8_MIN;

	t79 = (((x353%x354)%x355)<=x356);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x357 = -1;
	volatile uint16_t x358 = 9328U;
	int64_t x359 = INT64_MAX;
	int16_t x360 = 10;

	t80 = (((x357%x358)%x359)<=x360);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x361 = -1;
	static int64_t x362 = -1LL;
	int64_t x363 = 709014615959LL;
	int8_t x364 = INT8_MIN;
	volatile int32_t t81 = 2;

	t81 = (((x361%x362)%x363)<=x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x366 = 9426U;
	int32_t x367 = INT32_MIN;
	static int32_t t82 = 840;

	t82 = (((x365%x366)%x367)<=x368);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x369 = UINT8_MAX;
	int64_t x370 = -1LL;
	uint16_t x371 = 8U;
	int32_t t83 = -390158;

	t83 = (((x369%x370)%x371)<=x372);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x373 = 283U;
	int64_t x374 = 1623642767551LL;
	volatile int16_t x375 = -1;
	volatile int32_t t84 = 54;

	t84 = (((x373%x374)%x375)<=x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x377 = INT64_MIN;
	int32_t x378 = 7319;
	volatile int32_t x379 = -1;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t85 = -2639887;

	t85 = (((x377%x378)%x379)<=x380);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x381 = UINT64_MAX;
	int8_t x382 = INT8_MIN;
	static int8_t x383 = INT8_MIN;
	static volatile uint32_t x384 = 171U;
	int32_t t86 = 49;

	t86 = (((x381%x382)%x383)<=x384);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x385 = 358U;
	int64_t x386 = -1LL;
	int64_t x388 = -984LL;
	volatile int32_t t87 = -24835;

	t87 = (((x385%x386)%x387)<=x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = -10;
	static int8_t x391 = -1;
	int32_t t88 = -19931350;

	t88 = (((x389%x390)%x391)<=x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x394 = 397657148LLU;
	int8_t x395 = INT8_MAX;
	int16_t x396 = 551;

	t89 = (((x393%x394)%x395)<=x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = -1;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = 0U;
	int32_t t90 = 0;

	t90 = (((x397%x398)%x399)<=x400);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x401 = 31939U;
	uint8_t x402 = 119U;
	int32_t x404 = -1;
	int32_t t91 = 396;

	t91 = (((x401%x402)%x403)<=x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x405 = 162U;
	int32_t x406 = INT32_MIN;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t t92 = -1793718;

	t92 = (((x405%x406)%x407)<=x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = -238910160;
	static int8_t x410 = INT8_MIN;
	int16_t x411 = -89;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t93 = -531617654;

	t93 = (((x409%x410)%x411)<=x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = INT32_MIN;
	int8_t x414 = 17;
	int32_t x415 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t94 = 1456;

	t94 = (((x413%x414)%x415)<=x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x417 = 0U;
	static int64_t x419 = INT64_MAX;
	int16_t x420 = INT16_MAX;
	static int32_t t95 = 486747;

	t95 = (((x417%x418)%x419)<=x420);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = 4;
	int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MAX;
	volatile int32_t t96 = 127;

	t96 = (((x421%x422)%x423)<=x424);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x425 = INT8_MAX;
	int8_t x426 = INT8_MIN;
	volatile int16_t x428 = INT16_MIN;
	static volatile int32_t t97 = 13909;

	t97 = (((x425%x426)%x427)<=x428);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x429 = INT32_MIN;
	static int16_t x430 = -1;
	uint8_t x431 = UINT8_MAX;
	volatile int32_t t98 = 1;

	t98 = (((x429%x430)%x431)<=x432);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = -1LL;
	uint64_t x434 = 562LLU;

	t99 = (((x433%x434)%x435)<=x436);

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

