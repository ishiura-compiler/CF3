#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -40;
int8_t x4 = INT8_MIN;
int8_t x14 = -1;
uint32_t x16 = UINT32_MAX;
static uint64_t t2 = 994LLU;
static int32_t x17 = INT32_MIN;
uint64_t x19 = 199039LLU;
int64_t x23 = INT64_MIN;
static uint16_t x26 = 92U;
volatile uint64_t t5 = 15912LLU;
static int64_t t9 = 9737LL;
uint8_t x54 = 8U;
int16_t x56 = -1;
uint16_t x60 = 0U;
static int32_t t13 = -1673987;
int16_t x67 = INT16_MAX;
int8_t x72 = -1;
volatile uint16_t x77 = 30U;
volatile int8_t x83 = -1;
int8_t x87 = -1;
static volatile int8_t x91 = -1;
int16_t x92 = INT16_MAX;
int8_t x101 = INT8_MAX;
volatile int64_t t23 = -3896929508LL;
int32_t x106 = INT32_MIN;
static int32_t x108 = -1;
int32_t x115 = INT32_MAX;
volatile uint32_t x121 = 4574100U;
int64_t t28 = -674121LL;
int32_t x125 = -9224341;
int8_t x127 = INT8_MAX;
int16_t x130 = 1564;
int8_t x144 = INT8_MIN;
static int32_t t34 = 1;
uint32_t x150 = 3609348U;
uint32_t x153 = 212772U;
int64_t x156 = INT64_MAX;
static int64_t x163 = 1474889259582351LL;
uint64_t t39 = 20LLU;
uint64_t x173 = 3LLU;
int64_t x174 = -1001586411509LL;
int32_t x175 = INT32_MIN;
static int16_t x176 = -1;
int16_t x178 = INT16_MAX;
volatile uint16_t x187 = 67U;
uint32_t x192 = 8U;
static volatile int8_t x195 = -2;
int32_t x196 = -1;
volatile int32_t t44 = 1;
int64_t t45 = INT64_MIN;
int16_t x202 = INT16_MIN;
static uint8_t x203 = 54U;
volatile int8_t x206 = INT8_MIN;
uint64_t x209 = 2333503LLU;
volatile uint64_t t49 = 13047135995508LLU;
int64_t x218 = 105911849LL;
int64_t t50 = 35LL;
static int16_t x228 = INT16_MAX;
int64_t x231 = INT64_MIN;
int64_t x238 = INT64_MIN;
int64_t x240 = INT64_MIN;
volatile int8_t x243 = -1;
volatile uint8_t x247 = 94U;
volatile uint16_t x250 = 7153U;
volatile int16_t x255 = INT16_MAX;
uint16_t x256 = UINT16_MAX;
volatile int64_t t59 = -4985990510628LL;
uint64_t x266 = 61563039294705LLU;
volatile int32_t t61 = 2;
static int32_t x278 = INT32_MAX;
int16_t x284 = INT16_MIN;
uint16_t x289 = UINT16_MAX;
static int64_t x290 = INT64_MIN;
uint8_t x293 = UINT8_MAX;
int8_t x299 = INT8_MAX;
uint32_t x300 = 21604267U;
int32_t t67 = -144676478;
uint8_t x320 = 11U;
uint64_t x323 = 3806491924030LLU;
volatile int64_t x336 = INT64_MIN;
int32_t x337 = INT32_MAX;
uint32_t x347 = 66U;
static int16_t x348 = -1;
static volatile int16_t x349 = INT16_MIN;
volatile int64_t x355 = INT64_MIN;
static volatile uint64_t t80 = 22805365LLU;
static uint16_t x367 = 1U;
uint32_t t82 = UINT32_MAX;
static uint16_t x375 = UINT16_MAX;
uint64_t x376 = 3950525LLU;
int32_t x390 = -1;
static volatile uint64_t t86 = UINT64_MAX;
int16_t x395 = INT16_MIN;
uint32_t x397 = 46727U;
static int16_t x402 = INT16_MAX;
volatile int8_t x403 = INT8_MIN;
static uint64_t x405 = UINT64_MAX;
static volatile uint64_t t90 = 2083225529270304864LLU;
int64_t t91 = -490503972247780LL;
volatile uint64_t x420 = 38410LLU;
uint64_t x423 = 37908790168869LLU;
uint32_t x424 = 134411695U;
volatile uint64_t t93 = 34648LLU;
volatile int16_t x433 = -6566;
static volatile int16_t x443 = -314;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile uint16_t x3 = 11793U;
	int64_t t0 = 16431242226744357LL;

	t0 = (((x1/x2)%x3)|x4);

	if (t0 != -44LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 193;
	int64_t x6 = 216366971057260187LL;
	uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MAX;
	int64_t t1 = INT64_MAX;

	t1 = (((x5/x6)%x7)|x8);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = 4089727524944LLU;
	int16_t x15 = INT16_MIN;

	t2 = (((x13/x14)%x15)|x16);

	if (t2 != 4294967295LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = 36;
	int16_t x20 = 12;
	volatile uint64_t t3 = 8228896LLU;

	t3 = (((x17/x18)%x19)|x20);

	if (t3 != 126621LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	static int32_t x22 = INT32_MIN;
	int8_t x24 = INT8_MIN;
	volatile int64_t t4 = -3004147725182359539LL;

	t4 = (((x21/x22)%x23)|x24);

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 1;
	uint64_t x27 = 14660LLU;
	int16_t x28 = 743;

	t5 = (((x25/x26)%x27)|x28);

	if (t5 != 743LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MAX;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 120942U;
	int32_t x36 = INT32_MAX;
	static volatile uint32_t t6 = 232983978U;

	t6 = (((x33/x34)%x35)|x36);

	if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MIN;
	volatile int16_t x38 = INT16_MIN;
	int32_t x39 = -1;
	volatile uint16_t x40 = UINT16_MAX;
	int64_t t7 = -4587235LL;

	t7 = (((x37/x38)%x39)|x40);

	if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x41 = 3U;
	static int16_t x42 = -1;
	static volatile int16_t x43 = INT16_MIN;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t8 = 9087941;

	t8 = (((x41/x42)%x43)|x44);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = -43;
	static int32_t x46 = -1;
	int32_t x47 = -1;
	static volatile int64_t x48 = -273107LL;

	t9 = (((x45/x46)%x47)|x48);

	if (t9 != -273107LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 3320438U;
	volatile uint64_t x50 = UINT64_MAX;
	int32_t x51 = -1;
	int64_t x52 = -1LL;
	uint64_t t10 = UINT64_MAX;

	t10 = (((x49/x50)%x51)|x52);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MIN;
	static uint64_t x55 = UINT64_MAX;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (((x53/x54)%x55)|x56);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = 59;
	static uint64_t x58 = 7598944864343LLU;
	static int64_t x59 = INT64_MIN;
	volatile uint64_t t12 = 94818LLU;

	t12 = (((x57/x58)%x59)|x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = -1;
	static int8_t x62 = -16;
	static int8_t x63 = 12;
	int8_t x64 = INT8_MIN;

	t13 = (((x61/x62)%x63)|x64);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 2U;
	uint64_t x66 = 246227LLU;
	int64_t x68 = 417449162137LL;
	static uint64_t t14 = 3434791261489614824LLU;

	t14 = (((x65/x66)%x67)|x68);

	if (t14 != 417449162137LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x69 = 39U;
	volatile int64_t x70 = INT64_MAX;
	uint8_t x71 = 1U;
	int64_t t15 = 18970057527065192LL;

	t15 = (((x69/x70)%x71)|x72);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x73 = INT8_MIN;
	int8_t x74 = INT8_MIN;
	int32_t x75 = 4554165;
	uint16_t x76 = UINT16_MAX;
	static int32_t t16 = -1;

	t16 = (((x73/x74)%x75)|x76);

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x78 = INT8_MIN;
	static int16_t x79 = INT16_MIN;
	static uint32_t x80 = 12536U;
	volatile uint32_t t17 = 2137U;

	t17 = (((x77/x78)%x79)|x80);

	if (t17 != 12536U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = 2068779082337315681LLU;
	int32_t x84 = 351092;
	volatile uint64_t t18 = 1296978LLU;

	t18 = (((x81/x82)%x83)|x84);

	if (t18 != 351092LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = -316;
	int32_t x86 = 348029;
	int16_t x88 = -2449;
	volatile int32_t t19 = 249558;

	t19 = (((x85/x86)%x87)|x88);

	if (t19 != -2449) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = 68U;
	static int64_t x90 = 228184046627124LL;
	int64_t t20 = -1315062741LL;

	t20 = (((x89/x90)%x91)|x92);

	if (t20 != 32767LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = INT32_MIN;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 448U;
	static volatile int64_t t21 = -2786LL;

	t21 = (((x93/x94)%x95)|x96);

	if (t21 != -63LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	volatile uint16_t x98 = 7266U;
	static uint8_t x99 = UINT8_MAX;
	int32_t x100 = -96734;
	volatile int32_t t22 = 51063578;

	t22 = (((x97/x98)%x99)|x100);

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x102 = -1LL;
	int16_t x103 = -1148;
	int8_t x104 = INT8_MAX;

	t23 = (((x101/x102)%x103)|x104);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = -8;
	int16_t x107 = -1;
	int32_t t24 = -1734;

	t24 = (((x105/x106)%x107)|x108);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = UINT32_MAX;
	volatile int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MAX;
	uint8_t x112 = UINT8_MAX;
	static volatile uint32_t t25 = 1226123339U;

	t25 = (((x109/x110)%x111)|x112);

	if (t25 != 255U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x113 = 1473961452U;
	static uint16_t x114 = 21U;
	int64_t x116 = INT64_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (((x113/x114)%x115)|x116);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = 173716707;
	int16_t x118 = INT16_MIN;
	uint8_t x119 = 3U;
	static int16_t x120 = -543;
	volatile int32_t t27 = -3093;

	t27 = (((x117/x118)%x119)|x120);

	if (t27 != -543) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = 11LL;
	int8_t x123 = -1;
	static int16_t x124 = INT16_MIN;

	t28 = (((x121/x122)%x123)|x124);

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = INT32_MAX;
	static uint64_t x128 = 480950738653LLU;
	uint64_t t29 = 3002LLU;

	t29 = (((x125/x126)%x127)|x128);

	if (t29 != 480950738653LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	static uint32_t x132 = 105201033U;
	uint32_t t30 = 186125052U;

	t30 = (((x129/x130)%x131)|x132);

	if (t30 != 4293869049U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 505655U;
	int64_t x134 = -20314168780256349LL;
	int16_t x135 = INT16_MIN;
	uint32_t x136 = 202U;
	int64_t t31 = 82409LL;

	t31 = (((x133/x134)%x135)|x136);

	if (t31 != 202LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = -1;
	uint16_t x138 = 3705U;
	volatile uint32_t x139 = 136739978U;
	uint64_t x140 = 758241181LLU;
	uint64_t t32 = 448814230912303LLU;

	t32 = (((x137/x138)%x139)|x140);

	if (t32 != 758241181LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = 8004U;
	int32_t x142 = -1;
	int16_t x143 = INT16_MIN;
	volatile int32_t t33 = -330229612;

	t33 = (((x141/x142)%x143)|x144);

	if (t33 != -68) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = INT32_MIN;
	int8_t x146 = 60;
	static int8_t x147 = INT8_MIN;
	volatile uint16_t x148 = 1577U;

	t34 = (((x145/x146)%x147)|x148);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 24686U;
	volatile int32_t x151 = INT32_MAX;
	int32_t x152 = INT32_MAX;
	volatile uint32_t t35 = 15063U;

	t35 = (((x149/x150)%x151)|x152);

	if (t35 != 2147483647U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x154 = 7898U;
	static int32_t x155 = -1;
	volatile int64_t t36 = INT64_MAX;

	t36 = (((x153/x154)%x155)|x156);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -1LL;
	int8_t x162 = INT8_MIN;
	uint64_t x164 = 150649624935746859LLU;
	uint64_t t37 = 93752878LLU;

	t37 = (((x161/x162)%x163)|x164);

	if (t37 != 150649624935746859LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x165 = INT16_MAX;
	volatile int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MIN;
	int16_t x168 = -1;
	int32_t t38 = 33;

	t38 = (((x165/x166)%x167)|x168);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MIN;
	uint64_t x171 = 7LLU;
	static uint8_t x172 = 20U;

	t39 = (((x169/x170)%x171)|x172);

	if (t39 != 20LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (((x173/x174)%x175)|x176);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MAX;
	int32_t x179 = 194935;
	int8_t x180 = -1;
	static int32_t t41 = 3;

	t41 = (((x177/x178)%x179)|x180);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = 2;
	volatile int64_t x188 = INT64_MAX;
	volatile int64_t t42 = -1674LL;

	t42 = (((x185/x186)%x187)|x188);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x189 = 97762;
	static volatile uint16_t x190 = 5499U;
	int32_t x191 = INT32_MIN;
	uint32_t t43 = 3U;

	t43 = (((x189/x190)%x191)|x192);

	if (t43 != 25U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = 2;
	int8_t x194 = INT8_MIN;

	t44 = (((x193/x194)%x195)|x196);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	static int16_t x198 = INT16_MIN;
	static int8_t x199 = 6;
	int64_t x200 = INT64_MIN;

	t45 = (((x197/x198)%x199)|x200);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x201 = 113U;
	int16_t x204 = -1;
	int32_t t46 = -5;

	t46 = (((x201/x202)%x203)|x204);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x205 = 15;
	int8_t x207 = -16;
	int64_t x208 = -3030881LL;
	int64_t t47 = 515583526168923298LL;

	t47 = (((x205/x206)%x207)|x208);

	if (t47 != -3030881LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x210 = -1738596;
	static int16_t x211 = -3;
	uint32_t x212 = 247U;
	volatile uint64_t t48 = 336096384862LLU;

	t48 = (((x209/x210)%x211)|x212);

	if (t48 != 247LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x213 = UINT16_MAX;
	int8_t x214 = INT8_MAX;
	uint64_t x215 = 4347391619LLU;
	uint32_t x216 = UINT32_MAX;

	t49 = (((x213/x214)%x215)|x216);

	if (t49 != 4294967295LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -955;
	uint8_t x219 = 1U;
	volatile int8_t x220 = -1;

	t50 = (((x217/x218)%x219)|x220);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 126272472U;
	static int16_t x222 = INT16_MIN;
	int32_t x223 = 54609;
	int64_t x224 = -1LL;
	volatile int64_t t51 = -2026171463883856LL;

	t51 = (((x221/x222)%x223)|x224);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x225 = -1;
	int8_t x226 = -1;
	uint8_t x227 = 83U;
	int32_t t52 = 2;

	t52 = (((x225/x226)%x227)|x228);

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = 6615U;
	uint8_t x230 = 1U;
	uint32_t x232 = UINT32_MAX;
	int64_t t53 = -271607934640392LL;

	t53 = (((x229/x230)%x231)|x232);

	if (t53 != 4294967295LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MAX;
	int64_t x239 = -416204697LL;
	volatile int64_t t54 = INT64_MIN;

	t54 = (((x237/x238)%x239)|x240);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = UINT8_MAX;
	static int64_t x242 = -1LL;
	uint64_t x244 = 2076587953193261LLU;
	volatile uint64_t t55 = 18182809412731LLU;

	t55 = (((x241/x242)%x243)|x244);

	if (t55 != 2076587953193261LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = INT64_MIN;
	uint8_t x246 = 19U;
	int32_t x248 = -1;
	int64_t t56 = 57659794LL;

	t56 = (((x245/x246)%x247)|x248);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = -11554;
	int8_t x251 = INT8_MIN;
	volatile int8_t x252 = 1;
	int32_t t57 = -30572;

	t57 = (((x249/x250)%x251)|x252);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = 3LL;
	volatile int64_t x254 = INT64_MIN;
	static int64_t t58 = -592501627452797LL;

	t58 = (((x253/x254)%x255)|x256);

	if (t58 != 65535LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = INT64_MAX;
	int32_t x259 = INT32_MAX;
	static int32_t x260 = INT32_MIN;

	t59 = (((x257/x258)%x259)|x260);

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 7U;
	int8_t x267 = 9;
	int8_t x268 = 0;
	uint64_t t60 = 1LLU;

	t60 = (((x265/x266)%x267)|x268);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MAX;
	static int16_t x274 = 1;
	int32_t x275 = -1;
	int16_t x276 = INT16_MAX;

	t61 = (((x273/x274)%x275)|x276);

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x277 = UINT64_MAX;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t x280 = 7373868;
	static volatile uint64_t t62 = 144044235LLU;

	t62 = (((x277/x278)%x279)|x280);

	if (t62 != 7373870LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = UINT8_MAX;
	volatile uint64_t x282 = 6374114213LLU;
	uint16_t x283 = UINT16_MAX;
	volatile uint64_t t63 = 1LLU;

	t63 = (((x281/x282)%x283)|x284);

	if (t63 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MIN;
	static volatile int64_t t64 = -96866689549196995LL;

	t64 = (((x289/x290)%x291)|x292);

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x294 = 1U;
	static int8_t x295 = -20;
	int32_t x296 = INT32_MIN;
	uint32_t t65 = 1U;

	t65 = (((x293/x294)%x295)|x296);

	if (t65 != 2147483903U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	int64_t t66 = -4223LL;

	t66 = (((x297/x298)%x299)|x300);

	if (t66 != 21604267LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = 46;
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = INT8_MIN;
	volatile uint16_t x304 = UINT16_MAX;

	t67 = (((x301/x302)%x303)|x304);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = -3183;
	volatile int16_t x307 = INT16_MIN;
	static int8_t x308 = 13;
	volatile int32_t t68 = -126;

	t68 = (((x305/x306)%x307)|x308);

	if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = INT64_MIN;
	int32_t x310 = -4525385;
	uint16_t x311 = 6285U;
	int32_t x312 = INT32_MAX;
	static volatile int64_t t69 = -83LL;

	t69 = (((x309/x310)%x311)|x312);

	if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x313 = 110U;
	volatile uint16_t x314 = 2U;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	static volatile int64_t t70 = -5141315LL;

	t70 = (((x313/x314)%x315)|x316);

	if (t70 != -32713LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x317 = UINT32_MAX;
	int8_t x318 = INT8_MIN;
	int32_t x319 = -1;
	uint32_t t71 = 12427U;

	t71 = (((x317/x318)%x319)|x320);

	if (t71 != 11U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = INT16_MIN;
	static int32_t x322 = -1;
	int8_t x324 = INT8_MIN;
	uint64_t t72 = 16208270979625263LLU;

	t72 = (((x321/x322)%x323)|x324);

	if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x325 = 3076;
	int32_t x326 = -1;
	int32_t x327 = -1;
	int64_t x328 = -53766433524013544LL;
	volatile int64_t t73 = 1LL;

	t73 = (((x325/x326)%x327)|x328);

	if (t73 != -53766433524013544LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = 0;
	static volatile int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	int64_t t74 = 26693638733LL;

	t74 = (((x329/x330)%x331)|x332);

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = 26118700322773902LL;
	int32_t x334 = -2;
	volatile int8_t x335 = INT8_MIN;
	volatile int64_t t75 = -7497LL;

	t75 = (((x333/x334)%x335)|x336);

	if (t75 != -71LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x338 = 313LLU;
	int16_t x339 = 7;
	int32_t x340 = -1;
	uint64_t t76 = UINT64_MAX;

	t76 = (((x337/x338)%x339)|x340);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = 48;
	static int64_t x342 = -101944608518187LL;
	int32_t x343 = 61;
	static uint64_t x344 = 2098163439719886064LLU;
	static volatile uint64_t t77 = 2LLU;

	t77 = (((x341/x342)%x343)|x344);

	if (t77 != 2098163439719886064LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x345 = 170716091918LLU;
	uint32_t x346 = UINT32_MAX;
	uint64_t t78 = UINT64_MAX;

	t78 = (((x345/x346)%x347)|x348);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x350 = INT32_MAX;
	int16_t x351 = INT16_MAX;
	static uint64_t x352 = 6068166842149522LLU;
	volatile uint64_t t79 = 61440LLU;

	t79 = (((x349/x350)%x351)|x352);

	if (t79 != 6068166842149522LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x353 = UINT32_MAX;
	static uint64_t x354 = UINT64_MAX;
	int8_t x356 = -3;

	t80 = (((x353/x354)%x355)|x356);

	if (t80 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = INT8_MIN;
	uint64_t x362 = 2730304LLU;
	int8_t x363 = INT8_MAX;
	static int32_t x364 = -1;
	static volatile uint64_t t81 = UINT64_MAX;

	t81 = (((x361/x362)%x363)|x364);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x365 = 2900U;
	int32_t x366 = INT32_MIN;
	int16_t x368 = -1;

	t82 = (((x365/x366)%x367)|x368);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MAX;
	int32_t x371 = -89102;
	volatile int64_t x372 = -1LL;
	volatile int64_t t83 = -67976751824841LL;

	t83 = (((x369/x370)%x371)|x372);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x373 = INT8_MAX;
	volatile int32_t x374 = INT32_MAX;
	volatile uint64_t t84 = 882375940543LLU;

	t84 = (((x373/x374)%x375)|x376);

	if (t84 != 3950525LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x381 = 13U;
	static int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = 19U;
	volatile int32_t t85 = 264;

	t85 = (((x381/x382)%x383)|x384);

	if (t85 != 19) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x389 = UINT8_MAX;
	volatile int8_t x391 = INT8_MAX;
	static uint64_t x392 = 28979483075457435LLU;

	t86 = (((x389/x390)%x391)|x392);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x393 = 1;
	int8_t x394 = INT8_MAX;
	uint64_t x396 = 10321966LLU;
	uint64_t t87 = 482303769LLU;

	t87 = (((x393/x394)%x395)|x396);

	if (t87 != 10321966LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x398 = 739824762590LLU;
	int16_t x399 = INT16_MIN;
	volatile int32_t x400 = INT32_MIN;
	static volatile uint64_t t88 = 9LLU;

	t88 = (((x397/x398)%x399)|x400);

	if (t88 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = INT8_MIN;
	uint64_t x404 = 126266LLU;
	volatile uint64_t t89 = 1560893LLU;

	t89 = (((x401/x402)%x403)|x404);

	if (t89 != 126266LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x406 = 1U;
	volatile int64_t x407 = INT64_MIN;
	uint16_t x408 = 147U;

	t90 = (((x405/x406)%x407)|x408);

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = -1LL;
	uint8_t x414 = UINT8_MAX;
	volatile int32_t x415 = INT32_MIN;
	int8_t x416 = -1;

	t91 = (((x413/x414)%x415)|x416);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x417 = 14224U;
	int32_t x418 = -445633210;
	uint64_t x419 = UINT64_MAX;
	uint64_t t92 = 922372394679LLU;

	t92 = (((x417/x418)%x419)|x420);

	if (t92 != 38410LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = INT8_MAX;
	int8_t x422 = INT8_MIN;

	t93 = (((x421/x422)%x423)|x424);

	if (t93 != 134411695LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MAX;
	uint64_t x427 = 277027551LLU;
	volatile int32_t x428 = -1;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x425/x426)%x427)|x428);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = INT16_MAX;
	uint8_t x430 = UINT8_MAX;
	int64_t x431 = INT64_MAX;
	int16_t x432 = INT16_MAX;
	volatile int64_t t95 = -6374754LL;

	t95 = (((x429/x430)%x431)|x432);

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x434 = INT8_MIN;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 121273903LLU;
	uint64_t t96 = 22LLU;

	t96 = (((x433/x434)%x435)|x436);

	if (t96 != 121273919LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = -1;
	int64_t x438 = INT64_MIN;
	int8_t x439 = INT8_MAX;
	static int8_t x440 = INT8_MIN;
	int64_t t97 = -57590812563820LL;

	t97 = (((x437/x438)%x439)|x440);

	if (t97 != -128LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x441 = 337566685535LLU;
	volatile int32_t x442 = -738216;
	static int8_t x444 = INT8_MAX;
	uint64_t t98 = 7LLU;

	t98 = (((x441/x442)%x443)|x444);

	if (t98 != 127LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x445 = INT16_MIN;
	int8_t x446 = INT8_MAX;
	int8_t x447 = INT8_MIN;
	int64_t x448 = -16223612140LL;
	int64_t t99 = 12436740LL;

	t99 = (((x445/x446)%x447)|x448);

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

