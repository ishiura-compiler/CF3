#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
volatile uint8_t x12 = UINT8_MAX;
int8_t x13 = INT8_MAX;
static int8_t x14 = -1;
volatile int8_t x23 = 0;
uint64_t x32 = 2160324LLU;
volatile uint64_t t6 = 16831143935LLU;
static volatile uint16_t x43 = 13U;
static uint16_t x45 = 3146U;
static uint8_t x46 = 12U;
uint16_t x48 = UINT16_MAX;
static volatile int32_t t9 = -1;
volatile int16_t x53 = -1;
volatile uint32_t x63 = 58U;
static volatile int16_t x65 = -1;
int8_t x70 = -1;
uint32_t t16 = 249351U;
volatile int16_t x89 = INT16_MAX;
static int8_t x90 = 1;
int32_t t18 = -1370;
static int8_t x93 = INT8_MIN;
static int16_t x99 = -1;
volatile int32_t t20 = -8439169;
int8_t x102 = INT8_MIN;
int64_t x104 = INT64_MAX;
int32_t x105 = INT32_MAX;
int32_t x129 = -1;
int64_t x130 = INT64_MIN;
int64_t t27 = -1392508450639388068LL;
static uint32_t t28 = 4173060U;
uint16_t x137 = 17U;
volatile uint64_t t29 = 6542785LLU;
int16_t x141 = INT16_MAX;
static int8_t x142 = -28;
uint64_t t30 = 809676045659097834LLU;
volatile uint32_t t31 = 37937009U;
int16_t x153 = -7931;
int64_t x158 = -1LL;
volatile uint64_t x168 = 712402168537091LLU;
int16_t x175 = -1;
int8_t x176 = -1;
uint16_t x181 = 14U;
uint16_t x182 = 811U;
static uint16_t x183 = UINT16_MAX;
uint16_t x189 = UINT16_MAX;
static int16_t x190 = 15;
volatile uint64_t x198 = 21189128LLU;
volatile uint32_t t43 = 0U;
volatile uint64_t x205 = UINT64_MAX;
int16_t x209 = -1;
int32_t x213 = INT32_MAX;
static int8_t x230 = INT8_MAX;
static int8_t x232 = INT8_MIN;
int64_t x258 = INT64_MIN;
int32_t x262 = INT32_MAX;
int32_t t53 = -13210592;
static int32_t x267 = 307358;
static int64_t t56 = -3474997204184LL;
int32_t x285 = 57481;
int16_t x287 = INT16_MIN;
uint8_t x291 = 72U;
volatile uint64_t x298 = UINT64_MAX;
uint32_t x304 = 754253419U;
int64_t t62 = -47352LL;
uint64_t x316 = UINT64_MAX;
static volatile uint16_t x320 = UINT16_MAX;
uint8_t x321 = UINT8_MAX;
int16_t x333 = INT16_MIN;
int32_t x334 = -1;
int64_t t67 = -116241838684845756LL;
int64_t x342 = -1LL;
uint64_t x345 = 940484235840004220LLU;
volatile int64_t x346 = -25495254879LL;
uint32_t x356 = 1748548369U;
volatile int32_t t72 = 1;
volatile uint64_t t73 = 249847013099817LLU;
volatile int64_t t74 = -6LL;
volatile uint32_t x375 = 18U;
static int32_t x376 = -23241139;
volatile uint8_t x377 = 92U;
static int64_t x379 = -1LL;
volatile uint8_t x380 = UINT8_MAX;
static int8_t x386 = INT8_MIN;
volatile uint16_t x394 = UINT16_MAX;
volatile uint64_t t79 = 21128161541LLU;
int16_t x399 = -2;
static int64_t t81 = 457258LL;
uint8_t x410 = 89U;
int32_t x418 = -1;
volatile int16_t x425 = INT16_MIN;
int32_t x429 = -1;
uint64_t x430 = 72222LLU;
int64_t x440 = INT64_MIN;
volatile uint32_t t87 = 11231032U;
static int8_t x446 = INT8_MIN;
volatile int8_t x447 = -1;
static int16_t x457 = INT16_MAX;
int16_t x465 = -2167;
static uint16_t x479 = 36U;
static int64_t x482 = -4900382LL;
int16_t x491 = -1;
uint64_t t96 = 1759506LLU;
static uint32_t x498 = UINT32_MAX;
uint64_t t97 = 423LLU;
uint32_t x503 = 2U;
int32_t x508 = INT32_MAX;


void f0(void) {
	static volatile int16_t x1 = 1862;
	int16_t x2 = 161;
	int32_t x4 = -1;
	volatile int32_t t0 = 1996;

	t0 = ((x1*(x2^x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static uint32_t x6 = 122884731U;
	int8_t x7 = -1;
	int32_t x8 = -1;
	volatile uint32_t t1 = 1027706U;

	t1 = ((x5*(x6^x7))%x8);

	if (t1 != 2844343808U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	static int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -9;

	t2 = ((x9*(x10^x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x15 = UINT32_MAX;
	int8_t x16 = INT8_MAX;
	uint32_t t3 = 454U;

	t3 = ((x13*(x14^x15))%x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MAX;
	volatile int32_t x20 = 53;
	volatile int64_t t4 = 708773794LL;

	t4 = ((x17*(x18^x19))%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint64_t x22 = 2007LLU;
	int64_t x24 = -68164117756024801LL;
	static volatile uint64_t t5 = 100LLU;

	t5 = ((x21*(x22^x23))%x24);

	if (t5 != 4309999679529LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x29 = -1;
	uint32_t x30 = 7U;
	static uint32_t x31 = 112501870U;

	t6 = ((x29*(x30^x31))%x32);

	if (t6 != 78167LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = -1;
	static int8_t x35 = INT8_MIN;
	volatile int8_t x36 = 43;
	int32_t t7 = -6662;

	t7 = ((x33*(x34^x35))%x36);

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	uint32_t x42 = UINT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile uint32_t t8 = 578472U;

	t8 = ((x41*(x42^x43))%x44);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x47 = 7;

	t9 = ((x45*(x46^x47))%x48);

	if (t9 != 34606) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x49 = -1;
	volatile int32_t x50 = INT32_MAX;
	uint64_t x51 = 0LLU;
	int8_t x52 = -1;
	uint64_t t10 = 46514719896LLU;

	t10 = ((x49*(x50^x51))%x52);

	if (t10 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = INT16_MIN;
	int16_t x55 = 23;
	volatile int64_t x56 = INT64_MIN;
	volatile int64_t t11 = -107057484258LL;

	t11 = ((x53*(x54^x55))%x56);

	if (t11 != 32745LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	int32_t x58 = 126656;
	volatile int32_t x59 = INT32_MIN;
	int8_t x60 = -1;
	static volatile int64_t t12 = -8362LL;

	t12 = ((x57*(x58^x59))%x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = 46;
	int32_t x62 = -1;
	int32_t x64 = -1;
	uint32_t t13 = 1043U;

	t13 = ((x61*(x62^x63))%x64);

	if (t13 != 4294964582U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x66 = 1259LLU;
	uint64_t x67 = 463327153533LLU;
	int8_t x68 = INT8_MIN;
	static volatile uint64_t t14 = 211149605375LLU;

	t14 = ((x65*(x66^x67))%x68);

	if (t14 != 18446743610382399082LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1683852094027LL;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MIN;
	int64_t t15 = 414042606LL;

	t15 = ((x69*(x70^x71))%x72);

	if (t15 != -53LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 0U;
	static int16_t x78 = INT16_MIN;
	uint32_t x79 = 1188495573U;
	static uint32_t x80 = 11830254U;

	t16 = ((x77*(x78^x79))%x80);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x85 = 445U;
	static uint64_t x86 = 675155823373589LLU;
	int16_t x87 = INT16_MIN;
	uint64_t x88 = 3445LLU;
	volatile uint64_t t17 = 17013150232183LLU;

	t17 = ((x85*(x86^x87))%x88);

	if (t17 != 536LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x91 = -1;
	int8_t x92 = INT8_MIN;

	t18 = ((x89*(x90^x91))%x92);

	if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x94 = -1;
	int16_t x95 = -2;
	int32_t x96 = -168;
	int32_t t19 = -52375;

	t19 = ((x93*(x94^x95))%x96);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	uint8_t x98 = 7U;
	int32_t x100 = 81101560;

	t20 = ((x97*(x98^x99))%x100);

	if (t20 != 1024) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = 20U;
	static int8_t x103 = -10;
	int64_t t21 = -86606349887843LL;

	t21 = ((x101*(x102^x103))%x104);

	if (t21 != 2360LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x106 = INT32_MIN;
	uint64_t x107 = UINT64_MAX;
	static int64_t x108 = INT64_MAX;
	volatile uint64_t t22 = 485LLU;

	t22 = ((x105*(x106^x107))%x108);

	if (t22 != 4611686014132420609LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 8216965U;
	int8_t x114 = 32;
	volatile uint32_t x115 = UINT32_MAX;
	volatile int16_t x116 = -103;
	uint32_t t23 = 2763267U;

	t23 = ((x113*(x114^x115))%x116);

	if (t23 != 4023807451U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = -25;
	uint64_t x119 = 1967840606795LLU;
	static int16_t x120 = -1;
	static volatile uint64_t t24 = 1392LLU;

	t24 = ((x117*(x118^x119))%x120);

	if (t24 != 15244481836549716564LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 41815LLU;
	int8_t x122 = -61;
	int64_t x123 = INT64_MIN;
	static volatile uint8_t x124 = 111U;
	uint64_t t25 = 4319042771LLU;

	t25 = ((x121*(x122^x123))%x124);

	if (t25 != 34LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = -1;
	int64_t x126 = -520162LL;
	int8_t x127 = INT8_MAX;
	int8_t x128 = -1;
	static volatile int64_t t26 = -934LL;

	t26 = ((x125*(x126^x127))%x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x131 = 1U;
	volatile uint32_t x132 = 461953779U;

	t27 = ((x129*(x130^x131))%x132);

	if (t27 != 439425952LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x133 = INT8_MIN;
	static int16_t x134 = 5932;
	static uint32_t x135 = 62852292U;
	volatile int32_t x136 = -1;

	t28 = ((x133*(x134^x135))%x136);

	if (t28 != 544345088U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x138 = INT16_MAX;
	uint32_t x139 = UINT32_MAX;
	uint64_t x140 = UINT64_MAX;

	t29 = ((x137*(x138^x139))%x140);

	if (t29 != 4294410240LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x143 = INT16_MAX;
	uint64_t x144 = 290752617213921757LLU;

	t30 = ((x141*(x142^x143))%x144);

	if (t30 != 129329188159656578LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MAX;
	int32_t x146 = -869300184;
	uint32_t x147 = 1U;
	uint16_t x148 = UINT16_MAX;

	t31 = ((x145*(x146^x147))%x148);

	if (t31 != 11176U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x154 = 1;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = INT16_MIN;
	volatile uint64_t t32 = 149928189722628308LLU;

	t32 = ((x153*(x154^x155))%x156);

	if (t32 != 15862LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x157 = 9527593537457LLU;
	uint8_t x159 = 58U;
	uint32_t x160 = 31110767U;
	static uint64_t t33 = 112LLU;

	t33 = ((x157*(x158^x159))%x160);

	if (t33 != 6836078LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x161 = 28U;
	static int32_t x162 = -1;
	uint32_t x163 = 9U;
	int64_t x164 = INT64_MAX;
	int64_t t34 = 1262438195724LL;

	t34 = ((x161*(x162^x163))%x164);

	if (t34 != 4294967016LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x165 = UINT64_MAX;
	int32_t x166 = -1;
	int8_t x167 = INT8_MAX;
	uint64_t t35 = 5578067027509LLU;

	t35 = ((x165*(x166^x167))%x168);

	if (t35 != 128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x169 = -1LL;
	int8_t x170 = INT8_MAX;
	int8_t x171 = -1;
	static uint32_t x172 = 6U;
	volatile int64_t t36 = 162232694229LL;

	t36 = ((x169*(x170^x171))%x172);

	if (t36 != 2LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x173 = 51907907640976319LL;
	volatile uint64_t x174 = UINT64_MAX;
	uint64_t t37 = 1031915LLU;

	t37 = ((x173*(x174^x175))%x176);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x177 = -1;
	volatile int8_t x178 = 37;
	static volatile int16_t x179 = -1;
	int64_t x180 = INT64_MIN;
	int64_t t38 = 771540676260571835LL;

	t38 = ((x177*(x178^x179))%x180);

	if (t38 != 38LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x184 = -3;
	static int32_t t39 = 767;

	t39 = ((x181*(x182^x183))%x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 1U;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	int64_t x188 = -1LL;
	int64_t t40 = 223LL;

	t40 = ((x185*(x186^x187))%x188);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x191 = 18837;
	int32_t x192 = -1;
	volatile int32_t t41 = -8237;

	t41 = ((x189*(x190^x191))%x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = -1013182538;
	volatile int16_t x199 = INT16_MIN;
	int16_t x200 = INT16_MIN;
	uint64_t t42 = 288387311294808LLU;

	t42 = ((x197*(x198^x199))%x200);

	if (t42 != 21459100783856048LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 2833443U;
	int8_t x202 = 1;
	static int16_t x203 = 3;
	int16_t x204 = INT16_MAX;

	t43 = ((x201*(x202^x203))%x204);

	if (t43 != 30962U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MAX;
	int8_t x208 = INT8_MIN;
	static volatile uint64_t t44 = 3348949275984157901LLU;

	t44 = ((x205*(x206^x207))%x208);

	if (t44 != 2147483521LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x210 = INT8_MIN;
	static int16_t x211 = INT16_MIN;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t45 = 14497857;

	t45 = ((x209*(x210^x211))%x212);

	if (t45 != -32640) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x214 = INT32_MIN;
	static volatile int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MIN;
	volatile int32_t t46 = 31777584;

	t46 = ((x213*(x214^x215))%x216);

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x217 = 408410U;
	volatile uint16_t x218 = UINT16_MAX;
	static volatile int64_t x219 = -1LL;
	int8_t x220 = -48;
	volatile int64_t t47 = -1LL;

	t47 = ((x217*(x218^x219))%x220);

	if (t47 != -32LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 97U;
	uint32_t x226 = 471708701U;
	int64_t x227 = 46916356777LL;
	int32_t x228 = 28475322;
	int64_t t48 = 1LL;

	t48 = ((x225*(x226^x227))%x228);

	if (t48 != 7730516LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = -1;
	int8_t x231 = INT8_MIN;
	int32_t t49 = 158;

	t49 = ((x229*(x230^x231))%x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int64_t x238 = -1052841LL;
	int64_t x239 = INT64_MIN;
	uint64_t x240 = 5446826108LLU;
	uint64_t t50 = 2050830752LLU;

	t50 = ((x237*(x238^x239))%x240);

	if (t50 != 441331837LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MAX;
	int16_t x250 = -849;
	uint8_t x251 = UINT8_MAX;
	int64_t x252 = -2027514LL;
	volatile int64_t t51 = 117704LL;

	t51 = ((x249*(x250^x251))%x252);

	if (t51 != -119888LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = -1;
	volatile int64_t x259 = INT64_MIN;
	uint64_t x260 = UINT64_MAX;
	uint64_t t52 = 874549841795LLU;

	t52 = ((x257*(x258^x259))%x260);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x261 = -1;
	volatile int16_t x263 = 1;
	static int8_t x264 = -1;

	t53 = ((x261*(x262^x263))%x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x265 = 1177U;
	uint64_t x266 = 100173961LLU;
	volatile uint16_t x268 = UINT16_MAX;
	volatile uint64_t t54 = 1164LLU;

	t54 = ((x265*(x266^x267))%x268);

	if (t54 != 26232LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x269 = -1LL;
	volatile int64_t x270 = INT64_MIN;
	int64_t x271 = 43161412LL;
	volatile uint8_t x272 = 2U;
	volatile int64_t t55 = 7888624863809LL;

	t55 = ((x269*(x270^x271))%x272);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x273 = UINT8_MAX;
	int32_t x274 = INT32_MIN;
	volatile int64_t x275 = 260708LL;
	static volatile int8_t x276 = INT8_MAX;

	t56 = ((x273*(x274^x275))%x276);

	if (t56 != -31LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x281 = INT64_MIN;
	int32_t x282 = -1;
	volatile int8_t x283 = -1;
	int8_t x284 = 4;
	volatile int64_t t57 = -12LL;

	t57 = ((x281*(x282^x283))%x284);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x286 = 3180LLU;
	static int64_t x288 = 103LL;
	volatile uint64_t t58 = 146LLU;

	t58 = ((x285*(x286^x287))%x288);

	if (t58 != 72LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x289 = -1;
	int8_t x290 = INT8_MAX;
	int32_t x292 = INT32_MIN;
	volatile int32_t t59 = -17378352;

	t59 = ((x289*(x290^x291))%x292);

	if (t59 != -55) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = INT64_MIN;
	int16_t x299 = INT16_MAX;
	static int32_t x300 = 3983696;
	volatile uint64_t t60 = 959374137LLU;

	t60 = ((x297*(x298^x299))%x300);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = 4504U;
	volatile uint32_t t61 = 6U;

	t61 = ((x301*(x302^x303))%x304);

	if (t61 != 3617792U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x305 = 0;
	int8_t x306 = INT8_MIN;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = -11356534494211LL;

	t62 = ((x305*(x306^x307))%x308);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x313 = 253;
	int16_t x314 = -6;
	static uint64_t x315 = UINT64_MAX;
	volatile uint64_t t63 = 36LLU;

	t63 = ((x313*(x314^x315))%x316);

	if (t63 != 1265LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = -1;
	uint8_t x319 = 10U;
	volatile int32_t t64 = 3209022;

	t64 = ((x317*(x318^x319))%x320);

	if (t64 != 32773) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x322 = -3;
	volatile uint64_t x323 = 1309LLU;
	static int16_t x324 = INT16_MIN;
	uint64_t t65 = 50560574116LLU;

	t65 = ((x321*(x322^x323))%x324);

	if (t65 != 18446744073709217056LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x325 = INT16_MIN;
	static int32_t x326 = INT32_MIN;
	volatile uint32_t x327 = 147182475U;
	static uint16_t x328 = UINT16_MAX;
	uint32_t t66 = 24277U;

	t66 = ((x325*(x326^x327))%x328);

	if (t66 != 38458U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x335 = 79993959614140LL;
	int8_t x336 = -1;

	t67 = ((x333*(x334^x335))%x336);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x337 = 1U;
	volatile int8_t x338 = -42;
	int32_t x339 = -3;
	uint8_t x340 = 11U;
	volatile int32_t t68 = -1660;

	t68 = ((x337*(x338^x339))%x340);

	if (t68 != 10) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x341 = 337U;
	int32_t x343 = 48716436;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t69 = 83538917LLU;

	t69 = ((x341*(x342^x343))%x344);

	if (t69 != 18446744057292112347LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x347 = -1;
	int8_t x348 = INT8_MIN;
	uint64_t t70 = 2217423885559613LLU;

	t70 = ((x345*(x346^x347))%x348);

	if (t70 != 14273164854782759304LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x353 = UINT8_MAX;
	static int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	volatile int64_t t71 = -546832416LL;

	t71 = ((x353*(x354^x355))%x356);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x357 = INT16_MAX;
	uint16_t x358 = 7U;
	uint8_t x359 = 0U;
	int32_t x360 = -1311522;

	t72 = ((x357*(x358^x359))%x360);

	if (t72 != 229369) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x361 = -12119;
	volatile int64_t x362 = 3274567LL;
	volatile uint64_t x363 = UINT64_MAX;
	volatile int16_t x364 = -1;

	t73 = ((x361*(x362^x363))%x364);

	if (t73 != 39684489592LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x365 = 1U;
	int64_t x366 = -2223LL;
	static int8_t x367 = INT8_MIN;
	volatile int16_t x368 = INT16_MIN;

	t74 = ((x365*(x366^x367))%x368);

	if (t74 != 2257LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x373 = INT32_MIN;
	uint16_t x374 = 878U;
	static uint32_t t75 = 149084250U;

	t75 = ((x373*(x374^x375))%x376);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x378 = 2599U;
	volatile int64_t t76 = -624LL;

	t76 = ((x377*(x378^x379))%x380);

	if (t76 != -10LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = -1;
	uint32_t x387 = UINT32_MAX;
	uint64_t x388 = UINT64_MAX;
	uint64_t t77 = 19237LLU;

	t77 = ((x385*(x386^x387))%x388);

	if (t77 != 4294967169LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x389 = 8308131U;
	int64_t x390 = INT64_MIN;
	uint64_t x391 = UINT64_MAX;
	static uint32_t x392 = 112838922U;
	volatile uint64_t t78 = 3619LLU;

	t78 = ((x389*(x390^x391))%x392);

	if (t78 != 38884043LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x393 = 42160650954LLU;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = UINT64_MAX;

	t79 = ((x393*(x394^x395))%x396);

	if (t79 != 18443986387691301430LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x397 = INT8_MIN;
	volatile int64_t x398 = 7680297682336530LL;
	volatile int16_t x400 = INT16_MIN;
	volatile int64_t t80 = 901574LL;

	t80 = ((x397*(x398^x399))%x400);

	if (t80 != 2560LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x401 = 7;
	int8_t x402 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	int64_t x404 = 1105LL;

	t81 = ((x401*(x402^x403))%x404);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x409 = INT8_MIN;
	uint64_t x411 = 8617760046288LLU;
	int64_t x412 = -194519993547762LL;
	volatile uint64_t t82 = 6821LLU;

	t82 = ((x409*(x410^x411))%x412);

	if (t82 != 18445641000423635840LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x417 = 31U;
	volatile int8_t x419 = -2;
	int64_t x420 = INT64_MAX;
	int64_t t83 = 797194264LL;

	t83 = ((x417*(x418^x419))%x420);

	if (t83 != 31LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x426 = 0;
	int8_t x427 = INT8_MAX;
	static volatile uint32_t x428 = 15U;
	volatile uint32_t t84 = 38U;

	t84 = ((x425*(x426^x427))%x428);

	if (t84 != 5U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x431 = INT8_MIN;
	static int16_t x432 = -219;
	uint64_t t85 = 4477562123344636LLU;

	t85 = ((x429*(x430^x431))%x432);

	if (t85 != 72290LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x437 = UINT32_MAX;
	volatile int8_t x438 = INT8_MIN;
	int8_t x439 = INT8_MAX;
	volatile int64_t t86 = 1LL;

	t86 = ((x437*(x438^x439))%x440);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x441 = 14120254U;
	int32_t x442 = 479501;
	static uint16_t x443 = 1987U;
	int16_t x444 = INT16_MAX;

	t87 = ((x441*(x442^x443))%x444);

	if (t87 != 13007U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x445 = UINT64_MAX;
	volatile int8_t x448 = INT8_MIN;
	uint64_t t88 = 899403667063246050LLU;

	t88 = ((x445*(x446^x447))%x448);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x458 = 27LL;
	static uint64_t x459 = 28248141LLU;
	int32_t x460 = INT32_MAX;
	volatile uint64_t t89 = 2031234967LLU;

	t89 = ((x457*(x458^x459))%x460);

	if (t89 != 41679193LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x461 = INT8_MIN;
	int8_t x462 = -1;
	int16_t x463 = INT16_MIN;
	static uint16_t x464 = 160U;
	static int32_t t90 = -56171920;

	t90 = ((x461*(x462^x463))%x464);

	if (t90 != -96) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x466 = 22110794419LLU;
	static int64_t x467 = INT64_MIN;
	int8_t x468 = INT8_MIN;
	volatile uint64_t t91 = 40948207606300884LLU;

	t91 = ((x465*(x466^x467))%x468);

	if (t91 != 9223324122763269835LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x469 = 2U;
	int64_t x470 = INT64_MIN;
	static volatile int64_t x471 = INT64_MAX;
	int32_t x472 = INT32_MAX;
	int64_t t92 = 16217182993534654LL;

	t92 = ((x469*(x470^x471))%x472);

	if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x473 = -14348LL;
	uint64_t x474 = 212232012609LLU;
	volatile int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MIN;
	uint64_t t93 = 59LLU;

	t93 = ((x473*(x474^x475))%x476);

	if (t93 != 3045105363165428LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x477 = INT16_MIN;
	uint64_t x478 = 2521174544LLU;
	int32_t x480 = -1;
	volatile uint64_t t94 = 11LLU;

	t94 = ((x477*(x478^x479))%x480);

	if (t94 != 18446661459860914176LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x481 = UINT8_MAX;
	uint8_t x483 = UINT8_MAX;
	volatile int16_t x484 = -1;
	volatile int64_t t95 = 308LL;

	t95 = ((x481*(x482^x483))%x484);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x489 = -1LL;
	uint64_t x490 = 58LLU;
	static int64_t x492 = INT64_MIN;

	t96 = ((x489*(x490^x491))%x492);

	if (t96 != 59LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x497 = 2371196491LLU;
	volatile int16_t x499 = INT16_MAX;
	uint16_t x500 = UINT16_MAX;

	t97 = ((x497*(x498^x499))%x500);

	if (t97 != 37328LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x501 = 4839U;
	int8_t x502 = INT8_MIN;
	volatile uint64_t x504 = UINT64_MAX;
	volatile uint64_t t98 = 47LLU;

	t98 = ((x501*(x502^x503))%x504);

	if (t98 != 4294357582LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x505 = 28987058LLU;
	static int64_t x506 = INT64_MIN;
	volatile uint32_t x507 = UINT32_MAX;
	static uint64_t t99 = 277505288399030624LLU;

	t99 = ((x505*(x506^x507))%x508);

	if (t99 != 28987058LLU) { NG(); } else { ; }
	
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

