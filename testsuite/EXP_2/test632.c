#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 374352719;
volatile uint32_t x5 = 1951073600U;
int16_t x8 = -12308;
static int32_t x12 = INT32_MAX;
uint16_t x22 = 13U;
volatile int32_t t5 = -1725;
uint64_t x30 = UINT64_MAX;
uint16_t x31 = UINT16_MAX;
volatile int32_t t8 = 89063719;
int64_t x52 = -86820405237LL;
int64_t x61 = INT64_MIN;
int16_t x66 = INT16_MIN;
static uint32_t x76 = 1U;
static volatile int16_t x80 = INT16_MIN;
volatile int32_t t18 = 1;
int32_t x89 = -1;
int16_t x101 = INT16_MAX;
int8_t x104 = 0;
static int64_t x106 = -1LL;
int16_t x107 = -865;
volatile int64_t x109 = 57418LL;
static volatile uint8_t x119 = 26U;
int16_t x122 = -557;
volatile uint16_t x128 = UINT16_MAX;
static volatile int32_t t31 = 252750009;
int8_t x138 = INT8_MAX;
static int32_t t33 = 1961443;
int32_t t34 = 1005923954;
int32_t t35 = -3;
uint8_t x151 = UINT8_MAX;
volatile int16_t x152 = INT16_MIN;
int64_t x154 = INT64_MIN;
volatile int32_t x156 = -1;
int32_t x160 = INT32_MIN;
int16_t x163 = -9801;
uint16_t x165 = 4U;
uint64_t x171 = 42505835203176113LLU;
int32_t x172 = -129173077;
int32_t t41 = 15572481;
static int16_t x173 = INT16_MIN;
static int16_t x177 = INT16_MAX;
int32_t x180 = -1;
uint16_t x183 = 7199U;
uint64_t x190 = 353977238841197521LLU;
int32_t x192 = INT32_MIN;
int32_t t47 = 192;
int64_t x200 = INT64_MIN;
int64_t x206 = -1LL;
volatile int64_t x211 = -1LL;
int32_t t50 = -583320;
int32_t t51 = 4;
int32_t x224 = INT32_MAX;
static int64_t x231 = -1LL;
static int32_t t54 = 102912;
uint32_t x235 = 377U;
volatile int32_t t57 = -1;
uint32_t x249 = UINT32_MAX;
uint8_t x253 = UINT8_MAX;
int32_t x262 = INT32_MAX;
static int32_t x265 = -1;
int32_t x267 = INT32_MIN;
int64_t x269 = -36804LL;
static int16_t x277 = -1;
uint8_t x284 = 0U;
volatile uint16_t x288 = UINT16_MAX;
int32_t t69 = -319;
int16_t x298 = INT16_MIN;
static int32_t x304 = -127;
uint32_t x309 = UINT32_MAX;
static volatile int8_t x316 = -1;
uint64_t x319 = 3633014LLU;
uint8_t x321 = 21U;
volatile int32_t t76 = 197;
uint32_t x325 = 8725U;
volatile int32_t t82 = -38;
int16_t x353 = INT16_MAX;
volatile uint32_t x357 = 4762381U;
int32_t t84 = 3632;
int64_t x367 = INT64_MAX;
static int16_t x369 = -1;
int64_t x378 = -1519040624LL;
volatile int32_t t89 = 3258;
uint64_t x382 = 2202879226854273LLU;
static uint16_t x384 = UINT16_MAX;
static volatile int32_t t92 = 14276;
volatile int32_t t95 = -12;
int64_t x408 = 1831174708147LL;
int32_t t97 = 521154583;
volatile int16_t x415 = INT16_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MIN;
	int32_t x3 = 232310;
	uint16_t x4 = UINT16_MAX;

	t0 = ((x1<=(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = -1LL;
	volatile int8_t x7 = -15;
	volatile int32_t t1 = -49;

	t1 = ((x5<=(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 8U;
	static uint32_t x10 = 1165U;
	int16_t x11 = INT16_MIN;
	int32_t t2 = 3;

	t2 = ((x9<=(x10/x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int32_t x14 = INT32_MIN;
	uint8_t x15 = 20U;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -70;

	t3 = ((x13<=(x14/x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 5U;
	int16_t x18 = -1;
	int64_t x19 = 5844055678496LL;
	int32_t x20 = -1;
	int32_t t4 = 322;

	t4 = ((x17<=(x18/x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static int16_t x23 = INT16_MIN;
	uint8_t x24 = 82U;

	t5 = ((x21<=(x22/x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 44U;
	volatile int8_t x26 = INT8_MAX;
	int8_t x27 = INT8_MIN;
	int16_t x28 = 7;
	volatile int32_t t6 = 53;

	t6 = ((x25<=(x26/x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -349;
	int64_t x32 = 314LL;
	static volatile int32_t t7 = 1;

	t7 = ((x29<=(x30/x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	static int64_t x38 = -1LL;
	uint8_t x39 = UINT8_MAX;
	uint32_t x40 = 125721U;

	t8 = ((x37<=(x38/x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = 62;
	int16_t x43 = 20;
	uint64_t x44 = 272490030991852LLU;
	volatile int32_t t9 = -199142064;

	t9 = ((x41<=(x42/x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = -1LL;
	static volatile int64_t x47 = -63969735041LL;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = 118063684;

	t10 = ((x45<=(x46/x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MIN;
	int8_t x51 = -20;
	int32_t t11 = -1492;

	t11 = ((x49<=(x50/x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 59;
	uint64_t x54 = 987493839LLU;
	static int32_t x55 = 79768;
	int64_t x56 = INT64_MIN;
	volatile int32_t t12 = 27422;

	t12 = ((x53<=(x54/x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -1LL;
	uint8_t x58 = 24U;
	volatile int8_t x59 = INT8_MIN;
	static volatile int64_t x60 = INT64_MIN;
	int32_t t13 = 0;

	t13 = ((x57<=(x58/x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x62 = -1;
	static volatile int16_t x63 = 1;
	volatile int64_t x64 = -414LL;
	int32_t t14 = 979181;

	t14 = ((x61<=(x62/x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 34;
	static int16_t x67 = -1;
	int16_t x68 = INT16_MIN;
	int32_t t15 = 10;

	t15 = ((x65<=(x66/x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	volatile uint32_t x70 = 81242U;
	uint64_t x71 = 66081159LLU;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = -546895710;

	t16 = ((x69<=(x70/x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MIN;
	static uint16_t x74 = 830U;
	volatile uint64_t x75 = 1501990310390530179LLU;
	int32_t t17 = -20703887;

	t17 = ((x73<=(x74/x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = -7151LL;
	static uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MIN;

	t18 = ((x77<=(x78/x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	int64_t x82 = -10597576390992LL;
	static volatile int16_t x83 = 22;
	static volatile uint64_t x84 = 66115450614732LLU;
	volatile int32_t t19 = -259714280;

	t19 = ((x81<=(x82/x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -16;
	static volatile int64_t x86 = INT64_MAX;
	int16_t x87 = -2;
	int8_t x88 = 1;
	volatile int32_t t20 = -6;

	t20 = ((x85<=(x86/x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = 6;
	uint64_t x91 = 7403281677118LLU;
	int16_t x92 = -1;
	volatile int32_t t21 = -105;

	t21 = ((x89<=(x90/x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int64_t x96 = -1LL;
	int32_t t22 = 1909167;

	t22 = ((x93<=(x94/x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = 51856;
	uint32_t x99 = 3085253U;
	static int32_t x100 = INT32_MIN;
	int32_t t23 = -434938;

	t23 = ((x97<=(x98/x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = INT64_MIN;
	uint64_t x103 = 861942945958LLU;
	volatile int32_t t24 = 16755667;

	t24 = ((x101<=(x102/x103))==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	uint64_t x108 = 9631379LLU;
	int32_t t25 = 157;

	t25 = ((x105<=(x106/x107))==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x110 = 18215;
	int32_t x111 = INT32_MAX;
	int64_t x112 = -1LL;
	static int32_t t26 = -2;

	t26 = ((x109<=(x110/x111))==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 847U;
	int32_t x114 = INT32_MIN;
	int8_t x115 = -3;
	volatile int32_t x116 = 2120;
	volatile int32_t t27 = 2654548;

	t27 = ((x113<=(x114/x115))==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = -3;
	int8_t x118 = -1;
	int32_t x120 = -487195790;
	int32_t t28 = 367824334;

	t28 = ((x117<=(x118/x119))==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 11LLU;
	static int32_t x123 = -1;
	static uint8_t x124 = UINT8_MAX;
	volatile int32_t t29 = 6;

	t29 = ((x121<=(x122/x123))==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	uint64_t x126 = 1012501930123053LLU;
	static volatile int8_t x127 = 17;
	static volatile int32_t t30 = -449493;

	t30 = ((x125<=(x126/x127))==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = -1;
	static int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	uint64_t x132 = 419543LLU;

	t31 = ((x129<=(x130/x131))==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 13LLU;
	int32_t x134 = INT32_MIN;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t32 = 832687783;

	t32 = ((x133<=(x134/x135))==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	int32_t x139 = -669736277;
	static int8_t x140 = INT8_MIN;

	t33 = ((x137<=(x138/x139))==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = UINT8_MAX;
	static int16_t x142 = -2831;
	int16_t x143 = INT16_MIN;
	volatile uint8_t x144 = 54U;

	t34 = ((x141<=(x142/x143))==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MAX;
	uint32_t x146 = 202553U;
	int64_t x147 = -1830LL;
	uint32_t x148 = UINT32_MAX;

	t35 = ((x145<=(x146/x147))==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MAX;
	volatile int16_t x150 = -1;
	int32_t t36 = 0;

	t36 = ((x149<=(x150/x151))==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	int32_t x155 = -42729767;
	static volatile int32_t t37 = -230118606;

	t37 = ((x153<=(x154/x155))==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = INT8_MAX;
	uint8_t x158 = 31U;
	volatile uint32_t x159 = UINT32_MAX;
	volatile int32_t t38 = -501871113;

	t38 = ((x157<=(x158/x159))==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -1;
	volatile int32_t x162 = INT32_MAX;
	static int16_t x164 = INT16_MAX;
	volatile int32_t t39 = -16202315;

	t39 = ((x161<=(x162/x163))==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x166 = 58U;
	static int8_t x167 = 7;
	uint16_t x168 = 1U;
	volatile int32_t t40 = 4;

	t40 = ((x165<=(x166/x167))==x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = INT64_MAX;

	t41 = ((x169<=(x170/x171))==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x174 = 1572966LLU;
	int64_t x175 = INT64_MAX;
	int8_t x176 = 21;
	int32_t t42 = 36;

	t42 = ((x173<=(x174/x175))==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x178 = -14;
	static int8_t x179 = INT8_MIN;
	volatile int32_t t43 = 21929;

	t43 = ((x177<=(x178/x179))==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x181 = 402400LL;
	static uint16_t x182 = 15U;
	uint8_t x184 = 12U;
	int32_t t44 = -70468;

	t44 = ((x181<=(x182/x183))==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x185 = -10504;
	int64_t x186 = INT64_MAX;
	int32_t x187 = 90392;
	int32_t x188 = INT32_MIN;
	volatile int32_t t45 = -2190;

	t45 = ((x185<=(x186/x187))==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = 1543U;
	int16_t x191 = INT16_MIN;
	volatile int32_t t46 = 25472025;

	t46 = ((x189<=(x190/x191))==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = 25637206227LL;
	int32_t x194 = -3345;
	uint32_t x195 = 6599406U;
	static int8_t x196 = INT8_MIN;

	t47 = ((x193<=(x194/x195))==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x197 = 0U;
	uint16_t x198 = 10U;
	static int32_t x199 = INT32_MAX;
	int32_t t48 = 133081259;

	t48 = ((x197<=(x198/x199))==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = UINT64_MAX;
	static volatile uint32_t x207 = 42U;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t49 = 47043;

	t49 = ((x205<=(x206/x207))==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = -1;
	uint16_t x210 = 0U;
	int32_t x212 = 113190;

	t50 = ((x209<=(x210/x211))==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = 15LLU;
	uint64_t x218 = 198362271862LLU;
	int32_t x219 = INT32_MIN;
	int16_t x220 = -1;

	t51 = ((x217<=(x218/x219))==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x221 = 3971U;
	volatile uint64_t x222 = UINT64_MAX;
	int64_t x223 = -256907428LL;
	int32_t t52 = 84383504;

	t52 = ((x221<=(x222/x223))==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x225 = 492692U;
	int8_t x226 = INT8_MAX;
	uint8_t x227 = UINT8_MAX;
	uint32_t x228 = 872353U;
	volatile int32_t t53 = -514815764;

	t53 = ((x225<=(x226/x227))==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x229 = -114;
	static int32_t x230 = INT32_MIN;
	volatile uint64_t x232 = 21761LLU;

	t54 = ((x229<=(x230/x231))==x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x233 = 2531156143LL;
	uint8_t x234 = 31U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t55 = -1;

	t55 = ((x233<=(x234/x235))==x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x237 = 10372U;
	volatile uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MIN;
	int8_t x240 = 1;
	volatile int32_t t56 = -3283;

	t56 = ((x237<=(x238/x239))==x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = -1;
	volatile uint8_t x242 = 2U;
	int64_t x243 = -1LL;
	int32_t x244 = 801506;

	t57 = ((x241<=(x242/x243))==x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -186;
	int16_t x246 = -1;
	static uint8_t x247 = UINT8_MAX;
	static volatile int32_t x248 = -7606868;
	int32_t t58 = 0;

	t58 = ((x245<=(x246/x247))==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x250 = UINT32_MAX;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = INT16_MIN;
	volatile int32_t t59 = -951398032;

	t59 = ((x249<=(x250/x251))==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x254 = INT32_MIN;
	uint16_t x255 = 1U;
	int64_t x256 = INT64_MAX;
	int32_t t60 = -24308385;

	t60 = ((x253<=(x254/x255))==x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x257 = INT8_MAX;
	static int32_t x258 = -1;
	int16_t x259 = -1;
	uint8_t x260 = 38U;
	int32_t t61 = 0;

	t61 = ((x257<=(x258/x259))==x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -1;
	int32_t x263 = 38112;
	int16_t x264 = -1;
	volatile int32_t t62 = 835122798;

	t62 = ((x261<=(x262/x263))==x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x266 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	int32_t t63 = -18959;

	t63 = ((x265<=(x266/x267))==x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x270 = UINT8_MAX;
	volatile int8_t x271 = INT8_MAX;
	int64_t x272 = -41985910729460LL;
	static int32_t t64 = -338779791;

	t64 = ((x269<=(x270/x271))==x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x273 = 6U;
	int64_t x274 = INT64_MAX;
	static uint8_t x275 = 1U;
	int8_t x276 = INT8_MAX;
	volatile int32_t t65 = -609;

	t65 = ((x273<=(x274/x275))==x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x278 = INT8_MIN;
	int16_t x279 = 124;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t66 = 5421;

	t66 = ((x277<=(x278/x279))==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x281 = 628U;
	static int32_t x282 = 1042786772;
	static uint64_t x283 = 168618985213LLU;
	int32_t t67 = 2;

	t67 = ((x281<=(x282/x283))==x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t t68 = 16924;

	t68 = ((x285<=(x286/x287))==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MIN;
	static int16_t x295 = 15;
	uint32_t x296 = UINT32_MAX;

	t69 = ((x293<=(x294/x295))==x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	static int16_t x299 = INT16_MIN;
	uint32_t x300 = 3515U;
	int32_t t70 = 1;

	t70 = ((x297<=(x298/x299))==x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x301 = UINT16_MAX;
	uint16_t x302 = 397U;
	volatile int64_t x303 = 4381383326332363LL;
	static volatile int32_t t71 = -358019;

	t71 = ((x301<=(x302/x303))==x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = -25;
	int64_t x306 = 83310495262870LL;
	int8_t x307 = INT8_MAX;
	int8_t x308 = -1;
	static volatile int32_t t72 = 0;

	t72 = ((x305<=(x306/x307))==x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x310 = 1;
	int8_t x311 = INT8_MIN;
	int8_t x312 = -18;
	int32_t t73 = -1683216;

	t73 = ((x309<=(x310/x311))==x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = INT8_MIN;
	volatile uint32_t x314 = 7875056U;
	uint64_t x315 = 179968935LLU;
	volatile int32_t t74 = 32576;

	t74 = ((x313<=(x314/x315))==x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	uint32_t x320 = 60935714U;
	volatile int32_t t75 = 3260;

	t75 = ((x317<=(x318/x319))==x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x322 = INT64_MIN;
	int64_t x323 = INT64_MAX;
	volatile int16_t x324 = 857;

	t76 = ((x321<=(x322/x323))==x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x326 = INT16_MIN;
	static int16_t x327 = INT16_MIN;
	volatile int8_t x328 = -3;
	static int32_t t77 = -59493;

	t77 = ((x325<=(x326/x327))==x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = -84;
	static int8_t x334 = -2;
	int64_t x335 = INT64_MIN;
	int64_t x336 = -1LL;
	int32_t t78 = 57;

	t78 = ((x333<=(x334/x335))==x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	static int8_t x338 = INT8_MIN;
	volatile uint8_t x339 = UINT8_MAX;
	int32_t x340 = -1;
	volatile int32_t t79 = 1570;

	t79 = ((x337<=(x338/x339))==x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = INT8_MIN;
	static int32_t x342 = -4595539;
	int64_t x343 = 750450903684451653LL;
	int16_t x344 = 433;
	volatile int32_t t80 = -9219226;

	t80 = ((x341<=(x342/x343))==x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x345 = UINT8_MAX;
	uint32_t x346 = 28210979U;
	uint32_t x347 = 5U;
	int16_t x348 = -6383;
	static int32_t t81 = 1;

	t81 = ((x345<=(x346/x347))==x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x349 = -142146669;
	uint16_t x350 = 48U;
	uint16_t x351 = UINT16_MAX;
	uint64_t x352 = 124514849LLU;

	t82 = ((x349<=(x350/x351))==x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x354 = 2905183LLU;
	volatile uint32_t x355 = 113939017U;
	int16_t x356 = INT16_MIN;
	int32_t t83 = 1;

	t83 = ((x353<=(x354/x355))==x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x358 = 10;
	volatile int32_t x359 = INT32_MAX;
	static int8_t x360 = -1;

	t84 = ((x357<=(x358/x359))==x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x361 = 5U;
	int16_t x362 = INT16_MIN;
	uint32_t x363 = 14U;
	uint32_t x364 = 210227U;
	int32_t t85 = -1;

	t85 = ((x361<=(x362/x363))==x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = -3;
	int32_t x366 = -29806;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t86 = -3418861;

	t86 = ((x365<=(x366/x367))==x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x370 = 7U;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MAX;
	int32_t t87 = 62528;

	t87 = ((x369<=(x370/x371))==x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x373 = 8U;
	int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MIN;
	volatile uint16_t x376 = 14U;
	volatile int32_t t88 = 0;

	t88 = ((x373<=(x374/x375))==x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x377 = -1;
	int32_t x379 = -28477106;
	int32_t x380 = 377;

	t89 = ((x377<=(x378/x379))==x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x381 = INT32_MIN;
	int16_t x383 = -1;
	int32_t t90 = -533937594;

	t90 = ((x381<=(x382/x383))==x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x386 = 1711;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = -1;
	int32_t t91 = -256992;

	t91 = ((x385<=(x386/x387))==x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x389 = INT32_MIN;
	static int64_t x390 = -1LL;
	uint64_t x391 = UINT64_MAX;
	static int8_t x392 = 3;

	t92 = ((x389<=(x390/x391))==x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x393 = INT16_MIN;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MIN;
	int32_t x396 = -1;
	volatile int32_t t93 = 380;

	t93 = ((x393<=(x394/x395))==x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x397 = -7504;
	volatile int32_t x398 = INT32_MIN;
	volatile int16_t x399 = INT16_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t94 = 1955915;

	t94 = ((x397<=(x398/x399))==x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = 242U;
	static int16_t x402 = 46;
	int8_t x403 = INT8_MAX;
	int32_t x404 = INT32_MIN;

	t95 = ((x401<=(x402/x403))==x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = -1;
	int16_t x406 = INT16_MAX;
	uint64_t x407 = 63LLU;
	volatile int32_t t96 = -903086;

	t96 = ((x405<=(x406/x407))==x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = -115289639LL;
	static volatile int16_t x410 = INT16_MIN;
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = INT64_MIN;

	t97 = ((x409<=(x410/x411))==x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x413 = INT8_MIN;
	uint16_t x414 = 4U;
	int8_t x416 = -1;
	int32_t t98 = -26928;

	t98 = ((x413<=(x414/x415))==x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = INT64_MIN;
	int32_t x418 = 7052624;
	uint64_t x419 = 52433044899895964LLU;
	int16_t x420 = INT16_MIN;
	int32_t t99 = -3;

	t99 = ((x417<=(x418/x419))==x420);

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

