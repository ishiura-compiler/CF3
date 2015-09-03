#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -2390381498178053169LL;
int8_t x7 = INT8_MIN;
volatile uint8_t x8 = 96U;
int64_t x11 = INT64_MAX;
uint64_t x13 = UINT64_MAX;
volatile int32_t t3 = -7;
int32_t x18 = INT32_MIN;
volatile int32_t x23 = INT32_MIN;
static volatile int8_t x34 = INT8_MAX;
int32_t t8 = -4109309;
int64_t x40 = -4567294309021LL;
static int32_t t9 = -31380581;
int8_t x43 = 57;
int32_t t12 = 1793;
volatile int32_t x53 = 28940;
static int16_t x56 = INT16_MIN;
volatile int32_t t15 = 4207407;
int32_t x68 = -1205;
int64_t x69 = INT64_MIN;
static volatile int16_t x72 = 178;
static int64_t x76 = INT64_MAX;
static int32_t x84 = -1;
static uint8_t x85 = 4U;
volatile int32_t x86 = INT32_MIN;
int64_t x97 = -1LL;
volatile int32_t t24 = 125;
int64_t x101 = INT64_MAX;
int32_t t25 = 502888330;
uint32_t x113 = 801U;
volatile int32_t t28 = 1305111;
uint64_t x120 = 357976985LLU;
static int8_t x125 = INT8_MIN;
static int32_t x126 = INT32_MIN;
int8_t x127 = INT8_MIN;
static int64_t x129 = INT64_MIN;
uint32_t x131 = UINT32_MAX;
int64_t x148 = INT64_MIN;
uint8_t x149 = 0U;
int32_t t37 = 160;
int32_t x156 = INT32_MIN;
int8_t x161 = INT8_MIN;
static uint64_t x171 = UINT64_MAX;
uint32_t x175 = 3938U;
int16_t x176 = -1;
volatile int32_t t43 = 688192;
volatile int32_t t44 = -165654;
uint64_t x181 = 463060462228803LLU;
volatile uint32_t x188 = UINT32_MAX;
static int32_t t46 = -1;
static int32_t x189 = 1224556;
int32_t x218 = -30644979;
int16_t x221 = INT16_MIN;
static int64_t x224 = INT64_MIN;
static int32_t x225 = INT32_MIN;
uint16_t x226 = UINT16_MAX;
int64_t x230 = INT64_MIN;
uint8_t x231 = UINT8_MAX;
static int32_t t58 = -2663173;
uint8_t x237 = 1U;
volatile int32_t t59 = 2046604;
static int8_t x243 = -1;
static uint8_t x244 = UINT8_MAX;
int32_t x247 = -1;
uint64_t x249 = 71542064278LLU;
int32_t x251 = INT32_MAX;
static uint16_t x252 = 61U;
volatile uint16_t x255 = 3805U;
uint8_t x260 = 5U;
int16_t x267 = INT16_MIN;
volatile uint32_t x270 = 1U;
static int16_t x271 = -2264;
int64_t x280 = -286487712LL;
static int32_t x281 = INT32_MAX;
int16_t x288 = -1;
int8_t x290 = INT8_MAX;
int64_t x296 = 59LL;
int32_t x298 = INT32_MAX;
volatile int32_t t74 = 5940;
static int8_t x302 = INT8_MIN;
uint32_t x305 = 84362045U;
static int32_t x306 = INT32_MIN;
uint16_t x311 = 7412U;
volatile uint8_t x313 = 12U;
int16_t x319 = -1;
volatile uint64_t x320 = UINT64_MAX;
int64_t x329 = 349341951372844543LL;
volatile int16_t x331 = -1;
int32_t t83 = 4;
volatile int32_t t84 = 2284;
int16_t x343 = 478;
volatile int32_t t87 = -912816;
int32_t x360 = INT32_MIN;
volatile int8_t x362 = -1;
uint16_t x364 = 24950U;
uint32_t x368 = UINT32_MAX;
uint8_t x370 = 3U;
static int64_t x375 = -53950957LL;
volatile int16_t x376 = 1;
static int32_t t94 = 3696;
static volatile int32_t t95 = 47506624;
uint64_t x387 = UINT64_MAX;
int32_t x390 = INT32_MIN;
static volatile int32_t t99 = 959219688;


void f0(void) {
	int64_t x1 = 2974941373LL;
	static uint8_t x2 = UINT8_MAX;
	uint32_t x3 = 14206U;
	static volatile int32_t t0 = 56039560;

	t0 = (x1<((x2==x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	uint32_t x6 = 208423019U;
	volatile int32_t t1 = 1;

	t1 = (x5<((x6==x7)|x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint16_t x10 = 17577U;
	uint32_t x12 = 10U;
	int32_t t2 = -462378;

	t2 = (x9<((x10==x11)|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	int8_t x15 = -10;
	int32_t x16 = -1;

	t3 = (x13<((x14==x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x17 = 2U;
	int16_t x19 = INT16_MAX;
	static int8_t x20 = INT8_MAX;
	int32_t t4 = -73784754;

	t4 = (x17<((x18==x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint8_t x22 = 0U;
	int16_t x24 = INT16_MIN;
	int32_t t5 = 2;

	t5 = (x21<((x22==x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 5;
	int64_t x26 = -1387984973896LL;
	uint8_t x27 = 0U;
	uint16_t x28 = 2863U;
	volatile int32_t t6 = 16;

	t6 = (x25<((x26==x27)|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MIN;
	uint16_t x31 = 0U;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 1;

	t7 = (x29<((x30==x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 13U;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = -1;

	t8 = (x33<((x34==x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile uint8_t x38 = 113U;
	int16_t x39 = INT16_MIN;

	t9 = (x37<((x38==x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = INT8_MAX;
	int64_t x42 = 460700LL;
	int64_t x44 = INT64_MIN;
	int32_t t10 = -17712218;

	t10 = (x41<((x42==x43)|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = 8U;
	int16_t x48 = -1;
	volatile int32_t t11 = -41870;

	t11 = (x45<((x46==x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	static uint32_t x50 = UINT32_MAX;
	static int8_t x51 = 14;
	uint16_t x52 = 12944U;

	t12 = (x49<((x50==x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 2597660390LL;
	static int8_t x55 = -1;
	volatile int32_t t13 = 3344;

	t13 = (x53<((x54==x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 362249502;
	int32_t x58 = -79158;
	int32_t x59 = INT32_MIN;
	volatile uint64_t x60 = 266787LLU;
	volatile int32_t t14 = 0;

	t14 = (x57<((x58==x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	static int8_t x62 = INT8_MIN;
	uint64_t x63 = 4851201760454169108LLU;
	uint16_t x64 = 2U;

	t15 = (x61<((x62==x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int32_t x66 = -1;
	volatile int64_t x67 = INT64_MIN;
	int32_t t16 = 1267599;

	t16 = (x65<((x66==x67)|x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -14574;
	int64_t x71 = -1LL;
	static int32_t t17 = 0;

	t17 = (x69<((x70==x71)|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int64_t x74 = -1LL;
	uint64_t x75 = 16089963508LLU;
	int32_t t18 = 321164;

	t18 = (x73<((x74==x75)|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = -1;
	volatile uint16_t x78 = 233U;
	uint64_t x79 = 1104333705281LLU;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 12756;

	t19 = (x77<((x78==x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = INT32_MAX;
	int64_t x83 = INT64_MAX;
	volatile int32_t t20 = -1309;

	t20 = (x81<((x82==x83)|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x87 = 52;
	static int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 1;

	t21 = (x85<((x86==x87)|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 0U;
	uint16_t x90 = 1380U;
	volatile int32_t x91 = -1745;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -635617785;

	t22 = (x89<((x90==x91)|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 2107295495088LLU;
	int32_t x94 = -1393494;
	int64_t x95 = -1LL;
	uint32_t x96 = 3U;
	int32_t t23 = 3;

	t23 = (x93<((x94==x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 833U;
	uint64_t x99 = UINT64_MAX;
	uint32_t x100 = UINT32_MAX;

	t24 = (x97<((x98==x99)|x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 9U;
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = -832484642355145LL;

	t25 = (x101<((x102==x103)|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = UINT64_MAX;
	static int8_t x106 = INT8_MIN;
	static volatile int8_t x107 = -1;
	uint8_t x108 = 0U;
	volatile int32_t t26 = 3037;

	t26 = (x105<((x106==x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int64_t x110 = INT64_MAX;
	volatile int64_t x111 = -123573LL;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t27 = -162;

	t27 = (x109<((x110==x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x114 = 6U;
	uint64_t x115 = 649772455642509LLU;
	volatile uint8_t x116 = UINT8_MAX;

	t28 = (x113<((x114==x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MAX;
	static uint16_t x119 = 23264U;
	int32_t t29 = 221478021;

	t29 = (x117<((x118==x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MAX;
	uint8_t x122 = 40U;
	volatile uint32_t x123 = 36465799U;
	volatile int32_t x124 = -1;
	static int32_t t30 = -701;

	t30 = (x121<((x122==x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x128 = -1;
	static volatile int32_t t31 = -517605;

	t31 = (x125<((x126==x127)|x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MIN;
	int8_t x132 = INT8_MAX;
	static int32_t t32 = -45;

	t32 = (x129<((x130==x131)|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 15498;
	uint64_t x134 = UINT64_MAX;
	int8_t x135 = INT8_MIN;
	uint8_t x136 = 5U;
	volatile int32_t t33 = 14266;

	t33 = (x133<((x134==x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	volatile int32_t x138 = INT32_MIN;
	static uint16_t x139 = 4017U;
	int64_t x140 = 4LL;
	static int32_t t34 = 52324759;

	t34 = (x137<((x138==x139)|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 329266U;
	int16_t x142 = INT16_MAX;
	uint16_t x143 = 1945U;
	int64_t x144 = INT64_MIN;
	int32_t t35 = -49214438;

	t35 = (x141<((x142==x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -1;
	int64_t x146 = INT64_MAX;
	int32_t x147 = 1;
	int32_t t36 = -31;

	t36 = (x145<((x146==x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x150 = UINT64_MAX;
	static uint32_t x151 = UINT32_MAX;
	int64_t x152 = -1LL;

	t37 = (x149<((x150==x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	uint8_t x154 = 26U;
	int64_t x155 = -1454994116218737823LL;
	volatile int32_t t38 = -381;

	t38 = (x153<((x154==x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 2U;
	volatile int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -1;
	volatile int32_t t39 = -139468;

	t39 = (x157<((x158==x159)|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = -1;
	uint32_t x163 = 97U;
	static uint16_t x164 = 375U;
	int32_t t40 = -40813251;

	t40 = (x161<((x162==x163)|x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	uint32_t x166 = 7406980U;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = UINT8_MAX;
	int32_t t41 = -18175;

	t41 = (x165<((x166==x167)|x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	static int64_t x170 = INT64_MIN;
	static uint8_t x172 = 1U;
	int32_t t42 = -5;

	t42 = (x169<((x170==x171)|x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int32_t x174 = -1;

	t43 = (x173<((x174==x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 5047498388742LLU;
	volatile int64_t x178 = INT64_MIN;
	uint16_t x179 = 1U;
	uint16_t x180 = 3U;

	t44 = (x177<((x178==x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = 15U;
	int8_t x183 = -1;
	static uint8_t x184 = 102U;
	volatile int32_t t45 = 9786499;

	t45 = (x181<((x182==x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 2391869U;
	int64_t x186 = INT64_MIN;
	static int64_t x187 = INT64_MIN;

	t46 = (x185<((x186==x187)|x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MIN;
	uint32_t x191 = 1U;
	uint8_t x192 = 1U;
	static volatile int32_t t47 = 44986912;

	t47 = (x189<((x190==x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	uint32_t x194 = 1319646U;
	volatile uint32_t x195 = 1868350U;
	volatile int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -409;

	t48 = (x193<((x194==x195)|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static int8_t x198 = INT8_MAX;
	int8_t x199 = 5;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 7777691;

	t49 = (x197<((x198==x199)|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 18U;
	static int16_t x202 = INT16_MIN;
	static volatile int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 0;

	t50 = (x201<((x202==x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	static volatile int8_t x206 = -17;
	uint8_t x207 = UINT8_MAX;
	uint32_t x208 = 75750U;
	volatile int32_t t51 = -4524564;

	t51 = (x205<((x206==x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 0U;
	static int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	uint8_t x212 = 18U;
	static volatile int32_t t52 = 61940206;

	t52 = (x209<((x210==x211)|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -50;
	volatile int64_t x214 = 12909790LL;
	int64_t x215 = -1LL;
	uint64_t x216 = 1464954128226411755LLU;
	volatile int32_t t53 = 80477;

	t53 = (x213<((x214==x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 47LLU;
	static uint32_t x219 = 9878U;
	uint16_t x220 = 28006U;
	int32_t t54 = 206;

	t54 = (x217<((x218==x219)|x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x222 = 94U;
	uint8_t x223 = UINT8_MAX;
	volatile int32_t t55 = 989980752;

	t55 = (x221<((x222==x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x227 = INT8_MAX;
	uint64_t x228 = 1050114LLU;
	volatile int32_t t56 = 1296807;

	t56 = (x225<((x226==x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 2U;
	uint8_t x232 = UINT8_MAX;
	int32_t t57 = -54496;

	t57 = (x229<((x230==x231)|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 115LLU;
	uint64_t x234 = 56LLU;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MIN;

	t58 = (x233<((x234==x235)|x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = -7124;
	int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MIN;

	t59 = (x237<((x238==x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -11896;
	uint16_t x242 = 2U;
	volatile int32_t t60 = -56527852;

	t60 = (x241<((x242==x243)|x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MAX;
	uint32_t x246 = 5U;
	static int8_t x248 = -10;
	static volatile int32_t t61 = -416;

	t61 = (x245<((x246==x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = 39;
	volatile int32_t t62 = 820;

	t62 = (x249<((x250==x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 49U;
	static int32_t x254 = -198232;
	uint32_t x256 = 16967U;
	volatile int32_t t63 = 1;

	t63 = (x253<((x254==x255)|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 56U;
	volatile uint64_t x258 = 23165437161309442LLU;
	int8_t x259 = -44;
	static int32_t t64 = -7665612;

	t64 = (x257<((x258==x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MAX;
	int8_t x262 = -1;
	static int32_t x263 = -1;
	uint8_t x264 = 29U;
	int32_t t65 = 1;

	t65 = (x261<((x262==x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 1;
	volatile int8_t x266 = INT8_MIN;
	int64_t x268 = INT64_MAX;
	int32_t t66 = -781;

	t66 = (x265<((x266==x267)|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 15U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 3;

	t67 = (x269<((x270==x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = 107629671LL;
	int8_t x274 = 1;
	int8_t x275 = 3;
	int8_t x276 = -42;
	int32_t t68 = -3;

	t68 = (x273<((x274==x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile uint16_t x278 = 0U;
	int8_t x279 = INT8_MAX;
	volatile int32_t t69 = 6;

	t69 = (x277<((x278==x279)|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = -1;
	uint64_t x283 = 1668672783013141LLU;
	uint16_t x284 = 2U;
	static volatile int32_t t70 = 180;

	t70 = (x281<((x282==x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 2;
	int16_t x286 = INT16_MAX;
	static int8_t x287 = INT8_MIN;
	volatile int32_t t71 = 105738;

	t71 = (x285<((x286==x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 0U;
	uint64_t x291 = 62687LLU;
	uint64_t x292 = 134647269852887808LLU;
	volatile int32_t t72 = 1;

	t72 = (x289<((x290==x291)|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 14;
	static int16_t x294 = -522;
	uint8_t x295 = 22U;
	volatile int32_t t73 = -27;

	t73 = (x293<((x294==x295)|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -26;
	uint8_t x299 = 1U;
	static volatile int64_t x300 = INT64_MIN;

	t74 = (x297<((x298==x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = 7680LL;
	int64_t x303 = -1LL;
	int16_t x304 = -5;
	volatile int32_t t75 = -2;

	t75 = (x301<((x302==x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x307 = 437LLU;
	int16_t x308 = INT16_MAX;
	int32_t t76 = -295;

	t76 = (x305<((x306==x307)|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = UINT32_MAX;
	int16_t x310 = -297;
	int64_t x312 = -5136012LL;
	volatile int32_t t77 = -17;

	t77 = (x309<((x310==x311)|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x314 = UINT8_MAX;
	int32_t x315 = INT32_MIN;
	int32_t x316 = -1009301;
	volatile int32_t t78 = -17588;

	t78 = (x313<((x314==x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 3001425704741313678LL;
	uint32_t x318 = 16U;
	int32_t t79 = 798550;

	t79 = (x317<((x318==x319)|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MIN;
	volatile int16_t x323 = -1;
	uint32_t x324 = 1579303886U;
	volatile int32_t t80 = 984800;

	t80 = (x321<((x322==x323)|x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -707117;
	uint32_t x326 = 179520U;
	static int16_t x327 = 4;
	int16_t x328 = INT16_MAX;
	int32_t t81 = 8767263;

	t81 = (x325<((x326==x327)|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = 6865U;
	volatile int16_t x332 = INT16_MIN;
	int32_t t82 = -2199;

	t82 = (x329<((x330==x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	volatile uint32_t x334 = 8U;
	uint8_t x335 = 1U;
	uint16_t x336 = UINT16_MAX;

	t83 = (x333<((x334==x335)|x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x337 = 15U;
	static uint8_t x338 = 7U;
	int32_t x339 = INT32_MAX;
	int16_t x340 = -1;

	t84 = (x337<((x338==x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	static uint16_t x342 = UINT16_MAX;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = -1767;

	t85 = (x341<((x342==x343)|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -10;
	static volatile int32_t x346 = INT32_MIN;
	uint32_t x347 = 2606U;
	int8_t x348 = 2;
	volatile int32_t t86 = 7;

	t86 = (x345<((x346==x347)|x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = 1;
	uint8_t x350 = 7U;
	int16_t x351 = 0;
	uint64_t x352 = 61726782LLU;

	t87 = (x349<((x350==x351)|x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MAX;
	int32_t x355 = INT32_MAX;
	uint8_t x356 = UINT8_MAX;
	int32_t t88 = 20288514;

	t88 = (x353<((x354==x355)|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	static int32_t x358 = INT32_MIN;
	static uint16_t x359 = 1023U;
	volatile int32_t t89 = 0;

	t89 = (x357<((x358==x359)|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 6U;
	static uint16_t x363 = UINT16_MAX;
	volatile int32_t t90 = -588047;

	t90 = (x361<((x362==x363)|x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	static volatile int32_t x366 = 74351;
	int16_t x367 = INT16_MIN;
	volatile int32_t t91 = 68239;

	t91 = (x365<((x366==x367)|x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -2068;
	volatile int64_t x371 = -1LL;
	int64_t x372 = -484958944650374671LL;
	volatile int32_t t92 = -48;

	t92 = (x369<((x370==x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 53910144172LLU;
	uint32_t x374 = UINT32_MAX;
	static int32_t t93 = -51299;

	t93 = (x373<((x374==x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	static int8_t x378 = 8;
	int8_t x379 = 1;
	volatile int16_t x380 = -1;

	t94 = (x377<((x378==x379)|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static uint64_t x382 = 358LLU;
	int64_t x383 = INT64_MAX;
	int32_t x384 = INT32_MIN;

	t95 = (x381<((x382==x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = -1;
	int64_t x386 = -1LL;
	uint16_t x388 = 33U;
	int32_t t96 = -1891;

	t96 = (x385<((x386==x387)|x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = 25678LLU;
	static uint32_t x391 = 10U;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 0;

	t97 = (x389<((x390==x391)|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	int16_t x394 = INT16_MAX;
	int64_t x395 = 1LL;
	int32_t x396 = INT32_MAX;
	int32_t t98 = -1;

	t98 = (x393<((x394==x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MIN;
	volatile uint64_t x399 = UINT64_MAX;
	volatile uint64_t x400 = UINT64_MAX;

	t99 = (x397<((x398==x399)|x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

