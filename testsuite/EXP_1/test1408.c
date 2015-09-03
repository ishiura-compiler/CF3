#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MAX;
uint64_t x9 = UINT64_MAX;
int32_t x11 = INT32_MIN;
int32_t x12 = -1;
static int32_t t2 = -9258;
static volatile int16_t x14 = -1;
static int16_t x17 = 145;
int8_t x20 = INT8_MIN;
int8_t x21 = 3;
volatile int16_t x26 = INT16_MAX;
static int32_t t6 = 7648;
int8_t x30 = 1;
volatile int32_t x39 = -1;
static uint16_t x49 = 889U;
int32_t x50 = INT32_MIN;
static volatile uint32_t t12 = 294U;
uint32_t x57 = UINT32_MAX;
static int64_t x62 = -1019201517580LL;
uint16_t x67 = 7U;
int32_t t16 = -18205;
uint8_t x81 = 77U;
volatile int8_t x85 = 6;
int8_t x87 = INT8_MIN;
int8_t x88 = INT8_MAX;
volatile int32_t t20 = 31;
uint16_t x89 = UINT16_MAX;
int16_t x100 = -1;
uint32_t t23 = 14U;
int8_t x102 = -1;
int64_t x104 = INT64_MIN;
int16_t x110 = INT16_MIN;
static volatile int64_t t26 = -1025472786504659235LL;
int64_t x123 = INT64_MIN;
int64_t x124 = INT64_MIN;
int64_t x126 = -31043754959LL;
volatile int64_t t30 = -1775LL;
int16_t x132 = INT16_MIN;
int8_t x137 = INT8_MAX;
static volatile uint64_t t33 = 245928960LLU;
int64_t x145 = -4289685542244413LL;
uint16_t x146 = 2144U;
int16_t x147 = INT16_MIN;
static int32_t x156 = INT32_MIN;
volatile int64_t t38 = -4485348137011314LL;
int64_t x162 = INT64_MIN;
int32_t x170 = -1;
int64_t x175 = INT64_MIN;
uint8_t x185 = 3U;
volatile int8_t x187 = INT8_MIN;
volatile uint8_t x193 = 0U;
uint16_t x196 = 12U;
int64_t x197 = -1LL;
static int8_t x199 = -1;
volatile int32_t t47 = 4328;
uint8_t x201 = 1U;
volatile int32_t t49 = -1;
static int64_t x210 = INT64_MIN;
static uint8_t x214 = 27U;
int32_t t51 = 669332845;
uint16_t x219 = 25U;
volatile int16_t x221 = INT16_MIN;
static uint32_t x222 = 726828U;
uint32_t x223 = UINT32_MAX;
static int16_t x225 = INT16_MIN;
int64_t x228 = 855959411426947LL;
static uint64_t x248 = UINT64_MAX;
uint64_t x251 = UINT64_MAX;
uint32_t x253 = UINT32_MAX;
volatile int64_t x256 = -1LL;
uint64_t t61 = 1LLU;
static volatile uint64_t x259 = 1LLU;
static int8_t x263 = -1;
volatile int32_t t63 = 0;
int16_t x277 = INT16_MIN;
int32_t x281 = INT32_MIN;
static int16_t x288 = -1;
int16_t x317 = 1;
int16_t x318 = INT16_MIN;
volatile int64_t t75 = -8105339LL;
volatile uint16_t x330 = UINT16_MAX;
static uint64_t x333 = 1336055LLU;
static volatile uint32_t x336 = 2U;
uint32_t t81 = 18221U;
int64_t x360 = -22313770611170LL;
volatile uint16_t x363 = 28U;
static uint32_t x376 = 1U;
static int64_t x378 = INT64_MIN;
int8_t x381 = INT8_MIN;
volatile uint64_t x386 = 33094143LLU;
static volatile int32_t x388 = 477046;
volatile uint32_t x396 = 3563144U;
uint32_t t92 = 1133117099U;
uint16_t x399 = UINT16_MAX;
volatile int64_t t93 = 68LL;
uint64_t x401 = 876LLU;
int8_t x404 = INT8_MAX;
int16_t x405 = -1;
static volatile int32_t x408 = INT32_MIN;
int32_t x413 = -15;


void f0(void) {
	uint8_t x1 = 1U;
	int64_t x2 = -1LL;
	uint8_t x3 = 3U;
	volatile uint16_t x4 = 12556U;
	volatile int32_t t0 = 6823734;

	t0 = (((x1<x2)%x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1297U;
	uint64_t x6 = 6970LLU;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = 2226657;

	t1 = (((x5<x6)%x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = -1;

	t2 = (((x9<x10)%x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x15 = 126548777139940598LLU;
	static uint16_t x16 = 291U;
	static uint64_t t3 = 1344326134LLU;

	t3 = (((x13<x14)%x15)/x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	static int64_t x19 = INT64_MAX;
	int64_t t4 = 1275366808059LL;

	t4 = (((x17<x18)%x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	uint16_t x23 = 38U;
	volatile uint32_t x24 = 6565U;
	volatile uint32_t t5 = 1435U;

	t5 = (((x21<x22)%x23)/x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -3;
	int8_t x27 = INT8_MAX;
	volatile int16_t x28 = -1;

	t6 = (((x25<x26)%x27)/x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	static uint32_t x31 = 2116841963U;
	uint8_t x32 = 8U;
	uint32_t t7 = 15933U;

	t7 = (((x29<x30)%x31)/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 1U;
	int64_t x34 = -1LL;
	int8_t x35 = 15;
	static volatile int64_t x36 = -1LL;
	int64_t t8 = -1653402919253LL;

	t8 = (((x33<x34)%x35)/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	uint64_t x38 = UINT64_MAX;
	static uint16_t x40 = 2U;
	volatile int32_t t9 = -1;

	t9 = (((x37<x38)%x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	volatile int16_t x42 = -1;
	int8_t x43 = INT8_MAX;
	volatile uint64_t x44 = 261187799788LLU;
	uint64_t t10 = 11946352LLU;

	t10 = (((x41<x42)%x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	int32_t x46 = -1;
	static uint16_t x47 = UINT16_MAX;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 25660704161LLU;

	t11 = (((x45<x46)%x47)/x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x51 = 642535163U;
	static int16_t x52 = -1;

	t12 = (((x49<x50)%x51)/x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = 19454633U;
	static uint8_t x59 = 1U;
	uint8_t x60 = 58U;
	volatile int32_t t13 = 3537;

	t13 = (((x57<x58)%x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 503824252U;
	int32_t x63 = 1;
	int16_t x64 = INT16_MIN;
	volatile int32_t t14 = -95996238;

	t14 = (((x61<x62)%x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	int64_t x66 = -52495344992383LL;
	int16_t x68 = -1;
	static int32_t t15 = -1;

	t15 = (((x65<x66)%x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = 439903;
	volatile int32_t x70 = -1;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MIN;

	t16 = (((x69<x70)%x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	volatile uint8_t x74 = 14U;
	static int16_t x75 = -1;
	uint64_t x76 = 163978161408LLU;
	volatile uint64_t t17 = 421LLU;

	t17 = (((x73<x74)%x75)/x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x77 = INT64_MIN;
	uint16_t x78 = 10U;
	uint16_t x79 = 2U;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t18 = -12;

	t18 = (((x77<x78)%x79)/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x82 = 967935;
	volatile int32_t x83 = INT32_MIN;
	uint16_t x84 = 30865U;
	int32_t t19 = -105702;

	t19 = (((x81<x82)%x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = INT32_MIN;

	t20 = (((x85<x86)%x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = INT32_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t21 = 16766921;

	t21 = (((x89<x90)%x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x93 = UINT8_MAX;
	static int32_t x94 = 510953021;
	static uint32_t x95 = 324604801U;
	static uint32_t x96 = 14648U;
	volatile uint32_t t22 = 15330U;

	t22 = (((x93<x94)%x95)/x96);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	int64_t x98 = -1LL;
	volatile uint32_t x99 = UINT32_MAX;

	t23 = (((x97<x98)%x99)/x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = 61087610;
	volatile int16_t x103 = -1;
	static int64_t t24 = 35880810205LL;

	t24 = (((x101<x102)%x103)/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = UINT16_MAX;
	int8_t x106 = -13;
	static int64_t x107 = INT64_MAX;
	int8_t x108 = INT8_MIN;
	volatile int64_t t25 = 393LL;

	t25 = (((x105<x106)%x107)/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x109 = 0;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MAX;

	t26 = (((x109<x110)%x111)/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 1222227275118LLU;
	volatile int64_t x114 = -36087797800123500LL;
	int16_t x115 = -1;
	int8_t x116 = INT8_MIN;
	volatile int32_t t27 = 0;

	t27 = (((x113<x114)%x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 1U;
	int32_t x118 = INT32_MIN;
	int8_t x119 = -1;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t28 = 62304;

	t28 = (((x117<x118)%x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -1LL;
	uint8_t x122 = 120U;
	int64_t t29 = 3875004143LL;

	t29 = (((x121<x122)%x123)/x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	int8_t x127 = -1;
	int64_t x128 = INT64_MIN;

	t30 = (((x125<x126)%x127)/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	int64_t x130 = INT64_MIN;
	int64_t x131 = 1468456512294LL;
	int64_t t31 = -1886010LL;

	t31 = (((x129<x130)%x131)/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MAX;
	static int8_t x134 = INT8_MAX;
	int32_t x135 = 1;
	static uint64_t x136 = 504LLU;
	static volatile uint64_t t32 = 2065217657176LLU;

	t32 = (((x133<x134)%x135)/x136);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x138 = 5U;
	uint32_t x139 = 26U;
	static uint64_t x140 = 4195151LLU;

	t33 = (((x137<x138)%x139)/x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = 6643309;
	static volatile int32_t t34 = 488722;

	t34 = (((x141<x142)%x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x148 = 1U;
	volatile int32_t t35 = 31020;

	t35 = (((x145<x146)%x147)/x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 218273848911362428LL;
	uint8_t x150 = UINT8_MAX;
	uint8_t x151 = UINT8_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t36 = 255U;

	t36 = (((x149<x150)%x151)/x152);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 1U;
	static uint32_t x154 = 51259U;
	int16_t x155 = -1;
	volatile int32_t t37 = -97015890;

	t37 = (((x153<x154)%x155)/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x157 = UINT64_MAX;
	uint8_t x158 = UINT8_MAX;
	static int16_t x159 = -1;
	int64_t x160 = -1LL;

	t38 = (((x157<x158)%x159)/x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 64394516U;
	static int8_t x163 = INT8_MIN;
	static uint32_t x164 = 168626U;
	volatile uint32_t t39 = 9130U;

	t39 = (((x161<x162)%x163)/x164);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = INT8_MIN;
	static int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = 2U;
	int32_t t40 = 1;

	t40 = (((x165<x166)%x167)/x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = 17U;
	int64_t x171 = -6597527LL;
	static int16_t x172 = -1;
	int64_t t41 = -29LL;

	t41 = (((x169<x170)%x171)/x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = INT8_MIN;
	volatile uint8_t x174 = 0U;
	int8_t x176 = INT8_MIN;
	volatile int64_t t42 = -852036342LL;

	t42 = (((x173<x174)%x175)/x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = 0U;
	uint16_t x178 = 501U;
	static int8_t x179 = 5;
	uint64_t x180 = 68048208LLU;
	volatile uint64_t t43 = 111000712LLU;

	t43 = (((x177<x178)%x179)/x180);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x181 = 4751736U;
	uint64_t x182 = 32672LLU;
	static int32_t x183 = INT32_MIN;
	volatile int32_t x184 = 427807;
	int32_t t44 = -90666037;

	t44 = (((x181<x182)%x183)/x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x186 = INT64_MIN;
	uint16_t x188 = 9530U;
	volatile int32_t t45 = 76862305;

	t45 = (((x185<x186)%x187)/x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x194 = UINT16_MAX;
	uint64_t x195 = UINT64_MAX;
	uint64_t t46 = 53003866LLU;

	t46 = (((x193<x194)%x195)/x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x198 = -4;
	volatile uint16_t x200 = UINT16_MAX;

	t47 = (((x197<x198)%x199)/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x202 = 1683210368U;
	volatile int16_t x203 = 1;
	static int32_t x204 = INT32_MAX;
	int32_t t48 = 2559132;

	t48 = (((x201<x202)%x203)/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = 1;
	int16_t x206 = INT16_MAX;
	static int32_t x207 = -1;
	int16_t x208 = INT16_MIN;

	t49 = (((x205<x206)%x207)/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x211 = -140800;
	volatile uint16_t x212 = UINT16_MAX;
	volatile int32_t t50 = -138321;

	t50 = (((x209<x210)%x211)/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = 1;
	static int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MAX;

	t51 = (((x213<x214)%x215)/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x217 = 11902U;
	volatile int64_t x218 = INT64_MIN;
	int32_t x220 = 2560096;
	int32_t t52 = -13549;

	t52 = (((x217<x218)%x219)/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x224 = INT16_MIN;
	uint32_t t53 = 89U;

	t53 = (((x221<x222)%x223)/x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x226 = -3;
	volatile int64_t x227 = INT64_MIN;
	static int64_t t54 = -115852068LL;

	t54 = (((x225<x226)%x227)/x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = 6;
	uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 1LLU;
	uint32_t x232 = UINT32_MAX;
	uint64_t t55 = 660217LLU;

	t55 = (((x229<x230)%x231)/x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = UINT8_MAX;
	static volatile uint16_t x235 = 62U;
	int8_t x236 = 1;
	static int32_t t56 = -59577983;

	t56 = (((x233<x234)%x235)/x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = 235518534306224LL;
	int16_t x238 = 103;
	int8_t x239 = INT8_MAX;
	int64_t x240 = -53534268LL;
	static int64_t t57 = -370777263LL;

	t57 = (((x237<x238)%x239)/x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	volatile uint16_t x242 = UINT16_MAX;
	uint32_t x243 = 2185200U;
	int16_t x244 = 3837;
	uint32_t t58 = 243356666U;

	t58 = (((x241<x242)%x243)/x244);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = 1;
	uint32_t x246 = 2183U;
	int8_t x247 = INT8_MIN;
	static volatile uint64_t t59 = 1138LLU;

	t59 = (((x245<x246)%x247)/x248);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MAX;
	int8_t x250 = 20;
	int16_t x252 = -2128;
	volatile uint64_t t60 = 1352LLU;

	t60 = (((x249<x250)%x251)/x252);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x254 = 123589642U;
	uint64_t x255 = UINT64_MAX;

	t61 = (((x253<x254)%x255)/x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x257 = 328453829905LLU;
	int16_t x258 = INT16_MAX;
	int8_t x260 = INT8_MAX;
	volatile uint64_t t62 = 14784LLU;

	t62 = (((x257<x258)%x259)/x260);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = -10LL;
	volatile int16_t x262 = -222;
	int8_t x264 = 60;

	t63 = (((x261<x262)%x263)/x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 12933U;
	uint32_t x266 = 96017U;
	static int8_t x267 = 26;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t64 = 11802;

	t64 = (((x265<x266)%x267)/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MAX;
	uint16_t x270 = 2U;
	volatile int32_t x271 = -3111;
	static uint32_t x272 = UINT32_MAX;
	static volatile uint32_t t65 = 1039075U;

	t65 = (((x269<x270)%x271)/x272);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x273 = INT32_MIN;
	int8_t x274 = -1;
	int64_t x275 = -1LL;
	int32_t x276 = -47678;
	static volatile int64_t t66 = 2392LL;

	t66 = (((x273<x274)%x275)/x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = 106887LL;
	volatile uint64_t x279 = 2308792LLU;
	uint64_t x280 = UINT64_MAX;
	uint64_t t67 = 20221896242714402LLU;

	t67 = (((x277<x278)%x279)/x280);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x282 = 44U;
	uint16_t x283 = 44U;
	volatile int32_t x284 = INT32_MIN;
	int32_t t68 = -312453601;

	t68 = (((x281<x282)%x283)/x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 120LLU;
	uint16_t x286 = 0U;
	int32_t x287 = -96684;
	static int32_t t69 = 1024967372;

	t69 = (((x285<x286)%x287)/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x289 = -354;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MIN;
	volatile int16_t x292 = -2277;
	int32_t t70 = -13335097;

	t70 = (((x289<x290)%x291)/x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = -1;
	uint8_t x298 = 32U;
	int16_t x299 = INT16_MIN;
	static volatile uint8_t x300 = 52U;
	volatile int32_t t71 = 1476;

	t71 = (((x297<x298)%x299)/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MIN;
	uint16_t x302 = 6799U;
	int32_t x303 = INT32_MIN;
	uint64_t x304 = UINT64_MAX;
	uint64_t t72 = 517664LLU;

	t72 = (((x301<x302)%x303)/x304);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = -1LL;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = -1;
	int64_t x308 = 4673075753LL;
	static int64_t t73 = -2231834487848328199LL;

	t73 = (((x305<x306)%x307)/x308);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = 3013;
	volatile int32_t x314 = 1;
	volatile uint32_t x315 = 50071720U;
	static int8_t x316 = 51;
	uint32_t t74 = 218716191U;

	t74 = (((x313<x314)%x315)/x316);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x319 = -2206035829264846LL;
	static int16_t x320 = -1;

	t75 = (((x317<x318)%x319)/x320);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = 5U;
	static uint32_t x322 = 868264078U;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = INT8_MAX;
	volatile int32_t t76 = -1;

	t76 = (((x321<x322)%x323)/x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MAX;
	volatile int32_t x327 = -1;
	static int64_t x328 = -17420LL;
	int64_t t77 = -2671263555721745841LL;

	t77 = (((x325<x326)%x327)/x328);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = -1;
	int32_t x331 = -33637;
	uint32_t x332 = UINT32_MAX;
	static volatile uint32_t t78 = 765769735U;

	t78 = (((x329<x330)%x331)/x332);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x334 = 3LLU;
	int32_t x335 = INT32_MAX;
	volatile uint32_t t79 = 360494168U;

	t79 = (((x333<x334)%x335)/x336);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 51U;
	volatile int16_t x338 = 2;
	volatile int64_t x339 = INT64_MAX;
	static uint32_t x340 = UINT32_MAX;
	int64_t t80 = 3895118LL;

	t80 = (((x337<x338)%x339)/x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x341 = -10;
	int64_t x342 = INT64_MIN;
	uint32_t x343 = 42U;
	volatile int16_t x344 = INT16_MIN;

	t81 = (((x341<x342)%x343)/x344);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	int16_t x347 = -251;
	uint32_t x348 = UINT32_MAX;
	uint32_t t82 = 641561U;

	t82 = (((x345<x346)%x347)/x348);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 18U;
	int32_t x350 = 3732501;
	uint8_t x351 = UINT8_MAX;
	volatile int64_t x352 = -1LL;
	int64_t t83 = 3230LL;

	t83 = (((x349<x350)%x351)/x352);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	volatile int64_t x356 = 103444375776LL;
	int64_t t84 = 142197012301029261LL;

	t84 = (((x353<x354)%x355)/x356);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x357 = 487U;
	volatile uint16_t x358 = UINT16_MAX;
	int64_t x359 = -1LL;
	int64_t t85 = 2137LL;

	t85 = (((x357<x358)%x359)/x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = -1;
	int32_t x362 = INT32_MIN;
	static int32_t x364 = 1471;
	int32_t t86 = -12;

	t86 = (((x361<x362)%x363)/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = INT64_MAX;
	static volatile int8_t x374 = INT8_MIN;
	static int8_t x375 = 57;
	uint32_t t87 = 10U;

	t87 = (((x373<x374)%x375)/x376);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x377 = 4;
	uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MIN;
	volatile int64_t t88 = 672LL;

	t88 = (((x377<x378)%x379)/x380);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x382 = INT8_MAX;
	uint8_t x383 = UINT8_MAX;
	static int8_t x384 = -1;
	int32_t t89 = 63689251;

	t89 = (((x381<x382)%x383)/x384);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = -1;
	int16_t x387 = -34;
	int32_t t90 = -2;

	t90 = (((x385<x386)%x387)/x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x390 = 49U;
	int64_t x391 = 32415LL;
	volatile int16_t x392 = -1;
	volatile int64_t t91 = 13432LL;

	t91 = (((x389<x390)%x391)/x392);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x393 = -1LL;
	volatile uint32_t x394 = 85814973U;
	static int8_t x395 = INT8_MIN;

	t92 = (((x393<x394)%x395)/x396);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = INT32_MIN;
	volatile int16_t x398 = INT16_MAX;
	int64_t x400 = -1LL;

	t93 = (((x397<x398)%x399)/x400);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x402 = 197U;
	volatile uint64_t x403 = UINT64_MAX;
	uint64_t t94 = 279670614787935LLU;

	t94 = (((x401<x402)%x403)/x404);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x406 = UINT8_MAX;
	volatile uint32_t x407 = 412221797U;
	uint32_t t95 = 1946470077U;

	t95 = (((x405<x406)%x407)/x408);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x409 = 15U;
	int16_t x410 = 49;
	uint16_t x411 = 5U;
	uint64_t x412 = 13792LLU;
	static volatile uint64_t t96 = 549153355297LLU;

	t96 = (((x409<x410)%x411)/x412);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MIN;
	int32_t t97 = -575;

	t97 = (((x413<x414)%x415)/x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x417 = 11290219805697LLU;
	int8_t x418 = 36;
	int64_t x419 = INT64_MIN;
	static int64_t x420 = -784380LL;
	int64_t t98 = 3333732963807818LL;

	t98 = (((x417<x418)%x419)/x420);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int32_t x422 = INT32_MIN;
	int8_t x423 = 7;
	volatile uint8_t x424 = 111U;
	volatile int32_t t99 = 1;

	t99 = (((x421<x422)%x423)/x424);

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

