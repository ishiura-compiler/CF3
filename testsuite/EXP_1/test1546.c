#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 5895064;
uint32_t x5 = UINT32_MAX;
volatile uint32_t x7 = 520543862U;
uint8_t x9 = 10U;
static int32_t x11 = -1;
int32_t t2 = 700;
int16_t x33 = INT16_MIN;
volatile int64_t t9 = INT64_MAX;
uint32_t x50 = 2U;
int32_t x60 = -1;
uint8_t x61 = UINT8_MAX;
static uint64_t x62 = 0LLU;
int8_t x85 = 7;
int8_t x88 = 0;
int32_t t21 = 87984;
static int32_t x107 = 125615;
static int32_t x110 = INT32_MIN;
volatile int8_t x111 = -59;
int64_t x113 = 42516354033LL;
volatile uint64_t t24 = 19241697LLU;
uint16_t x119 = UINT16_MAX;
int32_t t25 = -7018424;
volatile int8_t x139 = -4;
int32_t x155 = -2684266;
static volatile int32_t x157 = 38;
volatile int64_t x159 = -85706LL;
static int32_t x161 = -1;
uint64_t x168 = 4LLU;
uint64_t x185 = 45053356655078758LLU;
int32_t x189 = -2352717;
int64_t x190 = INT64_MIN;
int32_t x193 = -1277;
static int8_t x196 = 0;
int32_t x199 = -52016990;
volatile int8_t x200 = -1;
static volatile int32_t x207 = 6520360;
uint16_t x213 = 3914U;
volatile int8_t x226 = INT8_MIN;
int32_t t48 = 0;
uint64_t t52 = 24292310095131LLU;
static volatile uint16_t x249 = 0U;
int64_t x250 = INT64_MIN;
int8_t x251 = INT8_MIN;
volatile int32_t t54 = 1;
int16_t x275 = -1;
static volatile int16_t x276 = -3;
int64_t t61 = -7361161805768775LL;
int8_t x281 = INT8_MIN;
uint16_t x288 = UINT16_MAX;
int32_t x294 = 28622;
int8_t x299 = INT8_MAX;
uint32_t t65 = 69439655U;
uint16_t x305 = UINT16_MAX;
static uint32_t x306 = 6259004U;
int8_t x307 = -53;
static volatile int64_t t67 = 189081848326LL;
uint32_t x309 = 471U;
static int16_t x320 = INT16_MIN;
volatile uint32_t t72 = UINT32_MAX;
volatile int32_t x330 = -1;
volatile uint8_t x331 = 67U;
static int16_t x333 = INT16_MAX;
int32_t x337 = 162703948;
volatile int16_t x354 = -2538;
static uint16_t x359 = 14U;
volatile uint16_t x361 = 1407U;
static volatile uint32_t x364 = UINT32_MAX;
int8_t x367 = INT8_MIN;
static uint16_t x368 = 15762U;
int16_t x397 = INT16_MIN;
uint64_t x401 = 5718590LLU;
static volatile uint16_t x402 = UINT16_MAX;
int16_t x418 = INT16_MAX;
static int16_t x419 = INT16_MIN;
volatile int8_t x420 = -1;
int16_t x421 = INT16_MIN;
int8_t x425 = INT8_MIN;
uint32_t x427 = 0U;
volatile uint32_t t94 = 12069U;
volatile int32_t x431 = 10;
uint64_t x432 = 872253823139930LLU;
volatile int32_t x443 = INT32_MAX;
int16_t x444 = 390;
int64_t x446 = INT64_MAX;


void f0(void) {
	int16_t x1 = -1025;
	static int64_t x2 = -114009LL;
	int8_t x3 = 16;
	static int8_t x4 = INT8_MIN;

	t0 = (((x1<=x2)-x3)|x4);

	if (t0 != -16) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	static int16_t x8 = INT16_MIN;
	static volatile uint32_t t1 = 6026U;

	t1 = (((x5<=x6)-x7)|x8);

	if (t1 != 4294943114U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MAX;
	static int8_t x12 = -1;

	t2 = (((x9<=x10)-x11)|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MIN;
	int8_t x15 = 0;
	volatile uint64_t x16 = 5LLU;
	uint64_t t3 = 4148494126196740566LLU;

	t3 = (((x13<=x14)-x15)|x16);

	if (t3 != 5LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	volatile int8_t x18 = 0;
	int16_t x19 = 0;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -12939346;

	t4 = (((x17<=x18)-x19)|x20);

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	int8_t x24 = 16;
	volatile int32_t t5 = 158647;

	t5 = (((x21<=x22)-x23)|x24);

	if (t5 != 32785) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int64_t x26 = 55200961194939322LL;
	int32_t x27 = -1;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t6 = 78105233922541925LL;

	t6 = (((x25<=x26)-x27)|x28);

	if (t6 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x34 = 798U;
	uint32_t x35 = UINT32_MAX;
	int32_t x36 = 254091;
	uint32_t t7 = 143286134U;

	t7 = (((x33<=x34)-x35)|x36);

	if (t7 != 254091U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	static int32_t x38 = -401760163;
	static volatile uint16_t x39 = 11U;
	int16_t x40 = -1;
	volatile int32_t t8 = -1782794;

	t8 = (((x37<=x38)-x39)|x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 12U;
	uint32_t x42 = 39423353U;
	uint32_t x43 = 113481797U;
	int64_t x44 = INT64_MAX;

	t9 = (((x41<=x42)-x43)|x44);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	static int32_t x46 = -651;
	static uint16_t x47 = 22444U;
	static int32_t x48 = 69719317;
	int32_t t10 = 28;

	t10 = (((x45<=x46)-x47)|x48);

	if (t10 != -683) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 0;
	uint64_t x51 = 1160202424397889029LLU;
	int64_t x52 = -1LL;
	static volatile uint64_t t11 = UINT64_MAX;

	t11 = (((x49<=x50)-x51)|x52);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x53 = INT64_MIN;
	int8_t x54 = -1;
	uint8_t x55 = 0U;
	int64_t x56 = 5285573LL;
	volatile int64_t t12 = -32LL;

	t12 = (((x53<=x54)-x55)|x56);

	if (t12 != 5285573LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	int16_t x58 = -20;
	int32_t x59 = 601672030;
	volatile int32_t t13 = -900;

	t13 = (((x57<=x58)-x59)|x60);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x63 = -1400;
	int16_t x64 = 1;
	volatile int32_t t14 = -2;

	t14 = (((x61<=x62)-x63)|x64);

	if (t14 != 1401) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x73 = UINT8_MAX;
	static uint16_t x74 = 27588U;
	volatile int64_t x75 = INT64_MAX;
	static int16_t x76 = -1;
	int64_t t15 = -375420129037095994LL;

	t15 = (((x73<=x74)-x75)|x76);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 33U;
	volatile uint32_t x78 = 95U;
	static int16_t x79 = -1;
	static int16_t x80 = INT16_MIN;
	int32_t t16 = -109367388;

	t16 = (((x77<=x78)-x79)|x80);

	if (t16 != -32766) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x81 = -1;
	volatile uint8_t x82 = 8U;
	static int32_t x83 = 1;
	volatile int64_t x84 = 1995008539507820LL;
	static int64_t t17 = 703018515576LL;

	t17 = (((x81<=x82)-x83)|x84);

	if (t17 != 1995008539507820LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x86 = INT64_MIN;
	int64_t x87 = -1LL;
	static volatile int64_t t18 = 23137LL;

	t18 = (((x85<=x86)-x87)|x88);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x89 = 211023536U;
	int8_t x90 = -1;
	int8_t x91 = INT8_MIN;
	uint8_t x92 = 0U;
	volatile int32_t t19 = 5847;

	t19 = (((x89<=x90)-x91)|x92);

	if (t19 != 129) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x93 = -1LL;
	int16_t x94 = 371;
	volatile int16_t x95 = -87;
	static int8_t x96 = INT8_MIN;
	static volatile int32_t t20 = 2058172;

	t20 = (((x93<=x94)-x95)|x96);

	if (t20 != -40) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 1U;
	uint32_t x98 = 15352U;
	int8_t x99 = INT8_MAX;
	uint16_t x100 = 0U;

	t21 = (((x97<=x98)-x99)|x100);

	if (t21 != -126) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -1;
	int32_t x106 = INT32_MAX;
	int8_t x108 = INT8_MIN;
	volatile int32_t t22 = 5501;

	t22 = (((x105<=x106)-x107)|x108);

	if (t22 != -46) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x109 = INT16_MIN;
	int64_t x112 = INT64_MIN;
	static int64_t t23 = 5333736156087730LL;

	t23 = (((x109<=x110)-x111)|x112);

	if (t23 != -9223372036854775749LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x114 = 16703417U;
	uint64_t x115 = 2070127LLU;
	int16_t x116 = -746;

	t24 = (((x113<=x114)-x115)|x116);

	if (t24 != 18446744073709550999LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 14U;
	int32_t x118 = INT32_MAX;
	int8_t x120 = -1;

	t25 = (((x117<=x118)-x119)|x120);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = 0;
	volatile int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = INT8_MAX;
	volatile int32_t t26 = 6419;

	t26 = (((x121<=x122)-x123)|x124);

	if (t26 != -65409) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = 6780157001645480104LLU;
	int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -39LL;
	int64_t t27 = -135495391330LL;

	t27 = (((x129<=x130)-x131)|x132);

	if (t27 != -39LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = INT8_MIN;
	static volatile uint32_t x135 = 42U;
	int32_t x136 = -1;
	static uint32_t t28 = UINT32_MAX;

	t28 = (((x133<=x134)-x135)|x136);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x137 = 30537858787LLU;
	static int64_t x138 = 140894205181477LL;
	uint16_t x140 = UINT16_MAX;
	int32_t t29 = 1514;

	t29 = (((x137<=x138)-x139)|x140);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -3;
	volatile int32_t x142 = INT32_MIN;
	volatile int64_t x143 = -74617621LL;
	int64_t x144 = -8169244421622LL;
	static int64_t t30 = 2569768LL;

	t30 = (((x141<=x142)-x143)|x144);

	if (t30 != -8169171021025LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = 6;
	int64_t x150 = INT64_MAX;
	uint16_t x151 = 13716U;
	volatile int16_t x152 = -1;
	volatile int32_t t31 = 54087625;

	t31 = (((x149<=x150)-x151)|x152);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x153 = 238LL;
	int16_t x154 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	int32_t t32 = -2191;

	t32 = (((x153<=x154)-x155)|x156);

	if (t32 != -2709) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x158 = 776LLU;
	int64_t x160 = INT64_MIN;
	int64_t t33 = 7070700709642950LL;

	t33 = (((x157<=x158)-x159)|x160);

	if (t33 != -9223372036854690101LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x162 = 0LL;
	volatile uint16_t x163 = UINT16_MAX;
	int16_t x164 = 3563;
	int32_t t34 = 110242;

	t34 = (((x161<=x162)-x163)|x164);

	if (t34 != -61973) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -1;
	uint16_t x166 = 1U;
	volatile int16_t x167 = INT16_MAX;
	uint64_t t35 = 2295283872135697386LLU;

	t35 = (((x165<=x166)-x167)|x168);

	if (t35 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MIN;
	int64_t x170 = INT64_MIN;
	static volatile uint64_t x171 = 1915584650017750989LLU;
	int64_t x172 = -23615257606LL;
	volatile uint64_t t36 = 1071075084559382657LLU;

	t36 = (((x169<=x170)-x171)|x172);

	if (t36 != 18446744052082394107LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int16_t x174 = -1;
	uint32_t x175 = 129317235U;
	int32_t x176 = -1;
	static volatile uint32_t t37 = UINT32_MAX;

	t37 = (((x173<=x174)-x175)|x176);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x186 = INT8_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile int16_t x188 = INT16_MAX;
	volatile uint32_t t38 = 973U;

	t38 = (((x185<=x186)-x187)|x188);

	if (t38 != 32767U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x191 = 394381LL;
	volatile uint32_t x192 = UINT32_MAX;
	volatile int64_t t39 = -31730256394LL;

	t39 = (((x189<=x190)-x191)|x192);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x194 = INT16_MAX;
	static uint8_t x195 = UINT8_MAX;
	volatile int32_t t40 = -932;

	t40 = (((x193<=x194)-x195)|x196);

	if (t40 != -254) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = 1;
	volatile int32_t t41 = -16663;

	t41 = (((x197<=x198)-x199)|x200);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x201 = INT16_MIN;
	uint32_t x202 = UINT32_MAX;
	uint8_t x203 = 24U;
	static int8_t x204 = INT8_MAX;
	static int32_t t42 = 52;

	t42 = (((x201<=x202)-x203)|x204);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = INT32_MAX;
	int16_t x206 = -1;
	int16_t x208 = -15212;
	volatile int32_t t43 = -1423;

	t43 = (((x205<=x206)-x207)|x208);

	if (t43 != -14884) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x209 = UINT8_MAX;
	static int32_t x210 = -25691127;
	static uint64_t x211 = 58872LLU;
	uint8_t x212 = UINT8_MAX;
	volatile uint64_t t44 = 8024300974539424854LLU;

	t44 = (((x209<=x210)-x211)|x212);

	if (t44 != 18446744073709492991LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x214 = UINT32_MAX;
	static uint16_t x215 = UINT16_MAX;
	volatile uint64_t x216 = UINT64_MAX;
	uint64_t t45 = UINT64_MAX;

	t45 = (((x213<=x214)-x215)|x216);

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MAX;
	uint8_t x218 = 12U;
	uint64_t x219 = UINT64_MAX;
	volatile int64_t x220 = -2245324LL;
	static uint64_t t46 = 6721308174829LLU;

	t46 = (((x217<=x218)-x219)|x220);

	if (t46 != 18446744073707306293LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x221 = 50;
	int32_t x222 = 9681457;
	int8_t x223 = -2;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (((x221<=x222)-x223)|x224);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x225 = 1566;
	int16_t x227 = INT16_MAX;
	int32_t x228 = -1;

	t48 = (((x225<=x226)-x227)|x228);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = UINT64_MAX;
	int16_t x230 = INT16_MIN;
	int64_t x231 = 355756742368LL;
	static volatile int32_t x232 = INT32_MIN;
	static int64_t t49 = 189385LL;

	t49 = (((x229<=x230)-x231)|x232);

	if (t49 != -1421940448LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x233 = 405656854690LLU;
	int8_t x234 = -22;
	uint32_t x235 = 3U;
	int8_t x236 = -1;
	static uint32_t t50 = UINT32_MAX;

	t50 = (((x233<=x234)-x235)|x236);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = 5130805U;
	static volatile int32_t x238 = INT32_MIN;
	int8_t x239 = 7;
	volatile int32_t x240 = -1;
	int32_t t51 = -7;

	t51 = (((x237<=x238)-x239)|x240);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x241 = INT32_MIN;
	uint32_t x242 = UINT32_MAX;
	static uint64_t x243 = 669899652LLU;
	uint64_t x244 = 2LLU;

	t52 = (((x241<=x242)-x243)|x244);

	if (t52 != 18446744073039651967LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = INT32_MIN;
	int64_t x247 = 381120938LL;
	volatile uint64_t x248 = 27012759202421930LLU;
	static volatile uint64_t t53 = 132229449167097968LLU;

	t53 = (((x245<=x246)-x247)|x248);

	if (t53 != 18446744073674546942LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x252 = 0;

	t54 = (((x249<=x250)-x251)|x252);

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x253 = INT16_MAX;
	static int32_t x254 = -55876049;
	int16_t x255 = INT16_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t55 = -8265;

	t55 = (((x253<=x254)-x255)|x256);

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x257 = 20U;
	static uint64_t x258 = 132785LLU;
	int64_t x259 = -1LL;
	int8_t x260 = INT8_MIN;
	static volatile int64_t t56 = 7973634617LL;

	t56 = (((x257<=x258)-x259)|x260);

	if (t56 != -126LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x261 = 0U;
	int16_t x262 = INT16_MIN;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = INT16_MIN;
	volatile uint64_t t57 = 688008561513054LLU;

	t57 = (((x261<=x262)-x263)|x264);

	if (t57 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x265 = 7867LLU;
	int8_t x266 = 0;
	uint32_t x267 = 67083U;
	uint64_t x268 = 27697915770878533LLU;
	uint64_t t58 = 7LLU;

	t58 = (((x265<=x266)-x267)|x268);

	if (t58 != 27697917674322933LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = -1;
	volatile uint16_t x270 = UINT16_MAX;
	static volatile int8_t x271 = -1;
	int16_t x272 = INT16_MAX;
	volatile int32_t t59 = -11;

	t59 = (((x269<=x270)-x271)|x272);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = -1;
	int16_t x274 = INT16_MAX;
	int32_t t60 = 560108;

	t60 = (((x273<=x274)-x275)|x276);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = -2269690373243741634LL;
	uint8_t x278 = 65U;
	int32_t x279 = -1;
	static volatile int64_t x280 = INT64_MIN;

	t61 = (((x277<=x278)-x279)|x280);

	if (t61 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MAX;
	uint16_t x284 = 53U;
	int32_t t62 = -1267212;

	t62 = (((x281<=x282)-x283)|x284);

	if (t62 != -32715) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = INT32_MIN;
	uint64_t x286 = UINT64_MAX;
	static volatile int32_t x287 = -1;
	volatile int32_t t63 = -1;

	t63 = (((x285<=x286)-x287)|x288);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = 68;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MAX;
	volatile int32_t t64 = -10;

	t64 = (((x293<=x294)-x295)|x296);

	if (t64 != 32895) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x297 = INT64_MIN;
	volatile int64_t x298 = -1LL;
	uint32_t x300 = 78490631U;

	t65 = (((x297<=x298)-x299)|x300);

	if (t65 != 4294967175U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x301 = 97U;
	static int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MAX;
	int32_t t66 = -1;

	t66 = (((x301<=x302)-x303)|x304);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x308 = INT64_MIN;

	t67 = (((x305<=x306)-x307)|x308);

	if (t67 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x310 = INT8_MAX;
	volatile int32_t x311 = -1;
	int32_t x312 = 1;
	volatile int32_t t68 = 14177;

	t68 = (((x309<=x310)-x311)|x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = 2;
	static volatile uint64_t x314 = 6516290402161006LLU;
	volatile int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MAX;
	volatile int32_t t69 = -25056;

	t69 = (((x313<=x314)-x315)|x316);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x317 = UINT64_MAX;
	volatile int32_t x318 = INT32_MIN;
	static int64_t x319 = -521810304470LL;
	static volatile int64_t t70 = -1LL;

	t70 = (((x317<=x318)-x319)|x320);

	if (t70 != -8746LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x321 = 10180670U;
	int16_t x322 = -1;
	int8_t x323 = -1;
	static volatile uint32_t x324 = 96902527U;
	volatile uint32_t t71 = 1545189950U;

	t71 = (((x321<=x322)-x323)|x324);

	if (t71 != 96902527U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MAX;
	int32_t x327 = 93;
	uint32_t x328 = UINT32_MAX;

	t72 = (((x325<=x326)-x327)|x328);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = -1;
	uint32_t x332 = 1U;
	uint32_t t73 = 30U;

	t73 = (((x329<=x330)-x331)|x332);

	if (t73 != 4294967231U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x334 = -102;
	int8_t x335 = 13;
	volatile uint64_t x336 = UINT64_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = (((x333<=x334)-x335)|x336);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x338 = 282969U;
	int16_t x339 = -1;
	int64_t x340 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (((x337<=x338)-x339)|x340);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x341 = 242232898U;
	volatile int64_t x342 = -1LL;
	int8_t x343 = INT8_MAX;
	uint64_t x344 = 2565315059048060889LLU;
	uint64_t t76 = 14229093989435869LLU;

	t76 = (((x341<=x342)-x343)|x344);

	if (t76 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = -1;
	uint32_t x350 = 349039494U;
	int8_t x351 = INT8_MIN;
	static uint32_t x352 = UINT32_MAX;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = (((x349<=x350)-x351)|x352);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x353 = -26;
	uint32_t x355 = 23267U;
	volatile uint32_t x356 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (((x353<=x354)-x355)|x356);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x357 = 3105;
	volatile int64_t x358 = 159112254540LL;
	uint16_t x360 = 3976U;
	static int32_t t79 = 10377;

	t79 = (((x357<=x358)-x359)|x360);

	if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x362 = INT8_MIN;
	int64_t x363 = -1LL;
	int64_t t80 = 3070811096161614911LL;

	t80 = (((x361<=x362)-x363)|x364);

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x365 = 399;
	static uint16_t x366 = UINT16_MAX;
	volatile int32_t t81 = -3023461;

	t81 = (((x365<=x366)-x367)|x368);

	if (t81 != 15763) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x369 = 0U;
	int32_t x370 = -1;
	uint32_t x371 = 48990U;
	int32_t x372 = INT32_MAX;
	static uint32_t t82 = UINT32_MAX;

	t82 = (((x369<=x370)-x371)|x372);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x373 = -1;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = 5284807LLU;
	int64_t x376 = INT64_MIN;
	uint64_t t83 = 32710085396LLU;

	t83 = (((x373<=x374)-x375)|x376);

	if (t83 != 18446744073704266809LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = 2477812U;
	int16_t x378 = INT16_MIN;
	static int8_t x379 = INT8_MIN;
	uint16_t x380 = UINT16_MAX;
	int32_t t84 = -864585;

	t84 = (((x377<=x378)-x379)|x380);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x385 = 712U;
	static int32_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t85 = 2890;

	t85 = (((x385<=x386)-x387)|x388);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x389 = INT32_MIN;
	volatile uint64_t x390 = 64505LLU;
	int64_t x391 = -1LL;
	int16_t x392 = 8;
	int64_t t86 = -275580821LL;

	t86 = (((x389<=x390)-x391)|x392);

	if (t86 != 9LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MAX;
	static int16_t x400 = INT16_MAX;
	volatile int32_t t87 = -3513;

	t87 = (((x397<=x398)-x399)|x400);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x403 = INT16_MIN;
	int16_t x404 = 1;
	volatile int32_t t88 = 1;

	t88 = (((x401<=x402)-x403)|x404);

	if (t88 != 32769) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = 5246835U;
	int32_t x406 = INT32_MIN;
	uint64_t x407 = 84295283163227LLU;
	int8_t x408 = -13;
	uint64_t t89 = 91654485730050LLU;

	t89 = (((x405<=x406)-x407)|x408);

	if (t89 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = -1LL;
	volatile int64_t x411 = 25LL;
	int8_t x412 = INT8_MIN;
	static int64_t t90 = -648300596238780LL;

	t90 = (((x409<=x410)-x411)|x412);

	if (t90 != -24LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = -1LL;
	volatile uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	static int8_t x416 = INT8_MAX;
	int32_t t91 = -545;

	t91 = (((x413<=x414)-x415)|x416);

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x417 = -29955939;
	int32_t t92 = -64;

	t92 = (((x417<=x418)-x419)|x420);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x422 = INT32_MIN;
	static volatile int64_t x423 = 1044LL;
	static int64_t x424 = INT64_MAX;
	volatile int64_t t93 = -1LL;

	t93 = (((x421<=x422)-x423)|x424);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x426 = 40;
	static volatile int32_t x428 = INT32_MAX;

	t94 = (((x425<=x426)-x427)|x428);

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = -1LL;
	uint8_t x430 = 2U;
	uint64_t t95 = UINT64_MAX;

	t95 = (((x429<=x430)-x431)|x432);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = -1;
	uint8_t x438 = UINT8_MAX;
	uint8_t x439 = UINT8_MAX;
	static volatile int64_t x440 = INT64_MIN;
	int64_t t96 = -20746440401061969LL;

	t96 = (((x437<=x438)-x439)|x440);

	if (t96 != -254LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x441 = UINT8_MAX;
	int8_t x442 = 25;
	int32_t t97 = -69468743;

	t97 = (((x441<=x442)-x443)|x444);

	if (t97 != -2147483257) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x445 = UINT8_MAX;
	int16_t x447 = INT16_MAX;
	static uint16_t x448 = UINT16_MAX;
	int32_t t98 = -1644979;

	t98 = (((x445<=x446)-x447)|x448);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x449 = INT8_MIN;
	static uint64_t x450 = UINT64_MAX;
	int8_t x451 = INT8_MAX;
	int16_t x452 = INT16_MAX;
	static volatile int32_t t99 = 2;

	t99 = (((x449<=x450)-x451)|x452);

	if (t99 != -1) { NG(); } else { ; }
	
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

