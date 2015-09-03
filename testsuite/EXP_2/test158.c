#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -22;
volatile int8_t x2 = INT8_MAX;
uint8_t x5 = 7U;
int8_t x7 = INT8_MIN;
uint64_t x8 = UINT64_MAX;
int16_t x10 = INT16_MAX;
static volatile uint64_t t2 = 63751913LLU;
int8_t x16 = 0;
int64_t x22 = INT64_MIN;
int64_t x27 = 16644129040522871LL;
static int16_t x28 = 1;
volatile int64_t x32 = -1LL;
volatile uint64_t t8 = 1539LLU;
int8_t x46 = 1;
int16_t x47 = INT16_MIN;
uint64_t x51 = UINT64_MAX;
static int16_t x60 = INT16_MIN;
volatile int64_t x62 = -1405LL;
int8_t x67 = -57;
uint32_t x73 = UINT32_MAX;
static uint32_t x75 = 150U;
volatile uint64_t t17 = 2LLU;
int16_t x91 = INT16_MIN;
uint8_t x100 = 9U;
int32_t x117 = -1;
int64_t x119 = -1LL;
int8_t x120 = INT8_MIN;
uint64_t x121 = 13838264178LLU;
int64_t x124 = -4922045872LL;
volatile uint64_t t27 = 631941777LLU;
uint64_t x127 = UINT64_MAX;
int16_t x139 = -1;
uint64_t x140 = UINT64_MAX;
volatile int16_t x148 = -1;
int32_t t31 = 13777;
volatile uint16_t x152 = 23U;
int8_t x160 = INT8_MIN;
static int8_t x168 = INT8_MIN;
static volatile int64_t t38 = -641867059LL;
uint64_t t40 = 4636388877LLU;
static int64_t x194 = -1LL;
int64_t t41 = -13363838LL;
int64_t x201 = 220851763681403LL;
volatile int8_t x202 = 2;
uint16_t x207 = UINT16_MAX;
volatile uint64_t x210 = 18757111979LLU;
int32_t x215 = INT32_MIN;
uint64_t x220 = UINT64_MAX;
uint64_t t47 = 5235190179LLU;
int16_t x235 = -12;
uint8_t x236 = 31U;
uint16_t x238 = 7567U;
static int32_t x245 = 9;
uint32_t x253 = UINT32_MAX;
int32_t x258 = INT32_MIN;
volatile int32_t x260 = -1;
int16_t x262 = 1;
uint8_t x265 = UINT8_MAX;
volatile int16_t x271 = 1068;
int8_t x274 = INT8_MIN;
int32_t x275 = 365592;
int8_t x282 = INT8_MIN;
uint8_t x283 = UINT8_MAX;
uint64_t t58 = 1121054654320045LLU;
static int64_t x286 = -103973LL;
static int8_t x287 = INT8_MAX;
uint8_t x297 = UINT8_MAX;
uint64_t x299 = 1647952109785639385LLU;
volatile uint32_t x307 = 14579U;
static int8_t x308 = 52;
uint64_t x311 = 254081147033008347LLU;
volatile uint64_t x315 = UINT64_MAX;
uint64_t t65 = 31903LLU;
int8_t x331 = 0;
uint32_t t67 = 4451U;
int64_t t70 = -517LL;
static int32_t x353 = INT32_MIN;
int16_t x355 = 429;
uint8_t x368 = 113U;
volatile uint64_t t77 = 1598941288355782999LLU;
int16_t x384 = INT16_MIN;
volatile int32_t x389 = -1;
int32_t t80 = 2;
uint32_t x400 = UINT32_MAX;
int64_t x404 = 1LL;
int64_t t83 = -992458326LL;
int16_t x410 = INT16_MAX;
static volatile int16_t x414 = -57;
int64_t x423 = INT64_MAX;
static int64_t t88 = -7LL;
volatile uint64_t t92 = 242346386459764LLU;
uint32_t x445 = UINT32_MAX;
volatile int32_t x450 = -594267409;
static int64_t x451 = -10685282979875LL;
volatile uint64_t t94 = 9572509LLU;
int16_t x458 = INT16_MAX;
int64_t x460 = -1LL;


void f0(void) {
	int8_t x3 = INT8_MIN;
	int64_t x4 = 32218420159009LL;
	static int64_t t0 = -571334557440346409LL;

	t0 = ((x1^(x2+x3))-x4);

	if (t0 != -32218420158988LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	volatile uint64_t t1 = 4030294139728512LLU;

	t1 = ((x5^(x6+x7))-x8);

	if (t1 != 18446744073709551481LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;

	t2 = ((x9^(x10+x11))-x12);

	if (t2 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MIN;
	uint64_t x15 = 1LLU;
	volatile uint64_t t3 = 6632533627965361239LLU;

	t3 = ((x13^(x14+x15))-x16);

	if (t3 != 2147450881LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 72327U;
	int32_t x18 = INT32_MIN;
	uint16_t x19 = UINT16_MAX;
	int32_t x20 = INT32_MIN;
	static uint32_t t4 = 9257006U;

	t4 = ((x17^(x18+x19))-x20);

	if (t4 != 124280U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint16_t x23 = 3215U;
	uint32_t x24 = 831U;
	static volatile int64_t t5 = 163508231334158645LL;

	t5 = ((x21^(x22+x23))-x24);

	if (t5 != -9223372032559812559LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	uint16_t x26 = 2U;
	int64_t t6 = -385935801LL;

	t6 = ((x25^(x26+x27))-x28);

	if (t6 != 16644129040522885LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	static volatile uint32_t x30 = UINT32_MAX;
	uint64_t x31 = 56660801751102LLU;
	volatile uint64_t t7 = 46641840187LLU;

	t7 = ((x29^(x30+x31))-x32);

	if (t7 != 9223428701951494206LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int16_t x34 = -1;
	uint16_t x35 = UINT16_MAX;
	uint64_t x36 = 29292339LLU;

	t8 = ((x33^(x34+x35))-x36);

	if (t8 != 18446744073680193742LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 357006892U;
	int32_t x38 = -1;
	int32_t x39 = INT32_MAX;
	uint64_t x40 = 38359679LLU;
	volatile uint64_t t9 = 304493362867LLU;

	t9 = ((x37^(x38+x39))-x40);

	if (t9 != 1752117075LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint8_t x42 = 1U;
	volatile uint64_t x43 = UINT64_MAX;
	uint8_t x44 = 77U;
	uint64_t t10 = 164LLU;

	t10 = ((x41^(x42+x43))-x44);

	if (t10 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int32_t x48 = INT32_MAX;
	static int64_t t11 = -1540289434837LL;

	t11 = ((x45^(x46+x47))-x48);

	if (t11 != 9223372034707259394LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 58934944LLU;
	static int16_t x50 = 433;
	uint16_t x52 = UINT16_MAX;
	static uint64_t t12 = 1665633815975LLU;

	t12 = ((x49^(x50+x51))-x52);

	if (t12 != 58869521LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 6LL;
	volatile uint64_t x58 = 2938811LLU;
	int32_t x59 = -520017;
	volatile uint64_t t13 = 3711520LLU;

	t13 = ((x57^(x58+x59))-x60);

	if (t13 != 2451564LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int64_t x63 = -1LL;
	int8_t x64 = -10;
	int64_t t14 = 7733LL;

	t14 = ((x61^(x62+x63))-x64);

	if (t14 != 2147482252LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = 0;
	int64_t x66 = 1959795871639LL;
	static int16_t x68 = 25;
	static int64_t t15 = -624LL;

	t15 = ((x65^(x66+x67))-x68);

	if (t15 != 1959795871557LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	static uint32_t x70 = 120U;
	volatile uint32_t x71 = 25042140U;
	int64_t x72 = -1LL;
	int64_t t16 = -235LL;

	t16 = ((x69^(x70+x71))-x72);

	if (t16 != 25042348LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x74 = UINT64_MAX;
	static int16_t x76 = -1;

	t17 = ((x73^(x74+x75))-x76);

	if (t17 != 4294967147LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = 59U;
	volatile int8_t x82 = INT8_MAX;
	uint32_t x83 = 1694579142U;
	int64_t x84 = 1642069267576599512LL;
	int64_t t18 = 313286233959712302LL;

	t18 = ((x81^(x82+x83))-x84);

	if (t18 != -1642069265882020186LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x85 = INT32_MIN;
	static int16_t x86 = -1;
	volatile uint64_t x87 = 4622455154186884LLU;
	int32_t x88 = 6481;
	uint64_t t19 = 1LLU;

	t19 = ((x85^(x86+x87))-x88);

	if (t19 != 18442121618201542962LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x89 = 0;
	uint16_t x90 = UINT16_MAX;
	int8_t x92 = 15;
	static volatile int32_t t20 = 2432;

	t20 = ((x89^(x90+x91))-x92);

	if (t20 != 32752) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x93 = -1;
	static int16_t x94 = 53;
	uint64_t x95 = UINT64_MAX;
	uint64_t x96 = 4769334255309321LLU;
	uint64_t t21 = 91108114908LLU;

	t21 = ((x93^(x94+x95))-x96);

	if (t21 != 18441974739454242242LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 2U;
	uint16_t x98 = UINT16_MAX;
	static int16_t x99 = INT16_MIN;
	int32_t t22 = -27;

	t22 = ((x97^(x98+x99))-x100);

	if (t22 != 32756) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MAX;
	int64_t x106 = INT64_MIN;
	static volatile int64_t x107 = INT64_MAX;
	volatile int8_t x108 = INT8_MAX;
	static int64_t t23 = -47979LL;

	t23 = ((x105^(x106+x107))-x108);

	if (t23 != -255LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MIN;
	volatile int64_t x110 = -1LL;
	uint16_t x111 = 102U;
	int64_t x112 = -31450170470LL;
	static volatile int64_t t24 = 286745190873959LL;

	t24 = ((x109^(x110+x111))-x112);

	if (t24 != -9223372005404605237LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = 1064170256;
	uint8_t x114 = UINT8_MAX;
	int8_t x115 = 0;
	int16_t x116 = INT16_MIN;
	static int32_t t25 = -5425;

	t25 = ((x113^(x114+x115))-x116);

	if (t25 != 1064203247) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x118 = -1;
	volatile int64_t t26 = 753909151531LL;

	t26 = ((x117^(x118+x119))-x120);

	if (t26 != 129LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x122 = INT64_MIN;
	int16_t x123 = 829;

	t27 = ((x121^(x122+x123))-x124);

	if (t27 != 9223372055615085055LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MAX;
	volatile int16_t x128 = 1;
	volatile uint64_t t28 = 12716922709472980LLU;

	t28 = ((x125^(x126+x127))-x128);

	if (t28 != 9223372039002259453LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x129 = -1LL;
	uint32_t x130 = UINT32_MAX;
	static int64_t x131 = 157351818044LL;
	uint64_t x132 = 249174464744LLU;
	uint64_t t29 = 178579569LLU;

	t29 = ((x129^(x130+x131))-x132);

	if (t29 != 18446743662888301532LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MAX;
	uint32_t x138 = 1009115991U;
	volatile uint64_t t30 = 74759314869LLU;

	t30 = ((x137^(x138+x139))-x140);

	if (t30 != 1138367658LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = -5;
	static int8_t x146 = INT8_MIN;
	int8_t x147 = -6;

	t31 = ((x145^(x146+x147))-x148);

	if (t31 != 130) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x149 = -1;
	static int8_t x150 = -36;
	uint32_t x151 = 65257U;
	uint32_t t32 = 17U;

	t32 = ((x149^(x150+x151))-x152);

	if (t32 != 4294902051U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -1LL;
	static uint8_t x154 = UINT8_MAX;
	uint32_t x155 = 49100U;
	static int16_t x156 = INT16_MAX;
	int64_t t33 = 0LL;

	t33 = ((x153^(x154+x155))-x156);

	if (t33 != -82123LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x157 = INT32_MIN;
	volatile int64_t x158 = -1LL;
	static int32_t x159 = INT32_MIN;
	static int64_t t34 = -3495357506127191111LL;

	t34 = ((x157^(x158+x159))-x160);

	if (t34 != 4294967423LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = INT8_MIN;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = 928996;
	int32_t t35 = 699;

	t35 = ((x165^(x166+x167))-x168);

	if (t35 != -929053) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = 0LL;
	static int8_t x170 = INT8_MAX;
	int32_t x171 = -194265;
	uint8_t x172 = 39U;
	int64_t t36 = -23LL;

	t36 = ((x169^(x170+x171))-x172);

	if (t36 != -194177LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x177 = 0U;
	static int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	uint8_t x180 = UINT8_MAX;
	volatile int32_t t37 = -1635813;

	t37 = ((x177^(x178+x179))-x180);

	if (t37 != -384) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x181 = 6447U;
	volatile int64_t x182 = -1LL;
	int64_t x183 = -10331255LL;
	int16_t x184 = -5977;

	t38 = ((x181^(x182+x183))-x184);

	if (t38 != -10331648LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MAX;
	uint16_t x186 = UINT16_MAX;
	static int8_t x187 = INT8_MAX;
	int16_t x188 = -16112;
	static int32_t t39 = 174869251;

	t39 = ((x185^(x186+x187))-x188);

	if (t39 != 2147434097) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x189 = INT32_MIN;
	static int64_t x190 = -1451171011780259LL;
	int8_t x191 = INT8_MAX;
	uint64_t x192 = UINT64_MAX;

	t40 = ((x189^(x190+x191))-x192);

	if (t40 != 1451172465844701LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = 1839;
	static int32_t x195 = INT32_MIN;
	int64_t x196 = -1LL;

	t41 = ((x193^(x194+x195))-x196);

	if (t41 != -2147485487LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x197 = INT8_MIN;
	volatile uint32_t x198 = 884603U;
	volatile int8_t x199 = -1;
	int64_t x200 = 35907488764056LL;
	volatile int64_t t42 = -227306106455984LL;

	t42 = ((x197^(x198+x199))-x200);

	if (t42 != -35903194681246LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x203 = -99;
	static int16_t x204 = INT16_MIN;
	int64_t t43 = -4970555985LL;

	t43 = ((x201^(x202+x203))-x204);

	if (t43 != -220851763648540LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x205 = 14U;
	int16_t x206 = INT16_MAX;
	static uint8_t x208 = UINT8_MAX;
	volatile int32_t t44 = 105207595;

	t44 = ((x205^(x206+x207))-x208);

	if (t44 != 98033) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x209 = 1U;
	int8_t x211 = INT8_MAX;
	static int16_t x212 = INT16_MIN;
	static volatile uint64_t t45 = 2096604138943LLU;

	t45 = ((x209^(x210+x211))-x212);

	if (t45 != 18757144875LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = 0;
	uint64_t x214 = UINT64_MAX;
	uint64_t x216 = 29147069546LLU;
	volatile uint64_t t46 = 10790038798190978LLU;

	t46 = ((x213^(x214+x215))-x216);

	if (t46 != 18446744042414998421LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = INT16_MAX;
	int32_t x218 = -1;
	static uint8_t x219 = UINT8_MAX;

	t47 = ((x217^(x218+x219))-x220);

	if (t47 != 32514LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x229 = UINT64_MAX;
	uint16_t x230 = UINT16_MAX;
	uint16_t x231 = 795U;
	static volatile int16_t x232 = -1;
	volatile uint64_t t48 = 0LLU;

	t48 = ((x229^(x230+x231))-x232);

	if (t48 != 18446744073709485286LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x233 = 11728267940164983LLU;
	uint8_t x234 = 121U;
	uint64_t t49 = 83534967633371LLU;

	t49 = ((x233^(x234+x235))-x236);

	if (t49 != 11728267940164859LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x239 = INT16_MIN;
	volatile uint8_t x240 = 1U;
	int32_t t50 = 97834148;

	t50 = ((x237^(x238+x239))-x240);

	if (t50 != -40337) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x246 = 56;
	int8_t x247 = 5;
	volatile uint16_t x248 = UINT16_MAX;
	int32_t t51 = 124893791;

	t51 = ((x245^(x246+x247))-x248);

	if (t51 != -65483) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x254 = INT16_MAX;
	static uint64_t x255 = UINT64_MAX;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t52 = 9300310792060LLU;

	t52 = ((x253^(x254+x255))-x256);

	if (t52 != 4294934530LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = -12347522LL;
	volatile uint32_t x259 = 1760597U;
	static volatile int64_t t53 = -744LL;

	t53 = ((x257^(x258+x259))-x260);

	if (t53 != -2158409172LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x261 = 320U;
	volatile uint64_t x263 = UINT64_MAX;
	static volatile int16_t x264 = INT16_MIN;
	volatile uint64_t t54 = 462LLU;

	t54 = ((x261^(x262+x263))-x264);

	if (t54 != 33088LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x266 = -1;
	int32_t x267 = -1;
	int8_t x268 = INT8_MIN;
	volatile int32_t t55 = -41672;

	t55 = ((x265^(x266+x267))-x268);

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x269 = 0U;
	int32_t x270 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	int64_t t56 = -182633634220347999LL;

	t56 = ((x269^(x270+x271))-x272);

	if (t56 != 9223372034707293228LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x273 = 86228946530LLU;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t57 = 15452151337LLU;

	t57 = ((x273^(x274+x275))-x276);

	if (t57 != 86228655738LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x281 = 0U;
	uint64_t x284 = UINT64_MAX;

	t58 = ((x281^(x282+x283))-x284);

	if (t58 != 128LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x285 = 2464LLU;
	int16_t x288 = 114;
	volatile uint64_t t59 = 6974892941656313LLU;

	t59 = ((x285^(x286+x287))-x288);

	if (t59 != 18446744073709446024LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -1;
	int64_t x292 = INT64_MAX;
	volatile int64_t t60 = -4697462671LL;

	t60 = ((x289^(x290+x291))-x292);

	if (t60 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x293 = 25;
	int32_t x294 = -1;
	volatile uint64_t x295 = UINT64_MAX;
	volatile int16_t x296 = INT16_MAX;
	static volatile uint64_t t61 = 2009158LLU;

	t61 = ((x293^(x294+x295))-x296);

	if (t61 != 18446744073709518824LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x298 = 2U;
	volatile uint64_t x300 = UINT64_MAX;
	static volatile uint64_t t62 = 1616LLU;

	t62 = ((x297^(x298+x299))-x300);

	if (t62 != 1647952109785639205LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x305 = INT64_MAX;
	static int16_t x306 = -59;
	int64_t t63 = 2755777214335LL;

	t63 = ((x305^(x306+x307))-x308);

	if (t63 != 9223372036854761235LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x309 = UINT8_MAX;
	int8_t x310 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	uint64_t t64 = 136724677436LLU;

	t64 = ((x309^(x310+x311))-x312);

	if (t64 != 9477453183887784100LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x313 = 147LLU;
	int64_t x314 = INT64_MIN;
	uint32_t x316 = 332689105U;

	t65 = ((x313^(x314+x315))-x316);

	if (t65 != 9223372036522086555LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x317 = 49LLU;
	int64_t x318 = INT64_MIN;
	static int16_t x319 = 9;
	int16_t x320 = INT16_MIN;
	uint64_t t66 = 24193356LLU;

	t66 = ((x317^(x318+x319))-x320);

	if (t66 != 9223372036854808632LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x329 = -9;
	int32_t x330 = 52351110;
	uint32_t x332 = 191U;

	t67 = ((x329^(x330+x331))-x332);

	if (t67 != 4242615986U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MIN;
	static volatile int32_t x336 = 41;
	int32_t t68 = -10;

	t68 = ((x333^(x334+x335))-x336);

	if (t68 != 2147418071) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x337 = 220372895LLU;
	uint16_t x338 = 14U;
	uint16_t x339 = 3970U;
	volatile uint64_t x340 = 26LLU;
	volatile uint64_t t69 = 2017LLU;

	t69 = ((x337^(x338+x339))-x340);

	if (t69 != 220368885LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x341 = INT64_MAX;
	static int64_t x342 = -36LL;
	int32_t x343 = -1;
	static int16_t x344 = INT16_MIN;

	t70 = ((x341^(x342+x343))-x344);

	if (t70 != -9223372036854743004LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = -1LL;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = 428561U;
	volatile int64_t t71 = 6021755218LL;

	t71 = ((x345^(x346+x347))-x348);

	if (t71 != -363026LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x354 = INT8_MAX;
	uint32_t x356 = 5905622U;
	static uint32_t t72 = 15430U;

	t72 = ((x353^(x354+x355))-x356);

	if (t72 != 2141578582U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	uint64_t x359 = 55310LLU;
	int8_t x360 = INT8_MAX;
	static uint64_t t73 = 2319242968499LLU;

	t73 = ((x357^(x358+x359))-x360);

	if (t73 != 18446744073709496078LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x365 = 56U;
	int64_t x366 = -1LL;
	static int64_t x367 = -8866LL;
	int64_t t74 = -98LL;

	t74 = ((x365^(x366+x367))-x368);

	if (t74 != -8972LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x369 = -1;
	static int16_t x370 = -1;
	int64_t x371 = -1LL;
	static int32_t x372 = 0;
	volatile int64_t t75 = -1848191149369LL;

	t75 = ((x369^(x370+x371))-x372);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x373 = 7LL;
	int8_t x374 = INT8_MIN;
	int16_t x375 = -3220;
	int32_t x376 = -1;
	volatile int64_t t76 = 33665487526LL;

	t76 = ((x373^(x374+x375))-x376);

	if (t76 != -3348LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x377 = 7U;
	uint16_t x378 = 23U;
	static int8_t x379 = INT8_MAX;
	uint64_t x380 = 527507993LLU;

	t77 = ((x377^(x378+x379))-x380);

	if (t77 != 18446744073182043768LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x381 = 3U;
	static volatile int32_t x382 = -538034140;
	int8_t x383 = INT8_MIN;
	int32_t t78 = -24068525;

	t78 = ((x381^(x382+x383))-x384);

	if (t78 != -538001497) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x385 = -56;
	int16_t x386 = INT16_MIN;
	static uint16_t x387 = 4U;
	uint64_t x388 = 725282077953872LLU;
	volatile uint64_t t79 = 33527LLU;

	t79 = ((x385^(x386+x387))-x388);

	if (t79 != 18446018791631630460LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x390 = -1;
	static int32_t x391 = -126765;
	static int16_t x392 = -131;

	t80 = ((x389^(x390+x391))-x392);

	if (t80 != 126896) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x393 = -83968396LL;
	int16_t x394 = INT16_MIN;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = -1;
	static int64_t t81 = 15084575703LL;

	t81 = ((x393^(x394+x395))-x396);

	if (t81 != -83967604LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x397 = 12;
	static int16_t x398 = INT16_MIN;
	volatile int64_t x399 = INT64_MAX;
	static int64_t t82 = -1597471877128814LL;

	t82 = ((x397^(x398+x399))-x400);

	if (t82 != 9223372032559775732LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x401 = 18U;
	int8_t x402 = INT8_MAX;
	int8_t x403 = 1;

	t83 = ((x401^(x402+x403))-x404);

	if (t83 != 145LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x409 = INT16_MIN;
	int16_t x411 = INT16_MAX;
	static volatile int8_t x412 = -1;
	int32_t t84 = -146;

	t84 = ((x409^(x410+x411))-x412);

	if (t84 != -32769) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = -1;
	int16_t x415 = -21;
	uint8_t x416 = 0U;
	static int32_t t85 = 243;

	t85 = ((x413^(x414+x415))-x416);

	if (t85 != 77) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = INT16_MIN;
	int64_t x418 = -326595743555194394LL;
	int32_t x419 = INT32_MIN;
	int8_t x420 = 32;
	static int64_t t86 = -9439709381LL;

	t86 = ((x417^(x418+x419))-x420);

	if (t86 != 326595745702703558LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x421 = UINT16_MAX;
	uint64_t x422 = 2222LLU;
	static volatile int16_t x424 = INT16_MIN;
	volatile uint64_t t87 = 327771670LLU;

	t87 = ((x421^(x422+x423))-x424);

	if (t87 != 9223372036854871890LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = 1722;
	int64_t x426 = 83209096295475545LL;
	int32_t x427 = -152105188;
	static int16_t x428 = 1;

	t88 = ((x425^(x426+x427))-x428);

	if (t88 != 83209096143371982LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x429 = 1917510887LLU;
	int64_t x430 = 409557215252785LL;
	uint32_t x431 = 170286U;
	volatile int8_t x432 = INT8_MAX;
	uint64_t t89 = 7184361LLU;

	t89 = ((x429^(x430+x431))-x432);

	if (t89 != 409555366170169LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x433 = 27;
	int8_t x434 = INT8_MIN;
	static volatile int64_t x435 = -1548346047881LL;
	uint64_t x436 = UINT64_MAX;
	static volatile uint64_t t90 = 4037105967350LLU;

	t90 = ((x433^(x434+x435))-x436);

	if (t90 != 18446742525363503597LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x437 = -1;
	int32_t x438 = INT32_MAX;
	int32_t x439 = -258451522;
	int8_t x440 = 0;
	int32_t t91 = 1;

	t91 = ((x437^(x438+x439))-x440);

	if (t91 != -1889032126) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x441 = INT64_MIN;
	int32_t x442 = INT32_MAX;
	uint64_t x443 = UINT64_MAX;
	volatile int16_t x444 = INT16_MIN;

	t92 = ((x441^(x442+x443))-x444);

	if (t92 != 9223372039002292222LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x446 = -1;
	int8_t x447 = -1;
	static int64_t x448 = INT64_MAX;
	int64_t t93 = 5432922LL;

	t93 = ((x445^(x446+x447))-x448);

	if (t93 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = INT8_MIN;
	uint64_t x452 = 12577256LLU;

	t94 = ((x449^(x450+x451))-x452);

	if (t94 != 10685864670052LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x453 = UINT16_MAX;
	static int16_t x454 = INT16_MIN;
	static uint8_t x455 = 36U;
	int64_t x456 = 2071070843LL;
	int64_t t95 = 87683302LL;

	t95 = ((x453^(x454+x455))-x456);

	if (t95 != -2071103648LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = -1;
	uint8_t x459 = 45U;
	int64_t t96 = 742304506158LL;

	t96 = ((x457^(x458+x459))-x460);

	if (t96 != -32812LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x461 = 20U;
	volatile uint32_t x462 = 130255U;
	int8_t x463 = INT8_MIN;
	uint16_t x464 = 9U;
	volatile uint32_t t97 = 24U;

	t97 = ((x461^(x462+x463))-x464);

	if (t97 != 130130U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x469 = 464;
	int16_t x470 = INT16_MAX;
	static volatile int32_t x471 = -671;
	volatile int8_t x472 = INT8_MIN;
	volatile int32_t t98 = -7542;

	t98 = ((x469^(x470+x471))-x472);

	if (t98 != 32048) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x477 = UINT64_MAX;
	int32_t x478 = -72597853;
	volatile uint64_t x479 = 20280LLU;
	int64_t x480 = -1890557290LL;
	volatile uint64_t t99 = 6764LLU;

	t99 = ((x477^(x478+x479))-x480);

	if (t99 != 1963134862LLU) { NG(); } else { ; }
	
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

