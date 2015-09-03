#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = 3145690151575LL;
int16_t x25 = 1;
uint16_t x26 = 1U;
int64_t x28 = INT64_MAX;
int64_t t6 = -33998558656710151LL;
uint16_t x29 = UINT16_MAX;
uint8_t x31 = 56U;
int8_t x45 = INT8_MIN;
int16_t x46 = INT16_MAX;
static int32_t t11 = -4492544;
int8_t x50 = INT8_MIN;
int16_t x57 = INT16_MIN;
volatile int8_t x59 = INT8_MIN;
int32_t t15 = -15265;
int16_t x77 = -1;
volatile int64_t x83 = -506260LL;
uint32_t x92 = 102U;
int32_t x96 = -7805;
int32_t x105 = INT32_MIN;
volatile int32_t t28 = 1493925;
int8_t x126 = -1;
volatile uint32_t x127 = 118620U;
volatile int8_t x131 = -1;
volatile int32_t x142 = INT32_MIN;
int8_t x144 = 7;
int8_t x146 = INT8_MAX;
uint16_t x152 = UINT16_MAX;
int64_t x153 = INT64_MAX;
static volatile int64_t t38 = -4LL;
static int64_t x158 = INT64_MAX;
volatile int32_t t41 = 1802;
uint32_t x170 = UINT32_MAX;
int32_t x183 = INT32_MIN;
int64_t x186 = -4907290LL;
uint64_t x192 = UINT64_MAX;
uint64_t t47 = 466LLU;
uint8_t x195 = UINT8_MAX;
volatile int32_t t50 = 664706;
static uint64_t t51 = 117LLU;
int16_t x210 = -18;
uint32_t x211 = 41554U;
int64_t x219 = INT64_MAX;
int64_t x220 = INT64_MAX;
int16_t x221 = INT16_MAX;
static volatile int32_t t55 = -178402255;
int8_t x230 = INT8_MAX;
static volatile int64_t x232 = -1LL;
volatile int64_t t57 = 71210535810LL;
int8_t x241 = INT8_MIN;
uint8_t x242 = 1U;
static volatile int64_t t60 = 2755412659LL;
int32_t x253 = INT32_MIN;
int16_t x257 = 3;
volatile int32_t t65 = -31;
uint8_t x269 = UINT8_MAX;
volatile int32_t t68 = -2;
uint64_t x284 = UINT64_MAX;
uint32_t x285 = UINT32_MAX;
int16_t x290 = INT16_MAX;
volatile int32_t t72 = -1;
volatile uint32_t x298 = 18U;
static volatile int32_t x299 = 9568266;
int64_t x309 = -154LL;
int64_t x316 = INT64_MIN;
uint64_t x321 = 0LLU;
int8_t x328 = INT8_MIN;
int32_t x329 = INT32_MIN;
int8_t x335 = INT8_MIN;
static uint16_t x339 = 2U;
static int64_t x344 = INT64_MIN;
uint16_t x345 = UINT16_MAX;
int64_t x348 = 363709254LL;
int64_t t86 = -56680372476713687LL;
static uint8_t x355 = UINT8_MAX;
int32_t t88 = -7;
uint64_t x357 = UINT64_MAX;
uint32_t x358 = UINT32_MAX;
uint64_t x370 = 62LLU;
uint16_t x376 = 2044U;
volatile uint32_t x379 = UINT32_MAX;
volatile uint32_t x383 = 1019651U;
volatile int8_t x384 = INT8_MAX;
int32_t x385 = 44831567;
int8_t x389 = INT8_MAX;
uint64_t x392 = UINT64_MAX;
volatile uint64_t t97 = 1LLU;
static int64_t x393 = -107883886529223587LL;
int32_t x394 = -1;
volatile int32_t x395 = 21896;
uint64_t x398 = 15506749844950398LLU;


void f0(void) {
	int64_t x1 = 90768046796LL;
	int64_t x2 = INT64_MAX;
	int8_t x3 = INT8_MIN;
	static volatile int32_t x4 = -2482;
	volatile int32_t t0 = 118630266;

	t0 = (((x1|x2)==x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 2757744LL;
	static int8_t x7 = -1;
	volatile int32_t x8 = -1;
	volatile int32_t t1 = -80921;

	t1 = (((x5|x6)==x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 3U;
	int8_t x10 = 1;
	int8_t x11 = INT8_MIN;
	int16_t x12 = -1;
	volatile int32_t t2 = 40;

	t2 = (((x9|x10)==x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	uint16_t x14 = UINT16_MAX;
	int32_t x15 = -1;
	int8_t x16 = -28;
	int32_t t3 = 46771176;

	t3 = (((x13|x14)==x15)%x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1;
	static uint64_t x18 = 1186436885LLU;
	int64_t x19 = INT64_MIN;
	int16_t x20 = 1;
	volatile int32_t t4 = 1248;

	t4 = (((x17|x18)==x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int32_t x22 = INT32_MAX;
	int32_t x23 = -1;
	volatile int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 79101;

	t5 = (((x21|x22)==x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x27 = INT64_MIN;

	t6 = (((x25|x26)==x27)%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	uint32_t x32 = 6U;
	uint32_t t7 = 140853893U;

	t7 = (((x29|x30)==x31)%x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	volatile uint16_t x35 = 1U;
	int64_t x36 = -15756657LL;
	int64_t t8 = 2711220433LL;

	t8 = (((x33|x34)==x35)%x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = 6964;
	static volatile int16_t x39 = 194;
	volatile uint8_t x40 = 60U;
	volatile int32_t t9 = -6903;

	t9 = (((x37|x38)==x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 5884900870050LLU;
	volatile int64_t x42 = 240LL;
	int32_t x43 = -765;
	static volatile uint8_t x44 = 11U;
	static volatile int32_t t10 = -4574321;

	t10 = (((x41|x42)==x43)%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x47 = 5;
	int32_t x48 = -7;

	t11 = (((x45|x46)==x47)%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 15713304LLU;
	uint32_t x51 = 110065738U;
	int32_t x52 = -1;
	volatile int32_t t12 = 604;

	t12 = (((x49|x50)==x51)%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile int8_t x54 = INT8_MIN;
	int32_t x55 = INT32_MAX;
	int16_t x56 = -7;
	int32_t t13 = -68;

	t13 = (((x53|x54)==x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x58 = -1;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 2843U;

	t14 = (((x57|x58)==x59)%x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	volatile int16_t x62 = INT16_MIN;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = INT16_MIN;

	t15 = (((x61|x62)==x63)%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = 3;
	int16_t x66 = INT16_MIN;
	int8_t x67 = -3;
	static int8_t x68 = -1;
	static int32_t t16 = 175761347;

	t16 = (((x65|x66)==x67)%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int64_t x70 = -168378393LL;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 663U;
	int32_t t17 = 592224;

	t17 = (((x69|x70)==x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = 6;
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MAX;
	uint16_t x76 = 6588U;
	int32_t t18 = -1;

	t18 = (((x73|x74)==x75)%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x78 = 31741704778558376LLU;
	uint32_t x79 = UINT32_MAX;
	volatile uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 103745858LLU;

	t19 = (((x77|x78)==x79)%x80);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	uint8_t x82 = 0U;
	static uint32_t x84 = 73757U;
	uint32_t t20 = 31727U;

	t20 = (((x81|x82)==x83)%x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 5;
	volatile int16_t x86 = INT16_MIN;
	int16_t x87 = 1;
	int16_t x88 = INT16_MIN;
	static int32_t t21 = 559;

	t21 = (((x85|x86)==x87)%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 119U;
	static int8_t x90 = 15;
	uint64_t x91 = 175LLU;
	uint32_t t22 = 4227644U;

	t22 = (((x89|x90)==x91)%x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	uint16_t x94 = UINT16_MAX;
	uint32_t x95 = 23U;
	volatile int32_t t23 = 551177;

	t23 = (((x93|x94)==x95)%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 900U;
	int16_t x100 = -1;
	int32_t t24 = 6816958;

	t24 = (((x97|x98)==x99)%x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint32_t x102 = UINT32_MAX;
	int32_t x103 = INT32_MIN;
	uint32_t x104 = 2075085U;
	uint32_t t25 = 130330U;

	t25 = (((x101|x102)==x103)%x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x106 = 5333U;
	volatile uint32_t x107 = UINT32_MAX;
	uint16_t x108 = 1112U;
	volatile int32_t t26 = -1;

	t26 = (((x105|x106)==x107)%x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	volatile int64_t x110 = 1LL;
	int16_t x111 = -5;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t27 = 29902943U;

	t27 = (((x109|x110)==x111)%x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -32985214;
	int8_t x114 = 29;
	static uint32_t x115 = 269572372U;
	int16_t x116 = INT16_MAX;

	t28 = (((x113|x114)==x115)%x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	volatile uint8_t x118 = 0U;
	int16_t x119 = -1;
	int32_t x120 = -12;
	volatile int32_t t29 = 26088;

	t29 = (((x117|x118)==x119)%x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x121 = 29;
	int16_t x122 = 3624;
	uint16_t x123 = 4908U;
	volatile int64_t x124 = INT64_MAX;
	int64_t t30 = -166613482031156140LL;

	t30 = (((x121|x122)==x123)%x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -376756;
	int32_t x128 = -1;
	volatile int32_t t31 = -121904897;

	t31 = (((x125|x126)==x127)%x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 79838LL;
	static uint32_t x130 = 11U;
	int16_t x132 = INT16_MAX;
	int32_t t32 = 50;

	t32 = (((x129|x130)==x131)%x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1080;
	int16_t x134 = -1;
	uint16_t x135 = 32472U;
	int16_t x136 = INT16_MIN;
	int32_t t33 = 3226975;

	t33 = (((x133|x134)==x135)%x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	int8_t x138 = 4;
	int64_t x139 = INT64_MAX;
	static int16_t x140 = -1;
	int32_t t34 = 22841230;

	t34 = (((x137|x138)==x139)%x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -1;
	int32_t x143 = INT32_MAX;
	int32_t t35 = -122;

	t35 = (((x141|x142)==x143)%x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile int64_t x147 = -1LL;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 3120;

	t36 = (((x145|x146)==x147)%x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 0LLU;
	uint64_t x150 = 7076LLU;
	int8_t x151 = -9;
	static int32_t t37 = 4774120;

	t37 = (((x149|x150)==x151)%x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = -89;
	int32_t x155 = 90108;
	int64_t x156 = -1LL;

	t38 = (((x153|x154)==x155)%x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int16_t x159 = -1;
	uint64_t x160 = 1892407LLU;
	uint64_t t39 = 20LLU;

	t39 = (((x157|x158)==x159)%x160);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 1848U;
	uint32_t x162 = 1590U;
	int32_t x163 = -242591;
	volatile uint16_t x164 = 3U;
	volatile int32_t t40 = 151056362;

	t40 = (((x161|x162)==x163)%x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint64_t x166 = 3825LLU;
	int16_t x167 = -1;
	int8_t x168 = INT8_MIN;

	t41 = (((x165|x166)==x167)%x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MIN;
	int32_t t42 = -269736;

	t42 = (((x169|x170)==x171)%x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	static volatile int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	static int8_t x176 = -3;
	static volatile int32_t t43 = -747938;

	t43 = (((x173|x174)==x175)%x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	volatile int32_t x178 = -1;
	uint64_t x179 = 328896565001518LLU;
	int64_t x180 = INT64_MIN;
	static int64_t t44 = -4594554380025LL;

	t44 = (((x177|x178)==x179)%x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	int32_t x182 = INT32_MIN;
	volatile int64_t x184 = -1LL;
	int64_t t45 = -138696395356849009LL;

	t45 = (((x181|x182)==x183)%x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 50U;
	int64_t x187 = INT64_MIN;
	static int8_t x188 = INT8_MAX;
	int32_t t46 = 3235553;

	t46 = (((x185|x186)==x187)%x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	volatile int16_t x190 = 4;
	int8_t x191 = -1;

	t47 = (((x189|x190)==x191)%x192);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MIN;
	int64_t x194 = -1LL;
	int8_t x196 = -1;
	int32_t t48 = -312;

	t48 = (((x193|x194)==x195)%x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = 20654179;
	int64_t x200 = -1LL;
	volatile int64_t t49 = -7733909935926LL;

	t49 = (((x197|x198)==x199)%x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x201 = 193;
	int8_t x202 = INT8_MAX;
	static int8_t x203 = 2;
	uint8_t x204 = 115U;

	t50 = (((x201|x202)==x203)%x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	uint8_t x206 = UINT8_MAX;
	uint64_t x207 = 488170251LLU;
	uint64_t x208 = 10671250602082LLU;

	t51 = (((x205|x206)==x207)%x208);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 837;

	t52 = (((x209|x210)==x211)%x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MAX;
	uint64_t x214 = UINT64_MAX;
	volatile uint32_t x215 = 439036U;
	int8_t x216 = -50;
	int32_t t53 = -243;

	t53 = (((x213|x214)==x215)%x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile int32_t x218 = INT32_MIN;
	volatile int64_t t54 = 321554397641243LL;

	t54 = (((x217|x218)==x219)%x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x222 = UINT16_MAX;
	volatile int8_t x223 = -54;
	static int16_t x224 = INT16_MAX;

	t55 = (((x221|x222)==x223)%x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = -1LL;
	int64_t x227 = -1LL;
	int64_t x228 = -1LL;
	volatile int64_t t56 = -3909473008986459373LL;

	t56 = (((x225|x226)==x227)%x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 1U;
	int8_t x231 = INT8_MAX;

	t57 = (((x229|x230)==x231)%x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MAX;
	static uint8_t x236 = 30U;
	volatile int32_t t58 = 51974;

	t58 = (((x233|x234)==x235)%x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = 8983585456666LL;
	uint8_t x239 = 3U;
	static volatile int16_t x240 = -1;
	int32_t t59 = -1488698;

	t59 = (((x237|x238)==x239)%x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x243 = -1;
	volatile int64_t x244 = INT64_MIN;

	t60 = (((x241|x242)==x243)%x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	static int32_t x246 = -1;
	uint64_t x247 = 434035491400LLU;
	uint32_t x248 = 208U;
	volatile uint32_t t61 = 11145U;

	t61 = (((x245|x246)==x247)%x248);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MAX;
	int32_t x250 = 26;
	int16_t x251 = 30;
	uint64_t x252 = 802415LLU;
	static volatile uint64_t t62 = 6804417053686LLU;

	t62 = (((x249|x250)==x251)%x252);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = 644058LL;
	volatile int32_t x255 = -1;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = 47;

	t63 = (((x253|x254)==x255)%x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = 32U;
	uint64_t x259 = 199867430355257339LLU;
	int16_t x260 = -2269;
	int32_t t64 = 31;

	t64 = (((x257|x258)==x259)%x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = UINT32_MAX;
	static int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MAX;
	volatile int16_t x264 = -5;

	t65 = (((x261|x262)==x263)%x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x265 = 2305U;
	static int64_t x266 = -2149796729356297643LL;
	static uint64_t x267 = 2024083876886986LLU;
	int32_t x268 = -575617;
	int32_t t66 = -7936795;

	t66 = (((x265|x266)==x267)%x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x270 = INT8_MIN;
	int64_t x271 = 305907910162LL;
	uint16_t x272 = UINT16_MAX;
	static volatile int32_t t67 = 1371258;

	t67 = (((x269|x270)==x271)%x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	int32_t x274 = -124869492;
	static volatile uint64_t x275 = 1076879896667LLU;
	int32_t x276 = -1;

	t68 = (((x273|x274)==x275)%x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = -1;
	int64_t x278 = INT64_MAX;
	int8_t x279 = INT8_MIN;
	volatile int64_t x280 = INT64_MAX;
	int64_t t69 = 477LL;

	t69 = (((x277|x278)==x279)%x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 809391303LLU;
	static volatile uint32_t x282 = UINT32_MAX;
	uint8_t x283 = UINT8_MAX;
	volatile uint64_t t70 = 9856958893LLU;

	t70 = (((x281|x282)==x283)%x284);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = -39067667;
	volatile int64_t x288 = INT64_MIN;
	int64_t t71 = -5414697832046554LL;

	t71 = (((x285|x286)==x287)%x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = 1U;
	int64_t x291 = -52125844291521289LL;
	int16_t x292 = -1;

	t72 = (((x289|x290)==x291)%x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -355210912554LL;
	int32_t x294 = INT32_MIN;
	int16_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -4959733;

	t73 = (((x293|x294)==x295)%x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 13U;
	int32_t x300 = -122176;
	volatile int32_t t74 = 488065667;

	t74 = (((x297|x298)==x299)%x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 865U;
	int32_t x302 = -27;
	volatile int16_t x303 = 10;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t75 = 989;

	t75 = (((x301|x302)==x303)%x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	uint8_t x306 = 4U;
	int64_t x307 = INT64_MAX;
	volatile int16_t x308 = -168;
	volatile int32_t t76 = 0;

	t76 = (((x305|x306)==x307)%x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x310 = -2009LL;
	int8_t x311 = 0;
	int16_t x312 = 4250;
	volatile int32_t t77 = 14290920;

	t77 = (((x309|x310)==x311)%x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = UINT64_MAX;
	int64_t t78 = 54LL;

	t78 = (((x313|x314)==x315)%x316);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = UINT16_MAX;
	uint32_t x318 = UINT32_MAX;
	uint8_t x319 = 0U;
	uint64_t x320 = UINT64_MAX;
	uint64_t t79 = 1162111072629106450LLU;

	t79 = (((x317|x318)==x319)%x320);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x322 = 31825U;
	uint64_t x323 = UINT64_MAX;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = -347867713;

	t80 = (((x321|x322)==x323)%x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 5LL;
	int16_t x326 = INT16_MIN;
	static int64_t x327 = INT64_MIN;
	int32_t t81 = 0;

	t81 = (((x325|x326)==x327)%x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x330 = -446;
	uint8_t x331 = 86U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -1;

	t82 = (((x329|x330)==x331)%x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -72;
	int8_t x334 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t83 = 109487848;

	t83 = (((x333|x334)==x335)%x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 25U;
	uint16_t x338 = 250U;
	int32_t x340 = INT32_MAX;
	static volatile int32_t t84 = -43935917;

	t84 = (((x337|x338)==x339)%x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = -150847951;
	int64_t x342 = -4031313262077749LL;
	int64_t x343 = -1LL;
	volatile int64_t t85 = 2043375936986LL;

	t85 = (((x341|x342)==x343)%x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = 3U;
	static uint16_t x347 = UINT16_MAX;

	t86 = (((x345|x346)==x347)%x348);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	uint32_t x350 = 29U;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 741977374688697LLU;
	volatile uint64_t t87 = 84620194LLU;

	t87 = (((x349|x350)==x351)%x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	int16_t x354 = INT16_MAX;
	int8_t x356 = INT8_MIN;

	t88 = (((x353|x354)==x355)%x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x359 = 13308U;
	uint8_t x360 = UINT8_MAX;
	static int32_t t89 = -659;

	t89 = (((x357|x358)==x359)%x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 0U;
	static uint32_t x362 = UINT32_MAX;
	static int8_t x363 = -3;
	int16_t x364 = -1029;
	volatile int32_t t90 = -1384;

	t90 = (((x361|x362)==x363)%x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	volatile int16_t x367 = INT16_MIN;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t91 = 1076844513U;

	t91 = (((x365|x366)==x367)%x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -90697LL;
	static int8_t x371 = INT8_MAX;
	int16_t x372 = 44;
	volatile int32_t t92 = 136327;

	t92 = (((x369|x370)==x371)%x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 1LL;
	int32_t x374 = INT32_MIN;
	int64_t x375 = 16916393901070202LL;
	int32_t t93 = 14370423;

	t93 = (((x373|x374)==x375)%x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 124219939271079139LLU;
	int8_t x378 = -1;
	uint64_t x380 = 568554LLU;
	volatile uint64_t t94 = 22114707LLU;

	t94 = (((x377|x378)==x379)%x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	volatile uint8_t x382 = UINT8_MAX;
	int32_t t95 = 5566;

	t95 = (((x381|x382)==x383)%x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x386 = 15495U;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t96 = -278494;

	t96 = (((x385|x386)==x387)%x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MIN;
	int8_t x391 = INT8_MIN;

	t97 = (((x389|x390)==x391)%x392);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x396 = INT32_MIN;
	int32_t t98 = 1;

	t98 = (((x393|x394)==x395)%x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 233U;
	static volatile int32_t x399 = INT32_MAX;
	static uint64_t x400 = 108183275815LLU;
	uint64_t t99 = 223518798331LLU;

	t99 = (((x397|x398)==x399)%x400);

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

