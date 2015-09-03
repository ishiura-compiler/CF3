#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 950655059U;
static int8_t x4 = -7;
volatile int32_t x6 = -1;
static int64_t x7 = -1LL;
uint8_t x10 = UINT8_MAX;
uint32_t x13 = 1765204484U;
int64_t x20 = -1LL;
static volatile int64_t x21 = -857690195LL;
int32_t x24 = -1;
int8_t x26 = 0;
int32_t t8 = -1980;
static volatile uint8_t x37 = 102U;
int64_t x38 = -672LL;
static uint8_t x45 = 3U;
uint64_t x46 = 1285146196765894LLU;
volatile int32_t t12 = -433918598;
volatile uint8_t x53 = 0U;
volatile uint32_t x59 = 41648U;
int32_t t14 = 296395;
int8_t x64 = 0;
uint64_t x67 = UINT64_MAX;
static int64_t x69 = INT64_MIN;
static uint16_t x70 = 5U;
int32_t x73 = INT32_MIN;
int16_t x75 = INT16_MIN;
int16_t x76 = INT16_MIN;
int32_t x77 = 68597;
int32_t x80 = -4047;
int32_t t19 = -81107984;
volatile int32_t x89 = -1;
uint16_t x90 = 829U;
uint32_t t24 = 6U;
uint8_t x101 = 1U;
volatile int8_t x102 = -1;
int32_t t25 = 795073033;
uint64_t x107 = 4LLU;
int64_t x108 = 299582LL;
int32_t x109 = 0;
static volatile int16_t x115 = INT16_MIN;
int32_t x118 = INT32_MIN;
int64_t x127 = -1895463780851LL;
static volatile int64_t t32 = INT64_MIN;
int16_t x135 = -1;
static volatile int64_t x145 = -1LL;
int16_t x146 = INT16_MIN;
int16_t x148 = INT16_MIN;
int64_t x151 = INT64_MIN;
int8_t x152 = INT8_MIN;
uint32_t x154 = 11667U;
static uint32_t x158 = 139142U;
uint64_t x164 = 170184003920659LLU;
int64_t x165 = -1LL;
int32_t x170 = 22;
int64_t x171 = -1LL;
static int16_t x172 = 1;
uint32_t x179 = 23814899U;
int8_t x180 = 1;
int32_t t44 = 20132016;
int64_t t48 = 1369991019537LL;
static int16_t x207 = INT16_MAX;
static int64_t x212 = -227637LL;
int32_t t52 = -1;
volatile int16_t x216 = 31;
int8_t x224 = -1;
int32_t x227 = -83;
uint32_t x230 = 1491920842U;
static int64_t x233 = -1LL;
int64_t x237 = INT64_MIN;
int16_t x242 = 174;
uint16_t x246 = 368U;
volatile int8_t x247 = -3;
int8_t x248 = -1;
uint16_t x254 = 92U;
uint32_t x255 = 423203U;
int16_t x259 = 1;
volatile int32_t t64 = 3;
uint16_t x268 = 17U;
uint32_t t66 = 3U;
uint16_t x274 = 396U;
uint64_t x278 = 20608759556704LLU;
static volatile uint32_t t69 = 38928608U;
uint64_t t70 = UINT64_MAX;
uint8_t x285 = 0U;
int32_t x287 = -15672514;
volatile int32_t t74 = INT32_MIN;
static int64_t x304 = 17834LL;
int32_t x305 = INT32_MIN;
int32_t t76 = INT32_MIN;
uint32_t t77 = UINT32_MAX;
int16_t x313 = INT16_MIN;
static int32_t x315 = 1380355;
static int16_t x320 = INT16_MIN;
int64_t x323 = INT64_MIN;
volatile int64_t x328 = -1LL;
static int8_t x329 = -9;
int8_t x333 = -1;
uint32_t x334 = UINT32_MAX;
int32_t x336 = 815948469;
volatile int64_t x345 = -423780322LL;
int16_t x346 = INT16_MIN;
volatile uint8_t x348 = 1U;
static uint64_t x350 = 8975136761545141407LLU;
int32_t t88 = -237;
uint64_t x360 = UINT64_MAX;
volatile int64_t x368 = INT64_MIN;
uint8_t x370 = UINT8_MAX;
int64_t x372 = INT64_MAX;
volatile uint8_t x375 = 0U;
volatile int32_t x377 = 23766;
volatile int32_t t94 = 24416;
uint32_t x382 = UINT32_MAX;
int32_t x391 = INT32_MIN;
uint16_t x396 = 154U;
volatile int64_t x397 = -223690LL;


void f0(void) {
	volatile int8_t x2 = -1;
	static volatile uint64_t x3 = UINT64_MAX;
	uint32_t t0 = 5772359U;

	t0 = (x1-((x2==x3)==x4));

	if (t0 != 950655059U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5-((x6==x7)==x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint8_t x11 = 2U;
	static uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = -959564;

	t2 = (x9-((x10==x11)==x12));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MAX;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = -5475290LL;
	volatile uint32_t t3 = 42676446U;

	t3 = (x13-((x14==x15)==x16));

	if (t3 != 1765204484U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 32U;
	int64_t x18 = INT64_MAX;
	int64_t x19 = 1LL;
	volatile int32_t t4 = 27168031;

	t4 = (x17-((x18==x19)==x20));

	if (t4 != 32) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 25079455125456LLU;
	static int32_t x23 = INT32_MIN;
	static int64_t t5 = 435587300LL;

	t5 = (x21-((x22==x23)==x24));

	if (t5 != -857690195LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 19378909263LLU;
	int32_t x27 = INT32_MIN;
	volatile int16_t x28 = -1;
	volatile uint64_t t6 = 1322805690312419816LLU;

	t6 = (x25-((x26==x27)==x28));

	if (t6 != 19378909263LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 7U;
	int32_t x30 = -1;
	static volatile int64_t x31 = 5105255733LL;
	volatile int16_t x32 = -1;
	int32_t t7 = -4979459;

	t7 = (x29-((x30==x31)==x32));

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 13;
	volatile int64_t x34 = 2786722761LL;
	static int16_t x35 = -9;
	int16_t x36 = INT16_MIN;

	t8 = (x33-((x34==x35)==x36));

	if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x39 = INT32_MAX;
	static int64_t x40 = -150959013LL;
	int32_t t9 = 339484;

	t9 = (x37-((x38==x39)==x40));

	if (t9 != 102) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 62399136;
	uint16_t x42 = 22453U;
	volatile int8_t x43 = -1;
	int8_t x44 = -1;
	int32_t t10 = 29;

	t10 = (x41-((x42==x43)==x44));

	if (t10 != 62399136) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -2175;

	t11 = (x45-((x46==x47)==x48));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 7212U;
	uint64_t x50 = 808500474454439106LLU;
	uint64_t x51 = UINT64_MAX;
	volatile uint64_t x52 = UINT64_MAX;

	t12 = (x49-((x50==x51)==x52));

	if (t12 != 7212) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x54 = 37209568;
	uint16_t x55 = 5U;
	uint64_t x56 = 3169121LLU;
	int32_t t13 = -6480;

	t13 = (x53-((x54==x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int8_t x58 = 0;
	static uint32_t x60 = UINT32_MAX;

	t14 = (x57-((x58==x59)==x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = INT16_MIN;
	uint8_t x63 = UINT8_MAX;
	static int64_t t15 = -3768871309878831837LL;

	t15 = (x61-((x62==x63)==x64));

	if (t15 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint8_t x66 = 1U;
	int64_t x68 = INT64_MIN;
	int64_t t16 = INT64_MAX;

	t16 = (x65-((x66==x67)==x68));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = 33;
	uint64_t x72 = 4869206209294057LLU;
	volatile int64_t t17 = INT64_MIN;

	t17 = (x69-((x70==x71)==x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MAX;
	volatile int32_t t18 = INT32_MIN;

	t18 = (x73-((x74==x75)==x76));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x78 = UINT8_MAX;
	uint32_t x79 = 91139003U;

	t19 = (x77-((x78==x79)==x80));

	if (t19 != 68597) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = -1LL;
	static uint16_t x82 = 5U;
	int32_t x83 = -19849;
	int16_t x84 = INT16_MIN;
	int64_t t20 = 0LL;

	t20 = (x81-((x82==x83)==x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = -1LL;
	int16_t x87 = INT16_MAX;
	volatile uint16_t x88 = 27U;
	volatile int32_t t21 = INT32_MIN;

	t21 = (x85-((x86==x87)==x88));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x91 = INT16_MIN;
	uint16_t x92 = 3615U;
	volatile int32_t t22 = 128841731;

	t22 = (x89-((x90==x91)==x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = -1549LL;
	int64_t x94 = INT64_MIN;
	static volatile int8_t x95 = INT8_MAX;
	volatile int8_t x96 = 0;
	static int64_t t23 = 946176985LL;

	t23 = (x93-((x94==x95)==x96));

	if (t23 != -1550LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 12U;
	volatile int8_t x98 = -1;
	volatile uint64_t x99 = 18140392106864LLU;
	static int64_t x100 = INT64_MAX;

	t24 = (x97-((x98==x99)==x100));

	if (t24 != 12U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = -1;

	t25 = (x101-((x102==x103)==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 904U;
	uint32_t x106 = 213327U;
	static volatile int32_t t26 = 7;

	t26 = (x105-((x106==x107)==x108));

	if (t26 != 904) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 8264839606364LLU;
	uint16_t x111 = 204U;
	uint8_t x112 = 29U;
	int32_t t27 = -19601;

	t27 = (x109-((x110==x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int32_t x114 = INT32_MAX;
	static uint32_t x116 = UINT32_MAX;
	volatile int64_t t28 = -389LL;

	t28 = (x113-((x114==x115)==x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = 11141;
	int8_t x119 = INT8_MAX;
	static int64_t x120 = INT64_MAX;
	static int32_t t29 = -572169239;

	t29 = (x117-((x118==x119)==x120));

	if (t29 != 11141) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 137006025928LL;
	int16_t x122 = 0;
	uint32_t x123 = UINT32_MAX;
	int16_t x124 = INT16_MIN;
	volatile int64_t t30 = 114173LL;

	t30 = (x121-((x122==x123)==x124));

	if (t30 != 137006025928LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 1760U;
	static uint64_t x126 = UINT64_MAX;
	static uint16_t x128 = 4U;
	volatile uint32_t t31 = 69671U;

	t31 = (x125-((x126==x127)==x128));

	if (t31 != 1760U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint16_t x130 = 631U;
	volatile uint16_t x131 = 112U;
	int64_t x132 = INT64_MIN;

	t32 = (x129-((x130==x131)==x132));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -24;
	uint8_t x134 = 1U;
	int32_t x136 = -58226;
	volatile int32_t t33 = -1;

	t33 = (x133-((x134==x135)==x136));

	if (t33 != -24) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	volatile uint32_t x139 = UINT32_MAX;
	static uint16_t x140 = 5U;
	int64_t t34 = INT64_MIN;

	t34 = (x137-((x138==x139)==x140));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -1;
	int8_t x142 = 7;
	int16_t x143 = INT16_MAX;
	int32_t x144 = -1;
	volatile int32_t t35 = 6110;

	t35 = (x141-((x142==x143)==x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x147 = INT16_MIN;
	volatile int64_t t36 = -51886663883880959LL;

	t36 = (x145-((x146==x147)==x148));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -196480823;
	static volatile uint16_t x150 = UINT16_MAX;
	volatile int32_t t37 = 56909;

	t37 = (x149-((x150==x151)==x152));

	if (t37 != -196480823) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 3004070LL;
	volatile int16_t x155 = -143;
	static volatile int64_t x156 = INT64_MAX;
	volatile int64_t t38 = 191LL;

	t38 = (x153-((x154==x155)==x156));

	if (t38 != 3004070LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 91833166871439LL;
	uint16_t x159 = 437U;
	uint8_t x160 = 35U;
	static volatile int64_t t39 = -1575692849LL;

	t39 = (x157-((x158==x159)==x160));

	if (t39 != 91833166871439LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -1;
	uint16_t x162 = 750U;
	uint8_t x163 = 1U;
	int32_t t40 = -4;

	t40 = (x161-((x162==x163)==x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -8145878;
	int64_t x167 = 421657452532907LL;
	static int16_t x168 = -350;
	static int64_t t41 = -218562491603712072LL;

	t41 = (x165-((x166==x167)==x168));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 167U;
	static int32_t t42 = 8503;

	t42 = (x169-((x170==x171)==x172));

	if (t42 != 167) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -24;
	int64_t x174 = 365LL;
	volatile int64_t x175 = -1LL;
	static int32_t x176 = -1;
	static int32_t t43 = 0;

	t43 = (x173-((x174==x175)==x176));

	if (t43 != -24) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = -31;

	t44 = (x177-((x178==x179)==x180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	static int32_t x184 = INT32_MAX;
	int32_t t45 = 14886;

	t45 = (x181-((x182==x183)==x184));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = -1;
	static int8_t x187 = -1;
	uint32_t x188 = 3452791U;
	int64_t t46 = INT64_MAX;

	t46 = (x185-((x186==x187)==x188));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	volatile int16_t x190 = -1;
	static uint8_t x191 = UINT8_MAX;
	static int8_t x192 = INT8_MIN;
	static int32_t t47 = 0;

	t47 = (x189-((x190==x191)==x192));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = 4764777796387LL;
	int64_t x194 = INT64_MAX;
	static int16_t x195 = INT16_MIN;
	uint64_t x196 = 48088619188LLU;

	t48 = (x193-((x194==x195)==x196));

	if (t48 != 4764777796387LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	volatile int32_t x198 = INT32_MAX;
	volatile int8_t x199 = INT8_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t49 = -226;

	t49 = (x197-((x198==x199)==x200));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = INT64_MIN;
	static int64_t x204 = -1LL;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x201-((x202==x203)==x204));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	uint8_t x206 = 3U;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 94;

	t51 = (x205-((x206==x207)==x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = UINT16_MAX;
	int64_t x210 = -1LL;
	int8_t x211 = INT8_MAX;

	t52 = (x209-((x210==x211)==x212));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MAX;
	static int16_t x214 = INT16_MIN;
	static uint8_t x215 = 94U;
	int32_t t53 = INT32_MAX;

	t53 = (x213-((x214==x215)==x216));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 20959260U;
	int32_t x218 = INT32_MIN;
	volatile int16_t x219 = INT16_MAX;
	static int32_t x220 = INT32_MIN;
	uint32_t t54 = 38U;

	t54 = (x217-((x218==x219)==x220));

	if (t54 != 20959260U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	volatile int16_t x222 = INT16_MIN;
	uint32_t x223 = 103476352U;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x221-((x222==x223)==x224));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	int32_t x226 = INT32_MIN;
	static int32_t x228 = INT32_MAX;
	volatile int32_t t56 = -712759412;

	t56 = (x225-((x226==x227)==x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	uint8_t x231 = UINT8_MAX;
	static int32_t x232 = 25;
	volatile int32_t t57 = -9;

	t57 = (x229-((x230==x231)==x232));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 0U;
	int8_t x235 = -9;
	int8_t x236 = -1;
	int64_t t58 = -1238641829914073852LL;

	t58 = (x233-((x234==x235)==x236));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = 8U;
	int32_t x239 = INT32_MIN;
	static int32_t x240 = 524681169;
	static int64_t t59 = INT64_MIN;

	t59 = (x237-((x238==x239)==x240));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	volatile int32_t x243 = INT32_MIN;
	int16_t x244 = -1;
	volatile int64_t t60 = INT64_MIN;

	t60 = (x241-((x242==x243)==x244));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	volatile int32_t t61 = -349579;

	t61 = (x245-((x246==x247)==x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int8_t x250 = -1;
	uint8_t x251 = 13U;
	uint8_t x252 = 6U;
	static volatile uint64_t t62 = UINT64_MAX;

	t62 = (x249-((x250==x251)==x252));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	static int16_t x256 = INT16_MAX;
	int64_t t63 = INT64_MIN;

	t63 = (x253-((x254==x255)==x256));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -25;
	int64_t x258 = -960209LL;
	static uint32_t x260 = 4784U;

	t64 = (x257-((x258==x259)==x260));

	if (t64 != -25) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = 7;
	int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	volatile int8_t x264 = -1;
	static int32_t t65 = -99930;

	t65 = (x261-((x262==x263)==x264));

	if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 1236027397U;
	volatile int16_t x266 = 1;
	int16_t x267 = INT16_MAX;

	t66 = (x265-((x266==x267)==x268));

	if (t66 != 1236027397U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 221482097357198304LLU;
	uint32_t x270 = 255U;
	volatile int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MIN;
	uint64_t t67 = 1765LLU;

	t67 = (x269-((x270==x271)==x272));

	if (t67 != 221482097357198304LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -52;
	uint32_t x275 = UINT32_MAX;
	uint32_t x276 = UINT32_MAX;
	int32_t t68 = 227407;

	t68 = (x273-((x274==x275)==x276));

	if (t68 != -52) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 16379U;
	int8_t x279 = 2;
	int8_t x280 = INT8_MIN;

	t69 = (x277-((x278==x279)==x280));

	if (t69 != 16379U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	static int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	static int32_t x284 = 556517;

	t70 = (x281-((x282==x283)==x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x286 = INT8_MIN;
	volatile int32_t x288 = INT32_MIN;
	volatile int32_t t71 = 207621;

	t71 = (x285-((x286==x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 7092U;
	int8_t x290 = INT8_MIN;
	volatile int32_t x291 = INT32_MAX;
	int32_t x292 = -1;
	static int32_t t72 = 463011875;

	t72 = (x289-((x290==x291)==x292));

	if (t72 != 7092) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1645329LL;
	volatile int32_t x294 = INT32_MIN;
	volatile int32_t x295 = 2044;
	int32_t x296 = INT32_MAX;
	int64_t t73 = -2120LL;

	t73 = (x293-((x294==x295)==x296));

	if (t73 != -1645329LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MAX;
	static int32_t x299 = -74300;
	static int8_t x300 = INT8_MIN;

	t74 = (x297-((x298==x299)==x300));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = 10896LL;
	int16_t x302 = -1;
	volatile int64_t x303 = 8316732391LL;
	volatile int64_t t75 = -359905234439687513LL;

	t75 = (x301-((x302==x303)==x304));

	if (t75 != 10896LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	uint32_t x307 = 1257097693U;
	int16_t x308 = INT16_MIN;

	t76 = (x305-((x306==x307)==x308));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x309 = UINT32_MAX;
	uint32_t x310 = UINT32_MAX;
	int8_t x311 = -63;
	int32_t x312 = -1;

	t77 = (x309-((x310==x311)==x312));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 1LLU;
	volatile uint16_t x316 = 1U;
	static volatile int32_t t78 = -12111035;

	t78 = (x313-((x314==x315)==x316));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	volatile int64_t t79 = INT64_MIN;

	t79 = (x317-((x318==x319)==x320));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	uint16_t x322 = 24U;
	int16_t x324 = -1;
	int64_t t80 = INT64_MAX;

	t80 = (x321-((x322==x323)==x324));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MAX;
	int32_t t81 = -813;

	t81 = (x325-((x326==x327)==x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 25102353511714LLU;
	int64_t x331 = -110005383218LL;
	static int16_t x332 = -1;
	int32_t t82 = -792;

	t82 = (x329-((x330==x331)==x332));

	if (t82 != -9) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = -1;
	volatile int32_t t83 = -149;

	t83 = (x333-((x334==x335)==x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 66U;
	static int8_t x338 = -1;
	int16_t x339 = INT16_MAX;
	static int64_t x340 = -22637005LL;
	int32_t t84 = 20;

	t84 = (x337-((x338==x339)==x340));

	if (t84 != 66) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int64_t x342 = -25341205452260457LL;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 28324865704LLU;
	int32_t t85 = -12;

	t85 = (x341-((x342==x343)==x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x347 = INT32_MIN;
	static int64_t t86 = 4781LL;

	t86 = (x345-((x346==x347)==x348));

	if (t86 != -423780322LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	static uint64_t x351 = UINT64_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 1640;

	t87 = (x349-((x350==x351)==x352));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -62;
	int16_t x354 = 0;
	int64_t x355 = 300632LL;
	volatile int8_t x356 = INT8_MIN;

	t88 = (x353-((x354==x355)==x356));

	if (t88 != -62) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = UINT8_MAX;
	uint64_t x358 = 1181711779LLU;
	uint8_t x359 = UINT8_MAX;
	static volatile int32_t t89 = 10371;

	t89 = (x357-((x358==x359)==x360));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 1592328293928LLU;
	int32_t x362 = INT32_MIN;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = INT64_MIN;
	uint64_t t90 = 411478668LLU;

	t90 = (x361-((x362==x363)==x364));

	if (t90 != 1592328293928LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 642U;
	int64_t x366 = 4210644673334LL;
	int64_t x367 = INT64_MIN;
	int32_t t91 = -72137976;

	t91 = (x365-((x366==x367)==x368));

	if (t91 != 642) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 644U;
	uint32_t x371 = 1U;
	int32_t t92 = -520136;

	t92 = (x369-((x370==x371)==x372));

	if (t92 != 644) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	volatile int16_t x376 = -1;
	volatile int32_t t93 = -1;

	t93 = (x373-((x374==x375)==x376));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MIN;
	int64_t x379 = -22LL;
	static int32_t x380 = INT32_MIN;

	t94 = (x377-((x378==x379)==x380));

	if (t94 != 23766) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	volatile int64_t x383 = -957145078LL;
	int32_t x384 = -1;
	volatile int64_t t95 = 939642035LL;

	t95 = (x381-((x382==x383)==x384));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	int32_t x386 = -49350;
	uint16_t x387 = 914U;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = 71;

	t96 = (x385-((x386==x387)==x388));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 5134U;
	volatile int32_t x390 = -238571975;
	volatile int16_t x392 = 438;
	volatile int32_t t97 = 1;

	t97 = (x389-((x390==x391)==x392));

	if (t97 != 5134) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = 11847;
	volatile int64_t x394 = 232983475275LL;
	int32_t x395 = INT32_MAX;
	volatile int32_t t98 = -3;

	t98 = (x393-((x394==x395)==x396));

	if (t98 != 11847) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MIN;
	int32_t x400 = -41368;
	int64_t t99 = -26063932683LL;

	t99 = (x397-((x398==x399)==x400));

	if (t99 != -223690LL) { NG(); } else { ; }
	
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

