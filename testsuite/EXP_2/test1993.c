#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 16LLU;
volatile int16_t x5 = -1;
uint16_t x7 = 11U;
int32_t t1 = -17;
uint64_t x9 = 2090LLU;
volatile uint64_t x11 = UINT64_MAX;
uint64_t t2 = 64263721LLU;
int16_t x15 = -1;
int64_t x17 = INT64_MIN;
static int64_t x21 = 15576506148513903LL;
uint32_t x22 = 1412U;
static volatile uint64_t t6 = 7091231479074878LLU;
static volatile int64_t x35 = INT64_MIN;
int64_t t8 = 4270969LL;
uint64_t x38 = 10314035480337951LLU;
static volatile int16_t x39 = 21;
uint64_t t9 = 43LLU;
uint32_t x43 = UINT32_MAX;
uint16_t x44 = 23614U;
int32_t x46 = 58251156;
volatile uint64_t t11 = 1394475706476LLU;
static int16_t x50 = -1;
int8_t x57 = INT8_MIN;
int8_t x59 = 12;
int16_t x69 = INT16_MIN;
int16_t x71 = -1;
int16_t x74 = 1;
uint32_t x79 = 112169U;
uint16_t x80 = UINT16_MAX;
uint32_t t18 = 1122U;
volatile uint64_t t19 = 1240719751017345077LLU;
static int32_t t20 = 1281;
int64_t x96 = 361666803534LL;
volatile uint64_t t23 = 22724625173LLU;
static volatile uint8_t x105 = UINT8_MAX;
uint32_t x109 = 80U;
static int16_t x111 = -1;
uint64_t t27 = 3813828041982651410LLU;
volatile int64_t t28 = -10878687654477587LL;
int32_t x125 = INT32_MIN;
volatile int32_t x144 = -20149;
int64_t x146 = INT64_MIN;
int64_t t34 = -213474914LL;
int64_t x155 = INT64_MAX;
static int8_t x158 = 0;
int32_t x161 = INT32_MIN;
int8_t x162 = INT8_MIN;
volatile uint64_t x165 = UINT64_MAX;
volatile uint8_t x167 = 15U;
volatile int64_t t40 = 18LL;
int16_t x184 = -1;
uint32_t x185 = UINT32_MAX;
uint16_t x186 = UINT16_MAX;
static uint64_t x195 = UINT64_MAX;
int64_t x213 = -193609559LL;
int64_t t49 = -256657918097LL;
int8_t x218 = -1;
int8_t x221 = -1;
int8_t x223 = 17;
static volatile uint64_t x224 = 42924464221LLU;
uint8_t x225 = UINT8_MAX;
uint16_t x227 = 11U;
uint64_t x241 = 143323152158LLU;
volatile uint64_t t56 = 20LLU;
int64_t x250 = INT64_MIN;
uint8_t x252 = 38U;
int64_t x261 = -1LL;
uint8_t x266 = 29U;
volatile uint32_t t64 = 45U;
volatile int16_t x285 = -1;
static int32_t x286 = INT32_MIN;
int64_t t67 = -389983LL;
int8_t x292 = INT8_MIN;
int16_t x293 = INT16_MIN;
int32_t x294 = INT32_MAX;
volatile int8_t x316 = INT8_MIN;
int32_t x318 = INT32_MIN;
int64_t t75 = -10633397595942LL;
int32_t x321 = -195910548;
int16_t x330 = -29;
uint32_t x332 = 176944U;
int8_t x334 = -1;
int64_t x337 = 245585169941548LL;
volatile int64_t x343 = INT64_MIN;
uint8_t x352 = 63U;
uint64_t x358 = UINT64_MAX;
volatile int64_t t86 = -3LL;
int16_t x369 = 1;
volatile uint32_t x373 = UINT32_MAX;
volatile uint64_t t89 = 13583973LLU;
uint64_t x385 = 4945079998286605LLU;
int8_t x386 = -1;
int32_t x389 = INT32_MAX;
static int8_t x406 = INT8_MAX;
static uint16_t x408 = 52U;
int32_t t96 = -34463848;
uint64_t x416 = 1037259115682LLU;
uint16_t x424 = 131U;
int64_t t99 = -370243LL;


void f0(void) {
	static volatile int32_t x1 = -1;
	uint64_t x2 = 51748728855147504LLU;
	volatile int8_t x3 = INT8_MIN;
	int64_t x4 = -2204690332352731LL;

	t0 = ((x1&(x2|x3))/x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 44U;
	int8_t x8 = INT8_MAX;

	t1 = ((x5&(x6|x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = UINT64_MAX;
	volatile int32_t x12 = -1;

	t2 = ((x9&(x10|x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 12;
	int8_t x14 = -1;
	uint32_t x16 = 22720900U;
	uint32_t t3 = 1035210313U;

	t3 = ((x13&(x14|x15))/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 13271929LLU;
	int64_t x19 = INT64_MAX;
	int64_t x20 = -1LL;
	uint64_t t4 = 2839925LLU;

	t4 = ((x17&(x18|x19))/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x23 = -29526311;
	uint64_t x24 = 188489574338279494LLU;
	uint64_t t5 = 1622LLU;

	t5 = ((x21&(x22|x23))/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint64_t x26 = 613579960LLU;
	volatile int8_t x27 = INT8_MIN;
	uint32_t x28 = 118U;

	t6 = ((x25&(x26|x27))/x28);

	if (t6 != 554LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 0;
	static int16_t x30 = 0;
	uint16_t x31 = 1681U;
	int32_t x32 = INT32_MAX;
	int32_t t7 = -5101757;

	t7 = ((x29&(x30|x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int32_t x34 = INT32_MAX;
	int64_t x36 = INT64_MAX;

	t8 = ((x33&(x34|x35))/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -1;
	uint64_t x40 = 2429588331LLU;

	t9 = ((x37&(x38|x39))/x40);

	if (t9 != 4245178LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 3;
	int8_t x42 = INT8_MAX;
	volatile uint32_t t10 = 81651741U;

	t10 = ((x41&(x42|x43))/x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 30596731352794096LLU;
	int16_t x47 = -1;
	static int16_t x48 = -1;

	t11 = ((x45&(x46|x47))/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static int64_t x51 = -1LL;
	int8_t x52 = INT8_MIN;
	int64_t t12 = 130068036LL;

	t12 = ((x49&(x50|x51))/x52);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x58 = INT64_MIN;
	static uint32_t x60 = 36U;
	int64_t t13 = 1586410730436675854LL;

	t13 = ((x57&(x58|x59))/x60);

	if (t13 != -256204778801521550LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 3584153LLU;
	uint8_t x62 = 2U;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = 482101U;
	uint64_t t14 = 15547516992860069LLU;

	t14 = ((x61&(x62|x63))/x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = 7634042LLU;
	int64_t x66 = INT64_MAX;
	int32_t x67 = -82612332;
	int64_t x68 = -1LL;
	volatile uint64_t t15 = 2978777465LLU;

	t15 = ((x65&(x66|x67))/x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x70 = 75U;
	int32_t x72 = INT32_MIN;
	int32_t t16 = -3;

	t16 = ((x69&(x70|x71))/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	uint16_t x75 = 18U;
	static int16_t x76 = -4865;
	int32_t t17 = 1685978;

	t17 = ((x73&(x74|x75))/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = -1;
	static int8_t x78 = INT8_MIN;

	t18 = ((x77&(x78|x79))/x80);

	if (t18 != 65536U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	int8_t x82 = 1;
	uint64_t x83 = UINT64_MAX;
	int16_t x84 = -1;

	t19 = ((x81&(x82|x83))/x84);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MIN;
	volatile int8_t x87 = INT8_MIN;
	int8_t x88 = -53;

	t20 = ((x85&(x86|x87))/x88);

	if (t20 != -615) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MIN;
	volatile int32_t x91 = 85;
	uint16_t x92 = 4U;
	volatile int64_t t21 = 30401467LL;

	t21 = ((x89&(x90|x91))/x92);

	if (t21 != 21LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	static uint64_t x94 = 603LLU;
	int8_t x95 = INT8_MIN;
	uint64_t t22 = 3722906415LLU;

	t22 = ((x93&(x94|x95))/x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 1719620U;
	static uint64_t x98 = 2656412243976383LLU;
	uint32_t x99 = 1U;
	static int64_t x100 = -102825103691009735LL;

	t23 = ((x97&(x98|x99))/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = -311;
	int64_t x103 = -43153LL;
	static int16_t x104 = INT16_MIN;
	volatile int64_t t24 = 80283LL;

	t24 = ((x101&(x102|x103))/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = 8878077;
	int32_t x107 = INT32_MAX;
	int64_t x108 = 469359881LL;
	volatile int64_t t25 = 430024503LL;

	t25 = ((x105&(x106|x107))/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = 0U;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t26 = 228129707314549616LLU;

	t26 = ((x109&(x110|x111))/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int16_t x118 = INT16_MIN;
	uint16_t x119 = 1136U;
	uint64_t x120 = 3120471228722330LLU;

	t27 = ((x117&(x118|x119))/x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x121 = 14990455LL;
	uint8_t x122 = 3U;
	static int16_t x123 = -1;
	int16_t x124 = INT16_MIN;

	t28 = ((x121&(x122|x123))/x124);

	if (t28 != -457LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = 32182U;
	volatile uint32_t x127 = 40671702U;
	static int32_t x128 = INT32_MIN;
	uint32_t t29 = 33247U;

	t29 = ((x125&(x126|x127))/x128);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x129 = 13454;
	uint8_t x130 = 25U;
	uint8_t x131 = 2U;
	int8_t x132 = -31;
	volatile int32_t t30 = 1880764;

	t30 = ((x129&(x130|x131))/x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x133 = 1;
	int32_t x134 = INT32_MIN;
	uint64_t x135 = 54LLU;
	int32_t x136 = INT32_MIN;
	volatile uint64_t t31 = 2111767856111LLU;

	t31 = ((x133&(x134|x135))/x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 67LLU;
	uint32_t x138 = 32155U;
	int16_t x139 = INT16_MAX;
	uint16_t x140 = 1911U;
	volatile uint64_t t32 = 11731485223283757LLU;

	t32 = ((x137&(x138|x139))/x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 407506272512159884LLU;
	volatile int32_t x142 = INT32_MAX;
	uint32_t x143 = 9956U;
	uint64_t t33 = 25338240334857LLU;

	t33 = ((x141&(x142|x143))/x144);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 19U;
	uint16_t x147 = 5U;
	int64_t x148 = INT64_MIN;

	t34 = ((x145&(x146|x147))/x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	uint32_t x154 = 522526U;
	uint16_t x156 = 3U;
	volatile int64_t t35 = -862LL;

	t35 = ((x153&(x154|x155))/x156);

	if (t35 != 3074457345618258560LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x157 = 31U;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t36 = 24744;

	t36 = ((x157&(x158|x159))/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x163 = INT8_MAX;
	uint16_t x164 = 9943U;
	volatile int32_t t37 = 2771526;

	t37 = ((x161&(x162|x163))/x164);

	if (t37 != -215979) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x166 = INT8_MAX;
	static int16_t x168 = INT16_MIN;
	uint64_t t38 = 186878206887739LLU;

	t38 = ((x165&(x166|x167))/x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = 52U;
	volatile uint8_t x170 = UINT8_MAX;
	uint64_t x171 = 1866LLU;
	int64_t x172 = INT64_MAX;
	uint64_t t39 = 85455211766973LLU;

	t39 = ((x169&(x170|x171))/x172);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x173 = -1;
	int32_t x174 = INT32_MIN;
	static int64_t x175 = INT64_MAX;
	volatile uint16_t x176 = UINT16_MAX;

	t40 = ((x173&(x174|x175))/x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = -239518;
	volatile int8_t x178 = INT8_MAX;
	volatile int16_t x179 = -1;
	static int16_t x180 = -19;
	int32_t t41 = 494990;

	t41 = ((x177&(x178|x179))/x180);

	if (t41 != 12606) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = INT64_MIN;
	static volatile uint8_t x182 = UINT8_MAX;
	uint16_t x183 = 8002U;
	volatile int64_t t42 = -119453721369LL;

	t42 = ((x181&(x182|x183))/x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x187 = INT32_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t43 = 437502685LLU;

	t43 = ((x185&(x186|x187))/x188);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int16_t x190 = INT16_MIN;
	int16_t x191 = -1;
	volatile int8_t x192 = -1;
	static volatile int32_t t44 = -721;

	t44 = ((x189&(x190|x191))/x192);

	if (t44 != -65535) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MAX;
	volatile uint8_t x194 = 3U;
	static int8_t x196 = -1;
	static volatile uint64_t t45 = 29354615876945LLU;

	t45 = ((x193&(x194|x195))/x196);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = 42123U;
	static int8_t x198 = INT8_MIN;
	uint16_t x199 = UINT16_MAX;
	volatile int64_t x200 = 223029017LL;
	volatile int64_t t46 = -8103262191LL;

	t46 = ((x197&(x198|x199))/x200);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 244452074LLU;
	int16_t x202 = INT16_MAX;
	volatile uint32_t x203 = 7805545U;
	static volatile int64_t x204 = -1LL;
	volatile uint64_t t47 = 91LLU;

	t47 = ((x201&(x202|x203))/x204);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = 461U;
	static int16_t x206 = -1;
	int32_t x207 = 4;
	static int16_t x208 = -740;
	volatile int32_t t48 = 888544595;

	t48 = ((x205&(x206|x207))/x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = INT8_MAX;
	volatile int8_t x215 = 3;
	int32_t x216 = -19;

	t49 = ((x213&(x214|x215))/x216);

	if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	static int64_t x220 = INT64_MAX;
	int64_t t50 = 226071092133009LL;

	t50 = ((x217&(x218|x219))/x220);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x222 = UINT16_MAX;
	uint64_t t51 = 43655311LLU;

	t51 = ((x221&(x222|x223))/x224);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x226 = UINT16_MAX;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t52 = -1;

	t52 = ((x225&(x226|x227))/x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MAX;
	volatile int64_t x231 = -1LL;
	volatile int32_t x232 = INT32_MAX;
	volatile int64_t t53 = -2032LL;

	t53 = ((x229&(x230|x231))/x232);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x233 = UINT32_MAX;
	int64_t x234 = INT64_MIN;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile uint64_t t54 = 1025352268949112458LLU;

	t54 = ((x233&(x234|x235))/x236);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x237 = 786566242;
	uint64_t x238 = 35072444112985LLU;
	volatile uint32_t x239 = UINT32_MAX;
	int64_t x240 = -1LL;
	static volatile uint64_t t55 = 0LLU;

	t55 = ((x237&(x238|x239))/x240);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x242 = -2;
	uint64_t x243 = 281273LLU;
	uint8_t x244 = 85U;

	t56 = ((x241&(x242|x243))/x244);

	if (t56 != 1686154731LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -4;
	static int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MAX;
	static uint8_t x248 = 2U;
	volatile int32_t t57 = -3444;

	t57 = ((x245&(x246|x247))/x248);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	static volatile int32_t x251 = -1;
	int64_t t58 = -39572383863LL;

	t58 = ((x249&(x250|x251))/x252);

	if (t58 != -3LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MIN;
	static uint16_t x254 = 202U;
	volatile int8_t x255 = -7;
	uint16_t x256 = 2U;
	volatile int32_t t59 = -172240573;

	t59 = ((x253&(x254|x255))/x256);

	if (t59 != -16384) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int16_t x258 = INT16_MAX;
	volatile int16_t x259 = -445;
	int64_t x260 = INT64_MIN;
	int64_t t60 = 1208LL;

	t60 = ((x257&(x258|x259))/x260);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x262 = INT32_MIN;
	volatile uint32_t x263 = 38905U;
	uint64_t x264 = 222309LLU;
	volatile uint64_t t61 = 676299692563LLU;

	t61 = ((x261&(x262|x263))/x264);

	if (t61 != 9660LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = 6U;
	static int16_t x267 = INT16_MIN;
	volatile int8_t x268 = -1;
	static volatile int32_t t62 = 6198537;

	t62 = ((x265&(x266|x267))/x268);

	if (t62 != -4) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = INT8_MAX;
	int8_t x270 = INT8_MAX;
	static int8_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	static int32_t t63 = 0;

	t63 = ((x269&(x270|x271))/x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x273 = INT8_MAX;
	volatile int32_t x274 = INT32_MAX;
	uint32_t x275 = 80184867U;
	int32_t x276 = 1128998;

	t64 = ((x273&(x274|x275))/x276);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MAX;
	static int64_t x278 = INT64_MIN;
	int16_t x279 = INT16_MAX;
	static int64_t x280 = INT64_MIN;
	volatile int64_t t65 = 477924758058484384LL;

	t65 = ((x277&(x278|x279))/x280);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x281 = UINT64_MAX;
	uint16_t x282 = UINT16_MAX;
	int32_t x283 = -254893166;
	uint8_t x284 = 1U;
	uint64_t t66 = 388968645917437LLU;

	t66 = ((x281&(x282|x283))/x284);

	if (t66 != 18446744073454682111LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x287 = UINT16_MAX;
	static int64_t x288 = INT64_MIN;

	t67 = ((x285&(x286|x287))/x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x289 = UINT8_MAX;
	uint32_t x290 = UINT32_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	uint32_t t68 = 1018634669U;

	t68 = ((x289&(x290|x291))/x292);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x295 = -4006739214LL;
	volatile int64_t x296 = -1LL;
	int64_t t69 = -1015687173474LL;

	t69 = ((x293&(x294|x295))/x296);

	if (t69 != 2147516416LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 26;
	int16_t x298 = -1;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MAX;
	volatile int32_t t70 = 4202142;

	t70 = ((x297&(x298|x299))/x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -1;
	volatile int64_t x302 = INT64_MIN;
	static int16_t x303 = INT16_MAX;
	static volatile int8_t x304 = 1;
	int64_t t71 = -275041284055626922LL;

	t71 = ((x301&(x302|x303))/x304);

	if (t71 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = UINT8_MAX;
	uint16_t x306 = 39U;
	static uint64_t x307 = 1961677664179311446LLU;
	static int64_t x308 = -659524739051013LL;
	uint64_t t72 = 3349517092227LLU;

	t72 = ((x305&(x306|x307))/x308);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MAX;
	volatile int8_t x311 = -1;
	int16_t x312 = -51;
	static int32_t t73 = -16964;

	t73 = ((x309&(x310|x311))/x312);

	if (t73 != 42107522) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -31;
	uint8_t x314 = UINT8_MAX;
	volatile int8_t x315 = INT8_MIN;
	volatile int32_t t74 = -1;

	t74 = ((x313&(x314|x315))/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = INT32_MIN;
	static uint16_t x319 = 9U;
	int64_t x320 = 3409679LL;

	t75 = ((x317&(x318|x319))/x320);

	if (t75 != -629LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x322 = INT16_MAX;
	int32_t x323 = -1;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t76 = 73179;

	t76 = ((x321&(x322|x323))/x324);

	if (t76 != -768276) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = -1;
	int32_t x326 = INT32_MIN;
	uint16_t x327 = 1561U;
	static volatile uint16_t x328 = UINT16_MAX;
	static volatile int32_t t77 = -321;

	t77 = ((x325&(x326|x327))/x328);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x329 = -1LL;
	volatile int64_t x331 = -242810LL;
	volatile int64_t t78 = -6117218640278LL;

	t78 = ((x329&(x330|x331))/x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MAX;
	static int32_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	uint64_t t79 = 117LLU;

	t79 = ((x333&(x334|x335))/x336);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x338 = INT8_MAX;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = -166;
	uint64_t t80 = 1LLU;

	t80 = ((x337&(x338|x339))/x340);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = -16;
	uint8_t x342 = UINT8_MAX;
	volatile int8_t x344 = INT8_MAX;
	volatile int64_t t81 = -3832167990LL;

	t81 = ((x341&(x342|x343))/x344);

	if (t81 != -72624976668147839LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 145565861U;
	int8_t x350 = -1;
	uint32_t x351 = 75U;
	volatile uint32_t t82 = 62794U;

	t82 = ((x349&(x350|x351))/x352);

	if (t82 != 2310569U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x353 = -1;
	static int32_t x354 = 438312;
	int16_t x355 = INT16_MIN;
	int64_t x356 = -1LL;
	volatile int64_t t83 = 63304765525173LL;

	t83 = ((x353&(x354|x355))/x356);

	if (t83 != 20440LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x357 = INT8_MAX;
	int8_t x359 = INT8_MAX;
	uint16_t x360 = UINT16_MAX;
	volatile uint64_t t84 = 1743343LLU;

	t84 = ((x357&(x358|x359))/x360);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = 21;
	int64_t x363 = -1LL;
	static uint64_t x364 = 953912LLU;
	volatile uint64_t t85 = 8597224764LLU;

	t85 = ((x361&(x362|x363))/x364);

	if (t85 != 19337993519013LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MAX;
	uint8_t x367 = UINT8_MAX;
	uint16_t x368 = 1U;

	t86 = ((x365&(x366|x367))/x368);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x370 = INT64_MAX;
	uint8_t x371 = 5U;
	volatile uint32_t x372 = UINT32_MAX;
	static int64_t t87 = 4LL;

	t87 = ((x369&(x370|x371))/x372);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x374 = INT8_MIN;
	static uint64_t x375 = UINT64_MAX;
	volatile uint8_t x376 = 1U;
	volatile uint64_t t88 = 3711786876LLU;

	t88 = ((x373&(x374|x375))/x376);

	if (t88 != 4294967295LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x377 = 5169427LLU;
	uint32_t x378 = 203U;
	volatile uint8_t x379 = UINT8_MAX;
	uint8_t x380 = UINT8_MAX;

	t89 = ((x377&(x378|x379))/x380);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = INT32_MAX;
	static int64_t x382 = -1LL;
	static volatile int64_t x383 = -1LL;
	volatile uint32_t x384 = UINT32_MAX;
	volatile int64_t t90 = 2305676LL;

	t90 = ((x381&(x382|x383))/x384);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x387 = INT16_MAX;
	static int16_t x388 = -1;
	uint64_t t91 = 20025952867496LLU;

	t91 = ((x385&(x386|x387))/x388);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x390 = UINT32_MAX;
	int16_t x391 = -46;
	uint8_t x392 = UINT8_MAX;
	static uint32_t t92 = 31154U;

	t92 = ((x389&(x390|x391))/x392);

	if (t92 != 8421504U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x393 = 10295U;
	static int32_t x394 = -535630315;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t93 = 16522898117LLU;

	t93 = ((x393&(x394|x395))/x396);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t94 = -755;

	t94 = ((x397&(x398|x399))/x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x401 = -1;
	static volatile int32_t x402 = -1;
	static int16_t x403 = INT16_MAX;
	static int64_t x404 = INT64_MAX;
	volatile int64_t t95 = 11LL;

	t95 = ((x401&(x402|x403))/x404);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x405 = INT32_MAX;
	volatile int16_t x407 = -20;

	t96 = ((x405&(x406|x407))/x408);

	if (t96 != 41297762) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = 421;
	int16_t x415 = INT16_MIN;
	volatile uint64_t t97 = 2182421446374482LLU;

	t97 = ((x413&(x414|x415))/x416);

	if (t97 != 17784123LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x417 = 7U;
	volatile uint8_t x418 = 10U;
	int8_t x419 = INT8_MIN;
	int32_t x420 = INT32_MAX;
	volatile int32_t t98 = -399101454;

	t98 = ((x417&(x418|x419))/x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x421 = INT64_MAX;
	static int8_t x422 = -1;
	volatile uint16_t x423 = 14U;

	t99 = ((x421&(x422|x423))/x424);

	if (t99 != 70407420128662410LL) { NG(); } else { ; }
	
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

