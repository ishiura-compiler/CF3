#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 1365;
volatile int64_t x6 = INT64_MIN;
volatile int32_t t1 = -413;
int16_t x11 = INT16_MAX;
int32_t x12 = -1;
int64_t x13 = -1562804115184859LL;
int16_t x14 = INT16_MAX;
int32_t t3 = -7259;
uint16_t x24 = 3U;
uint64_t x26 = 1220284069705LLU;
int64_t x27 = INT64_MIN;
volatile int16_t x33 = INT16_MIN;
int8_t x38 = INT8_MAX;
volatile int32_t t9 = -903834;
uint64_t x42 = 24071205967025LLU;
int8_t x43 = 0;
uint16_t x54 = UINT16_MAX;
uint16_t x55 = UINT16_MAX;
static int16_t x57 = -1;
int64_t x63 = 1LL;
int32_t t15 = 99121;
volatile int64_t x80 = -1046348988LL;
uint8_t x85 = 1U;
uint8_t x86 = 5U;
volatile int32_t t21 = -362;
int64_t x101 = 1LL;
static int64_t x106 = INT64_MIN;
int32_t x111 = INT32_MAX;
int16_t x128 = -4;
int32_t x131 = 23739;
static uint8_t x138 = 10U;
int32_t t35 = -1;
int32_t x152 = INT32_MIN;
uint16_t x155 = UINT16_MAX;
uint32_t x159 = 13697U;
int16_t x168 = -113;
volatile uint64_t x171 = UINT64_MAX;
int16_t x177 = 15;
static int32_t x179 = INT32_MAX;
uint8_t x184 = 119U;
int32_t x186 = INT32_MAX;
int32_t t51 = 6572854;
volatile int16_t x209 = INT16_MIN;
int8_t x213 = -1;
int32_t x214 = 0;
uint8_t x233 = 100U;
volatile int16_t x239 = -1;
static int16_t x241 = INT16_MIN;
static volatile int32_t t60 = 1;
volatile int16_t x250 = INT16_MIN;
int16_t x252 = -1;
uint8_t x254 = 7U;
int16_t x258 = INT16_MAX;
volatile uint32_t x259 = UINT32_MAX;
int64_t x262 = INT64_MIN;
volatile int32_t t65 = 1197;
int32_t t66 = -7579;
volatile int16_t x271 = INT16_MIN;
uint8_t x277 = 0U;
uint32_t x279 = 766U;
static int8_t x280 = 55;
volatile int32_t t70 = 50188;
int64_t x287 = INT64_MIN;
int32_t x291 = INT32_MAX;
volatile int32_t x293 = INT32_MAX;
int64_t x295 = INT64_MAX;
int32_t x297 = INT32_MIN;
uint32_t x299 = 1U;
int32_t x302 = INT32_MIN;
static int32_t t75 = 1;
uint16_t x307 = 1U;
static uint64_t x317 = 3093215LLU;
int64_t x320 = INT64_MIN;
static int64_t x322 = -1LL;
uint16_t x324 = 1U;
static int8_t x330 = -16;
volatile uint64_t x340 = UINT64_MAX;
static volatile int16_t x347 = -239;
int8_t x353 = INT8_MAX;
volatile int32_t t89 = 8249675;
uint32_t x366 = UINT32_MAX;
static int8_t x367 = 1;
int32_t t91 = 7246105;
volatile uint16_t x369 = 0U;
int64_t x371 = -16229323736953LL;
uint32_t x377 = UINT32_MAX;


void f0(void) {
	uint32_t x1 = 161084489U;
	int32_t x2 = INT32_MAX;
	static uint16_t x3 = UINT16_MAX;
	static int32_t t0 = 5267;

	t0 = ((x1<x2)*(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static int16_t x7 = -1;
	int64_t x8 = INT64_MIN;

	t1 = ((x5<x6)*(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 4041834340383LLU;
	static int16_t x10 = INT16_MIN;
	int32_t t2 = 58;

	t2 = ((x9<x10)*(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x15 = 0U;
	static int16_t x16 = 1218;

	t3 = ((x13<x14)*(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int8_t x18 = 31;
	int64_t x19 = INT64_MIN;
	volatile int32_t x20 = 204;
	static int32_t t4 = -201;

	t4 = ((x17<x18)*(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = INT16_MAX;
	int8_t x22 = 0;
	uint64_t x23 = 1LLU;
	volatile int32_t t5 = -3980;

	t5 = ((x21<x22)*(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 52U;
	int8_t x28 = 5;
	static volatile int32_t t6 = 1676;

	t6 = ((x25<x26)*(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint8_t x30 = UINT8_MAX;
	uint8_t x31 = 27U;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -7325;

	t7 = ((x29<x30)*(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 122U;
	uint16_t x35 = UINT16_MAX;
	uint16_t x36 = UINT16_MAX;
	static int32_t t8 = -1911;

	t8 = ((x33<x34)*(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x39 = INT8_MAX;
	uint16_t x40 = UINT16_MAX;

	t9 = ((x37<x38)*(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x44 = 22;
	volatile int32_t t10 = 0;

	t10 = ((x41<x42)*(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	volatile int32_t x46 = -3496472;
	uint64_t x47 = 55053608203825LLU;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = 673;

	t11 = ((x45<x46)*(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int16_t x50 = INT16_MIN;
	static int64_t x51 = INT64_MAX;
	int32_t x52 = 87252578;
	static int32_t t12 = 180623900;

	t12 = ((x49<x50)*(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	static int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -1;

	t13 = ((x53<x54)*(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x58 = 7;
	uint32_t x59 = UINT32_MAX;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -5385473;

	t14 = ((x57<x58)*(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int32_t x62 = 212783505;
	uint64_t x64 = 66419004245LLU;

	t15 = ((x61<x62)*(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 1;
	uint8_t x66 = 0U;
	int64_t x67 = -1LL;
	uint8_t x68 = 16U;
	int32_t t16 = 1;

	t16 = ((x65<x66)*(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static int16_t x70 = -1;
	uint32_t x71 = 7313154U;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -10;

	t17 = ((x69<x70)*(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static uint32_t x74 = 320885U;
	uint8_t x75 = UINT8_MAX;
	int16_t x76 = INT16_MIN;
	static int32_t t18 = 15;

	t18 = ((x73<x74)*(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = UINT64_MAX;
	int16_t x78 = -3751;
	static int64_t x79 = -1LL;
	int32_t t19 = 12872772;

	t19 = ((x77<x78)*(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	uint16_t x82 = 1963U;
	int16_t x83 = -1;
	volatile int8_t x84 = 0;
	int32_t t20 = 1;

	t20 = ((x81<x82)*(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x87 = INT64_MAX;
	volatile int16_t x88 = INT16_MAX;

	t21 = ((x85<x86)*(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -17348291277785896LL;
	static int64_t x90 = 528123345247LL;
	int8_t x91 = INT8_MIN;
	int64_t x92 = -16246817456990LL;
	int32_t t22 = 1;

	t22 = ((x89<x90)*(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 61U;
	uint64_t x94 = 64278896LLU;
	uint64_t x95 = 73363442470701378LLU;
	int32_t x96 = -1;
	int32_t t23 = -2841638;

	t23 = ((x93<x94)*(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 1U;
	volatile int32_t x98 = 2;
	volatile uint64_t x99 = 1LLU;
	uint32_t x100 = 0U;
	int32_t t24 = 5;

	t24 = ((x97<x98)*(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MIN;
	static int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	int32_t t25 = 1372212;

	t25 = ((x101<x102)*(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	uint8_t x107 = 1U;
	int64_t x108 = -1LL;
	static volatile int32_t t26 = -168453130;

	t26 = ((x105<x106)*(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	volatile int8_t x110 = -1;
	static int16_t x112 = -1;
	volatile int32_t t27 = -3;

	t27 = ((x109<x110)*(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	volatile int16_t x114 = -1;
	int8_t x115 = -1;
	static volatile uint64_t x116 = UINT64_MAX;
	int32_t t28 = -312;

	t28 = ((x113<x114)*(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int8_t x118 = 7;
	int64_t x119 = 1598774933239595LL;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 50321832;

	t29 = ((x117<x118)*(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	int8_t x122 = -1;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = 64U;
	int32_t t30 = 5029391;

	t30 = ((x121<x122)*(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MAX;
	int8_t x127 = 1;
	volatile int32_t t31 = -22203128;

	t31 = ((x125<x126)*(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -1LL;
	static int16_t x130 = -49;
	int16_t x132 = INT16_MAX;
	static int32_t t32 = -140415749;

	t32 = ((x129<x130)*(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 0U;
	volatile int64_t x134 = -38442LL;
	int16_t x135 = -1;
	volatile int64_t x136 = INT64_MAX;
	int32_t t33 = -162906;

	t33 = ((x133<x134)*(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MAX;
	int8_t x139 = INT8_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 1;

	t34 = ((x137<x138)*(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -12;
	int64_t x142 = -388827909268LL;
	static int8_t x143 = -1;
	int32_t x144 = -1;

	t35 = ((x141<x142)*(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 1U;
	uint8_t x146 = UINT8_MAX;
	uint32_t x147 = 24038217U;
	int16_t x148 = INT16_MIN;
	static int32_t t36 = -1;

	t36 = ((x145<x146)*(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MAX;
	volatile uint32_t x150 = 712448U;
	int16_t x151 = 240;
	static volatile int32_t t37 = -59;

	t37 = ((x149<x150)*(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 1;
	static uint16_t x154 = 6194U;
	int64_t x156 = INT64_MIN;
	volatile int32_t t38 = 2;

	t38 = ((x153<x154)*(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -1;
	volatile int8_t x158 = -1;
	static int64_t x160 = -813329593147844LL;
	volatile int32_t t39 = 586836;

	t39 = ((x157<x158)*(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	int32_t x162 = 181004939;
	static int32_t x163 = -1;
	uint16_t x164 = 18044U;
	volatile int32_t t40 = -1781454;

	t40 = ((x161<x162)*(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	int16_t x166 = INT16_MIN;
	volatile int64_t x167 = INT64_MIN;
	int32_t t41 = 962706004;

	t41 = ((x165<x166)*(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 10U;
	volatile int32_t x170 = 55885;
	int8_t x172 = 3;
	int32_t t42 = 773;

	t42 = ((x169<x170)*(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 3;
	volatile int8_t x174 = -1;
	static int8_t x175 = -1;
	int8_t x176 = INT8_MAX;
	int32_t t43 = -3230;

	t43 = ((x173<x174)*(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x178 = INT32_MIN;
	uint8_t x180 = 0U;
	int32_t t44 = -2;

	t44 = ((x177<x178)*(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MAX;
	int32_t x183 = INT32_MIN;
	int32_t t45 = 345403431;

	t45 = ((x181<x182)*(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	uint32_t x187 = 317U;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = 158347;

	t46 = ((x185<x186)*(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 0;
	volatile uint16_t x190 = 57U;
	static volatile int64_t x191 = INT64_MAX;
	static uint32_t x192 = UINT32_MAX;
	volatile int32_t t47 = 7450;

	t47 = ((x189<x190)*(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	static int64_t x194 = INT64_MAX;
	static int8_t x195 = -3;
	volatile uint64_t x196 = 1164227592060LLU;
	volatile int32_t t48 = 32686897;

	t48 = ((x193<x194)*(x195==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -3226;
	volatile int32_t x198 = 23;
	int16_t x199 = 5;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 5193;

	t49 = ((x197<x198)*(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MAX;
	int32_t x202 = INT32_MAX;
	int16_t x203 = -124;
	int8_t x204 = -1;
	static volatile int32_t t50 = 9;

	t50 = ((x201<x202)*(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	static volatile uint16_t x207 = 53U;
	static volatile int16_t x208 = INT16_MIN;

	t51 = ((x205<x206)*(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = INT64_MIN;
	static volatile int16_t x211 = -358;
	int8_t x212 = INT8_MAX;
	int32_t t52 = -114179;

	t52 = ((x209<x210)*(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x215 = INT64_MIN;
	static uint16_t x216 = UINT16_MAX;
	static volatile int32_t t53 = -260289769;

	t53 = ((x213<x214)*(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -27;
	volatile int64_t x218 = INT64_MIN;
	int16_t x219 = 6;
	int64_t x220 = INT64_MIN;
	int32_t t54 = 1219372;

	t54 = ((x217<x218)*(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	uint8_t x223 = UINT8_MAX;
	volatile int16_t x224 = 98;
	static int32_t t55 = -1556;

	t55 = ((x221<x222)*(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 0;
	int8_t x226 = INT8_MIN;
	uint32_t x227 = 862221828U;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = -139;

	t56 = ((x225<x226)*(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	static volatile int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	int16_t x232 = -64;
	volatile int32_t t57 = 2;

	t57 = ((x229<x230)*(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x234 = 3306315655LLU;
	static int8_t x235 = INT8_MAX;
	int64_t x236 = INT64_MAX;
	volatile int32_t t58 = -2662;

	t58 = ((x233<x234)*(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	uint64_t x238 = 12819052LLU;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t59 = -2;

	t59 = ((x237<x238)*(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = 15U;
	volatile uint32_t x243 = UINT32_MAX;
	static uint8_t x244 = UINT8_MAX;

	t60 = ((x241<x242)*(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	int32_t x246 = INT32_MAX;
	int8_t x247 = -1;
	int64_t x248 = INT64_MIN;
	int32_t t61 = -119904;

	t61 = ((x245<x246)*(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 1;
	static int32_t x251 = 3;
	static int32_t t62 = 384;

	t62 = ((x249<x250)*(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -1;
	uint64_t x255 = 52110606270417LLU;
	int8_t x256 = -1;
	static int32_t t63 = 9;

	t63 = ((x253<x254)*(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MAX;
	uint16_t x260 = UINT16_MAX;
	static int32_t t64 = 213593;

	t64 = ((x257<x258)*(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int32_t x263 = INT32_MAX;
	uint32_t x264 = 1584792833U;

	t65 = ((x261<x262)*(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 24115U;
	volatile uint32_t x266 = 4431879U;
	int32_t x267 = INT32_MAX;
	int8_t x268 = 0;

	t66 = ((x265<x266)*(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int16_t x270 = INT16_MIN;
	int64_t x272 = -1LL;
	static int32_t t67 = -12;

	t67 = ((x269<x270)*(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	static int16_t x274 = INT16_MIN;
	volatile int64_t x275 = 560593805401994619LL;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 87;

	t68 = ((x273<x274)*(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MIN;
	int32_t t69 = 264925;

	t69 = ((x277<x278)*(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = 2498;
	volatile int16_t x282 = INT16_MIN;
	uint8_t x283 = 2U;
	volatile int64_t x284 = INT64_MIN;

	t70 = ((x281<x282)*(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -61;
	int8_t x286 = INT8_MAX;
	static volatile int16_t x288 = -965;
	int32_t t71 = -391222;

	t71 = ((x285<x286)*(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static volatile int8_t x290 = INT8_MIN;
	int16_t x292 = -11;
	volatile int32_t t72 = -9;

	t72 = ((x289<x290)*(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -1;
	static uint8_t x296 = 25U;
	volatile int32_t t73 = 9559040;

	t73 = ((x293<x294)*(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = -4110;
	int64_t x300 = INT64_MAX;
	volatile int32_t t74 = -6;

	t74 = ((x297<x298)*(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	uint64_t x303 = 32182330166115084LLU;
	int8_t x304 = INT8_MAX;

	t75 = ((x301<x302)*(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = -4;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = -3024987;

	t76 = ((x305<x306)*(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 8492U;
	uint8_t x310 = 15U;
	int8_t x311 = INT8_MIN;
	int32_t x312 = -1;
	static volatile int32_t t77 = 607575592;

	t77 = ((x309<x310)*(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 25299848U;
	uint8_t x314 = 5U;
	int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MIN;
	static int32_t t78 = -28726;

	t78 = ((x313<x314)*(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	int32_t t79 = 202323;

	t79 = ((x317<x318)*(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static int32_t x323 = INT32_MAX;
	volatile int32_t t80 = -4092976;

	t80 = ((x321<x322)*(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 27346796U;
	int32_t x326 = -507151596;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = 1;
	volatile int32_t t81 = 259261;

	t81 = ((x325<x326)*(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 17U;
	static int64_t x331 = INT64_MAX;
	int16_t x332 = -94;
	int32_t t82 = 170178;

	t82 = ((x329<x330)*(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MIN;
	int16_t x335 = INT16_MAX;
	static volatile int16_t x336 = 0;
	volatile int32_t t83 = -3637481;

	t83 = ((x333<x334)*(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 411544259019071LLU;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 82U;
	static volatile int32_t t84 = -824;

	t84 = ((x337<x338)*(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x341 = 7490U;
	uint64_t x342 = 3438850246965391024LLU;
	volatile int64_t x343 = INT64_MIN;
	volatile int8_t x344 = INT8_MIN;
	static int32_t t85 = 72;

	t85 = ((x341<x342)*(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = 465546861181453531LL;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = -968;

	t86 = ((x345<x346)*(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x349 = 8373029;
	static uint64_t x350 = 206031244184469991LLU;
	volatile uint16_t x351 = 9299U;
	int32_t x352 = INT32_MIN;
	int32_t t87 = 1;

	t87 = ((x349<x350)*(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x354 = -4;
	static int16_t x355 = 3468;
	uint8_t x356 = UINT8_MAX;
	int32_t t88 = 0;

	t88 = ((x353<x354)*(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 20U;
	int16_t x358 = INT16_MIN;
	int16_t x359 = -7335;
	int8_t x360 = INT8_MIN;

	t89 = ((x357<x358)*(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static volatile uint16_t x362 = 1268U;
	int64_t x363 = -1LL;
	uint8_t x364 = 123U;
	volatile int32_t t90 = -13558298;

	t90 = ((x361<x362)*(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	static int16_t x368 = INT16_MIN;

	t91 = ((x365<x366)*(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x370 = 5U;
	uint16_t x372 = 1603U;
	volatile int32_t t92 = -24448357;

	t92 = ((x369<x370)*(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 7661U;
	int16_t x374 = INT16_MAX;
	uint32_t x375 = 80242223U;
	volatile int32_t x376 = 14699164;
	volatile int32_t t93 = 720;

	t93 = ((x373<x374)*(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MIN;
	int64_t x379 = -12LL;
	uint32_t x380 = UINT32_MAX;
	int32_t t94 = 68;

	t94 = ((x377<x378)*(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 29396LL;
	uint16_t x382 = 0U;
	uint64_t x383 = UINT64_MAX;
	static int16_t x384 = -5;
	volatile int32_t t95 = 311;

	t95 = ((x381<x382)*(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = -408;
	uint64_t x386 = 7474103972875754LLU;
	int8_t x387 = INT8_MIN;
	static volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = -22203308;

	t96 = ((x385<x386)*(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	volatile int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	volatile int16_t x392 = 1;
	volatile int32_t t97 = 1068648;

	t97 = ((x389<x390)*(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 24652U;
	volatile uint16_t x394 = 646U;
	uint16_t x395 = UINT16_MAX;
	volatile uint16_t x396 = 209U;
	int32_t t98 = 18525381;

	t98 = ((x393<x394)*(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static int64_t x398 = -1LL;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t99 = 110;

	t99 = ((x397<x398)*(x399==x400));

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

