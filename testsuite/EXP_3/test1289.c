#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 21541701U;
int8_t x4 = INT8_MIN;
uint64_t x12 = 21147984127LLU;
int8_t x15 = 1;
int16_t x30 = INT16_MIN;
volatile uint64_t x33 = 181LLU;
static int16_t x45 = -1;
int32_t x46 = -1;
static volatile int32_t t11 = 106590151;
volatile int32_t t12 = -499535944;
volatile int16_t x55 = INT16_MAX;
int32_t x61 = 3468;
uint8_t x63 = 15U;
uint8_t x67 = 18U;
int64_t x72 = -1LL;
int32_t t18 = 3246;
static int32_t t19 = 409329525;
int64_t x83 = INT64_MIN;
volatile int16_t x89 = -1;
int64_t x101 = -1LL;
int32_t t27 = 1232;
uint8_t x115 = UINT8_MAX;
int32_t x116 = 5510860;
uint16_t x117 = 1U;
int8_t x123 = INT8_MIN;
int32_t t30 = -3;
volatile int32_t t32 = -147;
int8_t x142 = INT8_MIN;
volatile int64_t x146 = INT64_MIN;
uint64_t x149 = 5760332705127LLU;
int32_t t38 = -6327;
int32_t x158 = -6;
uint32_t x159 = UINT32_MAX;
volatile int16_t x162 = INT16_MAX;
uint32_t x179 = 4293U;
volatile uint32_t x181 = 34319138U;
uint32_t x186 = UINT32_MAX;
static int8_t x190 = -1;
static volatile uint64_t x200 = UINT64_MAX;
int32_t x202 = INT32_MIN;
int32_t t50 = -3017961;
volatile int32_t x207 = INT32_MIN;
static uint32_t x211 = 23862U;
uint16_t x213 = 337U;
int32_t x217 = INT32_MAX;
static int32_t x218 = INT32_MIN;
int64_t x223 = 29LL;
uint64_t x225 = 1LLU;
static int32_t x231 = INT32_MIN;
volatile int32_t t58 = 2107;
static int32_t t59 = 3;
int32_t x242 = INT32_MAX;
volatile int32_t t60 = 5;
volatile int8_t x248 = -1;
uint64_t x252 = 25472LLU;
int8_t x253 = -1;
volatile int32_t t63 = -16237642;
uint8_t x268 = 36U;
int8_t x271 = -1;
int64_t x279 = -1LL;
volatile int32_t t69 = -131826413;
int64_t x281 = -44004LL;
volatile int32_t x283 = -1;
volatile int64_t x290 = 10050LL;
int32_t t73 = -915;
volatile uint64_t x298 = 1504981539706LLU;
int32_t x303 = INT32_MIN;
int16_t x304 = 1;
static volatile int32_t t75 = 0;
int8_t x305 = -15;
volatile int64_t x307 = INT64_MIN;
volatile int32_t t76 = -17;
uint32_t x314 = 21567345U;
uint8_t x315 = 13U;
static int16_t x323 = 15074;
int16_t x324 = -5;
static volatile uint8_t x326 = UINT8_MAX;
static uint8_t x328 = 57U;
volatile int32_t t82 = -763295281;
uint16_t x334 = 11U;
int32_t x345 = INT32_MIN;
volatile int32_t x353 = -1;
volatile int16_t x358 = INT16_MIN;
uint32_t x359 = 855U;
volatile int32_t t89 = 39738;
int16_t x361 = INT16_MAX;
volatile int32_t x367 = -229658416;
static int64_t x368 = -1314889562101LL;
int16_t x372 = INT16_MAX;
volatile int32_t t94 = -268;
static uint32_t x382 = 26590U;
int16_t x385 = 3967;
uint64_t x386 = UINT64_MAX;
int8_t x393 = INT8_MAX;


void f0(void) {
	uint8_t x1 = 10U;
	static int16_t x2 = -124;
	volatile int32_t t0 = -7;

	t0 = ((x1<x2)-(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	static uint64_t x6 = 2LLU;
	uint16_t x7 = UINT16_MAX;
	static uint32_t x8 = 161U;
	volatile int32_t t1 = -2;

	t1 = ((x5<x6)-(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int32_t x10 = 785881127;
	int64_t x11 = -1584LL;
	volatile int32_t t2 = -3840;

	t2 = ((x9<x10)-(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int16_t x14 = INT16_MAX;
	int16_t x16 = INT16_MAX;
	int32_t t3 = -1;

	t3 = ((x13<x14)-(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x18 = 109;
	uint8_t x19 = 0U;
	volatile int8_t x20 = -18;
	volatile int32_t t4 = 13613;

	t4 = ((x17<x18)-(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 27;
	uint32_t x22 = 9121U;
	uint32_t x23 = 4U;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -187;

	t5 = ((x21<x22)-(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 7U;
	uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 14141U;
	static volatile int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -965680;

	t6 = ((x25<x26)-(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 25U;
	static volatile int32_t x31 = -178;
	int32_t x32 = INT32_MAX;
	int32_t t7 = 681992;

	t7 = ((x29<x30)-(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 1126629542U;
	uint8_t x35 = 27U;
	static volatile int32_t x36 = 163;
	static volatile int32_t t8 = -31297;

	t8 = ((x33<x34)-(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	uint64_t x38 = 17533672972LLU;
	int8_t x39 = -1;
	volatile uint8_t x40 = UINT8_MAX;
	static volatile int32_t t9 = -6734613;

	t9 = ((x37<x38)-(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -25;
	static uint16_t x42 = 30U;
	int16_t x43 = -1;
	uint64_t x44 = 34736742853480678LLU;
	int32_t t10 = -10;

	t10 = ((x41<x42)-(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x47 = 6332113412897LLU;
	static int64_t x48 = INT64_MIN;

	t11 = ((x45<x46)-(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static volatile int32_t x50 = 125870;
	int64_t x51 = INT64_MIN;
	int64_t x52 = 80694490LL;

	t12 = ((x49<x50)-(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = -1;
	uint8_t x54 = 7U;
	uint64_t x56 = 0LLU;
	volatile int32_t t13 = -6405;

	t13 = ((x53<x54)-(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int64_t x58 = 48LL;
	int64_t x59 = INT64_MIN;
	volatile uint32_t x60 = 59329U;
	volatile int32_t t14 = -6;

	t14 = ((x57<x58)-(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = UINT8_MAX;
	uint64_t x64 = 3992350739LLU;
	int32_t t15 = -1;

	t15 = ((x61<x62)-(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = 55U;
	int8_t x66 = INT8_MIN;
	uint64_t x68 = 1LLU;
	volatile int32_t t16 = -831298;

	t16 = ((x65<x66)-(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int8_t x70 = INT8_MIN;
	uint8_t x71 = 24U;
	int32_t t17 = -1;

	t17 = ((x69<x70)-(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = UINT16_MAX;
	volatile int8_t x74 = -1;
	static int32_t x75 = INT32_MAX;
	volatile uint32_t x76 = 537820U;

	t18 = ((x73<x74)-(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -6546;
	int16_t x78 = INT16_MIN;
	uint32_t x79 = 17U;
	int64_t x80 = INT64_MIN;

	t19 = ((x77<x78)-(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = -3706;
	volatile int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -23;

	t20 = ((x81<x82)-(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	static volatile uint64_t x86 = 3426729LLU;
	int64_t x87 = -1LL;
	static int64_t x88 = INT64_MIN;
	int32_t t21 = 33722967;

	t21 = ((x85<x86)-(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x90 = -1;
	uint64_t x91 = 2107129426119LLU;
	static int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 3;

	t22 = ((x89<x90)-(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x93 = 52U;
	volatile int8_t x94 = -1;
	int16_t x95 = INT16_MAX;
	int8_t x96 = -9;
	volatile int32_t t23 = -49652762;

	t23 = ((x93<x94)-(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	uint64_t x98 = UINT64_MAX;
	int32_t x99 = 15;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 10418;

	t24 = ((x97<x98)-(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 1U;
	int32_t x103 = INT32_MIN;
	volatile int64_t x104 = INT64_MIN;
	static volatile int32_t t25 = 1;

	t25 = ((x101<x102)-(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -583;

	t26 = ((x105<x106)-(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	uint64_t x110 = UINT64_MAX;
	volatile int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MIN;

	t27 = ((x109<x110)-(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -37387;
	int64_t x114 = INT64_MIN;
	volatile int32_t t28 = -138420319;

	t28 = ((x113<x114)-(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x118 = -1;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 26685995U;
	int32_t t29 = -9;

	t29 = ((x117<x118)-(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	uint32_t x122 = 111061101U;
	int16_t x124 = INT16_MIN;

	t30 = ((x121<x122)-(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int32_t x126 = INT32_MIN;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = 53U;
	volatile int32_t t31 = -9622842;

	t31 = ((x125<x126)-(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 49245571186995LL;
	int8_t x130 = INT8_MAX;
	int16_t x131 = -1;
	int8_t x132 = -1;

	t32 = ((x129<x130)-(x131==x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	int16_t x134 = -12;
	volatile int32_t x135 = -6257;
	int8_t x136 = INT8_MAX;
	static int32_t t33 = 152958175;

	t33 = ((x133<x134)-(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	uint8_t x138 = 102U;
	volatile int16_t x139 = -693;
	int64_t x140 = -300961874754585955LL;
	volatile int32_t t34 = 1104;

	t34 = ((x137<x138)-(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 13U;
	static int8_t x143 = -1;
	static int8_t x144 = -3;
	int32_t t35 = -1877;

	t35 = ((x141<x142)-(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	volatile int16_t x147 = INT16_MAX;
	uint32_t x148 = 21U;
	int32_t t36 = -47;

	t36 = ((x145<x146)-(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MAX;
	static volatile int16_t x151 = INT16_MAX;
	int32_t x152 = INT32_MAX;
	static volatile int32_t t37 = 4684794;

	t37 = ((x149<x150)-(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x153 = 20U;
	uint16_t x154 = UINT16_MAX;
	int16_t x155 = INT16_MIN;
	volatile uint8_t x156 = 27U;

	t38 = ((x153<x154)-(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 22U;
	int8_t x160 = 0;
	int32_t t39 = 83905960;

	t39 = ((x157<x158)-(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	int32_t x163 = -46449955;
	static volatile int8_t x164 = 1;
	static int32_t t40 = -335;

	t40 = ((x161<x162)-(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 52;
	static int8_t x166 = INT8_MAX;
	volatile uint8_t x167 = 58U;
	int16_t x168 = -1;
	int32_t t41 = 682421;

	t41 = ((x165<x166)-(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = -1;
	volatile int8_t x170 = INT8_MIN;
	volatile uint16_t x171 = 388U;
	int64_t x172 = INT64_MIN;
	volatile int32_t t42 = 574426930;

	t42 = ((x169<x170)-(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 349U;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MIN;
	uint32_t x176 = UINT32_MAX;
	static int32_t t43 = 48853931;

	t43 = ((x173<x174)-(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	static uint16_t x178 = UINT16_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = 13;

	t44 = ((x177<x178)-(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MAX;
	volatile int16_t x184 = INT16_MAX;
	int32_t t45 = -34297;

	t45 = ((x181<x182)-(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MIN;
	int16_t x187 = INT16_MIN;
	int8_t x188 = 0;
	int32_t t46 = -421027211;

	t46 = ((x185<x186)-(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int8_t x191 = 15;
	static int16_t x192 = INT16_MAX;
	volatile int32_t t47 = 30788;

	t47 = ((x189<x190)-(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = -1;
	int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = -20511;

	t48 = ((x193<x194)-(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 2116561893144669LLU;
	volatile uint32_t x198 = 0U;
	int16_t x199 = 3;
	static int32_t t49 = -257505079;

	t49 = ((x197<x198)-(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = 220U;
	static int32_t x203 = INT32_MIN;
	static volatile int32_t x204 = INT32_MIN;

	t50 = ((x201<x202)-(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = 100782;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 0;

	t51 = ((x205<x206)-(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = 214635688816LLU;
	int32_t x210 = -908626;
	volatile uint32_t x212 = UINT32_MAX;
	int32_t t52 = 6877;

	t52 = ((x209<x210)-(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 13U;
	uint16_t x216 = 1536U;
	int32_t t53 = 196081806;

	t53 = ((x213<x214)-(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 1187;

	t54 = ((x217<x218)-(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	static int64_t x222 = -1LL;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -14;

	t55 = ((x221<x222)-(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MAX;
	volatile int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t56 = 57;

	t56 = ((x225<x226)-(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = UINT64_MAX;
	volatile int64_t x230 = 524LL;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 3286;

	t57 = ((x229<x230)-(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 11U;
	int16_t x234 = -241;
	int8_t x235 = -2;
	int32_t x236 = INT32_MIN;

	t58 = ((x233<x234)-(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int16_t x238 = -1;
	static int64_t x239 = -1LL;
	int16_t x240 = -4;

	t59 = ((x237<x238)-(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	static volatile int16_t x243 = 1260;
	static volatile int32_t x244 = INT32_MIN;

	t60 = ((x241<x242)-(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	volatile int16_t x246 = -1;
	static int64_t x247 = INT64_MAX;
	int32_t t61 = -352662958;

	t61 = ((x245<x246)-(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 1278LLU;
	uint64_t x250 = 7120164943LLU;
	static uint16_t x251 = UINT16_MAX;
	int32_t t62 = -424540403;

	t62 = ((x249<x250)-(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	int64_t x255 = 19LL;
	int64_t x256 = -1LL;

	t63 = ((x253<x254)-(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x258 = 24;
	volatile int16_t x259 = INT16_MIN;
	static uint16_t x260 = 154U;
	volatile int32_t t64 = -926561;

	t64 = ((x257<x258)-(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	uint64_t x262 = 2439758257996LLU;
	uint32_t x263 = 1504U;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -337536485;

	t65 = ((x261<x262)-(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int8_t x266 = INT8_MIN;
	int32_t x267 = -32274;
	volatile int32_t t66 = -1712082;

	t66 = ((x265<x266)-(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	static uint8_t x272 = 9U;
	volatile int32_t t67 = 22;

	t67 = ((x269<x270)-(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	static uint32_t x274 = 37116U;
	int8_t x275 = INT8_MAX;
	volatile int16_t x276 = INT16_MAX;
	int32_t t68 = -803326183;

	t68 = ((x273<x274)-(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int32_t x278 = INT32_MIN;
	uint32_t x280 = 29122312U;

	t69 = ((x277<x278)-(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x282 = 4133436167LLU;
	uint16_t x284 = 2045U;
	static int32_t t70 = 86837262;

	t70 = ((x281<x282)-(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 91;
	uint32_t x286 = 512257U;
	int32_t x287 = INT32_MIN;
	int8_t x288 = -1;
	int32_t t71 = 15443;

	t71 = ((x285<x286)-(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -223045;
	volatile int32_t x291 = INT32_MAX;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 8;

	t72 = ((x289<x290)-(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	volatile uint16_t x294 = 0U;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;

	t73 = ((x293<x294)-(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -562346282;

	t74 = ((x297<x298)-(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	volatile uint32_t x302 = 370933846U;

	t75 = ((x301<x302)-(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x306 = 52654481U;
	volatile uint16_t x308 = 15U;

	t76 = ((x305<x306)-(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = -14336;
	uint32_t x310 = 527565285U;
	int32_t x311 = INT32_MAX;
	static volatile int64_t x312 = 929434LL;
	int32_t t77 = 333411622;

	t77 = ((x309<x310)-(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 11520U;
	int32_t x316 = INT32_MAX;
	int32_t t78 = -208;

	t78 = ((x313<x314)-(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 40052U;
	int64_t x318 = INT64_MIN;
	static volatile int16_t x319 = 0;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = 10;

	t79 = ((x317<x318)-(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	static volatile int16_t x322 = INT16_MAX;
	static int32_t t80 = 14100;

	t80 = ((x321<x322)-(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = UINT16_MAX;
	int32_t x327 = 135;
	volatile int32_t t81 = -3035;

	t81 = ((x325<x326)-(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = -6;
	static int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MAX;
	int64_t x332 = INT64_MIN;

	t82 = ((x329<x330)-(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = UINT32_MAX;
	int32_t x335 = 259356;
	int64_t x336 = -89238674124LL;
	int32_t t83 = -50559853;

	t83 = ((x333<x334)-(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = 1872157498389LLU;
	int16_t x340 = 3;
	static int32_t t84 = 7674234;

	t84 = ((x337<x338)-(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	volatile int64_t x342 = 1854802LL;
	int32_t x343 = INT32_MIN;
	uint32_t x344 = 2U;
	volatile int32_t t85 = 155;

	t85 = ((x341<x342)-(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MIN;
	int32_t t86 = -1;

	t86 = ((x345<x346)-(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = UINT32_MAX;
	int64_t x350 = -287861LL;
	int64_t x351 = -48831474LL;
	int64_t x352 = INT64_MIN;
	int32_t t87 = 13115;

	t87 = ((x349<x350)-(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x354 = 0;
	uint16_t x355 = UINT16_MAX;
	volatile int8_t x356 = -1;
	static int32_t t88 = 2831818;

	t88 = ((x353<x354)-(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int32_t x360 = -2649235;

	t89 = ((x357<x358)-(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x362 = INT8_MAX;
	uint8_t x363 = 1U;
	int8_t x364 = -1;
	volatile int32_t t90 = 1;

	t90 = ((x361<x362)-(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -6686;
	uint64_t x366 = UINT64_MAX;
	volatile int32_t t91 = -1;

	t91 = ((x365<x366)-(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	uint8_t x370 = UINT8_MAX;
	volatile int64_t x371 = INT64_MIN;
	int32_t t92 = 3596;

	t92 = ((x369<x370)-(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MAX;
	volatile uint16_t x374 = 1825U;
	uint16_t x375 = 7046U;
	int32_t x376 = -1;
	int32_t t93 = -176;

	t93 = ((x373<x374)-(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MIN;
	uint16_t x379 = 4053U;
	int16_t x380 = INT16_MIN;

	t94 = ((x377<x378)-(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = 318;
	int64_t x383 = INT64_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = 187252758;

	t95 = ((x381<x382)-(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = INT8_MAX;
	int8_t x388 = -5;
	static volatile int32_t t96 = 19;

	t96 = ((x385<x386)-(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MIN;
	int32_t x391 = 46;
	int16_t x392 = INT16_MAX;
	int32_t t97 = 379056;

	t97 = ((x389<x390)-(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x394 = 4U;
	uint16_t x395 = UINT16_MAX;
	int32_t x396 = -68956;
	int32_t t98 = -2999;

	t98 = ((x393<x394)-(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 49U;
	int32_t x398 = -1;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = -8;

	t99 = ((x397<x398)-(x399==x400));

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

