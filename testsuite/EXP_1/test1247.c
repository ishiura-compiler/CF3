#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = 65U;
static volatile int64_t x6 = -31470LL;
int64_t x9 = INT64_MIN;
int64_t x10 = INT64_MIN;
uint64_t x22 = UINT64_MAX;
int32_t x24 = -1;
static int64_t x32 = -1LL;
uint64_t t7 = UINT64_MAX;
volatile int16_t x34 = -2;
uint8_t x48 = UINT8_MAX;
int32_t t11 = 7157;
static int32_t x50 = INT32_MAX;
int8_t x56 = INT8_MAX;
static volatile uint16_t x63 = UINT16_MAX;
volatile int64_t t17 = 1LL;
volatile int32_t x77 = 51864458;
int32_t x78 = -1;
static volatile int32_t t18 = -955;
uint16_t x81 = 19583U;
volatile int8_t x82 = 1;
int32_t t22 = -110;
static int64_t x109 = -1LL;
int32_t t26 = -200;
int8_t x113 = INT8_MAX;
int8_t x126 = 2;
volatile int32_t x127 = 3427;
volatile uint64_t t30 = UINT64_MAX;
int16_t x133 = -1;
static int32_t x141 = -308028;
uint8_t x146 = UINT8_MAX;
volatile int16_t x151 = INT16_MIN;
int32_t x160 = 1033724924;
int8_t x174 = 22;
volatile uint8_t x180 = 85U;
volatile int32_t x202 = -1;
static uint16_t x204 = 3266U;
int64_t x205 = INT64_MIN;
int32_t t51 = 449;
static int16_t x224 = 82;
static volatile int8_t x226 = 3;
volatile uint16_t x231 = UINT16_MAX;
int8_t x240 = INT8_MIN;
uint16_t x243 = UINT16_MAX;
uint32_t t58 = 5600326U;
uint32_t x246 = 9U;
volatile int16_t x247 = INT16_MAX;
int64_t x251 = 59481845842290LL;
uint32_t x252 = 2272U;
int16_t x253 = 34;
int32_t x261 = INT32_MAX;
static int8_t x263 = INT8_MAX;
int8_t x272 = 1;
int32_t t66 = -15554305;
volatile int8_t x278 = INT8_MIN;
int32_t x281 = INT32_MAX;
static uint32_t x283 = 29159U;
volatile uint64_t t68 = UINT64_MAX;
static volatile uint32_t x286 = UINT32_MAX;
volatile uint64_t t69 = 3269856LLU;
int16_t x292 = INT16_MIN;
volatile int32_t t70 = -274178444;
int16_t x297 = 98;
static volatile int16_t x306 = INT16_MIN;
static volatile int32_t t73 = -3;
static uint64_t t74 = 1024691LLU;
int32_t x313 = -1;
static uint64_t x316 = UINT64_MAX;
volatile uint16_t x323 = 3002U;
volatile int32_t t78 = 186332943;
int32_t x331 = -1;
uint16_t x333 = UINT16_MAX;
static int16_t x339 = 358;
volatile int64_t x341 = 3300856LL;
volatile uint32_t t82 = UINT32_MAX;
int32_t x346 = -344;
volatile int8_t x347 = -1;
uint8_t x352 = UINT8_MAX;
static int64_t x358 = -748711LL;
volatile int8_t x363 = INT8_MAX;
uint8_t x371 = 12U;
int32_t t87 = -1350884;
uint32_t x379 = 1240569U;
int64_t x380 = INT64_MAX;
int64_t x383 = INT64_MAX;
volatile int64_t t90 = 30LL;
int64_t x393 = INT64_MIN;
volatile uint64_t x394 = 49330348LLU;
volatile int16_t x402 = 43;
static volatile uint64_t t95 = 9LLU;
volatile uint32_t t96 = 168U;
uint64_t x414 = UINT64_MAX;
volatile int8_t x416 = INT8_MIN;
uint64_t x418 = 2LLU;


void f0(void) {
	static uint64_t x2 = 957002163118503LLU;
	int32_t x3 = 515;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 411;

	t0 = (((x1==x2)%x3)|x4);

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 324;
	int64_t x7 = INT64_MIN;
	static uint64_t x8 = 104100376594975LLU;
	static volatile uint64_t t1 = 25386048625LLU;

	t1 = (((x5==x6)%x7)|x8);

	if (t1 != 104100376594975LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = UINT16_MAX;
	uint64_t x12 = UINT64_MAX;
	static uint64_t t2 = UINT64_MAX;

	t2 = (((x9==x10)%x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int32_t x14 = 4;
	static int64_t x15 = INT64_MAX;
	volatile int16_t x16 = -1;
	int64_t t3 = 1845LL;

	t3 = (((x13==x14)%x15)|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile int16_t x18 = -52;
	int32_t x19 = 1507;
	uint64_t x20 = 32107008552530LLU;
	static uint64_t t4 = 21490104856799LLU;

	t4 = (((x17==x18)%x19)|x20);

	if (t4 != 32107008552530LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x23 = 116U;
	int32_t t5 = -529060878;

	t5 = (((x21==x22)%x23)|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x26 = INT8_MIN;
	volatile int16_t x27 = INT16_MIN;
	int32_t x28 = -1;
	volatile int32_t t6 = 2338237;

	t6 = (((x25==x26)%x27)|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	volatile int16_t x30 = INT16_MIN;
	uint64_t x31 = 366688249947878045LLU;

	t7 = (((x29==x30)%x31)|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint16_t x35 = 9872U;
	int32_t x36 = -42;
	int32_t t8 = -1932;

	t8 = (((x33==x34)%x35)|x36);

	if (t8 != -42) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 390LLU;
	static uint64_t x38 = 100908997993920464LLU;
	volatile int32_t x39 = INT32_MAX;
	static int8_t x40 = -14;
	volatile int32_t t9 = -806;

	t9 = (((x37==x38)%x39)|x40);

	if (t9 != -14) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x41 = 582U;
	uint16_t x42 = 460U;
	int32_t x43 = 594;
	int8_t x44 = -1;
	int32_t t10 = 25547;

	t10 = (((x41==x42)%x43)|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int16_t x46 = 45;
	int8_t x47 = -1;

	t11 = (((x45==x46)%x47)|x48);

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x51 = 571U;
	uint8_t x52 = 116U;
	int32_t t12 = -2243;

	t12 = (((x49==x50)%x51)|x52);

	if (t12 != 116) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	static volatile int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MIN;
	static volatile int32_t t13 = 355;

	t13 = (((x53==x54)%x55)|x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint64_t x58 = 779160746384585LLU;
	int64_t x59 = 17595180466647442LL;
	int8_t x60 = INT8_MIN;
	volatile int64_t t14 = -547192077449872LL;

	t14 = (((x57==x58)%x59)|x60);

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 32439793U;
	int64_t x62 = 932898810522817LL;
	uint8_t x64 = UINT8_MAX;
	static volatile int32_t t15 = -167224;

	t15 = (((x61==x62)%x63)|x64);

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MIN;
	int64_t x70 = -233095396246775LL;
	int32_t x71 = 80731844;
	int64_t x72 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = (((x69==x70)%x71)|x72);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	static uint32_t x74 = 31U;
	int64_t x75 = 2124105944598LL;
	int8_t x76 = -1;

	t17 = (((x73==x74)%x75)|x76);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x79 = UINT8_MAX;
	uint8_t x80 = UINT8_MAX;

	t18 = (((x77==x78)%x79)|x80);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x83 = INT64_MIN;
	volatile int16_t x84 = INT16_MIN;
	int64_t t19 = -2476012467567LL;

	t19 = (((x81==x82)%x83)|x84);

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	uint16_t x86 = 54U;
	volatile int8_t x87 = INT8_MIN;
	int64_t x88 = -1LL;
	int64_t t20 = -27044812310721LL;

	t20 = (((x85==x86)%x87)|x88);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	int64_t x90 = 80891443526LL;
	uint64_t x91 = 11550663765406LLU;
	static uint32_t x92 = 130504U;
	static uint64_t t21 = 14155LLU;

	t21 = (((x89==x90)%x91)|x92);

	if (t21 != 130504LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = UINT32_MAX;
	int8_t x94 = INT8_MAX;
	int16_t x95 = -380;
	static uint8_t x96 = 3U;

	t22 = (((x93==x94)%x95)|x96);

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MIN;
	static uint64_t x98 = UINT64_MAX;
	uint8_t x99 = 8U;
	int64_t x100 = -885LL;
	volatile int64_t t23 = -5396657222712831LL;

	t23 = (((x97==x98)%x99)|x100);

	if (t23 != -885LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	static uint16_t x102 = 18618U;
	volatile int16_t x103 = INT16_MIN;
	static int16_t x104 = INT16_MIN;
	int32_t t24 = 3960939;

	t24 = (((x101==x102)%x103)|x104);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	uint64_t x106 = 64679158597740LLU;
	uint64_t x107 = 956866387480628LLU;
	int64_t x108 = -2430441219LL;
	volatile uint64_t t25 = 4479367626103048LLU;

	t25 = (((x105==x106)%x107)|x108);

	if (t25 != 18446744071279110397LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = 1U;
	volatile int16_t x111 = -1;
	int16_t x112 = -1;

	t26 = (((x109==x110)%x111)|x112);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x114 = 56U;
	int16_t x115 = INT16_MIN;
	volatile int16_t x116 = -7;
	static int32_t t27 = -1;

	t27 = (((x113==x114)%x115)|x116);

	if (t27 != -7) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = UINT16_MAX;
	int32_t x118 = 5199159;
	uint16_t x119 = 506U;
	uint8_t x120 = UINT8_MAX;
	int32_t t28 = 1222470;

	t28 = (((x117==x118)%x119)|x120);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = INT8_MIN;
	uint8_t x122 = 11U;
	int64_t x123 = INT64_MAX;
	int32_t x124 = -59145103;
	static volatile int64_t t29 = 220173050LL;

	t29 = (((x121==x122)%x123)|x124);

	if (t29 != -59145103LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	static uint64_t x128 = UINT64_MAX;

	t30 = (((x125==x126)%x127)|x128);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 9332;
	int64_t x130 = INT64_MIN;
	uint64_t x131 = UINT64_MAX;
	int8_t x132 = -1;
	uint64_t t31 = UINT64_MAX;

	t31 = (((x129==x130)%x131)|x132);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	int32_t x136 = -216320;
	volatile int32_t t32 = -430990;

	t32 = (((x133==x134)%x135)|x136);

	if (t32 != -216320) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	uint16_t x138 = 19U;
	int16_t x139 = -54;
	static int64_t x140 = INT64_MIN;
	int64_t t33 = INT64_MIN;

	t33 = (((x137==x138)%x139)|x140);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x142 = INT16_MIN;
	int16_t x143 = -1848;
	volatile int8_t x144 = -3;
	static volatile int32_t t34 = -30;

	t34 = (((x141==x142)%x143)|x144);

	if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 0LL;
	int32_t x147 = INT32_MIN;
	volatile uint16_t x148 = UINT16_MAX;
	int32_t t35 = 86049868;

	t35 = (((x145==x146)%x147)|x148);

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 29U;
	int64_t x150 = -3639735059066601LL;
	int32_t x152 = -5;
	int32_t t36 = 90938;

	t36 = (((x149==x150)%x151)|x152);

	if (t36 != -5) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	static int64_t x154 = INT64_MAX;
	uint16_t x155 = 17487U;
	volatile uint64_t x156 = 1143LLU;
	uint64_t t37 = 69LLU;

	t37 = (((x153==x154)%x155)|x156);

	if (t37 != 1143LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	int32_t x158 = 4;
	int64_t x159 = -6286LL;
	volatile int64_t t38 = 212644744248006LL;

	t38 = (((x157==x158)%x159)|x160);

	if (t38 != 1033724924LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x161 = -1414;
	volatile uint32_t x162 = UINT32_MAX;
	volatile int8_t x163 = 36;
	int64_t x164 = -1LL;
	volatile int64_t t39 = 9787166044LL;

	t39 = (((x161==x162)%x163)|x164);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x165 = 44U;
	static uint16_t x166 = 1U;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MIN;
	int64_t t40 = -1340667544125528521LL;

	t40 = (((x165==x166)%x167)|x168);

	if (t40 != -128LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = UINT16_MAX;
	volatile int64_t x170 = INT64_MIN;
	int32_t x171 = 507;
	uint16_t x172 = UINT16_MAX;
	int32_t t41 = 1420;

	t41 = (((x169==x170)%x171)|x172);

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x175 = 38U;
	uint32_t x176 = 41291U;
	uint32_t t42 = 438U;

	t42 = (((x173==x174)%x175)|x176);

	if (t42 != 41291U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = INT8_MIN;
	uint32_t x178 = 395785U;
	int32_t x179 = INT32_MIN;
	volatile int32_t t43 = -272142630;

	t43 = (((x177==x178)%x179)|x180);

	if (t43 != 85) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -1;
	uint8_t x182 = UINT8_MAX;
	int32_t x183 = 1;
	uint8_t x184 = 27U;
	volatile int32_t t44 = 74775;

	t44 = (((x181==x182)%x183)|x184);

	if (t44 != 27) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	int64_t x186 = -1LL;
	uint64_t x187 = UINT64_MAX;
	int32_t x188 = INT32_MIN;
	uint64_t t45 = 100480LLU;

	t45 = (((x185==x186)%x187)|x188);

	if (t45 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	uint32_t x190 = 10471438U;
	uint16_t x191 = UINT16_MAX;
	static uint8_t x192 = UINT8_MAX;
	int32_t t46 = -116179;

	t46 = (((x189==x190)%x191)|x192);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = UINT16_MAX;
	static int64_t x194 = INT64_MAX;
	int16_t x195 = 6080;
	static uint64_t x196 = 7542766856306LLU;
	uint64_t t47 = 21647478913LLU;

	t47 = (((x193==x194)%x195)|x196);

	if (t47 != 7542766856306LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -9;
	int64_t x198 = INT64_MAX;
	static int8_t x199 = -3;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t48 = -157;

	t48 = (((x197==x198)%x199)|x200);

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = 323;
	volatile uint64_t x203 = UINT64_MAX;
	volatile uint64_t t49 = 129305847LLU;

	t49 = (((x201==x202)%x203)|x204);

	if (t49 != 3266LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x206 = 1U;
	volatile int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = (((x205==x206)%x207)|x208);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 2U;
	int16_t x210 = INT16_MIN;
	int16_t x211 = -1;
	int8_t x212 = INT8_MAX;

	t51 = (((x209==x210)%x211)|x212);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	static uint64_t x214 = 189870LLU;
	static volatile int64_t x215 = INT64_MAX;
	int16_t x216 = -1;
	volatile int64_t t52 = 756519200LL;

	t52 = (((x213==x214)%x215)|x216);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MIN;
	uint16_t x222 = 15542U;
	static int32_t x223 = -1;
	volatile int32_t t53 = 87925;

	t53 = (((x221==x222)%x223)|x224);

	if (t53 != 82) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x225 = INT16_MAX;
	uint64_t x227 = 80347841932135LLU;
	int16_t x228 = INT16_MAX;
	volatile uint64_t t54 = 196844981537LLU;

	t54 = (((x225==x226)%x227)|x228);

	if (t54 != 32767LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MIN;
	int64_t x232 = -1LL;
	int64_t t55 = -64725913LL;

	t55 = (((x229==x230)%x231)|x232);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = INT64_MIN;
	int8_t x234 = -1;
	uint32_t x235 = 270U;
	int64_t x236 = 273903544155886992LL;
	volatile int64_t t56 = 2087429LL;

	t56 = (((x233==x234)%x235)|x236);

	if (t56 != 273903544155886992LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = 67335769LL;
	int32_t x238 = 209;
	int32_t x239 = INT32_MIN;
	static volatile int32_t t57 = 2336;

	t57 = (((x237==x238)%x239)|x240);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x241 = -1;
	volatile int32_t x242 = INT32_MIN;
	uint32_t x244 = 441550885U;

	t58 = (((x241==x242)%x243)|x244);

	if (t58 != 441550885U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = 383;
	uint32_t x248 = 19U;
	volatile uint32_t t59 = 932U;

	t59 = (((x245==x246)%x247)|x248);

	if (t59 != 19U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = 20267U;
	volatile int64_t x250 = 1LL;
	int64_t t60 = 185264117511LL;

	t60 = (((x249==x250)%x251)|x252);

	if (t60 != 2272LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x254 = -20;
	int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MAX;
	volatile int32_t t61 = -16727;

	t61 = (((x253==x254)%x255)|x256);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = INT64_MIN;
	volatile int16_t x258 = -1;
	uint8_t x259 = 9U;
	static uint64_t x260 = 6831013370785404LLU;
	volatile uint64_t t62 = 1LLU;

	t62 = (((x257==x258)%x259)|x260);

	if (t62 != 6831013370785404LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x262 = -1;
	int16_t x264 = INT16_MAX;
	static int32_t t63 = 122349207;

	t63 = (((x261==x262)%x263)|x264);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MIN;
	int32_t x267 = -1;
	int16_t x268 = INT16_MIN;
	volatile int32_t t64 = -15862;

	t64 = (((x265==x266)%x267)|x268);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -1LL;
	int16_t x270 = -1;
	volatile int16_t x271 = -13252;
	volatile int32_t t65 = 702;

	t65 = (((x269==x270)%x271)|x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x274 = INT8_MAX;
	static int16_t x275 = -1;
	volatile int8_t x276 = INT8_MAX;

	t66 = (((x273==x274)%x275)|x276);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x277 = 2966U;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MIN;
	volatile int32_t t67 = -7318922;

	t67 = (((x277==x278)%x279)|x280);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x282 = INT16_MIN;
	static uint64_t x284 = UINT64_MAX;

	t68 = (((x281==x282)%x283)|x284);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = -1LL;
	uint64_t x287 = 7937268LLU;
	int16_t x288 = INT16_MIN;

	t69 = (((x285==x286)%x287)|x288);

	if (t69 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x289 = 1U;
	uint64_t x290 = 4797670LLU;
	uint8_t x291 = 26U;

	t70 = (((x289==x290)%x291)|x292);

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x298 = 2035573;
	static volatile uint8_t x299 = 35U;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t71 = -2;

	t71 = (((x297==x298)%x299)|x300);

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x301 = -1;
	int16_t x302 = -1;
	volatile int32_t x303 = INT32_MAX;
	int64_t x304 = -1LL;
	int64_t t72 = -11LL;

	t72 = (((x301==x302)%x303)|x304);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MAX;
	int16_t x307 = INT16_MIN;
	static uint8_t x308 = 29U;

	t73 = (((x305==x306)%x307)|x308);

	if (t73 != 29) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -1;
	int64_t x310 = INT64_MIN;
	int8_t x311 = 35;
	uint64_t x312 = 2646287199325LLU;

	t74 = (((x309==x310)%x311)|x312);

	if (t74 != 2646287199325LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x314 = INT16_MAX;
	volatile int32_t x315 = INT32_MIN;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (((x313==x314)%x315)|x316);

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x317 = -1LL;
	static volatile uint8_t x318 = 14U;
	static int16_t x319 = -24;
	uint16_t x320 = 13U;
	volatile int32_t t76 = 98;

	t76 = (((x317==x318)%x319)|x320);

	if (t76 != 13) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = 0;
	static uint16_t x322 = UINT16_MAX;
	uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t77 = UINT64_MAX;

	t77 = (((x321==x322)%x323)|x324);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x326 = -1LL;
	int8_t x327 = INT8_MAX;
	int16_t x328 = INT16_MIN;

	t78 = (((x325==x326)%x327)|x328);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = 431812185892099LLU;
	uint16_t x330 = 363U;
	static int32_t x332 = INT32_MAX;
	int32_t t79 = INT32_MAX;

	t79 = (((x329==x330)%x331)|x332);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x334 = UINT16_MAX;
	volatile int32_t x335 = INT32_MIN;
	volatile int64_t x336 = INT64_MAX;
	volatile int64_t t80 = INT64_MAX;

	t80 = (((x333==x334)%x335)|x336);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = INT16_MAX;
	uint16_t x338 = 115U;
	uint16_t x340 = 3675U;
	volatile int32_t t81 = -31561230;

	t81 = (((x337==x338)%x339)|x340);

	if (t81 != 3675) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x342 = INT8_MAX;
	uint32_t x343 = 11994280U;
	static int16_t x344 = -1;

	t82 = (((x341==x342)%x343)|x344);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = 475;
	static int8_t x348 = INT8_MIN;
	volatile int32_t t83 = -6942;

	t83 = (((x345==x346)%x347)|x348);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 4592413LLU;
	int32_t x350 = 2556;
	uint64_t x351 = 163713LLU;
	uint64_t t84 = 10714284110LLU;

	t84 = (((x349==x350)%x351)|x352);

	if (t84 != 255LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = -1;
	int8_t x359 = -3;
	uint8_t x360 = 93U;
	int32_t t85 = 6;

	t85 = (((x357==x358)%x359)|x360);

	if (t85 != 93) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x361 = 4061378942305LLU;
	static int64_t x362 = 780680351408079LL;
	volatile int32_t x364 = 57964;
	static int32_t t86 = -6018;

	t86 = (((x361==x362)%x363)|x364);

	if (t86 != 57964) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 199249U;
	static int16_t x370 = -438;
	int8_t x372 = -24;

	t87 = (((x369==x370)%x371)|x372);

	if (t87 != -24) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x373 = INT8_MIN;
	int64_t x374 = -250334587191029LL;
	volatile uint32_t x375 = UINT32_MAX;
	int16_t x376 = 7753;
	uint32_t t88 = 1127U;

	t88 = (((x373==x374)%x375)|x376);

	if (t88 != 7753U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x377 = INT32_MIN;
	static int16_t x378 = -31;
	static volatile int64_t t89 = INT64_MAX;

	t89 = (((x377==x378)%x379)|x380);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = -13LL;
	int8_t x384 = INT8_MIN;

	t90 = (((x381==x382)%x383)|x384);

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x385 = -1;
	uint64_t x386 = 0LLU;
	uint32_t x387 = 152U;
	int32_t x388 = -483;
	volatile uint32_t t91 = 0U;

	t91 = (((x385==x386)%x387)|x388);

	if (t91 != 4294966813U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = 20676395LLU;
	int32_t x390 = INT32_MIN;
	volatile uint32_t x391 = 25023U;
	int8_t x392 = -1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (((x389==x390)%x391)|x392);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x395 = 14399;
	int32_t x396 = INT32_MIN;
	static int32_t t93 = INT32_MIN;

	t93 = (((x393==x394)%x395)|x396);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x397 = INT64_MIN;
	static uint64_t x398 = UINT64_MAX;
	volatile uint8_t x399 = 14U;
	static volatile int16_t x400 = -19;
	volatile int32_t t94 = -900708483;

	t94 = (((x397==x398)%x399)|x400);

	if (t94 != -19) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x401 = 2U;
	uint64_t x403 = 30879819794284LLU;
	volatile int16_t x404 = INT16_MAX;

	t95 = (((x401==x402)%x403)|x404);

	if (t95 != 32767LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = INT8_MAX;
	volatile int16_t x406 = INT16_MIN;
	static uint32_t x407 = 223U;
	volatile int16_t x408 = 5;

	t96 = (((x405==x406)%x407)|x408);

	if (t96 != 5U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x409 = UINT16_MAX;
	static int32_t x410 = INT32_MAX;
	int8_t x411 = INT8_MAX;
	uint8_t x412 = 0U;
	volatile int32_t t97 = -1;

	t97 = (((x409==x410)%x411)|x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = -1;
	static uint16_t x415 = UINT16_MAX;
	static int32_t t98 = -70;

	t98 = (((x413==x414)%x415)|x416);

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x417 = INT64_MIN;
	int16_t x419 = INT16_MIN;
	uint8_t x420 = 6U;
	static volatile int32_t t99 = -5;

	t99 = (((x417==x418)%x419)|x420);

	if (t99 != 6) { NG(); } else { ; }
	
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

