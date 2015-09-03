#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
uint16_t x5 = UINT16_MAX;
static volatile int32_t t3 = -261;
volatile int8_t x23 = INT8_MAX;
int32_t t5 = 17;
volatile int16_t x39 = -1;
int32_t x41 = INT32_MIN;
volatile uint8_t x47 = UINT8_MAX;
int64_t x48 = INT64_MIN;
int8_t x53 = INT8_MAX;
uint8_t x55 = 5U;
int32_t t12 = 46089488;
int32_t x67 = 1;
int32_t x68 = INT32_MAX;
int64_t x73 = INT64_MIN;
volatile int8_t x84 = 3;
int8_t x87 = -1;
uint32_t x92 = UINT32_MAX;
int64_t x106 = INT64_MIN;
static int8_t x108 = INT8_MAX;
volatile int32_t t25 = -13011;
uint32_t x109 = UINT32_MAX;
uint8_t x122 = 3U;
uint64_t x126 = 8043747534850LLU;
static int32_t x127 = 1448726;
int64_t x128 = -1LL;
uint8_t x131 = 5U;
volatile int32_t x135 = INT32_MIN;
uint8_t x137 = UINT8_MAX;
int8_t x139 = -1;
uint8_t x143 = 82U;
volatile int64_t x145 = 5717504366549LL;
uint32_t x146 = 22619101U;
volatile int32_t t35 = 654133920;
volatile uint32_t x149 = 127552676U;
int16_t x156 = INT16_MAX;
volatile int32_t t37 = -12;
int8_t x164 = 58;
static int32_t t38 = 930643328;
int16_t x167 = INT16_MAX;
int8_t x169 = INT8_MIN;
static volatile int32_t x171 = INT32_MIN;
static int64_t x173 = -4640110LL;
volatile int32_t t41 = 97015178;
volatile int8_t x177 = -1;
int16_t x179 = INT16_MIN;
uint8_t x180 = 8U;
int32_t t47 = -626820072;
int32_t x204 = INT32_MIN;
int16_t x208 = 221;
uint64_t x217 = 1626824973073LLU;
int64_t x218 = INT64_MIN;
static int64_t x219 = 262695LL;
uint16_t x221 = 30U;
int64_t x222 = INT64_MIN;
uint8_t x224 = 59U;
static int32_t x226 = INT32_MAX;
int8_t x227 = INT8_MIN;
uint32_t t54 = 9769U;
int16_t x229 = -1;
int16_t x233 = INT16_MIN;
int8_t x234 = INT8_MAX;
int32_t x239 = INT32_MIN;
int16_t x246 = INT16_MAX;
int32_t t59 = 36631;
volatile int64_t t61 = 90448LL;
static volatile int8_t x257 = -1;
int32_t t62 = 0;
static int32_t x265 = -1;
int64_t x266 = INT64_MIN;
uint16_t x277 = UINT16_MAX;
int16_t x278 = 11204;
volatile int8_t x284 = INT8_MIN;
int8_t x298 = -1;
int8_t x302 = INT8_MAX;
static uint16_t x304 = 13779U;
int32_t t72 = 14898279;
static volatile int64_t x306 = INT64_MIN;
static volatile uint32_t t77 = 37U;
static int16_t x325 = 13820;
uint8_t x328 = 71U;
int32_t t78 = 10080351;
int8_t x349 = -1;
static volatile int32_t x352 = -1;
uint32_t x353 = 31639411U;
volatile uint32_t x362 = 22796U;
int64_t x364 = -1LL;
uint8_t x368 = 2U;
int32_t t87 = -403;
uint8_t x374 = 9U;
int64_t x383 = INT64_MIN;
volatile int64_t t91 = 394278457258753LL;
int16_t x398 = 50;
volatile uint64_t t94 = 3LLU;
static int64_t x405 = 1LL;
static int8_t x417 = INT8_MIN;
int64_t x418 = -1LL;
volatile uint32_t t99 = 1197U;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	static int32_t x3 = INT32_MIN;
	int16_t x4 = -14;
	volatile int32_t t0 = -667456;

	t0 = ((x1==(x2<x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -11145138428076LL;
	volatile int32_t x7 = -396;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -3360837;

	t1 = ((x5==(x6<x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MAX;
	int32_t x14 = -1;
	volatile int32_t x15 = INT32_MIN;
	static uint32_t x16 = 230653871U;
	volatile uint32_t t2 = 1687U;

	t2 = ((x13==(x14<x15))/x16);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = -1;
	static int8_t x18 = INT8_MAX;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;

	t3 = ((x17==(x18<x19))/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 5341301LL;
	volatile uint16_t x22 = UINT16_MAX;
	static uint64_t x24 = 9082539483929LLU;
	volatile uint64_t t4 = 2954032725251523LLU;

	t4 = ((x21==(x22<x23))/x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MIN;
	volatile int16_t x27 = 16120;
	int16_t x28 = INT16_MIN;

	t5 = ((x25==(x26<x27))/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 7863538563347729LLU;
	static uint8_t x30 = UINT8_MAX;
	volatile uint64_t x31 = 53685LLU;
	int8_t x32 = -1;
	volatile int32_t t6 = -172;

	t6 = ((x29==(x30<x31))/x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	static int8_t x36 = INT8_MAX;
	int32_t t7 = 2;

	t7 = ((x33==(x34<x35))/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x37 = 3933U;
	int16_t x38 = INT16_MAX;
	uint16_t x40 = 4314U;
	volatile int32_t t8 = -104144;

	t8 = ((x37==(x38<x39))/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x42 = 1U;
	int64_t x43 = -1LL;
	uint64_t x44 = 3568086LLU;
	uint64_t t9 = 40204672125913LLU;

	t9 = ((x41==(x42<x43))/x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = -1;
	static uint8_t x46 = UINT8_MAX;
	int64_t t10 = 6335426975LL;

	t10 = ((x45==(x46<x47))/x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	int64_t x50 = INT64_MIN;
	int16_t x51 = 9005;
	int64_t x52 = INT64_MIN;
	volatile int64_t t11 = 40074LL;

	t11 = ((x49==(x50<x51))/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = 1LL;
	static int16_t x56 = INT16_MIN;

	t12 = ((x53==(x54<x55))/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = 12U;
	volatile int8_t x58 = INT8_MIN;
	uint8_t x59 = 2U;
	volatile uint32_t x60 = 106590230U;
	static uint32_t t13 = 2U;

	t13 = ((x57==(x58<x59))/x60);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -19969;
	static volatile uint64_t x62 = 3LLU;
	int8_t x63 = -1;
	static uint64_t x64 = 1213110528547179LLU;
	static uint64_t t14 = 166893640988373LLU;

	t14 = ((x61==(x62<x63))/x64);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 10927591LLU;
	volatile int32_t x66 = -1;
	volatile int32_t t15 = -607;

	t15 = ((x65==(x66<x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = 1188119949381LLU;
	static uint8_t x70 = 6U;
	static uint16_t x71 = 915U;
	volatile uint64_t x72 = UINT64_MAX;
	volatile uint64_t t16 = 173468646319LLU;

	t16 = ((x69==(x70<x71))/x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = -1;
	static uint16_t x75 = 300U;
	int64_t x76 = INT64_MIN;
	static int64_t t17 = -260984083353217110LL;

	t17 = ((x73==(x74<x75))/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MAX;
	int16_t x78 = -1;
	int8_t x79 = -7;
	uint32_t x80 = 46593U;
	uint32_t t18 = 46U;

	t18 = ((x77==(x78<x79))/x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -249697LL;
	uint32_t x82 = 293553U;
	int32_t x83 = INT32_MAX;
	static volatile int32_t t19 = -56226635;

	t19 = ((x81==(x82<x83))/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x85 = UINT32_MAX;
	int64_t x86 = INT64_MIN;
	static uint32_t x88 = 309141U;
	volatile uint32_t t20 = 17U;

	t20 = ((x85==(x86<x87))/x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 97U;
	uint16_t x90 = 3874U;
	uint8_t x91 = 29U;
	uint32_t t21 = 227U;

	t21 = ((x89==(x90<x91))/x92);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	static uint32_t x94 = 10936710U;
	volatile int8_t x95 = 5;
	volatile uint8_t x96 = 21U;
	int32_t t22 = -3000550;

	t22 = ((x93==(x94<x95))/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 304;
	uint32_t x98 = 9626U;
	int8_t x99 = 1;
	int32_t x100 = INT32_MIN;
	int32_t t23 = -1;

	t23 = ((x97==(x98<x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	volatile uint64_t x102 = 115330764LLU;
	volatile int16_t x103 = INT16_MAX;
	int8_t x104 = -1;
	volatile int32_t t24 = 209613;

	t24 = ((x101==(x102<x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 144;
	uint16_t x107 = 481U;

	t25 = ((x105==(x106<x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = -1LL;
	volatile int32_t x111 = -3965;
	uint64_t x112 = 16572922204358LLU;
	static volatile uint64_t t26 = 2605106190694LLU;

	t26 = ((x109==(x110<x111))/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 0U;
	uint16_t x114 = 12731U;
	uint32_t x115 = 13U;
	volatile uint32_t x116 = UINT32_MAX;
	volatile uint32_t t27 = 65863040U;

	t27 = ((x113==(x114<x115))/x116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 5704040422LLU;
	uint8_t x118 = UINT8_MAX;
	volatile int8_t x119 = INT8_MIN;
	uint8_t x120 = 14U;
	int32_t t28 = -14141786;

	t28 = ((x117==(x118<x119))/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	int64_t x123 = 15379059243LL;
	int32_t x124 = 1204;
	int32_t t29 = -336;

	t29 = ((x121==(x122<x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	int64_t t30 = 9716582189664LL;

	t30 = ((x125==(x126<x127))/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = -28422LL;
	int8_t x130 = -4;
	volatile int16_t x132 = INT16_MIN;
	int32_t t31 = -179;

	t31 = ((x129==(x130<x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -1;
	int64_t x134 = 3LL;
	int64_t x136 = INT64_MIN;
	static int64_t t32 = -241282434001251337LL;

	t32 = ((x133==(x134<x135))/x136);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x138 = INT16_MAX;
	static volatile uint16_t x140 = UINT16_MAX;
	volatile int32_t t33 = -26610;

	t33 = ((x137==(x138<x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = INT32_MIN;
	uint16_t x144 = 14U;
	volatile int32_t t34 = 53206660;

	t34 = ((x141==(x142<x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x147 = -10;
	int32_t x148 = -1;

	t35 = ((x145==(x146<x147))/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x150 = INT32_MIN;
	uint32_t x151 = UINT32_MAX;
	static int32_t x152 = -750004810;
	volatile int32_t t36 = 488906679;

	t36 = ((x149==(x150<x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x153 = -53148073478470LL;
	int16_t x154 = 1951;
	int8_t x155 = -1;

	t37 = ((x153==(x154<x155))/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	volatile uint64_t x162 = UINT64_MAX;
	int8_t x163 = -1;

	t38 = ((x161==(x162<x163))/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 5U;
	static int8_t x166 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t39 = -502931;

	t39 = ((x165==(x166<x167))/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = -1;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t40 = 1889LLU;

	t40 = ((x169==(x170<x171))/x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MAX;
	uint16_t x176 = UINT16_MAX;

	t41 = ((x173==(x174<x175))/x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = INT16_MIN;
	int32_t t42 = -76;

	t42 = ((x177==(x178<x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 3U;
	uint16_t x182 = UINT16_MAX;
	static int32_t x183 = INT32_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t43 = -55489;

	t43 = ((x181==(x182<x183))/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MAX;
	static int32_t x186 = INT32_MIN;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;
	int32_t t44 = -441604454;

	t44 = ((x185==(x186<x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x189 = -1;
	uint64_t x190 = 193201151285812786LLU;
	int16_t x191 = -1;
	volatile int64_t x192 = -103085450048539893LL;
	int64_t t45 = -2122473277974323935LL;

	t45 = ((x189==(x190<x191))/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -1;
	int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = 18232LLU;
	static uint64_t t46 = 2276427671099448LLU;

	t46 = ((x193==(x194<x195))/x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MIN;
	volatile int16_t x200 = 1;

	t47 = ((x197==(x198<x199))/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x201 = -1;
	static volatile uint64_t x202 = 101235095813459083LLU;
	int8_t x203 = INT8_MAX;
	volatile int32_t t48 = 7;

	t48 = ((x201==(x202<x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MAX;
	volatile int32_t x206 = -2;
	int8_t x207 = 20;
	volatile int32_t t49 = 3;

	t49 = ((x205==(x206<x207))/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MIN;
	uint32_t x210 = 655684U;
	int64_t x211 = -1LL;
	static int64_t x212 = INT64_MAX;
	int64_t t50 = 36274230955908LL;

	t50 = ((x209==(x210<x211))/x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -11;
	int32_t x214 = 117715;
	uint16_t x215 = UINT16_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t51 = -272381975094249LL;

	t51 = ((x213==(x214<x215))/x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x220 = -117499816;
	volatile int32_t t52 = -28231885;

	t52 = ((x217==(x218<x219))/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x223 = -1LL;
	int32_t t53 = 459285974;

	t53 = ((x221==(x222<x223))/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x225 = 28649180;
	uint32_t x228 = 845321655U;

	t54 = ((x225==(x226<x227))/x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x230 = 57041885U;
	uint64_t x231 = 8351370940525LLU;
	volatile int8_t x232 = -1;
	int32_t t55 = 666958;

	t55 = ((x229==(x230<x231))/x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x235 = INT16_MAX;
	uint32_t x236 = UINT32_MAX;
	static volatile uint32_t t56 = 1382U;

	t56 = ((x233==(x234<x235))/x236);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x237 = 1647;
	uint32_t x238 = UINT32_MAX;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t57 = -110871;

	t57 = ((x237==(x238<x239))/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MAX;
	static int8_t x242 = -1;
	int64_t x243 = INT64_MIN;
	volatile uint8_t x244 = 4U;
	volatile int32_t t58 = -99;

	t58 = ((x241==(x242<x243))/x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 366;
	static int32_t x247 = INT32_MIN;
	volatile int16_t x248 = -1;

	t59 = ((x245==(x246<x247))/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 86U;
	volatile int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	int16_t x252 = 3141;
	int32_t t60 = 1050888;

	t60 = ((x249==(x250<x251))/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = 3;
	int8_t x254 = INT8_MIN;
	int32_t x255 = 1;
	static int64_t x256 = INT64_MIN;

	t61 = ((x253==(x254<x255))/x256);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x258 = 539LLU;
	static volatile int16_t x259 = -1;
	uint8_t x260 = UINT8_MAX;

	t62 = ((x257==(x258<x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x261 = 7U;
	uint64_t x262 = 57989LLU;
	static uint64_t x263 = UINT64_MAX;
	uint64_t x264 = 1631657340LLU;
	uint64_t t63 = 7010729677879LLU;

	t63 = ((x261==(x262<x263))/x264);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x267 = INT8_MAX;
	uint8_t x268 = 3U;
	static int32_t t64 = 7310;

	t64 = ((x265==(x266<x267))/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = -1;
	int8_t x270 = 22;
	volatile int16_t x271 = INT16_MAX;
	uint16_t x272 = 3U;
	volatile int32_t t65 = 73;

	t65 = ((x269==(x270<x271))/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 171411890907LL;
	static int16_t x274 = -1;
	volatile int16_t x275 = -98;
	int64_t x276 = INT64_MIN;
	int64_t t66 = 4519338963689405153LL;

	t66 = ((x273==(x274<x275))/x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x279 = 13453513735409LL;
	uint32_t x280 = 59476U;
	static uint32_t t67 = 120375U;

	t67 = ((x277==(x278<x279))/x280);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = 0;
	volatile uint8_t x282 = UINT8_MAX;
	int64_t x283 = -4LL;
	volatile int32_t t68 = -1493304;

	t68 = ((x281==(x282<x283))/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = UINT8_MAX;
	static int8_t x290 = INT8_MAX;
	uint64_t x291 = 131792321830LLU;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t69 = -1530;

	t69 = ((x289==(x290<x291))/x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MIN;
	volatile int8_t x295 = INT8_MAX;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t70 = -5515;

	t70 = ((x293==(x294<x295))/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = 252U;
	static volatile uint8_t x299 = UINT8_MAX;
	int32_t x300 = -1;
	volatile int32_t t71 = 331;

	t71 = ((x297==(x298<x299))/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = -1LL;
	int16_t x303 = INT16_MIN;

	t72 = ((x301==(x302<x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x305 = 1164LLU;
	static volatile int64_t x307 = -1LL;
	uint8_t x308 = 51U;
	volatile int32_t t73 = -138558;

	t73 = ((x305==(x306<x307))/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 3U;
	static int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MIN;
	int64_t x312 = -6LL;
	int64_t t74 = 7450LL;

	t74 = ((x309==(x310<x311))/x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = -23;
	volatile int16_t x314 = -1;
	uint8_t x315 = UINT8_MAX;
	uint32_t x316 = UINT32_MAX;
	static uint32_t t75 = 253140U;

	t75 = ((x313==(x314<x315))/x316);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = 6560196U;
	uint32_t x318 = 72U;
	volatile int8_t x319 = 12;
	int64_t x320 = INT64_MAX;
	static int64_t t76 = -860646425205931837LL;

	t76 = ((x317==(x318<x319))/x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x321 = 731;
	volatile int32_t x322 = INT32_MAX;
	static uint16_t x323 = 1713U;
	uint32_t x324 = UINT32_MAX;

	t77 = ((x321==(x322<x323))/x324);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x326 = UINT8_MAX;
	uint32_t x327 = 756228U;

	t78 = ((x325==(x326<x327))/x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x329 = -1;
	int16_t x330 = INT16_MAX;
	uint32_t x331 = 449916238U;
	uint32_t x332 = UINT32_MAX;
	static volatile uint32_t t79 = 918178204U;

	t79 = ((x329==(x330<x331))/x332);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	uint8_t x334 = 1U;
	int64_t x335 = INT64_MIN;
	static volatile int16_t x336 = INT16_MAX;
	volatile int32_t t80 = -529;

	t80 = ((x333==(x334<x335))/x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = UINT16_MAX;
	int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t81 = 110411086;

	t81 = ((x337==(x338<x339))/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = 38070762LL;
	static int16_t x342 = INT16_MAX;
	int8_t x343 = -1;
	int64_t x344 = INT64_MIN;
	static volatile int64_t t82 = -1199745LL;

	t82 = ((x341==(x342<x343))/x344);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x345 = -1;
	static int64_t x346 = INT64_MIN;
	int8_t x347 = -2;
	int8_t x348 = INT8_MIN;
	volatile int32_t t83 = -3985092;

	t83 = ((x345==(x346<x347))/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x350 = UINT32_MAX;
	int32_t x351 = -279;
	volatile int32_t t84 = -559672;

	t84 = ((x349==(x350<x351))/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x354 = UINT32_MAX;
	uint8_t x355 = UINT8_MAX;
	volatile int16_t x356 = -2788;
	static volatile int32_t t85 = 172;

	t85 = ((x353==(x354<x355))/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = 2004;
	uint8_t x363 = 5U;
	volatile int64_t t86 = 8177226LL;

	t86 = ((x361==(x362<x363))/x364);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = -19;
	volatile uint8_t x367 = 29U;

	t87 = ((x365==(x366<x367))/x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = -1LL;
	int32_t x371 = INT32_MIN;
	int64_t x372 = 882291455LL;
	static int64_t t88 = -850797734361823LL;

	t88 = ((x369==(x370<x371))/x372);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	static int16_t x375 = 26;
	int16_t x376 = -1;
	volatile int32_t t89 = -3224488;

	t89 = ((x373==(x374<x375))/x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x377 = INT32_MAX;
	int32_t x378 = -14;
	uint32_t x379 = 4231U;
	uint64_t x380 = 9029015932LLU;
	uint64_t t90 = 21127428183219386LLU;

	t90 = ((x377==(x378<x379))/x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x381 = UINT8_MAX;
	static uint64_t x382 = UINT64_MAX;
	volatile int64_t x384 = INT64_MIN;

	t91 = ((x381==(x382<x383))/x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x389 = UINT16_MAX;
	int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MIN;
	int64_t t92 = 3113890663345015407LL;

	t92 = ((x389==(x390<x391))/x392);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MIN;
	volatile int16_t x395 = 1;
	volatile int32_t x396 = 14277;
	int32_t t93 = 91;

	t93 = ((x393==(x394<x395))/x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x397 = 2U;
	int32_t x399 = INT32_MAX;
	volatile uint64_t x400 = 123064LLU;

	t94 = ((x397==(x398<x399))/x400);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	volatile int8_t x402 = -1;
	uint16_t x403 = 30461U;
	static volatile uint8_t x404 = 8U;
	volatile int32_t t95 = -63247527;

	t95 = ((x401==(x402<x403))/x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x406 = 139773266431301LL;
	int64_t x407 = -186980844LL;
	int32_t x408 = INT32_MIN;
	volatile int32_t t96 = -112;

	t96 = ((x405==(x406<x407))/x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x409 = 1050630617174177539LLU;
	int64_t x410 = -11LL;
	int8_t x411 = INT8_MIN;
	volatile uint64_t x412 = UINT64_MAX;
	static volatile uint64_t t97 = 59LLU;

	t97 = ((x409==(x410<x411))/x412);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = 232617U;
	static int32_t x414 = INT32_MIN;
	uint32_t x415 = 652U;
	static int16_t x416 = INT16_MIN;
	volatile int32_t t98 = 30;

	t98 = ((x413==(x414<x415))/x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x419 = INT64_MIN;
	static uint32_t x420 = 33742U;

	t99 = ((x417==(x418<x419))/x420);

	if (t99 != 0U) { NG(); } else { ; }
	
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

