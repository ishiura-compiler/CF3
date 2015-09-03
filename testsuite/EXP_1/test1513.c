#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 229766701297335LL;
int64_t x10 = INT64_MIN;
volatile int32_t t2 = -222531;
volatile int64_t t3 = 794LL;
int32_t x23 = INT32_MIN;
int32_t x27 = INT32_MAX;
static volatile int32_t x31 = INT32_MAX;
int64_t x34 = -290604513617LL;
int8_t x37 = INT8_MIN;
volatile uint16_t x38 = 259U;
volatile uint16_t x40 = 1U;
uint32_t t8 = 5868U;
int8_t x42 = -1;
int8_t x43 = 0;
static int64_t x44 = INT64_MAX;
static int64_t x48 = -371LL;
static uint16_t x49 = UINT16_MAX;
int8_t x52 = -1;
int16_t x53 = 1354;
int8_t x57 = -1;
uint8_t x60 = 15U;
int64_t x64 = -1LL;
int64_t x68 = INT64_MIN;
uint8_t x71 = 43U;
int64_t x86 = INT64_MIN;
volatile int8_t x93 = INT8_MIN;
static int32_t t24 = 4541672;
int8_t x105 = INT8_MAX;
int64_t x108 = INT64_MIN;
static uint32_t x127 = UINT32_MAX;
int64_t x137 = 1LL;
uint8_t x140 = 40U;
int64_t x143 = INT64_MAX;
int64_t t34 = -31944LL;
int8_t x147 = 1;
int16_t x151 = 1880;
int32_t t36 = -3191537;
int32_t t38 = 28;
int8_t x161 = INT8_MIN;
int8_t x163 = 37;
uint32_t x168 = 326501522U;
int32_t t44 = -15345;
int16_t x190 = 0;
int64_t t46 = 377511858022481074LL;
volatile int16_t x207 = INT16_MIN;
int8_t x215 = 4;
volatile uint64_t t51 = 26348LLU;
int64_t x217 = -1LL;
int16_t x230 = INT16_MIN;
int16_t x233 = -1864;
static uint32_t x235 = 30U;
volatile uint32_t t56 = 60U;
int8_t x240 = INT8_MIN;
int32_t x244 = -1;
int64_t x245 = -12276536996LL;
int32_t x256 = INT32_MIN;
uint32_t x259 = UINT32_MAX;
static int32_t t65 = 203575;
int64_t t66 = INT64_MAX;
int32_t x280 = INT32_MIN;
int16_t x281 = -1;
int64_t x287 = INT64_MIN;
int16_t x291 = -59;
uint8_t x293 = 0U;
static uint64_t x297 = 851008818063886LLU;
volatile uint32_t x298 = UINT32_MAX;
int8_t x299 = 1;
static int64_t x300 = 818548865185888528LL;
int64_t x305 = INT64_MIN;
int16_t x308 = INT16_MAX;
volatile int16_t x315 = -1;
int64_t t78 = 1LL;
uint16_t x326 = 6U;
static uint8_t x329 = 11U;
uint16_t x332 = UINT16_MAX;
int64_t x336 = INT64_MIN;
int64_t t81 = -496583701267LL;
volatile int32_t t82 = -200;
uint8_t x345 = 110U;
volatile int64_t t84 = -423097790604003LL;
volatile int8_t x350 = INT8_MAX;
volatile int64_t x364 = -1LL;
int16_t x368 = -1;
int8_t x369 = INT8_MIN;
uint8_t x378 = 0U;
int64_t x386 = INT64_MIN;
uint64_t x389 = 3813405184LLU;
static volatile uint16_t x394 = UINT16_MAX;
volatile uint16_t x401 = 23U;
int16_t x405 = INT16_MAX;
int32_t x407 = INT32_MIN;
int32_t x412 = -1;


void f0(void) {
	int64_t x5 = INT64_MIN;
	volatile int64_t x7 = -437540809712LL;
	int64_t x8 = INT64_MAX;
	int64_t t0 = -127763103901149LL;

	t0 = (((x5<x6)^x7)%x8);

	if (t0 != -437540809711LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 14783U;
	int32_t x11 = INT32_MIN;
	int64_t x12 = 20535LL;
	volatile int64_t t1 = -2461758LL;

	t1 = (((x9<x10)^x11)%x12);

	if (t1 != -15488LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -37;
	uint32_t x14 = 23800588U;
	uint8_t x15 = 56U;
	static volatile uint16_t x16 = 250U;

	t2 = (((x13<x14)^x15)%x16);

	if (t2 != 56) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	int64_t x18 = INT64_MAX;
	int64_t x19 = -165418LL;
	static volatile int16_t x20 = INT16_MAX;

	t3 = (((x17<x18)^x19)%x20);

	if (t3 != -1582LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = -14;
	int8_t x24 = -30;
	int32_t t4 = 1;

	t4 = (((x21<x22)^x23)%x24);

	if (t4 != -8) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x25 = UINT16_MAX;
	uint32_t x26 = 133331U;
	static uint32_t x28 = UINT32_MAX;
	volatile uint32_t t5 = 1059U;

	t5 = (((x25<x26)^x27)%x28);

	if (t5 != 2147483646U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -86LL;
	uint16_t x30 = UINT16_MAX;
	int8_t x32 = 5;
	int32_t t6 = 339176475;

	t6 = (((x29<x30)^x31)%x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	static uint64_t x35 = 18LLU;
	volatile int64_t x36 = 2103439595292LL;
	volatile uint64_t t7 = 223LLU;

	t7 = (((x33<x34)^x35)%x36);

	if (t7 != 19LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x39 = 0U;

	t8 = (((x37<x38)^x39)%x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = 23845U;
	int64_t t9 = 424370LL;

	t9 = (((x41<x42)^x43)%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = -1;
	uint32_t x46 = 3873U;
	volatile int32_t x47 = INT32_MIN;
	volatile int64_t t10 = 43871224298096LL;

	t10 = (((x45<x46)^x47)%x48);

	if (t10 != -233LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = -3734;
	uint64_t x51 = 39LLU;
	uint64_t t11 = 25246766651762LLU;

	t11 = (((x49<x50)^x51)%x52);

	if (t11 != 39LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x54 = INT64_MIN;
	int8_t x55 = -45;
	uint16_t x56 = UINT16_MAX;
	static int32_t t12 = 114;

	t12 = (((x53<x54)^x55)%x56);

	if (t12 != -45) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x58 = 3475U;
	int8_t x59 = INT8_MIN;
	static int32_t t13 = 67039;

	t13 = (((x57<x58)^x59)%x60);

	if (t13 != -7) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x61 = -1LL;
	int8_t x62 = 1;
	volatile uint64_t x63 = 8771475454669021LLU;
	volatile uint64_t t14 = 482210LLU;

	t14 = (((x61<x62)^x63)%x64);

	if (t14 != 8771475454669020LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = INT8_MIN;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1;
	volatile int64_t t15 = -4038855540LL;

	t15 = (((x65<x66)^x67)%x68);

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = -5838742611LL;
	int16_t x72 = -54;
	int32_t t16 = -40;

	t16 = (((x69<x70)^x71)%x72);

	if (t16 != 43) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x73 = INT64_MIN;
	uint8_t x74 = UINT8_MAX;
	uint64_t x75 = 60432LLU;
	int16_t x76 = -59;
	uint64_t t17 = 6264274892919241342LLU;

	t17 = (((x73<x74)^x75)%x76);

	if (t17 != 60433LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 34;
	volatile uint64_t x78 = UINT64_MAX;
	static uint16_t x79 = 958U;
	int16_t x80 = -1614;
	volatile int32_t t18 = 1;

	t18 = (((x77<x78)^x79)%x80);

	if (t18 != 959) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 63U;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = INT64_MIN;
	int64_t x84 = -1LL;
	static int64_t t19 = 1046152338LL;

	t19 = (((x81<x82)^x83)%x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = -1;
	static int64_t x87 = INT64_MIN;
	uint32_t x88 = UINT32_MAX;
	volatile int64_t t20 = 1LL;

	t20 = (((x85<x86)^x87)%x88);

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = INT8_MIN;
	volatile int8_t x90 = INT8_MIN;
	volatile uint8_t x91 = 18U;
	static int8_t x92 = INT8_MIN;
	int32_t t21 = 572;

	t21 = (((x89<x90)^x91)%x92);

	if (t21 != 18) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = -1LL;
	int32_t x95 = INT32_MIN;
	int32_t x96 = INT32_MAX;
	volatile int32_t t22 = 312979830;

	t22 = (((x93<x94)^x95)%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MAX;
	static uint64_t x98 = 57539308LLU;
	static uint64_t x99 = UINT64_MAX;
	volatile int16_t x100 = INT16_MIN;
	uint64_t t23 = 0LLU;

	t23 = (((x97<x98)^x99)%x100);

	if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x101 = 104U;
	volatile uint8_t x102 = 2U;
	static volatile int16_t x103 = -1;
	static int16_t x104 = INT16_MIN;

	t24 = (((x101<x102)^x103)%x104);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x106 = INT16_MAX;
	static int8_t x107 = INT8_MIN;
	volatile int64_t t25 = 767714258LL;

	t25 = (((x105<x106)^x107)%x108);

	if (t25 != -127LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 43LLU;
	volatile int64_t x110 = INT64_MIN;
	uint16_t x111 = 15335U;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t26 = 318845;

	t26 = (((x109<x110)^x111)%x112);

	if (t26 != 15334) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -21;
	int32_t x114 = -22171;
	uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 386361083350LLU;
	volatile uint64_t t27 = 15593211765LLU;

	t27 = (((x113<x114)^x115)%x116);

	if (t27 != 216909054465LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 483761U;
	volatile int8_t x118 = INT8_MAX;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = INT64_MIN;
	static volatile uint64_t t28 = 8386599LLU;

	t28 = (((x117<x118)^x119)%x120);

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = INT16_MIN;
	volatile int64_t x122 = -4825735385541LL;
	int8_t x123 = INT8_MIN;
	uint8_t x124 = 2U;
	int32_t t29 = -6;

	t29 = (((x121<x122)^x123)%x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -4144;
	uint64_t x126 = 309121LLU;
	int32_t x128 = -8985;
	volatile uint32_t t30 = 998473470U;

	t30 = (((x125<x126)^x127)%x128);

	if (t30 != 8984U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	volatile int64_t t31 = -4LL;

	t31 = (((x129<x130)^x131)%x132);

	if (t31 != -2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x133 = UINT64_MAX;
	uint64_t x134 = 1085LLU;
	volatile int64_t x135 = INT64_MIN;
	uint16_t x136 = 826U;
	int64_t t32 = 21723LL;

	t32 = (((x133<x134)^x135)%x136);

	if (t32 != -386LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x138 = INT16_MAX;
	int16_t x139 = 43;
	static int32_t t33 = 3;

	t33 = (((x137<x138)^x139)%x140);

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -2448;
	int64_t x142 = 1423969912092358LL;
	uint32_t x144 = UINT32_MAX;

	t34 = (((x141<x142)^x143)%x144);

	if (t34 != 2147483646LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	static int32_t x146 = -572339;
	int16_t x148 = -44;
	volatile int32_t t35 = -1;

	t35 = (((x145<x146)^x147)%x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = INT32_MIN;
	uint8_t x150 = UINT8_MAX;
	int8_t x152 = INT8_MIN;

	t36 = (((x149<x150)^x151)%x152);

	if (t36 != 89) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x153 = 2828802242LL;
	int32_t x154 = INT32_MAX;
	static int32_t x155 = INT32_MIN;
	static int8_t x156 = 1;
	static volatile int32_t t37 = 122;

	t37 = (((x153<x154)^x155)%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = 16316990745LL;
	uint16_t x159 = 15U;
	volatile int16_t x160 = INT16_MIN;

	t38 = (((x157<x158)^x159)%x160);

	if (t38 != 14) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x162 = -1;
	uint32_t x164 = 291362629U;
	static uint32_t t39 = 307106136U;

	t39 = (((x161<x162)^x163)%x164);

	if (t39 != 36U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = 5521060;
	volatile uint64_t x166 = 141525612LLU;
	static int32_t x167 = INT32_MIN;
	static uint32_t t40 = 364469631U;

	t40 = (((x165<x166)^x167)%x168);

	if (t40 != 188474517U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x173 = 0U;
	int16_t x174 = 13820;
	volatile int64_t x175 = 3833397751525977590LL;
	static int8_t x176 = INT8_MAX;
	volatile int64_t t41 = 1633050LL;

	t41 = (((x173<x174)^x175)%x176);

	if (t41 != 66LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x177 = 1404;
	volatile int8_t x178 = INT8_MIN;
	uint64_t x179 = 299170245509064LLU;
	volatile int8_t x180 = -1;
	uint64_t t42 = 79393279392LLU;

	t42 = (((x177<x178)^x179)%x180);

	if (t42 != 299170245509064LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = INT64_MIN;
	int64_t x183 = 1996190LL;
	int8_t x184 = -1;
	volatile int64_t t43 = 3868367274370LL;

	t43 = (((x181<x182)^x183)%x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x185 = -1;
	static int32_t x186 = INT32_MIN;
	int16_t x187 = 45;
	static volatile int8_t x188 = -1;

	t44 = (((x185<x186)^x187)%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x189 = INT8_MIN;
	int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MIN;
	int64_t t45 = 124LL;

	t45 = (((x189<x190)^x191)%x192);

	if (t45 != 32766LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x193 = 54U;
	int32_t x194 = INT32_MIN;
	uint32_t x195 = 4062944U;
	static int64_t x196 = INT64_MIN;

	t46 = (((x193<x194)^x195)%x196);

	if (t46 != 4062944LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 647492526949LLU;
	volatile int16_t x198 = -1;
	static int32_t x199 = -711936749;
	uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t47 = 5555348LLU;

	t47 = (((x197<x198)^x199)%x200);

	if (t47 != 18446744072997614866LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 1U;
	volatile int32_t x202 = 0;
	uint16_t x203 = UINT16_MAX;
	static int64_t x204 = -1LL;
	volatile int64_t t48 = -2931LL;

	t48 = (((x201<x202)^x203)%x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -11;
	uint64_t x206 = 5509622LLU;
	uint8_t x208 = 2U;
	static volatile int32_t t49 = 165;

	t49 = (((x205<x206)^x207)%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x209 = 86U;
	uint16_t x210 = 1U;
	int64_t x211 = 601568LL;
	static int8_t x212 = INT8_MAX;
	int64_t t50 = -8322311930299LL;

	t50 = (((x209<x210)^x211)%x212);

	if (t50 != 96LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x213 = -1;
	static volatile int8_t x214 = 1;
	static uint64_t x216 = 1754601LLU;

	t51 = (((x213<x214)^x215)%x216);

	if (t51 != 5LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x218 = INT16_MIN;
	volatile int16_t x219 = INT16_MIN;
	int32_t x220 = -1;
	static int32_t t52 = 2;

	t52 = (((x217<x218)^x219)%x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x221 = -22;
	volatile uint64_t x222 = 79717039681114LLU;
	int32_t x223 = -1;
	int16_t x224 = -1;
	static int32_t t53 = 725;

	t53 = (((x221<x222)^x223)%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x225 = 8U;
	int32_t x226 = 331294145;
	uint32_t x227 = 641360U;
	int64_t x228 = 67713814257LL;
	int64_t t54 = -233716049224563LL;

	t54 = (((x225<x226)^x227)%x228);

	if (t54 != 641361LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x229 = INT16_MIN;
	volatile uint16_t x231 = UINT16_MAX;
	uint16_t x232 = 162U;
	static int32_t t55 = 2251;

	t55 = (((x229<x230)^x231)%x232);

	if (t55 != 87) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x234 = -1;
	int16_t x236 = -3;

	t56 = (((x233<x234)^x235)%x236);

	if (t56 != 31U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	volatile int32_t x239 = -18;
	volatile int32_t t57 = 1034;

	t57 = (((x237<x238)^x239)%x240);

	if (t57 != -17) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x241 = 0U;
	uint64_t x242 = 51189927902LLU;
	int16_t x243 = -53;
	volatile int32_t t58 = 288;

	t58 = (((x241<x242)^x243)%x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x246 = INT8_MAX;
	int64_t x247 = INT64_MIN;
	uint64_t x248 = 244633965713709LLU;
	volatile uint64_t t59 = 781016185LLU;

	t59 = (((x245<x246)^x247)%x248);

	if (t59 != 182261516519091LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x249 = INT32_MAX;
	int64_t x250 = -1LL;
	int8_t x251 = 0;
	static int8_t x252 = 3;
	volatile int32_t t60 = 957;

	t60 = (((x249<x250)^x251)%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = 31;
	int32_t x254 = -72;
	int16_t x255 = 300;
	volatile int32_t t61 = 217749141;

	t61 = (((x253<x254)^x255)%x256);

	if (t61 != 300) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 5U;
	int8_t x258 = INT8_MAX;
	volatile int32_t x260 = INT32_MIN;
	uint32_t t62 = 13430U;

	t62 = (((x257<x258)^x259)%x260);

	if (t62 != 2147483646U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MAX;
	int32_t x263 = -1;
	int16_t x264 = -3;
	volatile int32_t t63 = -1290789;

	t63 = (((x261<x262)^x263)%x264);

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = -1;
	static uint64_t x266 = 0LLU;
	uint64_t x267 = 773971LLU;
	volatile int8_t x268 = INT8_MAX;
	volatile uint64_t t64 = 14205169LLU;

	t64 = (((x265<x266)^x267)%x268);

	if (t64 != 33LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x270 = INT64_MAX;
	int8_t x271 = -11;
	int16_t x272 = -1;

	t65 = (((x269<x270)^x271)%x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 2837649012LL;
	int16_t x274 = -1;
	int64_t x275 = INT64_MAX;
	int64_t x276 = INT64_MIN;

	t66 = (((x273<x274)^x275)%x276);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -1LL;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 217U;
	volatile int32_t t67 = -18322151;

	t67 = (((x277<x278)^x279)%x280);

	if (t67 != 217) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x282 = 14094U;
	int8_t x283 = 1;
	uint8_t x284 = UINT8_MAX;
	int32_t t68 = 1;

	t68 = (((x281<x282)^x283)%x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x285 = INT64_MIN;
	static volatile uint16_t x286 = UINT16_MAX;
	int32_t x288 = 787;
	volatile int64_t t69 = 1113876636252090LL;

	t69 = (((x285<x286)^x287)%x288);

	if (t69 != -382LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x289 = 49U;
	volatile int8_t x290 = -1;
	static uint64_t x292 = UINT64_MAX;
	static uint64_t t70 = 171LLU;

	t70 = (((x289<x290)^x291)%x292);

	if (t70 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x294 = 2000LLU;
	int32_t x295 = -13217227;
	int64_t x296 = INT64_MIN;
	int64_t t71 = 0LL;

	t71 = (((x293<x294)^x295)%x296);

	if (t71 != -13217228LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t t72 = -59393020616172LL;

	t72 = (((x297<x298)^x299)%x300);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = 0;
	uint64_t x302 = UINT64_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	volatile int32_t x304 = INT32_MAX;
	static int32_t t73 = -4074;

	t73 = (((x301<x302)^x303)%x304);

	if (t73 != 65534) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x306 = 151762927U;
	uint32_t x307 = UINT32_MAX;
	uint32_t t74 = 63365208U;

	t74 = (((x305<x306)^x307)%x308);

	if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x309 = 0;
	int16_t x310 = INT16_MIN;
	volatile uint64_t x311 = 56868211LLU;
	int32_t x312 = 488684686;
	volatile uint64_t t75 = 16102LLU;

	t75 = (((x309<x310)^x311)%x312);

	if (t75 != 56868211LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = INT64_MAX;
	uint8_t x314 = 7U;
	int64_t x316 = INT64_MAX;
	int64_t t76 = 65322994981186LL;

	t76 = (((x313<x314)^x315)%x316);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = 3152135;
	int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MAX;
	static int64_t t77 = 1497990LL;

	t77 = (((x317<x318)^x319)%x320);

	if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = -1LL;
	int16_t x322 = INT16_MIN;
	int64_t x323 = 1829121128LL;
	int8_t x324 = INT8_MAX;

	t78 = (((x321<x322)^x323)%x324);

	if (t78 != 72LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = 69622545259108815LL;
	int16_t x327 = -1;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t79 = 42651257;

	t79 = (((x325<x326)^x327)%x328);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x330 = INT64_MIN;
	uint64_t x331 = 119LLU;
	uint64_t t80 = 1036638584666048LLU;

	t80 = (((x329<x330)^x331)%x332);

	if (t80 != 119LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x333 = 26U;
	static int16_t x334 = INT16_MAX;
	uint32_t x335 = 424893U;

	t81 = (((x333<x334)^x335)%x336);

	if (t81 != 424892LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 4U;
	uint32_t x338 = 194U;
	int16_t x339 = INT16_MAX;
	int16_t x340 = -1;

	t82 = (((x337<x338)^x339)%x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = 8;
	int16_t x342 = INT16_MAX;
	int32_t x343 = INT32_MIN;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t83 = -3303664;

	t83 = (((x341<x342)^x343)%x344);

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -8653868147585LL;

	t84 = (((x345<x346)^x347)%x348);

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = 0U;
	volatile int64_t x351 = 1037302271LL;
	int8_t x352 = -1;
	static int64_t t85 = 8066734LL;

	t85 = (((x349<x350)^x351)%x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = 4657211;
	int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	volatile int32_t x356 = 26906742;
	volatile int32_t t86 = -113;

	t86 = (((x353<x354)^x355)%x356);

	if (t86 != -21851030) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = INT32_MIN;
	volatile int64_t x358 = INT64_MIN;
	static uint32_t x359 = 1692981U;
	int8_t x360 = -8;
	uint32_t t87 = 7U;

	t87 = (((x357<x358)^x359)%x360);

	if (t87 != 1692981U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x361 = -959;
	volatile uint16_t x362 = 4378U;
	int8_t x363 = -1;
	static int64_t t88 = 447457082949955LL;

	t88 = (((x361<x362)^x363)%x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	int64_t x366 = -14LL;
	int8_t x367 = -1;
	int32_t t89 = 232423;

	t89 = (((x365<x366)^x367)%x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x370 = 41766LL;
	int64_t x371 = -31652635825250LL;
	static int8_t x372 = INT8_MIN;
	static int64_t t90 = 95511LL;

	t90 = (((x369<x370)^x371)%x372);

	if (t90 != -97LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x377 = 3U;
	volatile int16_t x379 = -3;
	int16_t x380 = INT16_MIN;
	int32_t t91 = 568577997;

	t91 = (((x377<x378)^x379)%x380);

	if (t91 != -3) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = 3376U;
	static int16_t x382 = INT16_MAX;
	int8_t x383 = 7;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t92 = 104440;

	t92 = (((x381<x382)^x383)%x384);

	if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x385 = INT64_MAX;
	int64_t x387 = -34734LL;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t93 = 2452683LLU;

	t93 = (((x385<x386)^x387)%x388);

	if (t93 != 18446744073709516882LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x390 = 16;
	int32_t x391 = INT32_MAX;
	static volatile int64_t x392 = INT64_MIN;
	int64_t t94 = 113346154767LL;

	t94 = (((x389<x390)^x391)%x392);

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = -1;
	int64_t x395 = 377674944436934LL;
	volatile int32_t x396 = -1;
	static volatile int64_t t95 = 1LL;

	t95 = (((x393<x394)^x395)%x396);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = -1LL;
	int8_t x398 = -1;
	volatile int32_t x399 = INT32_MAX;
	uint16_t x400 = 1U;
	volatile int32_t t96 = -99041136;

	t96 = (((x397<x398)^x399)%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x402 = INT16_MIN;
	static volatile int16_t x403 = INT16_MIN;
	static int16_t x404 = 5;
	volatile int32_t t97 = 0;

	t97 = (((x401<x402)^x403)%x404);

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x406 = UINT32_MAX;
	uint64_t x408 = 34LLU;
	uint64_t t98 = 18LLU;

	t98 = (((x405<x406)^x407)%x408);

	if (t98 != 27LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = -1;
	volatile int32_t x410 = 9014;
	int64_t x411 = INT64_MAX;
	volatile int64_t t99 = 34594266452750418LL;

	t99 = (((x409<x410)^x411)%x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

