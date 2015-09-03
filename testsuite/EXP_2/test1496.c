#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = 248057;
volatile int32_t t2 = 14;
int32_t x13 = -1;
uint16_t x15 = 18U;
static int8_t x21 = 10;
uint32_t x24 = 444297U;
volatile uint32_t t5 = 0U;
static int32_t x42 = INT32_MAX;
volatile int16_t x47 = INT16_MIN;
uint64_t t9 = 68199754834LLU;
uint32_t x52 = 168963U;
volatile int32_t t12 = -21822;
int64_t x67 = -1LL;
volatile uint32_t t15 = 5113615U;
static int64_t x74 = -1LL;
int64_t x75 = INT64_MAX;
volatile uint32_t x76 = 2199493U;
volatile int64_t x79 = INT64_MIN;
int32_t x80 = INT32_MIN;
int16_t x91 = INT16_MIN;
int64_t x99 = 173109710814377312LL;
uint32_t x101 = UINT32_MAX;
static int8_t x114 = -1;
int16_t x118 = INT16_MIN;
int16_t x119 = -1;
uint8_t x121 = 1U;
uint64_t x125 = 10938280LLU;
volatile int8_t x137 = INT8_MAX;
static int16_t x145 = INT16_MAX;
int8_t x148 = 1;
static int8_t x149 = -1;
int16_t x152 = INT16_MIN;
volatile uint16_t x155 = UINT16_MAX;
volatile int16_t x163 = INT16_MIN;
volatile int16_t x168 = INT16_MAX;
uint64_t x169 = UINT64_MAX;
volatile int64_t t40 = -403LL;
int32_t x182 = INT32_MIN;
uint32_t x205 = 809582157U;
volatile int32_t x211 = -187;
volatile int32_t t48 = 0;
static volatile int8_t x213 = INT8_MAX;
static uint16_t x215 = UINT16_MAX;
int32_t t49 = 171256773;
uint8_t x219 = 2U;
uint8_t x220 = 2U;
int16_t x232 = INT16_MIN;
static int8_t x238 = INT8_MAX;
static uint16_t x239 = 25735U;
int32_t x246 = -1;
uint8_t x247 = UINT8_MAX;
int64_t x252 = 103823640673538LL;
volatile uint16_t x255 = 330U;
static int32_t x256 = -1;
uint16_t x261 = 401U;
uint64_t x262 = 119904400419906LLU;
static int16_t x281 = INT16_MAX;
uint32_t x283 = 1051U;
volatile int32_t t62 = 43;
int64_t x286 = INT64_MIN;
static volatile int16_t x295 = 1;
volatile int64_t t66 = 931907LL;
int64_t x308 = INT64_MAX;
int8_t x321 = INT8_MAX;
int16_t x322 = INT16_MIN;
uint8_t x333 = UINT8_MAX;
int64_t t73 = 1582675417LL;
int32_t x346 = 6;
uint32_t x349 = 25693064U;
uint64_t t75 = 991627589574LLU;
volatile int64_t x354 = -1LL;
static uint8_t x358 = 52U;
volatile int64_t x362 = INT64_MIN;
uint64_t x363 = UINT64_MAX;
int8_t x371 = 0;
int32_t x377 = 57;
int32_t t84 = 177456903;
static int8_t x389 = INT8_MIN;
int8_t x391 = INT8_MIN;
static uint64_t t85 = 274478018302388263LLU;
volatile uint8_t x401 = 1U;
uint32_t t87 = 968476U;
uint64_t x409 = UINT64_MAX;
int16_t x411 = INT16_MAX;
static int16_t x413 = -12093;
volatile uint64_t t93 = 8704LLU;
volatile int32_t t95 = 7289;
volatile uint8_t x437 = UINT8_MAX;
int64_t x446 = INT64_MIN;
volatile uint32_t t98 = 6U;
static volatile int64_t x449 = -1LL;
volatile uint64_t x450 = UINT64_MAX;
volatile uint8_t x451 = 0U;
static int32_t x452 = -1;


void f0(void) {
	int32_t x2 = INT32_MAX;
	int8_t x3 = -1;
	uint8_t x4 = 106U;
	int32_t t0 = 185;

	t0 = ((x1|(x2<x3))+x4);

	if (t0 != 248163) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 75929U;
	static int16_t x6 = INT16_MIN;
	volatile uint64_t x7 = 211392LLU;
	static int8_t x8 = 2;
	static volatile uint32_t t1 = 1074029773U;

	t1 = ((x5|(x6<x7))+x8);

	if (t1 != 75931U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	static uint8_t x10 = 2U;
	uint64_t x11 = 18772145950376135LLU;
	volatile int16_t x12 = INT16_MIN;

	t2 = ((x9|(x10<x11))+x12);

	if (t2 != -65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 0U;
	uint64_t x16 = 2040LLU;
	uint64_t t3 = 216LLU;

	t3 = ((x13|(x14<x15))+x16);

	if (t3 != 2039LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 1U;
	int32_t x18 = INT32_MIN;
	static volatile int64_t x19 = INT64_MIN;
	static volatile int64_t x20 = -1LL;
	int64_t t4 = -12484LL;

	t4 = ((x17|(x18<x19))+x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -9;
	uint64_t x23 = 100708196253LLU;

	t5 = ((x21|(x22<x23))+x24);

	if (t5 != 444307U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	volatile int64_t x30 = 3851306LL;
	int16_t x31 = INT16_MIN;
	uint64_t x32 = 536LLU;
	uint64_t t6 = 7382LLU;

	t6 = ((x29|(x30<x31))+x32);

	if (t6 != 9223372036854776344LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	int32_t x36 = 1;
	int32_t t7 = -457;

	t7 = ((x33|(x34<x35))+x36);

	if (t7 != -126) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	static volatile uint32_t x43 = 25581156U;
	uint8_t x44 = 36U;
	int32_t t8 = -10929143;

	t8 = ((x41|(x42<x43))+x44);

	if (t8 != 35) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x45 = 2358051201503223LLU;
	int64_t x46 = 12699196742580LL;
	int64_t x48 = -1LL;

	t9 = ((x45|(x46<x47))+x48);

	if (t9 != 2358051201503222LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	int64_t x50 = 50112746039175LL;
	static int8_t x51 = 0;
	uint32_t t10 = 4547920U;

	t10 = ((x49|(x50<x51))+x52);

	if (t10 != 168962U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 3016;
	int32_t x54 = -202;
	int8_t x55 = INT8_MAX;
	uint8_t x56 = 19U;
	int32_t t11 = -1914;

	t11 = ((x53|(x54<x55))+x56);

	if (t11 != 3036) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	uint16_t x58 = UINT16_MAX;
	volatile uint64_t x59 = UINT64_MAX;
	volatile uint16_t x60 = 5275U;

	t12 = ((x57|(x58<x59))+x60);

	if (t12 != -2147478372) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MAX;
	volatile int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	static volatile int32_t x64 = INT32_MIN;
	static volatile int32_t t13 = 105861989;

	t13 = ((x61|(x62<x63))+x64);

	if (t13 != -2147450881) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 22U;
	static int64_t x66 = INT64_MIN;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t14 = 6809;

	t14 = ((x65|(x66<x67))+x68);

	if (t14 != 65558) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MIN;
	static uint8_t x71 = 1U;
	uint32_t x72 = 43844815U;

	t15 = ((x69|(x70<x71))+x72);

	if (t15 != 43844942U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	volatile uint32_t t16 = 410506396U;

	t16 = ((x73|(x74<x75))+x76);

	if (t16 != 2149683142U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x77 = 19U;
	int64_t x78 = INT64_MIN;
	int32_t t17 = 249;

	t17 = ((x77|(x78<x79))+x80);

	if (t17 != -2147483629) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x85 = 382U;
	static uint8_t x86 = UINT8_MAX;
	uint8_t x87 = 1U;
	int32_t x88 = -1;
	int32_t t18 = 5970;

	t18 = ((x85|(x86<x87))+x88);

	if (t18 != 381) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 2U;
	int32_t x90 = INT32_MIN;
	uint16_t x92 = UINT16_MAX;
	static volatile int32_t t19 = -475;

	t19 = ((x89|(x90<x91))+x92);

	if (t19 != 65538) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	uint8_t x94 = 74U;
	int16_t x95 = -1;
	int8_t x96 = 1;
	int64_t t20 = -73779831LL;

	t20 = ((x93|(x94<x95))+x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 0U;
	uint32_t x98 = 420192U;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -77669080551431LL;

	t21 = ((x97|(x98<x99))+x100);

	if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x102 = UINT64_MAX;
	static int16_t x103 = -1;
	volatile int32_t x104 = -4864;
	static uint32_t t22 = 1U;

	t22 = ((x101|(x102<x103))+x104);

	if (t22 != 4294962431U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = INT8_MAX;
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 32535U;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t23 = 42856U;

	t23 = ((x105|(x106<x107))+x108);

	if (t23 != 126U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = 4240757090444012LL;
	static int64_t x111 = INT64_MAX;
	uint8_t x112 = UINT8_MAX;
	int32_t t24 = 0;

	t24 = ((x109|(x110<x111))+x112);

	if (t24 != -32512) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 0U;
	volatile int32_t x115 = INT32_MIN;
	int16_t x116 = -1;
	volatile int32_t t25 = 317;

	t25 = ((x113|(x114<x115))+x116);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -149LL;
	uint64_t x120 = 1853072360LLU;
	uint64_t t26 = 137414LLU;

	t26 = ((x117|(x118<x119))+x120);

	if (t26 != 1853072211LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x122 = -64914LL;
	static uint32_t x123 = 856U;
	uint16_t x124 = 29U;
	static int32_t t27 = 164147;

	t27 = ((x121|(x122<x123))+x124);

	if (t27 != 30) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = INT32_MAX;
	int16_t x127 = -1;
	volatile int32_t x128 = INT32_MAX;
	volatile uint64_t t28 = 968882899306851723LLU;

	t28 = ((x125|(x126<x127))+x128);

	if (t28 != 2158421927LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x133 = UINT16_MAX;
	int32_t x134 = -28344214;
	volatile uint32_t x135 = UINT32_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t29 = -92698;

	t29 = ((x133|(x134<x135))+x136);

	if (t29 != 65407) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x138 = 606270919701LL;
	volatile int64_t x139 = -603909207LL;
	int32_t x140 = -74527895;
	static int32_t t30 = -1;

	t30 = ((x137|(x138<x139))+x140);

	if (t30 != -74527768) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x141 = 953315864U;
	uint32_t x142 = 33U;
	uint16_t x143 = 24904U;
	int8_t x144 = INT8_MAX;
	uint32_t t31 = 1354594067U;

	t31 = ((x141|(x142<x143))+x144);

	if (t31 != 953315992U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x146 = UINT16_MAX;
	uint32_t x147 = 134405997U;
	volatile int32_t t32 = -321625;

	t32 = ((x145|(x146<x147))+x148);

	if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x150 = 13;
	int8_t x151 = INT8_MIN;
	volatile int32_t t33 = 191;

	t33 = ((x149|(x150<x151))+x152);

	if (t33 != -32769) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x153 = INT16_MIN;
	uint32_t x154 = 0U;
	volatile int64_t x156 = INT64_MAX;
	int64_t t34 = 1698515822287501LL;

	t34 = ((x153|(x154<x155))+x156);

	if (t34 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MAX;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = 5U;
	int32_t t35 = -17;

	t35 = ((x157|(x158<x159))+x160);

	if (t35 != -2147483643) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = 0;
	int16_t x162 = INT16_MIN;
	static int32_t x164 = INT32_MIN;
	static volatile int32_t t36 = INT32_MIN;

	t36 = ((x161|(x162<x163))+x164);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = INT8_MAX;
	uint16_t x166 = UINT16_MAX;
	int8_t x167 = 9;
	int32_t t37 = 591285;

	t37 = ((x165|(x166<x167))+x168);

	if (t37 != 32894) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x170 = -1;
	uint16_t x171 = 1620U;
	uint8_t x172 = 3U;
	volatile uint64_t t38 = 26033352385LLU;

	t38 = ((x169|(x170<x171))+x172);

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MAX;
	int16_t x175 = INT16_MIN;
	volatile uint64_t x176 = 37420LLU;
	uint64_t t39 = 204LLU;

	t39 = ((x173|(x174<x175))+x176);

	if (t39 != 37292LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x177 = -143218839LL;
	static uint16_t x178 = 108U;
	static uint8_t x179 = UINT8_MAX;
	int32_t x180 = INT32_MIN;

	t40 = ((x177|(x178<x179))+x180);

	if (t40 != -2290702487LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x181 = -329205567749521LL;
	int64_t x183 = INT64_MIN;
	uint8_t x184 = 5U;
	volatile int64_t t41 = -1LL;

	t41 = ((x181|(x182<x183))+x184);

	if (t41 != -329205567749516LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = 31U;
	int16_t x186 = -1;
	uint16_t x187 = 0U;
	int64_t x188 = INT64_MIN;
	volatile int64_t t42 = 3535258729195386LL;

	t42 = ((x185|(x186<x187))+x188);

	if (t42 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = -1;
	static volatile int64_t x190 = INT64_MIN;
	volatile int8_t x191 = -1;
	int64_t x192 = INT64_MAX;
	volatile int64_t t43 = 29818831159629LL;

	t43 = ((x189|(x190<x191))+x192);

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 1140U;
	int64_t x194 = 70112850LL;
	uint64_t x195 = 22936LLU;
	uint32_t x196 = 6U;
	uint32_t t44 = 0U;

	t44 = ((x193|(x194<x195))+x196);

	if (t44 != 1146U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = -6640;
	int8_t x198 = INT8_MIN;
	int16_t x199 = -1;
	volatile uint8_t x200 = 6U;
	volatile int32_t t45 = 1;

	t45 = ((x197|(x198<x199))+x200);

	if (t45 != -6633) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x201 = 31675113U;
	uint64_t x202 = UINT64_MAX;
	uint8_t x203 = 14U;
	int32_t x204 = INT32_MIN;
	uint32_t t46 = 96U;

	t46 = ((x201|(x202<x203))+x204);

	if (t46 != 2179158761U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x206 = -1;
	int16_t x207 = -2177;
	volatile int64_t x208 = -1LL;
	int64_t t47 = -3LL;

	t47 = ((x205|(x206<x207))+x208);

	if (t47 != 809582156LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	int64_t x210 = INT64_MAX;
	volatile int16_t x212 = INT16_MAX;

	t48 = ((x209|(x210<x211))+x212);

	if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x214 = UINT64_MAX;
	static int8_t x216 = INT8_MIN;

	t49 = ((x213|(x214<x215))+x216);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -12928;
	volatile int64_t x218 = INT64_MIN;
	int32_t t50 = 906584511;

	t50 = ((x217|(x218<x219))+x220);

	if (t50 != -12925) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x225 = 78262401;
	uint64_t x226 = UINT64_MAX;
	static int32_t x227 = -468821;
	uint8_t x228 = 46U;
	volatile int32_t t51 = -580998727;

	t51 = ((x225|(x226<x227))+x228);

	if (t51 != 78262447) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x229 = 142494194U;
	uint8_t x230 = UINT8_MAX;
	volatile int64_t x231 = 1452345711LL;
	volatile uint32_t t52 = 36334U;

	t52 = ((x229|(x230<x231))+x232);

	if (t52 != 142461427U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = UINT32_MAX;
	int64_t x234 = 1183033937773274570LL;
	static uint16_t x235 = 1U;
	uint8_t x236 = 0U;
	static volatile uint32_t t53 = UINT32_MAX;

	t53 = ((x233|(x234<x235))+x236);

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = -1;
	int16_t x240 = INT16_MIN;
	int32_t t54 = -436266635;

	t54 = ((x237|(x238<x239))+x240);

	if (t54 != -32769) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x245 = UINT8_MAX;
	uint64_t x248 = UINT64_MAX;
	static uint64_t t55 = 7435441720LLU;

	t55 = ((x245|(x246<x247))+x248);

	if (t55 != 254LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x249 = INT32_MIN;
	static int64_t x250 = INT64_MAX;
	int16_t x251 = -1266;
	int64_t t56 = -137888609641150035LL;

	t56 = ((x249|(x250<x251))+x252);

	if (t56 != 103821493189890LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x253 = UINT8_MAX;
	static uint32_t x254 = UINT32_MAX;
	static volatile int32_t t57 = -32894206;

	t57 = ((x253|(x254<x255))+x256);

	if (t57 != 254) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x257 = -28;
	static uint64_t x258 = 83LLU;
	int8_t x259 = 41;
	volatile uint8_t x260 = UINT8_MAX;
	int32_t t58 = 20;

	t58 = ((x257|(x258<x259))+x260);

	if (t58 != 227) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x263 = INT64_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t59 = 847;

	t59 = ((x261|(x262<x263))+x264);

	if (t59 != 656) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MAX;
	static int32_t x266 = INT32_MIN;
	uint8_t x267 = 76U;
	static volatile int8_t x268 = INT8_MAX;
	static int32_t t60 = 1;

	t60 = ((x265|(x266<x267))+x268);

	if (t60 != 32894) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = 3423386874LL;
	volatile uint32_t x270 = UINT32_MAX;
	int8_t x271 = -13;
	static int32_t x272 = -1;
	volatile int64_t t61 = 3003LL;

	t61 = ((x269|(x270<x271))+x272);

	if (t61 != 3423386873LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x282 = INT32_MIN;
	int16_t x284 = 32;

	t62 = ((x281|(x282<x283))+x284);

	if (t62 != 32799) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x285 = INT16_MIN;
	static uint16_t x287 = 7868U;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t63 = 279599110LLU;

	t63 = ((x285|(x286<x287))+x288);

	if (t63 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = 1532;
	volatile int32_t x290 = 0;
	volatile uint64_t x291 = 195LLU;
	int64_t x292 = -1LL;
	static int64_t t64 = -3991420368LL;

	t64 = ((x289|(x290<x291))+x292);

	if (t64 != 1532LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x293 = INT32_MIN;
	volatile int8_t x294 = INT8_MAX;
	int8_t x296 = 9;
	int32_t t65 = 589;

	t65 = ((x293|(x294<x295))+x296);

	if (t65 != -2147483639) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = UINT32_MAX;
	static volatile int8_t x298 = INT8_MAX;
	volatile int32_t x299 = -1;
	int64_t x300 = 2LL;

	t66 = ((x297|(x298<x299))+x300);

	if (t66 != 4294967297LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	static int16_t x302 = 0;
	int64_t x303 = INT64_MIN;
	uint16_t x304 = 3U;
	volatile int32_t t67 = 561662;

	t67 = ((x301|(x302<x303))+x304);

	if (t67 != -125) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MIN;
	int64_t x307 = -1LL;
	static int64_t t68 = 241819116959538496LL;

	t68 = ((x305|(x306<x307))+x308);

	if (t68 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 39U;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 456637U;
	int16_t x320 = -1;
	volatile int32_t t69 = 61921597;

	t69 = ((x317|(x318<x319))+x320);

	if (t69 != 38) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x323 = 4138494U;
	uint64_t x324 = 10359072269LLU;
	static volatile uint64_t t70 = 153053569003LLU;

	t70 = ((x321|(x322<x323))+x324);

	if (t70 != 10359072396LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MAX;
	volatile uint8_t x327 = 2U;
	uint32_t x328 = 6U;
	volatile uint32_t t71 = 2U;

	t71 = ((x325|(x326<x327))+x328);

	if (t71 != 2147483653U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x334 = 3804;
	static int16_t x335 = -161;
	volatile int16_t x336 = -1;
	int32_t t72 = -4894417;

	t72 = ((x333|(x334<x335))+x336);

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x342 = 3U;
	static uint32_t x343 = 1U;
	volatile int8_t x344 = 7;

	t73 = ((x341|(x342<x343))+x344);

	if (t73 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x345 = 13U;
	uint64_t x347 = 523499469LLU;
	static volatile int32_t x348 = INT32_MIN;
	volatile int32_t t74 = -220700;

	t74 = ((x345|(x346<x347))+x348);

	if (t74 != -2147483635) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x350 = INT64_MIN;
	static int64_t x351 = -1LL;
	uint64_t x352 = 177LLU;

	t75 = ((x349|(x350<x351))+x352);

	if (t75 != 25693242LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = -1;
	int32_t x355 = -1;
	int8_t x356 = INT8_MIN;
	static int32_t t76 = 31218240;

	t76 = ((x353|(x354<x355))+x356);

	if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x357 = INT64_MAX;
	uint32_t x359 = 10579190U;
	static volatile int32_t x360 = INT32_MIN;
	int64_t t77 = 241107357640616221LL;

	t77 = ((x357|(x358<x359))+x360);

	if (t77 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = -1LL;
	static int16_t x364 = 4648;
	int64_t t78 = -1761LL;

	t78 = ((x361|(x362<x363))+x364);

	if (t78 != 4647LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = UINT32_MAX;
	int32_t x367 = INT32_MIN;
	int16_t x368 = 11279;
	volatile int32_t t79 = -27346501;

	t79 = ((x365|(x366<x367))+x368);

	if (t79 != 11151) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x369 = 4112100762978707971LLU;
	volatile uint16_t x370 = 1317U;
	static volatile int8_t x372 = 0;
	volatile uint64_t t80 = 170465179092620LLU;

	t80 = ((x369|(x370<x371))+x372);

	if (t80 != 4112100762978707971LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x373 = INT16_MAX;
	static int32_t x374 = INT32_MIN;
	uint8_t x375 = UINT8_MAX;
	static volatile uint16_t x376 = UINT16_MAX;
	int32_t t81 = -2052144;

	t81 = ((x373|(x374<x375))+x376);

	if (t81 != 98302) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x378 = INT16_MAX;
	int16_t x379 = -1;
	uint8_t x380 = 53U;
	int32_t t82 = 1;

	t82 = ((x377|(x378<x379))+x380);

	if (t82 != 110) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x381 = 227850;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = UINT32_MAX;
	static int8_t x384 = INT8_MAX;
	int32_t t83 = 219;

	t83 = ((x381|(x382<x383))+x384);

	if (t83 != 227978) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = 35U;
	int8_t x386 = INT8_MIN;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = 1;

	t84 = ((x385|(x386<x387))+x388);

	if (t84 != 36) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x390 = INT16_MAX;
	uint64_t x392 = UINT64_MAX;

	t85 = ((x389|(x390<x391))+x392);

	if (t85 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x393 = UINT8_MAX;
	static int32_t x394 = INT32_MIN;
	uint64_t x395 = UINT64_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t86 = 1961;

	t86 = ((x393|(x394<x395))+x396);

	if (t86 != 65790) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x402 = 7696U;
	volatile uint64_t x403 = 8751LLU;
	static uint32_t x404 = 167U;

	t87 = ((x401|(x402<x403))+x404);

	if (t87 != 168U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = -1;
	int16_t x406 = 54;
	volatile int64_t x407 = -47983892LL;
	int8_t x408 = -37;
	volatile int32_t t88 = 3;

	t88 = ((x405|(x406<x407))+x408);

	if (t88 != -38) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x410 = -64425231094LL;
	int8_t x412 = INT8_MIN;
	uint64_t t89 = 852076LLU;

	t89 = ((x409|(x410<x411))+x412);

	if (t89 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x414 = INT16_MIN;
	int8_t x415 = 63;
	int8_t x416 = -13;
	int32_t t90 = 218067063;

	t90 = ((x413|(x414<x415))+x416);

	if (t90 != -12106) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x417 = INT64_MIN;
	volatile uint16_t x418 = 5U;
	static int8_t x419 = -1;
	uint32_t x420 = 268768U;
	int64_t t91 = 23633186658225LL;

	t91 = ((x417|(x418<x419))+x420);

	if (t91 != -9223372036854507040LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x421 = 8U;
	int64_t x422 = -1987137LL;
	volatile int8_t x423 = -17;
	volatile uint32_t x424 = UINT32_MAX;
	uint32_t t92 = 43715U;

	t92 = ((x421|(x422<x423))+x424);

	if (t92 != 8U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x425 = 114573865139534122LLU;
	int64_t x426 = -264394893566234LL;
	static uint16_t x427 = 27U;
	static int64_t x428 = INT64_MIN;

	t93 = ((x425|(x426<x427))+x428);

	if (t93 != 9337945901994309931LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x429 = 1U;
	static int64_t x430 = INT64_MIN;
	volatile int8_t x431 = -1;
	int32_t x432 = -1;
	volatile uint32_t t94 = 7U;

	t94 = ((x429|(x430<x431))+x432);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x433 = 7789;
	uint32_t x434 = UINT32_MAX;
	int32_t x435 = INT32_MAX;
	volatile uint16_t x436 = UINT16_MAX;

	t95 = ((x433|(x434<x435))+x436);

	if (t95 != 73324) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x438 = -1LL;
	volatile uint64_t x439 = 1665LLU;
	int64_t x440 = 2074745172LL;
	volatile int64_t t96 = -36724092160721212LL;

	t96 = ((x437|(x438<x439))+x440);

	if (t96 != 2074745427LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x441 = 61;
	uint16_t x442 = 577U;
	int32_t x443 = INT32_MAX;
	uint32_t x444 = 0U;
	uint32_t t97 = 310130582U;

	t97 = ((x441|(x442<x443))+x444);

	if (t97 != 61U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x445 = 17U;
	int8_t x447 = 22;
	static uint32_t x448 = 193065069U;

	t98 = ((x445|(x446<x447))+x448);

	if (t98 != 193065086U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t t99 = -395977157773LL;

	t99 = ((x449|(x450<x451))+x452);

	if (t99 != -2LL) { NG(); } else { ; }
	
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

