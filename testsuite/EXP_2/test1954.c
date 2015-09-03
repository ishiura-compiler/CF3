#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -59;
static int8_t x9 = INT8_MIN;
int64_t x13 = INT64_MIN;
uint32_t x20 = UINT32_MAX;
volatile int8_t x27 = -3;
static int64_t t6 = -2086078928LL;
int16_t x38 = INT16_MIN;
uint32_t x40 = 7608529U;
static int8_t x45 = -1;
static volatile int64_t x47 = -407LL;
volatile uint8_t x49 = 34U;
static uint32_t t12 = 3737U;
static int32_t x55 = -241946;
int64_t x56 = INT64_MAX;
uint64_t x57 = 12275243LLU;
int32_t x60 = -33818;
int8_t x63 = INT8_MIN;
volatile int64_t t15 = -1LL;
int32_t x69 = INT32_MIN;
int32_t x70 = INT32_MAX;
int16_t x73 = 6106;
static uint8_t x81 = UINT8_MAX;
static int32_t x88 = -1;
int64_t x93 = INT64_MIN;
volatile uint32_t x107 = 0U;
int32_t t27 = -205470187;
uint32_t t28 = 24658U;
volatile int32_t t29 = -194;
static int8_t x121 = -1;
int64_t x122 = INT64_MAX;
uint16_t x133 = 1U;
int16_t x142 = INT16_MAX;
uint16_t x145 = UINT16_MAX;
int16_t x149 = -1;
int64_t x150 = INT64_MIN;
static int8_t x151 = -1;
volatile int32_t t37 = 208680;
int32_t t39 = 133362;
int8_t x163 = INT8_MIN;
int32_t t41 = -442;
int64_t x183 = 3337LL;
volatile int32_t x185 = INT32_MIN;
volatile uint64_t t46 = 17853805LLU;
uint64_t x195 = 1003244004154618LLU;
static int16_t x203 = 64;
volatile uint64_t x204 = 27732LLU;
static uint64_t t48 = 7847202958778LLU;
volatile int64_t x208 = 222522LL;
static int16_t x211 = INT16_MAX;
int32_t x215 = INT32_MIN;
int64_t x216 = -9138LL;
static volatile int64_t t51 = -7490690LL;
uint32_t x233 = 1U;
static volatile int32_t x234 = INT32_MIN;
uint16_t x237 = 41U;
static uint32_t x250 = 1841628964U;
int32_t t58 = 906079892;
uint8_t x253 = 28U;
volatile int32_t x262 = -341128500;
int16_t x264 = -1;
uint64_t x266 = 5LLU;
uint16_t x269 = 5961U;
uint32_t x271 = 1U;
int64_t x278 = -10698323LL;
uint64_t x279 = 427428622077LLU;
int64_t t65 = 167792298LL;
static int32_t x284 = 29803;
volatile int32_t t67 = -30;
volatile int64_t x289 = INT64_MIN;
int32_t x291 = INT32_MIN;
int32_t x292 = INT32_MIN;
int16_t x295 = -2396;
static uint64_t t69 = 3147603836662042LLU;
int8_t x300 = -3;
volatile int64_t x303 = INT64_MIN;
int32_t x310 = INT32_MAX;
volatile int32_t x311 = -1;
static uint16_t x312 = 6U;
int32_t t72 = 4105896;
uint64_t x316 = UINT64_MAX;
uint64_t t73 = 36827544082495697LLU;
volatile int16_t x318 = INT16_MAX;
int64_t t76 = -150459444483319258LL;
static int8_t x335 = 0;
volatile uint8_t x337 = 1U;
int32_t x338 = 27878;
int32_t t78 = -1728489;
int16_t x341 = INT16_MIN;
static int32_t x342 = INT32_MIN;
int16_t x354 = INT16_MAX;
int64_t x355 = 876497119071468699LL;
uint16_t x362 = 962U;
static int32_t t84 = -5345259;
int16_t x368 = 2;
volatile uint64_t x370 = 38272440416997319LLU;
static uint64_t x373 = 0LLU;
int64_t x374 = INT64_MAX;
int32_t x376 = INT32_MAX;
static int8_t x378 = -1;
uint32_t x380 = UINT32_MAX;
uint32_t x388 = 10688U;
uint32_t t90 = 75071856U;
int8_t x394 = INT8_MAX;
int64_t x399 = INT64_MIN;
int16_t x400 = INT16_MIN;
int64_t x401 = 7LL;
volatile uint64_t x404 = 1004883908258650LLU;
uint8_t x405 = 0U;
volatile int8_t x411 = -1;
int16_t x412 = INT16_MAX;
int32_t x422 = INT32_MIN;
uint16_t x428 = 3535U;


void f0(void) {
	uint32_t x1 = 2U;
	int8_t x3 = 4;
	uint32_t x4 = 29973U;
	volatile uint32_t t0 = 851U;

	t0 = ((x1==(x2|x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -2LL;
	int64_t x6 = INT64_MIN;
	int16_t x7 = -342;
	uint8_t x8 = 11U;
	volatile int32_t t1 = 600688;

	t1 = ((x5==(x6|x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = 677730LL;
	static uint16_t x11 = UINT16_MAX;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -12431628;

	t2 = ((x9==(x10|x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 26512356U;
	static volatile int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 6;

	t3 = ((x13==(x14|x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -10826;
	static int64_t x18 = INT64_MIN;
	int8_t x19 = 3;
	uint32_t t4 = 158289U;

	t4 = ((x17==(x18|x19))/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 246U;
	int16_t x22 = -1;
	static int32_t x23 = INT32_MIN;
	volatile uint64_t x24 = 15LLU;
	volatile uint64_t t5 = 14571292225LLU;

	t5 = ((x21==(x22|x23))/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 27U;
	int8_t x26 = -1;
	static int64_t x28 = -4779000109LL;

	t6 = ((x25==(x26|x27))/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint8_t x30 = 1U;
	int64_t x31 = -1LL;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -7154;

	t7 = ((x29==(x30|x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	static uint32_t x34 = UINT32_MAX;
	int32_t x35 = -1;
	uint16_t x36 = 9U;
	int32_t t8 = 528957768;

	t8 = ((x33==(x34|x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 7U;
	int16_t x39 = 6;
	static volatile uint32_t t9 = 0U;

	t9 = ((x37==(x38|x39))/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1486123U;
	int32_t x42 = INT32_MIN;
	static int32_t x43 = INT32_MAX;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 953;

	t10 = ((x41==(x42|x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x46 = UINT64_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = 23;

	t11 = ((x45==(x46|x47))/x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = UINT16_MAX;
	static int64_t x51 = INT64_MIN;
	uint32_t x52 = 302U;

	t12 = ((x49==(x50|x51))/x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = 84323702058713151LL;
	int16_t x54 = -1;
	int64_t t13 = -8357364LL;

	t13 = ((x53==(x54|x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 11U;
	int16_t x59 = -1;
	static int32_t t14 = 15668;

	t14 = ((x57==(x58|x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = 27U;
	volatile int8_t x62 = -1;
	int64_t x64 = -1LL;

	t15 = ((x61==(x62|x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	uint8_t x67 = 91U;
	int16_t x68 = 2449;
	volatile int32_t t16 = 2;

	t16 = ((x65==(x66|x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x71 = -1;
	static int32_t x72 = INT32_MIN;
	static int32_t t17 = 0;

	t17 = ((x69==(x70|x71))/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = UINT64_MAX;
	int8_t x75 = 8;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 299;

	t18 = ((x73==(x74|x75))/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	uint16_t x78 = 184U;
	int32_t x79 = -1;
	static int16_t x80 = INT16_MAX;
	volatile int32_t t19 = -86576745;

	t19 = ((x77==(x78|x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = 86233788133493LL;
	static uint32_t x83 = UINT32_MAX;
	volatile int8_t x84 = INT8_MAX;
	int32_t t20 = 251277;

	t20 = ((x81==(x82|x83))/x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 54U;
	volatile int8_t x86 = INT8_MIN;
	volatile int32_t x87 = 961;
	int32_t t21 = 2308987;

	t21 = ((x85==(x86|x87))/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -4976LL;
	int8_t x90 = -28;
	int8_t x91 = -1;
	uint16_t x92 = 52U;
	static int32_t t22 = -9;

	t22 = ((x89==(x90|x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = 23U;
	int8_t x95 = -1;
	volatile int64_t x96 = -1LL;
	volatile int64_t t23 = 218571091LL;

	t23 = ((x93==(x94|x95))/x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int8_t x98 = INT8_MAX;
	int16_t x99 = 125;
	int32_t x100 = 110;
	int32_t t24 = -399268433;

	t24 = ((x97==(x98|x99))/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	static int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MAX;
	int64_t x104 = 3170077LL;
	int64_t t25 = -93372444416636065LL;

	t25 = ((x101==(x102|x103))/x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 4032565181206323LLU;
	int64_t x106 = -421LL;
	int8_t x108 = INT8_MAX;
	int32_t t26 = -453814830;

	t26 = ((x105==(x106|x107))/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static uint8_t x110 = 29U;
	uint16_t x111 = 14U;
	static uint16_t x112 = 6U;

	t27 = ((x109==(x110|x111))/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -86807120;
	static int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	uint32_t x116 = 1U;

	t28 = ((x113==(x114|x115))/x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int32_t x119 = 12307;
	int16_t x120 = -1;

	t29 = ((x117==(x118|x119))/x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x123 = UINT32_MAX;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = 4761359;

	t30 = ((x121==(x122|x123))/x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 4797294LL;
	static uint64_t x126 = 425056590442LLU;
	int8_t x127 = INT8_MAX;
	volatile int32_t x128 = INT32_MAX;
	volatile int32_t t31 = -1;

	t31 = ((x125==(x126|x127))/x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	int32_t x130 = 367504028;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MAX;
	int32_t t32 = -16;

	t32 = ((x129==(x130|x131))/x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = 9410LL;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -61839537043LL;
	static volatile int64_t t33 = 412LL;

	t33 = ((x133==(x134|x135))/x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MAX;
	uint16_t x138 = 0U;
	int32_t x139 = -18380;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -2461298;

	t34 = ((x137==(x138|x139))/x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	int8_t x143 = -1;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 13733LL;

	t35 = ((x141==(x142|x143))/x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x146 = 22U;
	int64_t x147 = 2498119888032268119LL;
	int32_t x148 = -1;
	volatile int32_t t36 = 0;

	t36 = ((x145==(x146|x147))/x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x152 = -1;

	t37 = ((x149==(x150|x151))/x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static volatile int8_t x154 = INT8_MIN;
	static int32_t x155 = INT32_MAX;
	volatile uint32_t x156 = 125378U;
	static volatile uint32_t t38 = 820U;

	t38 = ((x153==(x154|x155))/x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = UINT16_MAX;
	static int64_t x158 = INT64_MIN;
	int32_t x159 = 412530;
	int8_t x160 = INT8_MAX;

	t39 = ((x157==(x158|x159))/x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	volatile int32_t x162 = INT32_MIN;
	volatile int8_t x164 = -1;
	int32_t t40 = -1804;

	t40 = ((x161==(x162|x163))/x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 3;
	int8_t x166 = INT8_MAX;
	int16_t x167 = -1;
	int8_t x168 = INT8_MIN;

	t41 = ((x165==(x166|x167))/x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = -55;
	int8_t x170 = INT8_MIN;
	uint32_t x171 = 200278299U;
	int64_t x172 = INT64_MIN;
	int64_t t42 = -3525998446LL;

	t42 = ((x169==(x170|x171))/x172);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x177 = INT16_MAX;
	static volatile uint32_t x178 = 1954078U;
	static int8_t x179 = -1;
	static int32_t x180 = INT32_MIN;
	int32_t t43 = 3561628;

	t43 = ((x177==(x178|x179))/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = INT64_MIN;
	static volatile int64_t x182 = -1LL;
	volatile int32_t x184 = INT32_MIN;
	int32_t t44 = -16297440;

	t44 = ((x181==(x182|x183))/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = -1;
	static uint8_t x187 = UINT8_MAX;
	uint64_t x188 = UINT64_MAX;
	uint64_t t45 = 1310311138682376LLU;

	t45 = ((x185==(x186|x187))/x188);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = INT32_MIN;
	int64_t x190 = -1LL;
	static int16_t x191 = -1;
	uint64_t x192 = UINT64_MAX;

	t46 = ((x189==(x190|x191))/x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = UINT8_MAX;
	int32_t x194 = INT32_MIN;
	int16_t x196 = 73;
	volatile int32_t t47 = -37;

	t47 = ((x193==(x194|x195))/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x201 = -1;
	uint16_t x202 = UINT16_MAX;

	t48 = ((x201==(x202|x203))/x204);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -8;
	int16_t x206 = 804;
	int16_t x207 = -7645;
	volatile int64_t t49 = 548581036LL;

	t49 = ((x205==(x206|x207))/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x209 = 2923U;
	uint8_t x210 = UINT8_MAX;
	static uint8_t x212 = 9U;
	volatile int32_t t50 = -138418;

	t50 = ((x209==(x210|x211))/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = 0;
	int64_t x214 = 3052764174666LL;

	t51 = ((x213==(x214|x215))/x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t52 = 869408;

	t52 = ((x221==(x222|x223))/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = 477500U;
	volatile int32_t x230 = INT32_MIN;
	volatile int8_t x231 = INT8_MAX;
	int16_t x232 = INT16_MIN;
	static int32_t t53 = 1876;

	t53 = ((x229==(x230|x231))/x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x235 = -1LL;
	static int8_t x236 = 2;
	volatile int32_t t54 = -6838;

	t54 = ((x233==(x234|x235))/x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x238 = INT8_MIN;
	static int8_t x239 = INT8_MAX;
	volatile int32_t x240 = INT32_MIN;
	volatile int32_t t55 = 20852309;

	t55 = ((x237==(x238|x239))/x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 41U;
	static int32_t x242 = 25;
	uint32_t x243 = UINT32_MAX;
	int64_t x244 = INT64_MAX;
	static volatile int64_t t56 = 105483242676LL;

	t56 = ((x241==(x242|x243))/x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	volatile int32_t x246 = -1;
	uint64_t x247 = UINT64_MAX;
	uint64_t x248 = 2LLU;
	static uint64_t t57 = 272734462499988856LLU;

	t57 = ((x245==(x246|x247))/x248);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = 38;
	volatile int32_t x251 = -1;
	static int8_t x252 = INT8_MIN;

	t58 = ((x249==(x250|x251))/x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x254 = 7586U;
	int64_t x255 = 16236196398LL;
	volatile int16_t x256 = INT16_MIN;
	int32_t t59 = -45126;

	t59 = ((x253==(x254|x255))/x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MIN;
	static int16_t x258 = -1;
	int64_t x259 = INT64_MIN;
	uint16_t x260 = 961U;
	volatile int32_t t60 = 13213;

	t60 = ((x257==(x258|x259))/x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MIN;
	static uint32_t x263 = UINT32_MAX;
	volatile int32_t t61 = -4;

	t61 = ((x261==(x262|x263))/x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x267 = UINT32_MAX;
	uint32_t x268 = 3U;
	uint32_t t62 = 1U;

	t62 = ((x265==(x266|x267))/x268);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x270 = 1193357LL;
	uint8_t x272 = 1U;
	int32_t t63 = 722107247;

	t63 = ((x269==(x270|x271))/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x273 = INT64_MAX;
	int32_t x274 = -52;
	volatile uint64_t x275 = 1391994531388360731LLU;
	uint64_t x276 = 14533502987810253LLU;
	uint64_t t64 = 24LLU;

	t64 = ((x273==(x274|x275))/x276);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x277 = INT8_MAX;
	volatile int64_t x280 = 706058802859642LL;

	t65 = ((x277==(x278|x279))/x280);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	int64_t x283 = INT64_MIN;
	static int32_t t66 = -7795470;

	t66 = ((x281==(x282|x283))/x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MAX;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MAX;

	t67 = ((x285==(x286|x287))/x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x290 = -1;
	static volatile int32_t t68 = 14150614;

	t68 = ((x289==(x290|x291))/x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x293 = INT64_MIN;
	int32_t x294 = 300;
	uint64_t x296 = 10207911936556716LLU;

	t69 = ((x293==(x294|x295))/x296);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x297 = 0;
	int32_t x298 = 0;
	int16_t x299 = -88;
	volatile int32_t t70 = -60092;

	t70 = ((x297==(x298|x299))/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x301 = 5247184;
	int32_t x302 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t71 = 775;

	t71 = ((x301==(x302|x303))/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 856638LLU;

	t72 = ((x309==(x310|x311))/x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x313 = 11;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = 0;

	t73 = ((x313==(x314|x315))/x316);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MIN;
	static int16_t x319 = INT16_MIN;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t74 = 119;

	t74 = ((x317==(x318|x319))/x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x321 = INT16_MIN;
	int64_t x322 = -1LL;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = INT64_MIN;
	volatile int64_t t75 = 3978601292788LL;

	t75 = ((x321==(x322|x323))/x324);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x329 = 61U;
	int8_t x330 = INT8_MAX;
	int16_t x331 = 10;
	int64_t x332 = INT64_MAX;

	t76 = ((x329==(x330|x331))/x332);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x333 = 15672111LLU;
	int64_t x334 = INT64_MIN;
	int32_t x336 = 349758;
	int32_t t77 = 59;

	t77 = ((x333==(x334|x335))/x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x339 = 6211583436LL;
	int8_t x340 = INT8_MIN;

	t78 = ((x337==(x338|x339))/x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x343 = INT8_MIN;
	uint16_t x344 = UINT16_MAX;
	int32_t t79 = 0;

	t79 = ((x341==(x342|x343))/x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x345 = 9769065LLU;
	uint8_t x346 = 0U;
	int16_t x347 = INT16_MIN;
	uint8_t x348 = UINT8_MAX;
	static int32_t t80 = 184;

	t80 = ((x345==(x346|x347))/x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = 20;
	uint64_t x350 = 137728041256LLU;
	int32_t x351 = INT32_MAX;
	int64_t x352 = 4406074LL;
	volatile int64_t t81 = -386058001942439LL;

	t81 = ((x349==(x350|x351))/x352);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x353 = 112217406LLU;
	uint64_t x356 = 117748847103469476LLU;
	volatile uint64_t t82 = 52LLU;

	t82 = ((x353==(x354|x355))/x356);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = 605381012;
	static int64_t x358 = -1LL;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	volatile int64_t t83 = 46397436LL;

	t83 = ((x357==(x358|x359))/x360);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x361 = 168559865837LLU;
	uint8_t x363 = 3U;
	int8_t x364 = INT8_MIN;

	t84 = ((x361==(x362|x363))/x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x365 = INT64_MAX;
	volatile int64_t x366 = 430278LL;
	int8_t x367 = -1;
	int32_t t85 = 236;

	t85 = ((x365==(x366|x367))/x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x369 = UINT16_MAX;
	static int64_t x371 = INT64_MAX;
	uint16_t x372 = 10024U;
	volatile int32_t t86 = 26314;

	t86 = ((x369==(x370|x371))/x372);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x375 = INT8_MAX;
	static int32_t t87 = 2024453;

	t87 = ((x373==(x374|x375))/x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x377 = 7658055533063631569LLU;
	volatile int8_t x379 = INT8_MAX;
	volatile uint32_t t88 = 3396790U;

	t88 = ((x377==(x378|x379))/x380);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x381 = 103U;
	static uint8_t x382 = UINT8_MAX;
	uint16_t x383 = UINT16_MAX;
	static int32_t x384 = -1;
	int32_t t89 = 8602;

	t89 = ((x381==(x382|x383))/x384);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = 2769388721322LLU;
	static int16_t x386 = INT16_MIN;
	uint16_t x387 = 275U;

	t90 = ((x385==(x386|x387))/x388);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x389 = 614214U;
	int16_t x390 = INT16_MIN;
	int8_t x391 = 1;
	int16_t x392 = INT16_MAX;
	int32_t t91 = 13;

	t91 = ((x389==(x390|x391))/x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x393 = UINT16_MAX;
	uint8_t x395 = UINT8_MAX;
	uint64_t x396 = 3517793773876LLU;
	static volatile uint64_t t92 = 269539888265LLU;

	t92 = ((x393==(x394|x395))/x396);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x397 = 36987148;
	int8_t x398 = -4;
	int32_t t93 = 26;

	t93 = ((x397==(x398|x399))/x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x402 = 122273LLU;
	uint32_t x403 = UINT32_MAX;
	uint64_t t94 = 586LLU;

	t94 = ((x401==(x402|x403))/x404);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x406 = -3538;
	volatile int8_t x407 = 56;
	int64_t x408 = INT64_MIN;
	volatile int64_t t95 = 2902242LL;

	t95 = ((x405==(x406|x407))/x408);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MAX;
	int16_t x410 = -1;
	volatile int32_t t96 = 894832;

	t96 = ((x409==(x410|x411))/x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = INT16_MAX;
	int16_t x418 = 6;
	int32_t x419 = INT32_MIN;
	int8_t x420 = INT8_MIN;
	int32_t t97 = 51864;

	t97 = ((x417==(x418|x419))/x420);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x421 = UINT32_MAX;
	int16_t x423 = INT16_MIN;
	static uint8_t x424 = UINT8_MAX;
	volatile int32_t t98 = 225249298;

	t98 = ((x421==(x422|x423))/x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x425 = 2575470U;
	static volatile int32_t x426 = -1;
	int8_t x427 = INT8_MAX;
	volatile int32_t t99 = 92;

	t99 = ((x425==(x426|x427))/x428);

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

