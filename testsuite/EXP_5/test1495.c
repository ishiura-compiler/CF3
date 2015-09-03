#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
volatile uint16_t x17 = UINT16_MAX;
volatile int8_t x27 = -2;
volatile uint8_t x31 = UINT8_MAX;
volatile int32_t t7 = -7;
int64_t t8 = 40746795343469523LL;
int8_t x38 = INT8_MAX;
int16_t x41 = 0;
volatile uint64_t t10 = 713406LLU;
volatile int32_t x46 = INT32_MIN;
uint8_t x47 = UINT8_MAX;
static uint64_t x48 = 2019475903LLU;
volatile uint8_t x53 = UINT8_MAX;
int32_t x57 = INT32_MIN;
int32_t x60 = INT32_MAX;
volatile int8_t x65 = INT8_MIN;
uint64_t t17 = UINT64_MAX;
int32_t x79 = -1;
int64_t x83 = -1LL;
volatile uint64_t t20 = UINT64_MAX;
uint8_t x100 = 2U;
int64_t x108 = INT64_MIN;
volatile int8_t x118 = -1;
int32_t t31 = 44;
int32_t x131 = INT32_MIN;
static volatile uint64_t t32 = 14535482LLU;
int8_t x144 = INT8_MIN;
volatile int32_t t35 = 1;
int8_t x147 = INT8_MIN;
volatile int64_t t36 = -333283741822LL;
int64_t x150 = INT64_MIN;
volatile int8_t x153 = INT8_MAX;
uint8_t x172 = 122U;
int64_t x176 = -3638327242LL;
int32_t x179 = -2638948;
static int32_t x189 = INT32_MIN;
int16_t x198 = INT16_MIN;
static int16_t x203 = INT16_MAX;
static volatile int16_t x205 = -1;
volatile int8_t x210 = INT8_MAX;
int32_t x213 = 21;
int32_t x217 = INT32_MAX;
volatile uint64_t t54 = 1631289808231LLU;
int8_t x222 = INT8_MIN;
int8_t x224 = INT8_MIN;
volatile int32_t t55 = -2397;
volatile int16_t x225 = INT16_MIN;
static volatile int64_t x230 = INT64_MIN;
volatile int64_t x231 = -134383082279958LL;
int16_t x233 = -1;
volatile int32_t t58 = 36;
uint32_t x243 = 268810U;
static uint8_t x244 = UINT8_MAX;
static int16_t x248 = 412;
uint64_t x251 = UINT64_MAX;
int32_t x252 = INT32_MAX;
uint8_t x253 = UINT8_MAX;
static int32_t x280 = INT32_MAX;
int8_t x291 = INT8_MIN;
uint16_t x298 = UINT16_MAX;
volatile int32_t x301 = INT32_MIN;
uint8_t x306 = 25U;
static volatile int16_t x326 = 6596;
volatile uint32_t x328 = 246248U;
int16_t x330 = 531;
uint16_t x333 = UINT16_MAX;
int16_t x337 = INT16_MIN;
int16_t x341 = INT16_MAX;
volatile uint8_t x345 = 119U;
int16_t x356 = -10230;
volatile uint64_t x359 = 205989235LLU;
volatile uint64_t x360 = 113LLU;
int64_t x363 = -3022734583693113379LL;
volatile int8_t x368 = -11;
static int32_t t91 = -39828;
int8_t x371 = INT8_MIN;
uint16_t x375 = UINT16_MAX;
static uint32_t x379 = 3899798U;
volatile int8_t x380 = INT8_MIN;
volatile uint64_t x382 = UINT64_MAX;
int64_t t95 = 5246495856LL;
volatile int64_t x390 = INT64_MIN;
static volatile int64_t t97 = 4724765LL;
int32_t x394 = INT32_MAX;
int64_t x400 = INT64_MIN;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int64_t x3 = -32257563LL;
	static int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -1555;

	t0 = (x1^((x2<x3)&x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = INT16_MAX;
	int64_t x7 = 2957LL;
	volatile int64_t x8 = -1LL;
	int64_t t1 = -17LL;

	t1 = (x5^((x6<x7)&x8));

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = 335;
	volatile int16_t x11 = INT16_MAX;
	int64_t x12 = INT64_MAX;
	static volatile int64_t t2 = -23349236217LL;

	t2 = (x9^((x10<x11)&x12));

	if (t2 != 126LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 43U;
	uint64_t x14 = 2248333LLU;
	int16_t x15 = -1;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -3;

	t3 = (x13^((x14<x15)&x16));

	if (t3 != 43) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	int16_t x19 = -1161;
	static int32_t x20 = -28983775;
	int32_t t4 = -32094;

	t4 = (x17^((x18<x19)&x20));

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile int32_t x22 = INT32_MAX;
	volatile int8_t x23 = -1;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 3658;

	t5 = (x21^((x22<x23)&x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 0U;
	uint64_t x26 = UINT64_MAX;
	uint32_t x28 = UINT32_MAX;
	static volatile uint32_t t6 = 1983U;

	t6 = (x25^((x26<x27)&x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	uint16_t x30 = 25977U;
	int16_t x32 = 72;

	t7 = (x29^((x30<x31)&x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 0;
	static int64_t x34 = INT64_MAX;
	volatile int32_t x35 = -84;
	int64_t x36 = INT64_MAX;

	t8 = (x33^((x34<x35)&x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -7182428;
	static int64_t x39 = 1393LL;
	static uint32_t x40 = UINT32_MAX;
	volatile uint32_t t9 = 7648U;

	t9 = (x37^((x38<x39)&x40));

	if (t9 != 4287784869U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MIN;
	volatile int64_t x43 = 128026875315888158LL;
	uint64_t x44 = 186550309LLU;

	t10 = (x41^((x42<x43)&x44));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 320U;
	static volatile uint64_t t11 = 245847604841965LLU;

	t11 = (x45^((x46<x47)&x48));

	if (t11 != 321LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = INT8_MIN;
	static uint16_t x50 = 107U;
	int32_t x51 = 541609762;
	int64_t x52 = 882132021775953953LL;
	volatile int64_t t12 = 205490716651089440LL;

	t12 = (x49^((x50<x51)&x52));

	if (t12 != -127LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	int32_t x55 = -3173;
	uint16_t x56 = 2U;
	static int32_t t13 = -96484;

	t13 = (x53^((x54<x55)&x56));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	static volatile int16_t x59 = INT16_MAX;
	volatile int32_t t14 = INT32_MIN;

	t14 = (x57^((x58<x59)&x60));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 719U;
	int16_t x62 = -456;
	uint64_t x63 = 1152525159549021LLU;
	int64_t x64 = 1095LL;
	static int64_t t15 = 1206834033991LL;

	t15 = (x61^((x62<x63)&x64));

	if (t15 != 719LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x66 = 12U;
	int32_t x67 = -1;
	static uint64_t x68 = UINT64_MAX;
	static uint64_t t16 = 8480274916502995134LLU;

	t16 = (x65^((x66<x67)&x68));

	if (t16 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint16_t x70 = UINT16_MAX;
	int32_t x71 = -9;
	int8_t x72 = 9;

	t17 = (x69^((x70<x71)&x72));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	int16_t x74 = INT16_MIN;
	static uint8_t x75 = UINT8_MAX;
	volatile int64_t x76 = 3295LL;
	int64_t t18 = 1192860517679LL;

	t18 = (x73^((x74<x75)&x76));

	if (t18 != 65534LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -14;
	int8_t x78 = 1;
	int32_t x80 = 39767568;
	volatile int32_t t19 = -328045;

	t19 = (x77^((x78<x79)&x80));

	if (t19 != -14) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -1;
	int32_t x82 = INT32_MAX;
	uint64_t x84 = 16LLU;

	t20 = (x81^((x82<x83)&x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 6U;
	uint32_t x86 = 0U;
	int64_t x87 = 366831581630LL;
	int64_t x88 = -1LL;
	volatile int64_t t21 = 8LL;

	t21 = (x85^((x86<x87)&x88));

	if (t21 != 7LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	static volatile int8_t x90 = INT8_MIN;
	int16_t x91 = -153;
	uint32_t x92 = 555020U;
	uint32_t t22 = 67975U;

	t22 = (x89^((x90<x91)&x92));

	if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	volatile uint8_t x95 = 6U;
	static int8_t x96 = 1;
	volatile int32_t t23 = 30;

	t23 = (x93^((x94<x95)&x96));

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MAX;
	int8_t x99 = INT8_MAX;
	static int64_t t24 = INT64_MIN;

	t24 = (x97^((x98<x99)&x100));

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	uint32_t x103 = UINT32_MAX;
	uint64_t x104 = 25619898033709383LLU;
	volatile uint64_t t25 = 15280809492LLU;

	t25 = (x101^((x102<x103)&x104));

	if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -14;
	volatile int32_t x106 = -5764356;
	int64_t x107 = INT64_MIN;
	static int64_t t26 = 17732272840LL;

	t26 = (x105^((x106<x107)&x108));

	if (t26 != -14LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 33573511684431736LLU;
	int8_t x110 = INT8_MIN;
	uint32_t x111 = 1117670245U;
	int32_t x112 = -1;
	volatile uint64_t t27 = 265LLU;

	t27 = (x109^((x110<x111)&x112));

	if (t27 != 33573511684431736LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 29827743U;
	int64_t x114 = INT64_MIN;
	static int8_t x115 = INT8_MIN;
	int32_t x116 = -20061;
	volatile uint32_t t28 = 2008U;

	t28 = (x113^((x114<x115)&x116));

	if (t28 != 29827742U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 4U;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = 4;
	uint32_t t29 = 109417U;

	t29 = (x117^((x118<x119)&x120));

	if (t29 != 4U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 3189778648243623509LL;
	volatile int8_t x122 = -1;
	static int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MIN;
	int64_t t30 = -632540580585434062LL;

	t30 = (x121^((x122<x123)&x124));

	if (t30 != 3189778648243623509LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1591388;
	volatile int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MIN;

	t31 = (x125^((x126<x127)&x128));

	if (t31 != -1591388) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	uint32_t x130 = 0U;
	uint64_t x132 = 159LLU;

	t32 = (x129^((x130<x131)&x132));

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -36;
	int16_t x134 = INT16_MAX;
	uint64_t x135 = UINT64_MAX;
	volatile int32_t x136 = -31006622;
	static volatile int32_t t33 = 17774381;

	t33 = (x133^((x134<x135)&x136));

	if (t33 != -36) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 4U;
	uint8_t x138 = 3U;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = INT32_MIN;
	static volatile int32_t t34 = -263047;

	t34 = (x137^((x138<x139)&x140));

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 5U;
	uint64_t x142 = 569850528252599632LLU;
	int64_t x143 = INT64_MIN;

	t35 = (x141^((x142<x143)&x144));

	if (t35 != 5) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = -120LL;
	int8_t x146 = INT8_MAX;
	volatile uint32_t x148 = UINT32_MAX;

	t36 = (x145^((x146<x147)&x148));

	if (t36 != -120LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 2U;
	volatile uint64_t x151 = 794LLU;
	uint16_t x152 = UINT16_MAX;
	static volatile uint32_t t37 = 10772053U;

	t37 = (x149^((x150<x151)&x152));

	if (t37 != 2U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -1;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t38 = 31141389U;

	t38 = (x153^((x154<x155)&x156));

	if (t38 != 127U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int16_t x158 = -1;
	int32_t x159 = INT32_MIN;
	int32_t x160 = 1870839;
	static int32_t t39 = 61309367;

	t39 = (x157^((x158<x159)&x160));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int64_t x162 = -9983421599212904LL;
	int64_t x163 = INT64_MAX;
	static int16_t x164 = INT16_MIN;
	static volatile int32_t t40 = -242982;

	t40 = (x161^((x162<x163)&x164));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	static uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MAX;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 49;

	t41 = (x165^((x166<x167)&x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int64_t x170 = INT64_MAX;
	static volatile int32_t x171 = INT32_MIN;
	uint32_t t42 = UINT32_MAX;

	t42 = (x169^((x170<x171)&x172));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x173 = 391U;
	static volatile int32_t x174 = 355;
	uint16_t x175 = 15355U;
	int64_t t43 = 548055432127382LL;

	t43 = (x173^((x174<x175)&x176));

	if (t43 != 391LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 7532212LLU;
	volatile uint8_t x178 = 78U;
	static int64_t x180 = INT64_MAX;
	uint64_t t44 = 21182700LLU;

	t44 = (x177^((x178<x179)&x180));

	if (t44 != 7532212LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 117U;
	int32_t x182 = -7009868;
	int64_t x183 = 0LL;
	int8_t x184 = INT8_MIN;
	int32_t t45 = -1022;

	t45 = (x181^((x182<x183)&x184));

	if (t45 != 117) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x185 = 6029U;
	static volatile int16_t x186 = INT16_MIN;
	uint32_t x187 = 3460U;
	volatile int8_t x188 = INT8_MIN;
	volatile uint32_t t46 = 424405U;

	t46 = (x185^((x186<x187)&x188));

	if (t46 != 6029U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x190 = INT64_MIN;
	static uint32_t x191 = 1444417U;
	static int16_t x192 = -14;
	int32_t t47 = INT32_MIN;

	t47 = (x189^((x190<x191)&x192));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -1;
	static volatile int8_t x194 = INT8_MIN;
	int32_t x195 = -1;
	int8_t x196 = INT8_MAX;
	static int32_t t48 = -191637;

	t48 = (x193^((x194<x195)&x196));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static int8_t x199 = INT8_MIN;
	uint16_t x200 = 13U;
	int32_t t49 = 61550;

	t49 = (x197^((x198<x199)&x200));

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 6405;
	static int8_t x202 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	int64_t t50 = -107608018224LL;

	t50 = (x201^((x202<x203)&x204));

	if (t50 != 6405LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	uint64_t x207 = UINT64_MAX;
	uint32_t x208 = 1213U;
	volatile uint32_t t51 = UINT32_MAX;

	t51 = (x205^((x206<x207)&x208));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	uint16_t x211 = 3239U;
	int64_t x212 = 1LL;
	static volatile int64_t t52 = 300888348727LL;

	t52 = (x209^((x210<x211)&x212));

	if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MIN;
	int64_t x216 = 385LL;
	int64_t t53 = 170LL;

	t53 = (x213^((x214<x215)&x216));

	if (t53 != 21LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	uint16_t x219 = UINT16_MAX;
	static uint64_t x220 = UINT64_MAX;

	t54 = (x217^((x218<x219)&x220));

	if (t54 != 2147483646LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 2189;
	int16_t x223 = INT16_MAX;

	t55 = (x221^((x222<x223)&x224));

	if (t55 != 2189) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = 259;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = -17LL;
	int64_t t56 = -24989259134083664LL;

	t56 = (x225^((x226<x227)&x228));

	if (t56 != -32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = UINT16_MAX;
	int8_t x232 = INT8_MIN;
	int32_t t57 = 1892306;

	t57 = (x229^((x230<x231)&x232));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 6U;
	volatile int64_t x235 = INT64_MIN;
	static int16_t x236 = -1;

	t58 = (x233^((x234<x235)&x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = 1U;
	uint8_t x238 = 0U;
	int64_t x239 = -1273885696550139LL;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = -490723;

	t59 = (x237^((x238<x239)&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -4;
	volatile uint32_t x242 = 2585U;
	volatile int32_t t60 = -94569120;

	t60 = (x241^((x242<x243)&x244));

	if (t60 != -3) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = 6;
	int32_t x246 = INT32_MIN;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t61 = 551;

	t61 = (x245^((x246<x247)&x248));

	if (t61 != 6) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 206922969204821787LLU;
	uint16_t x250 = UINT16_MAX;
	uint64_t t62 = 1872LLU;

	t62 = (x249^((x250<x251)&x252));

	if (t62 != 206922969204821786LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int8_t x256 = -12;
	static int32_t t63 = -458291;

	t63 = (x253^((x254<x255)&x256));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 0LLU;
	volatile uint64_t x258 = UINT64_MAX;
	static volatile uint64_t x259 = 200048593977524LLU;
	uint8_t x260 = 11U;
	uint64_t t64 = 504584814249000853LLU;

	t64 = (x257^((x258<x259)&x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = -35;
	int32_t x263 = INT32_MIN;
	static uint8_t x264 = UINT8_MAX;
	volatile int32_t t65 = -93825;

	t65 = (x261^((x262<x263)&x264));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	int32_t x266 = 0;
	static int64_t x267 = INT64_MAX;
	static uint8_t x268 = UINT8_MAX;
	int32_t t66 = -20000;

	t66 = (x265^((x266<x267)&x268));

	if (t66 != 126) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 71939992;
	static volatile uint8_t x270 = 10U;
	int64_t x271 = INT64_MAX;
	volatile int32_t x272 = -1;
	int32_t t67 = -30;

	t67 = (x269^((x270<x271)&x272));

	if (t67 != 71939993) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = 1;
	static volatile uint64_t x275 = 57450548LLU;
	static volatile uint64_t x276 = UINT64_MAX;
	uint64_t t68 = 14201716255576LLU;

	t68 = (x273^((x274<x275)&x276));

	if (t68 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 4655U;
	int16_t x278 = INT16_MIN;
	int64_t x279 = -555176897LL;
	uint32_t t69 = 83852732U;

	t69 = (x277^((x278<x279)&x280));

	if (t69 != 4655U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MAX;
	uint32_t x284 = 578171743U;
	volatile uint32_t t70 = 6U;

	t70 = (x281^((x282<x283)&x284));

	if (t70 != 4294967168U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x286 = INT32_MIN;
	static uint16_t x287 = UINT16_MAX;
	int64_t x288 = -1LL;
	static volatile int64_t t71 = 80854975LL;

	t71 = (x285^((x286<x287)&x288));

	if (t71 != 254LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x289 = 18U;
	volatile int32_t x290 = INT32_MIN;
	int16_t x292 = -1;
	volatile int32_t t72 = -45;

	t72 = (x289^((x290<x291)&x292));

	if (t72 != 19) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 14269;
	int8_t x294 = -1;
	volatile int8_t x295 = 3;
	volatile int64_t x296 = -1LL;
	volatile int64_t t73 = -2506548LL;

	t73 = (x293^((x294<x295)&x296));

	if (t73 != 14268LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MIN;
	volatile int32_t x299 = -1;
	static int32_t x300 = 1;
	static volatile int32_t t74 = INT32_MIN;

	t74 = (x297^((x298<x299)&x300));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x302 = 6U;
	int8_t x303 = INT8_MAX;
	volatile uint16_t x304 = 7U;
	volatile int32_t t75 = -3;

	t75 = (x301^((x302<x303)&x304));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 90U;
	int8_t x307 = 1;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -1;

	t76 = (x305^((x306<x307)&x308));

	if (t76 != 90) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 64200181949763LL;
	int16_t x310 = 1;
	int8_t x311 = INT8_MIN;
	uint32_t x312 = 7U;
	int64_t t77 = -222986328256195586LL;

	t77 = (x309^((x310<x311)&x312));

	if (t77 != 64200181949763LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 142225U;
	volatile uint64_t x314 = UINT64_MAX;
	int64_t x315 = -1LL;
	int64_t x316 = 21313060427LL;
	static volatile int64_t t78 = -15256076667LL;

	t78 = (x313^((x314<x315)&x316));

	if (t78 != 142225LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	uint16_t x318 = UINT16_MAX;
	volatile int8_t x319 = 6;
	int16_t x320 = 376;
	int32_t t79 = -4161652;

	t79 = (x317^((x318<x319)&x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = -4726713;
	volatile int16_t x322 = -5402;
	volatile int8_t x323 = INT8_MIN;
	volatile int32_t x324 = 2856;
	volatile int32_t t80 = 46882;

	t80 = (x321^((x322<x323)&x324));

	if (t80 != -4726713) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x325 = 9599U;
	int16_t x327 = INT16_MAX;
	static volatile uint32_t t81 = 18425U;

	t81 = (x325^((x326<x327)&x328));

	if (t81 != 9599U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	volatile uint64_t x331 = 724734748133962760LLU;
	uint16_t x332 = 0U;
	static volatile int32_t t82 = -494451;

	t82 = (x329^((x330<x331)&x332));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = UINT64_MAX;
	uint64_t x335 = 26725884121LLU;
	int32_t x336 = INT32_MAX;
	volatile int32_t t83 = 855;

	t83 = (x333^((x334<x335)&x336));

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = -67188;
	int8_t x339 = -1;
	static int64_t x340 = 29LL;
	volatile int64_t t84 = 49734LL;

	t84 = (x337^((x338<x339)&x340));

	if (t84 != -32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MAX;
	static volatile int8_t x343 = INT8_MAX;
	volatile int32_t x344 = 0;
	int32_t t85 = -1;

	t85 = (x341^((x342<x343)&x344));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x346 = 2U;
	int8_t x347 = INT8_MIN;
	int8_t x348 = -1;
	volatile int32_t t86 = 1;

	t86 = (x345^((x346<x347)&x348));

	if (t86 != 119) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x349 = -2559193;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 13802713;

	t87 = (x349^((x350<x351)&x352));

	if (t87 != -2559193) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -1LL;
	uint16_t x354 = UINT16_MAX;
	int64_t x355 = -232472LL;
	volatile int64_t t88 = -423181LL;

	t88 = (x353^((x354<x355)&x356));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = UINT32_MAX;
	int64_t x358 = INT64_MAX;
	static uint64_t t89 = 220882LLU;

	t89 = (x357^((x358<x359)&x360));

	if (t89 != 4294967295LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 845179361317556086LL;
	int64_t x362 = -1LL;
	uint8_t x364 = 6U;
	int64_t t90 = 26515596615838474LL;

	t90 = (x361^((x362<x363)&x364));

	if (t90 != 845179361317556086LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MAX;
	int16_t x366 = -1;
	int64_t x367 = INT64_MIN;

	t91 = (x365^((x366<x367)&x368));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	static volatile uint64_t x370 = 15LLU;
	int8_t x372 = -1;
	static volatile int64_t t92 = 4213897364819611LL;

	t92 = (x369^((x370<x371)&x372));

	if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -88896440;
	static int64_t x374 = INT64_MIN;
	int32_t x376 = -450134;
	int32_t t93 = 201;

	t93 = (x373^((x374<x375)&x376));

	if (t93 != -88896440) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MAX;
	uint16_t x378 = UINT16_MAX;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x377^((x378<x379)&x380));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	int8_t x383 = 1;
	static int64_t x384 = -1LL;

	t95 = (x381^((x382<x383)&x384));

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	volatile uint16_t x386 = UINT16_MAX;
	static int32_t x387 = INT32_MAX;
	uint64_t x388 = 16723679748LLU;
	uint64_t t96 = UINT64_MAX;

	t96 = (x385^((x386<x387)&x388));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x389 = -2779883857LL;
	uint8_t x391 = 8U;
	volatile int8_t x392 = 1;

	t97 = (x389^((x390<x391)&x392));

	if (t97 != -2779883858LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x393 = -1;
	static int16_t x395 = -1;
	volatile int64_t x396 = INT64_MIN;
	int64_t t98 = -13496889306685LL;

	t98 = (x393^((x394<x395)&x396));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 113U;
	volatile uint64_t x398 = 925136103688929364LLU;
	int64_t x399 = INT64_MIN;
	int64_t t99 = 28804429LL;

	t99 = (x397^((x398<x399)&x400));

	if (t99 != 113LL) { NG(); } else { ; }
	
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

