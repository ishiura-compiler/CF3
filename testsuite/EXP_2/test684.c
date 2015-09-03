#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int32_t t0 = -215;
uint8_t x12 = UINT8_MAX;
volatile int32_t t2 = 5238296;
static volatile int8_t x19 = -1;
int64_t x24 = INT64_MIN;
static uint8_t x30 = 5U;
uint16_t x32 = UINT16_MAX;
volatile uint64_t x34 = UINT64_MAX;
uint32_t x43 = 1166U;
int32_t t11 = 12198304;
static volatile int16_t x57 = INT16_MIN;
int8_t x63 = INT8_MIN;
int8_t x64 = -1;
uint64_t x69 = 59780293788LLU;
volatile int32_t t16 = -180033;
int16_t x73 = INT16_MAX;
int32_t t18 = 87;
volatile uint64_t x86 = 51274611560425808LLU;
uint32_t x91 = UINT32_MAX;
int32_t t20 = 2706545;
volatile int32_t t22 = -201813226;
static uint32_t x101 = 116654556U;
int64_t x103 = 3LL;
int16_t x106 = INT16_MIN;
volatile int32_t t24 = -4082002;
int64_t x109 = INT64_MAX;
int64_t x110 = -29947975LL;
int64_t x112 = INT64_MIN;
uint8_t x113 = 1U;
int64_t x114 = INT64_MIN;
int16_t x117 = -16073;
volatile uint8_t x118 = UINT8_MAX;
int32_t x120 = -3483;
int16_t x123 = INT16_MIN;
int64_t x126 = INT64_MIN;
int64_t x127 = 166904706739251LL;
int64_t x130 = INT64_MIN;
volatile int32_t t31 = -57457;
int64_t x165 = -110311432808LL;
static volatile uint8_t x171 = 49U;
static uint16_t x173 = 3U;
volatile int32_t t38 = -17064784;
int16_t x185 = INT16_MIN;
int64_t x186 = -1LL;
int8_t x188 = INT8_MIN;
int8_t x189 = 39;
volatile uint32_t x196 = 46U;
volatile int32_t t43 = 10858;
int32_t x203 = INT32_MAX;
int16_t x205 = -8926;
volatile int32_t t45 = -26;
uint32_t x209 = 56961918U;
uint8_t x210 = UINT8_MAX;
int32_t t46 = -3288154;
static int8_t x217 = -1;
int64_t x221 = -1LL;
volatile int32_t t50 = -2;
uint64_t x232 = 3511094697LLU;
volatile int32_t t51 = -30815247;
static int64_t x236 = INT64_MIN;
int64_t x256 = 14463523364166LL;
uint32_t x257 = 2080351U;
volatile int64_t x258 = INT64_MIN;
volatile uint8_t x264 = UINT8_MAX;
uint16_t x269 = 240U;
volatile int16_t x274 = INT16_MIN;
static int32_t t61 = 111428;
static int16_t x281 = INT16_MAX;
volatile uint32_t x283 = 911569U;
int16_t x285 = INT16_MAX;
int32_t t65 = 847321246;
static int16_t x299 = INT16_MIN;
static volatile int16_t x300 = INT16_MIN;
static volatile int32_t t67 = -19410;
int32_t x302 = INT32_MIN;
int64_t x303 = INT64_MIN;
volatile int32_t t70 = -54;
int16_t x319 = -369;
uint8_t x324 = UINT8_MAX;
int64_t x325 = 119LL;
static uint64_t x330 = 16603861044LLU;
int16_t x336 = INT16_MAX;
volatile uint32_t x345 = UINT32_MAX;
static int8_t x352 = INT8_MIN;
int8_t x364 = INT8_MIN;
int32_t x367 = INT32_MIN;
volatile int32_t t84 = 781;
static int16_t x374 = INT16_MIN;
static uint16_t x375 = UINT16_MAX;
int32_t t87 = -2161258;
int8_t x381 = -1;
int8_t x388 = INT8_MAX;
int32_t x424 = INT32_MAX;
int32_t t97 = 934489614;
int8_t x430 = INT8_MIN;
uint64_t x432 = 50179934LLU;
int64_t x434 = INT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = UINT8_MAX;

	t0 = ((x1+(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -61;
	static int64_t x6 = -9165273LL;
	int32_t x7 = -8610928;
	uint64_t x8 = UINT64_MAX;
	static volatile int32_t t1 = 4;

	t1 = ((x5+(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	volatile int64_t x10 = INT64_MIN;
	uint16_t x11 = 88U;

	t2 = ((x9+(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MIN;
	static int32_t x15 = INT32_MIN;
	static uint16_t x16 = 61U;
	int32_t t3 = -357960907;

	t3 = ((x13+(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -12511;
	uint16_t x18 = 189U;
	int16_t x20 = -48;
	static int32_t t4 = -29;

	t4 = ((x17+(x18%x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int64_t x22 = INT64_MAX;
	volatile uint8_t x23 = UINT8_MAX;
	static volatile int32_t t5 = 1899007;

	t5 = ((x21+(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int32_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int8_t x28 = 18;
	volatile int32_t t6 = -39629916;

	t6 = ((x25+(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	uint64_t x31 = 15470562975LLU;
	volatile int32_t t7 = 68;

	t7 = ((x29+(x30%x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x33 = 418U;
	int8_t x35 = -1;
	int32_t x36 = -1;
	static int32_t t8 = 5715;

	t8 = ((x33+(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 6U;
	volatile int32_t x42 = -1;
	static uint16_t x44 = UINT16_MAX;
	int32_t t9 = -556;

	t9 = ((x41+(x42%x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 2919U;
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -86;
	int32_t t10 = -1004;

	t10 = ((x45+(x46%x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MAX;
	uint32_t x51 = 235U;
	uint64_t x52 = UINT64_MAX;

	t11 = ((x49+(x50%x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -53;
	uint16_t x54 = 6834U;
	int64_t x55 = -3733973711104807LL;
	static int64_t x56 = INT64_MAX;
	int32_t t12 = 992718;

	t12 = ((x53+(x54%x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = 2;
	static int16_t x59 = -1;
	int16_t x60 = INT16_MIN;
	int32_t t13 = 7;

	t13 = ((x57+(x58%x59))==x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 1;
	int8_t x62 = -1;
	int32_t t14 = 48234708;

	t14 = ((x61+(x62%x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	static uint16_t x66 = UINT16_MAX;
	volatile int16_t x67 = 2739;
	uint32_t x68 = UINT32_MAX;
	int32_t t15 = -1;

	t15 = ((x65+(x66%x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x70 = UINT32_MAX;
	int16_t x71 = -1;
	volatile int8_t x72 = -1;

	t16 = ((x69+(x70%x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = -1;
	uint32_t x75 = UINT32_MAX;
	volatile int8_t x76 = INT8_MIN;
	int32_t t17 = -2911681;

	t17 = ((x73+(x74%x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = 76LL;
	static int8_t x80 = INT8_MIN;

	t18 = ((x77+(x78%x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x85 = 1U;
	volatile int16_t x87 = -241;
	uint8_t x88 = 20U;
	int32_t t19 = 238552612;

	t19 = ((x85+(x86%x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MIN;
	int16_t x92 = INT16_MAX;

	t20 = ((x89+(x90%x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int16_t x94 = -1;
	uint32_t x95 = UINT32_MAX;
	int16_t x96 = INT16_MAX;
	volatile int32_t t21 = -113735;

	t21 = ((x93+(x94%x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -1;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;

	t22 = ((x97+(x98%x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x102 = 1611158419LLU;
	static volatile int32_t x104 = INT32_MIN;
	volatile int32_t t23 = -22784;

	t23 = ((x101+(x102%x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	static int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;

	t24 = ((x105+(x106%x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x111 = INT16_MIN;
	int32_t t25 = -51;

	t25 = ((x109+(x110%x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x115 = -1;
	int32_t x116 = INT32_MIN;
	int32_t t26 = -43960;

	t26 = ((x113+(x114%x115))==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x119 = INT8_MAX;
	int32_t t27 = -355860;

	t27 = ((x117+(x118%x119))==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 139U;
	int8_t x122 = INT8_MAX;
	static int16_t x124 = INT16_MAX;
	static volatile int32_t t28 = -62494794;

	t28 = ((x121+(x122%x123))==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = INT32_MIN;
	int16_t x128 = 2449;
	static volatile int32_t t29 = -18;

	t29 = ((x125+(x126%x127))==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = -1;
	int32_t x131 = INT32_MIN;
	uint64_t x132 = UINT64_MAX;
	int32_t t30 = 26821;

	t30 = ((x129+(x130%x131))==x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = -4;
	static uint16_t x143 = UINT16_MAX;
	static int64_t x144 = INT64_MIN;

	t31 = ((x141+(x142%x143))==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 988533092534319LLU;
	uint8_t x146 = 1U;
	volatile int32_t x147 = INT32_MIN;
	static int64_t x148 = 499447LL;
	static volatile int32_t t32 = 22766;

	t32 = ((x145+(x146%x147))==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = -602;
	static uint64_t x158 = UINT64_MAX;
	static int64_t x159 = INT64_MIN;
	volatile int8_t x160 = INT8_MIN;
	int32_t t33 = -42190;

	t33 = ((x157+(x158%x159))==x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x161 = INT32_MAX;
	volatile uint16_t x162 = 4044U;
	int64_t x163 = 3151758LL;
	static volatile int16_t x164 = INT16_MIN;
	int32_t t34 = 256957;

	t34 = ((x161+(x162%x163))==x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x166 = UINT32_MAX;
	static volatile int64_t x167 = INT64_MIN;
	uint8_t x168 = 1U;
	volatile int32_t t35 = 45940;

	t35 = ((x165+(x166%x167))==x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x169 = INT16_MIN;
	volatile int8_t x170 = INT8_MAX;
	int16_t x172 = INT16_MIN;
	static int32_t t36 = 914;

	t36 = ((x169+(x170%x171))==x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x174 = -1;
	static int8_t x175 = -2;
	static volatile int16_t x176 = INT16_MIN;
	static volatile int32_t t37 = 907858133;

	t37 = ((x173+(x174%x175))==x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x177 = UINT32_MAX;
	volatile uint16_t x178 = 29U;
	int32_t x179 = -1;
	volatile int8_t x180 = 27;

	t38 = ((x177+(x178%x179))==x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -3;
	int16_t x182 = -5;
	volatile uint32_t x183 = 1719U;
	int64_t x184 = INT64_MIN;
	volatile int32_t t39 = -112;

	t39 = ((x181+(x182%x183))==x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x187 = 639336821U;
	volatile int32_t t40 = -1455002;

	t40 = ((x185+(x186%x187))==x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x190 = 8555U;
	static volatile int16_t x191 = INT16_MAX;
	static volatile uint16_t x192 = UINT16_MAX;
	volatile int32_t t41 = 6424013;

	t41 = ((x189+(x190%x191))==x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = 1363U;
	int16_t x194 = -1;
	static uint16_t x195 = UINT16_MAX;
	static volatile int32_t t42 = 1;

	t42 = ((x193+(x194%x195))==x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = -1LL;
	volatile uint64_t x198 = 55114LLU;
	int8_t x199 = -1;
	uint8_t x200 = UINT8_MAX;

	t43 = ((x197+(x198%x199))==x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = -1;
	int16_t x202 = -1;
	int32_t x204 = INT32_MIN;
	volatile int32_t t44 = -2048089;

	t44 = ((x201+(x202%x203))==x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x206 = -1;
	uint32_t x207 = 27892U;
	int8_t x208 = -24;

	t45 = ((x205+(x206%x207))==x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x211 = INT64_MIN;
	volatile int16_t x212 = -1;

	t46 = ((x209+(x210%x211))==x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = -1;
	static volatile uint32_t x215 = 370240U;
	int16_t x216 = -3;
	int32_t t47 = 341269217;

	t47 = ((x213+(x214%x215))==x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x218 = -3;
	static int64_t x219 = INT64_MIN;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t48 = 16171;

	t48 = ((x217+(x218%x219))==x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x222 = 238265LLU;
	volatile int32_t x223 = INT32_MIN;
	static volatile int16_t x224 = INT16_MIN;
	int32_t t49 = 40323;

	t49 = ((x221+(x222%x223))==x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x225 = INT32_MAX;
	static uint32_t x226 = UINT32_MAX;
	int16_t x227 = INT16_MIN;
	uint32_t x228 = 1414U;

	t50 = ((x225+(x226%x227))==x228);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x229 = 1;
	int32_t x230 = INT32_MAX;
	int16_t x231 = 41;

	t51 = ((x229+(x230%x231))==x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x233 = -1;
	static int64_t x234 = 2236806721LL;
	int64_t x235 = INT64_MAX;
	int32_t t52 = -10;

	t52 = ((x233+(x234%x235))==x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = -29389LL;
	volatile int32_t x238 = -2;
	uint16_t x239 = 2136U;
	int32_t x240 = INT32_MAX;
	int32_t t53 = -709;

	t53 = ((x237+(x238%x239))==x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = INT32_MAX;
	int64_t x242 = INT64_MIN;
	uint64_t x243 = 9LLU;
	int32_t x244 = -1;
	int32_t t54 = 0;

	t54 = ((x241+(x242%x243))==x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -114;
	static int16_t x250 = -7;
	static int8_t x251 = INT8_MAX;
	int64_t x252 = -16090487650346325LL;
	volatile int32_t t55 = -325550;

	t55 = ((x249+(x250%x251))==x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = 15LL;
	int32_t x254 = INT32_MIN;
	static int64_t x255 = 113821390116LL;
	int32_t t56 = 17421;

	t56 = ((x253+(x254%x255))==x256);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x259 = -37;
	int32_t x260 = -706;
	int32_t t57 = 7652;

	t57 = ((x257+(x258%x259))==x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = -1;
	uint16_t x262 = 685U;
	int64_t x263 = -1LL;
	int32_t t58 = 237;

	t58 = ((x261+(x262%x263))==x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	int16_t x267 = -1;
	volatile int64_t x268 = -413713950LL;
	volatile int32_t t59 = 21516906;

	t59 = ((x265+(x266%x267))==x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x270 = 33;
	int16_t x271 = INT16_MAX;
	int8_t x272 = 1;
	static int32_t t60 = 187395064;

	t60 = ((x269+(x270%x271))==x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = 7U;
	uint64_t x275 = 9753275660LLU;
	volatile int16_t x276 = 0;

	t61 = ((x273+(x274%x275))==x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -14;
	int64_t x278 = -1LL;
	int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t62 = 883;

	t62 = ((x277+(x278%x279))==x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x282 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	volatile int32_t t63 = 2044;

	t63 = ((x281+(x282%x283))==x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x286 = INT16_MIN;
	volatile int32_t x287 = 345792086;
	static int32_t x288 = -1;
	int32_t t64 = 2608040;

	t64 = ((x285+(x286%x287))==x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x289 = 1U;
	static uint16_t x290 = UINT16_MAX;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = -319;

	t65 = ((x289+(x290%x291))==x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	static int32_t x294 = INT32_MAX;
	static volatile int16_t x295 = 904;
	volatile uint32_t x296 = 84121953U;
	int32_t t66 = 1152;

	t66 = ((x293+(x294%x295))==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MAX;
	int8_t x298 = 1;

	t67 = ((x297+(x298%x299))==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MAX;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t68 = -14958648;

	t68 = ((x301+(x302%x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x305 = 4U;
	static uint64_t x306 = 4LLU;
	static uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t69 = 1295;

	t69 = ((x305+(x306%x307))==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x309 = 9U;
	int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MAX;
	uint64_t x312 = 525757372954028LLU;

	t70 = ((x309+(x310%x311))==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x313 = -1;
	volatile int32_t x314 = INT32_MIN;
	uint16_t x315 = 1307U;
	int16_t x316 = INT16_MIN;
	volatile int32_t t71 = 1773;

	t71 = ((x313+(x314%x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = -9;
	int16_t x318 = 1747;
	uint8_t x320 = UINT8_MAX;
	int32_t t72 = 6840;

	t72 = ((x317+(x318%x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = INT16_MAX;
	int16_t x322 = -1;
	int16_t x323 = INT16_MIN;
	int32_t t73 = 717740532;

	t73 = ((x321+(x322%x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x326 = UINT32_MAX;
	int64_t x327 = INT64_MIN;
	volatile uint64_t x328 = 166404LLU;
	int32_t t74 = 40334;

	t74 = ((x325+(x326%x327))==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int16_t x331 = INT16_MIN;
	int8_t x332 = -1;
	static volatile int32_t t75 = -14396806;

	t75 = ((x329+(x330%x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = -1;
	uint32_t x334 = 5U;
	static int32_t x335 = 57242634;
	int32_t t76 = 16;

	t76 = ((x333+(x334%x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -1LL;
	static volatile int8_t x338 = INT8_MAX;
	int32_t x339 = INT32_MAX;
	int8_t x340 = 0;
	volatile int32_t t77 = 461921;

	t77 = ((x337+(x338%x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MIN;
	int64_t x343 = 97630373LL;
	static int64_t x344 = -1LL;
	volatile int32_t t78 = 24896;

	t78 = ((x341+(x342%x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x346 = 432125262;
	uint16_t x347 = 2371U;
	int64_t x348 = INT64_MIN;
	volatile int32_t t79 = -2;

	t79 = ((x345+(x346%x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int8_t x350 = 0;
	int32_t x351 = INT32_MAX;
	volatile int32_t t80 = 18;

	t80 = ((x349+(x350%x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = -283836981088816649LL;
	int8_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int16_t x356 = 818;
	volatile int32_t t81 = -733496558;

	t81 = ((x353+(x354%x355))==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = -862LL;
	static int32_t x358 = INT32_MIN;
	int16_t x359 = -1;
	int16_t x360 = -1;
	volatile int32_t t82 = -910;

	t82 = ((x357+(x358%x359))==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = 1LL;
	int64_t x362 = -1LL;
	static int8_t x363 = 16;
	int32_t t83 = -3094;

	t83 = ((x361+(x362%x363))==x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x365 = INT16_MIN;
	static int16_t x366 = -1;
	int8_t x368 = INT8_MAX;

	t84 = ((x365+(x366%x367))==x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x369 = 12U;
	int8_t x370 = INT8_MAX;
	volatile uint8_t x371 = 24U;
	int32_t x372 = -199;
	static int32_t t85 = 632074606;

	t85 = ((x369+(x370%x371))==x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x373 = 6930642U;
	int64_t x376 = -1LL;
	static int32_t t86 = -107433;

	t86 = ((x373+(x374%x375))==x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = 17;
	int8_t x379 = INT8_MAX;
	uint8_t x380 = 6U;

	t87 = ((x377+(x378%x379))==x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x382 = INT64_MAX;
	int32_t x383 = INT32_MAX;
	int64_t x384 = -1LL;
	int32_t t88 = 717;

	t88 = ((x381+(x382%x383))==x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	uint64_t x387 = 311629709968662LLU;
	volatile int32_t t89 = 84;

	t89 = ((x385+(x386%x387))==x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x389 = 33U;
	static int32_t x390 = INT32_MIN;
	int64_t x391 = INT64_MAX;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t90 = -15;

	t90 = ((x389+(x390%x391))==x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x393 = 87559032U;
	uint8_t x394 = UINT8_MAX;
	int8_t x395 = INT8_MIN;
	static volatile uint8_t x396 = 32U;
	static volatile int32_t t91 = -527777451;

	t91 = ((x393+(x394%x395))==x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x397 = 1;
	uint16_t x398 = 4U;
	static uint8_t x399 = UINT8_MAX;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t92 = 534999408;

	t92 = ((x397+(x398%x399))==x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x401 = INT16_MIN;
	static volatile int64_t x402 = -441326231368583193LL;
	uint32_t x403 = 2002U;
	int32_t x404 = INT32_MIN;
	int32_t t93 = -193214595;

	t93 = ((x401+(x402%x403))==x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x409 = UINT64_MAX;
	int64_t x410 = INT64_MIN;
	int16_t x411 = 111;
	volatile int32_t x412 = INT32_MIN;
	int32_t t94 = -100428;

	t94 = ((x409+(x410%x411))==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = INT64_MIN;
	uint16_t x414 = 0U;
	int8_t x415 = INT8_MAX;
	uint8_t x416 = 1U;
	volatile int32_t t95 = -324189;

	t95 = ((x413+(x414%x415))==x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = 209970631958459LL;
	volatile uint8_t x422 = 75U;
	static volatile uint32_t x423 = 12U;
	volatile int32_t t96 = 120965;

	t96 = ((x421+(x422%x423))==x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x425 = UINT32_MAX;
	volatile int8_t x426 = -1;
	volatile int8_t x427 = -2;
	int16_t x428 = -1;

	t97 = ((x425+(x426%x427))==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = INT8_MAX;
	int64_t x431 = 26949547477489182LL;
	volatile int32_t t98 = -8813;

	t98 = ((x429+(x430%x431))==x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = INT8_MIN;
	int8_t x435 = INT8_MAX;
	int8_t x436 = -36;
	volatile int32_t t99 = -277655;

	t99 = ((x433+(x434%x435))==x436);

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

