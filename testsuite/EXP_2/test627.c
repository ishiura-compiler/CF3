#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
int8_t x5 = INT8_MAX;
int8_t x9 = 3;
static int64_t x11 = INT64_MIN;
int8_t x12 = INT8_MAX;
volatile uint16_t x13 = 52U;
int16_t x16 = INT16_MIN;
volatile int64_t t4 = -16980LL;
int64_t x21 = -1LL;
int16_t x25 = -1;
int8_t x26 = -3;
int16_t x30 = INT16_MIN;
int64_t x32 = -1LL;
int64_t t7 = -570402013005516415LL;
int32_t x42 = INT32_MIN;
static volatile int32_t t9 = -8904217;
int64_t x47 = INT64_MAX;
int8_t x49 = INT8_MIN;
int8_t x58 = -1;
static volatile int64_t t15 = -5652065442247178LL;
uint32_t x73 = 39067351U;
int8_t x79 = 1;
uint32_t x81 = UINT32_MAX;
volatile uint16_t x91 = 219U;
static int8_t x99 = 28;
volatile int32_t t23 = INT32_MIN;
static int8_t x111 = -1;
uint8_t x120 = 1U;
volatile int32_t t27 = -1;
int16_t x121 = -1;
uint16_t x122 = 4U;
int32_t x123 = -1;
int64_t x128 = 5133512LL;
int64_t t29 = 1LL;
volatile int32_t t30 = -252889;
int8_t x133 = -3;
int32_t t33 = 755;
volatile int32_t t35 = 775;
int64_t x157 = -1LL;
volatile uint32_t x163 = UINT32_MAX;
int32_t x166 = -29213197;
static uint16_t x169 = 590U;
int16_t x170 = 0;
volatile int64_t x172 = INT64_MAX;
int32_t t42 = -4063159;
volatile uint8_t x183 = UINT8_MAX;
static int64_t x186 = INT64_MIN;
uint32_t x188 = 18182U;
uint32_t t44 = 311798304U;
uint32_t x194 = UINT32_MAX;
volatile int32_t x197 = -1;
uint16_t x199 = 5U;
volatile int64_t x212 = -3867LL;
static int32_t x218 = 231459808;
int32_t t53 = 15726;
static int8_t x230 = INT8_MIN;
uint16_t x233 = 96U;
int64_t x235 = -1LL;
int64_t x236 = -1LL;
int8_t x241 = 4;
int32_t t58 = -1;
static int16_t x247 = 20;
int32_t x251 = INT32_MAX;
int32_t x253 = -1;
int64_t x257 = INT64_MIN;
int64_t x270 = -1LL;
int32_t x276 = INT32_MAX;
static uint16_t x282 = 161U;
int32_t x284 = INT32_MIN;
int8_t x287 = INT8_MIN;
volatile int32_t t69 = -27401652;
int32_t x290 = 1;
static int64_t x292 = INT64_MIN;
int64_t t70 = 29800195LL;
volatile int16_t x293 = INT16_MIN;
uint8_t x295 = 2U;
volatile int16_t x298 = INT16_MIN;
volatile int32_t t72 = 14;
int8_t x301 = -1;
int16_t x305 = INT16_MIN;
int64_t x306 = -1LL;
volatile int16_t x315 = -2628;
uint64_t x317 = 1983LLU;
static uint16_t x318 = 84U;
int32_t x321 = -1;
volatile int32_t t79 = -1634;
static int32_t x334 = -1;
static uint16_t x344 = UINT16_MAX;
static volatile uint32_t x347 = 17175U;
int32_t x351 = INT32_MAX;
int16_t x357 = INT16_MIN;
int32_t x358 = INT32_MIN;
int32_t t87 = 0;
static volatile int32_t x366 = 41418630;
int16_t x370 = 36;
static uint64_t x371 = 1466LLU;
uint64_t x374 = 133744183182419LLU;
static int64_t x375 = -57LL;
int32_t t91 = 446170;
volatile int16_t x377 = -10268;
int32_t x382 = -32326780;
static int32_t x384 = 15477;
int32_t t93 = 3828954;
volatile int8_t x387 = INT8_MIN;
static uint8_t x393 = 82U;
int16_t x394 = -636;
static volatile uint8_t x397 = 0U;
volatile int32_t t98 = -32866314;
volatile int16_t x407 = -13998;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint16_t x3 = 8U;
	int32_t x4 = -230;
	int32_t t0 = 6416;

	t0 = ((x1<=(x2/x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MIN;
	static int64_t x7 = 259736LL;
	volatile int64_t x8 = -1LL;
	int64_t t1 = 15841632047LL;

	t1 = ((x5<=(x6/x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	volatile int32_t t2 = 301;

	t2 = ((x9<=(x10/x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	volatile uint32_t x15 = 1162492726U;
	int32_t t3 = 63;

	t3 = ((x13<=(x14/x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	volatile int16_t x18 = INT16_MIN;
	uint64_t x19 = 7833985326LLU;
	int64_t x20 = -7LL;

	t4 = ((x17<=(x18/x19))*x20);

	if (t4 != -7LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MIN;
	int8_t x23 = 22;
	static uint16_t x24 = 158U;
	volatile int32_t t5 = -27636387;

	t5 = ((x21<=(x22/x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x27 = 601067601U;
	int8_t x28 = 19;
	volatile int32_t t6 = -165635;

	t6 = ((x25<=(x26/x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	static int32_t x31 = -136706474;

	t7 = ((x29<=(x30/x31))*x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	static int32_t x34 = INT32_MIN;
	int16_t x35 = -2042;
	uint64_t x36 = UINT64_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x33<=(x34/x35))*x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 2U;
	uint16_t x43 = 1U;
	static uint16_t x44 = 3U;

	t9 = ((x41<=(x42/x43))*x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	uint8_t x46 = 4U;
	static volatile int32_t x48 = INT32_MIN;
	volatile int32_t t10 = INT32_MIN;

	t10 = ((x45<=(x46/x47))*x48);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x50 = UINT32_MAX;
	uint32_t x51 = 1U;
	static uint64_t x52 = UINT64_MAX;
	uint64_t t11 = UINT64_MAX;

	t11 = ((x49<=(x50/x51))*x52);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 46542267LLU;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = 10U;
	int16_t x56 = 87;
	volatile int32_t t12 = 1029144321;

	t12 = ((x53<=(x54/x55))*x56);

	if (t12 != 87) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x57 = INT32_MIN;
	static volatile uint32_t x59 = 1U;
	int64_t x60 = 3786981768LL;
	volatile int64_t t13 = 42795909164LL;

	t13 = ((x57<=(x58/x59))*x60);

	if (t13 != 3786981768LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	int8_t x62 = -2;
	static int64_t x63 = -13033004391998LL;
	int8_t x64 = 43;
	static int32_t t14 = -48180;

	t14 = ((x61<=(x62/x63))*x64);

	if (t14 != 43) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = 8;
	uint32_t x67 = 1653198595U;
	static int64_t x68 = -1LL;

	t15 = ((x65<=(x66/x67))*x68);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -21;
	static uint8_t x70 = UINT8_MAX;
	volatile int32_t x71 = INT32_MIN;
	int64_t x72 = -833874648681279LL;
	static volatile int64_t t16 = -2016930496061LL;

	t16 = ((x69<=(x70/x71))*x72);

	if (t16 != -833874648681279LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x74 = 3U;
	uint8_t x75 = 1U;
	int16_t x76 = INT16_MAX;
	int32_t t17 = 0;

	t17 = ((x73<=(x74/x75))*x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MAX;
	static int8_t x80 = -1;
	static volatile int32_t t18 = 136235;

	t18 = ((x77<=(x78/x79))*x80);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MIN;
	int64_t t19 = -1213592132LL;

	t19 = ((x81<=(x82/x83))*x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -1LL;
	int8_t x86 = -1;
	int16_t x87 = INT16_MIN;
	static int8_t x88 = -1;
	int32_t t20 = 1019402;

	t20 = ((x85<=(x86/x87))*x88);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = 14557106183934488LL;
	volatile uint32_t x90 = 389U;
	volatile int32_t x92 = INT32_MAX;
	int32_t t21 = -159;

	t21 = ((x89<=(x90/x91))*x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 662;
	volatile int32_t x98 = INT32_MIN;
	int8_t x100 = -59;
	int32_t t22 = 3619817;

	t22 = ((x97<=(x98/x99))*x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	int8_t x102 = -1;
	int16_t x103 = -3;
	int32_t x104 = INT32_MIN;

	t23 = ((x101<=(x102/x103))*x104);

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = 0;
	int8_t x107 = INT8_MIN;
	volatile uint64_t x108 = 3711296189752LLU;
	uint64_t t24 = 127630215944LLU;

	t24 = ((x105<=(x106/x107))*x108);

	if (t24 != 3711296189752LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MAX;
	int8_t x110 = -1;
	int32_t x112 = -68;
	static volatile int32_t t25 = 112082;

	t25 = ((x109<=(x110/x111))*x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = -1LL;
	int16_t x114 = INT16_MIN;
	volatile uint32_t x115 = 69257725U;
	int32_t x116 = INT32_MIN;
	volatile int32_t t26 = INT32_MIN;

	t26 = ((x113<=(x114/x115))*x116);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = -1;
	int16_t x118 = -220;
	uint16_t x119 = 31U;

	t27 = ((x117<=(x118/x119))*x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x124 = UINT64_MAX;
	uint64_t t28 = 1347LLU;

	t28 = ((x121<=(x122/x123))*x124);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	volatile int16_t x126 = -1;
	int16_t x127 = 53;

	t29 = ((x125<=(x126/x127))*x128);

	if (t29 != 5133512LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 1988355363921399LLU;
	static int32_t x130 = INT32_MIN;
	volatile uint64_t x131 = 1417074893LLU;
	int8_t x132 = INT8_MIN;

	t30 = ((x129<=(x130/x131))*x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x134 = 61U;
	int8_t x135 = 3;
	int8_t x136 = INT8_MIN;
	int32_t t31 = -669;

	t31 = ((x133<=(x134/x135))*x136);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x137 = INT32_MIN;
	static int32_t x138 = INT32_MIN;
	uint8_t x139 = 6U;
	int8_t x140 = -1;
	volatile int32_t t32 = 357618;

	t32 = ((x137<=(x138/x139))*x140);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x141 = 555787892LLU;
	int16_t x142 = INT16_MIN;
	static int32_t x143 = INT32_MIN;
	int8_t x144 = 2;

	t33 = ((x141<=(x142/x143))*x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x145 = INT64_MAX;
	int64_t x146 = -25801665800421LL;
	uint8_t x147 = 5U;
	static int32_t x148 = 30587340;
	volatile int32_t t34 = 3;

	t34 = ((x145<=(x146/x147))*x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = -1;
	volatile uint32_t x150 = 241475U;
	uint32_t x151 = 234U;
	int16_t x152 = 0;

	t35 = ((x149<=(x150/x151))*x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MAX;
	volatile uint16_t x154 = 1U;
	int32_t x155 = 4569;
	volatile int32_t x156 = 3;
	volatile int32_t t36 = 24956320;

	t36 = ((x153<=(x154/x155))*x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = INT16_MAX;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t37 = 5550;

	t37 = ((x157<=(x158/x159))*x160);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x161 = 88889686U;
	static volatile int64_t x162 = -1LL;
	int16_t x164 = INT16_MAX;
	int32_t t38 = -657804518;

	t38 = ((x161<=(x162/x163))*x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 23560372U;
	int8_t x167 = -8;
	static uint16_t x168 = 6U;
	static volatile int32_t t39 = 20456;

	t39 = ((x165<=(x166/x167))*x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x171 = UINT64_MAX;
	static volatile int64_t t40 = 531238527LL;

	t40 = ((x169<=(x170/x171))*x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x173 = INT16_MIN;
	uint8_t x174 = UINT8_MAX;
	uint64_t x175 = 4329391695988LLU;
	int32_t x176 = 1;
	int32_t t41 = 330546;

	t41 = ((x173<=(x174/x175))*x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 69U;
	int8_t x178 = INT8_MIN;
	int64_t x179 = -2447849929859LL;
	int8_t x180 = -1;

	t42 = ((x177<=(x178/x179))*x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x181 = -1;
	int16_t x182 = INT16_MIN;
	volatile int16_t x184 = INT16_MIN;
	int32_t t43 = -73;

	t43 = ((x181<=(x182/x183))*x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x185 = 1U;
	uint8_t x187 = UINT8_MAX;

	t44 = ((x185<=(x186/x187))*x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = 2;
	uint8_t x190 = 22U;
	int64_t x191 = INT64_MAX;
	int16_t x192 = -1;
	volatile int32_t t45 = 1;

	t45 = ((x189<=(x190/x191))*x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x193 = INT32_MIN;
	int32_t x195 = -1;
	int32_t x196 = INT32_MIN;
	volatile int32_t t46 = 64926107;

	t46 = ((x193<=(x194/x195))*x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x198 = UINT32_MAX;
	int8_t x200 = -41;
	static int32_t t47 = 140642804;

	t47 = ((x197<=(x198/x199))*x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x201 = INT32_MIN;
	int64_t x202 = -98450LL;
	static int32_t x203 = INT32_MAX;
	static volatile uint16_t x204 = 23U;
	volatile int32_t t48 = -1;

	t48 = ((x201<=(x202/x203))*x204);

	if (t48 != 23) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = INT64_MIN;
	static int8_t x207 = INT8_MIN;
	volatile int16_t x208 = -6441;
	int32_t t49 = -155757;

	t49 = ((x205<=(x206/x207))*x208);

	if (t49 != -6441) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x209 = 1U;
	int8_t x210 = INT8_MAX;
	int8_t x211 = -1;
	volatile int64_t t50 = 0LL;

	t50 = ((x209<=(x210/x211))*x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = -1LL;
	int32_t x215 = 622;
	int64_t x216 = INT64_MIN;
	int64_t t51 = INT64_MIN;

	t51 = ((x213<=(x214/x215))*x216);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x219 = 458088U;
	int32_t x220 = -1;
	volatile int32_t t52 = -4019;

	t52 = ((x217<=(x218/x219))*x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x221 = UINT8_MAX;
	volatile int8_t x222 = -1;
	int8_t x223 = INT8_MIN;
	int16_t x224 = -1;

	t53 = ((x221<=(x222/x223))*x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = -8095568LL;
	static int16_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x225<=(x226/x227))*x228);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 1014U;
	volatile int32_t t55 = 1378;

	t55 = ((x229<=(x230/x231))*x232);

	if (t55 != 1014) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x234 = INT16_MIN;
	volatile int64_t t56 = 847780199200174LL;

	t56 = ((x233<=(x234/x235))*x236);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x237 = 4U;
	uint8_t x238 = 0U;
	volatile int32_t x239 = -1;
	int8_t x240 = -12;
	volatile int32_t t57 = -284;

	t57 = ((x237<=(x238/x239))*x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = -248324115;
	volatile int8_t x244 = INT8_MIN;

	t58 = ((x241<=(x242/x243))*x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x245 = INT8_MAX;
	uint64_t x246 = 720333LLU;
	int8_t x248 = INT8_MIN;
	volatile int32_t t59 = 494457707;

	t59 = ((x245<=(x246/x247))*x248);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 297707239344006590LLU;
	int8_t x250 = -21;
	int16_t x252 = INT16_MAX;
	volatile int32_t t60 = -279;

	t60 = ((x249<=(x250/x251))*x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x254 = UINT32_MAX;
	static uint32_t x255 = 3U;
	volatile int16_t x256 = 10;
	volatile int32_t t61 = 2739532;

	t61 = ((x253<=(x254/x255))*x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x258 = -1;
	int32_t x259 = 20144428;
	int64_t x260 = INT64_MIN;
	volatile int64_t t62 = INT64_MIN;

	t62 = ((x257<=(x258/x259))*x260);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = INT8_MIN;
	int8_t x262 = INT8_MIN;
	int32_t x263 = -1083213;
	int16_t x264 = -1;
	volatile int32_t t63 = -97;

	t63 = ((x261<=(x262/x263))*x264);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x265 = 45749645LLU;
	static int16_t x266 = INT16_MAX;
	int8_t x267 = -1;
	volatile uint16_t x268 = 538U;
	int32_t t64 = -392172958;

	t64 = ((x265<=(x266/x267))*x268);

	if (t64 != 538) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x269 = -1;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = 0U;
	volatile int32_t t65 = -318;

	t65 = ((x269<=(x270/x271))*x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = -478915566230LL;
	uint8_t x274 = UINT8_MAX;
	int8_t x275 = INT8_MAX;
	volatile int32_t t66 = INT32_MAX;

	t66 = ((x273<=(x274/x275))*x276);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x277 = INT64_MAX;
	int16_t x278 = INT16_MAX;
	volatile int16_t x279 = INT16_MAX;
	int8_t x280 = INT8_MIN;
	static int32_t t67 = 29681;

	t67 = ((x277<=(x278/x279))*x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x281 = INT64_MAX;
	int64_t x283 = -57304307LL;
	static int32_t t68 = 197328;

	t68 = ((x281<=(x282/x283))*x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x285 = 58U;
	static int64_t x286 = 367264825359579LL;
	static uint16_t x288 = UINT16_MAX;

	t69 = ((x285<=(x286/x287))*x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MAX;
	int8_t x291 = INT8_MIN;

	t70 = ((x289<=(x290/x291))*x292);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x294 = 30625835LL;
	uint8_t x296 = 124U;
	int32_t t71 = 2;

	t71 = ((x293<=(x294/x295))*x296);

	if (t71 != 124) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = INT16_MIN;
	int8_t x299 = -1;
	int32_t x300 = -1;

	t72 = ((x297<=(x298/x299))*x300);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x302 = 169012735716125051LLU;
	uint16_t x303 = 33U;
	static uint64_t x304 = 138612974379933LLU;
	volatile uint64_t t73 = 4958234591505582LLU;

	t73 = ((x301<=(x302/x303))*x304);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x307 = INT32_MAX;
	volatile int32_t x308 = INT32_MAX;
	int32_t t74 = INT32_MAX;

	t74 = ((x305<=(x306/x307))*x308);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	volatile int64_t x310 = -1LL;
	int16_t x311 = INT16_MAX;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t75 = 8151;

	t75 = ((x309<=(x310/x311))*x312);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = 5U;
	uint8_t x316 = UINT8_MAX;
	int32_t t76 = 157;

	t76 = ((x313<=(x314/x315))*x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x319 = INT64_MAX;
	static int32_t x320 = INT32_MAX;
	static volatile int32_t t77 = -6;

	t77 = ((x317<=(x318/x319))*x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = 46247LL;
	static uint32_t x323 = 47U;
	int8_t x324 = INT8_MIN;
	int32_t t78 = -10677784;

	t78 = ((x321<=(x322/x323))*x324);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x325 = 1U;
	int8_t x326 = 0;
	volatile int8_t x327 = INT8_MIN;
	volatile uint16_t x328 = UINT16_MAX;

	t79 = ((x325<=(x326/x327))*x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x329 = 13327593LLU;
	int64_t x330 = -1LL;
	static int8_t x331 = -1;
	static int32_t x332 = INT32_MAX;
	static int32_t t80 = -3772;

	t80 = ((x329<=(x330/x331))*x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1861994948882509002LL;
	int16_t x335 = INT16_MIN;
	static uint64_t x336 = UINT64_MAX;
	static volatile uint64_t t81 = UINT64_MAX;

	t81 = ((x333<=(x334/x335))*x336);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x337 = INT8_MAX;
	static int32_t x338 = INT32_MIN;
	volatile int32_t x339 = -1057267564;
	int32_t x340 = INT32_MAX;
	int32_t t82 = 144;

	t82 = ((x337<=(x338/x339))*x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = 2027168036054280LL;
	int64_t x342 = INT64_MAX;
	int64_t x343 = -115510LL;
	int32_t t83 = -4516;

	t83 = ((x341<=(x342/x343))*x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MIN;
	int16_t x348 = -5980;
	volatile int32_t t84 = -274830664;

	t84 = ((x345<=(x346/x347))*x348);

	if (t84 != -5980) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = 4U;
	uint8_t x350 = UINT8_MAX;
	int64_t x352 = INT64_MAX;
	volatile int64_t t85 = 11880965211754LL;

	t85 = ((x349<=(x350/x351))*x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = UINT32_MAX;
	static uint32_t x354 = 4U;
	static int64_t x355 = -39565LL;
	uint16_t x356 = UINT16_MAX;
	static volatile int32_t t86 = 9411948;

	t86 = ((x353<=(x354/x355))*x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x359 = -3;
	uint16_t x360 = 4U;

	t87 = ((x357<=(x358/x359))*x360);

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -117060986LL;
	uint16_t x362 = 62U;
	int64_t x363 = INT64_MAX;
	static int16_t x364 = INT16_MIN;
	static int32_t t88 = -142542;

	t88 = ((x361<=(x362/x363))*x364);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x365 = 22211LLU;
	static int8_t x367 = 24;
	int8_t x368 = INT8_MIN;
	int32_t t89 = 7521;

	t89 = ((x365<=(x366/x367))*x368);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MAX;
	int64_t x372 = -10530904409LL;
	int64_t t90 = -217LL;

	t90 = ((x369<=(x370/x371))*x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x373 = 29255U;
	uint8_t x376 = 23U;

	t91 = ((x373<=(x374/x375))*x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x378 = -1;
	static volatile int32_t x379 = 1420973;
	uint8_t x380 = 1U;
	volatile int32_t t92 = 13285;

	t92 = ((x377<=(x378/x379))*x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x381 = UINT8_MAX;
	int32_t x383 = INT32_MIN;

	t93 = ((x381<=(x382/x383))*x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = INT16_MIN;
	int16_t x386 = 232;
	uint64_t x388 = 2LLU;
	volatile uint64_t t94 = 1355614LLU;

	t94 = ((x385<=(x386/x387))*x388);

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = 324;
	volatile int8_t x391 = -1;
	uint16_t x392 = 26510U;
	volatile int32_t t95 = 1845;

	t95 = ((x389<=(x390/x391))*x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x395 = -1;
	int32_t x396 = INT32_MIN;
	int32_t t96 = INT32_MIN;

	t96 = ((x393<=(x394/x395))*x396);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x398 = UINT32_MAX;
	static int32_t x399 = INT32_MIN;
	uint8_t x400 = 60U;
	int32_t t97 = -525708221;

	t97 = ((x397<=(x398/x399))*x400);

	if (t97 != 60) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = 62U;
	static uint16_t x402 = 28312U;
	int32_t x403 = 19;
	uint16_t x404 = UINT16_MAX;

	t98 = ((x401<=(x402/x403))*x404);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x406 = INT64_MIN;
	uint64_t x408 = 87587621LLU;
	static volatile uint64_t t99 = 265235052LLU;

	t99 = ((x405<=(x406/x407))*x408);

	if (t99 != 87587621LLU) { NG(); } else { ; }
	
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

